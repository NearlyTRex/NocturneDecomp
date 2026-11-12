; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_dtor_FUN_0044cb00(CDemonCamera *this_ptr,uint flags)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_dtor_FUN_00462530 at 0046254f
;
; Referenced Globals:
;   undefined1* g_CDemonCameraVTable = 0044cb00
;   WatcomTypeInfo g_CDemonCameraTypeInfo
;
; Called Functions:
;   core_camview.cpp_CCameraView_dtor_FUN_00428240
;   core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cb00
        ;   Label: core_dcamera.cpp_CDemonCamera_dtor_FUN_0044cb00
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044cb01
    TEST byte ptr [ESP + 0xc],0x4       ; 0044cb05
    JNZ 0x0044cb36                      ; 0044cb0a
        ;   XREF to: 0044cb36 (CONDITIONAL_JUMP)  ; LAB_0044cb36
    PUSH EBX                            ; 0044cb0c
    MOV dword ptr [EBX + 0x3c],0x5fe624 ; 0044cb0d | g_CDemonCameraVTable
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0 ; 0044cb14
        ;   XREF to: 0044cdf0 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_free_FUN_0044cdf0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0044cb19
    PUSH 0x1                            ; 0044cb1c
    PUSH EBX                            ; 0044cb1e
    CALL core_camview.cpp_CCameraView_dtor_FUN_00428240 ; 0044cb1f
        ;   XREF to: 00428240 (UNCONDITIONAL_CALL)  ; CCameraView * core_camview.cpp_CCameraView_dtor_FUN_00428240(CCameraView * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044cb24
    MOV DL,byte ptr [ESP + 0xc]         ; 0044cb27
    MOV EBX,EAX                         ; 0044cb2b
    TEST DL,0x2                         ; 0044cb2d
    JNZ 0x0044cb51                      ; 0044cb30
        ;   XREF to: 0044cb51 (CONDITIONAL_JUMP)  ; LAB_0044cb51
    MOV EAX,EBX                         ; 0044cb32
    POP EBX                             ; 0044cb34
    RET                                 ; 0044cb35
    PUSH 0x5fe640                       ; 0044cb36 | g_CDemonCameraTypeInfo
        ;   Label: LAB_0044cb36
    PUSH EBX                            ; 0044cb3b
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 0044cb3c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 0044cb41
    PUSH EAX                            ; 0044cb44
    CALL crt_unknown.c_FUN_005c0336     ; 0044cb45
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 0044cb4a
    MOV EAX,EBX                         ; 0044cb4d
    POP EBX                             ; 0044cb4f
    RET                                 ; 0044cb50
    PUSH EAX                            ; 0044cb51
        ;   Label: LAB_0044cb51
    CALL crt_unknown.c_FUN_005c0344     ; 0044cb52
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0044cb57
    MOV EAX,EBX                         ; 0044cb5a
    POP EBX                             ; 0044cb5c
    RET                                 ; 0044cb5d

