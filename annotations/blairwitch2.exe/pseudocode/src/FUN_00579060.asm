; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00579060(int *param_1)
;
;
; XREF[1]:
;   FUN_0050b790 at 0050b7bb
;
; Called Functions:
;   FUN_00579360
;   Ordinal_23
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579060
        ;   Label: FUN_00579060
    MOV EBX,dword ptr [ESP + 0x8]       ; 00579061
    PUSH EBX                            ; 00579065
    CALL FUN_00579360                   ; 00579066
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; undefined FUN_00579360()
    ADD ESP,0x4                         ; 0057906b
    PUSH 0x0                            ; 0057906e
    PUSH 0x2                            ; 00579070
    PUSH 0x2                            ; 00579072
    CALL Ordinal_23                     ; 00579074
        ;   XREF to: 005c7526 (UNCONDITIONAL_CALL)  ; undefined Ordinal_23()
    MOV dword ptr [EBX],EAX             ; 00579079
    CMP EAX,-0x1                        ; 0057907b
    SETNZ AL                            ; 0057907e
    AND EAX,0xff                        ; 00579081
    POP EBX                             ; 00579086
    RET                                 ; 00579087

