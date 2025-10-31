// Name: core_setutil.cpp_C3DSLight_save_FUN_00587090
// Address: 00587090
// Address Range: [[00587090, 00587447]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_C3DSLight_save_FUN_00587090(C3DSLight * this_ptr, FILE * file_ptr)
// Cross-references:
//   core_setedit.cpp_CDemonSet_save_FUN_0057a2a0 (0057a2a0) at 0057a4c4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_light_name_006497dc
//   TerminatedCString s_s_00649804
//   TerminatedCString s_pos_00649808
//   TerminatedCString s_f_f_f_0064980d
//   TerminatedCString s_orient_00649817
//   TerminatedCString s_f_f_f_0064981f
//   TerminatedCString s_fov_00649829
//   TerminatedCString s_f_0064982e
//   TerminatedCString s_aspect_00649832
//   TerminatedCString s_f_0064983a
//   TerminatedCString s_intensity_0064983e
//   TerminatedCString s_f_00649849
//   TerminatedCString s_type_0064984d
//   TerminatedCString s_d_00649853
//   TerminatedCString s_R_G_B_attenStart_attenEn_00649857
//   TerminatedCString s_f_f_f_f_f_00649874
//   TerminatedCString s_sizeX_sizeY_00649884
//   TerminatedCString s_d_d_00649892
//   TerminatedCString s_filterCount_00649899
//   TerminatedCString s_d_006498a6
//   TerminatedCString s_blendFilter_006498aa
//   TerminatedCString s_d_006498b7
//   TerminatedCString s_f_d_s_006498bb
//   TerminatedCString s_filterFrame_006498c5
//   TerminatedCString s_d_006498d2
//   TerminatedCString s_moveFilter_filterVelX_fi_006498d6
//   TerminatedCString s_d_d_d_d_d_0064990e
//   TerminatedCString s_onTime_cycleTime_0064991e
//   TerminatedCString s_f_f_00649931
//   TerminatedCString s_visible_00649938
//   TerminatedCString s_d_00649941
//   TerminatedCString s_d_d_d_d_d_00649945
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSLight_save_FUN_00587090(C3DSLight *this_ptr,FILE *file_ptr)

{
  int iVar1;
  int iVar2;
  undefined8 in_stack_0000000c;
  undefined8 in_stack_00000014;
  int in_stack_0000005c;
  undefined4 uStack00000064;
  int in_stack_00000078;
  int in_stack_0000007c;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"-- light name ------------------------\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"pos\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_ptr,"%f,%f,%f\n",(double)*(float *)(in_stack_0000000c._4_4_ + 0x104),
             (double)*(float *)(in_stack_0000000c._4_4_ + 0x108),
             (double)*(float *)(in_stack_0000000c._4_4_ + 0x10c));
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"orient\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file_ptr,"%f,%f,%f\n",(double)*(float *)(in_stack_00000014._4_4_ + 0x110),
             (double)*(float *)(in_stack_00000014._4_4_ + 0x118));
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"fov\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"aspect\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"intensity\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"type\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"R,G,B, attenStart, attenEnd\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f,%f,%f,%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"sizeX, sizeY\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d,%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"filterCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"blendFilter\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  iVar1 = 0;
  if (0 < *(int *)(in_stack_0000005c + 0x11ec)) {
    do {
      crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f,%d,%s\n");
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_stack_0000005c + 0x11ec));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"filterFrame\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"moveFilter,filterVelX,filterVelY,filterPosX,filterPosY\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d,%d,%d,%d,%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"onTime, cycleTime\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%f,%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"visible\n");
  iVar1 = in_stack_00000078 + 0xfa;
  do {
    in_stack_00000078 = in_stack_00000078 + 1;
  } while (in_stack_00000078 != iVar1);
  crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d\n");
  iVar2 = 0;
  iVar1 = in_stack_0000007c;
  do {
    if (*(char *)(iVar1 + 0x128) != '\0') {
      uStack00000064 = *(undefined4 *)(in_stack_0000007c + 0x230);
      crt_stdio_c_fprintf_FUN_005fe6d0(file_ptr,"%d,%d,%d,%d,%d\n");
    }
    in_stack_0000007c = in_stack_0000007c + 0x10;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 0xfa);
  return;
}


