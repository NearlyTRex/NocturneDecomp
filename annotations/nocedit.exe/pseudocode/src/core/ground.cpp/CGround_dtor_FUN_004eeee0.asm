; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGround * core_ground.cpp_CGround_dtor_FUN_004eeee0(CGround * this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_ground.cpp_CGround_free_FUN_004eefb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eeee0
        ;   Label: core_ground.cpp_CGround_dtor_FUN_004eeee0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004eeee1
    PUSH EBX                            ; 004eeee5
    CALL core_ground.cpp_CGround_free_FUN_004eefb0 ; 004eeee6 | void core_ground.cpp_CGround_free_FUN_004eefb0(CGround * this_ptr)
        ;   XREF to: 004eefb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004eeeeb
    MOV EAX,EBX                         ; 004eeeee
    POP EBX                             ; 004eeef0
    RET                                 ; 004eeef1

