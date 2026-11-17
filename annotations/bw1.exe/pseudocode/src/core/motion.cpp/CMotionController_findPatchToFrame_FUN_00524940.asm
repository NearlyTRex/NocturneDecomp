; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_findPatchToFrame_FUN_00524940(CMotionController *this_ptr,int source_motion_index,float source_frame,int target_motion_index)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   source_motion_index
; float            Stack[0xc]:4   source_frame
; int              Stack[0x10]:4   target_motion_index
;
; Referenced Globals:
;   char* g_CHAR_PTR_01d1d400
;   int g_INT_01d1d404
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;
; *****************************************************************************

section .text

    MOV EDX,0x5eaef3                    ; 00524940
        ;   Label: core_motion.cpp_CMotionController_findPatchToFrame_FUN_00524940
    MOV ECX,0x30e                       ; 00524945
    PUSH 0x5eaf06                       ; 0052494a
    MOV dword ptr [0x01d1d400],EDX      ; 0052494f | g_CHAR_PTR_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00524955 | g_INT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 0052495b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 00524960
    XOR EAX,EAX                         ; 00524963
    RET                                 ; 00524965

