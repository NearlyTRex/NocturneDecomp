; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0056ba00(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_004ce580 at 004ce6b7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056ba00
        ;   Label: FUN_0056ba00
    MOV dword ptr [EDX + 0x8],0x0       ; 0056ba04
    LEA EAX,[EDX + 0xc]                 ; 0056ba0b
    MOV ECX,dword ptr [EDX + 0x8]       ; 0056ba0e
    MOV dword ptr [EDX + 0x4],ECX       ; 0056ba11
    MOV ECX,dword ptr [EDX + 0x4]       ; 0056ba14
    MOV dword ptr [EDX],ECX             ; 0056ba17
    MOV dword ptr [EAX + 0x8],0x0       ; 0056ba19
    MOV ECX,dword ptr [EAX + 0x8]       ; 0056ba20
    MOV dword ptr [EAX + 0x4],ECX       ; 0056ba23
    MOV ECX,dword ptr [EAX + 0x4]       ; 0056ba26
    MOV dword ptr [EAX],ECX             ; 0056ba29
    MOV dword ptr [EDX + 0x18],0x41e00000 ; 0056ba2b
    LEA EAX,[EAX]                       ; 0056ba32
    LEA EDX,[EDX]                       ; 0056ba38
    MOV EAX,EAX                         ; 0056ba3e
    RET                                 ; 0056ba40

