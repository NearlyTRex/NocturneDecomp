; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0056f930(int *param_1)
;
;
; XREF[1]:
;   FUN_00504270 at 0050429b
;
; Called Functions:
;   FUN_0056fc30
;   Ordinal_23
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f930
        ;   Label: FUN_0056f930
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f931
    PUSH EBX                            ; 0056f935
    CALL FUN_0056fc30                   ; 0056f936
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fc30()
    ADD ESP,0x4                         ; 0056f93b
    PUSH 0x0                            ; 0056f93e
    PUSH 0x2                            ; 0056f940
    PUSH 0x2                            ; 0056f942
    CALL Ordinal_23                     ; 0056f944
        ;   XREF to: 005b25c8 (UNCONDITIONAL_CALL)  ; undefined Ordinal_23()
    MOV dword ptr [EBX],EAX             ; 0056f949
    CMP EAX,-0x1                        ; 0056f94b
    SETNZ AL                            ; 0056f94e
    AND EAX,0xff                        ; 0056f951
    POP EBX                             ; 0056f956
    RET                                 ; 0056f957

