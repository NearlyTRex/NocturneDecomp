; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_findPatchToFrame_FUN_004e1830(CMotionController *this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0058b31d
;   TerminatedCString s_CMotionController_findPa_0058b330
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x58b31d                    ; 004e1830 | = "..\\core\\motion.cpp"
        ;   Label: core_motion.cpp_CMotionController_findPatchToFrame_FUN_004e1830
    MOV ECX,0x2ca                       ; 004e1835
    PUSH 0x58b330                       ; 004e183a | = "CMotionController::findPatchToFrame s..."
    MOV dword ptr [0x01cc4800],EDX      ; 004e183f | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004e1845 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e184b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004e1850
    XOR EAX,EAX                         ; 004e1853
    RET                                 ; 004e1855

