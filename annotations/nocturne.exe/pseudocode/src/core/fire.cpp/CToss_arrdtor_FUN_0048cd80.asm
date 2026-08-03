; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CToss * __cdecl core_fire_cpp_CToss_arrdtor_FUN_0048cd80(CToss *this_ptr,uint flags)
;
; Parameters:
; CToss *          Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d460                       ; 0048cd80
        ;   Label: core_fire.cpp_CToss_arrdtor_FUN_0048cd80
    PUSH 0x14                           ; 0048cd85
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cd87
    PUSH EDX                            ; 0048cd8b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cd8c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048cd91
    RET                                 ; 0048cd94

