; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059d170(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe9f0
;
; Called Functions:
;   FUN_00589ae0
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d170
        ;   Label: FUN_0059d170
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059d171
    TEST byte ptr [ESP + 0xc],0x4       ; 0059d175
    JNZ 0x0059d196                      ; 0059d17a
        ;   XREF to: 0059d196 (CONDITIONAL_JUMP)  ; LAB_0059d196
    PUSH 0x1                            ; 0059d17c
    PUSH EBX                            ; 0059d17e
    CALL FUN_00589ae0                   ; 0059d17f
        ;   XREF to: 00589ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00589ae0()
    ADD ESP,0x8                         ; 0059d184
    MOV DL,byte ptr [ESP + 0xc]         ; 0059d187
    MOV EBX,EAX                         ; 0059d18b
    TEST DL,0x2                         ; 0059d18d
    JNZ 0x0059d1b1                      ; 0059d190
        ;   XREF to: 0059d1b1 (CONDITIONAL_JUMP)  ; LAB_0059d1b1
    MOV EAX,EBX                         ; 0059d192
    POP EBX                             ; 0059d194
    RET                                 ; 0059d195
    PUSH 0x5fe9f0                       ; 0059d196 | DAT_005fe9f0
        ;   Label: LAB_0059d196
    PUSH EBX                            ; 0059d19b
    CALL FUN_005b7fa7                   ; 0059d19c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0059d1a1
    PUSH EAX                            ; 0059d1a4
    CALL FUN_005b7fce                   ; 0059d1a5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0059d1aa
    MOV EAX,EBX                         ; 0059d1ad
    POP EBX                             ; 0059d1af
    RET                                 ; 0059d1b0
    PUSH EAX                            ; 0059d1b1
        ;   Label: LAB_0059d1b1
    CALL FUN_005b7fdc                   ; 0059d1b2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0059d1b7
    MOV EAX,EBX                         ; 0059d1ba
    POP EBX                             ; 0059d1bc
    RET                                 ; 0059d1bd

