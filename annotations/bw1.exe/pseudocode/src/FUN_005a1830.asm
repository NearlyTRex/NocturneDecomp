; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1830(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a14b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1830
        ;   Label: FUN_005a1830
    PUSH EDX                            ; 005a1834
    CALL FUN_005a14b0                   ; 005a1835
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a14b0()
    ADD ESP,0x4                         ; 005a183a
    MOV dword ptr [EAX],0x607424        ; 005a183d
    RET                                 ; 005a1843

