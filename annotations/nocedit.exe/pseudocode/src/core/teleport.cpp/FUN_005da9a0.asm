; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_teleport.cpp_FUN_005da9a0()
;
;
; XREF[1]:
;   core_teleport.cpp_staticInit_FUN_005da6e0 at 005da70f
;
; Referenced Globals:
;   TerminatedCString s_core_teleport_cpp_00654cc2
;
; Called Functions:
;   core_teleport.cpp_CTeleport_ctor_FUN_005da9e0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x8b                           ; 005da9a0
        ;   Label: core_teleport.cpp_FUN_005da9a0
    PUSH 0x654cc2                       ; 005da9a5 | = "..\\core\\teleport.cpp" | s_core_teleport_cpp_00654cc2 = ..\core\teleport.cpp
    PUSH 0x168                          ; 005da9aa
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005da9af | void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005da9b4
    TEST EAX,EAX                        ; 005da9b7
    JNZ 0x005da9bc                      ; 005da9b9 | LAB_005da9bc
        ;   XREF to: 005da9bc (CONDITIONAL_JUMP)
    RET                                 ; 005da9bb
    PUSH EAX                            ; 005da9bc
        ;   Label: LAB_005da9bc
    CALL core_teleport.cpp_CTeleport_ctor_FUN_005da9e0 ; 005da9bd | CTeleport * core_teleport.cpp_CTeleport_ctor_FUN_005da9e0(CTeleport * this_ptr)
        ;   XREF to: 005da9e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005da9c2
    RET                                 ; 005da9c5

