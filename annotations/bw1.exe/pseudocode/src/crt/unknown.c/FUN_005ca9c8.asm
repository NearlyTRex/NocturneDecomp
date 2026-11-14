; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ca9c8(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005caecc at 005caf4d
;
; Referenced Globals:
;   undefined4 DAT_02c9ff60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca9c8
        ;   Label: crt_unknown.c_FUN_005ca9c8
    PUSH ESI                            ; 005ca9c9
    MOV EDX,dword ptr [0x02c9ff60]      ; 005ca9ca | DAT_02c9ff60
    XOR ESI,ESI                         ; 005ca9d0
    TEST EDX,EDX                        ; 005ca9d2
    JLE 0x005ca9f1                      ; 005ca9d4
        ;   XREF to: 005ca9f1 (CONDITIONAL_JUMP)  ; LAB_005ca9f1
    MOV EBX,0x2c9f930                   ; 005ca9d6
    PUSH EBX                            ; 005ca9db
        ;   Label: LAB_005ca9db
    INC ESI                             ; 005ca9dc
    CALL dword ptr CS:[0x5d0534]        ; 005ca9dd
    MOV ECX,dword ptr [0x02c9ff60]      ; 005ca9e4 | DAT_02c9ff60
    ADD EBX,0x18                        ; 005ca9ea
    CMP ESI,ECX                         ; 005ca9ed
    JL 0x005ca9db                       ; 005ca9ef
        ;   XREF to: 005ca9db (CONDITIONAL_JUMP)  ; LAB_005ca9db
    POP ESI                             ; 005ca9f1
        ;   Label: LAB_005ca9f1
    POP EBX                             ; 005ca9f2
    RET                                 ; 005ca9f3

