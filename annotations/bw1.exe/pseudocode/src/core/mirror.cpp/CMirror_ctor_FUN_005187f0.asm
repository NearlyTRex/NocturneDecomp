; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_005187f0(CMirror *this_ptr)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_CGlass_ctor_FUN_004e1010 at 004e1025
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005187f0
        ;   Label: core_mirror.cpp_CMirror_ctor_FUN_005187f0
    PUSH 0x603d00                       ; 005187f4
    PUSH 0x5                            ; 005187f9
    ADD EAX,0x98                        ; 005187fb
    PUSH EAX                            ; 00518800
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00518801
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00518806
    SUB EAX,0x98                        ; 00518809
    RET                                 ; 0051880e

