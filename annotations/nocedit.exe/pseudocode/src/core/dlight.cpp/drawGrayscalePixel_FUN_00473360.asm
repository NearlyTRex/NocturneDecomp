; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_drawGrayscalePixel_FUN_00473360(int x,int y,int grayscale_value)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   grayscale_value
;
; Referenced Globals:
;   void*[1200] g_ScreenBufferArray
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473360
        ;   Label: core_dlight.cpp_drawGrayscalePixel_FUN_00473360
    MOV EBX,dword ptr [ESP + 0x10]      ; 00473361
    MOV EDX,dword ptr [ESP + 0x8]       ; 00473365
    MOV EAX,dword ptr [ESP + 0xc]       ; 00473369
    SHL EDX,0x2                         ; 0047336d
    MOV EAX,dword ptr [EAX*0x4 + 0x2cf6a9c] ; 00473370 | g_ScreenBufferArray
    LEA ECX,[EAX + EDX*0x1]             ; 00473377
    MOV EAX,EBX                         ; 0047337a
    SHL EAX,0x8                         ; 0047337c
    LEA EDX,[EBX + EAX*0x1]             ; 0047337f
    MOV EAX,EBX                         ; 00473382
    SHL EAX,0x10                        ; 00473384
    ADD EDX,EAX                         ; 00473387
    MOV dword ptr [ECX],EDX             ; 00473389
    POP EBX                             ; 0047338b
    RET                                 ; 0047338c

