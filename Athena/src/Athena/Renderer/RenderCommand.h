#pragma once

#include "RendererAPI.h"


namespace Athena
{
	class RenderCommand
	{
	public:
		static inline void Init() 
		{
			s_RendererAPI->Init();
		}

		static inline void Clear(const Color& color) 
		{ 
			s_RendererAPI->Clear(color); 
		}

		static inline void DrawIndexed(const Ref<VertexArray>& vertexArray)
		{
			s_RendererAPI->DrawIndexed(vertexArray);
		}

	private:
		static RendererAPI* s_RendererAPI;
	};
}
