; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_10002f40(void)
;
;
; XREF[2]:
;   APIDLLinit at 10001d42
;   APIDLLsetVideoMode at 10002804
;
; Referenced Globals:
;   undefined4 DAT_10012148
;   undefined4 DAT_10014188
;   undefined4 DAT_100141dc
;
; *****************************************************************************

section .text

    PUSH 0x100141dc                     ; 10002f40 | DAT_100141dc
        ;   Label: FUN_10002f40
    MOV EAX,[0x10014188]                ; 10002f45 | DAT_10014188
    PUSH 0x10012148                     ; 10002f4a | DAT_10012148
    PUSH EAX                            ; 10002f4f
    MOV EAX,dword ptr [EAX]             ; 10002f50
    CALL dword ptr [EAX]                ; 10002f52
    CMP EAX,0x1                         ; 10002f54
    SBB EAX,EAX                         ; 10002f57
    NEG EAX                             ; 10002f59
    RET                                 ; 10002f5b

