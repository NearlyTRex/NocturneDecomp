; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_batcreat.cpp_constructor_FUN_004150b0()
;
;
; XREF[1]:
;   core_batcreat.cpp_staticInit_FUN_00415080 at 0041508c
;
; Referenced Globals:
;   TerminatedCString s_core_batcreat_cpp_00615456
;
; Called Functions:
;   core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x4d                           ; 004150b0
        ;   Label: core_batcreat.cpp_constructor_FUN_004150b0
    PUSH 0x615456                       ; 004150b2 | = "..\\core\\batcreat.cpp" | s_core_batcreat_cpp_00615456 = ..\core\batcreat.cpp
    PUSH 0xbf04                         ; 004150b7
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 004150bc | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004150c1
    TEST EAX,EAX                        ; 004150c4
    JNZ 0x004150c9                      ; 004150c6 | LAB_004150c9
        ;   XREF to: 004150c9 (CONDITIONAL_JUMP)
    RET                                 ; 004150c8
    PUSH EAX                            ; 004150c9
        ;   Label: LAB_004150c9
    CALL core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0 ; 004150ca | CBatCreature * core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0(CBatCreature * this_ptr)
        ;   XREF to: 004150f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004150cf
    RET                                 ; 004150d2

