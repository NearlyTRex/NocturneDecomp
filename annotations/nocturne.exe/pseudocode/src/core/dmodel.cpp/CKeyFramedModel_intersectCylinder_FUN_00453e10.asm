; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_dmodel_cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10(int param_1,int param_2,undefined4 param_3,float *param_4)
;
;
; XREF[1]:
;   FUN_00510a40 at 00510e27
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_0057ccf6
;   TerminatedCString s_Tried_to_call_CKeyFramed_0057cd09
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100
;   core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453e10
        ;   Label: core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00453e10
    PUSH ESI                            ; 00453e11
    PUSH EDI                            ; 00453e12
    PUSH EBP                            ; 00453e13
    MOV EDI,dword ptr [ESP + 0x14]      ; 00453e14
    MOV EBX,dword ptr [ESP + 0x18]      ; 00453e18
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00453e1c
    MOV EDX,dword ptr [ESP + 0x20]      ; 00453e20
    MOV ECX,dword ptr [EDI + 0x100]     ; 00453e24
    CMP EBX,ECX                         ; 00453e2a
    JL 0x00453e31                       ; 00453e2c
        ;   XREF to: 00453e31 (CONDITIONAL_JUMP)  ; LAB_00453e31
    LEA EBX,[ECX + -0x1]                ; 00453e2e
    TEST EBX,EBX                        ; 00453e31
        ;   Label: LAB_00453e31
    JL 0x00453ed5                       ; 00453e33
        ;   XREF to: 00453ed5 (CONDITIONAL_JUMP)  ; LAB_00453ed5
    LEA ESI,[EDI + 0x364]               ; 00453e39
        ;   Label: LAB_00453e39
    FLD float ptr [ESI]                 ; 00453e3f
    FCOMP float ptr [EDX]               ; 00453e41
    FNSTSW AX                           ; 00453e43
    SAHF                                ; 00453e45
    JZ 0x00453edc                       ; 00453e46
        ;   XREF to: 00453edc (CONDITIONAL_JUMP)  ; LAB_00453edc
    PUSH EDX                            ; 00453e4c
        ;   Label: LAB_00453e4c
    PUSH EDI                            ; 00453e4d
    CALL core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100 ; 00453e4e
        ;   XREF to: 00454100 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_populateCollisionList_FUN_00454100()
    ADD ESP,0x8                         ; 00453e53
    CMP dword ptr [EDI + 0x358],0x0     ; 00453e56
        ;   Label: LAB_00453e56
    JNZ 0x00453e82                      ; 00453e5d
        ;   XREF to: 00453e82 (CONDITIONAL_JUMP)  ; LAB_00453e82
    PUSH EDI                            ; 00453e5f
    MOV EAX,0x57ccf6                    ; 00453e60 | = "..\\core\\dmodel.cpp"
    MOV EDX,0x40e                       ; 00453e65
    PUSH 0x57cd09                       ; 00453e6a | = "Tried to call CKeyFramedModel::inters..."
    MOV [0x01cc4800],EAX                ; 00453e6f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00453e74 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00453e7a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00453e7f
    MOV ESI,dword ptr [EDI + 0x354]     ; 00453e82
        ;   Label: LAB_00453e82
    IMUL EBX,ESI                        ; 00453e88
    SHL EBX,0x3                         ; 00453e8b
    MOV ESI,EBX                         ; 00453e8e
    SHL EBX,0x3                         ; 00453e90
    SUB EBX,ESI                         ; 00453e93
    MOV ESI,dword ptr [EDI + 0x358]     ; 00453e95
    MOV ECX,dword ptr [EDI + 0x354]     ; 00453e9b
    ADD ESI,EBX                         ; 00453ea1
    XOR EBX,EBX                         ; 00453ea3
    TEST ECX,ECX                        ; 00453ea5
    JLE 0x00453ed0                      ; 00453ea7
        ;   XREF to: 00453ed0 (CONDITIONAL_JUMP)  ; LAB_00453ed0
    PUSH EBP                            ; 00453ea9
        ;   Label: LAB_00453ea9
    PUSH ESI                            ; 00453eaa
    INC EBX                             ; 00453eab
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0 ; 00453eac
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0()
    ADD ESP,0x8                         ; 00453eb1
    MOV EAX,dword ptr [EDI + 0x354]     ; 00453eb4
    ADD ESI,0x38                        ; 00453eba
    CMP EBX,EAX                         ; 00453ebd
    JL 0x00453ea9                       ; 00453ebf
        ;   XREF to: 00453ea9 (CONDITIONAL_JUMP)  ; LAB_00453ea9
    LEA EAX,[EAX]                       ; 00453ec1
    LEA EDX,[EDX]                       ; 00453ec7
    LEA EAX,[EAX]                       ; 00453ecd
    POP EBP                             ; 00453ed0
        ;   Label: LAB_00453ed0
    POP EDI                             ; 00453ed1
    POP ESI                             ; 00453ed2
    POP EBX                             ; 00453ed3
    RET                                 ; 00453ed4
    XOR EBX,EBX                         ; 00453ed5
        ;   Label: LAB_00453ed5
    JMP 0x00453e39                      ; 00453ed7
        ;   XREF to: 00453e39 (UNCONDITIONAL_JUMP)  ; LAB_00453e39
    FLD float ptr [ESI + 0x4]           ; 00453edc
        ;   Label: LAB_00453edc
    FCOMP float ptr [EDX + 0x4]         ; 00453edf
    FNSTSW AX                           ; 00453ee2
    SAHF                                ; 00453ee4
    JNZ 0x00453e4c                      ; 00453ee5
        ;   XREF to: 00453e4c (CONDITIONAL_JUMP)  ; LAB_00453e4c
    FLD float ptr [ESI + 0x8]           ; 00453eeb
    FCOMP float ptr [EDX + 0x8]         ; 00453eee
    FNSTSW AX                           ; 00453ef1
    SAHF                                ; 00453ef3
    JZ 0x00453e56                       ; 00453ef4
        ;   XREF to: 00453e56 (CONDITIONAL_JUMP)  ; LAB_00453e56
    JMP 0x00453e4c                      ; 00453efa
        ;   XREF to: 00453e4c (UNCONDITIONAL_JUMP)  ; LAB_00453e4c

