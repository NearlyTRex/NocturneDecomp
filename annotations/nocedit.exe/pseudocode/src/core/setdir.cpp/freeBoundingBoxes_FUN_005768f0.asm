; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setdir.cpp_freeBoundingBoxes_FUN_005768f0(CBoundingBox3D * * array)
;
; Parameters:
; CBoundingBox3D * * Stack[0x4]:4   array
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoundingBox3DTypeInfo
;
; Called Functions:
;   crt_memory.c_freeTypeArray_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x659900                       ; 005768f0 | WatcomTypeInfo g_CBoundingBox3DTypeInfo
        ;   Label: core_setdir.cpp_freeBoundingBoxes_FUN_005768f0
    PUSH 0x7d0                          ; 005768f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 005768fa
    PUSH EDX                            ; 005768fe
    CALL crt_memory.c_freeTypeArray_FUN_005feee9 ; 005768ff | int crt_memory.c_freeTypeArray_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00576904
    RET                                 ; 00576907

