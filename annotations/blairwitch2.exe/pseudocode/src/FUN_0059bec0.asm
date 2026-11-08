; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059bec0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe5d0
;
; Called Functions:
;   FUN_0040d440
;   FUN_0059ab50
;   FUN_0059bfc0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059bec0
        ;   Label: FUN_0059bec0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059bec1
    TEST byte ptr [ESP + 0xc],0x4       ; 0059bec5
    JNZ 0x0059bf05                      ; 0059beca
        ;   XREF to: 0059bf05 (CONDITIONAL_JUMP)  ; LAB_0059bf05
    PUSH 0x0                            ; 0059becc
    ADD EBX,0x4c                        ; 0059bece
    PUSH EBX                            ; 0059bed1
    CALL FUN_0059bfc0                   ; 0059bed2
        ;   XREF to: 0059bfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059bfc0()
    ADD ESP,0x8                         ; 0059bed7
    PUSH 0x0                            ; 0059beda
    SUB EAX,0x48                        ; 0059bedc
    PUSH EAX                            ; 0059bedf
    CALL FUN_0040d440                   ; 0059bee0
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d440()
    ADD ESP,0x8                         ; 0059bee5
    PUSH 0x1                            ; 0059bee8
    LEA EBX,[EAX + -0x4]                ; 0059beea
    PUSH EBX                            ; 0059beed
    CALL FUN_0059ab50                   ; 0059beee
        ;   XREF to: 0059ab50 (UNCONDITIONAL_CALL)  ; undefined FUN_0059ab50()
    ADD ESP,0x8                         ; 0059bef3
    MOV DL,byte ptr [ESP + 0xc]         ; 0059bef6
    MOV EBX,EAX                         ; 0059befa
    TEST DL,0x2                         ; 0059befc
    JNZ 0x0059bf20                      ; 0059beff
        ;   XREF to: 0059bf20 (CONDITIONAL_JUMP)  ; LAB_0059bf20
    MOV EAX,EBX                         ; 0059bf01
    POP EBX                             ; 0059bf03
    RET                                 ; 0059bf04
    PUSH 0x5fe5d0                       ; 0059bf05 | DAT_005fe5d0
        ;   Label: LAB_0059bf05
    PUSH EBX                            ; 0059bf0a
    CALL FUN_005b7fa7                   ; 0059bf0b
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0059bf10
    PUSH EAX                            ; 0059bf13
    CALL FUN_005b7fce                   ; 0059bf14
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0059bf19
    MOV EAX,EBX                         ; 0059bf1c
    POP EBX                             ; 0059bf1e
    RET                                 ; 0059bf1f
    PUSH EAX                            ; 0059bf20
        ;   Label: LAB_0059bf20
    CALL FUN_005b7fdc                   ; 0059bf21
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0059bf26
    MOV EAX,EBX                         ; 0059bf29
    POP EBX                             ; 0059bf2b
    RET                                 ; 0059bf2c

