; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_texture_cpp_freeTextureCache_FUN_005dd7a0(void)
;
;
; XREF[1]:
;   wincore_wddvmem.cpp_freeTextureCache_FUN_005dd7a0 at 004037a0
;
; Referenced Globals:
;   TerminatedCString s_engine_texture_cpp_0065546b
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;   CTextureCache* g_TextureCacheInstance
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_freeTextures_FUN_005dcb30
;   engine_texture.cpp_CTextureCache_reset_FUN_005dcb20
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dd7a0
        ;   Label: engine_texture.cpp_freeTextureCache_FUN_005dd7a0
    PUSH ESI                            ; 005dd7a1
    PUSH EDI                            ; 005dd7a2
    MOV EDX,dword ptr [0x03f87358]      ; 005dd7a3 | g_TextureCacheInstance
    PUSH EDX                            ; 005dd7a9
    MOV EBX,0x284                       ; 005dd7aa
    CALL engine_texture.cpp_CTextureCache_reset_FUN_005dcb20 ; 005dd7af
        ;   XREF to: 005dcb20 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_reset_FUN_005dcb20(CTextureCache * this_ptr)
    MOV ECX,0x65546b                    ; 005dd7b4 | = "..\\engine\\texture.cpp"
    MOV ESI,dword ptr [0x03f87358]      ; 005dd7b9 | g_TextureCacheInstance
    ADD ESP,0x4                         ; 005dd7bf
    MOV dword ptr [0x02f0d944],EBX      ; 005dd7c2 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 005dd7c8 | g_CurrentDebugFilename
    TEST ESI,ESI                        ; 005dd7ce
    JNZ 0x005dd7de                      ; 005dd7d0
        ;   XREF to: 005dd7de (CONDITIONAL_JUMP)  ; LAB_005dd7de
    XOR EDI,EDI                         ; 005dd7d2
    MOV dword ptr [0x03f87358],EDI      ; 005dd7d4 | g_TextureCacheInstance
    POP EDI                             ; 005dd7da
    POP ESI                             ; 005dd7db
    POP EBX                             ; 005dd7dc
    RET                                 ; 005dd7dd
    PUSH ESI                            ; 005dd7de
        ;   Label: LAB_005dd7de
    CALL engine_texture.cpp_CTextureCache_freeTextures_FUN_005dcb30 ; 005dd7df
        ;   XREF to: 005dcb30 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_freeTextures_FUN_005dcb30(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 005dd7e4
    PUSH ESI                            ; 005dd7e7
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005dd7e8
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005dd7ed
    XOR EDI,EDI                         ; 005dd7f0
    MOV dword ptr [0x03f87358],EDI      ; 005dd7f2 | g_TextureCacheInstance
    POP EDI                             ; 005dd7f8
    POP ESI                             ; 005dd7f9
    POP EBX                             ; 005dd7fa
    RET                                 ; 005dd7fb

