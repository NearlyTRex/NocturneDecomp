; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMirror * __cdecl core_mirror_cpp_CMirror_ctor_FUN_004f98a0(CMirror *this_ptr)
;
; Parameters:
; CMirror *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_glass.cpp_CGlass_ctor_FUN_004c48a0 at 004c48b5
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f98a0
        ;   Label: core_mirror.cpp_CMirror_ctor_FUN_004f98a0
    PUSH 0x5fa1d0                       ; 004f98a4
    PUSH 0x5                            ; 004f98a9
    ADD EAX,0x98                        ; 004f98ab
    PUSH EAX                            ; 004f98b0
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004f98b1
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f98b6
    SUB EAX,0x98                        ; 004f98b9
    RET                                 ; 004f98be

