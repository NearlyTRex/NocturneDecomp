; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool crt_unknown_c_FUN_005c2e10(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c2ea4 at 005c2eba
;
; Referenced Globals:
;   void* PTR_GetProcAddress_005c85b8 = 001c8f44
;   void* PTR_LoadLibraryA_005c85e4 = 001c9012
;   TerminatedCString s_USER32_DLL_005f1af8
;   TerminatedCString s_GetActiveWindow_005f1b04
;
; Called Functions:
;   GetProcAddress
;   LoadLibraryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2e10
        ;   Label: crt_unknown.c_FUN_005c2e10
    PUSH 0x5f1af8                       ; 005c2e11 | = "USER32.DLL"
    CALL dword ptr CS:[0x5c85e4]        ; 005c2e16 | PTR_LoadLibraryA_005c85e4
    XOR EBX,EBX                         ; 005c2e1d
    TEST EAX,EAX                        ; 005c2e1f
    JZ 0x005c2e3a                       ; 005c2e21
        ;   XREF to: 005c2e3a (CONDITIONAL_JUMP)  ; LAB_005c2e3a
    PUSH 0x5f1b04                       ; 005c2e23 | = "GetActiveWindow"
    PUSH EAX                            ; 005c2e28
    CALL dword ptr CS:[0x5c85b8]        ; 005c2e29 | PTR_GetProcAddress_005c85b8
    MOV EDX,EAX                         ; 005c2e30
    TEST EAX,EAX                        ; 005c2e32
    JZ 0x005c2e3a                       ; 005c2e34
        ;   XREF to: 005c2e3a (CONDITIONAL_JUMP)  ; LAB_005c2e3a
    CALL EDX                            ; 005c2e36
    MOV EBX,EAX                         ; 005c2e38
    TEST EBX,EBX                        ; 005c2e3a
        ;   Label: LAB_005c2e3a
    SETNZ AL                            ; 005c2e3c
    AND EAX,0xff                        ; 005c2e3f
    POP EBX                             ; 005c2e44
    RET                                 ; 005c2e45

