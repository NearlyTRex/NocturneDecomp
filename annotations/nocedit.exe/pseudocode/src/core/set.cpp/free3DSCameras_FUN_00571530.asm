; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl C3DSCamera * __cdecl core_set_cpp_free3DSCameras_FUN_00571530(C3DSCamera *objs)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   objs
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00569350 at 00569397
;
; Referenced Globals:
;   WatcomTypeInfo g_C3DSCameraTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x6628b0                       ; 00571530 | g_C3DSCameraTypeInfo
        ;   Label: core_set.cpp_free3DSCameras_FUN_00571530
    PUSH 0xfa                           ; 00571535
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057153a
    PUSH EDX                            ; 0057153e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0057153f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00571544
    RET                                 ; 00571547

