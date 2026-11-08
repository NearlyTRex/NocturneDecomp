; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00579030(int *param_1)
;
;
; Called Functions:
;   FUN_00579360
;   Ordinal_23
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579030
        ;   Label: FUN_00579030
    MOV EBX,dword ptr [ESP + 0x8]       ; 00579031
    PUSH EBX                            ; 00579035
    CALL FUN_00579360                   ; 00579036
        ;   XREF to: 00579360 (UNCONDITIONAL_CALL)  ; undefined FUN_00579360()
    ADD ESP,0x4                         ; 0057903b
    PUSH 0x0                            ; 0057903e
    PUSH 0x1                            ; 00579040
    PUSH 0x2                            ; 00579042
    CALL Ordinal_23                     ; 00579044
        ;   XREF to: 005c7526 (UNCONDITIONAL_CALL)  ; undefined Ordinal_23()
    MOV dword ptr [EBX],EAX             ; 00579049
    CMP EAX,-0x1                        ; 0057904b
    SETNZ AL                            ; 0057904e
    AND EAX,0xff                        ; 00579051
    POP EBX                             ; 00579056
    RET                                 ; 00579057

