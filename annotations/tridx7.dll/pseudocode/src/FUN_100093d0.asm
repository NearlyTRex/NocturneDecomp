; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100093d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   FUN_100093f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 100093d0
        ;   Label: FUN_100093d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 100093d4
    MOV EDX,dword ptr [ESP + 0x4]       ; 100093d8
    PUSH EAX                            ; 100093dc
    PUSH 0x40                           ; 100093dd
    PUSH ECX                            ; 100093df
    PUSH EDX                            ; 100093e0
    CALL FUN_100093f0                   ; 100093e1
        ;   XREF to: 100093f0 (UNCONDITIONAL_CALL)  ; undefined FUN_100093f0()
    ADD ESP,0x10                        ; 100093e6
    RET                                 ; 100093e9

