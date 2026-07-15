; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; size_t __cdecl crt_string_c_strcspn_FUN_1000e290(char *str,char *control)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   control
;
; XREF[2]:
;   crt_locale.c__lc_strtolc_FUN_1000b380 at 1000b3e6
;   crt_locale.c_setlocale_FUN_1000ac10 at 1000ad41
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 1000e290
        ;   Label: crt_string.c_strcspn_FUN_1000e290
    MOV EBP,ESP                         ; 1000e291
    PUSH ESI                            ; 1000e293
    XOR EAX,EAX                         ; 1000e294
    PUSH EAX                            ; 1000e296
    PUSH EAX                            ; 1000e297
    PUSH EAX                            ; 1000e298
    PUSH EAX                            ; 1000e299
    PUSH EAX                            ; 1000e29a
    PUSH EAX                            ; 1000e29b
    PUSH EAX                            ; 1000e29c
    PUSH EAX                            ; 1000e29d
    MOV EDX,dword ptr [EBP + 0xc]       ; 1000e29e
    MOV EAX,EAX                         ; 1000e2a1
    MOV AL,byte ptr [EDX]               ; 1000e2a4
        ;   Label: LAB_1000e2a4
    OR AL,AL                            ; 1000e2a6
    JZ 0x1000e2b1                       ; 1000e2a8
        ;   XREF to: 1000e2b1 (CONDITIONAL_JUMP)  ; LAB_1000e2b1
    INC EDX                             ; 1000e2aa
    BTS [ESP],EAX                       ; 1000e2ab
    JMP 0x1000e2a4                      ; 1000e2af
        ;   XREF to: 1000e2a4 (UNCONDITIONAL_JUMP)  ; LAB_1000e2a4
    MOV ESI,dword ptr [EBP + 0x8]       ; 1000e2b1
        ;   Label: LAB_1000e2b1
    OR ECX,0xffffffff                   ; 1000e2b4
    NOP                                 ; 1000e2b7
    INC ECX                             ; 1000e2b8
        ;   Label: LAB_1000e2b8
    MOV AL,byte ptr [ESI]               ; 1000e2b9
    OR AL,AL                            ; 1000e2bb
    JZ 0x1000e2c6                       ; 1000e2bd
        ;   XREF to: 1000e2c6 (CONDITIONAL_JUMP)  ; LAB_1000e2c6
    INC ESI                             ; 1000e2bf
    BT [ESP],EAX                        ; 1000e2c0
    JNC 0x1000e2b8                      ; 1000e2c4
        ;   XREF to: 1000e2b8 (CONDITIONAL_JUMP)  ; LAB_1000e2b8
    MOV EAX,ECX                         ; 1000e2c6
        ;   Label: LAB_1000e2c6
    ADD ESP,0x20                        ; 1000e2c8
    POP ESI                             ; 1000e2cb
    LEAVE                               ; 1000e2cc
    RET                                 ; 1000e2cd

