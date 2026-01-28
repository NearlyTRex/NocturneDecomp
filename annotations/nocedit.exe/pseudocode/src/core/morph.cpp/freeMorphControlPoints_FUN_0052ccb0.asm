; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_freeMorphControlPoints_FUN_0052ccb0(SMorphControlPoint **array)
;
; Parameters:
; SMorphControlPoint * * Stack[0x4]:4   array
;
; XREF[1]:
;   core_morph.cpp_FUN_0052bcb0 at 0052ca6c
;
; Referenced Globals:
;   WatcomTypeInfo g_SMorphControlPointTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x661b80                       ; 0052ccb0 | g_SMorphControlPointTypeInfo
        ;   Label: core_morph.cpp_freeMorphControlPoints_FUN_0052ccb0
    PUSH 0x14                           ; 0052ccb5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052ccb7
    PUSH EDX                            ; 0052ccbb
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 0052ccbc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052ccc1
    RET                                 ; 0052ccc4

