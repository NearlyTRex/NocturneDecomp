; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040fe10(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004b4800 at 004b486e
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 0040fe10 | DAT_005993b0
        ;   Label: FUN_0040fe10
    PUSH 0xf                            ; 0040fe15
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040fe17
    PUSH EDX                            ; 0040fe1b
    CALL FUN_0056494f                   ; 0040fe1c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0040fe21
    RET                                 ; 0040fe24

