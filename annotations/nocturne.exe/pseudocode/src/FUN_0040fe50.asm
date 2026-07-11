; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040fe50(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004b4800 at 004b484e
;
; Referenced Globals:
;   undefined4 DAT_00599940
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x599940                       ; 0040fe50 | DAT_00599940
        ;   Label: FUN_0040fe50
    PUSH 0x32                           ; 0040fe55
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe57
    PUSH EDX                            ; 0040fe5b
    CALL FUN_0056494f                   ; 0040fe5c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0040fe61
    RET                                 ; 0040fe64

