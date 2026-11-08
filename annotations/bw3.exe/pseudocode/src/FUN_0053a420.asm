; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053a420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0053ab80 at 0053ac6d
;
; Called Functions:
;   FUN_0053a450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a420
        ;   Label: FUN_0053a420
    PUSH ESI                            ; 0053a421
    PUSH 0x48                           ; 0053a422
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0053a424
    PUSH EDX                            ; 0053a428
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0053a429
    PUSH ECX                            ; 0053a42d
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0053a42e
    PUSH EBX                            ; 0053a432
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0053a433
    PUSH ESI                            ; 0053a437
    CALL FUN_0053a450                   ; 0053a438
        ;   XREF to: 0053a450 (UNCONDITIONAL_CALL)  ; undefined FUN_0053a450()
    ADD ESP,0x14                        ; 0053a43d
    POP ESI                             ; 0053a440
    POP EBX                             ; 0053a441
    RET                                 ; 0053a442

