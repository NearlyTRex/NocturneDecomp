; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_FUN_005fbd00(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_zombie.cpp_CZombie_FUN_005fb530 at 005fb6de
;   core_zombie.cpp_CZombie_FUN_005fbda0 at 005fbdab
;   core_zombie.cpp_CZombie_process_FUN_005f9470 at 005f992d
;
; Referenced Globals:
;   TerminatedCString s_jeff_dfm_00658919
;   TerminatedCString s_new_00658922
;
; Called Functions:
;   crt_string.c_stricmp_FUN_005fe7f0
;   crt_string.c_strnicmp_FUN_005ff070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fbd00
        ;   Label: core_zombie.cpp_CZombie_FUN_005fbd00
    PUSH EBP                            ; 005fbd01
    MOV EBP,ESP                         ; 005fbd02
    MOV EBX,dword ptr [EBP + 0x10]      ; 005fbd04
    CMP EBX,0x2                         ; 005fbd07
    JZ 0x005fbd26                       ; 005fbd0a
        ;   XREF to: 005fbd26 (CONDITIONAL_JUMP)  ; LAB_005fbd26
    MOV EAX,dword ptr [EBP + 0xc]       ; 005fbd0c
    PUSH 0x658919                       ; 005fbd0f | = "jeff.dfm"
    ADD EAX,0x23b8                      ; 005fbd14
    PUSH EAX                            ; 005fbd19
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 005fbd1a
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 005fbd1f
    TEST EAX,EAX                        ; 005fbd22
    JZ 0x005fbd56                       ; 005fbd24
        ;   XREF to: 005fbd56 (CONDITIONAL_JUMP)  ; LAB_005fbd56
    PUSH 0x3                            ; 005fbd26
        ;   Label: LAB_005fbd26
    MOV EAX,dword ptr [EBP + 0xc]       ; 005fbd28
    PUSH 0x658922                       ; 005fbd2b | = "new"
    ADD EAX,0x23b8                      ; 005fbd30
    PUSH EAX                            ; 005fbd35
    CALL crt_string.c_strnicmp_FUN_005ff070 ; 005fbd36
        ;   XREF to: 005ff070 (UNCONDITIONAL_CALL)  ; int crt_string.c_strnicmp_FUN_005ff070(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005fbd3b
    TEST EAX,EAX                        ; 005fbd3e
    JNZ 0x005fbd78                      ; 005fbd40
        ;   XREF to: 005fbd78 (CONDITIONAL_JUMP)  ; LAB_005fbd78
    CMP EBX,0x2                         ; 005fbd42
    JNC 0x005fbd60                      ; 005fbd45
        ;   XREF to: 005fbd60 (CONDITIONAL_JUMP)  ; LAB_005fbd60
    CMP EBX,0x1                         ; 005fbd47
    JNZ 0x005fbd67                      ; 005fbd4a
        ;   XREF to: 005fbd67 (CONDITIONAL_JUMP)  ; LAB_005fbd67
    MOV EBX,0x1                         ; 005fbd4c
        ;   Label: LAB_005fbd4c
    MOV EAX,EBX                         ; 005fbd51
    POP EBP                             ; 005fbd53
    POP EBX                             ; 005fbd54
    RET                                 ; 005fbd55
    MOV EBX,0xffffffff                  ; 005fbd56
        ;   Label: LAB_005fbd56
    MOV EAX,EBX                         ; 005fbd5b
    POP EBP                             ; 005fbd5d
    POP EBX                             ; 005fbd5e
    RET                                 ; 005fbd5f
    JBE 0x005fbd4c                      ; 005fbd60
        ;   XREF to: 005fbd4c (CONDITIONAL_JUMP)  ; LAB_005fbd4c
        ;   Label: LAB_005fbd60
    CMP EBX,0x3                         ; 005fbd62
    JZ 0x005fbd4c                       ; 005fbd65
        ;   XREF to: 005fbd4c (CONDITIONAL_JUMP)  ; LAB_005fbd4c
    MOV EBX,0xffffffff                  ; 005fbd67
        ;   Label: LAB_005fbd67
    MOV EAX,EBX                         ; 005fbd6c
    POP EBP                             ; 005fbd6e
    POP EBX                             ; 005fbd6f
    RET                                 ; 005fbd70
    XOR EBX,EBX                         ; 005fbd71
        ;   Label: LAB_005fbd71
    MOV EAX,EBX                         ; 005fbd73
    POP EBP                             ; 005fbd75
    POP EBX                             ; 005fbd76
    RET                                 ; 005fbd77
    CMP EBX,0x2                         ; 005fbd78
        ;   Label: LAB_005fbd78
    JNC 0x005fbd8c                      ; 005fbd7b
        ;   XREF to: 005fbd8c (CONDITIONAL_JUMP)  ; LAB_005fbd8c
    CMP EBX,0x1                         ; 005fbd7d
    JZ 0x005fbd4c                       ; 005fbd80
        ;   XREF to: 005fbd4c (CONDITIONAL_JUMP)  ; LAB_005fbd4c
    MOV EBX,0xffffffff                  ; 005fbd82
    MOV EAX,EBX                         ; 005fbd87
    POP EBP                             ; 005fbd89
    POP EBX                             ; 005fbd8a
    RET                                 ; 005fbd8b
    JBE 0x005fbd71                      ; 005fbd8c
        ;   XREF to: 005fbd71 (CONDITIONAL_JUMP)  ; LAB_005fbd71
        ;   Label: LAB_005fbd8c
    CMP EBX,0x3                         ; 005fbd8e
    JZ 0x005fbd4c                       ; 005fbd91
        ;   XREF to: 005fbd4c (CONDITIONAL_JUMP)  ; LAB_005fbd4c
    MOV EBX,0xffffffff                  ; 005fbd93
    MOV EAX,EBX                         ; 005fbd98
    POP EBP                             ; 005fbd9a
    POP EBX                             ; 005fbd9b
    RET                                 ; 005fbd9c

