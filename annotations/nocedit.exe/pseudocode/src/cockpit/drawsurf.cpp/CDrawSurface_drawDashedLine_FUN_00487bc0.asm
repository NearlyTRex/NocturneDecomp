; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   x1
; int              Stack[0xc]:4   y1
; int              Stack[0x10]:4   x2
; int              Stack[0x14]:4   y2
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawClippedDashedLine_FUN_00487a30 at 00487ab7
;
; Referenced Globals:
;   double g_DashAnimationTimeScale = 0.0000152587890625
;   int g_DashLength = 0x1
;   float g_DashAnimationThreshold = 0.1000000
;   float g_DashAnimationAccumulator
;   float g_DashAnimationOffset
;   int g_DashAnimationLastFrame
;   int g_GlobalDeltaTimeInt
;   int g_AnimationTimerValue
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00487bc0
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawDashedLine_FUN_00487bc0
    PUSH ESI                            ; 00487bc1
    PUSH EDI                            ; 00487bc2
    PUSH EBP                            ; 00487bc3
    SUB ESP,0x24                        ; 00487bc4
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00487bc7
    MOV EBX,dword ptr [ESP + 0x40]      ; 00487bcb
    MOV EBP,dword ptr [ESP + 0x44]      ; 00487bcf
    MOV EDX,dword ptr [ESP + 0x48]      ; 00487bd3
    MOV EDI,dword ptr [0x02cf6a84]      ; 00487bd7 | int g_AnimationTimerValue
    CMP EDI,dword ptr [0x02c6d2c0]      ; 00487bdd | int g_DashAnimationLastFrame
    JNZ 0x00487cbb                      ; 00487be3 | LAB_00487cbb
        ;   XREF to: 00487cbb (CONDITIONAL_JUMP)
    FLD float ptr [0x02c6d2bc]          ; 00487be9 | float g_DashAnimationOffset
        ;   Label: LAB_00487be9
    MOV EDI,0x1                         ; 00487bef
    MOV ECX,dword ptr [ESP + 0x38]      ; 00487bf4
    CALL crt_math.c_round_FUN_005fe6b0  ; 00487bf8 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ESP + 0x1c]        ; 00487bfd
    MOV dword ptr [ESP + 0xc],EDI       ; 00487c01
    MOV EAX,dword ptr [ECX + 0x8]       ; 00487c05
    MOV EDI,dword ptr [ECX + 0xc]       ; 00487c08
    SUB ESI,EAX                         ; 00487c0b
    SUB EBP,EAX                         ; 00487c0d
    MOV EAX,0x1                         ; 00487c0f
    SUB EBX,EDI                         ; 00487c14
    SUB EDX,EDI                         ; 00487c16
    MOV dword ptr [ESP + 0x8],EAX       ; 00487c18
    CMP EBX,EDX                         ; 00487c1c
    JG 0x00487c28                       ; 00487c1e | LAB_00487c28
        ;   XREF to: 00487c28 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x8],0xffffffff ; 00487c20
    JLE 0x00487c36                      ; 00487c28 | LAB_00487c36
        ;   Label: LAB_00487c28
        ;   XREF to: 00487c36 (CONDITIONAL_JUMP)
    MOV ECX,ESI                         ; 00487c2a
    MOV ESI,EBP                         ; 00487c2c
    MOV EBP,ECX                         ; 00487c2e
    MOV ECX,EBX                         ; 00487c30
    MOV EBX,EDX                         ; 00487c32
    MOV EDX,ECX                         ; 00487c34
    SUB EDX,EBX                         ; 00487c36
        ;   Label: LAB_00487c36
    SUB EBP,ESI                         ; 00487c38
    MOV dword ptr [ESP + 0x18],EDX      ; 00487c3a
    TEST EBP,EBP                        ; 00487c3e
    JL 0x00487d37                       ; 00487c40 | LAB_00487d37
        ;   XREF to: 00487d37 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487c46
        ;   Label: LAB_00487c46
    CMP EBP,EAX                         ; 00487c4a
    JLE 0x00487d5b                      ; 00487c4c | LAB_00487d5b
        ;   XREF to: 00487d5b (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00487c52
    LEA EDI,[EAX + EAX*0x1]             ; 00487c54
    MOV dword ptr [ESP + 0x14],EDX      ; 00487c57
    SUB EDI,EBP                         ; 00487c5b
    TEST EBP,EBP                        ; 00487c5d
    JL 0x00487cb3                       ; 00487c5f | LAB_00487cb3
        ;   XREF to: 00487cb3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487c61
        ;   Label: LAB_00487c61
    CDQ                                 ; 00487c65
    XOR EAX,EDX                         ; 00487c66
    SUB EAX,EDX                         ; 00487c68
    MOV EDX,EAX                         ; 00487c6a
    MOV ECX,dword ptr [0x006703dc]      ; 00487c6c | int g_DashLength
    SAR EDX,0x1f                        ; 00487c72
    ADD ECX,ECX                         ; 00487c75
    IDIV ECX                            ; 00487c77
    CMP EDX,dword ptr [0x006703dc]      ; 00487c79 | int g_DashLength
    JL 0x00487d47                       ; 00487c7f | LAB_00487d47
        ;   XREF to: 00487d47 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 00487c85
        ;   Label: LAB_00487c85
    JLE 0x00487c8c                      ; 00487c87 | LAB_00487c8c
        ;   XREF to: 00487c8c (CONDITIONAL_JUMP)
    INC EBX                             ; 00487c89
    SUB EDI,EBP                         ; 00487c8a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00487c8c
        ;   Label: LAB_00487c8c
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00487c90
    MOV EAX,dword ptr [ESP + 0xc]       ; 00487c94
    ADD ECX,EDX                         ; 00487c98
    ADD ESI,EAX                         ; 00487c9a
    MOV dword ptr [ESP + 0x1c],ECX      ; 00487c9c
    MOV ECX,dword ptr [ESP + 0x14]      ; 00487ca0
    MOV EDX,dword ptr [ESP + 0x18]      ; 00487ca4
    INC ECX                             ; 00487ca8
    ADD EDI,EDX                         ; 00487ca9
    MOV dword ptr [ESP + 0x14],ECX      ; 00487cab
    CMP EBP,ECX                         ; 00487caf
    JGE 0x00487c61                      ; 00487cb1 | LAB_00487c61
        ;   XREF to: 00487c61 (CONDITIONAL_JUMP)
    ADD ESP,0x24                        ; 00487cb3
        ;   Label: LAB_00487cb3
    POP EBP                             ; 00487cb6
    POP EDI                             ; 00487cb7
    POP ESI                             ; 00487cb8
    POP EBX                             ; 00487cb9
    RET                                 ; 00487cba
    FILD dword ptr [0x02cf6a80]         ; 00487cbb | int g_GlobalDeltaTimeInt
        ;   Label: LAB_00487cbb
    FMUL double ptr [0x00621d66]        ; 00487cc1 | double g_DashAnimationTimeScale
    FLD float ptr [0x02c6d2b8]          ; 00487cc7 | float g_DashAnimationAccumulator
    FXCH                                ; 00487ccd
    FADD ST0,ST1                        ; 00487ccf
    MOV dword ptr [0x02c6d2c0],EDI      ; 00487cd1 | int g_DashAnimationLastFrame
    FSTP ST1                            ; 00487cd7
    FST float ptr [0x02c6d2b8]          ; 00487cd9 | float g_DashAnimationAccumulator
    FCOMP float ptr [0x006703e0]        ; 00487cdf | float g_DashAnimationThreshold
    FNSTSW AX                           ; 00487ce5
    SAHF                                ; 00487ce7
    JBE 0x00487be9                      ; 00487ce8 | LAB_00487be9
        ;   XREF to: 00487be9 (CONDITIONAL_JUMP)
    FLD float ptr [0x02c6d2b8]          ; 00487cee | float g_DashAnimationAccumulator
    FDIV float ptr [0x006703e0]         ; 00487cf4 | float g_DashAnimationThreshold
    MOV ECX,dword ptr [0x006703dc]      ; 00487cfa | int g_DashLength
    ADD ECX,ECX                         ; 00487d00
    MOV dword ptr [ESP + 0x20],ECX      ; 00487d02
    FADD float ptr [0x02c6d2bc]         ; 00487d06 | float g_DashAnimationOffset
    FILD dword ptr [ESP + 0x20]         ; 00487d0c
    FXCH                                ; 00487d10
    FSTP float ptr [0x02c6d2bc]         ; 00487d12 | float g_DashAnimationOffset
    FCOMP float ptr [0x02c6d2bc]        ; 00487d18 | float g_DashAnimationOffset
    FNSTSW AX                           ; 00487d1e
    SAHF                                ; 00487d20
    JNC 0x00487d2a                      ; 00487d21 | LAB_00487d2a
        ;   XREF to: 00487d2a (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00487d23
    MOV [0x02c6d2bc],EAX                ; 00487d25 | float g_DashAnimationOffset
    XOR ECX,ECX                         ; 00487d2a
        ;   Label: LAB_00487d2a
    MOV dword ptr [0x02c6d2b8],ECX      ; 00487d2c | float g_DashAnimationAccumulator
    JMP 0x00487be9                      ; 00487d32 | LAB_00487be9
        ;   XREF to: 00487be9 (UNCONDITIONAL_JUMP)
    MOV EDI,0xffffffff                  ; 00487d37
        ;   Label: LAB_00487d37
    NEG EBP                             ; 00487d3c
    MOV dword ptr [ESP + 0xc],EDI       ; 00487d3e
    JMP 0x00487c46                      ; 00487d42 | LAB_00487c46
        ;   XREF to: 00487c46 (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00487d47
        ;   Label: LAB_00487d47
    PUSH ESI                            ; 00487d48
    MOV EAX,dword ptr [ESP + 0x40]      ; 00487d49
    PUSH EAX                            ; 00487d4d
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487d4e | void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00487d53
    JMP 0x00487c85                      ; 00487d56 | LAB_00487c85
        ;   XREF to: 00487c85 (UNCONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 00487d5b
        ;   Label: LAB_00487d5b
    LEA EDI,[EBP + EBP*0x1]             ; 00487d5d
    MOV dword ptr [ESP + 0x10],ECX      ; 00487d61
    SUB EDI,EAX                         ; 00487d65
    TEST EAX,EAX                        ; 00487d67
    JL 0x00487cb3                       ; 00487d69 | LAB_00487cb3
        ;   XREF to: 00487cb3 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00487d6f
        ;   Label: LAB_00487d6f
    CDQ                                 ; 00487d73
    XOR EAX,EDX                         ; 00487d74
    SUB EAX,EDX                         ; 00487d76
    MOV EDX,EAX                         ; 00487d78
    MOV ECX,dword ptr [0x006703dc]      ; 00487d7a | int g_DashLength
    SAR EDX,0x1f                        ; 00487d80
    ADD ECX,ECX                         ; 00487d83
    IDIV ECX                            ; 00487d85
    CMP EDX,dword ptr [0x006703dc]      ; 00487d87 | int g_DashLength
    JL 0x00487dc7                       ; 00487d8d | LAB_00487dc7
        ;   XREF to: 00487dc7 (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 00487d8f
        ;   Label: LAB_00487d8f
    JLE 0x00487d9f                      ; 00487d91 | LAB_00487d9f
        ;   XREF to: 00487d9f (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x18]      ; 00487d93
    MOV ECX,dword ptr [ESP + 0xc]       ; 00487d97
    SUB EDI,EAX                         ; 00487d9b
    ADD ESI,ECX                         ; 00487d9d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00487d9f
        ;   Label: LAB_00487d9f
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00487da3
    MOV EAX,dword ptr [ESP + 0x10]      ; 00487da7
    INC EBX                             ; 00487dab
    ADD EDI,EBP                         ; 00487dac
    ADD ECX,EDX                         ; 00487dae
    INC EAX                             ; 00487db0
    MOV dword ptr [ESP + 0x1c],ECX      ; 00487db1
    MOV ECX,dword ptr [ESP + 0x18]      ; 00487db5
    MOV dword ptr [ESP + 0x10],EAX      ; 00487db9
    CMP EAX,ECX                         ; 00487dbd
    JG 0x00487cb3                       ; 00487dbf | LAB_00487cb3
        ;   XREF to: 00487cb3 (CONDITIONAL_JUMP)
    JMP 0x00487d6f                      ; 00487dc5 | LAB_00487d6f
        ;   XREF to: 00487d6f (UNCONDITIONAL_JUMP)
    PUSH EBX                            ; 00487dc7
        ;   Label: LAB_00487dc7
    PUSH ESI                            ; 00487dc8
    MOV EDX,dword ptr [ESP + 0x40]      ; 00487dc9
    PUSH EDX                            ; 00487dcd
    CALL cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0 ; 00487dce | void cockpit_drawsurf.cpp_CDrawSurface_plotPixel_FUN_004874d0(CDrawSurface * this_ptr, int x, int y)
        ;   XREF to: 004874d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00487dd3
    JMP 0x00487d8f                      ; 00487dd6 | LAB_00487d8f
        ;   XREF to: 00487d8f (UNCONDITIONAL_JUMP)

