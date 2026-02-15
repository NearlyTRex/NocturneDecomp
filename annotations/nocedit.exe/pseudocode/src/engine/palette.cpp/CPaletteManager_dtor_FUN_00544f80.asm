; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPaletteManager * __cdecl engine_palette_cpp_CPaletteManager_dtor_FUN_00544f80(CPaletteManager *this_ptr,uint flags)
;
; Parameters:
; CPaletteManager * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   TerminatedCString s_engine_palette_cpp_0063e46c
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544f80
        ;   Label: engine_palette.cpp_CPaletteManager_dtor_FUN_00544f80
    PUSH ESI                            ; 00544f81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00544f82
    MOV EDX,0x63e46c                    ; 00544f86 | = "..\\engine\\palette.cpp"
    MOV ESI,dword ptr [EBX + 0x4]       ; 00544f8b
    MOV ECX,0x38                        ; 00544f8e
    PUSH ESI                            ; 00544f93
    MOV dword ptr [0x0067d20c],EDX      ; 00544f94 | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],ECX      ; 00544f9a | g_CurrentDebugLine
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00544fa0
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00544fa5
    MOV EAX,EBX                         ; 00544fa8
    POP ESI                             ; 00544faa
    POP EBX                             ; 00544fab
    RET                                 ; 00544fac

