; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CBoneGuy * core_boneguy.cpp_factoryFunc_FUN_0041b820(void)
;
;
; XREF[1]:
;   core_boneguy.cpp_staticInit_FUN_0041b6d0 at 0041b6dc
;
; Referenced Globals:
;   TerminatedCString s_core_boneguy_cpp_00615f2d
;
; Called Functions:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x74                           ; 0041b820
        ;   Label: core_boneguy.cpp_factoryFunc_FUN_0041b820
    PUSH 0x615f2d                       ; 0041b822 | = "..\\core\\boneguy.cpp"
    PUSH 0xc4e4                         ; 0041b827
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0041b82c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0041b831
    TEST EAX,EAX                        ; 0041b834
    JNZ 0x0041b839                      ; 0041b836
        ;   XREF to: 0041b839 (CONDITIONAL_JUMP)  ; LAB_0041b839
    RET                                 ; 0041b838
    PUSH EAX                            ; 0041b839
        ;   Label: LAB_0041b839
    CALL core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 ; 0041b83a
        ;   XREF to: 0041bbc0 (UNCONDITIONAL_CALL)  ; CBoneGuy * core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 0041b83f
    RET                                 ; 0041b842

