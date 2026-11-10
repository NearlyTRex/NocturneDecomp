; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tawiscar_cpp_CTawiscara_setWalkTarget_FUN_005956d0(CTawiscara *this_ptr,CDemonActor *target,float min_distance,float max_distance)
;
; Parameters:
; CTawiscara *     Stack[0x4]:4   this_ptr
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

    MOV EAX,dword ptr [ESP + 0x4]       ; 005956d0
        ;   Label: core_tawiscar.cpp_CTawiscara_setWalkTarget_FUN_005956d0
    ADD EAX,0x158                       ; 005956d4
    PUSH EAX                            ; 005956d9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 005956da
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005956df
    ADD ESP,0x4                         ; 005956e2
    CMP EAX,0x13                        ; 005956e5
    JNZ 0x005956eb                      ; 005956e8
        ;   XREF to: 005956eb (CONDITIONAL_JUMP)  ; LAB_005956eb
    RET                                 ; 005956ea
    PUSH dword ptr [ESP + 0x10]         ; 005956eb
        ;   Label: LAB_005956eb
    MOV EDX,dword ptr [ESP + 0xc]       ; 005956ef
    PUSH dword ptr [ESP + 0x10]         ; 005956f3
    PUSH EDX                            ; 005956f7
    MOV ECX,dword ptr [ESP + 0x10]      ; 005956f8
    PUSH ECX                            ; 005956fc
    CALL core_charactr.cpp_CCharacter_setWalkTarget_FUN_00431470 ; 005956fd
        ;   XREF to: 00431470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setWalkTarget_FUN_00431470(CCharacter * this_ptr, CDemonActor * target, float min_distance, float max_distance)
    ADD ESP,0x10                        ; 00595702
    RET                                 ; 00595705

