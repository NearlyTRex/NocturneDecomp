; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_battery.cpp_FUN_00417e50()
;
;
; XREF[1]:
;   core_battery.cpp_staticInit_FUN_00417e20 at 00417e2c
;
; Referenced Globals:
;   TerminatedCString s_core_battery_cpp_006159c5
;
; Called Functions:
;   core_battery.cpp_CBattery_ctor_FUN_00417e90
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x1f                           ; 00417e50
        ;   Label: core_battery.cpp_FUN_00417e50
    PUSH 0x6159c5                       ; 00417e52 | = "..\\core\\battery.cpp"
    PUSH 0x2e0                          ; 00417e57
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 00417e5c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00417e61
    TEST EAX,EAX                        ; 00417e64
    JNZ 0x00417e69                      ; 00417e66
        ;   XREF to: 00417e69 (CONDITIONAL_JUMP)  ; LAB_00417e69
    RET                                 ; 00417e68
    PUSH EAX                            ; 00417e69
        ;   Label: LAB_00417e69
    CALL core_battery.cpp_CBattery_ctor_FUN_00417e90 ; 00417e6a
        ;   XREF to: 00417e90 (UNCONDITIONAL_CALL)  ; CBattery * core_battery.cpp_CBattery_ctor_FUN_00417e90(CBattery * this_ptr)
    ADD ESP,0x4                         ; 00417e6f
    RET                                 ; 00417e72

