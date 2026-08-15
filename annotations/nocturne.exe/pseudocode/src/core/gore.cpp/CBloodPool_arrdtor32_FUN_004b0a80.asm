; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodPool * __cdecl core_gore_cpp_CBloodPool_arrdtor32_FUN_004b0a80(CBloodPool *this_ptr,uint flags)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBloodPoolTypeInfo_0059e570
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59e570                       ; 004b0a80 | g_CBloodPoolTypeInfo_0059e570
        ;   Label: core_gore.cpp_CBloodPool_arrdtor32_FUN_004b0a80
    PUSH 0x20                           ; 004b0a85
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b0a87
    PUSH EDX                            ; 004b0a8b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004b0a8c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b0a91
    RET                                 ; 004b0a94

