; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBug * __cdecl core_bugs_cpp_SBug_arrdtor400_FUN_00423e80(SBug *this_ptr,uint flags)
;
; Parameters:
; SBug *           Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_bugs.cpp_CBugs_dtor_FUN_00423d90 at 00423da9
;
; Referenced Globals:
;   WatcomTypeInfo g_SBugTypeInfo_0059b010
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59b010                       ; 00423e80 | g_SBugTypeInfo_0059b010
        ;   Label: core_bugs.cpp_SBug_arrdtor400_FUN_00423e80
    PUSH 0x190                          ; 00423e85
    MOV EDX,dword ptr [ESP + 0xc]       ; 00423e8a
    PUSH EDX                            ; 00423e8e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 00423e8f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00423e94
    RET                                 ; 00423e97

