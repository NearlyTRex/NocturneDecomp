; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_setdir_cpp_CBoundingBox3D_arrdtor_FUN_005143c0(CBoundingBox3D *this_ptr,uint flags)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo_005993f0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993f0                       ; 005143c0 | g_CBoundingBox3DTypeInfo_005993f0
        ;   Label: core_setdir.cpp_CBoundingBox3D_arrdtor_FUN_005143c0
    PUSH 0x7d0                          ; 005143c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005143ca
    PUSH EDX                            ; 005143ce
    CALL crt_memory.c___arrfini_FUN_0056494f ; 005143cf
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005143d4
    RET                                 ; 005143d7

