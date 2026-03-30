; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CArmour * __cdecl core_armour_cpp_factoryFunc_FUN_00412160(void)
;
;
; XREF[1]:
;   core_armour.cpp_staticInit_FUN_00412130 at 0041213c
;
; Referenced Globals:
;   TerminatedCString s_core_armour_cpp_00614da8
;
; Called Functions:
;   core_armour.cpp_CArmour_ctor_FUN_004121a0
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2f                           ; 00412160
        ;   Label: core_armour.cpp_factoryFunc_FUN_00412160
    PUSH 0x614da8                       ; 00412162 | = "..\\core\\armour.cpp"
    PUSH 0xbf20                         ; 00412167
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 0041216c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00412171
    TEST EAX,EAX                        ; 00412174
    JNZ 0x00412179                      ; 00412176
        ;   XREF to: 00412179 (CONDITIONAL_JUMP)  ; LAB_00412179
    RET                                 ; 00412178
    PUSH EAX                            ; 00412179
        ;   Label: LAB_00412179
    CALL core_armour.cpp_CArmour_ctor_FUN_004121a0 ; 0041217a
        ;   XREF to: 004121a0 (UNCONDITIONAL_CALL)  ; CArmour * core_armour.cpp_CArmour_ctor_FUN_004121a0(CArmour * this_ptr)
    ADD ESP,0x4                         ; 0041217f
    RET                                 ; 00412182

