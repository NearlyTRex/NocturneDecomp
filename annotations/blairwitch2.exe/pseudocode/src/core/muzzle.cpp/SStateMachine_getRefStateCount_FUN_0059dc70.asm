; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_muzzle_cpp_SStateMachine_getRefStateCount_FUN_0059dc70(SStateMachine *this_ptr)
;
; Parameters:
; SStateMachine *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 at 0059fe79
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059dc70
        ;   Label: core_muzzle.cpp_SStateMachine_getRefStateCount_FUN_0059dc70
    MOV EAX,dword ptr [EAX + 0x838]     ; 0059dc74
    RET                                 ; 0059dc7a

