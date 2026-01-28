; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00599910 (CSkeleton *this_ptr,int bone_count,int frame_count)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_count
; int              Stack[0xc]:4   frame_count
;
; XREF[2]:
;   core_skeledit.cpp_FUN_00592690 at 00592b10
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00599bb0 at 00599c9e
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_0064e1a8
;   TerminatedCString s_Too_bony_0064e1bd
;   TerminatedCString s_core_skeleton_cpp_0064e1c7
;   TerminatedCString s_core_skeleton_cpp_0064e1dc
;   TerminatedCString s_core_skeleton_cpp_0064e1f1
;   TerminatedCString s_core_skeleton_cpp_0064e206
;   TerminatedCString s_Out_of_hunk_in_CSkeleton_0064e21b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CSkeleton_free_FUN_00599a50
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599910
        ;   Label: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00599910
    PUSH ESI                            ; 00599911
    PUSH EDI                            ; 00599912
    MOV EBX,dword ptr [ESP + 0x10]      ; 00599913
    MOV ESI,dword ptr [ESP + 0x14]      ; 00599917
    PUSH EBX                            ; 0059991b
    CALL core_skeleton.cpp_CSkeleton_free_FUN_00599a50 ; 0059991c
        ;   XREF to: 00599a50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CSkeleton_free_FUN_00599a50(CSkeleton * this_ptr)
    ADD ESP,0x4                         ; 00599921
    CMP ESI,0x64                        ; 00599924
    JG 0x005999f1                       ; 00599927
        ;   XREF to: 005999f1 (CONDITIONAL_JUMP)  ; LAB_005999f1
    MOV EAX,dword ptr [ESP + 0x18]      ; 0059992d
        ;   Label: LAB_0059992d
    MOV dword ptr [EBX + 0x28558],ESI   ; 00599931
    MOV dword ptr [EBX + 0x2936c],EAX   ; 00599937
    MOV EAX,dword ptr [EBX + 0x28558]   ; 0059993d
    IMUL EAX,dword ptr [EBX + 0x2936c]  ; 00599943
    PUSH 0xcf                           ; 0059994a
    PUSH 0x64e1c7                       ; 0059994f | = "..\\core\\skeleton.cpp"
    SHL EAX,0x4                         ; 00599954
    PUSH EAX                            ; 00599957
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00599958
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    MOV ESI,dword ptr [EBX + 0x2936c]   ; 0059995d
    MOV dword ptr [EBX + 0x29370],EAX   ; 00599963
    LEA EAX,[ESI*0x4 + 0x0]             ; 00599969
    ADD ESP,0xc                         ; 00599970
    SUB EAX,ESI                         ; 00599973
    PUSH 0xd0                           ; 00599975
    SHL EAX,0x2                         ; 0059997a
    PUSH 0x64e1dc                       ; 0059997d | = "..\\core\\skeleton.cpp"
    ADD EAX,0x4                         ; 00599982
    PUSH EAX                            ; 00599985
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 00599986
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0059998b
    TEST EAX,EAX                        ; 0059998e
    JZ 0x00599998                       ; 00599990
        ;   XREF to: 00599998 (CONDITIONAL_JUMP)  ; LAB_00599998
    ADD EAX,0x4                         ; 00599992
    MOV dword ptr [EAX + -0x4],ESI      ; 00599995
    MOV ESI,dword ptr [EBX + 0x2936c]   ; 00599998
        ;   Label: LAB_00599998
    MOV dword ptr [EBX + 0x29374],EAX   ; 0059999e
    LEA EAX,[ESI*0x4 + 0x0]             ; 005999a4
    SUB EAX,ESI                         ; 005999ab
    PUSH 0xd1                           ; 005999ad
    SHL EAX,0x2                         ; 005999b2
    PUSH 0x64e1f1                       ; 005999b5 | = "..\\core\\skeleton.cpp"
    ADD EAX,0x4                         ; 005999ba
    PUSH EAX                            ; 005999bd
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0 ; 005999be
        ;   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1f0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005999c3
    TEST EAX,EAX                        ; 005999c6
    JZ 0x005999d0                       ; 005999c8
        ;   XREF to: 005999d0 (CONDITIONAL_JUMP)  ; LAB_005999d0
    ADD EAX,0x4                         ; 005999ca
    MOV dword ptr [EAX + -0x4],ESI      ; 005999cd
    MOV EDI,dword ptr [EBX + 0x29370]   ; 005999d0
        ;   Label: LAB_005999d0
    MOV dword ptr [EBX + 0x29378],EAX   ; 005999d6
    TEST EDI,EDI                        ; 005999dc
    JZ 0x00599a19                       ; 005999de
        ;   XREF to: 00599a19 (CONDITIONAL_JUMP)  ; LAB_00599a19
    CMP dword ptr [EBX + 0x29374],0x0   ; 005999e0
    JZ 0x00599a19                       ; 005999e7
        ;   XREF to: 00599a19 (CONDITIONAL_JUMP)  ; LAB_00599a19
    TEST EAX,EAX                        ; 005999e9
    JZ 0x00599a19                       ; 005999eb
        ;   XREF to: 00599a19 (CONDITIONAL_JUMP)  ; LAB_00599a19
    POP EDI                             ; 005999ed
    POP ESI                             ; 005999ee
    POP EBX                             ; 005999ef
    RET                                 ; 005999f0
    MOV EDX,0x64e1a8                    ; 005999f1 | = "..\\core\\skeleton.cpp"
        ;   Label: LAB_005999f1
    MOV ECX,0xc6                        ; 005999f6
    PUSH 0x64e1bd                       ; 005999fb | = "Too bony!"
    MOV dword ptr [0x02f0ca48],EDX      ; 00599a00 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00599a06 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00599a0c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00599a11
    JMP 0x0059992d                      ; 00599a14
        ;   XREF to: 0059992d (UNCONDITIONAL_JUMP)  ; LAB_0059992d
    MOV ESI,dword ptr [EBX + 0x2936c]   ; 00599a19
        ;   Label: LAB_00599a19
    PUSH ESI                            ; 00599a1f
    MOV EDI,dword ptr [EBX + 0x28558]   ; 00599a20
    PUSH EDI                            ; 00599a26
    MOV EDX,0x64e206                    ; 00599a27 | = "..\\core\\skeleton.cpp"
    MOV ECX,0xda                        ; 00599a2c
    PUSH 0x64e21b                       ; 00599a31 | = "Out of hunk in CSkeleton::allocMemory..."
    MOV dword ptr [0x02f0ca48],EDX      ; 00599a36 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00599a3c | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00599a42
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 00599a47
    POP EDI                             ; 00599a4a
    POP ESI                             ; 00599a4b
    POP EBX                             ; 00599a4c
    RET                                 ; 00599a4d

