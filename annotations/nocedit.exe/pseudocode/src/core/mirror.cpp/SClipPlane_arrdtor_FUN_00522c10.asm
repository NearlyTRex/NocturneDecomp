; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SClipPlane * __cdecl core_mirror_cpp_SClipPlane_arrdtor_FUN_00522c10(SClipPlane *objs,uint flags)
;
; Parameters:
; SClipPlane *     Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_mirror.cpp_CMirror_dtor_FUN_005213e0 at 005213ec
;
; Referenced Globals:
;   WatcomTypeInfo g_SClipPlaneTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x661700                       ; 00522c10 | g_SClipPlaneTypeInfo
        ;   Label: core_mirror.cpp_SClipPlane_arrdtor_FUN_00522c10
    PUSH 0x5                            ; 00522c15
    MOV EDX,dword ptr [ESP + 0xc]       ; 00522c17
    PUSH EDX                            ; 00522c1b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 00522c1c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00522c21
    RET                                 ; 00522c24

