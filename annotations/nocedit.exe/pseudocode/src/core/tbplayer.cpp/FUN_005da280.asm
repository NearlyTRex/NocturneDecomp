; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_tbplayer.cpp_FUN_005da280()
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
        ;   Label: core_tbplayer.cpp_FUN_005da280
    PUSH 0x654bd8                       ; 005da282 | = "..\\core\\tbplayer.cpp" | s_core_tbplayer_cpp_00654bd8 = ..\core\tbplayer.cpp
    PUSH 0x1f710                        ; 005da287
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005da28c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005da291
    TEST EAX,EAX                        ; 005da294
    JNZ 0x005da299                      ; 005da296 | LAB_005da299
        ;   XREF to: 005da299 (CONDITIONAL_JUMP)
    RET                                 ; 005da298
    PUSH EAX                            ; 005da299
        ;   Label: LAB_005da299
    CALL core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0 ; 005da29a | CDrummer * core_tbplayer.cpp_CDrummer_ctor_FUN_005da2c0(CDrummer * this_ptr)
        ;   XREF to: 005da2c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005da29f
    RET                                 ; 005da2a2

