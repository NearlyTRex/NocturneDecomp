; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0059f930(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005ef9bf
;
; Called Functions:
;   FUN_0059daa0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059f930
        ;   Label: FUN_0059f930
    PUSH 0x5ef9bf                       ; 0059f934 | = "Death"
    ADD EAX,0x10af8                     ; 0059f939
    PUSH EAX                            ; 0059f93e
    CALL FUN_0059daa0                   ; 0059f93f
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 0059f944
    TEST EAX,EAX                        ; 0059f947
    SETNZ AL                            ; 0059f949
    AND EAX,0xff                        ; 0059f94c
    RET                                 ; 0059f951

