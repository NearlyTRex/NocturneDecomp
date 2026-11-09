; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_0056023e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0264bc68
;   undefined4 DAT_0264bcfc
;   undefined4 DAT_0264bd04
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0056023e
        ;   Label: engine_special.cpp_FUN_0056023e
    CMP dword ptr [0x0264bc68],0x0      ; 00560240 | DAT_0264bc68
    JNZ 0x0056024c                      ; 00560247
        ;   XREF to: 0056024c (CONDITIONAL_JUMP)  ; LAB_0056024c
    XOR EAX,EAX                         ; 00560249
    RET                                 ; 0056024b
        ;   Label: LAB_0056024b
    CALL dword ptr [0x0264bc68]         ; 0056024c | DAT_0264bc68
        ;   Label: LAB_0056024c
    TEST EAX,EAX                        ; 00560252
    JZ 0x0056024b                       ; 00560254
        ;   XREF to: 0056024b (CONDITIONAL_JUMP)  ; LAB_0056024b
    MOV EAX,[0x006141c0]                ; 00560256 | DAT_006141c0
    MOV [0x0264bcfc],EAX                ; 0056025b | DAT_0264bcfc
    MOV EAX,[0x0264bd04]                ; 00560260 | DAT_0264bd04
    MOV [0x006141c0],EAX                ; 00560265 | DAT_006141c0
    MOV EAX,0x1                         ; 0056026a
    RET                                 ; 0056026f

