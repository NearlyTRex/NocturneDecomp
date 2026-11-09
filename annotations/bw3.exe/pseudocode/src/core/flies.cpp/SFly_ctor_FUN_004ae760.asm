; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_004ae760(SFly *this_ptr)
;
; Parameters:
; SFly *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ae760
        ;   Label: core_flies.cpp_SFly_ctor_FUN_004ae760
    PUSH 0x5db0f0                       ; 004ae764
    PUSH 0x4                            ; 004ae769
    ADD EAX,0x4                         ; 004ae76b
    PUSH EAX                            ; 004ae76e
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004ae76f
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004ae774
    SUB EAX,0x4                         ; 004ae777
    RET                                 ; 004ae77a

