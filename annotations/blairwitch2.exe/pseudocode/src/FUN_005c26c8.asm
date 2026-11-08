; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c26c8(void)
;
;
; XREF[1]:
;   FUN_005c2bcc at 005c2c4d
;
; Referenced Globals:
;   undefined4 DAT_02681070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c26c8
        ;   Label: FUN_005c26c8
    PUSH ESI                            ; 005c26c9
    MOV EDX,dword ptr [0x02681070]      ; 005c26ca | DAT_02681070
    XOR ESI,ESI                         ; 005c26d0
    TEST EDX,EDX                        ; 005c26d2
    JLE 0x005c26f1                      ; 005c26d4
        ;   XREF to: 005c26f1 (CONDITIONAL_JUMP)  ; LAB_005c26f1
    MOV EBX,0x2680a40                   ; 005c26d6
    PUSH EBX                            ; 005c26db
        ;   Label: LAB_005c26db
    INC ESI                             ; 005c26dc
    CALL dword ptr CS:[0x5c8524]        ; 005c26dd
    MOV ECX,dword ptr [0x02681070]      ; 005c26e4 | DAT_02681070
    ADD EBX,0x18                        ; 005c26ea
    CMP ESI,ECX                         ; 005c26ed
    JL 0x005c26db                       ; 005c26ef
        ;   XREF to: 005c26db (CONDITIONAL_JUMP)  ; LAB_005c26db
    POP ESI                             ; 005c26f1
        ;   Label: LAB_005c26f1
    POP EBX                             ; 005c26f2
    RET                                 ; 005c26f3

