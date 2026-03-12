; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDeformableModelInstance * __cdecl core_skeleton_cpp_getRootMotionDeltaForMotion_FUN_005a0f50(CMotionController *motion_controller,CDeformableModelInstance *deformable_model,int motion_index,float start_frame,float end_frame)
;
; Parameters:
; CMotionController * Stack[0x4]:4   motion_controller
; CDeformableModelInstance * Stack[0x8]:4   deformable_model
; int              Stack[0xc]:4   motion_index
; float            Stack[0x10]:4   start_frame
; float            Stack[0x14]:4   end_frame
;
; Called Functions:
;   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
;   core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0f50
        ;   Label: core_skeleton.cpp_getRootMotionDeltaForMotion_FUN_005a0f50
    PUSH EDI                            ; 005a0f51
    SUB ESP,0x8                         ; 005a0f52
    MOV EBX,dword ptr [ESP + 0x18]      ; 005a0f55
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a0f59
    PUSH EDX                            ; 005a0f5d
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0 ; 005a0f5e
        ;   XREF to: 0052dce0 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005a0f63
    IMUL EDX,dword ptr [ESP + 0x1c],0x54c ; 005a0f66
    ADD EAX,0x968                       ; 005a0f6e
    FLD float ptr [ESP + 0x20]          ; 005a0f73
    FLDZ                                ; 005a0f77
    ADD EDX,EAX                         ; 005a0f79
    FCOMPP                              ; 005a0f7b
    FNSTSW AX                           ; 005a0f7d
    SAHF                                ; 005a0f7f
    JA 0x005a0fd1                       ; 005a0f80
        ;   XREF to: 005a0fd1 (CONDITIONAL_JUMP)  ; LAB_005a0fd1
    FLD float ptr [ESP + 0x24]          ; 005a0f82
        ;   Label: LAB_005a0f82
    FILD dword ptr [EDX + 0x64]         ; 005a0f86
    FSTP float ptr [ESP + 0x4]          ; 005a0f89
    FCOMP float ptr [ESP + 0x4]         ; 005a0f8d
    FNSTSW AX                           ; 005a0f91
    SAHF                                ; 005a0f93
    JBE 0x005a0f9e                      ; 005a0f94
        ;   XREF to: 005a0f9e (CONDITIONAL_JUMP)  ; LAB_005a0f9e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a0f96
    MOV dword ptr [ESP + 0x24],EAX      ; 005a0f9a
    FILD dword ptr [EDX + 0x60]         ; 005a0f9e
        ;   Label: LAB_005a0f9e
    FLD float ptr [ESP + 0x24]          ; 005a0fa1
    FADD ST0,ST1                        ; 005a0fa5
    SUB ESP,0x4                         ; 005a0fa7
    FLD float ptr [ESP + 0x24]          ; 005a0faa
    FXCH                                ; 005a0fae
    FSTP float ptr [ESP]                ; 005a0fb0
    FADDP                               ; 005a0fb3
    SUB ESP,0x4                         ; 005a0fb5
    FSTP float ptr [ESP]                ; 005a0fb8
    PUSH EBX                            ; 005a0fbb
    MOV EDI,dword ptr [ESP + 0x20]      ; 005a0fbc
    PUSH EDI                            ; 005a0fc0
    CALL core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10 ; 005a0fc1
        ;   XREF to: 005a0d10 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10(CDeformableModelInstance * this_ptr, CVector3f * output_buffer, float start_frame, float end_frame)
    ADD ESP,0x10                        ; 005a0fc6
    MOV EAX,EBX                         ; 005a0fc9
    ADD ESP,0x8                         ; 005a0fcb
    POP EDI                             ; 005a0fce
    POP EBX                             ; 005a0fcf
    RET                                 ; 005a0fd0
    PUSH ESI                            ; 005a0fd1
        ;   Label: LAB_005a0fd1
    XOR ESI,ESI                         ; 005a0fd2
    MOV dword ptr [ESP + 0x24],ESI      ; 005a0fd4
    POP ESI                             ; 005a0fd8
    JMP 0x005a0f82                      ; 005a0fd9
        ;   XREF to: 005a0f82 (UNCONDITIONAL_JUMP)  ; LAB_005a0f82

