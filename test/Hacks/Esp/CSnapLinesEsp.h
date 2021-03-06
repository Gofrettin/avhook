#include "CBaseEsp.h"

namespace Esp
{
	class CSnapLinesEsp : public CBaseEsp
	{
	public:
		CSnapLinesEsp(Settings::SnapLinesSettings* pSettings) : CBaseEsp(pSettings) {};
	private:
		virtual void InternalRenderAt(CBaseEntity* pEntity);
	};
}