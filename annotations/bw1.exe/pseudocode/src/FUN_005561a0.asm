; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005561a0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0054d340 at 0054d354
;
; Called Functions:
;   FUN_005c1066
;
; *****************************************************************************

section .text

    PUSH 0x605060                       ; 005561a0
        ;   Label: FUN_005561a0
    PUSH 0xfa                           ; 005561a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005561aa
    PUSH EDX                            ; 005561ae
    CALL FUN_005c1066                   ; 005561af
        ;   XREF to: 005c1066 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1066()
    ADD ESP,0xc                         ; 005561b4
    RET                                 ; 005561b7

