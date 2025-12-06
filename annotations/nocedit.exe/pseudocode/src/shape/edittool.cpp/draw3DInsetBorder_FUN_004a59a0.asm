; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0(int left, int top, int right, int bottom, int inner_y, int style)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   right
; int              Stack[0x10]:4   bottom
; int              Stack[0x14]:4   inner_y
; int              Stack[0x18]:4   style
;
; XREF[1]:
;   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 at 004a5e77
;
; Referenced Globals:
;   int g_InsetColor
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawHLine_FUN_00402ee0
;   engine_2d.c_drawVLine_FUN_00402ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a59a0
        ;   Label: shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
    PUSH ESI                            ; 004a59a1
    PUSH EDI                            ; 004a59a2
    PUSH EBP                            ; 004a59a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a59a4
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a59a8
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a59ac
    MOV EDI,dword ptr [ESP + 0x28]      ; 004a59b0
    MOV EAX,[0x02cf2aec]                ; 004a59b4 | int g_InsetColor
    MOV [0x02d02570],EAX                ; 004a59b9 | int g_ActiveRenderColor
    TEST EDI,EDI                        ; 004a59be
    JNZ 0x004a5a25                      ; 004a59c0 | LAB_004a5a25
        ;   XREF to: 004a5a25 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a59c2
        ;   Label: LAB_004a59c2
    ADD EDX,EBP                         ; 004a59c6
    DEC EDX                             ; 004a59c8
    MOV EAX,EDX                         ; 004a59c9
    SAR EDX,0x1f                        ; 004a59cb
    SUB EAX,EDX                         ; 004a59ce
    SAR EAX,0x1                         ; 004a59d0
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a59d2
    MOV EDX,ECX                         ; 004a59d6
    LEA EBX,[EAX + ESI*0x1]             ; 004a59d8
    SUB EDX,EBP                         ; 004a59db
    MOV EBP,0x3                         ; 004a59dd
    MOV EAX,EDX                         ; 004a59e2
    SAR EDX,0x1f                        ; 004a59e4
    IDIV EBP                            ; 004a59e7
    LEA EBP,[EBX + EAX*0x1]             ; 004a59e9
    TEST EDI,EDI                        ; 004a59ec
    JNZ 0x004a5a7c                      ; 004a59ee | LAB_004a5a7c
        ;   XREF to: 004a5a7c (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a59f4
    ADD EDX,EAX                         ; 004a59f8
    INC EDX                             ; 004a59fa
    ADD ESI,EDX                         ; 004a59fb
    TEST EAX,EAX                        ; 004a59fd
    JLE 0x004a5a20                      ; 004a59ff | LAB_004a5a20
        ;   XREF to: 004a5a20 (CONDITIONAL_JUMP)
    MOV EDI,EBX                         ; 004a5a01
    PUSH EBX                            ; 004a5a03
        ;   Label: LAB_004a5a03
    PUSH ESI                            ; 004a5a04
    PUSH EDI                            ; 004a5a05
    INC EBX                             ; 004a5a06
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a5a07 | void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
    INC ESI                             ; 004a5a0c
    ADD ESP,0xc                         ; 004a5a0d
    DEC EDI                             ; 004a5a10
    CMP EBX,EBP                         ; 004a5a11
    JL 0x004a5a03                       ; 004a5a13 | LAB_004a5a03
        ;   XREF to: 004a5a03 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004a5a15
    LEA EDX,[EDX]                       ; 004a5a1b
    MOV EBX,EBX                         ; 004a5a1e
    POP EBP                             ; 004a5a20
        ;   Label: LAB_004a5a20
    POP EDI                             ; 004a5a21
    POP ESI                             ; 004a5a22
    POP EBX                             ; 004a5a23
    RET                                 ; 004a5a24
    CMP EDI,0x1                         ; 004a5a25
        ;   Label: LAB_004a5a25
    JZ 0x004a59c2                       ; 004a5a28 | LAB_004a59c2
        ;   XREF to: 004a59c2 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a5a2a
    ADD EDX,ECX                         ; 004a5a2e
    DEC EDX                             ; 004a5a30
    MOV EAX,EDX                         ; 004a5a31
    SAR EDX,0x1f                        ; 004a5a33
    SUB EAX,EDX                         ; 004a5a36
    SAR EAX,0x1                         ; 004a5a38
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004a5a3a
    LEA EBX,[EAX + ESI*0x1]             ; 004a5a3e
    SUB EDX,EBP                         ; 004a5a41
    MOV ECX,0x3                         ; 004a5a43
    MOV EAX,EDX                         ; 004a5a48
    SAR EDX,0x1f                        ; 004a5a4a
    IDIV ECX                            ; 004a5a4d
    LEA EDX,[EBX + EAX*0x1]             ; 004a5a4f
    CMP EDI,0x2                         ; 004a5a52
    JNZ 0x004a5aa3                      ; 004a5a55 | LAB_004a5aa3
        ;   XREF to: 004a5aa3 (CONDITIONAL_JUMP)
    ADD EBP,EAX                         ; 004a5a57
    INC EBP                             ; 004a5a59
    LEA EDI,[ESI + EBP*0x1]             ; 004a5a5a
    TEST EAX,EAX                        ; 004a5a5d
    JLE 0x004a5a20                      ; 004a5a5f | LAB_004a5a20
        ;   XREF to: 004a5a20 (CONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 004a5a61
    MOV EBP,EDX                         ; 004a5a63
    PUSH EBX                            ; 004a5a65
        ;   Label: LAB_004a5a65
    PUSH ESI                            ; 004a5a66
    PUSH EDI                            ; 004a5a67
    INC EBX                             ; 004a5a68
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 004a5a69 | void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
    DEC ESI                             ; 004a5a6e
    ADD ESP,0xc                         ; 004a5a6f
    INC EDI                             ; 004a5a72
    CMP EBX,EBP                         ; 004a5a73
    JL 0x004a5a65                       ; 004a5a75 | LAB_004a5a65
        ;   XREF to: 004a5a65 (CONDITIONAL_JUMP)
    POP EBP                             ; 004a5a77
    POP EDI                             ; 004a5a78
    POP ESI                             ; 004a5a79
    POP EBX                             ; 004a5a7a
    RET                                 ; 004a5a7b
    MOV EDX,ECX                         ; 004a5a7c
        ;   Label: LAB_004a5a7c
    SUB EDX,EAX                         ; 004a5a7e
    SUB EDX,0x2                         ; 004a5a80
    LEA EDI,[EDX + ESI*0x1]             ; 004a5a83
    TEST EAX,EAX                        ; 004a5a86
    JLE 0x004a5a20                      ; 004a5a88 | LAB_004a5a20
        ;   XREF to: 004a5a20 (CONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 004a5a8a
    PUSH EBX                            ; 004a5a8c
        ;   Label: LAB_004a5a8c
    PUSH EDI                            ; 004a5a8d
    PUSH ESI                            ; 004a5a8e
    INC EBX                             ; 004a5a8f
    CALL engine_2d.c_drawHLine_FUN_00402ee0 ; 004a5a90 | void engine_2d.c_drawHLine_FUN_00402ee0(int x1, int y, int x2)
        ;   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
    DEC EDI                             ; 004a5a95
    ADD ESP,0xc                         ; 004a5a96
    DEC ESI                             ; 004a5a99
    CMP EBX,EBP                         ; 004a5a9a
    JL 0x004a5a8c                       ; 004a5a9c | LAB_004a5a8c
        ;   XREF to: 004a5a8c (CONDITIONAL_JUMP)
    POP EBP                             ; 004a5a9e
    POP EDI                             ; 004a5a9f
    POP ESI                             ; 004a5aa0
    POP EBX                             ; 004a5aa1
    RET                                 ; 004a5aa2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004a5aa3
        ;   Label: LAB_004a5aa3
    SUB ECX,EAX                         ; 004a5aa7
    SUB ECX,0x2                         ; 004a5aa9
    LEA EDI,[ECX + ESI*0x1]             ; 004a5aac
    TEST EAX,EAX                        ; 004a5aaf
    JLE 0x004a5a20                      ; 004a5ab1 | LAB_004a5a20
        ;   XREF to: 004a5a20 (CONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 004a5ab7
    MOV EBP,EDX                         ; 004a5ab9
    PUSH EBX                            ; 004a5abb
        ;   Label: LAB_004a5abb
    PUSH ESI                            ; 004a5abc
    PUSH EDI                            ; 004a5abd
    INC EBX                             ; 004a5abe
    CALL engine_2d.c_drawVLine_FUN_00402ff0 ; 004a5abf | void engine_2d.c_drawVLine_FUN_00402ff0(int x, int y1, int y2)
        ;   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
    DEC ESI                             ; 004a5ac4
    ADD ESP,0xc                         ; 004a5ac5
    DEC EDI                             ; 004a5ac8
    CMP EBX,EBP                         ; 004a5ac9
    JL 0x004a5abb                       ; 004a5acb | LAB_004a5abb
        ;   XREF to: 004a5abb (CONDITIONAL_JUMP)
    POP EBP                             ; 004a5acd
    POP EDI                             ; 004a5ace
    POP ESI                             ; 004a5acf
    POP EBX                             ; 004a5ad0
    RET                                 ; 004a5ad1

