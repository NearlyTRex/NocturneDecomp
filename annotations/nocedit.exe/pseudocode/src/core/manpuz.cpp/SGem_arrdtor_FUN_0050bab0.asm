; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SGem * __cdecl core_manpuz_cpp_SGem_arrdtor_FUN_0050bab0(SGem *objs,uint flags)
;
; Parameters:
; SGem *           Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_0050b890 at 0050b8b5
;
; Referenced Globals:
;   WatcomTypeInfo g_SGemTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x660fa0                       ; 0050bab0 | g_SGemTypeInfo
        ;   Label: core_manpuz.cpp_SGem_arrdtor_FUN_0050bab0
    PUSH 0xc                            ; 0050bab5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050bab7
    PUSH EDX                            ; 0050babb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0050babc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050bac1
    RET                                 ; 0050bac4

