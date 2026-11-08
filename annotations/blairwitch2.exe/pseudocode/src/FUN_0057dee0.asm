; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057dee0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0057d860
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0057dee0
        ;   Label: FUN_0057dee0
    PUSH EDX                            ; 0057dee4
    CALL FUN_0057d860                   ; 0057dee5
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d860()
    ADD ESP,0x4                         ; 0057deea
    MOV dword ptr [EAX],0x5fd4b4        ; 0057deed
    RET                                 ; 0057def3

