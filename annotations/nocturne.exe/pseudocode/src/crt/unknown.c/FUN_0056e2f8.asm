; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e2f8(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e7fc at 0056e87d
;
; Referenced Globals:
;   undefined4 DAT_02de5c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e2f8
        ;   Label: crt_unknown.c_FUN_0056e2f8
    PUSH ESI                            ; 0056e2f9
    MOV EDX,dword ptr [0x02de5c10]      ; 0056e2fa | DAT_02de5c10
    XOR ESI,ESI                         ; 0056e300
    TEST EDX,EDX                        ; 0056e302
    JLE 0x0056e321                      ; 0056e304
        ;   XREF to: 0056e321 (CONDITIONAL_JUMP)  ; LAB_0056e321
    MOV EBX,0x2de55e0                   ; 0056e306
    PUSH EBX                            ; 0056e30b
        ;   Label: LAB_0056e30b
    INC ESI                             ; 0056e30c
    CALL dword ptr CS:[0x5754a4]        ; 0056e30d
    MOV ECX,dword ptr [0x02de5c10]      ; 0056e314 | DAT_02de5c10
    ADD EBX,0x18                        ; 0056e31a
    CMP ESI,ECX                         ; 0056e31d
    JL 0x0056e30b                       ; 0056e31f
        ;   XREF to: 0056e30b (CONDITIONAL_JUMP)  ; LAB_0056e30b
    POP ESI                             ; 0056e321
        ;   Label: LAB_0056e321
    POP EBX                             ; 0056e322
    RET                                 ; 0056e323

