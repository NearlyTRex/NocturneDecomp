; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonCamera * __cdecl core_dcamera_cpp_CDemonCamera_ctor_FUN_00448be0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dlight.cpp_CDemonLight_ctor_FUN_0045c180 at 0045c185
;   core_set.cpp_staticInit_FUN_005325b0 at 005325cf
;
; Referenced Globals:
;   undefined1* g_CDemonCameraVTable = 00448c40
;
; Called Functions:
;   core_camview.cpp_CCameraView_ctor_FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00448be0
        ;   Label: core_dcamera.cpp_CDemonCamera_ctor_FUN_00448be0
    PUSH EDX                            ; 00448be4
    CALL core_camview.cpp_CCameraView_ctor_FUN_004254b0 ; 00448be5
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; CCameraView * core_camview.cpp_CCameraView_ctor_FUN_004254b0(CCameraView * this_ptr)
    MOV dword ptr [EAX + 0x3c],0x5ddfe4 ; 00448bea | g_CDemonCameraVTable
    MOV dword ptr [EAX + 0x158],0x0     ; 00448bf1
    MOV dword ptr [EAX + 0x160],0x0     ; 00448bfb
    MOV dword ptr [EAX + 0x15c],0x0     ; 00448c05
    MOV dword ptr [EAX + 0x164],0x0     ; 00448c0f
    MOV dword ptr [EAX + 0x11e8],0x0    ; 00448c19
    MOV dword ptr [EAX + 0x11e4],0x0    ; 00448c23
    ADD ESP,0x4                         ; 00448c2d
    MOV dword ptr [EAX + 0x140],0x4479f99a ; 00448c30
    RET                                 ; 00448c3a

