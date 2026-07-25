; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_004f5110 at 004f5241
;   FUN_004f5b70 at 004f5b8e
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyACTPalette_FUN_004f4a00 at 004f4a24
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4a50
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
    PUSH ESI                            ; 004f4a51
    PUSH EDI                            ; 004f4a52
    SUB ESP,0x4                         ; 004f4a53
    MOV ECX,dword ptr [ESP + 0x14]      ; 004f4a56
    MOV ESI,dword ptr [ESP + 0x18]      ; 004f4a5a
    MOV EDX,dword ptr [ECX + 0x20]      ; 004f4a5e
    MOV EAX,dword ptr [ECX + 0x14]      ; 004f4a61
    MOV ECX,dword ptr [ECX + 0x1c]      ; 004f4a64
    MOV EDI,dword ptr [EDX]             ; 004f4a67
    MOV EDX,dword ptr [EDX + ECX*0x4]   ; 004f4a69
    ADD EDX,EAX                         ; 004f4a6c
    ADD EDI,EAX                         ; 004f4a6e
    MOV dword ptr [ESP],EDX             ; 004f4a70
    CMP EDI,EDX                         ; 004f4a73
    JNC 0x004f4aa4                      ; 004f4a75
        ;   XREF to: 004f4aa4 (CONDITIONAL_JUMP)  ; LAB_004f4aa4
    XOR EBX,EBX                         ; 004f4a77
        ;   Label: LAB_004f4a77
    MOV BX,word ptr [EDI + 0x2]         ; 004f4a79
    LEA EDX,[EBX + 0x3]                 ; 004f4a7d
    LEA EAX,[EDI + 0x4]                 ; 004f4a80
    AND DL,0xfc                         ; 004f4a83
    LEA EDI,[EAX + EDX*0x1]             ; 004f4a86
    XOR EDX,EDX                         ; 004f4a89
    TEST EBX,EBX                        ; 004f4a8b
    JLE 0x004f4a9f                      ; 004f4a8d
        ;   XREF to: 004f4a9f (CONDITIONAL_JUMP)  ; LAB_004f4a9f
    XOR ECX,ECX                         ; 004f4a8f
        ;   Label: LAB_004f4a8f
    MOV CL,byte ptr [EAX]               ; 004f4a91
    INC EAX                             ; 004f4a93
    MOV CL,byte ptr [ECX + ESI*0x1]     ; 004f4a94
    INC EDX                             ; 004f4a97
    MOV byte ptr [EAX + -0x1],CL        ; 004f4a98
    CMP EDX,EBX                         ; 004f4a9b
    JL 0x004f4a8f                       ; 004f4a9d
        ;   XREF to: 004f4a8f (CONDITIONAL_JUMP)  ; LAB_004f4a8f
    CMP EDI,dword ptr [ESP]             ; 004f4a9f
        ;   Label: LAB_004f4a9f
    JC 0x004f4a77                       ; 004f4aa2
        ;   XREF to: 004f4a77 (CONDITIONAL_JUMP)  ; LAB_004f4a77
    ADD ESP,0x4                         ; 004f4aa4
        ;   Label: LAB_004f4aa4
    POP EDI                             ; 004f4aa7
    POP ESI                             ; 004f4aa8
    POP EBX                             ; 004f4aa9
    RET                                 ; 004f4aaa

