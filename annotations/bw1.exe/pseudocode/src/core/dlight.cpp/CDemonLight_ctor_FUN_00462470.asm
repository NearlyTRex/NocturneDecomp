; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonLight * __cdecl core_dlight_cpp_CDemonLight_ctor_FUN_00462470(CDemonLight *this_ptr,int shadow_map_width,int shadow_map_height)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   shadow_map_width
; int              Stack[0xc]:4   shadow_map_height
;
; XREF[3]:
;   core_boxactor.cpp_CLightActor_ctor_FUN_00422ed0 at 00422eed
;   core_game.cpp_staticInit_FUN_004cb7d0 at 004cb7df
;   core_setutil.cpp_C3DSLight_create_FUN_0055cf80 at 0055d0bd
;
; Referenced Globals:
;   undefined1* PTR_core_dlight.cpp_CDemonLight_dtor_FUN_00462530_005febf4 = 00462530
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0044caa0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00462470
        ;   Label: core_dlight.cpp_CDemonLight_ctor_FUN_00462470
    PUSH EDX                            ; 00462474
    CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_0044caa0 ; 00462475
        ;   XREF to: 0044caa0 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_ctor_FUN_0044caa0(CDemonCamera * this_ptr)
    MOV dword ptr [EAX + 0x3c],0x5febf4 ; 0046247a | PTR_core_dlight.cpp_CDemonLight_dtor_FUN_00462530_005febf4
    MOV dword ptr [EAX + 0x1cb4],0x1    ; 00462481
    MOV dword ptr [EAX + 0x1cb8],0x1    ; 0046248b
    MOV dword ptr [EAX + 0x2f94],0x0    ; 00462495
    MOV dword ptr [EAX + 0x2f98],0x0    ; 0046249f
    MOV dword ptr [EAX + 0x2f9c],0x0    ; 004624a9
    MOV dword ptr [EAX + 0x164],0x0     ; 004624b3
    MOV dword ptr [EAX + 0x140],0x437f0000 ; 004624bd
    MOV dword ptr [EAX + 0x2fa0],0x0    ; 004624c7
    MOV dword ptr [EAX + 0x1c6c],0x0    ; 004624d1
    MOV dword ptr [EAX + 0x1c54],0x0    ; 004624db
    MOV dword ptr [EAX + 0x2fa4],0x10000 ; 004624e5
    MOV dword ptr [EAX + 0x2fa8],0x3f800000 ; 004624ef
    MOV dword ptr [EAX + 0x1cbc],0x0    ; 004624f9
    ADD ESP,0x4                         ; 00462503
    MOV dword ptr [EAX + 0x1cd0],0x1    ; 00462506
    MOV EDX,dword ptr [ESP + 0x8]       ; 00462510
    MOV dword ptr [EAX + 0x1cc0],EDX    ; 00462514
    MOV EDX,dword ptr [ESP + 0xc]       ; 0046251a
    MOV dword ptr [EAX + 0x1cc4],EDX    ; 0046251e
    RET                                 ; 00462524

