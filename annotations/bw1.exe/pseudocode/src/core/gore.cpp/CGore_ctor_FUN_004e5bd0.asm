; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGore * __cdecl core_gore_cpp_CGore_ctor_FUN_004e5bd0(CGore *this_ptr)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_staticInit_FUN_004e3d40 at 004e3d45
;
; Called Functions:
;   core_gore.cpp_CGore_reset_FUN_004e5c00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e5bd0
        ;   Label: core_gore.cpp_CGore_ctor_FUN_004e5bd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e5bd1
    PUSH EBX                            ; 004e5bd5
    CALL core_gore.cpp_CGore_reset_FUN_004e5c00 ; 004e5bd6
        ;   XREF to: 004e5c00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_reset_FUN_004e5c00(CGore * this_ptr)
    ADD ESP,0x4                         ; 004e5bdb
    MOV EAX,EBX                         ; 004e5bde
    POP EBX                             ; 004e5be0
    RET                                 ; 004e5be1

