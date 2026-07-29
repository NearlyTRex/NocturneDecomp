; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SGem * __cdecl core_manpuz_cpp_SGem_ctor_FUN_004cbed0(SGem *this_ptr)
;
; Parameters:
; SGem *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo_0059c080
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cbed0
        ;   Label: core_manpuz.cpp_SGem_ctor_FUN_004cbed0
    PUSH 0x59c080                       ; 004cbed4 | g_CDemonTriangleTypeInfo_0059c080
    PUSH 0x2                            ; 004cbed9
    ADD EAX,0x3c                        ; 004cbedb
    PUSH EAX                            ; 004cbede
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004cbedf
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cbee4
    SUB EAX,0x3c                        ; 004cbee7
    RET                                 ; 004cbeea

