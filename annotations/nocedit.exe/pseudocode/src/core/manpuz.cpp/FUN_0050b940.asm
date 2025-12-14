; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SGem * core_manpuz.cpp_FUN_0050b940(SGem * this_ptr)
;
; Parameters:
; SGem *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonTriangleTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0050b940
        ;   Label: core_manpuz.cpp_FUN_0050b940
    PUSH 0x65c990                       ; 0050b944 | g_CDemonTriangleTypeInfo
    PUSH 0x2                            ; 0050b949
    ADD EAX,0x3c                        ; 0050b94b
    PUSH EAX                            ; 0050b94e
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0050b94f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050b954
    SUB EAX,0x3c                        ; 0050b957
    RET                                 ; 0050b95a

