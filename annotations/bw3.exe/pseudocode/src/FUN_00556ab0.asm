; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00556ab0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_0042e8c0 at 0042ea9f
;   FUN_0048c2e0 at 0048e051
;   FUN_0055ff40 at 00560023
;
; Called Functions:
;   FUN_00552f10
;   FUN_00556fd0
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00556ab0
        ;   Label: FUN_00556ab0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556ab2
    PUSH EDX                            ; 00556ab6
    CALL FUN_00552f10                   ; 00556ab7
        ;   XREF to: 00552f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00552f10()
    ADD ESP,0x8                         ; 00556abc
    TEST EAX,EAX                        ; 00556abf
    JNZ 0x00556ac4                      ; 00556ac1
        ;   XREF to: 00556ac4 (CONDITIONAL_JUMP)  ; LAB_00556ac4
    RET                                 ; 00556ac3
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556ac4
        ;   Label: LAB_00556ac4
    MOV dword ptr [EAX + 0x38],EDX      ; 00556ac8
    OR byte ptr [EAX + 0x118],0x8       ; 00556acb
    CALL FUN_00556fd0                   ; 00556ad2
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    MOV EAX,0x1                         ; 00556ad7
    RET                                 ; 00556adc

