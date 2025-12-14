; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SFly * core_flies.cpp_FUN_004ccd20(SFly * this_ptr)
;
; Parameters:
; SFly *           Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ccd20
        ;   Label: core_flies.cpp_FUN_004ccd20
    PUSH 0x6598c0                       ; 004ccd24 | g_CVectorTypeInfo
    PUSH 0x4                            ; 004ccd29
    ADD EAX,0x4                         ; 004ccd2b
    PUSH EAX                            ; 004ccd2e
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004ccd2f
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ccd34
    SUB EAX,0x4                         ; 004ccd37
    RET                                 ; 004ccd3a

