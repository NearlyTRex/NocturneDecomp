; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005abb90(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a7f6c at 005a7fa1
;
; Referenced Globals:
;   void* PTR_GetStdHandle_005b35cc = 001b3f84
;
; Called Functions:
;   crt_unknown.c_FUN_005aba00
;   crt_unknown.c_FUN_005abbf8
;   GetStdHandle
;
; *****************************************************************************

section .text

    PUSH -0xa                           ; 005abb90
        ;   Label: crt_unknown.c_FUN_005abb90
    CALL dword ptr CS:[0x5b35cc]        ; 005abb92 | PTR_GetStdHandle_005b35cc
    MOV EDX,EAX                         ; 005abb99
    TEST EAX,EAX                        ; 005abb9b
    JZ 0x005abba4                       ; 005abb9d
        ;   XREF to: 005abba4 (CONDITIONAL_JUMP)  ; LAB_005abba4
    CMP EAX,-0x1                        ; 005abb9f
    JNZ 0x005abba9                      ; 005abba2
        ;   XREF to: 005abba9 (CONDITIONAL_JUMP)  ; LAB_005abba9
    CALL crt_unknown.c_FUN_005abbf8     ; 005abba4
        ;   XREF to: 005abbf8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abbf8()
        ;   Label: LAB_005abba4
    PUSH EAX                            ; 005abba9
        ;   Label: LAB_005abba9
    CALL crt_unknown.c_FUN_005aba00     ; 005abbaa
        ;   XREF to: 005aba00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aba00()
    ADD ESP,0x4                         ; 005abbaf
    PUSH -0xb                           ; 005abbb2
    CALL dword ptr CS:[0x5b35cc]        ; 005abbb4 | PTR_GetStdHandle_005b35cc
    MOV EDX,EAX                         ; 005abbbb
    TEST EAX,EAX                        ; 005abbbd
    JZ 0x005abbc6                       ; 005abbbf
        ;   XREF to: 005abbc6 (CONDITIONAL_JUMP)  ; LAB_005abbc6
    CMP EAX,-0x1                        ; 005abbc1
    JNZ 0x005abbcb                      ; 005abbc4
        ;   XREF to: 005abbcb (CONDITIONAL_JUMP)  ; LAB_005abbcb
    CALL crt_unknown.c_FUN_005abbf8     ; 005abbc6
        ;   XREF to: 005abbf8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abbf8()
        ;   Label: LAB_005abbc6
    PUSH EAX                            ; 005abbcb
        ;   Label: LAB_005abbcb
    CALL crt_unknown.c_FUN_005aba00     ; 005abbcc
        ;   XREF to: 005aba00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aba00()
    ADD ESP,0x4                         ; 005abbd1
    PUSH -0xc                           ; 005abbd4
    CALL dword ptr CS:[0x5b35cc]        ; 005abbd6 | PTR_GetStdHandle_005b35cc
    MOV EDX,EAX                         ; 005abbdd
    TEST EAX,EAX                        ; 005abbdf
    JZ 0x005abbe8                       ; 005abbe1
        ;   XREF to: 005abbe8 (CONDITIONAL_JUMP)  ; LAB_005abbe8
    CMP EAX,-0x1                        ; 005abbe3
    JNZ 0x005abbed                      ; 005abbe6
        ;   XREF to: 005abbed (CONDITIONAL_JUMP)  ; LAB_005abbed
    CALL crt_unknown.c_FUN_005abbf8     ; 005abbe8
        ;   XREF to: 005abbf8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abbf8()
        ;   Label: LAB_005abbe8
    PUSH EAX                            ; 005abbed
        ;   Label: LAB_005abbed
    CALL crt_unknown.c_FUN_005aba00     ; 005abbee
        ;   XREF to: 005aba00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aba00()
    ADD ESP,0x4                         ; 005abbf3
    RET                                 ; 005abbf6

