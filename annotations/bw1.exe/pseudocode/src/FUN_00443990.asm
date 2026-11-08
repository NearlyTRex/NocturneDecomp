; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00443990(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00442ba0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443990
        ;   Label: FUN_00443990
    PUSH EDX                            ; 00443994
    CALL FUN_00442ba0                   ; 00443995
        ;   XREF to: 00442ba0 (UNCONDITIONAL_CALL)  ; undefined FUN_00442ba0()
    ADD ESP,0x4                         ; 0044399a
    MOV dword ptr [EAX],0x5fda14        ; 0044399d
    RET                                 ; 004439a3

