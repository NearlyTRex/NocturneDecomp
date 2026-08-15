; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBloodSplat * __cdecl core_gore_cpp_CBloodSplat_arrdtor2000_FUN_004b0aa0(CBloodSplat *this_ptr,uint flags)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBloodSplatTypeInfo_0059e550
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59e550                       ; 004b0aa0 | g_CBloodSplatTypeInfo_0059e550
        ;   Label: core_gore.cpp_CBloodSplat_arrdtor2000_FUN_004b0aa0
    PUSH 0x7d0                          ; 004b0aa5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b0aaa
    PUSH EDX                            ; 004b0aae
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004b0aaf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004b0ab4
    RET                                 ; 004b0ab7

