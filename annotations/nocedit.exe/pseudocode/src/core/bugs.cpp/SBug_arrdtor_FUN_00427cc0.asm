; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBug * __cdecl core_bugs_cpp_SBug_arrdtor_FUN_00427cc0(SBug *objs,uint flags)
;
; Parameters:
; SBug *           Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_bugs.cpp_CBugs_dtor_FUN_00427bd0 at 00427be9
;
; Referenced Globals:
;   WatcomTypeInfo g_SBugTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65b750                       ; 00427cc0 | g_SBugTypeInfo
        ;   Label: core_bugs.cpp_SBug_arrdtor_FUN_00427cc0
    PUSH 0x190                          ; 00427cc5
    MOV EDX,dword ptr [ESP + 0xc]       ; 00427cca
    PUSH EDX                            ; 00427cce
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 00427ccf
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00427cd4
    RET                                 ; 00427cd7

