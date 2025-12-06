; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_ammobox.cpp_constructor_FUN_00411560()
;
;
; XREF[1]:
;   core_ammobox.cpp_staticInit_FUN_00411530 at 0041153c
;
; Referenced Globals:
;   TerminatedCString s_core_ammobox_cpp_00614bac
;
; Called Functions:
;   core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x25                           ; 00411560
        ;   Label: core_ammobox.cpp_constructor_FUN_00411560
    PUSH 0x614bac                       ; 00411562 | = "..\\core\\ammobox.cpp" | s_core_ammobox_cpp_00614bac = ..\core\ammobox.cpp
    PUSH 0x34c                          ; 00411567
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0041156c | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00411571
    TEST EAX,EAX                        ; 00411574
    JNZ 0x00411579                      ; 00411576 | LAB_00411579
        ;   XREF to: 00411579 (CONDITIONAL_JUMP)
    RET                                 ; 00411578
    PUSH EAX                            ; 00411579
        ;   Label: LAB_00411579
    CALL core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0 ; 0041157a | CAmmoBox * core_ammobox.cpp_CAmmoBox_ctor_FUN_004115a0(CAmmoBox * this_ptr)
        ;   XREF to: 004115a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041157f
    RET                                 ; 00411582

