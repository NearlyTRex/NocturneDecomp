; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonLight * __cdecl core_dlight_cpp_CDemonLight_ctor_FUN_004726a0 (CDemonLight *this_ptr,int shadow_map_width,int shadow_map_height)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   shadow_map_width
; int              Stack[0xc]:4   shadow_map_height
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_ctor_FUN_00422990 at 004229ad
;   core_game.cpp_staticInit_FUN_004d76d0 at 004d76df
;   core_setutil.cpp_C3DSLight_create_FUN_00586a90 at 00586bcd
;
; Referenced Globals:
;   CCameraView_vtable g_CDemonLightVTable
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004726a0
        ;   Label: core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
    PUSH EDX                            ; 004726a4
    CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030 ; 004726a5
        ;   XREF to: 0044c030 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030(CDemonCamera * this_ptr)
    MOV dword ptr [EAX + 0x3c],0x65c924 ; 004726aa | g_CDemonLightVTable
    MOV dword ptr [EAX + 0x1cb4],0x1    ; 004726b1
    MOV dword ptr [EAX + 0x1cb8],0x1    ; 004726bb
    MOV dword ptr [EAX + 0x2f94],0x0    ; 004726c5
    MOV dword ptr [EAX + 0x2f98],0x0    ; 004726cf
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 004726d9
    MOV dword ptr [EAX + 0x164],0x0     ; 004726e3
    MOV dword ptr [EAX + 0x140],0x437f0000 ; 004726ed
    MOV dword ptr [EAX + 0x2fa0],0x0    ; 004726f7
    MOV dword ptr [EAX + 0x1c6c],0x0    ; 00472701
    MOV dword ptr [EAX + 0x1c54],0x0    ; 0047270b
    MOV dword ptr [EAX + 0x2fa4],0x10000 ; 00472715
    MOV dword ptr [EAX + 0x2fa8],0x3f800000 ; 0047271f
    MOV dword ptr [EAX + 0x1cbc],0x0    ; 00472729
    ADD ESP,0x4                         ; 00472733
    MOV dword ptr [EAX + 0x1cd0],0x1    ; 00472736
    MOV EDX,dword ptr [ESP + 0x8]       ; 00472740
    MOV dword ptr [EAX + 0x1cc0],EDX    ; 00472744
    MOV EDX,dword ptr [ESP + 0xc]       ; 0047274a
    MOV dword ptr [EAX + 0x1cc4],EDX    ; 0047274e
    RET                                 ; 00472754

