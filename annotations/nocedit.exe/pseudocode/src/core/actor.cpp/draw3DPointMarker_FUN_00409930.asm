; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_draw3DPointMarker_FUN_00409930(CVector3f *world_position,int marker_color)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   world_position
; int              Stack[0x8]:4   marker_color
; Local Variables:
; CVector3i        Stack[-0x14]:12  local_14
;
; Referenced Globals:
;   float FLOAT_006597b0 = 256
;   CDemonRenderer* g_CDemonRendererPtr1 = 02c6d578
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;   engine_special.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409930
        ;   Label: core_actor.cpp_draw3DPointMarker_FUN_00409930
    PUSH ESI                            ; 00409931
    SUB ESP,0xc                         ; 00409932
    MOV EAX,dword ptr [ESP + 0x18]      ; 00409935
    MOV EBX,ESP                         ; 00409939
    MOV EDX,dword ptr [0x006703e8]      ; 0040993b | g_CDemonRendererPtr1
    FLD float ptr [EAX]                 ; 00409941
    FMUL float ptr [0x006597b0]         ; 00409943 | FLOAT_006597b0
    FISTP dword ptr [EBX]               ; 00409949
    FLD float ptr [EAX + 0x4]           ; 0040994b
    FMUL float ptr [0x006597b0]         ; 0040994e | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x4]         ; 00409954
    FLD float ptr [EAX + 0x8]           ; 00409957
    FMUL float ptr [0x006597b0]         ; 0040995a | FLOAT_006597b0
    FISTP dword ptr [EBX + 0x8]         ; 00409960
    MOV EAX,ESP                         ; 00409963
    PUSH EAX                            ; 00409965
    MOV EAX,dword ptr [EDX]             ; 00409966 | g_CDemonRendererInstance
    ADD EAX,0xea5d0                     ; 00409968
    PUSH EAX                            ; 0040996d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_005b575c ; 0040996e
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    MOV EBX,dword ptr [0x006703e8]      ; 00409973 | g_CDemonRendererPtr1
    MOV EBX,dword ptr [EBX]             ; 00409979 | g_CDemonRendererInstance
    MOV AH,byte ptr [EBX + 0xea5e3]     ; 0040997b
    ADD ESP,0x8                         ; 00409981
    TEST AH,0x80                        ; 00409984
    JNZ 0x00409a94                      ; 00409987
        ;   XREF to: 00409a94 (CONDITIONAL_JUMP)  ; LAB_00409a94
    MOV ESI,dword ptr [EBX + 0xea5e0]   ; 0040998d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00409993
    SAR ESI,0x10                        ; 00409997
    MOV EBX,dword ptr [EBX + 0xea5e4]   ; 0040999a
    MOV [0x02d02570],EAX                ; 004099a0 | g_ActiveRenderColor
    SAR EBX,0x10                        ; 004099a5
    TEST ESI,ESI                        ; 004099a8
    JL 0x004099bc                       ; 004099aa
        ;   XREF to: 004099bc (CONDITIONAL_JUMP)  ; LAB_004099bc
    TEST EBX,EBX                        ; 004099ac
    JL 0x004099bc                       ; 004099ae
        ;   XREF to: 004099bc (CONDITIONAL_JUMP)  ; LAB_004099bc
    CMP ESI,dword ptr [0x00679394]      ; 004099b0 | g_WindowWidth
    JL 0x00409a9a                       ; 004099b6
        ;   XREF to: 00409a9a (CONDITIONAL_JUMP)  ; LAB_00409a9a
    LEA EAX,[ESI + -0x1]                ; 004099bc
        ;   Label: LAB_004099bc
    LEA EDX,[EBX + -0x1]                ; 004099bf
    TEST EAX,EAX                        ; 004099c2
    JL 0x004099d6                       ; 004099c4
        ;   XREF to: 004099d6 (CONDITIONAL_JUMP)  ; LAB_004099d6
    TEST EDX,EDX                        ; 004099c6
    JL 0x004099d6                       ; 004099c8
        ;   XREF to: 004099d6 (CONDITIONAL_JUMP)  ; LAB_004099d6
    CMP EAX,dword ptr [0x00679394]      ; 004099ca | g_WindowWidth
    JL 0x00409ab5                       ; 004099d0
        ;   XREF to: 00409ab5 (CONDITIONAL_JUMP)  ; LAB_00409ab5
    LEA EDX,[ESI + -0x1]                ; 004099d6
        ;   Label: LAB_004099d6
    LEA EAX,[EBX + 0x1]                 ; 004099d9
    TEST EDX,EDX                        ; 004099dc
    JL 0x004099f0                       ; 004099de
        ;   XREF to: 004099f0 (CONDITIONAL_JUMP)  ; LAB_004099f0
    TEST EAX,EAX                        ; 004099e0
    JL 0x004099f0                       ; 004099e2
        ;   XREF to: 004099f0 (CONDITIONAL_JUMP)  ; LAB_004099f0
    CMP EDX,dword ptr [0x00679394]      ; 004099e4 | g_WindowWidth
    JL 0x00409ad0                       ; 004099ea
        ;   XREF to: 00409ad0 (CONDITIONAL_JUMP)  ; LAB_00409ad0
    LEA EDX,[ESI + 0x1]                 ; 004099f0
        ;   Label: LAB_004099f0
    LEA EAX,[EBX + -0x1]                ; 004099f3
    TEST EDX,EDX                        ; 004099f6
    JL 0x00409a0a                       ; 004099f8
        ;   XREF to: 00409a0a (CONDITIONAL_JUMP)  ; LAB_00409a0a
    TEST EAX,EAX                        ; 004099fa
    JL 0x00409a0a                       ; 004099fc
        ;   XREF to: 00409a0a (CONDITIONAL_JUMP)  ; LAB_00409a0a
    CMP EDX,dword ptr [0x00679394]      ; 004099fe | g_WindowWidth
    JL 0x00409aeb                       ; 00409a04
        ;   XREF to: 00409aeb (CONDITIONAL_JUMP)  ; LAB_00409aeb
    LEA EAX,[ESI + 0x1]                 ; 00409a0a
        ;   Label: LAB_00409a0a
    LEA EDX,[EBX + 0x1]                 ; 00409a0d
    TEST EAX,EAX                        ; 00409a10
    JL 0x00409a24                       ; 00409a12
        ;   XREF to: 00409a24 (CONDITIONAL_JUMP)  ; LAB_00409a24
    TEST EDX,EDX                        ; 00409a14
    JL 0x00409a24                       ; 00409a16
        ;   XREF to: 00409a24 (CONDITIONAL_JUMP)  ; LAB_00409a24
    CMP EAX,dword ptr [0x00679394]      ; 00409a18 | g_WindowWidth
    JL 0x00409b06                       ; 00409a1e
        ;   XREF to: 00409b06 (CONDITIONAL_JUMP)  ; LAB_00409b06
    LEA EDX,[ESI + -0x2]                ; 00409a24
        ;   Label: LAB_00409a24
    LEA EAX,[EBX + -0x2]                ; 00409a27
    TEST EDX,EDX                        ; 00409a2a
    JL 0x00409a3e                       ; 00409a2c
        ;   XREF to: 00409a3e (CONDITIONAL_JUMP)  ; LAB_00409a3e
    TEST EAX,EAX                        ; 00409a2e
    JL 0x00409a3e                       ; 00409a30
        ;   XREF to: 00409a3e (CONDITIONAL_JUMP)  ; LAB_00409a3e
    CMP EDX,dword ptr [0x00679394]      ; 00409a32 | g_WindowWidth
    JL 0x00409b21                       ; 00409a38
        ;   XREF to: 00409b21 (CONDITIONAL_JUMP)  ; LAB_00409b21
    LEA EAX,[ESI + -0x2]                ; 00409a3e
        ;   Label: LAB_00409a3e
    LEA EDX,[EBX + 0x2]                 ; 00409a41
    TEST EAX,EAX                        ; 00409a44
    JL 0x00409a58                       ; 00409a46
        ;   XREF to: 00409a58 (CONDITIONAL_JUMP)  ; LAB_00409a58
    TEST EDX,EDX                        ; 00409a48
    JL 0x00409a58                       ; 00409a4a
        ;   XREF to: 00409a58 (CONDITIONAL_JUMP)  ; LAB_00409a58
    CMP EAX,dword ptr [0x00679394]      ; 00409a4c | g_WindowWidth
    JL 0x00409b3c                       ; 00409a52
        ;   XREF to: 00409b3c (CONDITIONAL_JUMP)  ; LAB_00409b3c
    LEA EAX,[ESI + 0x2]                 ; 00409a58
        ;   Label: LAB_00409a58
    LEA EDX,[EBX + -0x2]                ; 00409a5b
    TEST EAX,EAX                        ; 00409a5e
    JL 0x00409a72                       ; 00409a60
        ;   XREF to: 00409a72 (CONDITIONAL_JUMP)  ; LAB_00409a72
    TEST EDX,EDX                        ; 00409a62
    JL 0x00409a72                       ; 00409a64
        ;   XREF to: 00409a72 (CONDITIONAL_JUMP)  ; LAB_00409a72
    CMP EAX,dword ptr [0x00679394]      ; 00409a66 | g_WindowWidth
    JL 0x00409b57                       ; 00409a6c
        ;   XREF to: 00409b57 (CONDITIONAL_JUMP)  ; LAB_00409b57
    ADD ESI,0x2                         ; 00409a72
        ;   Label: LAB_00409a72
    ADD EBX,0x2                         ; 00409a75
    TEST ESI,ESI                        ; 00409a78
    JL 0x00409a94                       ; 00409a7a
        ;   XREF to: 00409a94 (CONDITIONAL_JUMP)  ; LAB_00409a94
    TEST EBX,EBX                        ; 00409a7c
    JL 0x00409a94                       ; 00409a7e
        ;   XREF to: 00409a94 (CONDITIONAL_JUMP)  ; LAB_00409a94
    CMP ESI,dword ptr [0x00679394]      ; 00409a80 | g_WindowWidth
    JGE 0x00409a94                      ; 00409a86
        ;   XREF to: 00409a94 (CONDITIONAL_JUMP)  ; LAB_00409a94
    CMP EBX,dword ptr [0x00679398]      ; 00409a88 | g_WindowHeight
    JL 0x00409b72                       ; 00409a8e
        ;   XREF to: 00409b72 (CONDITIONAL_JUMP)  ; LAB_00409b72
    ADD ESP,0xc                         ; 00409a94
        ;   Label: LAB_00409a94
    POP ESI                             ; 00409a97
    POP EBX                             ; 00409a98
    RET                                 ; 00409a99
    CMP EBX,dword ptr [0x00679398]      ; 00409a9a | g_WindowHeight
        ;   Label: LAB_00409a9a
    JGE 0x004099bc                      ; 00409aa0
        ;   XREF to: 004099bc (CONDITIONAL_JUMP)  ; LAB_004099bc
    PUSH EBX                            ; 00409aa6
    PUSH ESI                            ; 00409aa7
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409aa8
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409aad
    JMP 0x004099bc                      ; 00409ab0
        ;   XREF to: 004099bc (UNCONDITIONAL_JUMP)  ; LAB_004099bc
    CMP EDX,dword ptr [0x00679398]      ; 00409ab5 | g_WindowHeight
        ;   Label: LAB_00409ab5
    JGE 0x004099d6                      ; 00409abb
        ;   XREF to: 004099d6 (CONDITIONAL_JUMP)  ; LAB_004099d6
    PUSH EDX                            ; 00409ac1
    PUSH EAX                            ; 00409ac2
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409ac3
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409ac8
    JMP 0x004099d6                      ; 00409acb
        ;   XREF to: 004099d6 (UNCONDITIONAL_JUMP)  ; LAB_004099d6
    CMP EAX,dword ptr [0x00679398]      ; 00409ad0 | g_WindowHeight
        ;   Label: LAB_00409ad0
    JGE 0x004099f0                      ; 00409ad6
        ;   XREF to: 004099f0 (CONDITIONAL_JUMP)  ; LAB_004099f0
    PUSH EAX                            ; 00409adc
    PUSH EDX                            ; 00409add
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409ade
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409ae3
    JMP 0x004099f0                      ; 00409ae6
        ;   XREF to: 004099f0 (UNCONDITIONAL_JUMP)  ; LAB_004099f0
    CMP EAX,dword ptr [0x00679398]      ; 00409aeb | g_WindowHeight
        ;   Label: LAB_00409aeb
    JGE 0x00409a0a                      ; 00409af1
        ;   XREF to: 00409a0a (CONDITIONAL_JUMP)  ; LAB_00409a0a
    PUSH EAX                            ; 00409af7
    PUSH EDX                            ; 00409af8
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409af9
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409afe
    JMP 0x00409a0a                      ; 00409b01
        ;   XREF to: 00409a0a (UNCONDITIONAL_JUMP)  ; LAB_00409a0a
    CMP EDX,dword ptr [0x00679398]      ; 00409b06 | g_WindowHeight
        ;   Label: LAB_00409b06
    JGE 0x00409a24                      ; 00409b0c
        ;   XREF to: 00409a24 (CONDITIONAL_JUMP)  ; LAB_00409a24
    PUSH EDX                            ; 00409b12
    PUSH EAX                            ; 00409b13
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409b14
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409b19
    JMP 0x00409a24                      ; 00409b1c
        ;   XREF to: 00409a24 (UNCONDITIONAL_JUMP)  ; LAB_00409a24
    CMP EAX,dword ptr [0x00679398]      ; 00409b21 | g_WindowHeight
        ;   Label: LAB_00409b21
    JGE 0x00409a3e                      ; 00409b27
        ;   XREF to: 00409a3e (CONDITIONAL_JUMP)  ; LAB_00409a3e
    PUSH EAX                            ; 00409b2d
    PUSH EDX                            ; 00409b2e
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409b2f
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409b34
    JMP 0x00409a3e                      ; 00409b37
        ;   XREF to: 00409a3e (UNCONDITIONAL_JUMP)  ; LAB_00409a3e
    CMP EDX,dword ptr [0x00679398]      ; 00409b3c | g_WindowHeight
        ;   Label: LAB_00409b3c
    JGE 0x00409a58                      ; 00409b42
        ;   XREF to: 00409a58 (CONDITIONAL_JUMP)  ; LAB_00409a58
    PUSH EDX                            ; 00409b48
    PUSH EAX                            ; 00409b49
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409b4a
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409b4f
    JMP 0x00409a58                      ; 00409b52
        ;   XREF to: 00409a58 (UNCONDITIONAL_JUMP)  ; LAB_00409a58
    CMP EDX,dword ptr [0x00679398]      ; 00409b57 | g_WindowHeight
        ;   Label: LAB_00409b57
    JGE 0x00409a72                      ; 00409b5d
        ;   XREF to: 00409a72 (CONDITIONAL_JUMP)  ; LAB_00409a72
    PUSH EDX                            ; 00409b63
    PUSH EAX                            ; 00409b64
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409b65
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409b6a
    JMP 0x00409a72                      ; 00409b6d
        ;   XREF to: 00409a72 (UNCONDITIONAL_JUMP)  ; LAB_00409a72
    PUSH EBX                            ; 00409b72
        ;   Label: LAB_00409b72
    PUSH ESI                            ; 00409b73
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 00409b74
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 00409b79
    ADD ESP,0xc                         ; 00409b7c
    POP ESI                             ; 00409b7f
    POP EBX                             ; 00409b80
    RET                                 ; 00409b81

