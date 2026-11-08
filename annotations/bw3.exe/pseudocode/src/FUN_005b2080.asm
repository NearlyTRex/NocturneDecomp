; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte FUN_005b2080(uint param_1)
;
;
; XREF[1]:
;   FUN_005b1e90 at 005b1e96
;
; Referenced Globals:
;   undefined4 DAT_006074b8
;
; Called Functions:
;   FUN_005b20d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2080
        ;   Label: FUN_005b2080
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b2081
    PUSH EBX                            ; 005b2085
    CALL FUN_005b20d0                   ; 005b2086
        ;   XREF to: 005b20d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b20d0()
    ADD ESP,0x4                         ; 005b208b
    TEST EAX,EAX                        ; 005b208e
    JZ 0x005b20ad                       ; 005b2090
        ;   XREF to: 005b20ad (CONDITIONAL_JUMP)  ; LAB_005b20ad
    CMP EBX,0x8281                      ; 005b2092
    JC 0x005b20a9                       ; 005b2098
        ;   XREF to: 005b20a9 (CONDITIONAL_JUMP)  ; LAB_005b20a9
    CMP EBX,0x829a                      ; 005b209a
    JA 0x005b20a9                       ; 005b20a0
        ;   XREF to: 005b20a9 (CONDITIONAL_JUMP)  ; LAB_005b20a9
    MOV EAX,0x1                         ; 005b20a2
    POP EBX                             ; 005b20a7
    RET                                 ; 005b20a8
    XOR EAX,EAX                         ; 005b20a9
        ;   Label: LAB_005b20a9
    POP EBX                             ; 005b20ab
    RET                                 ; 005b20ac
    MOV AL,BL                           ; 005b20ad
        ;   Label: LAB_005b20ad
    INC AL                              ; 005b20af
    AND EAX,0xff                        ; 005b20b1
    MOV AL,byte ptr [EAX + 0x6074b8]    ; 005b20b6 | DAT_006074b8
    AND AL,0x80                         ; 005b20bc
    AND EAX,0xff                        ; 005b20be
    POP EBX                             ; 005b20c3
    RET                                 ; 005b20c4

