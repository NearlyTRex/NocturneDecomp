; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFly * __cdecl core_flies_cpp_SFly_ctor_FUN_004a7a40(SFly *this_ptr)
;
; Parameters:
; SFly *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a7a40
        ;   Label: core_flies.cpp_SFly_ctor_FUN_004a7a40
    PUSH 0x5f22b0                       ; 004a7a44
    PUSH 0x4                            ; 004a7a49
    ADD EAX,0x4                         ; 004a7a4b
    PUSH EAX                            ; 004a7a4e
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004a7a4f
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005b7f5f()
    ADD ESP,0xc                         ; 004a7a54
    SUB EAX,0x4                         ; 004a7a57
    RET                                 ; 004a7a5a

