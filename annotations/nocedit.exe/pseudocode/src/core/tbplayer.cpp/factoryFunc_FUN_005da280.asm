; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDrummer * __cdecl core_tbplayer_cpp_factoryFunc_FUN_005da280(void)
;
;
; XREF[1]:
;   core_tbplayer.cpp_staticInit_FUN_005d9fd0 at 005d9fff
;
; Referenced Globals:
;   TerminatedCString s_core_tbplayer_cpp_00654bd8
;
; Called Functions:
;   core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x7a                           ; 005da280
        ;   Label: core_tbplayer.cpp_factoryFunc_FUN_005da280
    PUSH 0x654bd8                       ; 005da282 | = "..\\core\\tbplayer.cpp"
    PUSH 0x1f710                        ; 005da287
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005da28c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005da291
    TEST EAX,EAX                        ; 005da294
    JNZ 0x005da299                      ; 005da296
        ;   XREF to: 005da299 (CONDITIONAL_JUMP)  ; LAB_005da299
    RET                                 ; 005da298
    PUSH EAX                            ; 005da299
        ;   Label: LAB_005da299
    CALL core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0 ; 005da29a
        ;   XREF to: 005da2c0 (UNCONDITIONAL_CALL)  ; CDrummer * core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0(CDrummer * this_ptr)
    ADD ESP,0x4                         ; 005da29f
    RET                                 ; 005da2a2

