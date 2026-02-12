; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_free_FUN_00515970(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0 at 00515ac9
;   shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 at 00515956
;   shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080 at 0051b090
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_0063734d
;   TerminatedCString s_shape_meshlod_cpp_00637362
;   TerminatedCString s_shape_meshlod_cpp_00637377
;   TerminatedCString s_shape_meshlod_cpp_0063738c
;   TerminatedCString s_shape_meshlod_cpp_006373a1
;   TerminatedCString s_shape_meshlod_cpp_006373b6
;   TerminatedCString s_shape_meshlod_cpp_006373cb
;   TerminatedCString s_shape_meshlod_cpp_006373e0
;   TerminatedCString s_shape_meshlod_cpp_006373f5
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;   shape_memdbg.cpp_free_FUN_005fe659
;   shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870
;   shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
;   shape_meshlod.cpp_CLodMesh_init_FUN_00515880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515970
        ;   Label: shape_meshlod.cpp_CLodMesh_free_FUN_00515970
    PUSH ESI                            ; 00515971
    PUSH EDI                            ; 00515972
    PUSH EBP                            ; 00515973
    MOV EBX,dword ptr [ESP + 0x14]      ; 00515974
    PUSH EBX                            ; 00515978
    CALL shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870 ; 00515979
        ;   XREF to: 0051b870 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_closePrecomputeFile_FUN_0051b870(CLodMesh * this_ptr)
    MOV EDX,dword ptr [EBX + 0x4]       ; 0051597e
    ADD ESP,0x4                         ; 00515981
    TEST EDX,EDX                        ; 00515984
    JNZ 0x00515a7b                      ; 00515986
        ;   XREF to: 00515a7b (CONDITIONAL_JUMP)  ; LAB_00515a7b
    MOV ESI,dword ptr [EBX + 0xc]       ; 0051598c
        ;   Label: LAB_0051598c
    TEST ESI,ESI                        ; 0051598f
    JZ 0x005159a6                       ; 00515991
        ;   XREF to: 005159a6 (CONDITIONAL_JUMP)  ; LAB_005159a6
    PUSH 0x218                          ; 00515993
    PUSH 0x637362                       ; 00515998 | = "..\\shape\\meshlod.cpp"
    PUSH ESI                            ; 0051599d
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 0051599e
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005159a3
    MOV EBP,dword ptr [EBX + 0x48]      ; 005159a6
        ;   Label: LAB_005159a6
    TEST EBP,EBP                        ; 005159a9
    JZ 0x005159c0                       ; 005159ab
        ;   XREF to: 005159c0 (CONDITIONAL_JUMP)  ; LAB_005159c0
    PUSH 0x219                          ; 005159ad
    PUSH 0x637377                       ; 005159b2 | = "..\\shape\\meshlod.cpp"
    PUSH EBP                            ; 005159b7
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005159b8
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005159bd
    MOV EDX,dword ptr [EBX + 0x58]      ; 005159c0
        ;   Label: LAB_005159c0
    TEST EDX,EDX                        ; 005159c3
    JZ 0x005159da                       ; 005159c5
        ;   XREF to: 005159da (CONDITIONAL_JUMP)  ; LAB_005159da
    PUSH 0x21a                          ; 005159c7
    PUSH 0x63738c                       ; 005159cc | = "..\\shape\\meshlod.cpp"
    PUSH EDX                            ; 005159d1
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005159d2
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005159d7
    MOV ESI,dword ptr [EBX + 0x54]      ; 005159da
        ;   Label: LAB_005159da
    TEST ESI,ESI                        ; 005159dd
    JZ 0x005159f4                       ; 005159df
        ;   XREF to: 005159f4 (CONDITIONAL_JUMP)  ; LAB_005159f4
    PUSH 0x21b                          ; 005159e1
    PUSH 0x6373a1                       ; 005159e6 | = "..\\shape\\meshlod.cpp"
    PUSH ESI                            ; 005159eb
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 005159ec
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 005159f1
    MOV EBP,dword ptr [EBX + 0x50]      ; 005159f4
        ;   Label: LAB_005159f4
    TEST EBP,EBP                        ; 005159f7
    JZ 0x00515a0e                       ; 005159f9
        ;   XREF to: 00515a0e (CONDITIONAL_JUMP)  ; LAB_00515a0e
    PUSH 0x21c                          ; 005159fb
    PUSH 0x6373b6                       ; 00515a00 | = "..\\shape\\meshlod.cpp"
    PUSH EBP                            ; 00515a05
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00515a06
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00515a0b
    MOV EDX,dword ptr [EBX + 0x14]      ; 00515a0e
        ;   Label: LAB_00515a0e
    TEST EDX,EDX                        ; 00515a11
    JZ 0x00515a28                       ; 00515a13
        ;   XREF to: 00515a28 (CONDITIONAL_JUMP)  ; LAB_00515a28
    PUSH 0x21d                          ; 00515a15
    PUSH 0x6373cb                       ; 00515a1a | = "..\\shape\\meshlod.cpp"
    PUSH EDX                            ; 00515a1f
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00515a20
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00515a25
    MOV EDI,0x21f                       ; 00515a28
        ;   Label: LAB_00515a28
    MOV ESI,0x6373e0                    ; 00515a2d | = "..\\shape\\meshlod.cpp"
    MOV EAX,dword ptr [EBX + 0x60]      ; 00515a32
    MOV dword ptr [0x02f0d944],EDI      ; 00515a35 | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ESI      ; 00515a3b | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 00515a41
    JZ 0x00515a51                       ; 00515a43
        ;   XREF to: 00515a51 (CONDITIONAL_JUMP)  ; LAB_00515a51
    SUB EAX,0x4                         ; 00515a45
    PUSH EAX                            ; 00515a48
    CALL shape_memdbg.cpp_free_FUN_005fe659 ; 00515a49
        ;   XREF to: 005fe659 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_005fe659(void * ptr)
    ADD ESP,0x4                         ; 00515a4e
    MOV EAX,0x220                       ; 00515a51
        ;   Label: LAB_00515a51
    MOV EBP,0x6373f5                    ; 00515a56 | = "..\\shape\\meshlod.cpp"
    MOV [0x02f0d944],EAX                ; 00515a5b | g_CurrentDebugLine
    MOV EAX,dword ptr [EBX + 0x34]      ; 00515a60
    MOV dword ptr [0x0067d20c],EBP      ; 00515a63 | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 00515a69
    JNZ 0x00515a93                      ; 00515a6b
        ;   XREF to: 00515a93 (CONDITIONAL_JUMP)  ; LAB_00515a93
    PUSH EBX                            ; 00515a6d
    CALL shape_meshlod.cpp_CLodMesh_init_FUN_00515880 ; 00515a6e
        ;   XREF to: 00515880 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_init_FUN_00515880(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00515a73
    POP EBP                             ; 00515a76
    POP EDI                             ; 00515a77
    POP ESI                             ; 00515a78
    POP EBX                             ; 00515a79
    RET                                 ; 00515a7a
    PUSH 0x217                          ; 00515a7b
        ;   Label: LAB_00515a7b
    PUSH 0x63734d                       ; 00515a80 | = "..\\shape\\meshlod.cpp"
    PUSH EDX                            ; 00515a85
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00515a86
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
    ADD ESP,0xc                         ; 00515a8b
    JMP 0x0051598c                      ; 00515a8e
        ;   XREF to: 0051598c (UNCONDITIONAL_JUMP)  ; LAB_0051598c
    PUSH 0x0                            ; 00515a93
        ;   Label: LAB_00515a93
    PUSH EAX                            ; 00515a95
    CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950 ; 00515a96
        ;   XREF to: 00515950 (UNCONDITIONAL_CALL)  ; CLodMesh * shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950(CLodMesh * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00515a9b
    PUSH EAX                            ; 00515a9e
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 00515a9f
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 00515aa4
    PUSH EBX                            ; 00515aa7
    CALL shape_meshlod.cpp_CLodMesh_init_FUN_00515880 ; 00515aa8
        ;   XREF to: 00515880 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_init_FUN_00515880(CLodMesh * this_ptr)
    ADD ESP,0x4                         ; 00515aad
    POP EBP                             ; 00515ab0
    POP EDI                             ; 00515ab1
    POP ESI                             ; 00515ab2
    POP EBX                             ; 00515ab3
    RET                                 ; 00515ab4

