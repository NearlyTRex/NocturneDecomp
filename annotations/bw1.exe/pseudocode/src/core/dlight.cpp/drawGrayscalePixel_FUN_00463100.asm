; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_00463100(int x,int y,int grayscale_value)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   grayscale_value
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463100
        ;   Label: core_dlight.cpp_drawGrayscalePixel_FUN_00463100
    MOV EBX,dword ptr [ESP + 0x10]      ; 00463101
    MOV EDX,dword ptr [ESP + 0x8]       ; 00463105
    MOV EAX,dword ptr [ESP + 0xc]       ; 00463109
    SHL EDX,0x2                         ; 0046310d
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4354c] ; 00463110
    LEA ECX,[EAX + EDX*0x1]             ; 00463117
    MOV EAX,EBX                         ; 0046311a
    SHL EAX,0x8                         ; 0046311c
    LEA EDX,[EBX + EAX*0x1]             ; 0046311f
    MOV EAX,EBX                         ; 00463122
    SHL EAX,0x10                        ; 00463124
    ADD EDX,EAX                         ; 00463127
    MOV dword ptr [ECX],EDX             ; 00463129
    POP EBX                             ; 0046312b
    RET                                 ; 0046312c

