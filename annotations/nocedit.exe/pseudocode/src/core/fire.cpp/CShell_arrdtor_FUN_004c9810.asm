; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CShell * __cdecl core_fire_cpp_CShell_arrdtor_FUN_004c9810(CShell *this_ptr,uint flags)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CShellTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65dfb0                       ; 004c9810 | g_CShellTypeInfo
        ;   Label: core_fire.cpp_CShell_arrdtor_FUN_004c9810
    PUSH 0x32                           ; 004c9815
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c9817
    PUSH EDX                            ; 004c981b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 004c981c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004c9821
    RET                                 ; 004c9824

