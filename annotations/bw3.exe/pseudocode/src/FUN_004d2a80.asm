; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_004d2a80(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005c4c17
;
; Called Functions:
;   FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH 0x5c4c17                       ; 004d2a80 | = "CBugs"
        ;   Label: FUN_004d2a80
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d2a85
    PUSH EDX                            ; 004d2a89
    CALL FUN_0040c790                   ; 004d2a8a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c790()
    ADD ESP,0x8                         ; 004d2a8f
    TEST EAX,EAX                        ; 004d2a92
    SETZ AL                             ; 004d2a94
    AND EAX,0xff                        ; 004d2a97
    RET                                 ; 004d2a9c

