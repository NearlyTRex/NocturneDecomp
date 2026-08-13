; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setProjectionMode_FUN_0045ed40(CDemonRenderer *this_ptr,int mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   mode
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_0057db3d
;   TerminatedCString s_Ortho_isn_t_supported_an_0057db53
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0045ed40
        ;   Label: engine_drender.cpp_CDemonRenderer_setProjectionMode_FUN_0045ed40
    MOV EDX,dword ptr [ESP + 0x4]       ; 0045ed44
    MOV dword ptr [EDX + 0x8],EAX       ; 0045ed48
    CMP EAX,0x1                         ; 0045ed4b
    JZ 0x0045ed51                       ; 0045ed4e
        ;   XREF to: 0045ed51 (CONDITIONAL_JUMP)  ; LAB_0045ed51
    RET                                 ; 0045ed50
    MOV EDX,0x57db3d                    ; 0045ed51 | = "..\\engine\\drender.cpp"
        ;   Label: LAB_0045ed51
    MOV ECX,0x9b                        ; 0045ed56
    PUSH 0x57db53                       ; 0045ed5b | = "Ortho isn't supported any more"
    MOV dword ptr [0x01cc4800],EDX      ; 0045ed60 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 0045ed66 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 0045ed6c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 0045ed71
    RET                                 ; 0045ed74

