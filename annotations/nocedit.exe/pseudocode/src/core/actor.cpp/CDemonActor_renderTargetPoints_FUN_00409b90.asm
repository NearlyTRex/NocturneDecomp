; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_actor_cpp_CDemonActor_renderTargetPoints_FUN_00409b90(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x9c]:1  local_9c
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_006138e0
;   float FLOAT_006597b0 = 256
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 UCHAR_ARRAY_02d00c20
;   int g_ActiveRenderColor
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   crt_memory.c___arrinit_FUN_005fe667
;   engine_2d.c_plotPixel_FUN_00401140
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409b90
        ;   Label: core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90
    PUSH ESI                            ; 00409b91
    PUSH EDI                            ; 00409b92
    PUSH EBP                            ; 00409b93
    SUB ESP,0x8c                        ; 00409b94
    MOV EBX,dword ptr [ESP + 0xa0]      ; 00409b9a
    PUSH 0x4ff                          ; 00409ba1
    PUSH 0x6138e0                       ; 00409ba6 | = "..\\core\\actor.cpp"
    PUSH EBX                            ; 00409bab
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00409bac
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 00409bb1
    PUSH 0x6598c0                       ; 00409bb4 | g_CVectorTypeInfo
    PUSH 0xa                            ; 00409bb9
    LEA EAX,[ESP + 0x8]                 ; 00409bbb
    PUSH EAX                            ; 00409bbf
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 00409bc0
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00409bc5
    MOV EAX,ESP                         ; 00409bc8
    PUSH EAX                            ; 00409bca
    MOV EDX,dword ptr [EBX + 0x154]     ; 00409bcb
    PUSH EBX                            ; 00409bd1
    CALL dword ptr [EDX + 0x4c]         ; 00409bd2
    ADD ESP,0x8                         ; 00409bd5
    XOR EBP,EBP                         ; 00409bd8
    MOV dword ptr [ESP + 0x84],EAX      ; 00409bda
    TEST EAX,EAX                        ; 00409be1
    JLE 0x00409c5a                      ; 00409be3
        ;   XREF to: 00409c5a (CONDITIONAL_JUMP)  ; LAB_00409c5a
    MOV EDI,ESP                         ; 00409be5
    XOR EAX,EAX                         ; 00409be7
        ;   Label: LAB_00409be7
    MOV AL,[0x02d00c20]                 ; 00409be9 | UCHAR_ARRAY_02d00c20
    LEA EBX,[ESP + 0x78]                ; 00409bee
    MOV dword ptr [ESP + 0x88],EAX      ; 00409bf2
    MOV EAX,EDI                         ; 00409bf9
    MOV EDX,dword ptr [0x006703e8]      ; 00409bfb | g_CDemonRendererInstance | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 00409c01
    FMUL float ptr [0x006597b0]         ; 00409c03 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 00409c09
    FLD float ptr [EAX + 0x4]           ; 00409c0b
    FMUL float ptr [0x006597b0]         ; 00409c0e | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 00409c14
    FLD float ptr [EAX + 0x8]           ; 00409c17
    FMUL float ptr [0x006597b0]         ; 00409c1a | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 00409c20
    LEA EAX,[ESP + 0x78]                ; 00409c23
    PUSH EAX                            ; 00409c27
    MOV EAX,dword ptr [EDX]             ; 00409c28 | g_CDemonRendererInstance
    ADD EAX,0xea5d0                     ; 00409c2a
    PUSH EAX                            ; 00409c2f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00409c30
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x006703e8]      ; 00409c35 | g_CDemonRendererPtr1
    MOV ESI,dword ptr [ESI]             ; 00409c3b | g_CDemonRendererInstance
    MOV AH,byte ptr [ESI + 0xea5e3]     ; 00409c3d
    ADD ESP,0x8                         ; 00409c43
    TEST AH,0x80                        ; 00409c46
    JZ 0x00409c65                       ; 00409c49
        ;   XREF to: 00409c65 (CONDITIONAL_JUMP)  ; LAB_00409c65
    MOV EDX,dword ptr [ESP + 0x84]      ; 00409c4b
        ;   Label: LAB_00409c4b
    INC EBP                             ; 00409c52
    ADD EDI,0xc                         ; 00409c53
    CMP EBP,EDX                         ; 00409c56
    JL 0x00409be7                       ; 00409c58
        ;   XREF to: 00409be7 (CONDITIONAL_JUMP)  ; LAB_00409be7
    ADD ESP,0x8c                        ; 00409c5a
        ;   Label: LAB_00409c5a
    POP EBP                             ; 00409c60
    POP EDI                             ; 00409c61
    POP ESI                             ; 00409c62
    POP EBX                             ; 00409c63
    RET                                 ; 00409c64
    MOV EBX,dword ptr [ESI + 0xea5e0]   ; 00409c65
        ;   Label: LAB_00409c65
    MOV EAX,dword ptr [ESP + 0x88]      ; 00409c6b
    SAR EBX,0x10                        ; 00409c72
    MOV ESI,dword ptr [ESI + 0xea5e4]   ; 00409c75
    MOV [0x02d02570],EAX                ; 00409c7b | g_ActiveRenderColor
    SAR ESI,0x10                        ; 00409c80
    TEST EBX,EBX                        ; 00409c83
    JL 0x00409c97                       ; 00409c85
        ;   XREF to: 00409c97 (CONDITIONAL_JUMP)  ; LAB_00409c97
    TEST ESI,ESI                        ; 00409c87
    JL 0x00409c97                       ; 00409c89
        ;   XREF to: 00409c97 (CONDITIONAL_JUMP)  ; LAB_00409c97
    CMP EBX,dword ptr [0x00679394]      ; 00409c8b | g_WindowWidth
    JL 0x00409d8a                       ; 00409c91
        ;   XREF to: 00409d8a (CONDITIONAL_JUMP)  ; LAB_00409d8a
    LEA EAX,[EBX + -0x1]                ; 00409c97
        ;   Label: LAB_00409c97
    LEA EDX,[ESI + -0x1]                ; 00409c9a
    TEST EAX,EAX                        ; 00409c9d
    JL 0x00409cb1                       ; 00409c9f
        ;   XREF to: 00409cb1 (CONDITIONAL_JUMP)  ; LAB_00409cb1
    TEST EDX,EDX                        ; 00409ca1
    JL 0x00409cb1                       ; 00409ca3
        ;   XREF to: 00409cb1 (CONDITIONAL_JUMP)  ; LAB_00409cb1
    CMP EAX,dword ptr [0x00679394]      ; 00409ca5 | g_WindowWidth
    JL 0x00409da5                       ; 00409cab
        ;   XREF to: 00409da5 (CONDITIONAL_JUMP)  ; LAB_00409da5
    LEA EAX,[EBX + -0x1]                ; 00409cb1
        ;   Label: LAB_00409cb1
    LEA EDX,[ESI + 0x1]                 ; 00409cb4
    TEST EAX,EAX                        ; 00409cb7
    JL 0x00409ccb                       ; 00409cb9
        ;   XREF to: 00409ccb (CONDITIONAL_JUMP)  ; LAB_00409ccb
    TEST EDX,EDX                        ; 00409cbb
    JL 0x00409ccb                       ; 00409cbd
        ;   XREF to: 00409ccb (CONDITIONAL_JUMP)  ; LAB_00409ccb
    CMP EAX,dword ptr [0x00679394]      ; 00409cbf | g_WindowWidth
    JL 0x00409dc0                       ; 00409cc5
        ;   XREF to: 00409dc0 (CONDITIONAL_JUMP)  ; LAB_00409dc0
    LEA EAX,[EBX + 0x1]                 ; 00409ccb
        ;   Label: LAB_00409ccb
    LEA EDX,[ESI + -0x1]                ; 00409cce
    TEST EAX,EAX                        ; 00409cd1
    JL 0x00409ce5                       ; 00409cd3
        ;   XREF to: 00409ce5 (CONDITIONAL_JUMP)  ; LAB_00409ce5
    TEST EDX,EDX                        ; 00409cd5
    JL 0x00409ce5                       ; 00409cd7
        ;   XREF to: 00409ce5 (CONDITIONAL_JUMP)  ; LAB_00409ce5
    CMP EAX,dword ptr [0x00679394]      ; 00409cd9 | g_WindowWidth
    JL 0x00409ddb                       ; 00409cdf
        ;   XREF to: 00409ddb (CONDITIONAL_JUMP)  ; LAB_00409ddb
    LEA EDX,[EBX + 0x1]                 ; 00409ce5
        ;   Label: LAB_00409ce5
    LEA EAX,[ESI + 0x1]                 ; 00409ce8
    TEST EDX,EDX                        ; 00409ceb
    JL 0x00409cff                       ; 00409ced
        ;   XREF to: 00409cff (CONDITIONAL_JUMP)  ; LAB_00409cff
    TEST EAX,EAX                        ; 00409cef
    JL 0x00409cff                       ; 00409cf1
        ;   XREF to: 00409cff (CONDITIONAL_JUMP)  ; LAB_00409cff
    CMP EDX,dword ptr [0x00679394]      ; 00409cf3 | g_WindowWidth
    JL 0x00409df6                       ; 00409cf9
        ;   XREF to: 00409df6 (CONDITIONAL_JUMP)  ; LAB_00409df6
    LEA EAX,[EBX + -0x2]                ; 00409cff
        ;   Label: LAB_00409cff
    LEA EDX,[ESI + -0x2]                ; 00409d02
    TEST EAX,EAX                        ; 00409d05
    JL 0x00409d19                       ; 00409d07
        ;   XREF to: 00409d19 (CONDITIONAL_JUMP)  ; LAB_00409d19
    TEST EDX,EDX                        ; 00409d09
    JL 0x00409d19                       ; 00409d0b
        ;   XREF to: 00409d19 (CONDITIONAL_JUMP)  ; LAB_00409d19
    CMP EAX,dword ptr [0x00679394]      ; 00409d0d | g_WindowWidth
    JL 0x00409e11                       ; 00409d13
        ;   XREF to: 00409e11 (CONDITIONAL_JUMP)  ; LAB_00409e11
    LEA EAX,[EBX + -0x2]                ; 00409d19
        ;   Label: LAB_00409d19
    LEA EDX,[ESI + 0x2]                 ; 00409d1c
    TEST EAX,EAX                        ; 00409d1f
    JL 0x00409d33                       ; 00409d21
        ;   XREF to: 00409d33 (CONDITIONAL_JUMP)  ; LAB_00409d33
    TEST EDX,EDX                        ; 00409d23
    JL 0x00409d33                       ; 00409d25
        ;   XREF to: 00409d33 (CONDITIONAL_JUMP)  ; LAB_00409d33
    CMP EAX,dword ptr [0x00679394]      ; 00409d27 | g_WindowWidth
    JL 0x00409e2c                       ; 00409d2d
        ;   XREF to: 00409e2c (CONDITIONAL_JUMP)  ; LAB_00409e2c
    LEA EAX,[EBX + 0x2]                 ; 00409d33
        ;   Label: LAB_00409d33
    LEA EDX,[ESI + -0x2]                ; 00409d36
    TEST EAX,EAX                        ; 00409d39
    JL 0x00409d4d                       ; 00409d3b
        ;   XREF to: 00409d4d (CONDITIONAL_JUMP)  ; LAB_00409d4d
    TEST EDX,EDX                        ; 00409d3d
    JL 0x00409d4d                       ; 00409d3f
        ;   XREF to: 00409d4d (CONDITIONAL_JUMP)  ; LAB_00409d4d
    CMP EAX,dword ptr [0x00679394]      ; 00409d41 | g_WindowWidth
    JL 0x00409e47                       ; 00409d47
        ;   XREF to: 00409e47 (CONDITIONAL_JUMP)  ; LAB_00409e47
    ADD EBX,0x2                         ; 00409d4d
        ;   Label: LAB_00409d4d
    ADD ESI,0x2                         ; 00409d50
    TEST EBX,EBX                        ; 00409d53
    JL 0x00409c4b                       ; 00409d55
        ;   XREF to: 00409c4b (CONDITIONAL_JUMP)  ; LAB_00409c4b
    TEST ESI,ESI                        ; 00409d5b
    JL 0x00409c4b                       ; 00409d5d
        ;   XREF to: 00409c4b (CONDITIONAL_JUMP)  ; LAB_00409c4b
    CMP EBX,dword ptr [0x00679394]      ; 00409d63 | g_WindowWidth
    JGE 0x00409c4b                      ; 00409d69
        ;   XREF to: 00409c4b (CONDITIONAL_JUMP)  ; LAB_00409c4b
    CMP ESI,dword ptr [0x00679398]      ; 00409d6f | g_WindowHeight
    JGE 0x00409c4b                      ; 00409d75
        ;   XREF to: 00409c4b (CONDITIONAL_JUMP)  ; LAB_00409c4b
    PUSH ESI                            ; 00409d7b
    PUSH EBX                            ; 00409d7c
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409d7d
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409d82
    JMP 0x00409c4b                      ; 00409d85
        ;   XREF to: 00409c4b (UNCONDITIONAL_JUMP)  ; LAB_00409c4b
    CMP ESI,dword ptr [0x00679398]      ; 00409d8a | g_WindowHeight
        ;   Label: LAB_00409d8a
    JGE 0x00409c97                      ; 00409d90
        ;   XREF to: 00409c97 (CONDITIONAL_JUMP)  ; LAB_00409c97
    PUSH ESI                            ; 00409d96
    PUSH EBX                            ; 00409d97
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409d98
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409d9d
    JMP 0x00409c97                      ; 00409da0
        ;   XREF to: 00409c97 (UNCONDITIONAL_JUMP)  ; LAB_00409c97
    CMP EDX,dword ptr [0x00679398]      ; 00409da5 | g_WindowHeight
        ;   Label: LAB_00409da5
    JGE 0x00409cb1                      ; 00409dab
        ;   XREF to: 00409cb1 (CONDITIONAL_JUMP)  ; LAB_00409cb1
    PUSH EDX                            ; 00409db1
    PUSH EAX                            ; 00409db2
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409db3
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409db8
    JMP 0x00409cb1                      ; 00409dbb
        ;   XREF to: 00409cb1 (UNCONDITIONAL_JUMP)  ; LAB_00409cb1
    CMP EDX,dword ptr [0x00679398]      ; 00409dc0 | g_WindowHeight
        ;   Label: LAB_00409dc0
    JGE 0x00409ccb                      ; 00409dc6
        ;   XREF to: 00409ccb (CONDITIONAL_JUMP)  ; LAB_00409ccb
    PUSH EDX                            ; 00409dcc
    PUSH EAX                            ; 00409dcd
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409dce
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409dd3
    JMP 0x00409ccb                      ; 00409dd6
        ;   XREF to: 00409ccb (UNCONDITIONAL_JUMP)  ; LAB_00409ccb
    CMP EDX,dword ptr [0x00679398]      ; 00409ddb | g_WindowHeight
        ;   Label: LAB_00409ddb
    JGE 0x00409ce5                      ; 00409de1
        ;   XREF to: 00409ce5 (CONDITIONAL_JUMP)  ; LAB_00409ce5
    PUSH EDX                            ; 00409de7
    PUSH EAX                            ; 00409de8
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409de9
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409dee
    JMP 0x00409ce5                      ; 00409df1
        ;   XREF to: 00409ce5 (UNCONDITIONAL_JUMP)  ; LAB_00409ce5
    CMP EAX,dword ptr [0x00679398]      ; 00409df6 | g_WindowHeight
        ;   Label: LAB_00409df6
    JGE 0x00409cff                      ; 00409dfc
        ;   XREF to: 00409cff (CONDITIONAL_JUMP)  ; LAB_00409cff
    PUSH EAX                            ; 00409e02
    PUSH EDX                            ; 00409e03
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409e04
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409e09
    JMP 0x00409cff                      ; 00409e0c
        ;   XREF to: 00409cff (UNCONDITIONAL_JUMP)  ; LAB_00409cff
    CMP EDX,dword ptr [0x00679398]      ; 00409e11 | g_WindowHeight
        ;   Label: LAB_00409e11
    JGE 0x00409d19                      ; 00409e17
        ;   XREF to: 00409d19 (CONDITIONAL_JUMP)  ; LAB_00409d19
    PUSH EDX                            ; 00409e1d
    PUSH EAX                            ; 00409e1e
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409e1f
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409e24
    JMP 0x00409d19                      ; 00409e27
        ;   XREF to: 00409d19 (UNCONDITIONAL_JUMP)  ; LAB_00409d19
    CMP EDX,dword ptr [0x00679398]      ; 00409e2c | g_WindowHeight
        ;   Label: LAB_00409e2c
    JGE 0x00409d33                      ; 00409e32
        ;   XREF to: 00409d33 (CONDITIONAL_JUMP)  ; LAB_00409d33
    PUSH EDX                            ; 00409e38
    PUSH EAX                            ; 00409e39
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409e3a
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409e3f
    JMP 0x00409d33                      ; 00409e42
        ;   XREF to: 00409d33 (UNCONDITIONAL_JUMP)  ; LAB_00409d33
    CMP EDX,dword ptr [0x00679398]      ; 00409e47 | g_WindowHeight
        ;   Label: LAB_00409e47
    JGE 0x00409d4d                      ; 00409e4d
        ;   XREF to: 00409d4d (CONDITIONAL_JUMP)  ; LAB_00409d4d
    PUSH EDX                            ; 00409e53
    PUSH EAX                            ; 00409e54
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409e55
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409e5a
    JMP 0x00409d4d                      ; 00409e5d
        ;   XREF to: 00409d4d (UNCONDITIONAL_JUMP)  ; LAB_00409d4d

