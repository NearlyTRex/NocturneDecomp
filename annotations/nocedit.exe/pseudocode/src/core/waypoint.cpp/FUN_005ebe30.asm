; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_waypoint.cpp_FUN_005ebe30()
;
;
; XREF[1]:
;   core_waypoint.cpp_staticInit_FUN_005ebd10 at 005ebd1c
;
; Referenced Globals:
;   TerminatedCString s_core_waypoint_cpp_00657527
;
; Called Functions:
;   core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x53                           ; 005ebe30
        ;   Label: core_waypoint.cpp_FUN_005ebe30
    PUSH 0x657527                       ; 005ebe32 | = "..\\core\\waypoint.cpp"
    PUSH 0x558                          ; 005ebe37
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005ebe3c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005ebe41
    TEST EAX,EAX                        ; 005ebe44
    JNZ 0x005ebe49                      ; 005ebe46
        ;   XREF to: 005ebe49 (CONDITIONAL_JUMP)  ; LAB_005ebe49
    RET                                 ; 005ebe48
    PUSH EAX                            ; 005ebe49
        ;   Label: LAB_005ebe49
    CALL core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70 ; 005ebe4a
        ;   XREF to: 005ebe70 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70(CWayPoint * this_ptr)
    ADD ESP,0x4                         ; 005ebe4f
    RET                                 ; 005ebe52

