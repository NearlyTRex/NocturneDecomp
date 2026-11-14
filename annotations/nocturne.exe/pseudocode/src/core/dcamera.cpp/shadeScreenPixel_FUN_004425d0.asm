; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_shadeScreenPixel_FUN_004425d0(uint unused,int x,int y)
;
; Parameters:
; uint             Stack[0x4]:4   unused
; int              Stack[0x8]:4   x
; int              Stack[0xc]:4   y
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 004425d0
        ;   Label: core_dcamera.cpp_shadeScreenPixel_FUN_004425d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004425d4
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd2fa0] ; 004425d8 | g_ScreenBufferArray
    ADD EAX,EDX                         ; 004425df
    XOR EDX,EDX                         ; 004425e1
    MOV DL,byte ptr [EAX]               ; 004425e3
    MOV DL,byte ptr [EDX + 0x1bf5920]   ; 004425e5
    MOV byte ptr [EAX],DL               ; 004425eb
    RET                                 ; 004425ed

