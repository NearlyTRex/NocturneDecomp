; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_00508af0(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_ncursfx.cpp_staticInit_FUN_00508ad0 at 00508ad5
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00508af0
        ;   Label: engine_ncursfx.cpp_CMouse_ctor_FUN_00508af0
    PUSH 0x5dbf20                       ; 00508af4
    PUSH 0x8                            ; 00508af9
    PUSH EAX                            ; 00508afb
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00508afc
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00508b01
    PUSH 0x5dbf20                       ; 00508b04
    PUSH 0x7                            ; 00508b09
    ADD EAX,0xa0                        ; 00508b0b
    PUSH EAX                            ; 00508b10
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00508b11
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00508b16
    PUSH 0x5dbf20                       ; 00508b19
    PUSH 0xf                            ; 00508b1e
    ADD EAX,0x8c                        ; 00508b20
    PUSH EAX                            ; 00508b25
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 00508b26
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + 0x12c],0x0     ; 00508b2b
    ADD ESP,0xc                         ; 00508b35
    MOV dword ptr [EAX + 0x130],0x0     ; 00508b38
    SUB EAX,0x12c                       ; 00508b42
    RET                                 ; 00508b47

