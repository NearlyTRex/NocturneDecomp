; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_importFromUnknown_FUN_0051b2b0(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_00637caf
;   TerminatedCString s_Write_me_00637cc4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x637caf                    ; 0051b2b0 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00637caf = ..\shape\meshlod.cpp
        ;   Label: shape_meshlod.cpp_CLodMesh_importFromUnknown_FUN_0051b2b0
    MOV ECX,0x1180                      ; 0051b2b5
    PUSH 0x637cc4                       ; 0051b2ba | = "Write me!" | s_Write_me_00637cc4 = Write me!
    MOV dword ptr [0x02f0ca48],EDX      ; 0051b2bf | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0051b2c5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051b2cb | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0051b2d0
    RET                                 ; 0051b2d3

