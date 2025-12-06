; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_batman.cpp_FUN_00416410()
;
;
; XREF[1]:
;   core_batman.cpp_staticInit_FUN_004163e0 at 004163ec
;
; Referenced Globals:
;   TerminatedCString s_core_batman_cpp_006156cd
;
; Called Functions:
;   core_batman.cpp_CBatman_ctor_FUN_00416450
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x58                           ; 00416410
        ;   Label: core_batman.cpp_FUN_00416410
    PUSH 0x6156cd                       ; 00416412 | = "..\\core\\batman.cpp" | s_core_batman_cpp_006156cd = ..\core\batman.cpp
    PUSH 0xbf78                         ; 00416417
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0041641c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00416421
    TEST EAX,EAX                        ; 00416424
    JNZ 0x00416429                      ; 00416426 | LAB_00416429
        ;   XREF to: 00416429 (CONDITIONAL_JUMP)
    RET                                 ; 00416428
    PUSH EAX                            ; 00416429
        ;   Label: LAB_00416429
    CALL core_batman.cpp_CBatman_ctor_FUN_00416450 ; 0041642a | CBatman * core_batman.cpp_CBatman_ctor_FUN_00416450(CBatman * this_ptr)
        ;   XREF to: 00416450 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041642f
    RET                                 ; 00416432

