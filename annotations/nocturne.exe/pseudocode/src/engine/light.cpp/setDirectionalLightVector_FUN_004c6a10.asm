; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004c6a10(int dir_x,int dir_y,int dir_z)
;
; Parameters:
; int              Stack[0x4]:4   dir_x
; int              Stack[0x8]:4   dir_y
; int              Stack[0xc]:4   dir_z
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00460c70 at 00460c80
;   engine_drender.cpp_FUN_00460c90 at 00460cda
;
; Referenced Globals:
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;   undefined4 DAT_01cc3664
;   undefined4 DAT_01cc3668
;   undefined4 DAT_01cc366c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c6a10
        ;   Label: engine_light.cpp_setDirectionalLightVector_FUN_004c6a10
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c6a14
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c6a18
    MOV dword ptr [0x01c039dc],EDX      ; 004c6a1c | DAT_01c039dc
    MOV [0x01cc3668],EAX                ; 004c6a22 | DAT_01cc3668
    MOV [0x01c039e0],EAX                ; 004c6a27 | DAT_01c039e0
    MOV dword ptr [0x01cc366c],ECX      ; 004c6a2c | DAT_01cc366c
    MOV dword ptr [0x01c039e4],ECX      ; 004c6a32 | DAT_01c039e4
    MOV dword ptr [0x01cc3664],EDX      ; 004c6a38 | DAT_01cc3664
    RET                                 ; 004c6a3e

