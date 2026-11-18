; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicene_cpp_CBasicEnemy_setAIState_FUN_0059e7a0(CBasicEnemy *this_ptr,char *state_name)
;
; Parameters:
; CBasicEnemy *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   state_name
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00527484
;
; Called Functions:
;   core_muzzle.cpp_SStateMachine_setNextState_FUN_0059d8e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059e7a0
        ;   Label: core_basicene.cpp_CBasicEnemy_setAIState_FUN_0059e7a0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059e7a4
    PUSH EDX                            ; 0059e7a8
    ADD EAX,0x10af8                     ; 0059e7a9
    PUSH EAX                            ; 0059e7ae
    CALL core_muzzle.cpp_SStateMachine_setNextState_FUN_0059d8e0 ; 0059e7af
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; int core_muzzle.cpp_SStateMachine_setNextState_FUN_0059d8e0(SStateMachine * this_ptr, char * state_name)
    ADD ESP,0x8                         ; 0059e7b4
    RET                                 ; 0059e7b7

