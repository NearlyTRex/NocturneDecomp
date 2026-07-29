; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; C3DSCamera * __cdecl core_set_cpp_FUN_0050eb00(C3DSCamera *objs,uint flags)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   objs
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00506e50 at 00506e97
;
; Referenced Globals:
;   WatcomTypeInfo g_C3DSCameraTypeInfo_005a1970
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a1970                       ; 0050eb00 | g_C3DSCameraTypeInfo_005a1970
        ;   Label: core_set.cpp_FUN_0050eb00
    PUSH 0xfa                           ; 0050eb05
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050eb0a
    PUSH EDX                            ; 0050eb0e
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0050eb0f
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050eb14
    RET                                 ; 0050eb17

