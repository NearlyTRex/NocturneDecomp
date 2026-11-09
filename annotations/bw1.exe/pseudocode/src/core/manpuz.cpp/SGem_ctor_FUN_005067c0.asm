; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_005067c0(SGem *this_ptr)
;
; Parameters:
; SGem *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005067c0
        ;   Label: core_manpuz.cpp_SGem_ctor_FUN_005067c0
    PUSH 0x5ff680                       ; 005067c4
    PUSH 0x2                            ; 005067c9
    ADD EAX,0x3c                        ; 005067cb
    PUSH EAX                            ; 005067ce
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 005067cf
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 005067d4
    SUB EAX,0x3c                        ; 005067d7
    RET                                 ; 005067da

