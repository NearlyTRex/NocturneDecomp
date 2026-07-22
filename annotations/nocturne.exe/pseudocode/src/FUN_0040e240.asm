; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0040e240(undefined4 *param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e240
        ;   Label: FUN_0040e240
    MOV ECX,dword ptr [ESP + 0x8]       ; 0040e244
    ADD EAX,0x4                         ; 0040e248
    MOV EDX,dword ptr [ECX]             ; 0040e24b
    MOV dword ptr [EAX + -0x4],EDX      ; 0040e24d
    LEA EDX,[ECX + 0x4]                 ; 0040e250
    ADD EAX,0x4                         ; 0040e253
    MOV EDX,dword ptr [EDX]             ; 0040e256
    MOV dword ptr [EAX + -0x4],EDX      ; 0040e258
    LEA EDX,[ECX + 0x8]                 ; 0040e25b
    SUB EAX,0x8                         ; 0040e25e
    MOV EDX,dword ptr [EDX]             ; 0040e261
    MOV dword ptr [EAX + 0x8],EDX       ; 0040e263
    LEA EDX,[EAX + 0xc]                 ; 0040e266
    LEA EAX,[ECX + 0xc]                 ; 0040e269
    MOV ECX,dword ptr [EAX]             ; 0040e26c
    MOV dword ptr [EDX],ECX             ; 0040e26e
    LEA ECX,[EAX + 0x4]                 ; 0040e270
    ADD EDX,0x4                         ; 0040e273
    MOV ECX,dword ptr [ECX]             ; 0040e276
    MOV dword ptr [EDX],ECX             ; 0040e278
    ADD EDX,0x4                         ; 0040e27a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0040e27d
    MOV dword ptr [EDX],EAX             ; 0040e280
    LEA EAX,[EDX + -0x14]               ; 0040e282
    RET                                 ; 0040e285

