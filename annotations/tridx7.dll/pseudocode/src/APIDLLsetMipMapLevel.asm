; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLsetMipMapLevel(int mipmap_level)
;
; Parameters:
; int              Stack[0x4]:4   mipmap_level
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 10003f00
        ;   Label: APIDLLsetMipMapLevel
    RET                                 ; 10003f05

