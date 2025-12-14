; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vehicle.cpp_FUN_005e7900()
;
;
; XREF[1]:
;   core_vehicle.cpp_staticInit_FUN_005e78d0 at 005e78dc
;
; Referenced Globals:
;   TerminatedCString s_core_vehicle_cpp_00656db7
;
; Called Functions:
;   core_vehicle.cpp_CVehicle_ctor_FUN_005e7940
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x40                           ; 005e7900
        ;   Label: core_vehicle.cpp_FUN_005e7900
    PUSH 0x656db7                       ; 005e7902 | = "..\\core\\vehicle.cpp"
    PUSH 0x1078                         ; 005e7907
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005e790c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005e7911
    TEST EAX,EAX                        ; 005e7914
    JNZ 0x005e7919                      ; 005e7916
        ;   XREF to: 005e7919 (CONDITIONAL_JUMP)  ; LAB_005e7919
    RET                                 ; 005e7918
    PUSH EAX                            ; 005e7919
        ;   Label: LAB_005e7919
    CALL core_vehicle.cpp_CVehicle_ctor_FUN_005e7940 ; 005e791a
        ;   XREF to: 005e7940 (UNCONDITIONAL_CALL)  ; CVehicle * core_vehicle.cpp_CVehicle_ctor_FUN_005e7940(CVehicle * this_ptr)
    ADD ESP,0x4                         ; 005e791f
    RET                                 ; 005e7922

