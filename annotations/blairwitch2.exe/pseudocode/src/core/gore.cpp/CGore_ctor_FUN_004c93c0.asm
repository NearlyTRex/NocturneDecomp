; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGore * __cdecl core_gore_cpp_CGore_ctor_FUN_004c93c0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_staticInit_FUN_004c7360 at 004c7365
;
; Called Functions:
;   core_gore.cpp_CGore_reset_FUN_004c93f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c93c0
        ;   Label: core_gore.cpp_CGore_ctor_FUN_004c93c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004c93c1
    PUSH EBX                            ; 004c93c5
    CALL core_gore.cpp_CGore_reset_FUN_004c93f0 ; 004c93c6
        ;   XREF to: 004c93f0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004c93f0(CGore * this_ptr)
    ADD ESP,0x4                         ; 004c93cb
    MOV EAX,EBX                         ; 004c93ce
    POP EBX                             ; 004c93d0
    RET                                 ; 004c93d1

