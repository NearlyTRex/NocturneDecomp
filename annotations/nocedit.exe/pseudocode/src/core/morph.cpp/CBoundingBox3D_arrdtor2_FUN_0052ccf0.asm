; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_morph_cpp_CBoundingBox3D_arrdtor2_FUN_0052ccf0(CBoundingBox3D *this_ptr,uint flags)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x659900                       ; 0052ccf0 | g_CBoundingBox3DTypeInfo
        ;   Label: core_morph.cpp_CBoundingBox3D_arrdtor2_FUN_0052ccf0
    PUSH 0x2                            ; 0052ccf5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052ccf7
    PUSH EDX                            ; 0052ccfb
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0052ccfc
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0052cd01
    RET                                 ; 0052cd04

