; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_ctor_FUN_00544f10(CPaletteManager *this_ptr,int max_texture_count,int max_pixel_count)
;
; Parameters:
; CPaletteManager * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   max_texture_count
; int              Stack[0xc]:4   max_pixel_count
;
; Referenced Globals:
;   TerminatedCString s_engine_palette_cpp_0063e3ed
;   TerminatedCString s_engine_palette_cpp_0063e403
;   TerminatedCString s_The_very_same_person_who_0063e419
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544f10
        ;   Label: engine_palette.cpp_CPaletteManager_ctor_FUN_00544f10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00544f11
    MOV EAX,dword ptr [ESP + 0xc]       ; 00544f15
    PUSH 0x2b                           ; 00544f19
    MOV dword ptr [EBX + 0xc],EAX       ; 00544f1b
    PUSH 0x63e3ed                       ; 00544f1e | = "..\\engine\\palette.cpp"
    SHL EAX,0x6                         ; 00544f23
    MOV EDX,dword ptr [ESP + 0x18]      ; 00544f26
    PUSH EAX                            ; 00544f2a
    MOV dword ptr [EBX + 0x8],EDX       ; 00544f2b
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00544f2e
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00544f33
    MOV dword ptr [EBX + 0x4],EAX       ; 00544f36
    TEST EAX,EAX                        ; 00544f39
    JZ 0x00544f47                       ; 00544f3b
        ;   XREF to: 00544f47 (CONDITIONAL_JUMP)  ; LAB_00544f47
    MOV EAX,EBX                         ; 00544f3d
    MOV dword ptr [EBX],0x0             ; 00544f3f
    POP EBX                             ; 00544f45
    RET                                 ; 00544f46
    PUSH ESI                            ; 00544f47
        ;   Label: LAB_00544f47
    MOV ECX,0x63e403                    ; 00544f48 | = "..\\engine\\palette.cpp"
    MOV ESI,0x2c                        ; 00544f4d
    PUSH 0x63e419                       ; 00544f52 | = "The very same person who says not to ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 00544f57 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00544f5d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00544f63
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00544f68
    POP ESI                             ; 00544f6b
    MOV EAX,EBX                         ; 00544f6c
    MOV dword ptr [EBX],0x0             ; 00544f6e
    POP EBX                             ; 00544f74
    RET                                 ; 00544f75

