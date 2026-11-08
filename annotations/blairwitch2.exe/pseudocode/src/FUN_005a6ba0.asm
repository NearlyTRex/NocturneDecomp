; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005a6ba0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00589b90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a6ba0
        ;   Label: FUN_005a6ba0
    PUSH EDX                            ; 005a6ba4
    CALL FUN_00589b90                   ; 005a6ba5
        ;   XREF to: 00589b90 (UNCONDITIONAL_CALL)  ; undefined FUN_00589b90()
    ADD ESP,0x4                         ; 005a6baa
    TEST EAX,EAX                        ; 005a6bad
    SETNZ AL                            ; 005a6baf
    AND EAX,0xff                        ; 005a6bb2
    RET                                 ; 005a6bb7

