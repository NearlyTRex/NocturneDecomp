; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0044c090(CDemonCamera *this_ptr,uint flags)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_dtor_FUN_00472760 at 0047277f
;
; Referenced Globals:
;   CCameraView_vtable g_CDemonCameraVTable
;   WatcomTypeInfo g_CDemonCamera
;
; Called Functions:
;   core_camview.cpp_CCameraView_dtor_FUN_00427d00
;   core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
;   crt_memory.c___vec_delete_FUN_005fe632
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_free_FUN_005fe659
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044c090
        ;   Label: core_dcamera.cpp_CDemonCamera_dtor_FUN_0044c090
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044c091
    TEST byte ptr [ESP + 0xc],0x4       ; 0044c095
    JNZ 0x0044c0c6                      ; 0044c09a
        ;   XREF to: 0044c0c6 (CONDITIONAL_JUMP)  ; LAB_0044c0c6
    PUSH EBX                            ; 0044c09c
    MOV dword ptr [EBX + 0x3c],0x65c664 ; 0044c09d | g_CDemonCameraVTable
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_0044c360 ; 0044c0a4
        ;   XREF to: 0044c360 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044c0a9
    PUSH 0x1                            ; 0044c0ac
    PUSH EBX                            ; 0044c0ae
    CALL core_camview.cpp_CCameraView_dtor_FUN_00427d00 ; 0044c0af
        ;   XREF to: 00427d00 (UNCONDITIONAL_CALL)  ; CCameraView * core_camview.cpp_CCameraView_dtor_FUN_00427d00(CCameraView * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044c0b4
    MOV DL,byte ptr [ESP + 0xc]         ; 0044c0b7
    MOV EBX,EAX                         ; 0044c0bb
    TEST DL,0x2                         ; 0044c0bd
    JNZ 0x0044c0e1                      ; 0044c0c0
        ;   XREF to: 0044c0e1 (CONDITIONAL_JUMP)  ; LAB_0044c0e1
    MOV EAX,EBX                         ; 0044c0c2
    POP EBX                             ; 0044c0c4
    RET                                 ; 0044c0c5
    PUSH 0x65c690                       ; 0044c0c6 | g_CDemonCamera
        ;   Label: LAB_0044c0c6
    PUSH EBX                            ; 0044c0cb
    CALL crt_memory.c___vec_delete_FUN_005fe632 ; 0044c0cc
        ;   XREF to: 005fe632 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005fe632(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0044c0d1
    PUSH EAX                            ; 0044c0d4
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 0044c0d5
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 0044c0da
    MOV EAX,EBX                         ; 0044c0dd
    POP EBX                             ; 0044c0df
    RET                                 ; 0044c0e0
    PUSH EAX                            ; 0044c0e1
        ;   Label: LAB_0044c0e1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0044c0e2
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0044c0e7
    MOV EAX,EBX                         ; 0044c0ea
    POP EBX                             ; 0044c0ec
    RET                                 ; 0044c0ed

