; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00421840(int param_1,undefined4 *param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421840
        ;   Label: FUN_00421840
    MOV ECX,dword ptr [ESP + 0xc]       ; 00421841
    MOV EAX,dword ptr [ESP + 0x8]       ; 00421845
    ADD EAX,0x19834                     ; 00421849
    MOV EDX,dword ptr [EAX]             ; 0042184e
    LEA EBX,[EAX + 0x4]                 ; 00421850
    MOV dword ptr [ECX],EDX             ; 00421853
    LEA EDX,[ECX + 0x4]                 ; 00421855
    MOV EBX,dword ptr [EBX]             ; 00421858
    MOV dword ptr [EDX],EBX             ; 0042185a
    LEA EBX,[EAX + 0x8]                 ; 0042185c
    MOV EBX,dword ptr [EBX]             ; 0042185f
    MOV dword ptr [EDX + 0x4],EBX       ; 00421861
    MOV EBX,dword ptr [EAX + 0xc]       ; 00421864
    ADD EAX,0xc                         ; 00421867
    MOV dword ptr [EDX + 0x8],EBX       ; 0042186a
    LEA EBX,[EAX + 0x4]                 ; 0042186d
    MOV EBX,dword ptr [EBX]             ; 00421870
    MOV dword ptr [EDX + 0xc],EBX       ; 00421872
    MOV EAX,dword ptr [EAX + 0x8]       ; 00421875
    MOV dword ptr [EDX + 0x10],EAX      ; 00421878
    MOV EAX,ECX                         ; 0042187b
    POP EBX                             ; 0042187d
    RET                                 ; 0042187e

