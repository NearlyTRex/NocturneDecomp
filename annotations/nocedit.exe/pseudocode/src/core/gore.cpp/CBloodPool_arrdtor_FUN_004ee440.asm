; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBloodPool * __cdecl core_gore_cpp_CBloodPool_arrdtor_FUN_004ee440(CBloodPool *objs,uint flags)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBloodPoolTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65f0c0                       ; 004ee440 | g_CBloodPoolTypeInfo
        ;   Label: core_gore.cpp_CBloodPool_arrdtor_FUN_004ee440
    PUSH 0x20                           ; 004ee445
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ee447
    PUSH EDX                            ; 004ee44b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004ee44c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004ee451
    RET                                 ; 004ee454

