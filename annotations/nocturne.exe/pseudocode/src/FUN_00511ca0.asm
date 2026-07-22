; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00511ca0(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511ca0
        ;   Label: FUN_00511ca0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00511ca1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00511ca5
    MOV ECX,dword ptr [EDX]             ; 00511ca9
    MOV dword ptr [EAX],ECX             ; 00511cab
    FLD float ptr [EDX + 0x4]           ; 00511cad
    LEA ECX,[EAX + 0xc]                 ; 00511cb0
    FSTP float ptr [EAX + 0x4]          ; 00511cb3
    MOV EBX,dword ptr [EDX + 0x8]       ; 00511cb6
    MOV dword ptr [EAX + 0x8],EBX       ; 00511cb9
    LEA EAX,[EDX + 0xc]                 ; 00511cbc
    MOV EBX,dword ptr [EAX]             ; 00511cbf
    MOV dword ptr [ECX],EBX             ; 00511cc1
    LEA EBX,[EAX + 0x4]                 ; 00511cc3
    ADD ECX,0x4                         ; 00511cc6
    MOV EBX,dword ptr [EBX]             ; 00511cc9
    MOV dword ptr [ECX],EBX             ; 00511ccb
    ADD ECX,0x4                         ; 00511ccd
    MOV EAX,dword ptr [EAX + 0x8]       ; 00511cd0
    MOV dword ptr [ECX],EAX             ; 00511cd3
    LEA EAX,[ECX + -0x14]               ; 00511cd5
    FLD float ptr [EDX + 0x18]          ; 00511cd8
    LEA ECX,[EAX + 0x1c]                ; 00511cdb
    FSTP float ptr [EAX + 0x18]         ; 00511cde
    LEA EAX,[EDX + 0x1c]                ; 00511ce1
    MOV EBX,dword ptr [EAX]             ; 00511ce4
    MOV dword ptr [ECX],EBX             ; 00511ce6
    LEA EBX,[EAX + 0x4]                 ; 00511ce8
    ADD ECX,0x4                         ; 00511ceb
    MOV EBX,dword ptr [EBX]             ; 00511cee
    MOV dword ptr [ECX],EBX             ; 00511cf0
    ADD ECX,0x4                         ; 00511cf2
    MOV EAX,dword ptr [EAX + 0x8]       ; 00511cf5
    MOV dword ptr [ECX],EAX             ; 00511cf8
    LEA EAX,[ECX + -0x24]               ; 00511cfa
    MOV ECX,dword ptr [EDX + 0x28]      ; 00511cfd
    MOV dword ptr [EAX + 0x28],ECX      ; 00511d00
    MOV ECX,dword ptr [EDX + 0x2c]      ; 00511d03
    MOV dword ptr [EAX + 0x2c],ECX      ; 00511d06
    MOV ECX,dword ptr [EDX + 0x30]      ; 00511d09
    MOV dword ptr [EAX + 0x30],ECX      ; 00511d0c
    MOV ECX,dword ptr [EDX + 0x34]      ; 00511d0f
    MOV dword ptr [EAX + 0x34],ECX      ; 00511d12
    MOV EDX,dword ptr [EDX + 0x38]      ; 00511d15
    MOV dword ptr [EAX + 0x38],EDX      ; 00511d18
    POP EBX                             ; 00511d1b
    RET                                 ; 00511d1c

