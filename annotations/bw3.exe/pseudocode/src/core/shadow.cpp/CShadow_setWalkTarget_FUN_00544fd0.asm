; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadow_cpp_CShadow_setWalkTarget_FUN_00544fd0(CShadow *this_ptr,CDemonActor *target,float min_distance,float max_distance)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target
; float            Stack[0xc]:4   min_distance
; float            Stack[0x10]:4   max_distance
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_00431470
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00544fd0
        ;   Label: core_shadow.cpp_CShadow_setWalkTarget_FUN_00544fd0
    ADD EAX,0x158                       ; 00544fd4
    PUSH EAX                            ; 00544fd9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00544fda
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00544fdf
    PUSH dword ptr [ESP + 0x10]         ; 00544fe2
    MOV EDX,dword ptr [ESP + 0xc]       ; 00544fe6
    PUSH dword ptr [ESP + 0x10]         ; 00544fea
    PUSH EDX                            ; 00544fee
    MOV ECX,dword ptr [ESP + 0x10]      ; 00544fef
    PUSH ECX                            ; 00544ff3
    CALL core_charactr.cpp_CCharacter_setWalkTarget_FUN_00431470 ; 00544ff4
        ;   XREF to: 00431470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setWalkTarget_FUN_00431470(CCharacter * this_ptr, CDemonActor * target, float min_distance, float max_distance)
    ADD ESP,0x10                        ; 00544ff9
    RET                                 ; 00544ffc

