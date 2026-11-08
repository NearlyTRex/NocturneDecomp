; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte FUN_005cf2f0(uint param_1)
;
;
; XREF[1]:
;   FUN_005cf100 at 005cf106
;
; Referenced Globals:
;   undefined4 DAT_00626114
;
; Called Functions:
;   FUN_005cf340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cf2f0
        ;   Label: FUN_005cf2f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cf2f1
    PUSH EBX                            ; 005cf2f5
    CALL FUN_005cf340                   ; 005cf2f6
        ;   XREF to: 005cf340 (UNCONDITIONAL_CALL)  ; undefined FUN_005cf340()
    ADD ESP,0x4                         ; 005cf2fb
    TEST EAX,EAX                        ; 005cf2fe
    JZ 0x005cf31d                       ; 005cf300
        ;   XREF to: 005cf31d (CONDITIONAL_JUMP)  ; LAB_005cf31d
    CMP EBX,0x8281                      ; 005cf302
    JC 0x005cf319                       ; 005cf308
        ;   XREF to: 005cf319 (CONDITIONAL_JUMP)  ; LAB_005cf319
    CMP EBX,0x829a                      ; 005cf30a
    JA 0x005cf319                       ; 005cf310
        ;   XREF to: 005cf319 (CONDITIONAL_JUMP)  ; LAB_005cf319
    MOV EAX,0x1                         ; 005cf312
    POP EBX                             ; 005cf317
    RET                                 ; 005cf318
    XOR EAX,EAX                         ; 005cf319
        ;   Label: LAB_005cf319
    POP EBX                             ; 005cf31b
    RET                                 ; 005cf31c
    MOV AL,BL                           ; 005cf31d
        ;   Label: LAB_005cf31d
    INC AL                              ; 005cf31f
    AND EAX,0xff                        ; 005cf321
    MOV AL,byte ptr [EAX + 0x626114]    ; 005cf326 | DAT_00626114
    AND AL,0x80                         ; 005cf32c
    AND EAX,0xff                        ; 005cf32e
    POP EBX                             ; 005cf333
    RET                                 ; 005cf334

