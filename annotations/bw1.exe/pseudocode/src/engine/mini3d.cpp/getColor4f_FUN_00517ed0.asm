; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_getColor4f_FUN_00517ed0(float *alpha,float *red,float *green,float *blue)
;
; Parameters:
; float *          Stack[0x4]:4   alpha
; float *          Stack[0x8]:4   red
; float *          Stack[0xc]:4   green
; float *          Stack[0x10]:4   blue
;
; Referenced Globals:
;   undefined4 DAT_01d224c0
;   undefined4 DAT_01d25f38
;   undefined4 DAT_01d25f3c
;   undefined4 DAT_01d25f40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00517ed0
        ;   Label: engine_mini3d.cpp_getColor4f_FUN_00517ed0
    MOV EDX,dword ptr [0x01d224c0]      ; 00517ed4 | DAT_01d224c0
    MOV dword ptr [EAX],EDX             ; 00517eda
    MOV EAX,dword ptr [ESP + 0x8]       ; 00517edc
    MOV EDX,dword ptr [0x01d25f38]      ; 00517ee0 | DAT_01d25f38
    MOV dword ptr [EAX],EDX             ; 00517ee6
    MOV EAX,dword ptr [ESP + 0xc]       ; 00517ee8
    MOV EDX,dword ptr [0x01d25f3c]      ; 00517eec | DAT_01d25f3c
    MOV dword ptr [EAX],EDX             ; 00517ef2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00517ef4
    MOV EDX,dword ptr [0x01d25f40]      ; 00517ef8 | DAT_01d25f40
    MOV dword ptr [EAX],EDX             ; 00517efe
    RET                                 ; 00517f00

