; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_processVertexLighting_FUN_00403a40(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_004079f0 at 00407ab2
;
; Referenced Globals:
;   undefined4 DAT_0070ca60
;
; Called Functions:
;   engine_light.cpp_calculateAndStoreVertexLight_FUN_004e2980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403a40
        ;   Label: engine_3d.c_processVertexLighting_FUN_00403a40
    PUSH ESI                            ; 00403a41
    PUSH EDI                            ; 00403a42
    PUSH EBP                            ; 00403a43
    MOV EDI,dword ptr [ESP + 0x14]      ; 00403a44
    LEA ESI,[EDI + 0xc]                 ; 00403a48
    MOV EDX,dword ptr [EDI + 0x8]       ; 00403a4b
    XOR EBX,EBX                         ; 00403a4e
    TEST EDX,EDX                        ; 00403a50
    JLE 0x00403a80                      ; 00403a52
        ;   XREF to: 00403a80 (CONDITIONAL_JUMP)  ; LAB_00403a80
    MOV EAX,dword ptr [EDI + 0x4]       ; 00403a54
        ;   Label: LAB_00403a54
    MOV ECX,dword ptr [0x0070ca60]      ; 00403a57 | DAT_0070ca60
    ADD EAX,EBX                         ; 00403a5d
    PUSH ESI                            ; 00403a5f
    ADD EAX,ECX                         ; 00403a60
    PUSH EAX                            ; 00403a62
    ADD ESI,0xc                         ; 00403a63
    INC EBX                             ; 00403a66
    CALL engine_light.cpp_calculateAndStoreVertexLight_FUN_004e2980 ; 00403a67
        ;   XREF to: 004e2980 (UNCONDITIONAL_CALL)  ; undefined engine_light.cpp_calculateAndStoreVertexLight_FUN_004e2980()
    MOV EBP,dword ptr [EDI + 0x8]       ; 00403a6c
    ADD ESP,0x8                         ; 00403a6f
    CMP EBX,EBP                         ; 00403a72
    JL 0x00403a54                       ; 00403a74
        ;   XREF to: 00403a54 (CONDITIONAL_JUMP)  ; LAB_00403a54
    LEA EAX,[EAX]                       ; 00403a76
    LEA EDX,[EDX]                       ; 00403a7c
    MOV EBX,dword ptr [EDI + 0x8]       ; 00403a80
        ;   Label: LAB_00403a80
    LEA EAX,[EBX*0x4 + 0x0]             ; 00403a83
    SUB EAX,EBX                         ; 00403a8a
    LEA EBX,[EAX*0x4 + 0x0]             ; 00403a8c
    LEA EAX,[EDI + 0xc]                 ; 00403a93
    ADD EAX,EBX                         ; 00403a96
    POP EBP                             ; 00403a98
    POP EDI                             ; 00403a99
    POP ESI                             ; 00403a9a
    POP EBX                             ; 00403a9b
    RET                                 ; 00403a9c

