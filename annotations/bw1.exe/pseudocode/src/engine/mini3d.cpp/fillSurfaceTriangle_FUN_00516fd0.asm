; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_fillSurfaceTriangle_FUN_00516fd0(float *v0,float *v1,float *v2)
;
; Parameters:
; float *          Stack[0x4]:4   v0
; float *          Stack[0x8]:4   v1
; float *          Stack[0xc]:4   v2
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_mini3d.cpp_drawSurfaceTriangle_FUN_00517240 at 00517300
;   engine_mini3d.cpp_polyListSurface_FUN_00516cc0 at 00516d7b
;
; Referenced Globals:
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c44810
;   undefined4 DAT_01d22578
;   undefined4 DAT_01d2c0c4
;   undefined4 DAT_01d2c0c8
;   undefined4 DAT_01d2c0d0
;   undefined4 DAT_01d2c118
;   undefined4 DAT_01d2c120
;   undefined4 DAT_01d2c5c8
;   undefined4 DAT_01d2c5cc
;
; Called Functions:
;   engine_mini3d.cpp_setupSurfaceEdge_FUN_00516e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516fd0
        ;   Label: engine_mini3d.cpp_fillSurfaceTriangle_FUN_00516fd0
    PUSH ESI                            ; 00516fd1
    PUSH EDI                            ; 00516fd2
    PUSH EBP                            ; 00516fd3
    SUB ESP,0x1c                        ; 00516fd4
    MOV EBX,dword ptr [0x01d2c0c4]      ; 00516fd7 | DAT_01d2c0c4
    MOV EDI,dword ptr [ESP + 0x30]      ; 00516fdd
    MOV ESI,dword ptr [ESP + 0x34]      ; 00516fe1
    MOV EBP,dword ptr [ESP + 0x38]      ; 00516fe5
    FLD float ptr [EBP + 0x14]          ; 00516fe9
    FLD float ptr [ESI + 0x18]          ; 00516fec
    FSUB float ptr [EDI + 0x18]         ; 00516fef
    FXCH                                ; 00516ff2
    FSUB float ptr [ESI + 0x14]         ; 00516ff4
    FXCH                                ; 00516ff7
    FSTP float ptr [ESP + 0x14]         ; 00516ff9
    FSTP float ptr [ESP]                ; 00516ffd
    FLD float ptr [ESP + 0x14]          ; 00517000
    FMUL float ptr [ESP]                ; 00517004
    FLD float ptr [EBP + 0x18]          ; 00517007
    FLD float ptr [ESI + 0x14]          ; 0051700a
    FSUB float ptr [EDI + 0x14]         ; 0051700d
    FXCH                                ; 00517010
    FSUB float ptr [ESI + 0x18]         ; 00517012
    FXCH                                ; 00517015
    FSTP float ptr [ESP + 0x4]          ; 00517017
    FSTP float ptr [ESP + 0x10]         ; 0051701b
    FLD float ptr [ESP + 0x4]           ; 0051701f
    FMUL float ptr [ESP + 0x10]         ; 00517023
    MOV EDX,dword ptr [0x01d22578]      ; 00517027 | DAT_01d22578
    FXCH                                ; 0051702d
    FSTP float ptr [ESP + 0x8]          ; 0051702f
    FSTP float ptr [ESP + 0x18]         ; 00517033
    TEST EDX,EDX                        ; 00517037
    JNZ 0x005171d5                      ; 00517039
        ;   XREF to: 005171d5 (CONDITIONAL_JUMP)  ; LAB_005171d5
    FLD float ptr [ESP + 0x18]          ; 0051703f
    FCOMP float ptr [ESP + 0x8]         ; 00517043
    FNSTSW AX                           ; 00517047
    SAHF                                ; 00517049
    JBE 0x005171e6                      ; 0051704a
        ;   XREF to: 005171e6 (CONDITIONAL_JUMP)  ; LAB_005171e6
    MOV ECX,0x4b0                       ; 00517050
        ;   Label: LAB_00517050
    PUSH ESI                            ; 00517055
    XOR EBX,EBX                         ; 00517056
    MOV dword ptr [0x01d2c5c8],ECX      ; 00517058 | DAT_01d2c5c8
    PUSH EDI                            ; 0051705e
    MOV dword ptr [0x01d2c5cc],EBX      ; 0051705f | DAT_01d2c5cc
    MOV dword ptr [0x01d2c0c4],EBX      ; 00517065 | DAT_01d2c0c4
    CALL engine_mini3d.cpp_setupSurfaceEdge_FUN_00516e40 ; 0051706b
        ;   XREF to: 00516e40 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setupSurfaceEdge_FUN_00516e40(float * v0, float * v1)
    ADD ESP,0x8                         ; 00517070
    PUSH EBP                            ; 00517073
    PUSH ESI                            ; 00517074
    CALL engine_mini3d.cpp_setupSurfaceEdge_FUN_00516e40 ; 00517075
        ;   XREF to: 00516e40 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setupSurfaceEdge_FUN_00516e40(float * v0, float * v1)
    ADD ESP,0x8                         ; 0051707a
    PUSH EDI                            ; 0051707d
    PUSH EBP                            ; 0051707e
    CALL engine_mini3d.cpp_setupSurfaceEdge_FUN_00516e40 ; 0051707f
        ;   XREF to: 00516e40 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setupSurfaceEdge_FUN_00516e40(float * v0, float * v1)
    MOV EAX,0x1d2c0c8                   ; 00517084
    MOV EBX,dword ptr [0x01d2c0c4]      ; 00517089 | DAT_01d2c0c4
    MOV ECX,dword ptr [0x01d2c5c8]      ; 0051708f | DAT_01d2c5c8
    ADD ESP,0x8                         ; 00517095
    XOR EDX,EDX                         ; 00517098
    TEST EBX,EBX                        ; 0051709a
    JLE 0x00517200                      ; 0051709c
        ;   XREF to: 00517200 (CONDITIONAL_JUMP)  ; LAB_00517200
    CMP ECX,dword ptr [EAX]             ; 005170a2 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_005170a2
    JNZ 0x005171f4                      ; 005170a4
        ;   XREF to: 005171f4 (CONDITIONAL_JUMP)  ; LAB_005171f4
    TEST EAX,EAX                        ; 005170aa
    JZ 0x005171f4                       ; 005170ac
        ;   XREF to: 005171f4 (CONDITIONAL_JUMP)  ; LAB_005171f4
    MOV EDI,EAX                         ; 005170b2
        ;   Label: LAB_005170b2
    TEST EAX,EAX                        ; 005170b4
    JZ 0x005171e6                       ; 005170b6
        ;   XREF to: 005171e6 (CONDITIONAL_JUMP)  ; LAB_005171e6
    MOV ECX,dword ptr [0x01d2c5c8]      ; 005170bc | DAT_01d2c5c8
    MOV ESI,EAX                         ; 005170c2
    XOR EDX,EDX                         ; 005170c4
    MOV EAX,0x1d2c0c8                   ; 005170c6
    TEST EBX,EBX                        ; 005170cb
    JLE 0x00517213                      ; 005170cd
        ;   XREF to: 00517213 (CONDITIONAL_JUMP)  ; LAB_00517213
    CMP ECX,dword ptr [EAX]             ; 005170d3 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_005170d3
    JNZ 0x00517207                      ; 005170d5
        ;   XREF to: 00517207 (CONDITIONAL_JUMP)  ; LAB_00517207
    CMP EAX,ESI                         ; 005170db
    JZ 0x00517207                       ; 005170dd
        ;   XREF to: 00517207 (CONDITIONAL_JUMP)  ; LAB_00517207
    MOV EBP,EAX                         ; 005170e3
        ;   Label: LAB_005170e3
    TEST EAX,EAX                        ; 005170e5
    JZ 0x005171e6                       ; 005170e7
        ;   XREF to: 005171e6 (CONDITIONAL_JUMP)  ; LAB_005171e6
    MOV EAX,[0x01d2c5c8]                ; 005170ed | DAT_01d2c5c8
    MOV dword ptr [ESP + 0xc],EAX       ; 005170f2
    MOV EAX,dword ptr [ESP + 0xc]       ; 005170f6
        ;   Label: LAB_005170f6
    CMP EAX,dword ptr [EDI + 0x4]       ; 005170fa
    JL 0x00517132                       ; 005170fd
        ;   XREF to: 00517132 (CONDITIONAL_JUMP)  ; LAB_00517132
    MOV ESI,EAX                         ; 005170ff
    MOV ECX,EBP                         ; 00517101
    MOV dword ptr [EDI],0xffffffff      ; 00517103
    XOR EDX,EDX                         ; 00517109
    MOV EAX,0x1d2c0c8                   ; 0051710b
    TEST EBX,EBX                        ; 00517110
    JLE 0x00517226                      ; 00517112
        ;   XREF to: 00517226 (CONDITIONAL_JUMP)  ; LAB_00517226
    CMP ESI,dword ptr [EAX]             ; 00517118 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00517118
    JNZ 0x0051721a                      ; 0051711a
        ;   XREF to: 0051721a (CONDITIONAL_JUMP)  ; LAB_0051721a
    CMP EAX,ECX                         ; 00517120
    JZ 0x0051721a                       ; 00517122
        ;   XREF to: 0051721a (CONDITIONAL_JUMP)  ; LAB_0051721a
    MOV EDI,EAX                         ; 00517128
        ;   Label: LAB_00517128
    TEST EAX,EAX                        ; 0051712a
    JZ 0x005171e6                       ; 0051712c
        ;   XREF to: 005171e6 (CONDITIONAL_JUMP)  ; LAB_005171e6
    MOV EAX,dword ptr [ESP + 0xc]       ; 00517132
        ;   Label: LAB_00517132
    CMP EAX,dword ptr [EBP + 0x4]       ; 00517136
    JL 0x0051716f                       ; 00517139
        ;   XREF to: 0051716f (CONDITIONAL_JUMP)  ; LAB_0051716f
    MOV ECX,EAX                         ; 0051713b
    MOV ESI,EDI                         ; 0051713d
    MOV dword ptr [EBP],0xffffffff      ; 0051713f
    XOR EDX,EDX                         ; 00517146
    MOV EAX,0x1d2c0c8                   ; 00517148
    TEST EBX,EBX                        ; 0051714d
    JLE 0x00517239                      ; 0051714f
        ;   XREF to: 00517239 (CONDITIONAL_JUMP)  ; LAB_00517239
    CMP ECX,dword ptr [EAX]             ; 00517155 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00517155
    JNZ 0x0051722d                      ; 00517157
        ;   XREF to: 0051722d (CONDITIONAL_JUMP)  ; LAB_0051722d
    CMP EAX,ESI                         ; 0051715d
    JZ 0x0051722d                       ; 0051715f
        ;   XREF to: 0051722d (CONDITIONAL_JUMP)  ; LAB_0051722d
    MOV EBP,EAX                         ; 00517165
        ;   Label: LAB_00517165
    TEST EAX,EAX                        ; 00517167
    JZ 0x005171e6                       ; 00517169
        ;   XREF to: 005171e6 (CONDITIONAL_JUMP)  ; LAB_005171e6
    MOV EAX,dword ptr [EDI + 0x8]       ; 0051716f | DAT_01d2c0d0
        ;   Label: LAB_0051716f
    MOV ECX,dword ptr [EBP + 0x8]       ; 00517172 | DAT_01d2c120 | DAT_01d2c0d0
    MOV ESI,dword ptr [ESP + 0xc]       ; 00517175
    CMP EAX,ECX                         ; 00517179
    JLE 0x00517183                      ; 0051717b
        ;   XREF to: 00517183 (CONDITIONAL_JUMP)  ; LAB_00517183
    MOV EDX,EAX                         ; 0051717d
    MOV EAX,ECX                         ; 0051717f
    MOV ECX,EDX                         ; 00517181
    LEA EDX,[ESI*0x4 + 0x0]             ; 00517183
        ;   Label: LAB_00517183
    SAR EAX,0x10                        ; 0051718a
    LEA ESI,[EAX*0x4 + 0x0]             ; 0051718d
    MOV EDX,dword ptr [EDX + 0x1c4354c] ; 00517194 | DAT_01c4480c | DAT_01c44810
    SAR ECX,0x10                        ; 0051719a
    ADD EDX,ESI                         ; 0051719d
    CMP EAX,ECX                         ; 0051719f
    JGE 0x005171b1                      ; 005171a1
        ;   XREF to: 005171b1 (CONDITIONAL_JUMP)  ; LAB_005171b1
    INC EAX                             ; 005171a3
        ;   Label: LAB_005171a3
    MOV dword ptr [EDX],0x80000000      ; 005171a4
    ADD EDX,0x4                         ; 005171aa
    CMP EAX,ECX                         ; 005171ad
    JL 0x005171a3                       ; 005171af
        ;   XREF to: 005171a3 (CONDITIONAL_JUMP)  ; LAB_005171a3
    MOV EDX,dword ptr [EDI + 0x8]       ; 005171b1
        ;   Label: LAB_005171b1
    MOV EAX,dword ptr [EDI + 0xc]       ; 005171b4
    ADD EDX,EAX                         ; 005171b7
    MOV dword ptr [EDI + 0x8],EDX       ; 005171b9
    MOV ESI,dword ptr [ESP + 0xc]       ; 005171bc
    MOV EAX,dword ptr [EBP + 0xc]       ; 005171c0
    MOV ECX,dword ptr [EBP + 0x8]       ; 005171c3
    INC ESI                             ; 005171c6
    ADD ECX,EAX                         ; 005171c7
    MOV dword ptr [ESP + 0xc],ESI       ; 005171c9
    MOV dword ptr [EBP + 0x8],ECX       ; 005171cd
    JMP 0x005170f6                      ; 005171d0
        ;   XREF to: 005170f6 (UNCONDITIONAL_JUMP)  ; LAB_005170f6
    FLD float ptr [ESP + 0x18]          ; 005171d5
        ;   Label: LAB_005171d5
    FCOMP float ptr [ESP + 0x8]         ; 005171d9
    FNSTSW AX                           ; 005171dd
    SAHF                                ; 005171df
    JC 0x00517050                       ; 005171e0
        ;   XREF to: 00517050 (CONDITIONAL_JUMP)  ; LAB_00517050
    MOV dword ptr [0x01d2c0c4],EBX      ; 005171e6 | DAT_01d2c0c4
        ;   Label: LAB_005171e6
    ADD ESP,0x1c                        ; 005171ec
    POP EBP                             ; 005171ef
    POP EDI                             ; 005171f0
    POP ESI                             ; 005171f1
    POP EBX                             ; 005171f2
    RET                                 ; 005171f3
    INC EDX                             ; 005171f4
        ;   Label: LAB_005171f4
    ADD EAX,0x50                        ; 005171f5
    CMP EDX,EBX                         ; 005171f8
    JL 0x005170a2                       ; 005171fa
        ;   XREF to: 005170a2 (CONDITIONAL_JUMP)  ; LAB_005170a2
    XOR EAX,EAX                         ; 00517200
        ;   Label: LAB_00517200
    JMP 0x005170b2                      ; 00517202
        ;   XREF to: 005170b2 (UNCONDITIONAL_JUMP)  ; LAB_005170b2
    INC EDX                             ; 00517207
        ;   Label: LAB_00517207
    ADD EAX,0x50                        ; 00517208
    CMP EDX,EBX                         ; 0051720b
    JL 0x005170d3                       ; 0051720d
        ;   XREF to: 005170d3 (CONDITIONAL_JUMP)  ; LAB_005170d3
    XOR EAX,EAX                         ; 00517213
        ;   Label: LAB_00517213
    JMP 0x005170e3                      ; 00517215
        ;   XREF to: 005170e3 (UNCONDITIONAL_JUMP)  ; LAB_005170e3
    INC EDX                             ; 0051721a
        ;   Label: LAB_0051721a
    ADD EAX,0x50                        ; 0051721b
    CMP EDX,EBX                         ; 0051721e
    JL 0x00517118                       ; 00517220
        ;   XREF to: 00517118 (CONDITIONAL_JUMP)  ; LAB_00517118
    XOR EAX,EAX                         ; 00517226
        ;   Label: LAB_00517226
    JMP 0x00517128                      ; 00517228
        ;   XREF to: 00517128 (UNCONDITIONAL_JUMP)  ; LAB_00517128
    INC EDX                             ; 0051722d
        ;   Label: LAB_0051722d
    ADD EAX,0x50                        ; 0051722e
    CMP EDX,EBX                         ; 00517231
    JL 0x00517155                       ; 00517233
        ;   XREF to: 00517155 (CONDITIONAL_JUMP)  ; LAB_00517155
    XOR EAX,EAX                         ; 00517239
        ;   Label: LAB_00517239
    JMP 0x00517165                      ; 0051723b
        ;   XREF to: 00517165 (UNCONDITIONAL_JUMP)  ; LAB_00517165

