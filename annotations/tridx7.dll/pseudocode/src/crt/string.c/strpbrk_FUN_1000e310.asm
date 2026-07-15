; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strpbrk_FUN_1000e310(char *str,char *control)
;
; Parameters:
; char *           Stack[0x4]:4   str
; char *           Stack[0x8]:4   control
;
; XREF[1]:
;   crt_locale.c_setlocale_FUN_1000ac10 at 1000accb
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 1000e310
        ;   Label: crt_string.c_strpbrk_FUN_1000e310
    MOV EBP,ESP                         ; 1000e311
    PUSH ESI                            ; 1000e313
    XOR EAX,EAX                         ; 1000e314
    PUSH EAX                            ; 1000e316
    PUSH EAX                            ; 1000e317
    PUSH EAX                            ; 1000e318
    PUSH EAX                            ; 1000e319
    PUSH EAX                            ; 1000e31a
    PUSH EAX                            ; 1000e31b
    PUSH EAX                            ; 1000e31c
    PUSH EAX                            ; 1000e31d
    MOV EDX,dword ptr [EBP + 0xc]       ; 1000e31e
    MOV EAX,EAX                         ; 1000e321
    MOV AL,byte ptr [EDX]               ; 1000e324
        ;   Label: LAB_1000e324
    OR AL,AL                            ; 1000e326
    JZ 0x1000e331                       ; 1000e328
        ;   XREF to: 1000e331 (CONDITIONAL_JUMP)  ; LAB_1000e331
    INC EDX                             ; 1000e32a
    BTS [ESP],EAX                       ; 1000e32b
    JMP 0x1000e324                      ; 1000e32f
        ;   XREF to: 1000e324 (UNCONDITIONAL_JUMP)  ; LAB_1000e324
    MOV ESI,dword ptr [EBP + 0x8]       ; 1000e331
        ;   Label: LAB_1000e331
    MOV AL,byte ptr [ESI]               ; 1000e334
        ;   Label: LAB_1000e334
    OR AL,AL                            ; 1000e336
    JZ 0x1000e344                       ; 1000e338
        ;   XREF to: 1000e344 (CONDITIONAL_JUMP)  ; LAB_1000e344
    INC ESI                             ; 1000e33a
    BT [ESP],EAX                        ; 1000e33b
    JNC 0x1000e334                      ; 1000e33f
        ;   XREF to: 1000e334 (CONDITIONAL_JUMP)  ; LAB_1000e334
    LEA EAX,[ESI + -0x1]                ; 1000e341
    ADD ESP,0x20                        ; 1000e344
        ;   Label: LAB_1000e344
    POP ESI                             ; 1000e347
    LEAVE                               ; 1000e348
    RET                                 ; 1000e349

