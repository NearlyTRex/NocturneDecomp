// Name: core_setedit.cpp_FUN_00577430
// Address: 00577430
// Address Range: [[00577430, 0057772e]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00577430()
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_BitsPerPixel = 0x8
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

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_00577430(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_setedit_cpp_FUN_00577430(void)

{
  uint uVar1;
  uchar *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_54;
  int local_50;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ushort *local_14;
  
  if ((((-1 < in_stack_00000008) && (-1 < in_stack_0000000c)) &&
      (in_stack_00000008 + 0x40 <= g_WindowWidth)) && (in_stack_0000000c + 0x30 <= g_WindowHeight))
  {
    in_stack_00000004 = in_stack_00000004 * 0x3000;
    local_50 = in_stack_0000000c << 2;
    local_54 = in_stack_00000004 + 0x100;
    if (g_BitsPerPixel == 8) {
      local_1c = 0;
      local_30 = local_50;
      do {
        puVar2 = (uchar *)(*(int *)((int)g_ScreenBufferArray + local_30) + in_stack_00000008);
        iVar4 = local_1c * 0x100 + in_stack_00000004;
        do {
          puVar2 = puVar2 + 1;
          uVar1 = *(uint *)(&DAT_03365cc0 + iVar4);
          iVar4 = iVar4 + 4;
          *puVar2 = g_ColorCubeLookup
                    [((uVar1 >> 8 & 0xff) >> 3) * 0x20 + ((uVar1 & 0xff) >> 3) * 0x400 +
                     ((uVar1 >> 0x10 & 0xff) >> 3)];
        } while (iVar4 != local_54);
        local_30 = local_30 + 4;
        local_1c = local_1c + 1;
        local_54 = local_54 + 0x100;
      } while (local_1c < 0x30);
    }
    else if (g_BitsPerPixel == 0x10) {
      local_20 = 0;
      local_34 = local_54;
      do {
        local_14 = (ushort *)(*(int *)((int)g_ScreenBufferArray + local_50) + in_stack_00000008 * 2)
        ;
        iVar4 = in_stack_00000004 + local_20 * 0x100;
        do {
          local_14 = local_14 + 1;
          uVar1 = *(uint *)(&DAT_03365cc0 + iVar4);
          *local_14 = (ushort)((uVar1 & 0xff) / (uint)g_RedScaleFactor <<
                              ((byte)g_RedBitPosition & 0x1f)) |
                      (ushort)((uVar1 >> 8 & 0xff) / (uint)g_GreenScaleFactor <<
                              ((byte)g_GreenBitPosition & 0x1f)) |
                      (ushort)((uVar1 >> 0x10 & 0xff) / (uint)g_BlueScaleFactor <<
                              ((byte)g_BlueBitPosition & 0x1f));
          iVar4 = iVar4 + 4;
        } while (iVar4 != local_34);
        local_50 = local_50 + 4;
        local_20 = local_20 + 1;
        local_34 = local_34 + 0x100;
      } while (local_20 < 0x30);
    }
    else if (g_BitsPerPixel == 0x20) {
      local_24 = 0;
      local_2c = local_54;
      local_28 = local_50;
      do {
        puVar3 = (uint *)(*(int *)((int)g_ScreenBufferArray + local_28) + in_stack_00000008 * 4);
        iVar4 = local_24 * 0x100 + in_stack_00000004;
        do {
          puVar3 = puVar3 + 1;
          uVar1 = *(uint *)(&DAT_03365cc0 + iVar4);
          uVar6 = uVar1 >> 8 & 0xff;
          uVar5 = uVar1 >> 0x10 & 0xff;
          if (g_BitsPerPixel == 0x20) {
            uVar5 = uVar5 << ((byte)g_BlueBitPosition & 0x1f) |
                    uVar6 << ((byte)g_GreenBitPosition & 0x1f) |
                    (uVar1 & 0xff) << ((byte)g_RedBitPosition & 0x1f);
          }
          else {
            uVar5 = uVar6 << 8 | (uVar1 & 0xff) << 0x10 | uVar5;
          }
          iVar4 = iVar4 + 4;
          *puVar3 = uVar5;
        } while (iVar4 != local_2c);
        local_28 = local_28 + 4;
        local_24 = local_24 + 1;
        local_2c = local_2c + 0x100;
      } while (local_24 < 0x30);
    }
  }
  return;
}


// Assembly code:
// 00577430: PUSH EBX
//   Label: core_setedit.cpp_FUN_00577430
// 00577431: PUSH ESI
// 00577432: PUSH EDI
// 00577433: PUSH EBP
// 00577434: SUB ESP,0x48
// 00577437: MOV EBX,dword ptr [ESP + 0x60]
//   XREF to: Stack[0x8] (READ)
// 0057743b: MOV ECX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0xc] (READ)
// 0057743f: TEST EBX,EBX
// 00577441: JL 0x0057759a
//   XREF to: 0057759a (CONDITIONAL_JUMP)
// 00577447: TEST ECX,ECX
// 00577449: JL 0x0057759a
//   XREF to: 0057759a (CONDITIONAL_JUMP)
// 0057744f: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00577455: LEA EAX,[EBX + 0x40]
// 00577458: CMP EAX,EDX
// 0057745a: JG 0x0057759a
//   XREF to: 0057759a (CONDITIONAL_JUMP)
// 00577460: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00577466: LEA EAX,[ECX + 0x30]
// 00577469: CMP EAX,ESI
// 0057746b: JG 0x0057759a
//   XREF to: 0057759a (CONDITIONAL_JUMP)
// 00577471: MOV EDX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 00577475: LEA EAX,[EDX*0x4 + 0x0]
// 0057747c: SUB EAX,EDX
// 0057747e: MOV EDI,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 00577484: SHL EAX,0xc
// 00577487: SHL ECX,0x2
// 0057748a: LEA EDX,[EAX + 0x100]
// 00577490: CMP EDI,0x8
// 00577493: JZ 0x005775a2
//   XREF to: 005775a2 (CONDITIONAL_JUMP)
// 00577499: CMP EDI,0x10
// 0057749c: JNZ 0x00577651
//   XREF to: 00577651 (CONDITIONAL_JUMP)
// 005774a2: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005774a6: MOV dword ptr [ESP + 0x24],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005774aa: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 005774ae: ADD EBX,EBX
// 005774b0: XOR EBP,EBP
// 005774b2: MOV dword ptr [ESP + 0x1c],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 005774b6: MOV dword ptr [ESP + 0x38],EBP
//   XREF to: Stack[-0x20] (WRITE)
// 005774ba: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_005774ba
//   XREF to: Stack[-0x50] (READ)
// 005774be: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 005774c2: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 005774c8: ADD EAX,EDX
// 005774ca: ADD EAX,0x2
// 005774cd: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005774d1: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 005774d5: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 005774d9: SHL EAX,0x8
// 005774dc: ADD EBX,EAX
// 005774de: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 005774e2: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005774e6: MOV ESI,dword ptr [EBX + 0x3365cc0]
//   Label: LAB_005774e6
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
// 005774ec: XOR EDX,EDX
// 005774ee: MOV EAX,ESI
// 005774f0: MOV ECX,ESI
// 005774f2: MOV EBP,ESI
// 005774f4: MOV ESI,dword ptr [0x02d01f28]
//   XREF to: 02d01f28 (READ)
// 005774fa: AND EAX,0xff
// 005774ff: DIV ESI
// 00577501: SHR ECX,0x8
// 00577504: AND ECX,0xff
// 0057750a: MOV EDI,EAX
// 0057750c: XOR EDX,EDX
// 0057750e: MOV EAX,ECX
// 00577510: DIV dword ptr [0x02d01f34]
//   XREF to: 02d01f34 (READ)
// 00577516: SHR EBP,0x10
// 00577519: AND EBP,0xff
// 0057751f: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x58] (DATA)
// 00577522: MOV ESI,EAX
// 00577524: XOR EDX,EDX
// 00577526: MOV EAX,EBP
// 00577528: DIV dword ptr [0x02d01f40]
//   XREF to: 02d01f40 (READ)
// 0057752e: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 00577534: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x58] (DATA)
// 00577537: MOV EAX,EDI
// 00577539: SHL EAX,CL
// 0057753b: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 00577541: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 00577544: SHL ESI,CL
// 00577546: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 0057754c: OR EAX,ESI
// 0057754e: SHL EDX,CL
// 00577550: OR EAX,EDX
// 00577552: MOV EDX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x14] (READ)
// 00577556: MOV word ptr [EDX],AX
// 00577559: LEA EAX,[EDX + 0x2]
// 0057755c: ADD EBX,0x4
// 0057755f: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x18] (READ)
// 00577563: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00577567: CMP EBX,EDX
// 00577569: JNZ 0x005774e6
//   XREF to: 005774e6 (CONDITIONAL_JUMP)
// 0057756f: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x50] (READ)
// 00577573: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x20] (READ)
// 00577577: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 0057757b: ADD EBX,0x4
// 0057757e: INC ESI
// 0057757f: ADD ECX,0x100
// 00577585: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 00577589: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0057758d: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00577591: CMP ESI,0x30
// 00577594: JL 0x005774ba
//   XREF to: 005774ba (CONDITIONAL_JUMP)
// 0057759a: ADD ESP,0x48
//   Label: LAB_0057759a
// 0057759d: POP EBP
// 0057759e: POP EDI
// 0057759f: POP ESI
// 005775a0: POP EBX
// 005775a1: RET
// 005775a2: MOV dword ptr [ESP + 0x10],EBX
//   Label: LAB_005775a2
//   XREF to: Stack[-0x48] (WRITE)
// 005775a6: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 005775aa: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 005775ae: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 005775b2: XOR EBX,EBX
// 005775b4: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x48] (READ)
// 005775b8: MOV dword ptr [ESP + 0x3c],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005775bc: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_005775bc
//   XREF to: Stack[-0x30] (READ)
// 005775c0: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 005775c6: ADD EAX,EBP
// 005775c8: LEA EBX,[EAX + 0x1]
// 005775cb: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 005775cf: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 005775d3: SHL EAX,0x8
// 005775d6: ADD EAX,EDX
// 005775d8: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 005775dc: MOV ECX,dword ptr [EAX + 0x3365cc0]
//   Label: LAB_005775dc
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
// 005775e2: MOV EDI,ECX
// 005775e4: MOV ESI,ECX
// 005775e6: AND EDI,0xff
// 005775ec: SHR ESI,0x8
// 005775ef: SHR ECX,0x10
// 005775f2: AND ESI,0xff
// 005775f8: SHR EDI,0x3
// 005775fb: SHR ESI,0x3
// 005775fe: SHL EDI,0xa
// 00577601: SHL ESI,0x5
// 00577604: AND ECX,0xff
// 0057760a: ADD ESI,EDI
// 0057760c: SHR ECX,0x3
// 0057760f: INC EBX
// 00577610: MOV CL,byte ptr [ECX + ESI*0x1 + 0x2cf9020]
//   XREF to: 02cf9020 (DATA)
// 00577617: ADD EAX,0x4
// 0057761a: MOV byte ptr [EBX + -0x1],CL
// 0057761d: CMP EAX,EDX
// 0057761f: JNZ 0x005775dc
//   XREF to: 005775dc (CONDITIONAL_JUMP)
// 00577621: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 00577625: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x1c] (READ)
// 00577629: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x54] (READ)
// 0057762d: ADD EBX,0x4
// 00577630: INC ESI
// 00577631: ADD ECX,0x100
// 00577637: MOV dword ptr [ESP + 0x28],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0057763b: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0057763f: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 00577643: CMP ESI,0x30
// 00577646: JGE 0x0057759a
//   XREF to: 0057759a (CONDITIONAL_JUMP)
// 0057764c: JMP 0x005775bc
//   XREF to: 005775bc (UNCONDITIONAL_JUMP)
// 00577651: CMP EDI,0x20
//   Label: LAB_00577651
// 00577654: JNZ 0x0057759a
//   XREF to: 0057759a (CONDITIONAL_JUMP)
// 0057765a: SHL EBX,0x2
// 0057765d: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00577661: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00577665: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00577669: XOR EDI,EDI
// 0057766b: MOV dword ptr [ESP + 0x14],EBX
//   XREF to: Stack[-0x44] (WRITE)
// 0057766f: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00577673: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_00577673
//   XREF to: Stack[-0x28] (READ)
// 00577677: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 0057767b: MOV EAX,dword ptr [EAX + 0x2cf6a9c]
//   XREF to: 02cf6a9c (DATA)
//   XREF to: 02cf6aa0 (DATA)
// 00577681: ADD EAX,ESI
// 00577683: LEA EBX,[EAX + 0x4]
// 00577686: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 0057768a: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x4c] (READ)
// 0057768e: SHL EAX,0x8
// 00577691: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 00577695: ADD EAX,EDI
// 00577697: MOV ECX,dword ptr [EAX + 0x3365cc0]
//   Label: LAB_00577697
//   XREF to: 03365cc0 (DATA)
//   XREF to: 03365cc4 (DATA)
// 0057769d: MOV EDI,ECX
// 0057769f: MOV ESI,ECX
// 005776a1: MOV EBP,ECX
// 005776a3: MOV ECX,dword ptr [0x0067939c]
//   XREF to: 0067939c (READ)
// 005776a9: AND EDI,0xff
// 005776af: SHR ESI,0x8
// 005776b2: SHR EBP,0x10
// 005776b5: AND ESI,0xff
// 005776bb: AND EBP,0xff
// 005776c1: CMP ECX,0x20
// 005776c4: JNZ 0x00577721
//   XREF to: 00577721 (CONDITIONAL_JUMP)
// 005776c6: MOV CL,byte ptr [0x02d01f24]
//   XREF to: 02d01f24 (READ)
// 005776cc: SHL EDI,CL
// 005776ce: MOV CL,byte ptr [0x02d01f30]
//   XREF to: 02d01f30 (READ)
// 005776d4: SHL ESI,CL
// 005776d6: MOV CL,byte ptr [0x02d01f3c]
//   XREF to: 02d01f3c (READ)
// 005776dc: SHL EBP,CL
// 005776de: OR ESI,EDI
// 005776e0: MOV ECX,EBP
// 005776e2: OR ECX,ESI
// 005776e4: ADD EBX,0x4
//   Label: LAB_005776e4
// 005776e7: ADD EAX,0x4
// 005776ea: MOV dword ptr [EBX + -0x4],ECX
// 005776ed: CMP EAX,EDX
// 005776ef: JNZ 0x00577697
//   XREF to: 00577697 (CONDITIONAL_JUMP)
// 005776f1: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x28] (READ)
// 005776f5: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x24] (READ)
// 005776f9: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x2c] (READ)
// 005776fd: ADD ESI,0x4
// 00577700: INC EDI
// 00577701: ADD EBX,0x100
// 00577707: MOV dword ptr [ESP + 0x30],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0057770b: MOV dword ptr [ESP + 0x34],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0057770f: MOV dword ptr [ESP + 0x2c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00577713: CMP EDI,0x30
// 00577716: JGE 0x0057759a
//   XREF to: 0057759a (CONDITIONAL_JUMP)
// 0057771c: JMP 0x00577673
//   XREF to: 00577673 (UNCONDITIONAL_JUMP)
// 00577721: MOV ECX,ESI
//   Label: LAB_00577721
// 00577723: SHL EDI,0x10
// 00577726: SHL ECX,0x8
// 00577729: OR ECX,EDI
// 0057772b: OR ECX,EBP
// 0057772d: JMP 0x005776e4
//   XREF to: 005776e4 (UNCONDITIONAL_JUMP)
