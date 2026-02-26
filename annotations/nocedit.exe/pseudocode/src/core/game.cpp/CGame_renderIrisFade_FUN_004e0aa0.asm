; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004e0aa0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da57c
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   int g_IrisFadeType
;   float g_IrisFadeRadius
;   int g_IrisFadeCenterX
;   int g_IrisFadeCenterY
;
; Called Functions:
;   core_game.cpp_CGame_calculateIrisFadeCenter_FUN_004e09a0
;   crt_math.c_round_FUN_005fe6b0
;   engine_2d.c_fillRectColor_FUN_00403170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0aa0
        ;   Label: core_game.cpp_CGame_renderIrisFade_FUN_004e0aa0
    PUSH ESI                            ; 004e0aa1
    PUSH EDI                            ; 004e0aa2
    PUSH EBP                            ; 004e0aa3
    SUB ESP,0x4                         ; 004e0aa4
    MOV EDI,dword ptr [0x00679394]      ; 004e0aa7 | g_WindowWidth
    MOV EDX,dword ptr [0x02d831ec]      ; 004e0aad | g_IrisFadeType
    TEST EDX,EDX                        ; 004e0ab3
    JZ 0x004e0b53                       ; 004e0ab5
        ;   XREF to: 004e0b53 (CONDITIONAL_JUMP)  ; LAB_004e0b53
    CMP EDX,0x4                         ; 004e0abb
    JGE 0x004e0b61                      ; 004e0abe
        ;   XREF to: 004e0b61 (CONDITIONAL_JUMP)  ; LAB_004e0b61
    CMP EDX,0x1                         ; 004e0ac4
    JZ 0x004e0b61                       ; 004e0ac7
        ;   XREF to: 004e0b61 (CONDITIONAL_JUMP)  ; LAB_004e0b61
    CMP dword ptr [0x02d831f0],0x3f800000 ; 004e0acd | g_IrisFadeRadius
    JL 0x004e0b61                       ; 004e0ad7
        ;   XREF to: 004e0b61 (CONDITIONAL_JUMP)  ; LAB_004e0b61
    CALL core_game.cpp_CGame_calculateIrisFadeCenter_FUN_004e09a0 ; 004e0add
        ;   XREF to: 004e09a0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_calculateIrisFadeCenter_FUN_004e09a0(CGame * this_ptr)
    CMP dword ptr [0x0067939c],0x20     ; 004e0ae2 | g_BitsPerPixel
    JNZ 0x004e0b53                      ; 004e0ae9
        ;   XREF to: 004e0b53 (CONDITIONAL_JUMP)  ; LAB_004e0b53
    FLD float ptr [0x02d831f0]          ; 004e0aeb | g_IrisFadeRadius
    FMUL ST0                            ; 004e0af1
    MOV EAX,[0x00679398]                ; 004e0af3 | g_WindowHeight
    XOR ESI,ESI                         ; 004e0af8
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e0afa
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP]               ; 004e0aff
    TEST EAX,EAX                        ; 004e0b02
    JLE 0x004e0b53                      ; 004e0b04
        ;   XREF to: 004e0b53 (CONDITIONAL_JUMP)  ; LAB_004e0b53
    XOR EBP,EBP                         ; 004e0b06
    MOV EDI,dword ptr [0x00679394]      ; 004e0b08 | g_WindowWidth
        ;   Label: LAB_004e0b08
    MOV EDX,dword ptr [EBP + 0x2cf6a9c] ; 004e0b0e | g_ScreenBufferArray | g_ScreenBufferArray[1]
    XOR EAX,EAX                         ; 004e0b14
    TEST EDI,EDI                        ; 004e0b16
    JLE 0x004e0b3f                      ; 004e0b18
        ;   XREF to: 004e0b3f (CONDITIONAL_JUMP)  ; LAB_004e0b3f
    MOV EBX,dword ptr [0x02d831f4]      ; 004e0b1a | g_IrisFadeCenterX
        ;   Label: LAB_004e0b1a
    SUB EBX,EAX                         ; 004e0b20
    IMUL EBX,EBX                        ; 004e0b22
    MOV ECX,dword ptr [0x02d831f8]      ; 004e0b25 | g_IrisFadeCenterY
    SUB ECX,ESI                         ; 004e0b2b
    IMUL ECX,ECX                        ; 004e0b2d
    ADD ECX,EBX                         ; 004e0b30
    CMP ECX,dword ptr [ESP]             ; 004e0b32
    JG 0x004e0b88                       ; 004e0b35
        ;   XREF to: 004e0b88 (CONDITIONAL_JUMP)  ; LAB_004e0b88
    INC EAX                             ; 004e0b37
        ;   Label: LAB_004e0b37
    ADD EDX,0x4                         ; 004e0b38
    CMP EAX,EDI                         ; 004e0b3b
    JL 0x004e0b1a                       ; 004e0b3d
        ;   XREF to: 004e0b1a (CONDITIONAL_JUMP)  ; LAB_004e0b1a
    MOV EDX,dword ptr [0x00679398]      ; 004e0b3f | g_WindowHeight
        ;   Label: LAB_004e0b3f
    ADD EBP,0x4                         ; 004e0b45
    INC ESI                             ; 004e0b48
    MOV dword ptr [0x00679394],EDI      ; 004e0b49 | g_WindowWidth
    CMP ESI,EDX                         ; 004e0b4f
    JL 0x004e0b08                       ; 004e0b51
        ;   XREF to: 004e0b08 (CONDITIONAL_JUMP)  ; LAB_004e0b08
    MOV EDI,dword ptr [0x00679394]      ; 004e0b53 | g_WindowWidth
        ;   Label: LAB_004e0b53
    ADD ESP,0x4                         ; 004e0b59
    POP EBP                             ; 004e0b5c
    POP EDI                             ; 004e0b5d
    POP ESI                             ; 004e0b5e
    POP EBX                             ; 004e0b5f
    RET                                 ; 004e0b60
    MOV EAX,[0x00679398]                ; 004e0b61 | g_WindowHeight
        ;   Label: LAB_004e0b61
    PUSH 0x0                            ; 004e0b66
    DEC EAX                             ; 004e0b68
    MOV EDI,dword ptr [0x00679394]      ; 004e0b69 | g_WindowWidth
    PUSH EAX                            ; 004e0b6f
    LEA EAX,[EDI + -0x1]                ; 004e0b70
    PUSH EAX                            ; 004e0b73
    PUSH 0x0                            ; 004e0b74
    PUSH 0x0                            ; 004e0b76
    CALL engine_2d.c_fillRectColor_FUN_00403170 ; 004e0b78
        ;   XREF to: 00403170 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403170(int x1, int y1, int x2, int y2, ...)
    MOV EDI,dword ptr [0x00679394]      ; 004e0b7d | g_WindowWidth
    ADD ESP,0x14                        ; 004e0b83
    JMP 0x004e0b53                      ; 004e0b86
        ;   XREF to: 004e0b53 (UNCONDITIONAL_JUMP)  ; LAB_004e0b53
    MOV dword ptr [EDX],0x0             ; 004e0b88
        ;   Label: LAB_004e0b88
    JMP 0x004e0b37                      ; 004e0b8e
        ;   XREF to: 004e0b37 (UNCONDITIONAL_JUMP)  ; LAB_004e0b37

