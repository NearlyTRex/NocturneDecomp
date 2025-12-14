; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_tbplayer.cpp_FUN_005da020()
;
;
; XREF[1]:
;   core_tbplayer.cpp_staticInit_FUN_005d9fd0 at 005d9fdc
;
; Referenced Globals:
;   TerminatedCString s_core_tbplayer_cpp_00654b9a
;
; Called Functions:
;   core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x20                           ; 005da020
        ;   Label: core_tbplayer.cpp_FUN_005da020
    PUSH 0x654b9a                       ; 005da022 | = "..\\core\\tbplayer.cpp"
    PUSH 0x1f710                        ; 005da027
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005da02c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005da031
    TEST EAX,EAX                        ; 005da034
    JNZ 0x005da039                      ; 005da036
        ;   XREF to: 005da039 (CONDITIONAL_JUMP)  ; LAB_005da039
    RET                                 ; 005da038
    PUSH EAX                            ; 005da039
        ;   Label: LAB_005da039
    CALL core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060 ; 005da03a
        ;   XREF to: 005da060 (UNCONDITIONAL_CALL)  ; CBassPlayer * core_tbplayer.cpp_CBassPlayer_ctor_FUN_005da060(CBassPlayer * this_ptr)
    ADD ESP,0x4                         ; 005da03f
    RET                                 ; 005da042

