; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionController_findPatchToFrame_FUN_004fc250(CMotionController *this_ptr,int source_motion_index,float source_frame,int target_motion_index)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   source_motion_index
; float            Stack[0xc]:4   source_frame
; int              Stack[0x10]:4   target_motion_index
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5c9d04                    ; 004fc250
        ;   Label: core_motion.cpp_CMotionController_findPatchToFrame_FUN_004fc250
    MOV ECX,0x313                       ; 004fc255
    PUSH 0x5c9d17                       ; 004fc25a
    MOV dword ptr [0x01d71de0],EDX      ; 004fc25f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004fc265 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fc26b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004fc270
    XOR EAX,EAX                         ; 004fc273
    RET                                 ; 004fc275

