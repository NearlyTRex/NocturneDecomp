; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_renderIrisFade_FUN_004a3960(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d08a
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   undefined4 DAT_01c78b04
;   undefined4 DAT_01c78b08
;   undefined4 DAT_01c78b0c
;   undefined4 DAT_01c78b10
;
; Called Functions:
;   core_game.cpp_calculateIrisFadeCenter_FUN_004a3860
;   crt_math.c_round_FUN_00563a30
;   engine_2d.c_fillRectColor_FUN_00403e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3960
        ;   Label: core_game.cpp_CGame_renderIrisFade_FUN_004a3960
    PUSH ESI                            ; 004a3961
    PUSH EDI                            ; 004a3962
    PUSH EBP                            ; 004a3963
    SUB ESP,0x4                         ; 004a3964
    MOV EDI,dword ptr [0x005b761c]      ; 004a3967 | g_WindowWidth
    MOV EDX,dword ptr [0x01c78b04]      ; 004a396d | DAT_01c78b04
    TEST EDX,EDX                        ; 004a3973
    JZ 0x004a3a13                       ; 004a3975
        ;   XREF to: 004a3a13 (CONDITIONAL_JUMP)  ; LAB_004a3a13
    CMP EDX,0x4                         ; 004a397b
    JGE 0x004a3a21                      ; 004a397e
        ;   XREF to: 004a3a21 (CONDITIONAL_JUMP)  ; LAB_004a3a21
    CMP EDX,0x1                         ; 004a3984
    JZ 0x004a3a21                       ; 004a3987
        ;   XREF to: 004a3a21 (CONDITIONAL_JUMP)  ; LAB_004a3a21
    CMP dword ptr [0x01c78b08],0x3f800000 ; 004a398d | DAT_01c78b08
    JL 0x004a3a21                       ; 004a3997
        ;   XREF to: 004a3a21 (CONDITIONAL_JUMP)  ; LAB_004a3a21
    CALL core_game.cpp_calculateIrisFadeCenter_FUN_004a3860 ; 004a399d
        ;   XREF to: 004a3860 (UNCONDITIONAL_CALL)  ; void core_game.cpp_calculateIrisFadeCenter_FUN_004a3860()
    CMP dword ptr [0x005b7624],0x20     ; 004a39a2 | g_BitsPerPixel
    JNZ 0x004a3a13                      ; 004a39a9
        ;   XREF to: 004a3a13 (CONDITIONAL_JUMP)  ; LAB_004a3a13
    FLD float ptr [0x01c78b08]          ; 004a39ab | DAT_01c78b08
    FMUL ST0                            ; 004a39b1
    MOV EAX,[0x005b7620]                ; 004a39b3 | g_WindowHeight
    XOR ESI,ESI                         ; 004a39b8
    CALL crt_math.c_round_FUN_00563a30  ; 004a39ba
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP]               ; 004a39bf
    TEST EAX,EAX                        ; 004a39c2
    JLE 0x004a3a13                      ; 004a39c4
        ;   XREF to: 004a3a13 (CONDITIONAL_JUMP)  ; LAB_004a3a13
    XOR EBP,EBP                         ; 004a39c6
    MOV EDI,dword ptr [0x005b761c]      ; 004a39c8 | g_WindowWidth
        ;   Label: LAB_004a39c8
    MOV EDX,dword ptr [EBP + 0x1bd2fa0] ; 004a39ce | g_ScreenBufferArray | g_ScreenBufferArray[1]
    XOR EAX,EAX                         ; 004a39d4
    TEST EDI,EDI                        ; 004a39d6
    JLE 0x004a39ff                      ; 004a39d8
        ;   XREF to: 004a39ff (CONDITIONAL_JUMP)  ; LAB_004a39ff
    MOV EBX,dword ptr [0x01c78b0c]      ; 004a39da | DAT_01c78b0c
        ;   Label: LAB_004a39da
    SUB EBX,EAX                         ; 004a39e0
    IMUL EBX,EBX                        ; 004a39e2
    MOV ECX,dword ptr [0x01c78b10]      ; 004a39e5 | DAT_01c78b10
    SUB ECX,ESI                         ; 004a39eb
    IMUL ECX,ECX                        ; 004a39ed
    ADD ECX,EBX                         ; 004a39f0
    CMP ECX,dword ptr [ESP]             ; 004a39f2
    JG 0x004a3a48                       ; 004a39f5
        ;   XREF to: 004a3a48 (CONDITIONAL_JUMP)  ; LAB_004a3a48
    INC EAX                             ; 004a39f7
        ;   Label: LAB_004a39f7
    ADD EDX,0x4                         ; 004a39f8
    CMP EAX,EDI                         ; 004a39fb
    JL 0x004a39da                       ; 004a39fd
        ;   XREF to: 004a39da (CONDITIONAL_JUMP)  ; LAB_004a39da
    MOV EDX,dword ptr [0x005b7620]      ; 004a39ff | g_WindowHeight
        ;   Label: LAB_004a39ff
    ADD EBP,0x4                         ; 004a3a05
    INC ESI                             ; 004a3a08
    MOV dword ptr [0x005b761c],EDI      ; 004a3a09 | g_WindowWidth
    CMP ESI,EDX                         ; 004a3a0f
    JL 0x004a39c8                       ; 004a3a11
        ;   XREF to: 004a39c8 (CONDITIONAL_JUMP)  ; LAB_004a39c8
    MOV EDI,dword ptr [0x005b761c]      ; 004a3a13 | g_WindowWidth
        ;   Label: LAB_004a3a13
    ADD ESP,0x4                         ; 004a3a19
    POP EBP                             ; 004a3a1c
    POP EDI                             ; 004a3a1d
    POP ESI                             ; 004a3a1e
    POP EBX                             ; 004a3a1f
    RET                                 ; 004a3a20
    MOV EAX,[0x005b7620]                ; 004a3a21 | g_WindowHeight
        ;   Label: LAB_004a3a21
    PUSH 0x0                            ; 004a3a26
    DEC EAX                             ; 004a3a28
    MOV EDI,dword ptr [0x005b761c]      ; 004a3a29 | g_WindowWidth
    PUSH EAX                            ; 004a3a2f
    LEA EAX,[EDI + -0x1]                ; 004a3a30
    PUSH EAX                            ; 004a3a33
    PUSH 0x0                            ; 004a3a34
    PUSH 0x0                            ; 004a3a36
    CALL engine_2d.c_fillRectColor_FUN_00403e60 ; 004a3a38
        ;   XREF to: 00403e60 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_00403e60(int x1, int y1, int x2, int y2, ...)
    MOV EDI,dword ptr [0x005b761c]      ; 004a3a3d | g_WindowWidth
    ADD ESP,0x14                        ; 004a3a43
    JMP 0x004a3a13                      ; 004a3a46
        ;   XREF to: 004a3a13 (UNCONDITIONAL_JUMP)  ; LAB_004a3a13
    MOV dword ptr [EDX],0x0             ; 004a3a48
        ;   Label: LAB_004a3a48
    JMP 0x004a39f7                      ; 004a3a4e
        ;   XREF to: 004a39f7 (UNCONDITIONAL_JUMP)  ; LAB_004a39f7

