; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_env_c_getenv_FUN_10010c50(char *name)
;
; Parameters:
; char *           Stack[0x4]:4   name
;
; XREF[2]:
;   crt_env.c_getenv_FUN_10010c20 at 10010c30
;   crt_time.c__tzset_FUN_10010050 at 1001007a
;
; Referenced Globals:
;   undefined4 DAT_10016d80
;   undefined4 DAT_10016d88
;
; Called Functions:
;   crt_env.c___env_compare_FUN_10010cf0
;   crt_env.c__build_ansi_environ_FUN_10010d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10010c50
        ;   Label: crt_env.c_getenv_FUN_10010c50
    PUSH ESI                            ; 10010c51
    PUSH EDI                            ; 10010c52
    PUSH EBP                            ; 10010c53
    MOV EBP,dword ptr [0x10016d80]      ; 10010c54 | DAT_10016d80
    TEST EBP,EBP                        ; 10010c5a
    JNZ 0x10010c81                      ; 10010c5c
        ;   XREF to: 10010c81 (CONDITIONAL_JUMP)  ; LAB_10010c81
    CMP dword ptr [0x10016d88],0x0      ; 10010c5e | DAT_10016d88
    JZ 0x10010c7d                       ; 10010c65
        ;   XREF to: 10010c7d (CONDITIONAL_JUMP)  ; LAB_10010c7d
    CALL crt_env.c__build_ansi_environ_FUN_10010d30 ; 10010c67
        ;   XREF to: 10010d30 (UNCONDITIONAL_CALL)  ; int crt_env.c__build_ansi_environ_FUN_10010d30()
    TEST EAX,EAX                        ; 10010c6c
    JZ 0x10010c77                       ; 10010c6e
        ;   XREF to: 10010c77 (CONDITIONAL_JUMP)  ; LAB_10010c77
    XOR EAX,EAX                         ; 10010c70
    POP EBP                             ; 10010c72
    POP EDI                             ; 10010c73
    POP ESI                             ; 10010c74
    POP EBX                             ; 10010c75
    RET                                 ; 10010c76
    MOV EBP,dword ptr [0x10016d80]      ; 10010c77 | DAT_10016d80
        ;   Label: LAB_10010c77
    TEST EBP,EBP                        ; 10010c7d
        ;   Label: LAB_10010c7d
    JZ 0x10010cd3                       ; 10010c7f
        ;   XREF to: 10010cd3 (CONDITIONAL_JUMP)  ; LAB_10010cd3
    MOV ESI,dword ptr [ESP + 0x14]      ; 10010c81
        ;   Label: LAB_10010c81
    TEST ESI,ESI                        ; 10010c85
    JZ 0x10010cd3                       ; 10010c87
        ;   XREF to: 10010cd3 (CONDITIONAL_JUMP)  ; LAB_10010cd3
    MOV EDI,ESI                         ; 10010c89
    MOV ECX,0xffffffff                  ; 10010c8b
    SUB EAX,EAX                         ; 10010c90
    SCASB.REPNE ES:EDI                  ; 10010c92
    NOT ECX                             ; 10010c94
    CMP dword ptr [EBP],0x0             ; 10010c96
    LEA EBX,[ECX + -0x1]                ; 10010c9a
    JZ 0x10010cd3                       ; 10010c9d
        ;   XREF to: 10010cd3 (CONDITIONAL_JUMP)  ; LAB_10010cd3
    MOV EDI,dword ptr [EBP]             ; 10010c9f
        ;   Label: LAB_10010c9f
    MOV ECX,0xffffffff                  ; 10010ca2
    SUB EAX,EAX                         ; 10010ca7
    SCASB.REPNE ES:EDI                  ; 10010ca9
    NOT ECX                             ; 10010cab
    DEC ECX                             ; 10010cad
    CMP ECX,EBX                         ; 10010cae
    JBE 0x10010cca                      ; 10010cb0
        ;   XREF to: 10010cca (CONDITIONAL_JUMP)  ; LAB_10010cca
    MOV EAX,dword ptr [EBP]             ; 10010cb2
    CMP byte ptr [EBX + EAX*0x1],0x3d   ; 10010cb5
    JNZ 0x10010cca                      ; 10010cb9
        ;   XREF to: 10010cca (CONDITIONAL_JUMP)  ; LAB_10010cca
    PUSH EBX                            ; 10010cbb
    PUSH ESI                            ; 10010cbc
    PUSH EAX                            ; 10010cbd
    CALL crt_env.c___env_compare_FUN_10010cf0 ; 10010cbe
        ;   XREF to: 10010cf0 (UNCONDITIONAL_CALL)  ; int crt_env.c___env_compare_FUN_10010cf0(char * s1, char * s2, int len)
    ADD ESP,0xc                         ; 10010cc3
    TEST EAX,EAX                        ; 10010cc6
    JZ 0x10010cda                       ; 10010cc8
        ;   XREF to: 10010cda (CONDITIONAL_JUMP)  ; LAB_10010cda
    ADD EBP,0x4                         ; 10010cca
        ;   Label: LAB_10010cca
    CMP dword ptr [EBP],0x0             ; 10010ccd
    JNZ 0x10010c9f                      ; 10010cd1
        ;   XREF to: 10010c9f (CONDITIONAL_JUMP)  ; LAB_10010c9f
    XOR EAX,EAX                         ; 10010cd3
        ;   Label: LAB_10010cd3
    POP EBP                             ; 10010cd5
    POP EDI                             ; 10010cd6
    POP ESI                             ; 10010cd7
    POP EBX                             ; 10010cd8
    RET                                 ; 10010cd9
    MOV EAX,dword ptr [EBP]             ; 10010cda
        ;   Label: LAB_10010cda
    POP EBP                             ; 10010cdd
    POP EDI                             ; 10010cde
    POP ESI                             ; 10010cdf
    LEA EAX,[EAX + EBX*0x1 + 0x1]       ; 10010ce0
    POP EBX                             ; 10010ce4
    RET                                 ; 10010ce5

