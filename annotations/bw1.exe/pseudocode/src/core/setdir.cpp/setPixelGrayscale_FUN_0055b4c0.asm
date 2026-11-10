; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_setPixelGrayscale_FUN_0055b4c0(int x,int y,int grayscale_value)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   grayscale_value
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055b4c0
        ;   Label: core_setdir.cpp_setPixelGrayscale_FUN_0055b4c0
    MOV EBX,dword ptr [ESP + 0x10]      ; 0055b4c1
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055b4c5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055b4c9
    SHL EDX,0x2                         ; 0055b4cd
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4354c] ; 0055b4d0
    LEA ECX,[EAX + EDX*0x1]             ; 0055b4d7
    MOV EAX,EBX                         ; 0055b4da
    SHL EAX,0x8                         ; 0055b4dc
    LEA EDX,[EBX + EAX*0x1]             ; 0055b4df
    MOV EAX,EBX                         ; 0055b4e2
    SHL EAX,0x10                        ; 0055b4e4
    ADD EDX,EAX                         ; 0055b4e7
    MOV dword ptr [ECX],EDX             ; 0055b4e9
    POP EBX                             ; 0055b4eb
    RET                                 ; 0055b4ec

