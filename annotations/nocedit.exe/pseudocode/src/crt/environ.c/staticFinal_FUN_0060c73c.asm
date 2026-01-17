; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_environ.c_staticFinal_FUN_0060c73c(void)
;
;
; Referenced Globals:
;   FreeEnvironmentStringsA* g_FreeEnvironmentStringsAFunc = 00211dba
;   char* g_EnvironmentStrings = 00000000
;   char** g_EnvironmentBlock
;   undefined4 DAT_03f9c150
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_unknown.c_FUN_0060e4f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0060c73c
        ;   Label: crt_environ.c_staticFinal_FUN_0060c73c
    PUSH EBP                            ; 0060c73d
    CALL crt_unknown.c_FUN_0060e4f0     ; 0060c73e
        ;   XREF to: 0060e4f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060e4f0()
    MOV EDX,dword ptr [0x03f9b864]      ; 0060c743 | g_EnvironmentBlock
    TEST EDX,EDX                        ; 0060c749
    JZ 0x0060c75e                       ; 0060c74b
        ;   XREF to: 0060c75e (CONDITIONAL_JUMP)  ; LAB_0060c75e
    PUSH EDX                            ; 0060c74d
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060c74e
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    XOR ECX,ECX                         ; 0060c753
    ADD ESP,0x4                         ; 0060c755
    MOV dword ptr [0x03f9b864],ECX      ; 0060c758 | g_EnvironmentBlock
    MOV ESI,dword ptr [0x03f9c150]      ; 0060c75e | DAT_03f9c150
        ;   Label: LAB_0060c75e
    TEST ESI,ESI                        ; 0060c764
    JZ 0x0060c779                       ; 0060c766
        ;   XREF to: 0060c779 (CONDITIONAL_JUMP)  ; LAB_0060c779
    PUSH ESI                            ; 0060c768
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060c769
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    XOR EBP,EBP                         ; 0060c76e
    ADD ESP,0x4                         ; 0060c770
    MOV dword ptr [0x03f9c150],EBP      ; 0060c773 | DAT_03f9c150
    MOV EAX,[0x00685011]                ; 0060c779 | g_EnvironmentStrings
        ;   Label: LAB_0060c779
    TEST EAX,EAX                        ; 0060c77e
    JZ 0x0060c78a                       ; 0060c780
        ;   XREF to: 0060c78a (CONDITIONAL_JUMP)  ; LAB_0060c78a
    PUSH EAX                            ; 0060c782
    CALL dword ptr CS:[0x611558]        ; 0060c783 | g_FreeEnvironmentStringsAFunc
    POP EBP                             ; 0060c78a
        ;   Label: LAB_0060c78a
    POP ESI                             ; 0060c78b
    RET                                 ; 0060c78c

