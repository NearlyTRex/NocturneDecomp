; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL __cdecl crt_tls_c_allocate_tls_index_FUN_0060a27c(void)
;
;
; Referenced Globals:
;   TLS_ALLOC_FUNC* g_TlsAllocFunc = 00212248
;   DWORD g_TLSIndex = 0xffffffff
;   BYTE g_WindowsMinorVersion = \x00
;   WORD g_WindowsPlatformVersion = 0x0
;
; Called Functions:
;   TlsAlloc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a27c
        ;   Label: crt_tls.c_allocate_tls_index_FUN_0060a27c
    MOV EBX,dword ptr [0x00684ee0]      ; 0060a27d | g_TLSIndex
    CMP EBX,-0x1                        ; 0060a283
    JNZ 0x0060a2c3                      ; 0060a286
        ;   XREF to: 0060a2c3 (CONDITIONAL_JUMP)  ; LAB_0060a2c3
    CALL dword ptr CS:[0x61164c]        ; 0060a288 | g_TlsAllocFunc
    MOV DX,word ptr [0x00685019]        ; 0060a28f | g_WindowsPlatformVersion
    MOV EBX,EAX                         ; 0060a296
    CMP DX,0x8000                       ; 0060a298
    JC 0x0060a2c3                       ; 0060a29d
        ;   XREF to: 0060a2c3 (CONDITIONAL_JUMP)  ; LAB_0060a2c3
    CMP byte ptr [0x00685017],0x4       ; 0060a29f | g_WindowsMinorVersion
    JNC 0x0060a2c3                      ; 0060a2a6
        ;   XREF to: 0060a2c3 (CONDITIONAL_JUMP)  ; LAB_0060a2c3
    CMP EBX,-0x1                        ; 0060a2a8
        ;   Label: LAB_0060a2a8
    JZ 0x0060a2c3                       ; 0060a2ab
        ;   XREF to: 0060a2c3 (CONDITIONAL_JUMP)  ; LAB_0060a2c3
    CMP EBX,0x2                         ; 0060a2ad
    JA 0x0060a2c3                       ; 0060a2b0
        ;   XREF to: 0060a2c3 (CONDITIONAL_JUMP)  ; LAB_0060a2c3
    MOV dword ptr [0x00684ee0],EBX      ; 0060a2b2 | g_TLSIndex
    CALL dword ptr CS:[0x61164c]        ; 0060a2b8 | g_TlsAllocFunc
    MOV EBX,EAX                         ; 0060a2bf
    JMP 0x0060a2a8                      ; 0060a2c1
        ;   XREF to: 0060a2a8 (UNCONDITIONAL_JUMP)  ; LAB_0060a2a8
    CMP EBX,-0x1                        ; 0060a2c3
        ;   Label: LAB_0060a2c3
    SETNZ AL                            ; 0060a2c6
    AND EAX,0xff                        ; 0060a2c9
    MOV dword ptr [0x00684ee0],EBX      ; 0060a2ce | g_TLSIndex
    POP EBX                             ; 0060a2d4
    RET                                 ; 0060a2d5

