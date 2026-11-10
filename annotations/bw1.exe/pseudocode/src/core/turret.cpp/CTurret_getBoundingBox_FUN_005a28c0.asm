; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_turret_cpp_CTurret_getBoundingBox_FUN_005a28c0(CTurret *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420500
;   core_box.cpp_FUN_00420570
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_turret.cpp_CTurret_getCurFrame_FUN_005a2ae0
;   core_xform.cpp_FUN_005b5080
;   core_xform.cpp_FUN_005b5620
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a28c0
        ;   Label: core_turret.cpp_CTurret_getBoundingBox_FUN_005a28c0
    PUSH EDI                            ; 005a28c1
    PUSH EBP                            ; 005a28c2
    SUB ESP,0x124                       ; 005a28c3
    MOV EBP,ESI                         ; 005a28c9
    PUSH 0x0                            ; 005a28cb
    MOV EDX,dword ptr [ESP + 0x138]     ; 005a28cd
    PUSH EDX                            ; 005a28d4
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_005a2ae0 ; 005a28d5
        ;   XREF to: 005a2ae0 (UNCONDITIONAL_CALL)  ; float core_turret.cpp_CTurret_getCurFrame_FUN_005a2ae0(CTurret * this_ptr, int model_index)
    MOV dword ptr [ESP + 0x128],EAX     ; 005a28da
    FLD float ptr [ESP + 0x128]         ; 005a28e1
    ADD ESP,0x8                         ; 005a28e8
    MOV EAX,dword ptr [ESP + 0x134]     ; 005a28eb
    ADD EAX,0x158                       ; 005a28f2
    CALL crt_math.c_round_FUN_005c03a0  ; 005a28f7
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 005a28fc
    FISTP dword ptr [ESP + 0x124]       ; 005a28fd
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a2904
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a2909
    MOV ESI,dword ptr [ESP + 0x120]     ; 005a290c
    LEA EBX,[ESI*0x4 + 0x0]             ; 005a2913
    SUB EBX,ESI                         ; 005a291a
    SHL EBX,0x3                         ; 005a291c
    MOV ESI,dword ptr [EAX + 0x350]     ; 005a291f
    ADD ESI,EBX                         ; 005a2925
    MOV EBX,dword ptr [ESP + 0x134]     ; 005a2927
    LEA EDI,[ESP + 0xc0]                ; 005a292e
    ADD EBX,0x584                       ; 005a2935
    MOV ECX,0x6                         ; 005a293b
    PUSH EBX                            ; 005a2940
    MOVSD.REP ES:EDI,ESI                ; 005a2941
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a2943
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    MOV ECX,dword ptr [EAX + 0x110]     ; 005a2948
    ADD ESP,0x4                         ; 005a294e
    CMP ECX,0x1                         ; 005a2951
    JGE 0x005a297c                      ; 005a2954
        ;   XREF to: 005a297c (CONDITIONAL_JUMP)  ; LAB_005a297c
    LEA EAX,[EAX]                       ; 005a2956
    LEA EDX,[EDX]                       ; 005a295c
    MOV ECX,0x6                         ; 005a2960
        ;   Label: LAB_005a2960
    LEA ESI,[ESP + 0xc0]                ; 005a2965
    MOV EDI,EBP                         ; 005a296c
    MOVSD.REP ES:EDI,ESI                ; 005a296e
    MOV EAX,EBP                         ; 005a2970
    ADD ESP,0x124                       ; 005a2972
    POP EBP                             ; 005a2978
    POP EDI                             ; 005a2979
    POP EBX                             ; 005a297a
    RET                                 ; 005a297b
    MOV EAX,dword ptr [ESP + 0x134]     ; 005a297c
        ;   Label: LAB_005a297c
    ADD EAX,0x578                       ; 005a2983
    PUSH EAX                            ; 005a2988
    PUSH 0x2c8af28                      ; 005a2989 | DAT_02c8af28
    LEA EAX,[ESP + 0x8]                 ; 005a298e
    PUSH EAX                            ; 005a2992
    CALL core_xform.cpp_FUN_005b5760    ; 005a2993
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005a2998
    MOV EAX,dword ptr [ESP + 0x134]     ; 005a299b
    ADD EAX,0x30                        ; 005a29a2
    PUSH EAX                            ; 005a29a5
    PUSH 0x2c8af28                      ; 005a29a6 | DAT_02c8af28
    LEA EAX,[ESP + 0x38]                ; 005a29ab
    PUSH EAX                            ; 005a29af
    CALL core_xform.cpp_FUN_005b5620    ; 005a29b0
        ;   XREF to: 005b5620 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5620(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 005a29b5
    LEA EAX,[ESP + 0x30]                ; 005a29b8
    PUSH EAX                            ; 005a29bc
    LEA EAX,[ESP + 0x4]                 ; 005a29bd
    PUSH EAX                            ; 005a29c1
    LEA ESI,[ESP + 0x68]                ; 005a29c2
    LEA EDI,[ESP + 0x98]                ; 005a29c6
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 005a29cd
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 005a29d2
    LEA ESI,[ESP + 0x68]                ; 005a29d7
    ADD ESP,0x8                         ; 005a29db
    MOVSD.REP ES:EDI,ESI                ; 005a29de
    PUSH 0x1                            ; 005a29e0
    MOV ESI,dword ptr [ESP + 0x138]     ; 005a29e2
    PUSH ESI                            ; 005a29e9
    CALL core_turret.cpp_CTurret_getCurFrame_FUN_005a2ae0 ; 005a29ea
        ;   XREF to: 005a2ae0 (UNCONDITIONAL_CALL)  ; float core_turret.cpp_CTurret_getCurFrame_FUN_005a2ae0(CTurret * this_ptr, int model_index)
    MOV dword ptr [ESP + 0x128],EAX     ; 005a29ef
    FLD float ptr [ESP + 0x128]         ; 005a29f6
    ADD ESP,0x8                         ; 005a29fd
    CALL crt_math.c_round_FUN_005c03a0  ; 005a2a00
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EBX                            ; 005a2a05
    FISTP dword ptr [ESP + 0x124]       ; 005a2a06
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 005a2a0d
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005a2a12
    MOV ESI,EAX                         ; 005a2a15
    MOV EAX,dword ptr [ESP + 0x120]     ; 005a2a17
    LEA EBX,[EAX*0x4 + 0x0]             ; 005a2a1e
    LEA EDI,[ESP + 0xd8]                ; 005a2a25
    SUB EBX,EAX                         ; 005a2a2c
    MOV ESI,dword ptr [ESI + 0x350]     ; 005a2a2e
    SHL EBX,0x3                         ; 005a2a34
    MOV ECX,0x6                         ; 005a2a37
    ADD ESI,EBX                         ; 005a2a3c
    XOR EBX,EBX                         ; 005a2a3e
    MOVSD.REP ES:EDI,ESI                ; 005a2a40
    LEA ESI,[ESP + 0x90]                ; 005a2a42
        ;   Label: LAB_005a2a42
    PUSH ESI                            ; 005a2a49
    PUSH EBX                            ; 005a2a4a
    LEA ESI,[ESP + 0xe0]                ; 005a2a4b
    PUSH ESI                            ; 005a2a52
    LEA ESI,[ESP + 0x114]               ; 005a2a53
    LEA EDI,[ESP + 0xfc]                ; 005a2a5a
    CALL core_box.cpp_FUN_00420570      ; 005a2a61
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    LEA ESI,[ESP + 0x114]               ; 005a2a66
    ADD ESP,0x8                         ; 005a2a6d
    MOVSD ES:EDI,ESI                    ; 005a2a70
    MOVSD ES:EDI,ESI                    ; 005a2a71
    MOVSD ES:EDI,ESI                    ; 005a2a72
    LEA ESI,[ESP + 0xf4]                ; 005a2a73
    PUSH ESI                            ; 005a2a7a
    LEA ESI,[ESP + 0x104]               ; 005a2a7b
    LEA EDI,[ESP + 0x11c]               ; 005a2a82
    CALL core_xform.cpp_FUN_005b5080    ; 005a2a89
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    LEA ESI,[ESP + 0x104]               ; 005a2a8e
    ADD ESP,0x8                         ; 005a2a95
    MOVSD ES:EDI,ESI                    ; 005a2a98
    MOVSD ES:EDI,ESI                    ; 005a2a99
    MOVSD ES:EDI,ESI                    ; 005a2a9a
    LEA ESI,[ESP + 0x114]               ; 005a2a9b
    PUSH ESI                            ; 005a2aa2
    LEA ESI,[ESP + 0xc4]                ; 005a2aa3
    PUSH ESI                            ; 005a2aaa
    INC EBX                             ; 005a2aab
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420500 ; 005a2aac
        ;   XREF to: 00420500 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420500(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 005a2ab1
    CMP EBX,0x8                         ; 005a2ab4
    JL 0x005a2a42                       ; 005a2ab7
        ;   XREF to: 005a2a42 (CONDITIONAL_JUMP)  ; LAB_005a2a42
    JMP 0x005a2960                      ; 005a2ab9
        ;   XREF to: 005a2960 (UNCONDITIONAL_JUMP)  ; LAB_005a2960

