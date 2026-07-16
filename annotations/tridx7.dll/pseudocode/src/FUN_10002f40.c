// Name: FUN_10002f40
// Address: 10002f40
// Address Range: [[10002f40, 10002f5b]]
// Convention: unknown
// Signature: bool FUN_10002f40(void)

#include "nocturne.h"

bool FUN_10002f40(void)

{
  HRESULT HVar1;
  
  HVar1 = (*g_DirectDraw4->vtable->QueryInterface)
                    ((IUnknown *)g_DirectDraw4,(GUID *)&DAT_10012148,(void **)&DAT_100141dc);
  return HVar1 == 0;
}
