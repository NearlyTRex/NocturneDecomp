; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005cd210(void)
;
;
; XREF[2]:
;   FUN_005cd2f8 at 005cd36a
;   FUN_005cd3b8 at 005cd415
;
; Called Functions:
;   FUN_005cd144
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cd210
        ;   Label: FUN_005cd210
    PUSH 0x4                            ; 005cd211
    CALL FUN_005cd144                   ; 005cd213
        ;   XREF to: 005cd144 (UNCONDITIONAL_CALL)  ; undefined FUN_005cd144()
    ADD ESP,0x4                         ; 005cd218
    PUSH 0x7                            ; 005cd21b
    MOV EBX,EAX                         ; 005cd21d
    CALL FUN_005cd144                   ; 005cd21f
        ;   XREF to: 005cd144 (UNCONDITIONAL_CALL)  ; undefined FUN_005cd144()
    ADD ESP,0x4                         ; 005cd224
    CMP EBX,0x2                         ; 005cd227
    JZ 0x005cd231                       ; 005cd22a
        ;   XREF to: 005cd231 (CONDITIONAL_JUMP)  ; LAB_005cd231
    CMP EBX,0x3                         ; 005cd22c
    JNZ 0x005cd23b                      ; 005cd22f
        ;   XREF to: 005cd23b (CONDITIONAL_JUMP)  ; LAB_005cd23b
    CMP EAX,0x2                         ; 005cd231
        ;   Label: LAB_005cd231
    JZ 0x005cd242                       ; 005cd234
        ;   XREF to: 005cd242 (CONDITIONAL_JUMP)  ; LAB_005cd242
    CMP EAX,0x3                         ; 005cd236
    JZ 0x005cd242                       ; 005cd239
        ;   XREF to: 005cd242 (CONDITIONAL_JUMP)  ; LAB_005cd242
    MOV EAX,0x1                         ; 005cd23b
        ;   Label: LAB_005cd23b
    POP EBX                             ; 005cd240
    RET                                 ; 005cd241
    XOR EAX,EAX                         ; 005cd242
        ;   Label: LAB_005cd242
    POP EBX                             ; 005cd244
    RET                                 ; 005cd245

