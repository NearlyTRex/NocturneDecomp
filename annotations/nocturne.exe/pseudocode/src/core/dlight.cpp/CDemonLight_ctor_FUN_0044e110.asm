; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dlight_cpp_CDemonLight_ctor_FUN_0044e110(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_ctor_FUN_0041f310 at 0041f32d
;   core_game.cpp_staticInit_FUN_0049a1e0 at 0049a1ef
;   core_setutil.cpp_C3DSLight_create_FUN_005151f0 at 00515329
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0043fee0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0044e110
        ;   Label: core_dlight.cpp_CDemonLight_ctor_FUN_0044e110
    PUSH EDX                            ; 0044e114
    CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_0043fee0 ; 0044e115
        ;   XREF to: 0043fee0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_CDemonCamera_ctor_FUN_0043fee0()
    MOV dword ptr [EAX + 0x1cb4],0x1    ; 0044e11a
    MOV dword ptr [EAX + 0x1cb8],0x1    ; 0044e124
    MOV dword ptr [EAX + 0x2f94],0x0    ; 0044e12e
    MOV dword ptr [EAX + 0x2f98],0x0    ; 0044e138
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 0044e142
    MOV dword ptr [EAX + 0x164],0x0     ; 0044e14c
    MOV dword ptr [EAX + 0x100],0x437f0000 ; 0044e156
    MOV dword ptr [EAX + 0x2fa0],0x0    ; 0044e160
    MOV dword ptr [EAX + 0x1c6c],0x0    ; 0044e16a
    MOV dword ptr [EAX + 0x1c54],0x0    ; 0044e174
    MOV dword ptr [EAX + 0x2fa4],0x10000 ; 0044e17e
    MOV dword ptr [EAX + 0x2fa8],0x3f800000 ; 0044e188
    MOV dword ptr [EAX + 0x1cbc],0x0    ; 0044e192
    ADD ESP,0x4                         ; 0044e19c
    MOV dword ptr [EAX + 0x1cd0],0x1    ; 0044e19f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044e1a9
    MOV dword ptr [EAX + 0x1cc0],EDX    ; 0044e1ad
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044e1b3
    MOV dword ptr [EAX + 0x1cc4],EDX    ; 0044e1b7
    RET                                 ; 0044e1bd

