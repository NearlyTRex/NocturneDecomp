// Name: APIDLLselectCard
// Address: 100052c0
// Address Range: [[100052c0, 100052dd]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLselectCard(int card_index)

#include "nocturne.h"

int __cdecl APIDLLselectCard(int card_index)

{
  int iVar1;
  
                    /* 0x52c0  26  APIDLLselectCard */
  g_SelectedCardIndex = card_index;
  iVar1 = APIDLLinit(g_WindowHandle,&g_ExternalRendererBridge);
  return iVar1;
}
