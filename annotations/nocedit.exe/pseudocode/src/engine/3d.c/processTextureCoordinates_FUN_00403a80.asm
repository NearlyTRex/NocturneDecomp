; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_processTextureCoordinates_FUN_00403a80(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 g_RenderVertexBuffer[0].u
;   undefined4 g_RenderVertexBuffer[0].v
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403a80
        ;   Label: engine_3d.c_processTextureCoordinates_FUN_00403a80
    MOV ECX,dword ptr [ESP + 0x8]       ; 00403a81
    LEA EDX,[ECX + 0xc]                 ; 00403a85
    MOV EBX,dword ptr [ECX + 0x8]       ; 00403a88
    XOR EAX,EAX                         ; 00403a8b
    TEST EBX,EBX                        ; 00403a8d
    JLE 0x00403abf                      ; 00403a8f
        ;   XREF to: 00403abf (CONDITIONAL_JUMP)  ; LAB_00403abf
    PUSH ESI                            ; 00403a91
    MOV ESI,dword ptr [ECX + 0x4]       ; 00403a92
        ;   Label: LAB_00403a92
    ADD ESI,EAX                         ; 00403a95
    IMUL ESI,ESI,0x30                   ; 00403a97
    MOV EBX,dword ptr [EDX]             ; 00403a9a
    MOV dword ptr [ESI + 0x68802c],EBX  ; 00403a9c | g_RenderVertexBuffer[0].u
    MOV EBX,dword ptr [ECX + 0x4]       ; 00403aa2
    ADD EBX,EAX                         ; 00403aa5
    IMUL ESI,EBX,0x30                   ; 00403aa7
    MOV EBX,dword ptr [EDX + 0x4]       ; 00403aaa
    MOV dword ptr [ESI + 0x688030],EBX  ; 00403aad | g_RenderVertexBuffer[0].v
    INC EAX                             ; 00403ab3
    MOV ESI,dword ptr [ECX + 0x8]       ; 00403ab4
    ADD EDX,0x8                         ; 00403ab7
    CMP EAX,ESI                         ; 00403aba
    JL 0x00403a92                       ; 00403abc
        ;   XREF to: 00403a92 (CONDITIONAL_JUMP)  ; LAB_00403a92
    POP ESI                             ; 00403abe
    MOV EAX,dword ptr [ECX + 0x8]       ; 00403abf
        ;   Label: LAB_00403abf
    ADD ECX,0xc                         ; 00403ac2
    SHL EAX,0x3                         ; 00403ac5
    ADD EAX,ECX                         ; 00403ac8
    POP EBX                             ; 00403aca
    RET                                 ; 00403acb

