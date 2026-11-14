; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0043b460(CDemonCamera *this_ptr,uint flags)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_dtor_FUN_00449d30 at 00449d4f
;
; Referenced Globals:
;   undefined1* g_CDemonCameraVTable = 0043b460
;   WatcomTypeInfo g_CDemonCameraTypeInfo
;
; Called Functions:
;   core_camview.cpp_CCameraView_dtor_FUN_00422220
;   core_dcamera.cpp_CDemonCamera_free_FUN_0043b730
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b460
        ;   Label: core_dcamera.cpp_CDemonCamera_dtor_FUN_0043b460
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b461
    TEST byte ptr [ESP + 0xc],0x4       ; 0043b465
    JNZ 0x0043b496                      ; 0043b46a
        ;   XREF to: 0043b496 (CONDITIONAL_JUMP)  ; LAB_0043b496
    PUSH EBX                            ; 0043b46c
    MOV dword ptr [EBX + 0x3c],0x5f4df4 ; 0043b46d | g_CDemonCameraVTable
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_0043b730 ; 0043b474
        ;   XREF to: 0043b730 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_free_FUN_0043b730(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0043b479
    PUSH 0x1                            ; 0043b47c
    PUSH EBX                            ; 0043b47e
    CALL core_camview.cpp_CCameraView_dtor_FUN_00422220 ; 0043b47f
        ;   XREF to: 00422220 (UNCONDITIONAL_CALL)  ; CCameraView * core_camview.cpp_CCameraView_dtor_FUN_00422220(CCameraView * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043b484
    MOV DL,byte ptr [ESP + 0xc]         ; 0043b487
    MOV EBX,EAX                         ; 0043b48b
    TEST DL,0x2                         ; 0043b48d
    JNZ 0x0043b4b1                      ; 0043b490
        ;   XREF to: 0043b4b1 (CONDITIONAL_JUMP)  ; LAB_0043b4b1
    MOV EAX,EBX                         ; 0043b492
    POP EBX                             ; 0043b494
    RET                                 ; 0043b495
    PUSH 0x5f4e10                       ; 0043b496 | g_CDemonCameraTypeInfo
        ;   Label: LAB_0043b496
    PUSH EBX                            ; 0043b49b
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 0043b49c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0043b4a1
    PUSH EAX                            ; 0043b4a4
    CALL crt_unknown.c_FUN_005b7fce     ; 0043b4a5
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 0043b4aa
    MOV EAX,EBX                         ; 0043b4ad
    POP EBX                             ; 0043b4af
    RET                                 ; 0043b4b0
    PUSH EAX                            ; 0043b4b1
        ;   Label: LAB_0043b4b1
    CALL crt_unknown.c_FUN_005b7fdc     ; 0043b4b2
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 0043b4b7
    MOV EAX,EBX                         ; 0043b4ba
    POP EBX                             ; 0043b4bc
    RET                                 ; 0043b4bd

