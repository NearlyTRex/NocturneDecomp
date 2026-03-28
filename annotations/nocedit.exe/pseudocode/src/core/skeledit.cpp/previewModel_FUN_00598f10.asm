; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_previewModel_FUN_00598f10(char *model_name)
;
; Parameters:
; char *           Stack[0x4]:4   model_name
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064e0d2
;   TerminatedCString s_core_skeledit_cpp_0064e0e7
;   TerminatedCString s_viewModel_out_of_memory_0064e0fc
;   TerminatedCString s_core_skeledit_cpp_0064e117
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0
;   core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
;   shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0
;
; *****************************************************************************

section .text

    NOP                                 ; 00598f10
        ;   Label: core_skeledit.cpp_previewModel_FUN_00598f10
    NOP                                 ; 00598f11
    NOP                                 ; 00598f12
    NOP                                 ; 00598f13
    NOP                                 ; 00598f14
    NOP                                 ; 00598f15
    NOP                                 ; 00598f16
    NOP                                 ; 00598f17
    NOP                                 ; 00598f18
    NOP                                 ; 00598f19
    PUSH EBX                            ; 00598f1a
    PUSH ESI                            ; 00598f1b
    PUSH EDI                            ; 00598f1c
    PUSH EBP                            ; 00598f1d
    PUSH 0x1b79                         ; 00598f1e
    PUSH 0x64e0d2                       ; 00598f23 | = "..\\core\\skeledit.cpp"
    PUSH 0x22b4                         ; 00598f28
    CALL shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0 ; 00598f2d
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 00598f32
    TEST EAX,EAX                        ; 00598f35
    JNZ 0x00598fa1                      ; 00598f37
        ;   XREF to: 00598fa1 (CONDITIONAL_JUMP)  ; LAB_00598fa1
    MOV EBX,EAX                         ; 00598f39
        ;   Label: LAB_00598f39
    TEST EAX,EAX                        ; 00598f3b
    JNZ 0x00598f62                      ; 00598f3d
        ;   XREF to: 00598f62 (CONDITIONAL_JUMP)  ; LAB_00598f62
    MOV EDX,0x64e0e7                    ; 00598f3f | = "..\\core\\skeledit.cpp"
    MOV ECX,0x1b7a                      ; 00598f44
    PUSH 0x64e0fc                       ; 00598f49 | = "viewModel - out of memory!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00598f4e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00598f54 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00598f5a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00598f5f
    MOV ESI,dword ptr [ESP + 0x14]      ; 00598f62
        ;   Label: LAB_00598f62
    PUSH ESI                            ; 00598f66
    PUSH EBX                            ; 00598f67
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 00598f68
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 00598f6d
    PUSH EBX                            ; 00598f70
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 ; 00598f71
        ;   XREF to: 005a0450 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598f76
    PUSH EBX                            ; 00598f79
    MOV EDI,0x64e117                    ; 00598f7a | = "..\\core\\skeledit.cpp"
    MOV EBP,0x1b7e                      ; 00598f7f
    CALL core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 ; 00598f84
        ;   XREF to: 005968b0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598f89
    MOV dword ptr [0x0067d20c],EDI      ; 00598f8c | g_CurrentDebugFilename
    MOV dword ptr [0x02f0d944],EBP      ; 00598f92 | g_CurrentDebugLine
    TEST EBX,EBX                        ; 00598f98
    JNZ 0x00598fac                      ; 00598f9a
        ;   XREF to: 00598fac (CONDITIONAL_JUMP)  ; LAB_00598fac
    POP EBP                             ; 00598f9c
    POP EDI                             ; 00598f9d
    POP ESI                             ; 00598f9e
    POP EBX                             ; 00598f9f
    RET                                 ; 00598fa0
    PUSH EAX                            ; 00598fa1
        ;   Label: LAB_00598fa1
    CALL core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0 ; 00598fa2
        ;   XREF to: 0059ddc0 (UNCONDITIONAL_CALL)  ; CDeformableModelInstance * core_skeleton.cpp_CDeformableModelInstance_ctor_FUN_0059ddc0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598fa7
    JMP 0x00598f39                      ; 00598faa
        ;   XREF to: 00598f39 (UNCONDITIONAL_JUMP)  ; LAB_00598f39
    PUSH 0x2                            ; 00598fac
        ;   Label: LAB_00598fac
    MOV EAX,dword ptr [EBX + 0x50]      ; 00598fae
    PUSH EBX                            ; 00598fb1
    CALL dword ptr [EAX]                ; 00598fb2
    ADD ESP,0x8                         ; 00598fb4
    POP EBP                             ; 00598fb7
    POP EDI                             ; 00598fb8
    POP ESI                             ; 00598fb9
    POP EBX                             ; 00598fba
    RET                                 ; 00598fbb

