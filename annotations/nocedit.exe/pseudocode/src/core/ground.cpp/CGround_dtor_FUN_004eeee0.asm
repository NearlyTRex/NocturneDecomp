; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGround * __cdecl core_ground_cpp_CGround_dtor_FUN_004eeee0(CGround *this_ptr,uint flags)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
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
    CALL core_ground.cpp_CGround_free_FUN_004eefb0 ; 004eeee6
        ;   XREF to: 004eefb0 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_free_FUN_004eefb0(CGround * this_ptr)
    ADD ESP,0x4                         ; 004eeeeb
    MOV EAX,EBX                         ; 004eeeee
    POP EBX                             ; 004eeef0
    RET                                 ; 004eeef1

