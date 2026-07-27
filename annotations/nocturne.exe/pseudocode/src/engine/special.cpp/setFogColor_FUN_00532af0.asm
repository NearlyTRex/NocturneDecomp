; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_setFogColor_FUN_00532af0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[3]:
;   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00447a70 at 00447b1d
;   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_004474e0 at 0044752a
;   engine_2d.c_setSolidColor_FUN_00404090 at 00404108
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dcc
;   undefined4 DAT_02dc9e0c
;   undefined4 DAT_02dc9e10
;   undefined4 DAT_02dc9e14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532af0
        ;   Label: engine_special.cpp_setFogColor_FUN_00532af0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00532af1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00532af5
    MOV ECX,dword ptr [ESP + 0x10]      ; 00532af9
    MOV EBX,dword ptr [0x01c02594]      ; 00532afd | DAT_01c02594
    MOV dword ptr [0x02dc9e10],EDX      ; 00532b03 | DAT_02dc9e10
    MOV dword ptr [0x02dc9e14],ECX      ; 00532b09 | DAT_02dc9e14
    MOV [0x02dc9e0c],EAX                ; 00532b0f | DAT_02dc9e0c
    TEST EBX,EBX                        ; 00532b14
    JNZ 0x00532b1c                      ; 00532b16
        ;   XREF to: 00532b1c (CONDITIONAL_JUMP)  ; LAB_00532b1c
    XOR EAX,EAX                         ; 00532b18
    POP EBX                             ; 00532b1a
    RET                                 ; 00532b1b
    PUSH ECX                            ; 00532b1c
        ;   Label: LAB_00532b1c
    PUSH EDX                            ; 00532b1d
    PUSH EAX                            ; 00532b1e
    CALL dword ptr [0x02dc9dcc]         ; 00532b1f | DAT_02dc9dcc
    ADD ESP,0xc                         ; 00532b25
    POP EBX                             ; 00532b28
    RET                                 ; 00532b29

