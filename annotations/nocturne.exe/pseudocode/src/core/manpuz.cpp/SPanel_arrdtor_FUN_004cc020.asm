; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPanel * __cdecl core_manpuz_cpp_SPanel_arrdtor_FUN_004cc020(SPanel *this_ptr,uint flags)
;
; Parameters:
; SPanel *         Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_004cbe20 at 004cbe55
;
; Referenced Globals:
;   WatcomTypeInfo g_SPanelTypeInfo_005a0210
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a0210                       ; 004cc020 | g_SPanelTypeInfo_005a0210
        ;   Label: core_manpuz.cpp_SPanel_arrdtor_FUN_004cc020
    PUSH 0xc                            ; 004cc025
    MOV EDX,dword ptr [ESP + 0xc]       ; 004cc027
    PUSH EDX                            ; 004cc02b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004cc02c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004cc031
    RET                                 ; 004cc034

