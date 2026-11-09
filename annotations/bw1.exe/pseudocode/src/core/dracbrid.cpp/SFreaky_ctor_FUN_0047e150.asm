; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFreaky * __cdecl core_dracbrid_cpp_SFreaky_ctor_FUN_0047e150(SFreaky *this_ptr)
;
; Parameters:
; SFreaky *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047e150
        ;   Label: core_dracbrid.cpp_SFreaky_ctor_FUN_0047e150
    PUSH 0x5fb430                       ; 0047e154
    PUSH 0x4                            ; 0047e159
    ADD EAX,0x20                        ; 0047e15b
    PUSH EAX                            ; 0047e15e
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0047e15f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0047e164
    SUB EAX,0x20                        ; 0047e167
    RET                                 ; 0047e16a

