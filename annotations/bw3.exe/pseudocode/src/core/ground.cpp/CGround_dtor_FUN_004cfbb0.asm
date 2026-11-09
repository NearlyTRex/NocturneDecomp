; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGround * __cdecl core_ground_cpp_CGround_dtor_FUN_004cfbb0(CGround *this_ptr,uint flags)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004cfc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cfbb0
        ;   Label: core_ground.cpp_CGround_dtor_FUN_004cfbb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cfbb1
    PUSH EBX                            ; 004cfbb5
    CALL core_ground.cpp_CGround_free_FUN_004cfc70 ; 004cfbb6
        ;   XREF to: 004cfc70 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004cfc70(CGround * this_ptr)
    ADD ESP,0x4                         ; 004cfbbb
    MOV EAX,EBX                         ; 004cfbbe
    POP EBX                             ; 004cfbc0
    RET                                 ; 004cfbc1

