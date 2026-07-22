; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonSolidLitOp62_FUN_00408010(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005b763c
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00404710
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_clipper.c_FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00408010
        ;   Label: engine_3d.c_renderPolygonSolidLitOp62_FUN_00408010
    PUSH EBP                            ; 00408011
    MOV EBP,dword ptr [ESP + 0xc]       ; 00408012
    LEA ESI,[EBP + 0x18]                ; 00408016
    LEA EAX,[EBP + 0x8]                 ; 00408019
    PUSH EAX                            ; 0040801c
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0040801d
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00408022
    TEST EAX,EAX                        ; 00408025
    JZ 0x00408113                       ; 00408027
        ;   XREF to: 00408113 (CONDITIONAL_JUMP)  ; LAB_00408113
    CMP dword ptr [0x01c03948],0x0      ; 0040802d | DAT_01c03948
    JNZ 0x004080d0                      ; 00408034
        ;   XREF to: 004080d0 (CONDITIONAL_JUMP)  ; LAB_004080d0
    CMP dword ptr [0x005b7624],0x20     ; 0040803a | DAT_005b7624
    JNZ 0x004080c4                      ; 00408041
        ;   XREF to: 004080c4 (CONDITIONAL_JUMP)  ; LAB_004080c4
    MOV dword ptr [0x01c00c7c],0x5300ec ; 00408047 | DAT_01c00c7c | LAB_005300ec
    PUSH EDI                            ; 00408051
        ;   Label: LAB_00408051
    PUSH EBX                            ; 00408052
    MOV EBX,0x13                        ; 00408053
    PUSH EBP                            ; 00408058
    MOV dword ptr [0x01c039a0],EBX      ; 00408059 | DAT_01c039a0
    CALL engine_3d.c_calculatePolygonLighting_FUN_00404710 ; 0040805f
        ;   XREF to: 00404710 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00404710()
    MOV EDI,dword ptr [0x005b763c]      ; 00408064 | DAT_005b763c
    ADD ESP,0x4                         ; 0040806a
    CMP EDI,0xff                        ; 0040806d
    JL 0x004080f7                       ; 00408073
        ;   XREF to: 004080f7 (CONDITIONAL_JUMP)  ; LAB_004080f7
    XOR EAX,EAX                         ; 00408079
        ;   Label: LAB_00408079
    XOR EDI,EDI                         ; 0040807b
    XOR ECX,ECX                         ; 0040807d
    XOR EBX,EBX                         ; 0040807f
    MOV [0x01c039a4],EAX                ; 00408081 | DAT_01c039a4
    MOV EAX,ESI                         ; 00408086
    MOV ESI,dword ptr [EBP + 0x4]       ; 00408088
        ;   Label: LAB_00408088
    LEA EDX,[ESI*0x4 + 0x0]             ; 0040808b
    SUB EDX,ESI                         ; 00408092
    CMP ECX,EDX                         ; 00408094
    JGE 0x00408103                      ; 00408096
        ;   XREF to: 00408103 (CONDITIONAL_JUMP)  ; LAB_00408103
    MOV EDX,dword ptr [EAX]             ; 00408098
    MOV dword ptr [EBX + 0x6b029c],EDX  ; 0040809a | DAT_006b029c | DAT_006b02a0
    IMUL ESI,EDX,0x30                   ; 004080a0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004080a3
    MOV dword ptr [ESI + 0x5c502c],EDX  ; 004080a6 | DAT_005c502c
    IMUL ESI,dword ptr [EAX],0x30       ; 004080ac
    ADD EAX,0xc                         ; 004080af
    ADD EBX,0x4                         ; 004080b2
    INC EDI                             ; 004080b5
    MOV EDX,dword ptr [EAX + -0x4]      ; 004080b6
    ADD ECX,0x3                         ; 004080b9
    MOV dword ptr [ESI + 0x5c5030],EDX  ; 004080bc | DAT_005c5030
    JMP 0x00408088                      ; 004080c2
        ;   XREF to: 00408088 (UNCONDITIONAL_JUMP)  ; LAB_00408088
    MOV dword ptr [0x01c00c7c],0x530322 ; 004080c4 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_004080c4
    JMP 0x00408051                      ; 004080ce
        ;   XREF to: 00408051 (UNCONDITIONAL_JUMP)  ; LAB_00408051
    CMP dword ptr [0x005b7624],0x20     ; 004080d0 | DAT_005b7624
        ;   Label: LAB_004080d0
    JNZ 0x004080e8                      ; 004080d7
        ;   XREF to: 004080e8 (CONDITIONAL_JUMP)  ; LAB_004080e8
    MOV dword ptr [0x01c00c7c],0x52f031 ; 004080d9 | DAT_01c00c7c | LAB_0052f031
    JMP 0x00408051                      ; 004080e3
        ;   XREF to: 00408051 (UNCONDITIONAL_JUMP)  ; LAB_00408051
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004080e8 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_004080e8
    JMP 0x00408051                      ; 004080f2
        ;   XREF to: 00408051 (UNCONDITIONAL_JUMP)  ; LAB_00408051
    OR byte ptr [0x01c039a0],0x20       ; 004080f7 | DAT_01c039a0
        ;   Label: LAB_004080f7
    JMP 0x00408079                      ; 004080fe
        ;   XREF to: 00408079 (UNCONDITIONAL_JUMP)  ; LAB_00408079
    PUSH 0x6b029c                       ; 00408103 | DAT_006b029c
        ;   Label: LAB_00408103
    PUSH EDI                            ; 00408108
    CALL engine_clipper.c_FUN_00432cd0  ; 00408109
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_FUN_00432cd0()
    ADD ESP,0x8                         ; 0040810e
    POP EBX                             ; 00408111
    POP EDI                             ; 00408112
    MOV EDX,dword ptr [EBP + 0x4]       ; 00408113
        ;   Label: LAB_00408113
    LEA EAX,[EDX*0x4 + 0x0]             ; 00408116
    SUB EAX,EDX                         ; 0040811d
    LEA EDX,[EAX*0x4 + 0x0]             ; 0040811f
    LEA EAX,[EBP + 0x18]                ; 00408126
    ADD EAX,EDX                         ; 00408129
    POP EBP                             ; 0040812b
    POP ESI                             ; 0040812c
    RET                                 ; 0040812d

