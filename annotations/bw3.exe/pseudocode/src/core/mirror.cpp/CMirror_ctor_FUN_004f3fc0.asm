; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_004f3fc0(CMirror *this_ptr)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_CGlass_ctor_FUN_004c9ba0 at 004c9bb5
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3fc0
        ;   Label: core_mirror.cpp_CMirror_ctor_FUN_004f3fc0
    PUSH 0x5e29e0                       ; 004f3fc4
    PUSH 0x5                            ; 004f3fc9
    ADD EAX,0x98                        ; 004f3fcb
    PUSH EAX                            ; 004f3fd0
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004f3fd1
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005a30d7()
    ADD ESP,0xc                         ; 004f3fd6
    SUB EAX,0x98                        ; 004f3fd9
    RET                                 ; 004f3fde

