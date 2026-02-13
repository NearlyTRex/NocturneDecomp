// Name: core_script.cpp_compareActors_FUN_005675a0
// Address: 005675a0
// Address Range: [[005675a0, 00567623]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_compareActors_FUN_005675a0(CDemonActor *a,CDemonActor *b)

#include "nocturne.h"

int __cdecl core_script_cpp_compareActors_FUN_005675a0(CDemonActor *a,CDemonActor *b)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar4 = stricmp(a->actor_name,b->actor_name);
  if (iVar4 == 0) {
    if (a->unk6 < b->unk6) {
      return -1;
    }
    if (a->unk6 <= b->unk6) {
      fVar1 = a->unk7;
      if ((uint)fVar1 < (uint)b->unk7) {
        return -1;
      }
      if (fVar1 == b->unk7) {
        if (fVar1 == 0.0) {
          iVar4 = (b->scale).y;
          iVar2 = (a->scale).y;
          bVar6 = SBORROW4(iVar2,iVar4);
          iVar3 = iVar2 - iVar4;
          bVar5 = iVar2 == iVar4;
          if (iVar2 < iVar4) {
            return -1;
          }
        }
        else {
          iVar4 = (b->scale).x;
          iVar2 = (a->scale).x;
          bVar6 = SBORROW4(iVar2,iVar4);
          iVar3 = iVar2 - iVar4;
          bVar5 = iVar2 == iVar4;
          if (iVar2 < iVar4) {
            return -1;
          }
        }
        if (bVar5 || bVar6 != iVar3 < 0) {
          return 0;
        }
      }
    }
    iVar4 = 1;
  }
  return iVar4;
}
