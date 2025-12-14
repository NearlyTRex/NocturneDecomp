; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CLodFace * shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00(CLodFace * this_ptr)
;
; Parameters:
; CLodFace *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051ef00
        ;   Label: shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00
    PUSH 0x6598c0                       ; 0051ef04 | g_CVectorTypeInfo
    PUSH 0x3                            ; 0051ef09
    ADD EAX,0x54                        ; 0051ef0b
    PUSH EAX                            ; 0051ef0e
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 0051ef0f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051ef14
    SUB EAX,0x54                        ; 0051ef17
    RET                                 ; 0051ef1a

