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
  DAT_10014210 = card_index;
  iVar1 = APIDLLinit(DAT_10138fb8,(CExternalRendererBridge *)&DAT_102268b8);
  return iVar1;
}
