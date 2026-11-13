; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_getColor4f_FUN_004f8fa0(float *alpha,float *red,float *green,float *blue)
;
; Parameters:
; float *          Stack[0x4]:4   alpha
; float *          Stack[0x8]:4   red
; float *          Stack[0xc]:4   green
; float *          Stack[0x10]:4   blue
;
; Referenced Globals:
;   undefined4 DAT_01d09860
;   undefined4 DAT_01d0d2d8
;   undefined4 DAT_01d0d2dc
;   undefined4 DAT_01d0d2e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f8fa0
        ;   Label: engine_mini3d.cpp_getColor4f_FUN_004f8fa0
    MOV EDX,dword ptr [0x01d09860]      ; 004f8fa4 | DAT_01d09860
    MOV dword ptr [EAX],EDX             ; 004f8faa
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f8fac
    MOV EDX,dword ptr [0x01d0d2d8]      ; 004f8fb0 | DAT_01d0d2d8
    MOV dword ptr [EAX],EDX             ; 004f8fb6
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f8fb8
    MOV EDX,dword ptr [0x01d0d2dc]      ; 004f8fbc | DAT_01d0d2dc
    MOV dword ptr [EAX],EDX             ; 004f8fc2
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f8fc4
    MOV EDX,dword ptr [0x01d0d2e0]      ; 004f8fc8 | DAT_01d0d2e0
    MOV dword ptr [EAX],EDX             ; 004f8fce
    RET                                 ; 004f8fd0

