; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_005dd760(void)
;
;
; XREF[1]:
;   wincore_wddvmem.cpp_initTextureCache_FUN_005dd760 at 00403790
;
; Referenced Globals:
;   TerminatedCString s_engine_texture_cpp_00655455
;   CTextureCache* g_TextureCacheInstance
;
; Called Functions:
;   engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x278                          ; 005dd760
        ;   Label: engine_texture.cpp_initTextureCache_FUN_005dd760
    PUSH 0x655455                       ; 005dd765 | = "..\\engine\\texture.cpp"
    PUSH 0x1400c                        ; 005dd76a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005dd76f
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005dd774
    TEST EAX,EAX                        ; 005dd777
    JNZ 0x005dd781                      ; 005dd779
        ;   XREF to: 005dd781 (CONDITIONAL_JUMP)  ; LAB_005dd781
    MOV [0x03f87358],EAX                ; 005dd77b | g_TextureCacheInstance
    RET                                 ; 005dd780
    PUSH 0x400                          ; 005dd781
        ;   Label: LAB_005dd781
    PUSH EAX                            ; 005dd786
    CALL engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0 ; 005dd787
        ;   XREF to: 005dcab0 (UNCONDITIONAL_CALL)  ; CTextureCache * engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0(CTextureCache * this_ptr, int max_texture_count)
    ADD ESP,0x8                         ; 005dd78c
    MOV [0x03f87358],EAX                ; 005dd78f | g_TextureCacheInstance
    RET                                 ; 005dd794

