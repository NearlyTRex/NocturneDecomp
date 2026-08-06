; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGunFlame * __cdecl core_fire_cpp_CGunFlame_arrdtor_FUN_0048cd40(CGunFlame *this_ptr,uint flags)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGunFlameTypeInfo_0059d4a0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59d4a0                       ; 0048cd40 | g_CGunFlameTypeInfo_0059d4a0
        ;   Label: core_fire.cpp_CGunFlame_arrdtor_FUN_0048cd40
    PUSH 0x1f4                          ; 0048cd45
    MOV EDX,dword ptr [ESP + 0xc]       ; 0048cd4a
    PUSH EDX                            ; 0048cd4e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0048cd4f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0048cd54
    RET                                 ; 0048cd57

