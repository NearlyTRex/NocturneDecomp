; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_004c0a10(SFly *this_ptr)
;
; Parameters:
; SFly *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c0a10
        ;   Label: core_flies.cpp_SFly_ctor_FUN_004c0a10
    PUSH 0x5fb430                       ; 004c0a14
    PUSH 0x4                            ; 004c0a19
    ADD EAX,0x4                         ; 004c0a1b
    PUSH EAX                            ; 004c0a1e
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004c0a1f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 004c0a24
    SUB EAX,0x4                         ; 004c0a27
    RET                                 ; 004c0a2a

