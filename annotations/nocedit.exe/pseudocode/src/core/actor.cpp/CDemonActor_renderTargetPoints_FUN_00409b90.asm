; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_renderTargetPoints_FUN_00409b90(CDemonActor * this_ptr)
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
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonRenderer g_CDemonRendererInstance
;   undefined4 UCHAR_ARRAY_02d00c20
;   int g_ActiveRenderColor
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
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
    PUSH 0x6138e0                       ; 00409ba6 | = "..\\core\\actor.cpp" | s_core_actor_cpp_006138e0 = ..\core\actor.cpp
    PUSH EBX                            ; 00409bab
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 00409bac | void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00409bb1
    PUSH 0x6598c0                       ; 00409bb4 | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0xa                            ; 00409bb9
    LEA EAX,[ESP + 0x8]                 ; 00409bbb
    PUSH EAX                            ; 00409bbf
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 00409bc0 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
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
    JLE 0x00409c5a                      ; 00409be3 | LAB_00409c5a
        ;   XREF to: 00409c5a (CONDITIONAL_JUMP)
    MOV EDI,ESP                         ; 00409be5
    XOR EAX,EAX                         ; 00409be7
        ;   Label: LAB_00409be7
    MOV AL,[0x02d00c20]                 ; 00409be9 | UCHAR_ARRAY_02d00c20
    LEA EBX,[ESP + 0x78]                ; 00409bee
    MOV dword ptr [ESP + 0x88],EAX      ; 00409bf2
    MOV EAX,EDI                         ; 00409bf9
    MOV EDX,dword ptr [0x006703e8]      ; 00409bfb | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    FLD float ptr [EAX]                 ; 00409c01
    FMUL float ptr [0x006597b0]         ; 00409c03 | float FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 00409c09
    FLD float ptr [EAX + 0x4]           ; 00409c0b
    FMUL float ptr [0x006597b0]         ; 00409c0e | float FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 00409c14
    FLD float ptr [EAX + 0x8]           ; 00409c17
    FMUL float ptr [0x006597b0]         ; 00409c1a | float FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 00409c20
    LEA EAX,[ESP + 0x78]                ; 00409c23
    PUSH EAX                            ; 00409c27
    MOV EAX,dword ptr [EDX]             ; 00409c28 | CDemonRenderer g_CDemonRendererInstance
    ADD EAX,0xea5d0                     ; 00409c2a
    PUSH EAX                            ; 00409c2f
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00409c30 | void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x006703e8]      ; 00409c35 | CDemonRenderer * g_CDemonRendererPtr
    MOV ESI,dword ptr [ESI]             ; 00409c3b | CDemonRenderer g_CDemonRendererInstance
    MOV AH,byte ptr [ESI + 0xea5e3]     ; 00409c3d
    ADD ESP,0x8                         ; 00409c43
    TEST AH,0x80                        ; 00409c46
    JZ 0x00409c65                       ; 00409c49 | LAB_00409c65
        ;   XREF to: 00409c65 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x84]      ; 00409c4b
        ;   Label: LAB_00409c4b
    INC EBP                             ; 00409c52
    ADD EDI,0xc                         ; 00409c53
    CMP EBP,EDX                         ; 00409c56
    JL 0x00409be7                       ; 00409c58 | LAB_00409be7
        ;   XREF to: 00409be7 (CONDITIONAL_JUMP)
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
    MOV [0x02d02570],EAX                ; 00409c7b | int g_ActiveRenderColor
    SAR ESI,0x10                        ; 00409c80
    TEST EBX,EBX                        ; 00409c83
    JL 0x00409c97                       ; 00409c85 | LAB_00409c97
        ;   XREF to: 00409c97 (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 00409c87
    JL 0x00409c97                       ; 00409c89 | LAB_00409c97
        ;   XREF to: 00409c97 (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [0x00679394]      ; 00409c8b | int g_WindowWidth
    JL 0x00409d8a                       ; 00409c91 | LAB_00409d8a
        ;   XREF to: 00409d8a (CONDITIONAL_JUMP)
    LEA EAX,[EBX + -0x1]                ; 00409c97
        ;   Label: LAB_00409c97
    LEA EDX,[ESI + -0x1]                ; 00409c9a
    TEST EAX,EAX                        ; 00409c9d
    JL 0x00409cb1                       ; 00409c9f | LAB_00409cb1
        ;   XREF to: 00409cb1 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 00409ca1
    JL 0x00409cb1                       ; 00409ca3 | LAB_00409cb1
        ;   XREF to: 00409cb1 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 00409ca5 | int g_WindowWidth
    JL 0x00409da5                       ; 00409cab | LAB_00409da5
        ;   XREF to: 00409da5 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + -0x1]                ; 00409cb1
        ;   Label: LAB_00409cb1
    LEA EDX,[ESI + 0x1]                 ; 00409cb4
    TEST EAX,EAX                        ; 00409cb7
    JL 0x00409ccb                       ; 00409cb9 | LAB_00409ccb
        ;   XREF to: 00409ccb (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 00409cbb
    JL 0x00409ccb                       ; 00409cbd | LAB_00409ccb
        ;   XREF to: 00409ccb (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 00409cbf | int g_WindowWidth
    JL 0x00409dc0                       ; 00409cc5 | LAB_00409dc0
        ;   XREF to: 00409dc0 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x1]                 ; 00409ccb
        ;   Label: LAB_00409ccb
    LEA EDX,[ESI + -0x1]                ; 00409cce
    TEST EAX,EAX                        ; 00409cd1
    JL 0x00409ce5                       ; 00409cd3 | LAB_00409ce5
        ;   XREF to: 00409ce5 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 00409cd5
    JL 0x00409ce5                       ; 00409cd7 | LAB_00409ce5
        ;   XREF to: 00409ce5 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 00409cd9 | int g_WindowWidth
    JL 0x00409ddb                       ; 00409cdf | LAB_00409ddb
        ;   XREF to: 00409ddb (CONDITIONAL_JUMP)
    LEA EDX,[EBX + 0x1]                 ; 00409ce5
        ;   Label: LAB_00409ce5
    LEA EAX,[ESI + 0x1]                 ; 00409ce8
    TEST EDX,EDX                        ; 00409ceb
    JL 0x00409cff                       ; 00409ced | LAB_00409cff
        ;   XREF to: 00409cff (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 00409cef
    JL 0x00409cff                       ; 00409cf1 | LAB_00409cff
        ;   XREF to: 00409cff (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679394]      ; 00409cf3 | int g_WindowWidth
    JL 0x00409df6                       ; 00409cf9 | LAB_00409df6
        ;   XREF to: 00409df6 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + -0x2]                ; 00409cff
        ;   Label: LAB_00409cff
    LEA EDX,[ESI + -0x2]                ; 00409d02
    TEST EAX,EAX                        ; 00409d05
    JL 0x00409d19                       ; 00409d07 | LAB_00409d19
        ;   XREF to: 00409d19 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 00409d09
    JL 0x00409d19                       ; 00409d0b | LAB_00409d19
        ;   XREF to: 00409d19 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 00409d0d | int g_WindowWidth
    JL 0x00409e11                       ; 00409d13 | LAB_00409e11
        ;   XREF to: 00409e11 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + -0x2]                ; 00409d19
        ;   Label: LAB_00409d19
    LEA EDX,[ESI + 0x2]                 ; 00409d1c
    TEST EAX,EAX                        ; 00409d1f
    JL 0x00409d33                       ; 00409d21 | LAB_00409d33
        ;   XREF to: 00409d33 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 00409d23
    JL 0x00409d33                       ; 00409d25 | LAB_00409d33
        ;   XREF to: 00409d33 (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 00409d27 | int g_WindowWidth
    JL 0x00409e2c                       ; 00409d2d | LAB_00409e2c
        ;   XREF to: 00409e2c (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x2]                 ; 00409d33
        ;   Label: LAB_00409d33
    LEA EDX,[ESI + -0x2]                ; 00409d36
    TEST EAX,EAX                        ; 00409d39
    JL 0x00409d4d                       ; 00409d3b | LAB_00409d4d
        ;   XREF to: 00409d4d (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 00409d3d
    JL 0x00409d4d                       ; 00409d3f | LAB_00409d4d
        ;   XREF to: 00409d4d (CONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679394]      ; 00409d41 | int g_WindowWidth
    JL 0x00409e47                       ; 00409d47 | LAB_00409e47
        ;   XREF to: 00409e47 (CONDITIONAL_JUMP)
    ADD EBX,0x2                         ; 00409d4d
        ;   Label: LAB_00409d4d
    ADD ESI,0x2                         ; 00409d50
    TEST EBX,EBX                        ; 00409d53
    JL 0x00409c4b                       ; 00409d55 | LAB_00409c4b
        ;   XREF to: 00409c4b (CONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 00409d5b
    JL 0x00409c4b                       ; 00409d5d | LAB_00409c4b
        ;   XREF to: 00409c4b (CONDITIONAL_JUMP)
    CMP EBX,dword ptr [0x00679394]      ; 00409d63 | int g_WindowWidth
    JGE 0x00409c4b                      ; 00409d69 | LAB_00409c4b
        ;   XREF to: 00409c4b (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x00679398]      ; 00409d6f | int g_WindowHeight
    JGE 0x00409c4b                      ; 00409d75 | LAB_00409c4b
        ;   XREF to: 00409c4b (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00409d7b
    PUSH EBX                            ; 00409d7c
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409d7d | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00409d82
    JMP 0x00409c4b                      ; 00409d85 | LAB_00409c4b
        ;   XREF to: 00409c4b (UNCONDITIONAL_JUMP)
    CMP ESI,dword ptr [0x00679398]      ; 00409d8a | int g_WindowHeight
        ;   Label: LAB_00409d8a
    JGE 0x00409c97                      ; 00409d90 | LAB_00409c97
        ;   XREF to: 00409c97 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 00409d96
    PUSH EBX                            ; 00409d97
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409d98 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00409d9d
    JMP 0x00409c97                      ; 00409da0 | LAB_00409c97
        ;   XREF to: 00409c97 (UNCONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679398]      ; 00409da5 | int g_WindowHeight
        ;   Label: LAB_00409da5
    JGE 0x00409cb1                      ; 00409dab | LAB_00409cb1
        ;   XREF to: 00409cb1 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00409db1
    PUSH EAX                            ; 00409db2
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409db3 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00409db8
    JMP 0x00409cb1                      ; 00409dbb | LAB_00409cb1
        ;   XREF to: 00409cb1 (UNCONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679398]      ; 00409dc0 | int g_WindowHeight
        ;   Label: LAB_00409dc0
    JGE 0x00409ccb                      ; 00409dc6 | LAB_00409ccb
        ;   XREF to: 00409ccb (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00409dcc
    PUSH EAX                            ; 00409dcd
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409dce | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00409dd3
    JMP 0x00409ccb                      ; 00409dd6 | LAB_00409ccb
        ;   XREF to: 00409ccb (UNCONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679398]      ; 00409ddb | int g_WindowHeight
        ;   Label: LAB_00409ddb
    JGE 0x00409ce5                      ; 00409de1 | LAB_00409ce5
        ;   XREF to: 00409ce5 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00409de7
    PUSH EAX                            ; 00409de8
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409de9 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00409dee
    JMP 0x00409ce5                      ; 00409df1 | LAB_00409ce5
        ;   XREF to: 00409ce5 (UNCONDITIONAL_JUMP)
    CMP EAX,dword ptr [0x00679398]      ; 00409df6 | int g_WindowHeight
        ;   Label: LAB_00409df6
    JGE 0x00409cff                      ; 00409dfc | LAB_00409cff
        ;   XREF to: 00409cff (CONDITIONAL_JUMP)
    PUSH EAX                            ; 00409e02
    PUSH EDX                            ; 00409e03
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409e04 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00409e09
    JMP 0x00409cff                      ; 00409e0c | LAB_00409cff
        ;   XREF to: 00409cff (UNCONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679398]      ; 00409e11 | int g_WindowHeight
        ;   Label: LAB_00409e11
    JGE 0x00409d19                      ; 00409e17 | LAB_00409d19
        ;   XREF to: 00409d19 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00409e1d
    PUSH EAX                            ; 00409e1e
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409e1f | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00409e24
    JMP 0x00409d19                      ; 00409e27 | LAB_00409d19
        ;   XREF to: 00409d19 (UNCONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679398]      ; 00409e2c | int g_WindowHeight
        ;   Label: LAB_00409e2c
    JGE 0x00409d33                      ; 00409e32 | LAB_00409d33
        ;   XREF to: 00409d33 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00409e38
    PUSH EAX                            ; 00409e39
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409e3a | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00409e3f
    JMP 0x00409d33                      ; 00409e42 | LAB_00409d33
        ;   XREF to: 00409d33 (UNCONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00679398]      ; 00409e47 | int g_WindowHeight
        ;   Label: LAB_00409e47
    JGE 0x00409d4d                      ; 00409e4d | LAB_00409d4d
        ;   XREF to: 00409d4d (CONDITIONAL_JUMP)
    PUSH EDX                            ; 00409e53
    PUSH EAX                            ; 00409e54
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409e55 | void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00409e5a
    JMP 0x00409d4d                      ; 00409e5d | LAB_00409d4d
        ;   XREF to: 00409d4d (UNCONDITIONAL_JUMP)

