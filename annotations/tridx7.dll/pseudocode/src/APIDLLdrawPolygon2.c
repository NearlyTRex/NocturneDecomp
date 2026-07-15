// Name: APIDLLdrawPolygon2
// Address: 100043c0
// Address Range: [[100043c0, 100044ac]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLdrawPolygon2(SRenderVertex **vertex_array,int vertex_count,int render_flags)

#include "nocturne.h"

int __cdecl APIDLLdrawPolygon2(SRenderVertex **vertex_array,int vertex_count,int render_flags)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  SRenderVertex **ppSVar5;
  int iVar6;
  int iVar7;
  
                    /* 0x43c0  14  APIDLLdrawPolygon2 */
  if (DAT_10014204 == 0) {
    return 0;
  }
  FUN_10003f10(render_flags);
  iVar6 = ((*vertex_array)->projected_vertex).transformed_z;
  if (1 < vertex_count) {
    iVar4 = vertex_count + -1;
    ppSVar5 = vertex_array;
    do {
      ppSVar5 = ppSVar5 + 1;
      iVar7 = ((*ppSVar5)->projected_vertex).transformed_z;
      if (iVar6 < iVar7) {
        iVar6 = iVar7;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = 0;
  if (0 < vertex_count) {
    do {
      iVar7 = iVar4 + 1;
      FUN_100044b0(vertex_array[iVar4],&DAT_1013b8d8 + (DAT_10014228 + iVar4) * 0x20,render_flags,
                   iVar6);
      iVar4 = iVar7;
    } while (iVar7 < vertex_count);
  }
  iVar4 = 0;
  iVar6 = vertex_count + -2;
  if (0 < iVar6) {
    sVar1 = (short)DAT_10014228;
    iVar7 = DAT_1001422c * 2;
    DAT_1001422c = DAT_1001422c + iVar6 * 3;
    psVar3 = (short *)(&DAT_10238910 + iVar7);
    do {
      *psVar3 = sVar1;
      sVar2 = (short)iVar4;
      psVar3[1] = sVar1 + 1 + sVar2;
      iVar4 = iVar4 + 1;
      psVar3[2] = sVar1 + 2 + sVar2;
      psVar3 = psVar3 + 3;
    } while (iVar4 < iVar6);
  }
  DAT_10014228 = DAT_10014228 + vertex_count;
  if (0x3e76 < DAT_10014228) {
    FUN_100047b0();
  }
  if (0x3e76 < DAT_1001422c) {
    FUN_100047b0();
  }
  return 1;
}
