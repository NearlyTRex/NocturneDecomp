; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte crt_unknown_c_FUN_005c6ff0(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c6e00 at 005c6e06
;
; Referenced Globals:
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   crt_unknown.c_FUN_005c7040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6ff0
        ;   Label: crt_unknown.c_FUN_005c6ff0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c6ff1
    PUSH EBX                            ; 005c6ff5
    CALL crt_unknown.c_FUN_005c7040     ; 005c6ff6
        ;   XREF to: 005c7040 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c7040()
    ADD ESP,0x4                         ; 005c6ffb
    TEST EAX,EAX                        ; 005c6ffe
    JZ 0x005c701d                       ; 005c7000
        ;   XREF to: 005c701d (CONDITIONAL_JUMP)  ; LAB_005c701d
    CMP EBX,0x8281                      ; 005c7002
    JC 0x005c7019                       ; 005c7008
        ;   XREF to: 005c7019 (CONDITIONAL_JUMP)  ; LAB_005c7019
    CMP EBX,0x829a                      ; 005c700a
    JA 0x005c7019                       ; 005c7010
        ;   XREF to: 005c7019 (CONDITIONAL_JUMP)  ; LAB_005c7019
    MOV EAX,0x1                         ; 005c7012
    POP EBX                             ; 005c7017
    RET                                 ; 005c7018
    XOR EAX,EAX                         ; 005c7019
        ;   Label: LAB_005c7019
    POP EBX                             ; 005c701b
    RET                                 ; 005c701c
    MOV AL,BL                           ; 005c701d
        ;   Label: LAB_005c701d
    INC AL                              ; 005c701f
    AND EAX,0xff                        ; 005c7021
    MOV AL,byte ptr [EAX + 0x61ed94]    ; 005c7026 | DAT_0061ed94
    AND AL,0x80                         ; 005c702c
    AND EAX,0xff                        ; 005c702e
    POP EBX                             ; 005c7033
    RET                                 ; 005c7034

