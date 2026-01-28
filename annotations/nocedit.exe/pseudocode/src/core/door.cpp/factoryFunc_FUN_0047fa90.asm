; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDoor * __cdecl core_door_cpp_factoryFunc_FUN_0047fa90(void)
;
;
; XREF[1]:
;   core_door.cpp_staticInit_FUN_0047fa60 at 0047fa6c
;
; Referenced Globals:
;   TerminatedCString s_core_door_cpp_00621085
;
; Called Functions:
;   core_door.cpp_CDoor_ctor_FUN_0047fad0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x33                           ; 0047fa90
        ;   Label: core_door.cpp_factoryFunc_FUN_0047fa90
    PUSH 0x621085                       ; 0047fa92 | = "..\\core\\door.cpp"
    PUSH 0x9e0                          ; 0047fa97
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0047fa9c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0047faa1
    TEST EAX,EAX                        ; 0047faa4
    JNZ 0x0047faa9                      ; 0047faa6
        ;   XREF to: 0047faa9 (CONDITIONAL_JUMP)  ; LAB_0047faa9
    RET                                 ; 0047faa8
    PUSH EAX                            ; 0047faa9
        ;   Label: LAB_0047faa9
    CALL core_door.cpp_CDoor_ctor_FUN_0047fad0 ; 0047faaa
        ;   XREF to: 0047fad0 (UNCONDITIONAL_CALL)  ; CDoor * core_door.cpp_CDoor_ctor_FUN_0047fad0(CDoor * this_ptr)
    ADD ESP,0x4                         ; 0047faaf
    RET                                 ; 0047fab2

