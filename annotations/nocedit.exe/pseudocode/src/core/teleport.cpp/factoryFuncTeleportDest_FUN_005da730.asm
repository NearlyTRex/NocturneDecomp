; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTeleportDest * __cdecl core_teleport_cpp_factoryFuncTeleportDest_FUN_005da730(void)
;
;
; XREF[1]:
;   core_teleport.cpp_staticInit_FUN_005da6e0 at 005da6ec
;
; Referenced Globals:
;   TerminatedCString s_core_teleport_cpp_00654c2b
;
; Called Functions:
;   core_teleport.cpp_CTeleportDest_ctor_FUN_005da770
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH 0x2a                           ; 005da730
        ;   Label: core_teleport.cpp_factoryFuncTeleportDest_FUN_005da730
    PUSH 0x654c2b                       ; 005da732 | = "..\\core\\teleport.cpp"
    PUSH 0x158                          ; 005da737
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 005da73c
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005da741
    TEST EAX,EAX                        ; 005da744
    JNZ 0x005da749                      ; 005da746
        ;   XREF to: 005da749 (CONDITIONAL_JUMP)  ; LAB_005da749
    RET                                 ; 005da748
    PUSH EAX                            ; 005da749
        ;   Label: LAB_005da749
    CALL core_teleport.cpp_CTeleportDest_ctor_FUN_005da770 ; 005da74a
        ;   XREF to: 005da770 (UNCONDITIONAL_CALL)  ; CTeleportDest * core_teleport.cpp_CTeleportDest_ctor_FUN_005da770(CTeleportDest * this_ptr)
    ADD ESP,0x4                         ; 005da74f
    RET                                 ; 005da752

