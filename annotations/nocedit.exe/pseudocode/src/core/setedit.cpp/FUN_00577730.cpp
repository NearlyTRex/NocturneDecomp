// Name: core_setedit.cpp_FUN_00577730
// Address: 00577730
// Address Range: [[00577730, 00577ae1]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00577730()
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
//   int g_MouseX
//   int g_MouseY
//   void*[1024] g_ScreenBufferArray
//   undefined4 g_ScreenBufferArray[1]
//   uchar[32768] g_ColorCubeLookup
//   int g_RedBitPosition
//   int g_RedScaleFactor
//   int g_GreenBitPosition
//   int g_GreenScaleFactor
//   int g_BlueBitPosition
//   int g_BlueScaleFactor
//   undefined4 DAT_03365cc0
//   undefined4 DAT_03365cc4
//   undefined4 DAT_03365dc0
// Function calls:
//   engine_2d.c_drawRect_FUN_00403120

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_00577730(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

undefined4 core_setedit_cpp_FUN_00577730(void)

{
  int iVar1;
  uchar *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int local_64;
  int local_58;
  int local_54;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_14;
  
  local_58 = in_stack_00000004;
  local_54 = in_stack_0000000c;
  iVar5 = in_stack_0000000c + in_stack_00000008 * 0x40;
  if (in_stack_0000000c < iVar5) {
    do {
      if ((((-1 < local_54) && (-1 < in_stack_00000010)) && (local_54 + 0x40 <= g_WindowWidth)) &&
         (in_stack_00000010 + 0x30 <= g_WindowHeight)) {
        local_24 = local_58 * 0x3000;
        iVar1 = local_24 + 0x3000;
        local_64 = in_stack_00000010 * 4;
        local_34 = local_24 + 0x100;
        local_38 = local_64;
        local_30 = local_34;
        local_1c = local_24;
        if (g_BitsPerPixel == 8) {
          do {
            puVar2 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_38) + local_54);
            iVar6 = local_1c;
            do {
              puVar2 = puVar2 + 1;
              uVar7 = *(uint *)(&DAT_03365cc0 + iVar6);
              iVar6 = iVar6 + 4;
              *puVar2 = g_ColorCubeLookup
                        [((uVar7 & 0xff) >> 3) * 0x400 + ((uVar7 >> 8 & 0xff) >> 3) * 0x20 +
                         ((uVar7 >> 0x10 & 0xff) >> 3)];
            } while (iVar6 != local_30);
            local_38 = local_38 + 4;
            local_1c = local_1c + 0x100;
            local_30 = local_30 + 0x100;
          } while (local_1c != iVar1);
        }
        else if (g_BitsPerPixel == 0x10) {
          local_2c = local_34;
          do {
            local_14 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_64) + local_54 * 2);
            iVar6 = local_24;
            do {
              local_14 = local_14 + 1;
              uVar7 = *(uint *)(&DAT_03365cc0 + iVar6);
              *local_14 = (ushort)((uVar7 >> 0x10 & 0xff) / (uint)g_BlueScaleFactor <<
                                  ((byte)g_BlueBitPosition & 0x1f)) |
                          (ushort)((uVar7 & 0xff) / (uint)g_RedScaleFactor <<
                                  ((byte)g_RedBitPosition & 0x1f)) |
                          (ushort)((uVar7 >> 8 & 0xff) / (uint)g_GreenScaleFactor <<
                                  ((byte)g_GreenBitPosition & 0x1f));
              iVar6 = iVar6 + 4;
            } while (iVar6 != local_2c);
            local_64 = local_64 + 4;
            local_24 = local_24 + 0x100;
            local_2c = local_2c + 0x100;
          } while (local_24 != iVar1);
        }
        else if (g_BitsPerPixel == 0x20) {
          local_28 = local_64;
          local_20 = local_24;
          do {
            puVar3 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_28) + local_54 * 4);
            iVar6 = local_20;
            do {
              puVar3 = puVar3 + 1;
              uVar7 = *(uint *)(&DAT_03365cc0 + iVar6);
              uVar8 = uVar7 >> 8 & 0xff;
              uVar4 = uVar7 >> 0x10 & 0xff;
              if (g_BitsPerPixel == 0x20) {
                uVar7 = (uVar7 & 0xff) << ((byte)g_RedBitPosition & 0x1f) |
                        uVar8 << ((byte)g_GreenBitPosition & 0x1f);
                uVar4 = uVar4 << ((byte)g_BlueBitPosition & 0x1f);
              }
              else {
                uVar7 = (uVar7 & 0xff) << 0x10 | uVar8 << 8;
              }
              iVar6 = iVar6 + 4;
              *puVar3 = uVar7 | uVar4;
            } while (iVar6 != local_34);
            local_28 = local_28 + 4;
            local_20 = local_20 + 0x100;
            local_34 = local_34 + 0x100;
          } while (local_20 != iVar1);
        }
      }
      local_58 = local_58 + 1;
      local_54 = local_54 + 0x40;
    } while (local_54 < iVar5);
  }
  iVar5 = in_stack_00000008 * 0x40 + in_stack_0000000c;
  engine_2d_c_drawRect_FUN_00403120
            (in_stack_0000000c,in_stack_00000010,iVar5 + -1,in_stack_00000010 + 0x2f);
  if (((in_stack_0000000c <= g_MouseX) && (g_MouseX < iVar5)) &&
     ((in_stack_00000010 <= g_MouseY && (g_MouseY < local_58)))) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00577730: PUSH EBX
