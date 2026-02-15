; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_processVertexLighting_FUN_00403a20(SVertexBatch *vertex_batch)
;
; Parameters:
; SVertexBatch *   Stack[0x4]:4   vertex_batch
;
; XREF[1]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407b62
;
; Referenced Globals:
;   uint g_ProcessedVertexOffset
;
; Called Functions:
;   engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403a20
        ;   Label: engine_3d.c_processVertexLighting_FUN_00403a20
    PUSH ESI                            ; 00403a21
    PUSH EDI                            ; 00403a22
    PUSH EBP                            ; 00403a23
    MOV EDI,dword ptr [ESP + 0x14]      ; 00403a24
    LEA ESI,[EDI + 0xc]                 ; 00403a28
    MOV EDX,dword ptr [EDI + 0x8]       ; 00403a2b
    XOR EBX,EBX                         ; 00403a2e
    TEST EDX,EDX                        ; 00403a30
    JLE 0x00403a60                      ; 00403a32
        ;   XREF to: 00403a60 (CONDITIONAL_JUMP)  ; LAB_00403a60
    MOV EAX,dword ptr [EDI + 0x4]       ; 00403a34
        ;   Label: LAB_00403a34
    MOV ECX,dword ptr [0x00772a60]      ; 00403a37 | g_ProcessedVertexOffset
    ADD EAX,EBX                         ; 00403a3d
    PUSH ESI                            ; 00403a3f
    ADD EAX,ECX                         ; 00403a40
    PUSH EAX                            ; 00403a42
    ADD ESI,0xc                         ; 00403a43
    INC EBX                             ; 00403a46
    CALL engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850 ; 00403a47
        ;   XREF to: 00505850 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_calculateAndStoreVertexLight_FUN_00505850(int vertex_index, CVector3i * vertex_position)
    MOV EBP,dword ptr [EDI + 0x8]       ; 00403a4c
    ADD ESP,0x8                         ; 00403a4f
    CMP EBX,EBP                         ; 00403a52
    JL 0x00403a34                       ; 00403a54
        ;   XREF to: 00403a34 (CONDITIONAL_JUMP)  ; LAB_00403a34
    LEA EAX,[EAX]                       ; 00403a56
    LEA EDX,[EDX]                       ; 00403a5c
    MOV EBX,dword ptr [EDI + 0x8]       ; 00403a60
        ;   Label: LAB_00403a60
    LEA EAX,[EBX*0x4 + 0x0]             ; 00403a63
    SUB EAX,EBX                         ; 00403a6a
    LEA EBX,[EAX*0x4 + 0x0]             ; 00403a6c
    LEA EAX,[EDI + 0xc]                 ; 00403a73
    ADD EAX,EBX                         ; 00403a76
    POP EBP                             ; 00403a78
    POP EDI                             ; 00403a79
    POP ESI                             ; 00403a7a
    POP EBX                             ; 00403a7b
    RET                                 ; 00403a7c

