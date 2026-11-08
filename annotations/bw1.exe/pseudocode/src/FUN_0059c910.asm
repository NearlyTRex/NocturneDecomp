; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0059c910(int *param_1)
;
;
; Called Functions:
;   FUN_0059cc40
;   Ordinal_23
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c910
        ;   Label: FUN_0059c910
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c911
    PUSH EBX                            ; 0059c915
    CALL FUN_0059cc40                   ; 0059c916
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0059cc40()
    ADD ESP,0x4                         ; 0059c91b
    PUSH 0x0                            ; 0059c91e
    PUSH 0x1                            ; 0059c920
    PUSH 0x2                            ; 0059c922
    CALL Ordinal_23                     ; 0059c924
        ;   XREF to: 005cf838 (UNCONDITIONAL_CALL)  ; undefined Ordinal_23()
    MOV dword ptr [EBX],EAX             ; 0059c929
    CMP EAX,-0x1                        ; 0059c92b
    SETNZ AL                            ; 0059c92e
    AND EAX,0xff                        ; 0059c931
    POP EBX                             ; 0059c936
    RET                                 ; 0059c937

