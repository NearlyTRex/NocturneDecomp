; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool unkafter_zombie_cpp_FUN_005cb110(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cb1a4 at 005cb1ba
;
; Referenced Globals:
;   void* PTR_GetProcAddress_005d05c8 = 001d0f6c
;   void* PTR_LoadLibraryA_005d05f8 = 001d104e
;   TerminatedCString s_USER32_DLL_005faca0
;   TerminatedCString s_GetActiveWindow_005facac
;
; Called Functions:
;   GetProcAddress
;   LoadLibraryA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb110
        ;   Label: unkafter_zombie.cpp_FUN_005cb110
    PUSH 0x5faca0                       ; 005cb111 | = "USER32.DLL"
    CALL dword ptr CS:[0x5d05f8]        ; 005cb116 | PTR_LoadLibraryA_005d05f8
    XOR EBX,EBX                         ; 005cb11d
    TEST EAX,EAX                        ; 005cb11f
    JZ 0x005cb13a                       ; 005cb121
        ;   XREF to: 005cb13a (CONDITIONAL_JUMP)  ; LAB_005cb13a
    PUSH 0x5facac                       ; 005cb123 | = "GetActiveWindow"
    PUSH EAX                            ; 005cb128
    CALL dword ptr CS:[0x5d05c8]        ; 005cb129 | PTR_GetProcAddress_005d05c8
    MOV EDX,EAX                         ; 005cb130
    TEST EAX,EAX                        ; 005cb132
    JZ 0x005cb13a                       ; 005cb134
        ;   XREF to: 005cb13a (CONDITIONAL_JUMP)  ; LAB_005cb13a
    CALL EDX                            ; 005cb136
    MOV EBX,EAX                         ; 005cb138
    TEST EBX,EBX                        ; 005cb13a
        ;   Label: LAB_005cb13a
    SETNZ AL                            ; 005cb13c
    AND EAX,0xff                        ; 005cb13f
    POP EBX                             ; 005cb144
    RET                                 ; 005cb145

