; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053cc70(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00477370
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0053cc70
        ;   Label: FUN_0053cc70
    MOV EDX,dword ptr [ESP + 0x10]      ; 0053cc73
    PUSH EDX                            ; 0053cc77
    PUSH 0x203b37c                      ; 0053cc78
    CALL FUN_00477370                   ; 0053cc7d
        ;   XREF to: 00477370 (UNCONDITIONAL_CALL)  ; undefined FUN_00477370()
    MOV dword ptr [ESP + 0xc],EAX       ; 0053cc82
    FLD float ptr [ESP + 0xc]           ; 0053cc86
    ADD ESP,0x8                         ; 0053cc8a
    FSTP float ptr [ESP]                ; 0053cc8d
    MOV EAX,dword ptr [ESP]             ; 0053cc90
    ADD ESP,0x8                         ; 0053cc93
    RET                                 ; 0053cc96

