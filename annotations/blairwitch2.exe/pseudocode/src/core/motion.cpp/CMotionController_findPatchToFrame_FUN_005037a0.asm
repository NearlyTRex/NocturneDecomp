; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_findPatchToFrame_FUN_005037a0(CMotionController *this_ptr,int source_motion_index,float source_frame,int target_motion_index)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   source_motion_index
; float            Stack[0xc]:4   source_frame
; int              Stack[0x10]:4   target_motion_index
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5dfc98                    ; 005037a0
        ;   Label: core_motion.cpp_CMotionController_findPatchToFrame_FUN_005037a0
    MOV ECX,0x2fa                       ; 005037a5
    PUSH 0x5dfcab                       ; 005037aa
    MOV dword ptr [0x01d046a0],EDX      ; 005037af | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005037b5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005037bb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005037c0
    XOR EAX,EAX                         ; 005037c3
    RET                                 ; 005037c5

