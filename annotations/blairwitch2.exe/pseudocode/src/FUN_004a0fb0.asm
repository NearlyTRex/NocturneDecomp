; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a0fb0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6c70
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0fb0
        ;   Label: FUN_004a0fb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a0fb1
    TEST byte ptr [ESP + 0xc],0x4       ; 004a0fb5
    JNZ 0x004a0fd6                      ; 004a0fba
        ;   XREF to: 004a0fd6 (CONDITIONAL_JUMP)  ; LAB_004a0fd6
    PUSH 0x1                            ; 004a0fbc
    PUSH EBX                            ; 004a0fbe
    CALL FUN_00589ae0                   ; 004a0fbf
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 004a0fc4
    MOV DL,byte ptr [ESP + 0xc]         ; 004a0fc7
    MOV EBX,EAX                         ; 004a0fcb
    TEST DL,0x2                         ; 004a0fcd
    JNZ 0x004a0ff1                      ; 004a0fd0
        ;   XREF to: 004a0ff1 (CONDITIONAL_JUMP)  ; LAB_004a0ff1
    MOV EAX,EBX                         ; 004a0fd2
    POP EBX                             ; 004a0fd4
    RET                                 ; 004a0fd5
    PUSH 0x5f6c70                       ; 004a0fd6 | DAT_005f6c70
        ;   Label: LAB_004a0fd6
    PUSH EBX                            ; 004a0fdb
    CALL FUN_005b7fa7                   ; 004a0fdc
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004a0fe1
    PUSH EAX                            ; 004a0fe4
    CALL FUN_005b7fce                   ; 004a0fe5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004a0fea
    MOV EAX,EBX                         ; 004a0fed
    POP EBX                             ; 004a0fef
    RET                                 ; 004a0ff0
    PUSH EAX                            ; 004a0ff1
        ;   Label: LAB_004a0ff1
    CALL FUN_005b7fdc                   ; 004a0ff2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a0ff7
    MOV EAX,EBX                         ; 004a0ffa
    POP EBX                             ; 004a0ffc
    RET                                 ; 004a0ffd

