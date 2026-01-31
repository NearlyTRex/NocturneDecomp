; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041a630(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x1c4]:1  local_1c4
; undefined1       Stack[-0x194]:1  local_194
; undefined1       Stack[-0x164]:1  local_164
; undefined1       Stack[-0x134]:1  local_134
; undefined1       Stack[-0x104]:1  local_104
; undefined1       Stack[-0xd4]:1  local_d4
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined1       Stack[-0x7c]:1  local_7c
; undefined1       Stack[-0x70]:1  local_70
; undefined1       Stack[-0x64]:1  local_64
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_FUN_0041aa40 at 0041adb4
;
; Referenced Globals:
;   float FLOAT_00615e44 = 65536
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
;   core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a630
        ;   Label: core_bodypart.cpp_CBodyPart_FUN_0041a630
    PUSH ESI                            ; 0041a631
    PUSH EDI                            ; 0041a632
    PUSH EBP                            ; 0041a633
    SUB ESP,0x1b4                       ; 0041a634
    MOV EBP,dword ptr [ESP + 0x1c8]     ; 0041a63a
    MOV EDX,dword ptr [ESP + 0x1cc]     ; 0041a641
    PUSH EDX                            ; 0041a648
    LEA EAX,[ESP + 0x124]               ; 0041a649
    PUSH EAX                            ; 0041a650
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0041a651
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041a656
    FLD float ptr [ESP + 0x120]         ; 0041a659
    FMUL float ptr [0x00615e44]         ; 0041a660 | FLOAT_00615e44
    FLD float ptr [ESP + 0x124]         ; 0041a666
    FMUL float ptr [0x00615e44]         ; 0041a66d | FLOAT_00615e44
    FLD float ptr [ESP + 0x128]         ; 0041a673
    FMUL float ptr [0x00615e44]         ; 0041a67a | FLOAT_00615e44
    FLD float ptr [ESP + 0x12c]         ; 0041a680
    FMUL float ptr [0x00615e44]         ; 0041a687 | FLOAT_00615e44
    FLD float ptr [ESP + 0x130]         ; 0041a68d
    FMUL float ptr [0x00615e44]         ; 0041a694 | FLOAT_00615e44
    FLD float ptr [ESP + 0x134]         ; 0041a69a
    FMUL float ptr [0x00615e44]         ; 0041a6a1 | FLOAT_00615e44
    FLD float ptr [ESP + 0x138]         ; 0041a6a7
    FMUL float ptr [0x00615e44]         ; 0041a6ae | FLOAT_00615e44
    FXCH ST6                            ; 0041a6b4
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a6b6
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x198]       ; 0041a6bb
    FLD float ptr [ESP + 0x13c]         ; 0041a6c2
    FMUL float ptr [0x00615e44]         ; 0041a6c9 | FLOAT_00615e44
    FXCH ST5                            ; 0041a6cf
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a6d1
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x19c]       ; 0041a6d6
    FLD float ptr [ESP + 0x140]         ; 0041a6dd
    FMUL float ptr [0x00615e44]         ; 0041a6e4 | FLOAT_00615e44
    XOR EDI,EDI                         ; 0041a6ea
    MOV ECX,dword ptr [EBP + 0x174]     ; 0041a6ec
    FXCH ST4                            ; 0041a6f2
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a6f4
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 0041a6f9
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a6fb
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0041a700
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a702
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0041a707
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a709
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST6                            ; 0041a70e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a710
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST5                            ; 0041a715
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a717
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST4                            ; 0041a71c
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041a71e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 0041a723
    FISTP dword ptr [ESP + 0x1a0]       ; 0041a725
    FXCH                                ; 0041a72c
    FISTP dword ptr [ESP + 0x18c]       ; 0041a72e
    FISTP dword ptr [ESP + 0x190]       ; 0041a735
    FXCH ST3                            ; 0041a73c
    FISTP dword ptr [ESP + 0x1ac]       ; 0041a73e
    FXCH                                ; 0041a745
    FISTP dword ptr [ESP + 0x194]       ; 0041a747
    FISTP dword ptr [ESP + 0x1a4]       ; 0041a74e
    FISTP dword ptr [ESP + 0x1b0]       ; 0041a755
    TEST ECX,ECX                        ; 0041a75c
    JLE 0x0041a850                      ; 0041a75e
        ;   XREF to: 0041a850 (CONDITIONAL_JUMP)  ; LAB_0041a850
    XOR ESI,ESI                         ; 0041a764
    MOV ECX,dword ptr [EBP + 0x178]     ; 0041a766
        ;   Label: LAB_0041a766
    MOV EAX,dword ptr [ESP + 0x198]     ; 0041a76c
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 0041a773
    IMUL EDX                            ; 0041a776
    SHRD EAX,EDX,0x10                   ; 0041a778
    MOV EBX,EAX                         ; 0041a77c
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 0041a77e
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0041a782
    IMUL EDX                            ; 0041a789
    SHRD EAX,EDX,0x10                   ; 0041a78b
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 0041a78f
    ADD EBX,EAX                         ; 0041a793
    MOV EAX,dword ptr [ESP + 0x194]     ; 0041a795
    IMUL EDX                            ; 0041a79c
    SHRD EAX,EDX,0x10                   ; 0041a79e
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 0041a7a2
    ADD EBX,EAX                         ; 0041a7a5
    MOV EAX,dword ptr [ESP + 0x19c]     ; 0041a7a7
    MOV dword ptr [ESP + 0x184],EBX     ; 0041a7ae
    IMUL EDX                            ; 0041a7b5
    SHRD EAX,EDX,0x10                   ; 0041a7b7
    MOV EBX,EAX                         ; 0041a7bb
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 0041a7bd
    MOV EAX,dword ptr [ESP + 0x190]     ; 0041a7c1
    IMUL EDX                            ; 0041a7c8
    SHRD EAX,EDX,0x10                   ; 0041a7ca
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 0041a7ce
    ADD EBX,EAX                         ; 0041a7d2
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 0041a7d4
    IMUL EDX                            ; 0041a7db
    SHRD EAX,EDX,0x10                   ; 0041a7dd
    MOV EDX,dword ptr [ECX + ESI*0x1]   ; 0041a7e1
    ADD EBX,EAX                         ; 0041a7e4
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 0041a7e6
    MOV dword ptr [ESP + 0x188],EBX     ; 0041a7ed
    IMUL EDX                            ; 0041a7f4
    SHRD EAX,EDX,0x10                   ; 0041a7f6
    MOV EBX,EAX                         ; 0041a7fa
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x4] ; 0041a7fc
    MOV EAX,dword ptr [ESP + 0x1ac]     ; 0041a800
    IMUL EDX                            ; 0041a807
    SHRD EAX,EDX,0x10                   ; 0041a809
    MOV EDX,dword ptr [ECX + ESI*0x1 + 0x8] ; 0041a80d
    ADD EBX,EAX                         ; 0041a811
    MOV EAX,dword ptr [ESP + 0x1b0]     ; 0041a813
    IMUL EDX                            ; 0041a81a
    SHRD EAX,EDX,0x10                   ; 0041a81c
    MOV EDX,dword ptr [ESP + 0x184]     ; 0041a820
    ADD EAX,EBX                         ; 0041a827
    MOV dword ptr [ECX + ESI*0x1],EDX   ; 0041a829
    MOV dword ptr [ECX + ESI*0x1 + 0x8],EAX ; 0041a82c
    MOV EDX,dword ptr [ESP + 0x188]     ; 0041a830
    MOV dword ptr [ECX + ESI*0x1 + 0x4],EDX ; 0041a837
    INC EDI                             ; 0041a83b
    MOV EBX,dword ptr [EBP + 0x174]     ; 0041a83c
    ADD ESI,0xc                         ; 0041a842
    CMP EDI,EBX                         ; 0041a845
    JL 0x0041a766                       ; 0041a847
        ;   XREF to: 0041a766 (CONDITIONAL_JUMP)  ; LAB_0041a766
    LEA EAX,[EAX]                       ; 0041a84d
    LEA EBX,[EBP + 0x30]                ; 0041a850
        ;   Label: LAB_0041a850
    PUSH EBX                            ; 0041a853
    PUSH 0x3f87558                      ; 0041a854 | g_ZeroVector
    LEA EAX,[ESP + 0x68]                ; 0041a859
    PUSH EAX                            ; 0041a85d
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0041a85e
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041a863
    MOV ESI,dword ptr [ESP + 0x1cc]     ; 0041a866
    PUSH ESI                            ; 0041a86d
    PUSH 0x3f87558                      ; 0041a86e | g_ZeroVector
    LEA EAX,[ESP + 0x98]                ; 0041a873
    PUSH EAX                            ; 0041a87a
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 0041a87b
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041a880
    LEA EAX,[ESP + 0x90]                ; 0041a883
    PUSH EAX                            ; 0041a88a
    LEA EAX,[ESP + 0x64]                ; 0041a88b
    PUSH EAX                            ; 0041a88f
    LEA ESI,[ESP + 0xf8]                ; 0041a890
    LEA EDI,[ESP + 0xc8]                ; 0041a897
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0041a89e
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0041a8a3
    LEA EAX,[ESP + 0x178]               ; 0041a8a6
    MOV ECX,0xc                         ; 0041a8ad
    PUSH EAX                            ; 0041a8b2
    LEA EAX,[ESP + 0xc4]                ; 0041a8b3
    LEA ESI,[ESP + 0xf4]                ; 0041a8ba
    PUSH EAX                            ; 0041a8c1
    MOVSD.REP ES:EDI,ESI                ; 0041a8c2
    CALL core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0 ; 0041a8c4
        ;   XREF to: 005f5bd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAnglesZYX_FUN_005f5bd0(CMatrix3x3f * matrix_ptr, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0041a8c9
    CMP EBX,EAX                         ; 0041a8cc
    JZ 0x0041a8e0                       ; 0041a8ce
        ;   XREF to: 0041a8e0 (CONDITIONAL_JUMP)  ; LAB_0041a8e0
    MOV EDX,dword ptr [EAX]             ; 0041a8d0
    MOV dword ptr [EBX],EDX             ; 0041a8d2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a8d4
    MOV dword ptr [EBX + 0x4],EDX       ; 0041a8d7
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a8da
    MOV dword ptr [EBX + 0x8],EDX       ; 0041a8dd
    PUSH EBP                            ; 0041a8e0
        ;   Label: LAB_0041a8e0
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0041a8e1
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    XOR EDI,EDI                         ; 0041a8e6
    MOV EAX,dword ptr [EBP + 0x74c]     ; 0041a8e8
    ADD ESP,0x4                         ; 0041a8ee
    TEST EAX,EAX                        ; 0041a8f1
    JLE 0x0041a960                      ; 0041a8f3
        ;   XREF to: 0041a960 (CONDITIONAL_JUMP)  ; LAB_0041a960
    LEA EBX,[EBP + 0x750]               ; 0041a8f5
    PUSH EBX                            ; 0041a8fb
        ;   Label: LAB_0041a8fb
    LEA EAX,[ESP + 0x164]               ; 0041a8fc
    PUSH EAX                            ; 0041a903
    LEA EAX,[ESP + 0x128]               ; 0041a904
    PUSH EAX                            ; 0041a90b
    MOV ESI,EBX                         ; 0041a90c
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041a90e
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0041a913
    CMP EBX,EAX                         ; 0041a916
    JZ 0x0041a92a                       ; 0041a918
        ;   XREF to: 0041a92a (CONDITIONAL_JUMP)  ; LAB_0041a92a
    MOV EDX,dword ptr [EAX]             ; 0041a91a
    MOV dword ptr [EBX],EDX             ; 0041a91c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a91e
    MOV dword ptr [EBX + 0x4],EDX       ; 0041a921
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a924
    MOV dword ptr [EBX + 0x8],EDX       ; 0041a927
    PUSH ESI                            ; 0041a92a
        ;   Label: LAB_0041a92a
    LEA EAX,[ESP + 0x158]               ; 0041a92b
    PUSH EAX                            ; 0041a932
    PUSH EBP                            ; 0041a933
    ADD EBX,0x2b0                       ; 0041a934
    INC EDI                             ; 0041a93a
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041a93b
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA ECX,[ESI + 0x2c]                ; 0041a940
    MOV EDX,dword ptr [EAX]             ; 0041a943
    MOV dword ptr [ECX],EDX             ; 0041a945
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a947
    MOV dword ptr [ECX + 0x4],EDX       ; 0041a94a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a94d
    MOV dword ptr [ECX + 0x8],EDX       ; 0041a950
    MOV EDX,dword ptr [EBP + 0x74c]     ; 0041a953
    ADD ESP,0xc                         ; 0041a959
    CMP EDI,EDX                         ; 0041a95c
    JL 0x0041a8fb                       ; 0041a95e
        ;   XREF to: 0041a8fb (CONDITIONAL_JUMP)  ; LAB_0041a8fb
    XOR ECX,ECX                         ; 0041a960
        ;   Label: LAB_0041a960
    MOV EBX,dword ptr [EBP + 0x28c]     ; 0041a962
    MOV dword ptr [ESP + 0x1a8],ECX     ; 0041a968
    TEST EBX,EBX                        ; 0041a96f
    JLE 0x0041aa2a                      ; 0041a971
        ;   XREF to: 0041aa2a (CONDITIONAL_JUMP)  ; LAB_0041aa2a
    LEA EBX,[EBP + 0x290]               ; 0041a977
    PUSH EBX                            ; 0041a97d
        ;   Label: LAB_0041a97d
    LEA EAX,[ESP + 0x170]               ; 0041a97e
    PUSH EAX                            ; 0041a985
    LEA EAX,[ESP + 0x128]               ; 0041a986
    PUSH EAX                            ; 0041a98d
    MOV EDI,EBX                         ; 0041a98e
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 0041a990
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0041a995
    CMP EBX,EAX                         ; 0041a998
    JZ 0x0041a9ac                       ; 0041a99a
        ;   XREF to: 0041a9ac (CONDITIONAL_JUMP)  ; LAB_0041a9ac
    MOV EDX,dword ptr [EAX]             ; 0041a99c
    MOV dword ptr [EBX],EDX             ; 0041a99e
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a9a0
    MOV dword ptr [EBX + 0x4],EDX       ; 0041a9a3
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a9a6
    MOV dword ptr [EBX + 0x8],EDX       ; 0041a9a9
    ADD EDI,0xc                         ; 0041a9ac
        ;   Label: LAB_0041a9ac
    PUSH EDI                            ; 0041a9af
    PUSH 0x3f87558                      ; 0041a9b0 | g_ZeroVector
    LEA EAX,[ESP + 0x38]                ; 0041a9b5
    PUSH EAX                            ; 0041a9b9
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 0041a9ba
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 0041a9bf
    LEA EAX,[ESP + 0x90]                ; 0041a9c2
    PUSH EAX                            ; 0041a9c9
    LEA EAX,[ESP + 0x34]                ; 0041a9ca
    PUSH EAX                            ; 0041a9ce
    LEA ESI,[ESP + 0x8]                 ; 0041a9cf
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0041a9d3
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0041a9d8
    LEA EAX,[ESP + 0x148]               ; 0041a9db
    PUSH EAX                            ; 0041a9e2
    LEA EAX,[ESP + 0x94]                ; 0041a9e3
    PUSH EAX                            ; 0041a9ea
    CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690 ; 0041a9eb
        ;   XREF to: 005f5690 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_matrixToEulerAngles_FUN_005f5690(CMatrix3x3f * matrix_in, CVector3f * euler_out)
    ADD ESP,0x8                         ; 0041a9f0
    CMP EDI,EAX                         ; 0041a9f3
    JZ 0x0041aa07                       ; 0041a9f5
        ;   XREF to: 0041aa07 (CONDITIONAL_JUMP)  ; LAB_0041aa07
    MOV EDX,dword ptr [EAX]             ; 0041a9f7
    MOV dword ptr [EDI],EDX             ; 0041a9f9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a9fb
    MOV dword ptr [EDI + 0x4],EDX       ; 0041a9fe
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041aa01
    MOV dword ptr [EDI + 0x8],EDX       ; 0041aa04
    MOV ESI,dword ptr [ESP + 0x1a8]     ; 0041aa07
        ;   Label: LAB_0041aa07
    ADD EBX,0x194                       ; 0041aa0e
    INC ESI                             ; 0041aa14
    MOV EDI,dword ptr [EBP + 0x28c]     ; 0041aa15
    MOV dword ptr [ESP + 0x1a8],ESI     ; 0041aa1b
    CMP ESI,EDI                         ; 0041aa22
    JL 0x0041a97d                       ; 0041aa24
        ;   XREF to: 0041a97d (CONDITIONAL_JUMP)  ; LAB_0041a97d
    ADD ESP,0x1b4                       ; 0041aa2a
        ;   Label: LAB_0041aa2a
    POP EBP                             ; 0041aa30
    POP EDI                             ; 0041aa31
    POP ESI                             ; 0041aa32
    POP EBX                             ; 0041aa33
    RET                                 ; 0041aa34