//   Label: core_setedit.cpp_FUN_00577730
// 00577731: PUSH ESI
// 00577732: PUSH EDI
// 00577733: PUSH EBP
// 00577734: SUB ESP,0x58
// 00577737: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x10] (READ)
// 0057773b: ADD EAX,0x30
// 0057773e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 00577742: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 00577746: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0057774a: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 0057774e: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00577752: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 00577756: MOV EDX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 0057775a: SHL EAX,0x6
// 0057775d: ADD EDX,EAX
// 0057775f: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 00577763: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x60] (WRITE)
// 00577767: CMP EAX,EDX
// 00577769: JGE 0x005777a8
//   XREF to: 005777a8 (CONDITIONAL_JUMP)
// 0057776b: MOV EDI,dword ptr [ESP + 0x14]
//   Label: LAB_0057776b
//   XREF to: Stack[-0x54] (READ)
// 0057776f: TEST EDI,EDI
// 00577771: JL 0x0057778c
//   XREF to: 0057778c (CONDITIONAL_JUMP)
// 00577773: MOV EBP,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x10] (READ)
// 00577777: TEST EBP,EBP
// 00577779: JL 0x0057778c
//   XREF to: 0057778c (CONDITIONAL_JUMP)
// 0057777b: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00577781: LEA EAX,[EDI + 0x40]
// 00577784: CMP EAX,EDX
// 00577786: JLE 0x0057780d
//   XREF to: 0057780d (CONDITIONAL_JUMP)
// 0057778c: MOV ECX,dword ptr [ESP + 0x10]
//   Label: LAB_0057778c
//   XREF to: Stack[-0x58] (READ)
// 00577790: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 00577794: MOV ESI,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 00577798: INC ECX
// 00577799: ADD EBX,0x40
// 0057779c: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 005777a0: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x54] (WRITE)
// 005777a4: CMP EBX,ESI
// 005777a6: JL 0x0057776b
//   XREF to: 0057776b (CONDITIONAL_JUMP)
// 005777a8: MOV EBX,dword ptr [ESP + 0x70]
//   Label: LAB_005777a8
//   XREF to: Stack[0x8] (READ)
// 005777ac: MOV EDI,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 005777b0: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x10] (READ)
// 005777b4: SHL EBX,0x6
// 005777b7: ADD EAX,0x2f
// 005777ba: ADD EBX,EDI
// 005777bc: PUSH EAX
// 005777bd: LEA EAX,[EBX + -0x1]
// 005777c0: PUSH EAX
// 005777c1: MOV EBP,dword ptr [ESP + 0x80]
//   XREF to: Stack[0x10] (READ)
// 005777c8: PUSH EBP
// 005777c9: PUSH EDI
// 005777ca: CALL engine_2d.c_drawRect_FUN_00403120
//   XREF to: 00403120 (UNCONDITIONAL_CALL)
// 005777cf: MOV EAX,[0x02cf6a8c]
//   XREF to: 02cf6a8c (READ)
// 005777d4: ADD ESP,0x10
// 005777d7: CMP EAX,EDI
// 005777d9: JL 0x00577ad6
//   XREF to: 00577ad6 (CONDITIONAL_JUMP)
// 005777df: CMP EBX,EAX
// 005777e1: JLE 0x00577ad6
//   XREF to: 00577ad6 (CONDITIONAL_JUMP)
// 005777e7: MOV EAX,[0x02cf6a90]
//   XREF to: 02cf6a90 (READ)
// 005777ec: CMP EAX,EBP
// 005777ee: JL 0x00577ad6
//   XREF to: 00577ad6 (CONDITIONAL_JUMP)
// 005777f4: CMP EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x5c] (READ)
// 005777f8: JGE 0x00577ad6
//   XREF to: 00577ad6 (CONDITIONAL_JUMP)
// 005777fe: MOV EBX,0x1
// 00577803: MOV EAX,EBX
// 00577805: ADD ESP,0x58
// 00577808: POP EBP
// 00577809: POP EDI
// 0057780a: POP ESI
// 0057780b: POP EBX
// 0057780c: RET
// 0057780d: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0057780d
//   XREF to: Stack[-0x5c] (READ)
// 00577811: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00577817: JG 0x0057778c
//   XREF to: 0057778c (CONDITIONAL_JUMP)
// 0057781d: IMUL EAX,dword ptr [ESP + 0x10],0x3000
//   XREF to: Stack[-0x58] (READ)
// 00577825: MOV ESI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 0057782b: LEA EDX,[EAX + 0x3000]
// 00577831: LEA EBX,[EBP*0x4 + 0x0]
// 00577838: LEA ECX,[EAX + 0x100]
// 0057783e: CMP ESI,0x8
// 00577841: JNZ 0x005778f8
//   XREF to: 005778f8 (CONDITIONAL_JUMP)
// 00577847: MOV dword ptr [ESP + 0x38],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0057784b: MOV dword ptr [ESP + 0x30],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 0057784f: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00577853: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00577857: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 0057785b: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0057785b
//   XREF to: Stack[-0x38] (READ)
// 0057785f: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00577863: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00577869: MOV EBX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 0057786d: ADD EAX,EBP
// 0057786f: MOV EBP,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 00577873: LEA EDX,[EAX + 0x1]
// 00577876: MOV EAX,dword ptr [EBX + 0x3365cc0]
//   Label: LAB_00577876
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
//   XREF to: 03365dc0 (DATA)
// 0057787c: MOV ECX,EAX
// 0057787e: MOV EDI,EAX
// 00577880: MOV ESI,EAX
// 00577882: AND ECX,0xff
// 00577888: SHR EDI,0x8
// 0057788b: SHR ESI,0x10
// 0057788e: AND EDI,0xff
// 00577894: MOV EAX,ECX
// 00577896: MOV ECX,EDI
// 00577898: SHR EAX,0x3
// 0057789b: SHR ECX,0x3
// 0057789e: SHL EAX,0xa
// 005778a1: SHL ECX,0x5
// 005778a4: AND ESI,0xff
// 005778aa: ADD EAX,ECX
// 005778ac: SHR ESI,0x3
// 005778af: INC EDX
// 005778b0: MOV AL,byte ptr [ESI + EAX*0x1 + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 005778b7: ADD EBX,0x4
// 005778ba: MOV byte ptr [EDX + -0x1],AL
// 005778bd: CMP EBX,EBP
// 005778bf: JNZ 0x00577876
//   XREF to: 00577876 (CONDITIONAL_JUMP)
// 005778c1: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x38] (READ)
// 005778c5: MOV ECX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 005778c9: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 005778cd: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 005778d1: ADD EDX,0x4
// 005778d4: ADD ECX,0x100
// 005778da: ADD EAX,0x100
// 005778df: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 005778e3: MOV dword ptr [ESP + 0x4c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005778e7: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005778eb: CMP ECX,EBX
// 005778ed: JZ 0x0057778c
//   XREF to: 0057778c (CONDITIONAL_JUMP)
// 005778f3: JMP 0x0057785b
//   XREF to: 0057785b (UNCONDITIONAL_JUMP)
// 005778f8: CMP ESI,0x10
//   Label: LAB_005778f8
// 005778fb: JNZ 0x005779fc
//   XREF to: 005779fc (CONDITIONAL_JUMP)
// 00577901: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00577905: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x64] (WRITE)
// 00577909: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0057790d: LEA ESI,[EDI + EDI*0x1]
// 00577910: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x4c] (WRITE)
// 00577914: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 00577918: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00577918
//   XREF to: Stack[-0x64] (READ)
// 0057791c: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00577920: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00577926: ADD EAX,EDX
// 00577928: ADD EAX,0x2
// 0057792b: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0057792f: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 00577933: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 00577937: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0057793b: MOV EDX,dword ptr [EBX + 0x3365cc0]
//   Label: LAB_0057793b
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
//   XREF to: 03365dc0 (DATA)
// 00577941: MOV ESI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 00577947: MOV EAX,EDX
// 00577949: MOV ECX,EDX
// 0057794b: MOV EBP,EDX
// 0057794d: AND EAX,0xff
// 00577952: XOR EDX,EDX
// 00577954: DIV ESI
// 00577956: SHR ECX,0x8
// 00577959: MOV EDI,dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 0057795f: AND ECX,0xff
// 00577965: MOV ESI,EAX
// 00577967: XOR EDX,EDX
// 00577969: MOV EAX,ECX
// 0057796b: DIV EDI
// 0057796d: SHR EBP,0x10
// 00577970: AND EBP,0xff
// 00577976: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x68] (DATA)
// 00577979: MOV EDI,EAX
// 0057797b: XOR EDX,EDX
// 0057797d: MOV EAX,EBP
// 0057797f: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 00577985: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 0057798b: SHL ESI,CL
// 0057798d: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00577993: SHL EDI,CL
// 00577995: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x68] (DATA)
// 00577998: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0057799e: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 005779a1: OR ESI,EDI
// 005779a3: SHL EAX,CL
// 005779a5: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 005779a9: OR EAX,ESI
// 005779ab: MOV word ptr [EDX],AX
// 005779ae: LEA EAX,[EDX + 0x2]
// 005779b1: ADD EBX,0x4
// 005779b4: MOV EDX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005779b8: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005779bc: CMP EBX,EDX
// 005779be: JNZ 0x0057793b
//   XREF to: 0057793b (CONDITIONAL_JUMP)
// 005779c4: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 005779c8: MOV ESI,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 005779cc: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 005779d0: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 005779d4: ADD EBX,0x4
// 005779d7: ADD ESI,0x100
// 005779dd: ADD ECX,0x100
// 005779e3: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x64] (WRITE)
// 005779e7: MOV dword ptr [ESP + 0x44],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005779eb: MOV dword ptr [ESP + 0x3c],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 005779ef: CMP ESI,EDI
// 005779f1: JZ 0x0057778c
//   XREF to: 0057778c (CONDITIONAL_JUMP)
// 005779f7: JMP 0x00577918
//   XREF to: 00577918 (UNCONDITIONAL_JUMP)
// 005779fc: CMP ESI,0x20
//   Label: LAB_005779fc
// 005779ff: JNZ 0x0057778c
//   XREF to: 0057778c (CONDITIONAL_JUMP)
// 00577a05: LEA ESI,[EDI*0x4 + 0x0]
// 00577a0c: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00577a10: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x28] (WRITE)
// 00577a14: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00577a18: MOV dword ptr [ESP + 0x20],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 00577a1c: MOV dword ptr [ESP + 0x18],ESI
//   XREF to: Stack[-0x50] (WRITE)
// 00577a20: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_00577a20
//   XREF to: Stack[-0x28] (READ)
// 00577a24: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 00577a28: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00577a2e: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 00577a32: ADD EAX,EDX
// 00577a34: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 00577a38: LEA EDX,[EAX + 0x4]
// 00577a3b: MOV EAX,dword ptr [EBX + 0x3365cc0]
//   Label: LAB_00577a3b
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
//   XREF to: 03365dc0 (DATA)
// 00577a41: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00577a47: MOV ESI,EAX
// 00577a49: MOV EDI,EAX
// 00577a4b: AND ESI,0xff
// 00577a51: SHR EDI,0x8
// 00577a54: SHR EAX,0x10
// 00577a57: AND EDI,0xff
// 00577a5d: AND EAX,0xff
// 00577a62: CMP ECX,0x20
// 00577a65: JNZ 0x00577aca
//   XREF to: 00577aca (CONDITIONAL_JUMP)
// 00577a67: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00577a6d: SHL ESI,CL
// 00577a6f: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00577a75: SHL EDI,CL
// 00577a77: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 00577a7d: OR ESI,EDI
// 00577a7f: SHL EAX,CL
// 00577a81: MOV ECX,ESI
// 00577a83: OR ECX,EAX
//   Label: LAB_00577a83
// 00577a85: ADD EDX,0x4
// 00577a88: ADD EBX,0x4
// 00577a8b: MOV dword ptr [EDX + -0x4],ECX
// 00577a8e: CMP EBX,EBP
// 00577a90: JNZ 0x00577a3b
//   XREF to: 00577a3b (CONDITIONAL_JUMP)
// 00577a92: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 00577a96: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 00577a9a: MOV EBX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 00577a9e: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 00577aa2: ADD ESI,0x4
// 00577aa5: ADD EDI,0x100
// 00577aab: ADD EBX,0x100
// 00577ab1: MOV dword ptr [ESP + 0x40],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 00577ab5: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 00577ab9: MOV dword ptr [ESP + 0x34],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 00577abd: CMP EDI,EBP
// 00577abf: JZ 0x0057778c
//   XREF to: 0057778c (CONDITIONAL_JUMP)
// 00577ac5: JMP 0x00577a20
//   XREF to: 00577a20 (UNCONDITIONAL_JUMP)
// 00577aca: MOV ECX,ESI
//   Label: LAB_00577aca
// 00577acc: SHL EDI,0x8
// 00577acf: SHL ECX,0x10
// 00577ad2: OR ECX,EDI
// 00577ad4: JMP 0x00577a83
//   XREF to: 00577a83 (UNCONDITIONAL_JUMP)
// 00577ad6: XOR EBX,EBX
//   Label: LAB_00577ad6
// 00577ad8: MOV EAX,EBX
// 00577ada: ADD ESP,0x58
// 00577add: POP EBP
// 00577ade: POP EDI
// 00577adf: POP ESI
// 00577ae0: POP EBX
// 00577ae1: RET
