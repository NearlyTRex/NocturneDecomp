; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGore * __cdecl core_gore_cpp_CGore_ctor_FUN_004ce530(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_staticInit_FUN_004cc8d0 at 004cc8d5
;
; Called Functions:
;   core_gore.cpp_CGore_reset_FUN_004ce560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce530
        ;   Label: core_gore.cpp_CGore_ctor_FUN_004ce530
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ce531
    PUSH EBX                            ; 004ce535
    CALL core_gore.cpp_CGore_reset_FUN_004ce560 ; 004ce536
        ;   XREF to: 004ce560 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004ce560(CGore * this_ptr)
    ADD ESP,0x4                         ; 004ce53b
    MOV EAX,EBX                         ; 004ce53e
    POP EBX                             ; 004ce540
    RET                                 ; 004ce541

