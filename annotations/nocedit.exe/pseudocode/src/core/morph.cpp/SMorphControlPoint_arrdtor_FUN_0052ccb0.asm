; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMorphControlPoint * __cdecl core_morph_cpp_SMorphControlPoint_arrdtor_FUN_0052ccb0(SMorphControlPoint *objs,uint flags)
;
; Parameters:
; SMorphControlPoint * Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_morph.cpp_CMorph_editMorph_FUN_0052bcb0 at 0052ca6c
;
; Referenced Globals:
;   WatcomTypeInfo g_SMorphControlPointTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x661b80                       ; 0052ccb0 | g_SMorphControlPointTypeInfo
        ;   Label: core_morph.cpp_SMorphControlPoint_arrdtor_FUN_0052ccb0
    PUSH 0x14                           ; 0052ccb5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052ccb7
    PUSH EDX                            ; 0052ccbb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0052ccbc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052ccc1
    RET                                 ; 0052ccc4

