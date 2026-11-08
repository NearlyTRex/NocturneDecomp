; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0059c940(int *param_1)
;
;
; XREF[1]:
;   FUN_0052c970 at 0052c99b
;
; Called Functions:
;   FUN_0059cc40
;   Ordinal_23
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059c940
        ;   Label: FUN_0059c940
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059c941
    PUSH EBX                            ; 0059c945
    CALL FUN_0059cc40                   ; 0059c946
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0059cc40()
    ADD ESP,0x4                         ; 0059c94b
    PUSH 0x0                            ; 0059c94e
    PUSH 0x2                            ; 0059c950
    PUSH 0x2                            ; 0059c952
    CALL Ordinal_23                     ; 0059c954
        ;   XREF to: 005cf838 (UNCONDITIONAL_CALL)  ; undefined Ordinal_23()
    MOV dword ptr [EBX],EAX             ; 0059c959
    CMP EAX,-0x1                        ; 0059c95b
    SETNZ AL                            ; 0059c95e
    AND EAX,0xff                        ; 0059c961
    POP EBX                             ; 0059c966
    RET                                 ; 0059c967

