; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0048a700(CDemonRenderer * this_ptr, int mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mode
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_00621f2d
;   TerminatedCString s_Ortho_isn_t_supported_an_00621f43
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0048a700
        ;   Label: engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0048a700
    MOV EDX,dword ptr [ESP + 0x4]       ; 0048a704
    MOV dword ptr [EDX + 0x8],EAX       ; 0048a708
    CMP EAX,0x1                         ; 0048a70b
    JZ 0x0048a711                       ; 0048a70e | LAB_0048a711
        ;   XREF to: 0048a711 (CONDITIONAL_JUMP)
    RET                                 ; 0048a710
    MOV EDX,0x621f2d                    ; 0048a711 | = "..\\engine\\drender.cpp" | s_engine_drender_cpp_00621f2d = ..\engine\drender.cpp
        ;   Label: LAB_0048a711
    MOV ECX,0x9c                        ; 0048a716
    PUSH 0x621f43                       ; 0048a71b | = "Ortho isn't supported any more" | s_Ortho_isn_t_supported_an_00621f43 = Ortho isn't supported any more
    MOV dword ptr [0x02f0ca48],EDX      ; 0048a720 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0048a726 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048a72c | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048a731
    RET                                 ; 0048a734

