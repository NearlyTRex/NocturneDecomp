; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_0045ce10(int x,int y,int grayscale_value)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   grayscale_value
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ce10
        ;   Label: core_dlight.cpp_drawGrayscalePixel_FUN_0045ce10
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045ce11
    MOV EDX,dword ptr [ESP + 0x8]       ; 0045ce15
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045ce19
    SHL EDX,0x2                         ; 0045ce1d
    MOV EAX,dword ptr [EAX*0x4 + 0x1c5faec] ; 0045ce20
    LEA ECX,[EAX + EDX*0x1]             ; 0045ce27
    MOV EAX,EBX                         ; 0045ce2a
    SHL EAX,0x8                         ; 0045ce2c
    LEA EDX,[EBX + EAX*0x1]             ; 0045ce2f
    MOV EAX,EBX                         ; 0045ce32
    SHL EAX,0x10                        ; 0045ce34
    ADD EDX,EAX                         ; 0045ce37
    MOV dword ptr [ECX],EDX             ; 0045ce39
    POP EBX                             ; 0045ce3b
    RET                                 ; 0045ce3c

