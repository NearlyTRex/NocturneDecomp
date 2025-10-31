// Name: shape_design.c_findTextureByFilename_FUN_0046dfc0
// Address: 0046dfc0
// Address Range: [[0046dfc0, 0046e024]]
// Convention: __cdecl
// Signature: int shape_design.c_findTextureByFilename_FUN_0046dfc0(char * filename)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_packTexturesToAtlases_FUN_0047a3e0 (0047a3e0) at 0047a634 [UNCONDITIONAL_CALL]
//   shape_design.c_tileTextureMaps_FUN_0046a180 (0046a180) at 0046a4fb [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051bac0 (0051bac0) at 0051bb53 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ead0 (0051ead0) at 0051ec77 [UNCONDITIONAL_CALL]
// Globals:
//   int g_TextureProcessedCount
//   STextureAtlasEntry[250] g_TextureAtlasEntries
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl shape_design_c_findTextureByFilename_FUN_0046dfc0(char *filename)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (g_TextureProcessedCount <= local_14) {
      return -1;
    }
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                      (g_TextureAtlasEntries[local_14].original_filename,filename);
    if (iVar1 == 0) break;
    local_14 = local_14 + 1;
  }
  return local_14;
}


// Assembly code:
// 0046dfc0: PUSH EBX
//   Label: shape_design.c_findTextureByFilename_FUN_0046dfc0
// 0046dfc1: PUSH ESI
// 0046dfc2: PUSH EDI
// 0046dfc3: PUSH EBP
// 0046dfc4: MOV EBP,ESP
// 0046dfc6: SUB ESP,0x8
// 0046dfcc: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046dfd3: JMP 0x0046dfdb
//   XREF to: 0046dfdb (UNCONDITIONAL_JUMP)
// 0046dfd5: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046dfd5
//   XREF to: Stack[-0x14] (READ)
// 0046dfd8: INC dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046dfdb: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046dfdb
//   XREF to: Stack[-0x14] (READ)
// 0046dfde: CMP EAX,dword ptr [0x01e8d260]
//   XREF to: 01e8d260 (READ)
// 0046dfe4: JGE 0x0046e014
//   XREF to: 0046e014 (CONDITIONAL_JUMP)
// 0046dfe6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046dfe9: PUSH EAX
// 0046dfea: IMUL EAX,dword ptr [EBP + -0x4],0x250
//   XREF to: Stack[-0x14] (READ)
// 0046dff1: MOV EDX,0x1e8d264
//   XREF to: 01e8d264 (DATA)
// 0046dff6: ADD EAX,EDX
// 0046dff8: ADD EAX,0x100
// 0046dffd: PUSH EAX
// 0046dffe: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0046e003: ADD ESP,0x8
// 0046e006: TEST EAX,EAX
// 0046e008: JNZ 0x0046e012
//   XREF to: 0046e012 (CONDITIONAL_JUMP)
// 0046e00a: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046e00d: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0046e010: JMP 0x0046e01b
//   XREF to: 0046e01b (UNCONDITIONAL_JUMP)
// 0046e012: JMP 0x0046dfd5
//   Label: LAB_0046e012
//   XREF to: 0046dfd5 (UNCONDITIONAL_JUMP)
// 0046e014: MOV dword ptr [EBP + -0x8],0xffffffff
//   Label: LAB_0046e014
//   XREF to: Stack[-0x18] (WRITE)
// 0046e01b: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0046e01b
//   XREF to: Stack[-0x18] (READ)
// 0046e01e: MOV ESP,EBP
// 0046e020: POP EBP
// 0046e021: POP EDI
// 0046e022: POP ESI
// 0046e023: POP EBX
// 0046e024: RET
