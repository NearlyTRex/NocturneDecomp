; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGore * __cdecl core_gore_cpp_CGore_ctor_FUN_004afd80(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_staticInit_FUN_004adf90 at 004adf95
;
; Called Functions:
;   core_gore.cpp_CGore_reset_FUN_004afdb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004afd80
        ;   Label: core_gore.cpp_CGore_ctor_FUN_004afd80
    MOV EBX,dword ptr [ESP + 0x8]       ; 004afd81
    PUSH EBX                            ; 004afd85
    CALL core_gore.cpp_CGore_reset_FUN_004afdb0 ; 004afd86
        ;   XREF to: 004afdb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004afdb0(CGore * this_ptr)
    ADD ESP,0x4                         ; 004afd8b
    MOV EAX,EBX                         ; 004afd8e
    POP EBX                             ; 004afd90
    RET                                 ; 004afd91

