; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGunFlame * __cdecl core_fire_cpp_CGunFlame_arrdtor_FUN_004c9870(CGunFlame *this_ptr,uint flags)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CGunFlameTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65df50                       ; 004c9870 | g_CGunFlameTypeInfo
        ;   Label: core_fire.cpp_CGunFlame_arrdtor_FUN_004c9870
    PUSH 0x1f4                          ; 004c9875
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c987a
    PUSH EDX                            ; 004c987e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c987f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9884
    RET                                 ; 004c9887

