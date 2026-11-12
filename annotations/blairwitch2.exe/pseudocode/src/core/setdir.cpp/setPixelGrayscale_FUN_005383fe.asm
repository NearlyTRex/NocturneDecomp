; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_005383fe(int x,int y,int grayscale_value)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   grayscale_value
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 005383fe
        ;   Label: core_setdir.cpp_setPixelGrayscale_FUN_005383fe
    PUSH EBX                            ; 00538400
    MOV EBX,dword ptr [ESP + 0x10]      ; 00538401
    MOV EDX,dword ptr [ESP + 0x8]       ; 00538405
    MOV EAX,dword ptr [ESP + 0xc]       ; 00538409
    SHL EDX,0x2                         ; 0053840d
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2a38c] ; 00538410
    LEA ECX,[EAX + EDX*0x1]             ; 00538417
    MOV EAX,EBX                         ; 0053841a
    SHL EAX,0x8                         ; 0053841c
    LEA EDX,[EBX + EAX*0x1]             ; 0053841f
    MOV EAX,EBX                         ; 00538422
    SHL EAX,0x10                        ; 00538424
    ADD EDX,EAX                         ; 00538427
    MOV dword ptr [ECX],EDX             ; 00538429
    POP EBX                             ; 0053842b
    RET                                 ; 0053842c

