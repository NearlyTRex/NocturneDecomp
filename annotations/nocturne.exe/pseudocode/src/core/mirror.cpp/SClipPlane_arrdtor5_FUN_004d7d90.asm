; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SClipPlane * __cdecl core_mirror_cpp_SClipPlane_arrdtor5_FUN_004d7d90(SClipPlane *this_ptr,uint flags)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_mirror.cpp_CMirror_dtor_FUN_004d6570 at 004d657c
;
; Referenced Globals:
;   WatcomTypeInfo g_SClipPlaneTypeInfo_005a08a0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a08a0                       ; 004d7d90 | g_SClipPlaneTypeInfo_005a08a0
        ;   Label: core_mirror.cpp_SClipPlane_arrdtor5_FUN_004d7d90
    PUSH 0x5                            ; 004d7d95
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d7d97
    PUSH EDX                            ; 004d7d9b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004d7d9c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004d7da1
    RET                                 ; 004d7da4

