; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(CDemonCube *this_ptr)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160 at 0049a24c
;   core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280 at 0049a36b
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_0061a51a
;   TerminatedCString s_core_dcube_cpp_0061a52c
;   TerminatedCString s_CDemonCube_allocMemory_O_0061a53e
;   TerminatedCString s_core_dcube_cpp_0061a56c
;   TerminatedCString s_core_dcube_cpp_0061a57e
;   TerminatedCString s_CDemonCube_allocMemory_O_0061a590
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004567b0
        ;   Label: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0
    PUSH EBP                            ; 004567b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004567b2
    PUSH 0x5f2                          ; 004567b6
    PUSH 0x61a51a                       ; 004567bb | = "..\\core\\dcube.cpp"
    PUSH 0x1                            ; 004567c0
    PUSH 0x40                           ; 004567c2
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 004567c4
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 004567c9
    MOV dword ptr [EBX],EAX             ; 004567cc
    TEST EAX,EAX                        ; 004567ce
    JNZ 0x004567f7                      ; 004567d0
        ;   XREF to: 004567f7 (CONDITIONAL_JUMP)  ; LAB_004567f7
    PUSH ESI                            ; 004567d2
    MOV ECX,0x61a52c                    ; 004567d3 | = "..\\core\\dcube.cpp"
    MOV ESI,0x5f3                       ; 004567d8
    PUSH 0x61a53e                       ; 004567dd | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004567e2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004567e8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004567ee
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004567f3
    POP ESI                             ; 004567f6
    PUSH 0x5f4                          ; 004567f7
        ;   Label: LAB_004567f7
    PUSH 0x61a56c                       ; 004567fc | = "..\\core\\dcube.cpp"
    PUSH 0x1                            ; 00456801
    PUSH 0x40                           ; 00456803
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 00456805
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
    ADD ESP,0x10                        ; 0045680a
    MOV dword ptr [EBX + 0x4],EAX       ; 0045680d
    TEST EAX,EAX                        ; 00456810
    JZ 0x00456817                       ; 00456812
        ;   XREF to: 00456817 (CONDITIONAL_JUMP)  ; LAB_00456817
    POP EBP                             ; 00456814
    POP EBX                             ; 00456815
    RET                                 ; 00456816
    MOV EBP,0x61a57e                    ; 00456817 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00456817
    MOV EAX,0x5f5                       ; 0045681c
    PUSH 0x61a590                       ; 00456821 | = "CDemonCube::allocMemory - Out of voxe..."
    MOV dword ptr [0x02f0ca48],EBP      ; 00456826 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0045682c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00456831
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00456836
    POP EBP                             ; 00456839
    POP EBX                             ; 0045683a
    RET                                 ; 0045683b

