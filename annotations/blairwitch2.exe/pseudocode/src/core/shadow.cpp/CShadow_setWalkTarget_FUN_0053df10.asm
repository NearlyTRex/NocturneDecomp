; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_shadow_cpp_CShadow_setWalkTarget_FUN_0053df10(CShadow *this_ptr,CDemonActor *param_2,float param_3,float param_4)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   param_2
; float            Stack[0xc]:4   param_3
; float            Stack[0x10]:4   param_4
;
; Called Functions:
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0
;   core_motion.cpp_FUN_005035c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0053df10
        ;   Label: core_shadow.cpp_CShadow_setWalkTarget_FUN_0053df10
    ADD EAX,0x2b4                       ; 0053df14
    PUSH EAX                            ; 0053df19
    CALL core_motion.cpp_FUN_005035c0   ; 0053df1a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 0053df1f
    PUSH dword ptr [ESP + 0x10]         ; 0053df22
    MOV EDX,dword ptr [ESP + 0xc]       ; 0053df26
    PUSH dword ptr [ESP + 0x10]         ; 0053df2a
    PUSH EDX                            ; 0053df2e
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053df2f
    PUSH ECX                            ; 0053df33
    CALL core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0 ; 0053df34
        ;   XREF to: 004285f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0(CCharacter * this_ptr, CDemonActor * target, float min_distance, float max_distance)
    ADD ESP,0x10                        ; 0053df39
    RET                                 ; 0053df3c

