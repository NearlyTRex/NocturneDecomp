; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMouse * __cdecl engine_ncursfx_cpp_CMouse_ctor_FUN_00510010(CMouse *this_ptr)
;
; Parameters:
; CMouse *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_ncursfx.cpp_staticInit_FUN_0050fff0 at 0050fff5
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00510010
        ;   Label: engine_ncursfx.cpp_CMouse_ctor_FUN_00510010
    PUSH 0x5f6f60                       ; 00510014
    PUSH 0x8                            ; 00510019
    PUSH EAX                            ; 0051001b
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 0051001c
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00510021
    PUSH 0x5f6f60                       ; 00510024
    PUSH 0x7                            ; 00510029
    ADD EAX,0xa0                        ; 0051002b
    PUSH EAX                            ; 00510030
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00510031
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00510036
    PUSH 0x5f6f60                       ; 00510039
    PUSH 0xf                            ; 0051003e
    ADD EAX,0x8c                        ; 00510040
    PUSH EAX                            ; 00510045
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 00510046
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    MOV dword ptr [EAX + 0x12c],0x0     ; 0051004b
    ADD ESP,0xc                         ; 00510055
    MOV dword ptr [EAX + 0x130],0x0     ; 00510058
    SUB EAX,0x12c                       ; 00510062
    RET                                 ; 00510067

