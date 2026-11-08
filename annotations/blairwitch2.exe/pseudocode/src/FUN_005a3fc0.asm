; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a3fc0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005a3d30 at 005a3e04
;
; Referenced Globals:
;   TerminatedCString s_VanishAttack_005f0283
;   TerminatedCString s_VanishAttack_005f0290
;   TerminatedCString s_MeleeAttack_005f029d
;   TerminatedCString s_MeleeAttack_005f02a9
;
; Called Functions:
;   FUN_0059d650
;   FUN_0059daa0
;   FUN_0059e8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3fc0
        ;   Label: FUN_005a3fc0
    PUSH ESI                            ; 005a3fc1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a3fc2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a3fc6
    TEST EBX,EBX                        ; 005a3fca
    JNZ 0x005a3fef                      ; 005a3fcc
        ;   XREF to: 005a3fef (CONDITIONAL_JUMP)  ; LAB_005a3fef
    LEA EAX,[ESI + 0x10af8]             ; 005a3fce
        ;   Label: LAB_005a3fce
    TEST EBX,EBX                        ; 005a3fd4
    JBE 0x005a3fff                      ; 005a3fd6
        ;   XREF to: 005a3fff (CONDITIONAL_JUMP)  ; LAB_005a3fff
    CMP EBX,0x1                         ; 005a3fd8
    JZ 0x005a400f                       ; 005a3fdb
        ;   XREF to: 005a400f (CONDITIONAL_JUMP)  ; LAB_005a400f
    LEA EAX,[ESI + 0x10af8]             ; 005a3fdd
        ;   Label: LAB_005a3fdd
    TEST EBX,EBX                        ; 005a3fe3
    JBE 0x005a4038                      ; 005a3fe5
        ;   XREF to: 005a4038 (CONDITIONAL_JUMP)  ; LAB_005a4038
    CMP EBX,0x1                         ; 005a3fe7
    JZ 0x005a4049                       ; 005a3fea
        ;   XREF to: 005a4049 (CONDITIONAL_JUMP)  ; LAB_005a4049
    POP ESI                             ; 005a3fec
        ;   Label: LAB_005a3fec
    POP EBX                             ; 005a3fed
    RET                                 ; 005a3fee
    PUSH EBX                            ; 005a3fef
        ;   Label: LAB_005a3fef
    PUSH dword ptr [ESP + 0x14]         ; 005a3ff0
    PUSH ESI                            ; 005a3ff4
    CALL FUN_0059e8c0                   ; 005a3ff5
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a3ffa
    JMP 0x005a3fce                      ; 005a3ffd
        ;   XREF to: 005a3fce (UNCONDITIONAL_JUMP)  ; LAB_005a3fce
    PUSH 0x5f0283                       ; 005a3fff | = "VanishAttack"
        ;   Label: LAB_005a3fff
    PUSH EAX                            ; 005a4004
    CALL FUN_0059d650                   ; 005a4005
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 005a400a
    JMP 0x005a3fdd                      ; 005a400d
        ;   XREF to: 005a3fdd (UNCONDITIONAL_JUMP)  ; LAB_005a3fdd
    PUSH 0x5f0290                       ; 005a400f | = "VanishAttack"
        ;   Label: LAB_005a400f
    PUSH EAX                            ; 005a4014
    CALL FUN_0059daa0                   ; 005a4015
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a401a
    TEST EAX,EAX                        ; 005a401d
    JZ 0x005a3fdd                       ; 005a401f
        ;   XREF to: 005a3fdd (CONDITIONAL_JUMP)  ; LAB_005a3fdd
    PUSH dword ptr [ESP + 0x10]         ; 005a4021
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a4025
    PUSH ESI                            ; 005a402b
    CALL dword ptr [EAX + 0x180]        ; 005a402c
    ADD ESP,0x8                         ; 005a4032
    POP ESI                             ; 005a4035
    POP EBX                             ; 005a4036
    RET                                 ; 005a4037
    PUSH 0x5f029d                       ; 005a4038 | = "MeleeAttack"
        ;   Label: LAB_005a4038
    PUSH EAX                            ; 005a403d
    CALL FUN_0059d650                   ; 005a403e
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 005a4043
    POP ESI                             ; 005a4046
    POP EBX                             ; 005a4047
    RET                                 ; 005a4048
    PUSH 0x5f02a9                       ; 005a4049 | = "MeleeAttack"
        ;   Label: LAB_005a4049
    PUSH EAX                            ; 005a404e
    CALL FUN_0059daa0                   ; 005a404f
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4054
    TEST EAX,EAX                        ; 005a4057
    JZ 0x005a3fec                       ; 005a4059
        ;   XREF to: 005a3fec (CONDITIONAL_JUMP)  ; LAB_005a3fec
    PUSH dword ptr [ESP + 0x10]         ; 005a405b
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a405f
    PUSH ESI                            ; 005a4065
    CALL dword ptr [EAX + 0x184]        ; 005a4066
    ADD ESP,0x8                         ; 005a406c
    POP ESI                             ; 005a406f
    POP EBX                             ; 005a4070
    RET                                 ; 005a4071

