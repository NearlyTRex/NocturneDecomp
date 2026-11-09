; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonLight * __cdecl core_dlight_cpp_CDemonLight_ctor_FUN_0045c180(CDemonLight *this_ptr,int shadow_map_width,int shadow_map_height)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   shadow_map_width
; int              Stack[0xc]:4   shadow_map_height
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_ctor_FUN_00420360 at 0042037d
;   core_game.cpp_staticInit_FUN_004b3cd0 at 004b3cdf
;   core_setutil.cpp_C3DSLight_create_FUN_00542940 at 00542a7d
;
; Referenced Globals:
;   undefined1* PTR_core_dlight.cpp_CDemonLight_dtor_FUN_0045c240_005de514 = 0045c240
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_00448be0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045c180
        ;   Label: core_dlight.cpp_CDemonLight_ctor_FUN_0045c180
    PUSH EDX                            ; 0045c184
    CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_00448be0 ; 0045c185
        ;   XREF to: 00448be0 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_ctor_FUN_00448be0(CDemonCamera * this_ptr)
    MOV dword ptr [EAX + 0x3c],0x5de514 ; 0045c18a | PTR_core_dlight.cpp_CDemonLight_dtor_FUN_0045c240_005de514
    MOV dword ptr [EAX + 0x1cb4],0x1    ; 0045c191
    MOV dword ptr [EAX + 0x1cb8],0x1    ; 0045c19b
    MOV dword ptr [EAX + 0x2f94],0x0    ; 0045c1a5
    MOV dword ptr [EAX + 0x2f98],0x0    ; 0045c1af
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 0045c1b9
    MOV dword ptr [EAX + 0x164],0x0     ; 0045c1c3
    MOV dword ptr [EAX + 0x140],0x437f0000 ; 0045c1cd
    MOV dword ptr [EAX + 0x2fa0],0x0    ; 0045c1d7
    MOV dword ptr [EAX + 0x1c6c],0x0    ; 0045c1e1
    MOV dword ptr [EAX + 0x1c54],0x0    ; 0045c1eb
    MOV dword ptr [EAX + 0x2fa4],0x10000 ; 0045c1f5
    MOV dword ptr [EAX + 0x2fa8],0x3f800000 ; 0045c1ff
    MOV dword ptr [EAX + 0x1cbc],0x0    ; 0045c209
    ADD ESP,0x4                         ; 0045c213
    MOV dword ptr [EAX + 0x1cd0],0x1    ; 0045c216
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045c220
    MOV dword ptr [EAX + 0x1cc0],EDX    ; 0045c224
    MOV EDX,dword ptr [ESP + 0xc]       ; 0045c22a
    MOV dword ptr [EAX + 0x1cc4],EDX    ; 0045c22e
    RET                                 ; 0045c234

