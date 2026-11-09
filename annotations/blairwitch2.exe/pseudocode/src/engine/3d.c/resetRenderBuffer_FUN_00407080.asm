; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_resetRenderBuffer_FUN_00407080(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0070caf8
;   undefined4 DAT_0070cafc
;
; *****************************************************************************

section .text

    XOR ECX,ECX                         ; 00407080
        ;   Label: engine_3d.c_resetRenderBuffer_FUN_00407080
    MOV EDX,0x1                         ; 00407082
    MOV dword ptr [0x0070cafc],ECX      ; 00407087 | DAT_0070cafc
    MOV dword ptr [0x0070caf8],EDX      ; 0040708d | DAT_0070caf8
    RET                                 ; 00407093

