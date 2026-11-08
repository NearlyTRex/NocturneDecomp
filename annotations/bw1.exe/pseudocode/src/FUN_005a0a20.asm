; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a0a20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059f540
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a0a20
        ;   Label: FUN_005a0a20
    PUSH EDX                            ; 005a0a24
    CALL FUN_0059f540                   ; 005a0a25
        ;   XREF to: 0059f540 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f540()
    ADD ESP,0x4                         ; 005a0a2a
    MOV dword ptr [EAX],0x607384        ; 005a0a2d
    RET                                 ; 005a0a33

