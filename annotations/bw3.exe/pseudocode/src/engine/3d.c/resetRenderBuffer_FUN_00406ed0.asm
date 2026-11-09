; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_resetRenderBuffer_FUN_00406ed0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00730478
;   undefined4 DAT_0073047c
;
; *****************************************************************************

section .text

    XOR ECX,ECX                         ; 00406ed0
        ;   Label: engine_3d.c_resetRenderBuffer_FUN_00406ed0
    MOV EDX,0x1                         ; 00406ed2
    MOV dword ptr [0x0073047c],ECX      ; 00406ed7 | DAT_0073047c
    MOV dword ptr [0x00730478],EDX      ; 00406edd | DAT_00730478
    RET                                 ; 00406ee3

