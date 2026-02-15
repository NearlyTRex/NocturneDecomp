; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_setVertexTextureU_FUN_00405270(SVertexBatch *vertex_batch)
;
; Parameters:
; SVertexBatch *   Stack[0x4]:4   vertex_batch
;
; Referenced Globals:
;   undefined4 g_RenderVertexBuffer[0].u
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405270
        ;   Label: engine_3d.c_setVertexTextureU_FUN_00405270
    MOV ECX,dword ptr [ESP + 0x8]       ; 00405271
    LEA EDX,[ECX + 0xc]                 ; 00405275
    MOV EBX,dword ptr [ECX + 0x8]       ; 00405278
    XOR EAX,EAX                         ; 0040527b
    TEST EBX,EBX                        ; 0040527d
    JLE 0x004052a1                      ; 0040527f
        ;   XREF to: 004052a1 (CONDITIONAL_JUMP)  ; LAB_004052a1
    PUSH ESI                            ; 00405281
    MOV EBX,dword ptr [ECX + 0x4]       ; 00405282
        ;   Label: LAB_00405282
    ADD EBX,EAX                         ; 00405285
    IMUL EBX,EBX,0x30                   ; 00405287
    MOV ESI,dword ptr [EDX]             ; 0040528a
    SHL ESI,0x10                        ; 0040528c
    MOV dword ptr [EBX + 0x68802c],ESI  ; 0040528f | g_RenderVertexBuffer[0].u
    INC EAX                             ; 00405295
    MOV ESI,dword ptr [ECX + 0x8]       ; 00405296
    ADD EDX,0x4                         ; 00405299
    CMP EAX,ESI                         ; 0040529c
    JL 0x00405282                       ; 0040529e
        ;   XREF to: 00405282 (CONDITIONAL_JUMP)  ; LAB_00405282
    POP ESI                             ; 004052a0
    MOV EDX,dword ptr [ECX + 0x8]       ; 004052a1
        ;   Label: LAB_004052a1
    LEA EAX,[ECX + 0xc]                 ; 004052a4
    SHL EDX,0x2                         ; 004052a7
    ADD EAX,EDX                         ; 004052aa
    POP EBX                             ; 004052ac
    RET                                 ; 004052ad

