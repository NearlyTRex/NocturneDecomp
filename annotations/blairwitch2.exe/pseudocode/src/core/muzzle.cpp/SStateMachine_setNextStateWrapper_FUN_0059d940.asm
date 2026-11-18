; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_muzzle_cpp_SStateMachine_setNextStateWrapper_FUN_0059d940(SStateMachine *this_ptr,char *state_name)
;
; Parameters:
; SStateMachine *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   state_name
;
; XREF[1]:
;   core_muzzle.cpp_SStateMachine_setNextRefState_FUN_0059d880 at 0059d8d3
;
; Called Functions:
;   core_muzzle.cpp_SStateMachine_setNextState_FUN_0059d8e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059d940
        ;   Label: core_muzzle.cpp_SStateMachine_setNextStateWrapper_FUN_0059d940
    PUSH EDX                            ; 0059d944
    MOV ECX,dword ptr [ESP + 0x8]       ; 0059d945
    PUSH ECX                            ; 0059d949
    CALL core_muzzle.cpp_SStateMachine_setNextState_FUN_0059d8e0 ; 0059d94a
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; int core_muzzle.cpp_SStateMachine_setNextState_FUN_0059d8e0(SStateMachine * this_ptr, char * state_name)
    ADD ESP,0x8                         ; 0059d94f
    RET                                 ; 0059d952

