; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_morph_cpp_freeDeformableModelInstances_FUN_0052ccd0(CDeformableModelInstance **array)
;
; Parameters:
; CDeformableModelInstance * * Stack[0x4]:4   array
;
; XREF[1]:
;   core_morph.cpp_FUN_0052bcb0 at 0052c100
;
; Referenced Globals:
;   WatcomTypeInfo g_CDeformableModelInstanceTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65af20                       ; 0052ccd0 | g_CDeformableModelInstanceTypeInfo
        ;   Label: core_morph.cpp_freeDeformableModelInstances_FUN_0052ccd0
    PUSH 0x2                            ; 0052ccd5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052ccd7
    PUSH EDX                            ; 0052ccdb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0052ccdc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052cce1
    RET                                 ; 0052cce4

