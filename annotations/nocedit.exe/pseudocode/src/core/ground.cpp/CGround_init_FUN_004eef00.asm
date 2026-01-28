; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_ground_cpp_CGround_init_FUN_004eef00(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_ctor_FUN_005e1ef0 at 005e1f02
;
; Referenced Globals:
;   TerminatedCString s_core_ground_cpp_0062e696
;   TerminatedCString s_core_ground_cpp_0062e6a9
;   TerminatedCString s_CGround_init_Out_of_memo_0062e6bc
;   TerminatedCString s_core_ground_cpp_0062e6da
;   TerminatedCString s_core_ground_cpp_0062e6ed
;   TerminatedCString s_CGround_init_Out_of_memo_0062e700
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004eefb0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eef00
        ;   Label: core_ground.cpp_CGround_init_FUN_004eef00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004eef01
    PUSH EBX                            ; 004eef05
    CALL core_ground.cpp_CGround_free_FUN_004eefb0 ; 004eef06
        ;   XREF to: 004eefb0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004eefb0(CGround * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 004eef0b
    IMUL EAX,dword ptr [EBX + 0x4]      ; 004eef0d
    ADD ESP,0x4                         ; 004eef11
    PUSH 0xd2                           ; 004eef14
    PUSH 0x62e696                       ; 004eef19 | = "..\\core\\ground.cpp"
    SHL EAX,0x2                         ; 004eef1e
    PUSH EAX                            ; 004eef21
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 004eef22
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004eef27
    MOV dword ptr [EBX + 0x24],EAX      ; 004eef2a
    TEST EAX,EAX                        ; 004eef2d
    JZ 0x004eef5e                       ; 004eef2f
        ;   XREF to: 004eef5e (CONDITIONAL_JUMP)  ; LAB_004eef5e
    PUSH 0xd7                           ; 004eef31
        ;   Label: LAB_004eef31
    PUSH 0x62e6da                       ; 004eef36 | = "..\\core\\ground.cpp"
    PUSH 0x1a5ec                        ; 004eef3b
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004eef40
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004eef45
    TEST EAX,EAX                        ; 004eef48
    JZ 0x004eef55                       ; 004eef4a
        ;   XREF to: 004eef55 (CONDITIONAL_JUMP)  ; LAB_004eef55
    PUSH EAX                            ; 004eef4c
    CALL core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0 ; 004eef4d
        ;   XREF to: 005dbdd0 (UNCONDITIONAL_CALL)  ; CTextureList * core_texlist.cpp_CTextureList_ctor_FUN_005dbdd0(CTextureList * this_ptr)
    ADD ESP,0x4                         ; 004eef52
    MOV dword ptr [EBX + 0x28],EAX      ; 004eef55
        ;   Label: LAB_004eef55
    TEST EAX,EAX                        ; 004eef58
    JZ 0x004eef87                       ; 004eef5a
        ;   XREF to: 004eef87 (CONDITIONAL_JUMP)  ; LAB_004eef87
    POP EBX                             ; 004eef5c
    RET                                 ; 004eef5d
    PUSH EDI                            ; 004eef5e
        ;   Label: LAB_004eef5e
    PUSH ESI                            ; 004eef5f
    MOV ESI,0x62e6a9                    ; 004eef60 | = "..\\core\\ground.cpp"
    MOV EDI,0xd3                        ; 004eef65
    PUSH 0x62e6bc                       ; 004eef6a | = "CGround::init - Out of memory"
    MOV dword ptr [0x02f0ca48],ESI      ; 004eef6f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004eef75 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004eef7b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004eef80
    POP ESI                             ; 004eef83
    POP EDI                             ; 004eef84
    JMP 0x004eef31                      ; 004eef85
        ;   XREF to: 004eef31 (UNCONDITIONAL_JUMP)  ; LAB_004eef31
    MOV EAX,0x62e6ed                    ; 004eef87 | = "..\\core\\ground.cpp"
        ;   Label: LAB_004eef87
    MOV EDX,0xd8                        ; 004eef8c
    PUSH 0x62e700                       ; 004eef91 | = "CGround::init - Out of memory2"
    MOV [0x02f0ca48],EAX                ; 004eef96 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004eef9b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004eefa1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004eefa6
    POP EBX                             ; 004eefa9
    RET                                 ; 004eefaa