// Assembly code:
// 00587090: PUSH EBX
//   Label: core_setutil.cpp_C3DSLight_save_FUN_00587090
// 00587091: PUSH ESI
// 00587092: PUSH EDI
// 00587093: PUSH EBP
// 00587094: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00587098: PUSH 0x6497dc
//   XREF to: 006497dc (DATA)
// 0058709d: PUSH EDI
// 0058709e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005870a3: ADD ESP,0x8
// 005870a6: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005870aa: ADD EBX,0x4
// 005870ad: PUSH EBX
// 005870ae: PUSH 0x649804
//   XREF to: 00649804 (DATA)
// 005870b3: PUSH EDI
// 005870b4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005870b9: ADD ESP,0xc
// 005870bc: PUSH 0x649808
//   XREF to: 00649808 (DATA)
// 005870c1: PUSH EDI
// 005870c2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005870c7: ADD ESP,0x8
// 005870ca: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005870ce: SUB ESP,0x8
// 005870d1: FLD float ptr [EAX + 0x10c]
// 005870d7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005870da: SUB ESP,0x8
// 005870dd: FLD float ptr [EAX + 0x108]
// 005870e3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005870e6: SUB ESP,0x8
// 005870e9: FLD float ptr [EAX + 0x104]
// 005870ef: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005870f2: PUSH 0x64980d
//   XREF to: 0064980d (DATA)
// 005870f7: PUSH EDI
// 005870f8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005870fd: ADD ESP,0x20
// 00587100: PUSH 0x649817
//   XREF to: 00649817 (DATA)
// 00587105: PUSH EDI
// 00587106: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058710b: ADD ESP,0x8
// 0058710e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00587112: SUB ESP,0x8
// 00587115: FLD float ptr [EAX + 0x114]
// 0058711b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0058711e: SUB ESP,0x8
// 00587121: FLD float ptr [EAX + 0x118]
// 00587127: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0058712a: SUB ESP,0x8
// 0058712d: FLD float ptr [EAX + 0x110]
// 00587133: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00587136: PUSH 0x64981f
//   XREF to: 0064981f (DATA)
// 0058713b: PUSH EDI
// 0058713c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587141: ADD ESP,0x20
// 00587144: PUSH 0x649829
//   XREF to: 00649829 (DATA)
// 00587149: PUSH EDI
// 0058714a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058714f: ADD ESP,0x8
// 00587152: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00587156: SUB ESP,0x8
// 00587159: FLD float ptr [EAX + 0x11c]
// 0058715f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00587162: PUSH 0x64982e
//   XREF to: 0064982e (DATA)
// 00587167: PUSH EDI
// 00587168: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058716d: ADD ESP,0x10
// 00587170: PUSH 0x649832
//   XREF to: 00649832 (DATA)
// 00587175: PUSH EDI
// 00587176: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058717b: ADD ESP,0x8
// 0058717e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00587182: SUB ESP,0x8
// 00587185: FLD float ptr [EAX + 0x120]
// 0058718b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0058718e: PUSH 0x64983a
//   XREF to: 0064983a (DATA)
// 00587193: PUSH EDI
// 00587194: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587199: ADD ESP,0x10
// 0058719c: PUSH 0x64983e
//   XREF to: 0064983e (DATA)
// 005871a1: PUSH EDI
// 005871a2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005871a7: ADD ESP,0x8
// 005871aa: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005871ae: SUB ESP,0x8
// 005871b1: FLD float ptr [EAX + 0x124]
// 005871b7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005871ba: PUSH 0x649849
//   XREF to: 00649849 (DATA)
// 005871bf: PUSH EDI
// 005871c0: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005871c5: ADD ESP,0x10
// 005871c8: PUSH 0x64984d
//   XREF to: 0064984d (DATA)
// 005871cd: PUSH EDI
// 005871ce: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005871d3: ADD ESP,0x8
// 005871d6: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005871da: MOV EDX,dword ptr [EAX]
// 005871dc: PUSH EDX
// 005871dd: PUSH 0x649853
//   XREF to: 00649853 (DATA)
// 005871e2: PUSH EDI
// 005871e3: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005871e8: ADD ESP,0xc
// 005871eb: PUSH 0x649857
//   XREF to: 00649857 (DATA)
// 005871f0: PUSH EDI
// 005871f1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005871f6: ADD ESP,0x8
// 005871f9: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005871fd: SUB ESP,0x8
// 00587200: FLD float ptr [EAX + 0x11d4]
// 00587206: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00587209: SUB ESP,0x8
// 0058720c: FLD float ptr [EAX + 0x11d0]
// 00587212: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00587215: SUB ESP,0x8
// 00587218: FLD float ptr [EAX + 0x11cc]
// 0058721e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00587221: SUB ESP,0x8
// 00587224: FLD float ptr [EAX + 0x11c8]
// 0058722a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0058722d: SUB ESP,0x8
// 00587230: FLD float ptr [EAX + 0x11c4]
// 00587236: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00587239: PUSH 0x649874
//   XREF to: 00649874 (DATA)
// 0058723e: PUSH EDI
// 0058723f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587244: ADD ESP,0x30
// 00587247: PUSH 0x649884
//   XREF to: 00649884 (DATA)
// 0058724c: PUSH EDI
// 0058724d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587252: ADD ESP,0x8
// 00587255: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00587259: MOV ECX,dword ptr [EAX + 0x180c]
// 0058725f: PUSH ECX
// 00587260: MOV EBX,dword ptr [EAX + 0x1808]
// 00587266: PUSH EBX
// 00587267: PUSH 0x649892
//   XREF to: 00649892 (DATA)
// 0058726c: PUSH EDI
// 0058726d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587272: ADD ESP,0x10
// 00587275: PUSH 0x649899
//   XREF to: 00649899 (DATA)
// 0058727a: PUSH EDI
// 0058727b: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587280: ADD ESP,0x8
// 00587283: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00587287: MOV ESI,dword ptr [EAX + 0x11ec]
// 0058728d: PUSH ESI
// 0058728e: PUSH 0x6498a6
//   XREF to: 006498a6 (DATA)
// 00587293: PUSH EDI
// 00587294: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587299: ADD ESP,0xc
// 0058729c: PUSH 0x6498aa
//   XREF to: 006498aa (DATA)
// 005872a1: PUSH EDI
// 005872a2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005872a7: ADD ESP,0x8
// 005872aa: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005872ae: MOV EBP,dword ptr [EAX + 0x11f0]
// 005872b4: PUSH EBP
// 005872b5: PUSH 0x6498b7
//   XREF to: 006498b7 (DATA)
// 005872ba: PUSH EDI
// 005872bb: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005872c0: ADD ESP,0xc
// 005872c3: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005872c7: MOV EDX,dword ptr [EAX + 0x11ec]
// 005872cd: XOR ESI,ESI
// 005872cf: TEST EDX,EDX
// 005872d1: JLE 0x00587320
//   XREF to: 00587320 (CONDITIONAL_JUMP)
// 005872d3: LEA EBP,[EAX + 0x11f4]
// 005872d9: MOV EBX,EAX
// 005872db: PUSH EBP
//   Label: LAB_005872db
// 005872dc: MOV ECX,dword ptr [EBX + 0x1774]
// 005872e2: PUSH ECX
// 005872e3: SUB ESP,0x8
// 005872e6: FLD float ptr [EBX + 0x16f4]
// 005872ec: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005872ef: PUSH 0x6498bb
//   XREF to: 006498bb (DATA)
// 005872f4: PUSH EDI
// 005872f5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005872fa: ADD ESP,0x18
// 005872fd: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00587301: ADD EBX,0x4
// 00587304: INC ESI
// 00587305: MOV EDX,dword ptr [EAX + 0x11ec]
// 0058730b: ADD EBP,0x28
// 0058730e: CMP ESI,EDX
// 00587310: JL 0x005872db
//   XREF to: 005872db (CONDITIONAL_JUMP)
// 00587312: LEA EAX,[EAX]
// 00587318: LEA EDX,[EDX]
// 0058731e: MOV EAX,EAX
// 00587320: PUSH 0x6498c5
//   Label: LAB_00587320
//   XREF to: 006498c5 (DATA)
// 00587325: PUSH EDI
// 00587326: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0058732b: ADD ESP,0x8
// 0058732e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00587332: MOV ECX,dword ptr [EAX + 0x1890]
// 00587338: PUSH ECX
// 00587339: PUSH 0x6498d2
//   XREF to: 006498d2 (DATA)
// 0058733e: PUSH EDI
// 0058733f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587344: ADD ESP,0xc
// 00587347: PUSH 0x6498d6
//   XREF to: 006498d6 (DATA)
// 0058734c: PUSH EDI
// 0058734d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587352: ADD ESP,0x8
// 00587355: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00587359: MOV EBX,dword ptr [EAX + 0x1804]
// 0058735f: PUSH EBX
// 00587360: MOV ESI,dword ptr [EAX + 0x1800]
// 00587366: PUSH ESI
// 00587367: MOV EBP,dword ptr [EAX + 0x17fc]
// 0058736d: PUSH EBP
// 0058736e: MOV EDX,dword ptr [EAX + 0x17f8]
// 00587374: PUSH EDX
// 00587375: MOV ECX,dword ptr [EAX + 0x17f4]
// 0058737b: PUSH ECX
// 0058737c: PUSH 0x64990e
//   XREF to: 0064990e (DATA)
// 00587381: PUSH EDI
// 00587382: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587387: ADD ESP,0x1c
// 0058738a: PUSH 0x64991e
//   XREF to: 0064991e (DATA)
// 0058738f: PUSH EDI
// 00587390: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587395: ADD ESP,0x8
// 00587398: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0058739c: SUB ESP,0x8
// 0058739f: FLD float ptr [EAX + 0x11e4]
// 005873a5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005873a8: SUB ESP,0x8
// 005873ab: FLD float ptr [EAX + 0x11e0]
// 005873b1: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005873b4: PUSH 0x649931
//   XREF to: 00649931 (DATA)
// 005873b9: PUSH EDI
// 005873ba: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005873bf: ADD ESP,0x18
// 005873c2: PUSH 0x649938
//   XREF to: 00649938 (DATA)
// 005873c7: PUSH EDI
// 005873c8: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005873cd: ADD ESP,0x8
// 005873d0: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005873d4: XOR EBP,EBP
// 005873d6: LEA ESI,[EBX + 0xfa]
// 005873dc: CMP byte ptr [EBX + 0x128],0x0
//   Label: LAB_005873dc
// 005873e3: JZ 0x005873e6
//   XREF to: 005873e6 (CONDITIONAL_JUMP)
// 005873e5: INC EBP
// 005873e6: INC EBX
//   Label: LAB_005873e6
// 005873e7: CMP EBX,ESI
// 005873e9: JNZ 0x005873dc
//   XREF to: 005873dc (CONDITIONAL_JUMP)
// 005873eb: PUSH EBP
// 005873ec: PUSH 0x649941
//   XREF to: 00649941 (DATA)
// 005873f1: PUSH EDI
// 005873f2: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005873f7: ADD ESP,0xc
// 005873fa: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005873fe: XOR ESI,ESI
// 00587400: MOV EBX,EBP
// 00587402: CMP byte ptr [EBP + 0x128],0x0
//   Label: LAB_00587402
// 00587409: JZ 0x00587436
//   XREF to: 00587436 (CONDITIONAL_JUMP)
// 0058740b: MOV EAX,dword ptr [EBX + 0x230]
// 00587411: PUSH EAX
// 00587412: MOV EDX,dword ptr [EBX + 0x22c]
// 00587418: PUSH EDX
// 00587419: MOV ECX,dword ptr [EBX + 0x228]
// 0058741f: PUSH ECX
// 00587420: MOV EAX,dword ptr [EBX + 0x224]
// 00587426: PUSH EAX
// 00587427: PUSH ESI
// 00587428: PUSH 0x649945
//   XREF to: 00649945 (DATA)
// 0058742d: PUSH EDI
// 0058742e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00587433: ADD ESP,0x1c
// 00587436: ADD EBX,0x10
//   Label: LAB_00587436
// 00587439: INC ESI
// 0058743a: INC EBP
// 0058743b: CMP ESI,0xfa
// 00587441: JL 0x00587402
//   XREF to: 00587402 (CONDITIONAL_JUMP)
// 00587443: POP EBP
// 00587444: POP EDI
// 00587445: POP ESI
// 00587446: POP EBX
// 00587447: RET
