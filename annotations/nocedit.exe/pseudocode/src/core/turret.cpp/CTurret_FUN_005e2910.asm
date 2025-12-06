; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * core_turret.cpp_CTurret_FUN_005e2910(CTurret * this_ptr)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x100]:1  local_100
; undefined1       Stack[-0xd0]:1  local_d0
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   CVector3f g_ZeroVector
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30
;   core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e2910
        ;   Label: core_turret.cpp_CTurret_FUN_005e2910
    PUSH EBP                            ; 005e2911
    SUB ESP,0xf8                        ; 005e2912
    MOV EBX,dword ptr [ESP + 0x104]     ; 005e2918
    MOV EBP,dword ptr [ESP + 0x108]     ; 005e291f
    PUSH 0x0                            ; 005e2926
    PUSH EBX                            ; 005e2928
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30 ; 005e2929 | undefined core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30()
        ;   XREF to: 005e2b30 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xfc],EAX      ; 005e292e
    FLD float ptr [ESP + 0xfc]          ; 005e2935
    LEA EAX,[EBX + 0x158]               ; 005e293c
    ADD ESP,0x8                         ; 005e2942
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e2945 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    PUSH EAX                            ; 005e294a
    FISTP dword ptr [ESP + 0xf8]        ; 005e294b
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e2952 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e2957
    MOV EDX,dword ptr [ESP + 0xf4]      ; 005e295a
    MOV ECX,EAX                         ; 005e2961
    LEA EAX,[EDX*0x4 + 0x0]             ; 005e2963
    SUB EAX,EDX                         ; 005e296a
    SHL EAX,0x3                         ; 005e296c
    MOV EDX,dword ptr [ECX + 0x5690]    ; 005e296f
    ADD EAX,EDX                         ; 005e2975
    MOV EDX,dword ptr [EAX]             ; 005e2977
    LEA ECX,[EAX + 0x4]                 ; 005e2979
    MOV dword ptr [EBP],EDX             ; 005e297c
    LEA EDX,[EBP + 0x4]                 ; 005e297f
    MOV ECX,dword ptr [ECX]             ; 005e2982
    MOV dword ptr [EDX],ECX             ; 005e2984
    LEA ECX,[EAX + 0x8]                 ; 005e2986
    MOV ECX,dword ptr [ECX]             ; 005e2989
    MOV dword ptr [EDX + 0x4],ECX       ; 005e298b
    MOV ECX,dword ptr [EAX + 0xc]       ; 005e298e
    ADD EAX,0xc                         ; 005e2991
    MOV dword ptr [EDX + 0x8],ECX       ; 005e2994
    LEA ECX,[EAX + 0x4]                 ; 005e2997
    MOV ECX,dword ptr [ECX]             ; 005e299a
    MOV dword ptr [EDX + 0xc],ECX       ; 005e299c
    MOV EAX,dword ptr [EAX + 0x8]       ; 005e299f
    MOV dword ptr [EDX + 0x10],EAX      ; 005e29a2
    LEA EAX,[EBX + 0x584]               ; 005e29a5
    PUSH EAX                            ; 005e29ab
    MOV dword ptr [ESP + 0xf4],EAX      ; 005e29ac
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e29b3 | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [EAX + 0x110]     ; 005e29b8
    ADD ESP,0x4                         ; 005e29be
    CMP ECX,0x1                         ; 005e29c1
    JGE 0x005e29d1                      ; 005e29c4 | LAB_005e29d1
        ;   XREF to: 005e29d1 (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 005e29c6
    ADD ESP,0xf8                        ; 005e29c8
    POP EBP                             ; 005e29ce
    POP EBX                             ; 005e29cf
    RET                                 ; 005e29d0
    PUSH EDI                            ; 005e29d1
        ;   Label: LAB_005e29d1
    PUSH ESI                            ; 005e29d2
    LEA EAX,[EBX + 0x578]               ; 005e29d3
    PUSH EAX                            ; 005e29d9
    PUSH 0x3f87558                      ; 005e29da | CVector3f g_ZeroVector
    LEA EAX,[ESP + 0xa0]                ; 005e29df
    PUSH EAX                            ; 005e29e6
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0 ; 005e29e7 | void core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
        ;   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e29ec
    LEA EAX,[EBX + 0x30]                ; 005e29ef
    PUSH EAX                            ; 005e29f2
    PUSH 0x3f87558                      ; 005e29f3 | CVector3f g_ZeroVector
    LEA EAX,[ESP + 0x10]                ; 005e29f8
    PUSH EAX                            ; 005e29fc
    CALL core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390 ; 005e29fd | void core_xform.cpp_buildMatrixFromEulerAndPosition_FUN_005f5390(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
        ;   XREF to: 005f5390 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e2a02
    LEA EAX,[ESP + 0x8]                 ; 005e2a05
    PUSH EAX                            ; 005e2a09
    LEA EAX,[ESP + 0x9c]                ; 005e2a0a
    PUSH EAX                            ; 005e2a11
    LEA ESI,[ESP + 0x70]                ; 005e2a12
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 005e2a16 | CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * output_matrix, CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b)
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e2a1b
    LEA EDI,[ESP + 0x38]                ; 005e2a1e
    PUSH 0x1                            ; 005e2a22
    MOV ECX,0xc                         ; 005e2a24
    LEA ESI,[ESP + 0x6c]                ; 005e2a29
    PUSH EBX                            ; 005e2a2d
    MOVSD.REP ES:EDI,ESI                ; 005e2a2e
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30 ; 005e2a30 | undefined core_turret.cpp_CTurret_getCurFrame_FUN_005e2b30()
        ;   XREF to: 005e2b30 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x104],EAX     ; 005e2a35
    FLD float ptr [ESP + 0x104]         ; 005e2a3c
    ADD ESP,0x8                         ; 005e2a43
    MOV EBX,dword ptr [ESP + 0xf8]      ; 005e2a46
    CALL crt_math.c_round_FUN_005fe6b0  ; 005e2a4d | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 005e2a52
    FISTP dword ptr [ESP + 0x100]       ; 005e2a53
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 005e2a5a | CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005e2a5f
    MOV EDX,dword ptr [ESP + 0xfc]      ; 005e2a62
    MOV EBX,EAX                         ; 005e2a69
    LEA EAX,[EDX*0x4 + 0x0]             ; 005e2a6b
    SUB EAX,EDX                         ; 005e2a72
    MOV EBX,dword ptr [EBX + 0x5690]    ; 005e2a74
    SHL EAX,0x3                         ; 005e2a7a
    ADD EBX,EAX                         ; 005e2a7d
    MOV EAX,dword ptr [EBX]             ; 005e2a7f
    MOV dword ptr [ESP + 0xc8],EAX      ; 005e2a81
    LEA EAX,[EBX + 0x4]                 ; 005e2a88
    MOV EAX,dword ptr [EAX]             ; 005e2a8b
    MOV dword ptr [ESP + 0xcc],EAX      ; 005e2a8d
    LEA EAX,[EBX + 0x8]                 ; 005e2a94
    MOV EAX,dword ptr [EAX]             ; 005e2a97
    MOV dword ptr [ESP + 0xd0],EAX      ; 005e2a99
    MOV EAX,dword ptr [EBX + 0xc]       ; 005e2aa0
    ADD EBX,0xc                         ; 005e2aa3
    MOV dword ptr [ESP + 0xd4],EAX      ; 005e2aa6
    LEA EAX,[EBX + 0x4]                 ; 005e2aad
    MOV EAX,dword ptr [EAX]             ; 005e2ab0
    MOV dword ptr [ESP + 0xd8],EAX      ; 005e2ab2
    LEA EAX,[EBX + 0x8]                 ; 005e2ab9
    MOV EAX,dword ptr [EAX]             ; 005e2abc
    XOR EBX,EBX                         ; 005e2abe
    MOV dword ptr [ESP + 0xdc],EAX      ; 005e2ac0
    POP ESI                             ; 005e2ac7
    POP EDI                             ; 005e2ac8
    LEA EAX,[ESP + 0x30]                ; 005e2ac9
        ;   Label: LAB_005e2ac9
    PUSH EAX                            ; 005e2acd
    PUSH EBX                            ; 005e2ace
    LEA EAX,[ESP + 0xec]                ; 005e2acf
    PUSH EAX                            ; 005e2ad6
    LEA EAX,[ESP + 0xcc]                ; 005e2ad7
    PUSH EAX                            ; 005e2ade
    CALL core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0 ; 005e2adf | CVector3f * core_box.cpp_CBoundingBox3D_getCorner_FUN_004202b0(CBoundingBox3D * this_ptr, CVector3f * out_point, uint corner_index)
        ;   XREF to: 004202b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e2ae4
    PUSH EAX                            ; 005e2ae7
    LEA EAX,[ESP + 0xe0]                ; 005e2ae8
    PUSH EAX                            ; 005e2aef
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 005e2af0 | CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005e2af5
    PUSH EAX                            ; 005e2af8
    PUSH EBP                            ; 005e2af9
    INC EBX                             ; 005e2afa
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 005e2afb | void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005e2b00
    CMP EBX,0x8                         ; 005e2b03
    JL 0x005e2ac9                       ; 005e2b06 | LAB_005e2ac9
        ;   XREF to: 005e2ac9 (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 005e2b08
    ADD ESP,0xf8                        ; 005e2b0a
    POP EBP                             ; 005e2b10
    POP EBX                             ; 005e2b11
    RET                                 ; 005e2b12

