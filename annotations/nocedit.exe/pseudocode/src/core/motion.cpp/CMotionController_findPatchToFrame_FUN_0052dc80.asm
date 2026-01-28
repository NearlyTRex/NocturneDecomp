; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_motion_cpp_CMotionController_findPatchToFrame_FUN_0052dc80(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0063aa97
;   TerminatedCString s_CMotionController_findPa_0063aaaa
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    MOV EDX,0x63aa97                    ; 0052dc80 | = "..\\core\\motion.cpp"
        ;   Label: core_motion.cpp_CMotionController_findPatchToFrame_FUN_0052dc80
    MOV ECX,0x2ca                       ; 0052dc85
    PUSH 0x63aaaa                       ; 0052dc8a | = "CMotionController::findPatchToFrame s..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0052dc8f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0052dc95 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052dc9b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0052dca0
    XOR EAX,EAX                         ; 0052dca3
    RET                                 ; 0052dca5

