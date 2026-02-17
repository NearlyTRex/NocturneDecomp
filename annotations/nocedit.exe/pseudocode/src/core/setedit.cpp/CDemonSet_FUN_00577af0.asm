; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_setedit_cpp_CDemonSet_FUN_00577af0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053956e
;   core_setedit.cpp_CDemonSet_FUN_0057ae50 at 0057b0aa
;   core_setedit.cpp_CDemonSet_FUN_0057e7c0 at 0057ea20
;   core_setedit.cpp_CDemonSet_FUN_00580730 at 00580a39
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   WatcomStaticDestructorNode WatcomStaticDestructorNode_006816b0
;   int g_MouseX
;   int g_MouseY
;   _BIT_INTEGER32 g_MouseButtonFlags
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   uchar[32768] g_ColorCubeLookup
;   int g_ActiveRenderColor
;   CEdScrollBar CEdScrollBar_03364ce0
;   undefined4 CEdScrollBar_03364ce0.current_value
;   undefined4 CEdScrollBar_03364ce0.max_value
;   undefined1 DAT_03364d14
;   ... and 3 more
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005ff060
;   engine_2d.c_drawRect_FUN_00403120
;   engine_2d.c_drawTextXY_FUN_00402130
;   engine_font.cpp_packPixelNative_FUN_004d1170
;   engine_font.cpp_packPixelScaled_FUN_004d1110
;   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
;   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
;   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577af0
        ;   Label: core_setedit.cpp_CDemonSet_FUN_00577af0
    PUSH ESI                            ; 00577af1
    PUSH EDI                            ; 00577af2
    PUSH EBP                            ; 00577af3
    SUB ESP,0x90                        ; 00577af4
    MOV EDX,0xffffffff                  ; 00577afa
    MOV ECX,dword ptr [0x00679398]      ; 00577aff | g_WindowHeight
    MOV dword ptr [ESP + 0x4],EDX       ; 00577b05
    CMP ECX,0x1e0                       ; 00577b09
    JL 0x00577cef                       ; 00577b0f
        ;   XREF to: 00577cef (CONDITIONAL_JUMP)  ; LAB_00577cef
    MOV EBX,0x4                         ; 00577b15
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00577b1a
    XOR ECX,ECX                         ; 00577b21
    XOR EDX,EDX                         ; 00577b23
    MOV dword ptr [ESP + 0xc],EBX       ; 00577b25
    MOV ESI,dword ptr [EAX]             ; 00577b29
    XOR EBX,EBX                         ; 00577b2b
    TEST ESI,ESI                        ; 00577b2d
    JLE 0x00577b52                      ; 00577b2f
        ;   XREF to: 00577b52 (CONDITIONAL_JUMP)  ; LAB_00577b52
    CMP dword ptr [EAX + 0x144],0x0     ; 00577b31
        ;   Label: LAB_00577b31
    JZ 0x00577cfc                       ; 00577b38
        ;   XREF to: 00577cfc (CONDITIONAL_JUMP)  ; LAB_00577cfc
    INC ECX                             ; 00577b3e
    MOV ESI,dword ptr [ESP + 0xa4]      ; 00577b3f
        ;   Label: LAB_00577b3f
    INC EDX                             ; 00577b46
    MOV EDI,dword ptr [ESI]             ; 00577b47
    ADD EAX,0x1a4                       ; 00577b49
    CMP EDX,EDI                         ; 00577b4e
    JL 0x00577b31                       ; 00577b50
        ;   XREF to: 00577b31 (CONDITIONAL_JUMP)  ; LAB_00577b31
    MOV EDX,dword ptr [ESP + 0xc]       ; 00577b52
        ;   Label: LAB_00577b52
    ADD EDX,ECX                         ; 00577b56
    DEC EDX                             ; 00577b58
    MOV EBP,dword ptr [ESP + 0xc]       ; 00577b59
    MOV EAX,EDX                         ; 00577b5d
    SAR EDX,0x1f                        ; 00577b5f
    IDIV EBP                            ; 00577b62
    LEA EDX,[EBX + EBP*0x1]             ; 00577b64
    LEA ECX,[EAX*0x4 + 0x0]             ; 00577b67
    DEC EDX                             ; 00577b6e
    MOV EAX,EDX                         ; 00577b6f
    SAR EDX,0x1f                        ; 00577b71
    IDIV EBP                            ; 00577b74
    LEA EBX,[EAX + ECX*0x1]             ; 00577b76
    MOV AH,byte ptr [0x03364d14]        ; 00577b79 | DAT_03364d14
    TEST AH,0x1                         ; 00577b7f
    JZ 0x00577d02                       ; 00577b82
        ;   XREF to: 00577d02 (CONDITIONAL_JUMP)  ; LAB_00577d02
    MOV EAX,[0x00679398]                ; 00577b88 | g_WindowHeight
        ;   Label: LAB_00577b88
    DEC EAX                             ; 00577b8d
    PUSH EAX                            ; 00577b8e
    MOV EAX,[0x00679394]                ; 00577b8f | g_WindowWidth
    DEC EAX                             ; 00577b94
    PUSH EAX                            ; 00577b95
    MOV EAX,[0x00679398]                ; 00577b96 | g_WindowHeight
    SUB EAX,0xa                         ; 00577b9b
    PUSH EAX                            ; 00577b9e
    PUSH 0x0                            ; 00577b9f
    PUSH 0x3364ce0                      ; 00577ba1 | CEdScrollBar_03364ce0
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60 ; 00577ba6
        ;   XREF to: 004a5b60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    MOV EDX,dword ptr [0x00679394]      ; 00577bab | g_WindowWidth
    MOV EAX,EDX                         ; 00577bb1
    SAR EDX,0x1f                        ; 00577bb3
    SHL EDX,0x6                         ; 00577bb6
    SBB EAX,EDX                         ; 00577bb9
    SAR EAX,0x6                         ; 00577bbb
    ADD ESP,0x14                        ; 00577bbe
    PUSH 0x3364ce0                      ; 00577bc1 | CEdScrollBar_03364ce0
    MOV dword ptr [0x03364ce4],EBX      ; 00577bc6 | CEdScrollBar_03364ce0.current_value
    MOV [0x03364ce8],EAX                ; 00577bcc | CEdScrollBar_03364ce0.max_value
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 00577bd1
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00577bd6
    PUSH 0x3364ce0                      ; 00577bd9 | CEdScrollBar_03364ce0
    CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 ; 00577bde
        ;   XREF to: 004a5c10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00577be3
    XOR ESI,ESI                         ; 00577be6
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00577be8
    MOV dword ptr [ESP + 0x24],ESI      ; 00577bef
    MOV dword ptr [ESP + 0x34],ESI      ; 00577bf3
    ADD EAX,0x4                         ; 00577bf7
    MOV dword ptr [ESP + 0x10],ESI      ; 00577bfa
    MOV dword ptr [ESP],EAX             ; 00577bfe
    XOR EDI,EDI                         ; 00577c01
        ;   Label: LAB_00577c01
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00577c03
    MOV dword ptr [ESP + 0x30],EDI      ; 00577c0a
    MOV EDX,dword ptr [EAX]             ; 00577c0e
    MOV dword ptr [ESP + 0x20],EDI      ; 00577c10
    TEST EDX,EDX                        ; 00577c14
    JLE 0x00577ca3                      ; 00577c16
        ;   XREF to: 00577ca3 (CONDITIONAL_JUMP)  ; LAB_00577ca3
    MOV dword ptr [ESP + 0x18],EAX      ; 00577c1c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00577c20
    MOV dword ptr [ESP + 0x14],EAX      ; 00577c27
    MOV EAX,dword ptr [ESP]             ; 00577c2b
    MOV dword ptr [ESP + 0x1c],EAX      ; 00577c2e
    MOV EAX,dword ptr [ESP + 0x18]      ; 00577c32
        ;   Label: LAB_00577c32
    CMP dword ptr [EAX + 0x144],0x0     ; 00577c36
    JZ 0x00577d2c                       ; 00577c3d
        ;   XREF to: 00577d2c (CONDITIONAL_JUMP)  ; LAB_00577d2c
    MOV EBP,0x4                         ; 00577c43
    MOV EAX,dword ptr [ESP + 0x10]      ; 00577c48
    MOV dword ptr [ESP + 0x38],EBP      ; 00577c4c
    TEST EAX,EAX                        ; 00577c50
    JNZ 0x00577d41                      ; 00577c52
        ;   XREF to: 00577d41 (CONDITIONAL_JUMP)  ; LAB_00577d41
    MOV ECX,dword ptr [ESP + 0x18]      ; 00577c58
        ;   Label: LAB_00577c58
    MOV EBX,dword ptr [ESP + 0x14]      ; 00577c5c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00577c60
    MOV EDI,dword ptr [ESP + 0x30]      ; 00577c64
    MOV EAX,dword ptr [ESP + 0x38]      ; 00577c68
    MOV EBP,dword ptr [ESP + 0x20]      ; 00577c6c
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00577c70
    ADD ECX,0x1a4                       ; 00577c77
    ADD EBX,0x4                         ; 00577c7d
    ADD ESI,0x1a4                       ; 00577c80
    INC EDI                             ; 00577c86
    ADD EBP,EAX                         ; 00577c87
    MOV dword ptr [ESP + 0x18],ECX      ; 00577c89
    MOV dword ptr [ESP + 0x14],EBX      ; 00577c8d
    MOV dword ptr [ESP + 0x1c],ESI      ; 00577c91
    MOV dword ptr [ESP + 0x30],EDI      ; 00577c95
    MOV ECX,dword ptr [EDX]             ; 00577c99
    MOV dword ptr [ESP + 0x20],EBP      ; 00577c9b
    CMP EDI,ECX                         ; 00577c9f
    JL 0x00577c32                       ; 00577ca1
        ;   XREF to: 00577c32 (CONDITIONAL_JUMP)  ; LAB_00577c32
    CMP dword ptr [ESP + 0x34],0x0      ; 00577ca3
        ;   Label: LAB_00577ca3
    JLE 0x00577cb9                      ; 00577ca8
        ;   XREF to: 00577cb9 (CONDITIONAL_JUMP)  ; LAB_00577cb9
    MOV EDI,dword ptr [ESP + 0x24]      ; 00577caa
    XOR ESI,ESI                         ; 00577cae
    INC EDI                             ; 00577cb0
    MOV dword ptr [ESP + 0x34],ESI      ; 00577cb1
    MOV dword ptr [ESP + 0x24],EDI      ; 00577cb5
    MOV EBP,dword ptr [ESP + 0x10]      ; 00577cb9
        ;   Label: LAB_00577cb9
    INC EBP                             ; 00577cbd
    MOV dword ptr [ESP + 0x10],EBP      ; 00577cbe
    CMP EBP,0x2                         ; 00577cc2
    JL 0x00577c01                       ; 00577cc5
        ;   XREF to: 00577c01 (CONDITIONAL_JUMP)  ; LAB_00577c01
    CMP dword ptr [ESP + 0x4],0x0       ; 00577ccb
    JL 0x00578182                       ; 00577cd0
        ;   XREF to: 00578182 (CONDITIONAL_JUMP)  ; LAB_00578182
    TEST byte ptr [0x02cf6a94],0x1      ; 00577cd6 | g_MouseButtonFlags
    JZ 0x00578182                       ; 00577cdd
        ;   XREF to: 00578182 (CONDITIONAL_JUMP)  ; LAB_00578182
    XOR ECX,ECX                         ; 00577ce3
    MOV EDX,dword ptr [ESP + 0x4]       ; 00577ce5
    MOV dword ptr [0x02cf6a94],ECX      ; 00577ce9 | g_MouseButtonFlags
    MOV EAX,EDX                         ; 00577cef
        ;   Label: LAB_00577cef
    ADD ESP,0x90                        ; 00577cf1
    POP EBP                             ; 00577cf7
    POP EDI                             ; 00577cf8
    POP ESI                             ; 00577cf9
    POP EBX                             ; 00577cfa
    RET                                 ; 00577cfb
    INC EBX                             ; 00577cfc
        ;   Label: LAB_00577cfc
    JMP 0x00577b3f                      ; 00577cfd
        ;   XREF to: 00577b3f (UNCONDITIONAL_JUMP)  ; LAB_00577b3f
    MOV DL,AH                           ; 00577d02
        ;   Label: LAB_00577d02
    OR DL,0x1                           ; 00577d04
    PUSH 0x3364ce0                      ; 00577d07 | CEdScrollBar_03364ce0
    MOV byte ptr [0x03364d14],DL        ; 00577d0c | DAT_03364d14
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0 ; 00577d12
        ;   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00577d17
    PUSH 0x6816b0                       ; 00577d1a | WatcomStaticDestructorNode_006816b0
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 00577d1f
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00577d24
    JMP 0x00577b88                      ; 00577d27
        ;   XREF to: 00577b88 (UNCONDITIONAL_JUMP)  ; LAB_00577b88
    MOV ESI,0x1                         ; 00577d2c
        ;   Label: LAB_00577d2c
    MOV EDI,dword ptr [ESP + 0x10]      ; 00577d31
    MOV dword ptr [ESP + 0x38],ESI      ; 00577d35
    CMP EDI,ESI                         ; 00577d39
    JZ 0x00577c58                       ; 00577d3b
        ;   XREF to: 00577c58 (CONDITIONAL_JUMP)  ; LAB_00577c58
    MOV EAX,dword ptr [ESP + 0x24]      ; 00577d41
        ;   Label: LAB_00577d41
    SUB EAX,dword ptr [0x03364ce0]      ; 00577d45 | CEdScrollBar_03364ce0
    MOV ECX,dword ptr [ESP + 0x38]      ; 00577d4b
    MOV dword ptr [ESP + 0x3c],EAX      ; 00577d4f
    ADD EAX,ECX                         ; 00577d53
    TEST EAX,EAX                        ; 00577d55
    JLE 0x00577d73                      ; 00577d57
        ;   XREF to: 00577d73 (CONDITIONAL_JUMP)  ; LAB_00577d73
    MOV EAX,[0x00679394]                ; 00577d59 | g_WindowWidth
    MOV EDX,EAX                         ; 00577d5e
    SAR EDX,0x1f                        ; 00577d60
    SHL EDX,0x6                         ; 00577d63
    SBB EAX,EDX                         ; 00577d66
    SAR EAX,0x6                         ; 00577d68
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00577d6b
    CMP EAX,EBX                         ; 00577d6f
    JG 0x00577da1                       ; 00577d71
        ;   XREF to: 00577da1 (CONDITIONAL_JUMP)  ; LAB_00577da1
    MOV ECX,dword ptr [ESP + 0x34]      ; 00577d73
        ;   Label: LAB_00577d73
    INC ECX                             ; 00577d77
    MOV EBX,dword ptr [ESP + 0xc]       ; 00577d78
    MOV dword ptr [ESP + 0x34],ECX      ; 00577d7c
    CMP ECX,EBX                         ; 00577d80
    JL 0x00577c58                       ; 00577d82
        ;   XREF to: 00577c58 (CONDITIONAL_JUMP)  ; LAB_00577c58
    MOV EAX,dword ptr [ESP + 0x38]      ; 00577d88
    MOV EDI,dword ptr [ESP + 0x24]      ; 00577d8c
    XOR ESI,ESI                         ; 00577d90
    ADD EDI,EAX                         ; 00577d92
    MOV dword ptr [ESP + 0x34],ESI      ; 00577d94
    MOV dword ptr [ESP + 0x24],EDI      ; 00577d98
    JMP 0x00577c58                      ; 00577d9c
        ;   XREF to: 00577c58 (UNCONDITIONAL_JUMP)  ; LAB_00577c58
    MOV EAX,dword ptr [ESP + 0xc]       ; 00577da1
        ;   Label: LAB_00577da1
    SUB EAX,dword ptr [ESP + 0x34]      ; 00577da5
    IMUL EAX,EAX,0x30                   ; 00577da9
    MOV EDX,dword ptr [0x00679398]      ; 00577dac | g_WindowHeight
    MOV ESI,EBX                         ; 00577db2
    XOR EBP,EBP                         ; 00577db4
    SHL ESI,0x6                         ; 00577db6
    SUB EDX,0xa                         ; 00577db9
    MOV dword ptr [0x02d02570],EBP      ; 00577dbc | g_ActiveRenderColor
    MOV dword ptr [ESP + 0x3c],ESI      ; 00577dc2
    SUB EDX,EAX                         ; 00577dc6
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00577dc8
    MOV dword ptr [ESP + 0x28],EDX      ; 00577dcf
    TEST EAX,EAX                        ; 00577dd3
    JZ 0x00577dea                       ; 00577dd5
        ;   XREF to: 00577dea (CONDITIONAL_JUMP)  ; LAB_00577dea
    MOV EAX,dword ptr [ESP + 0x14]      ; 00577dd7
    CMP dword ptr [EAX],0x0             ; 00577ddb
    JZ 0x00577dea                       ; 00577dde
        ;   XREF to: 00577dea (CONDITIONAL_JUMP)  ; LAB_00577dea
    MOV dword ptr [0x02d02570],0x2      ; 00577de0 | g_ActiveRenderColor
    MOV EDX,dword ptr [ESP + 0xa4]      ; 00577dea
        ;   Label: LAB_00577dea
    MOV EAX,dword ptr [ESP + 0x30]      ; 00577df1
    CMP EAX,dword ptr [EDX + 0x15aea4]  ; 00577df5
    JNZ 0x00577e07                      ; 00577dfb
        ;   XREF to: 00577e07 (CONDITIONAL_JUMP)  ; LAB_00577e07
    MOV dword ptr [0x02d02570],0x1      ; 00577dfd | g_ActiveRenderColor
    MOV EAX,dword ptr [ESP + 0x38]      ; 00577e07
        ;   Label: LAB_00577e07
    MOV dword ptr [ESP + 0x8],EAX       ; 00577e0b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00577e0f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00577e13
    MOV EAX,dword ptr [ESP + 0x28]      ; 00577e17
    MOV dword ptr [ESP + 0x48],EAX      ; 00577e1b
    ADD EAX,0x30                        ; 00577e1f
    MOV dword ptr [ESP + 0x44],EAX      ; 00577e22
    MOV EAX,dword ptr [ESP + 0x20]      ; 00577e26
    MOV dword ptr [ESP + 0x4c],EAX      ; 00577e2a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00577e2e
    MOV dword ptr [ESP + 0x50],EAX      ; 00577e32
    MOV EAX,dword ptr [ESP + 0x38]      ; 00577e36
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00577e3a
    SHL EAX,0x6                         ; 00577e3e
    ADD EDX,EAX                         ; 00577e41
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00577e43
    MOV dword ptr [ESP + 0x40],EDX      ; 00577e47
    CMP EAX,EDX                         ; 00577e4b
    JGE 0x00577e8b                      ; 00577e4d
        ;   XREF to: 00577e8b (CONDITIONAL_JUMP)  ; LAB_00577e8b
    MOV EBP,dword ptr [ESP + 0x50]      ; 00577e4f
        ;   Label: LAB_00577e4f
    TEST EBP,EBP                        ; 00577e53
    JL 0x00577e6f                       ; 00577e55
        ;   XREF to: 00577e6f (CONDITIONAL_JUMP)  ; LAB_00577e6f
    CMP dword ptr [ESP + 0x48],0x0      ; 00577e57
    JL 0x00577e6f                       ; 00577e5c
        ;   XREF to: 00577e6f (CONDITIONAL_JUMP)  ; LAB_00577e6f
    MOV EDX,dword ptr [0x00679394]      ; 00577e5e | g_WindowWidth
    LEA EAX,[EBP + 0x40]                ; 00577e64
    CMP EAX,EDX                         ; 00577e67
    JLE 0x00577f0c                      ; 00577e69
        ;   XREF to: 00577f0c (CONDITIONAL_JUMP)  ; LAB_00577f0c
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00577e6f
        ;   Label: LAB_00577e6f
    MOV EAX,dword ptr [ESP + 0x50]      ; 00577e73
    MOV EDX,dword ptr [ESP + 0x40]      ; 00577e77
    INC EBP                             ; 00577e7b
    ADD EAX,0x40                        ; 00577e7c
    MOV dword ptr [ESP + 0x4c],EBP      ; 00577e7f
    MOV dword ptr [ESP + 0x50],EAX      ; 00577e83
    CMP EAX,EDX                         ; 00577e87
    JL 0x00577e4f                       ; 00577e89
        ;   XREF to: 00577e4f (CONDITIONAL_JUMP)  ; LAB_00577e4f
    MOV EBX,dword ptr [ESP + 0x8]       ; 00577e8b
        ;   Label: LAB_00577e8b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 00577e8f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00577e93
    SHL EBX,0x6                         ; 00577e97
    ADD EAX,0x2f                        ; 00577e9a
    ADD EBX,ECX                         ; 00577e9d
    PUSH EAX                            ; 00577e9f
    LEA EAX,[EBX + -0x1]                ; 00577ea0
    PUSH EAX                            ; 00577ea3
    MOV ESI,dword ptr [ESP + 0x50]      ; 00577ea4
    PUSH ESI                            ; 00577ea8
    MOV EDI,ECX                         ; 00577ea9
    PUSH ECX                            ; 00577eab
    MOV EBP,EDI                         ; 00577eac
    CALL engine_2d.c_drawRect_FUN_00403120 ; 00577eae
        ;   XREF to: 00403120 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawRect_FUN_00403120(int x1, int y1, int x2, int y2)
    MOV EAX,[0x02cf6a8c]                ; 00577eb3 | g_MouseX
    ADD ESP,0x10                        ; 00577eb8
    CMP EAX,EBP                         ; 00577ebb
    JL 0x00577d73                       ; 00577ebd
        ;   XREF to: 00577d73 (CONDITIONAL_JUMP)  ; LAB_00577d73
    CMP EBX,EAX                         ; 00577ec3
    JLE 0x00577d73                      ; 00577ec5
        ;   XREF to: 00577d73 (CONDITIONAL_JUMP)  ; LAB_00577d73
    MOV EAX,[0x02cf6a90]                ; 00577ecb | g_MouseY
    CMP EAX,ESI                         ; 00577ed0
    JL 0x00577d73                       ; 00577ed2
        ;   XREF to: 00577d73 (CONDITIONAL_JUMP)  ; LAB_00577d73
    CMP EAX,dword ptr [ESP + 0x44]      ; 00577ed8
    JGE 0x00577d73                      ; 00577edc
        ;   XREF to: 00577d73 (CONDITIONAL_JUMP)  ; LAB_00577d73
    MOV EAX,dword ptr [ESP + 0x30]      ; 00577ee2
    MOV dword ptr [ESP + 0x4],EAX       ; 00577ee6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00577eea
    TEST EAX,EAX                        ; 00577eee
    JGE 0x00577ef4                      ; 00577ef0
        ;   XREF to: 00577ef4 (CONDITIONAL_JUMP)  ; LAB_00577ef4
    XOR EAX,EAX                         ; 00577ef2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00577ef4
        ;   Label: LAB_00577ef4
    PUSH ESI                            ; 00577ef8
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00577ef9
    PUSH EDI                            ; 00577efd
    PUSH EAX                            ; 00577efe
    CALL engine_2d.c_drawTextXY_FUN_00402130 ; 00577eff
        ;   XREF to: 00402130 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawTextXY_FUN_00402130(int x, int y, char * text)
    ADD ESP,0xc                         ; 00577f04
    JMP 0x00577d73                      ; 00577f07
        ;   XREF to: 00577d73 (UNCONDITIONAL_JUMP)  ; LAB_00577d73
    MOV EAX,dword ptr [ESP + 0x44]      ; 00577f0c
        ;   Label: LAB_00577f0c
    CMP EAX,dword ptr [0x00679398]      ; 00577f10 | g_WindowHeight
    JG 0x00577e6f                       ; 00577f16
        ;   XREF to: 00577e6f (CONDITIONAL_JUMP)  ; LAB_00577e6f
    IMUL EAX,dword ptr [ESP + 0x4c],0x3000 ; 00577f1c
    MOV EDX,dword ptr [ESP + 0x48]      ; 00577f24
    MOV ESI,dword ptr [0x0067939c]      ; 00577f28 | g_BitsPerPixel
    LEA EBX,[EAX + 0x3000]              ; 00577f2e
    SHL EDX,0x2                         ; 00577f34
    LEA ECX,[EAX + 0x100]               ; 00577f37
    CMP ESI,0x8                         ; 00577f3d
    JNZ 0x0057800d                      ; 00577f40
        ;   XREF to: 0057800d (CONDITIONAL_JUMP)  ; LAB_0057800d
    MOV dword ptr [ESP + 0x6c],ECX      ; 00577f46
    MOV dword ptr [ESP + 0x80],EDX      ; 00577f4a
    MOV dword ptr [ESP + 0x88],EAX      ; 00577f51
    MOV dword ptr [ESP + 0x54],EBX      ; 00577f58
    MOV dword ptr [ESP + 0x60],EBP      ; 00577f5c
    MOV EDX,dword ptr [ESP + 0x80]      ; 00577f60
        ;   Label: LAB_00577f60
    MOV ESI,dword ptr [ESP + 0x60]      ; 00577f67
    MOV EDX,dword ptr [EDX + 0x2cf6a9c] ; 00577f6b | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EBX,dword ptr [ESP + 0x88]      ; 00577f71
    ADD EDX,ESI                         ; 00577f78
    MOV EBP,dword ptr [ESP + 0x6c]      ; 00577f7a
    INC EDX                             ; 00577f7e
    MOV EAX,dword ptr [EBX + 0x3365cc0] ; 00577f7f | DAT_03365cc0 | DAT_03365cc4 | DAT_03365dc0
        ;   Label: LAB_00577f7f
    MOV EDI,EAX                         ; 00577f85
    MOV ESI,EAX                         ; 00577f87
    MOV ECX,EAX                         ; 00577f89
    AND EDI,0xff                        ; 00577f8b
    SHR ESI,0x8                         ; 00577f91
    SHR ECX,0x10                        ; 00577f94
    MOV EAX,EDI                         ; 00577f97
    AND ESI,0xff                        ; 00577f99
    SHR EAX,0x3                         ; 00577f9f
    SHR ESI,0x3                         ; 00577fa2
    SHL EAX,0xa                         ; 00577fa5
    SHL ESI,0x5                         ; 00577fa8
    AND ECX,0xff                        ; 00577fab
    ADD EAX,ESI                         ; 00577fb1
    MOV ESI,ECX                         ; 00577fb3
    SHR ESI,0x3                         ; 00577fb5
    INC EDX                             ; 00577fb8
    MOV AL,byte ptr [ESI + EAX*0x1 + 0x2cf9020] ; 00577fb9 | g_ColorCubeLookup
    ADD EBX,0x4                         ; 00577fc0
    MOV byte ptr [EDX + -0x1],AL        ; 00577fc3
    CMP EBX,EBP                         ; 00577fc6
    JNZ 0x00577f7f                      ; 00577fc8
        ;   XREF to: 00577f7f (CONDITIONAL_JUMP)  ; LAB_00577f7f
    MOV EBP,dword ptr [ESP + 0x80]      ; 00577fca
    MOV EAX,dword ptr [ESP + 0x88]      ; 00577fd1
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00577fd8
    MOV EDX,dword ptr [ESP + 0x54]      ; 00577fdc
    ADD EBP,0x4                         ; 00577fe0
    ADD EAX,0x100                       ; 00577fe3
    ADD EDI,0x100                       ; 00577fe8
    MOV dword ptr [ESP + 0x80],EBP      ; 00577fee
    MOV dword ptr [ESP + 0x88],EAX      ; 00577ff5
    MOV dword ptr [ESP + 0x6c],EDI      ; 00577ffc
    CMP EAX,EDX                         ; 00578000
    JZ 0x00577e6f                       ; 00578002
        ;   XREF to: 00577e6f (CONDITIONAL_JUMP)  ; LAB_00577e6f
    JMP 0x00577f60                      ; 00578008
        ;   XREF to: 00577f60 (UNCONDITIONAL_JUMP)  ; LAB_00577f60
    CMP ESI,0x10                        ; 0057800d
        ;   Label: LAB_0057800d
    JNZ 0x005780c6                      ; 00578010
        ;   XREF to: 005780c6 (CONDITIONAL_JUMP)  ; LAB_005780c6
    MOV dword ptr [ESP + 0x78],ECX      ; 00578016
    MOV dword ptr [ESP + 0x74],EDX      ; 0057801a
    LEA ESI,[EBP + EBP*0x1]             ; 0057801e
    MOV dword ptr [ESP + 0x8c],EAX      ; 00578022
    MOV dword ptr [ESP + 0x58],ESI      ; 00578029
    MOV dword ptr [ESP + 0x64],EBX      ; 0057802d
    MOV EBP,dword ptr [ESP + 0x58]      ; 00578031
    MOV EAX,dword ptr [ESP + 0x74]      ; 00578035
        ;   Label: LAB_00578035
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 00578039 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0057803f
    ADD EAX,EBP                         ; 00578046
    MOV EDI,dword ptr [ESP + 0x78]      ; 00578048
    LEA ESI,[EAX + 0x2]                 ; 0057804c
    MOV EAX,dword ptr [EBX + 0x3365cc0] ; 0057804f | DAT_03365cc0 | DAT_03365cc4 | DAT_03365dc0
        ;   Label: LAB_0057804f
    MOV ECX,EAX                         ; 00578055
    MOV EDX,EAX                         ; 00578057
    SHR EAX,0x10                        ; 00578059
    AND EAX,0xff                        ; 0057805c
    SHR EDX,0x8                         ; 00578061
    PUSH EAX                            ; 00578064
    AND EDX,0xff                        ; 00578065
    PUSH EDX                            ; 0057806b
    AND ECX,0xff                        ; 0057806c
    PUSH ECX                            ; 00578072
    ADD ESI,0x2                         ; 00578073
    ADD EBX,0x4                         ; 00578076
    CALL engine_font.cpp_packPixelScaled_FUN_004d1110 ; 00578079
        ;   XREF to: 004d1110 (UNCONDITIONAL_CALL)  ; uint engine_font.cpp_packPixelScaled_FUN_004d1110(int red, int green, int blue)
    ADD ESP,0xc                         ; 0057807e
    MOV word ptr [ESI + -0x2],AX        ; 00578081
    CMP EBX,EDI                         ; 00578085
    JNZ 0x0057804f                      ; 00578087
        ;   XREF to: 0057804f (CONDITIONAL_JUMP)  ; LAB_0057804f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00578089
    MOV ECX,dword ptr [ESP + 0x8c]      ; 0057808d
    MOV EAX,dword ptr [ESP + 0x78]      ; 00578094
    MOV EBX,dword ptr [ESP + 0x64]      ; 00578098
    ADD EDX,0x4                         ; 0057809c
    ADD ECX,0x100                       ; 0057809f
    ADD EAX,0x100                       ; 005780a5
    MOV dword ptr [ESP + 0x74],EDX      ; 005780aa
    MOV dword ptr [ESP + 0x8c],ECX      ; 005780ae
    MOV dword ptr [ESP + 0x78],EAX      ; 005780b5
    CMP ECX,EBX                         ; 005780b9
    JZ 0x00577e6f                       ; 005780bb
        ;   XREF to: 00577e6f (CONDITIONAL_JUMP)  ; LAB_00577e6f
    JMP 0x00578035                      ; 005780c1
        ;   XREF to: 00578035 (UNCONDITIONAL_JUMP)  ; LAB_00578035
    CMP ESI,0x20                        ; 005780c6
        ;   Label: LAB_005780c6
    JNZ 0x00577e6f                      ; 005780c9
        ;   XREF to: 00577e6f (CONDITIONAL_JUMP)  ; LAB_00577e6f
    LEA ESI,[EBP*0x4 + 0x0]             ; 005780cf
    MOV dword ptr [ESP + 0x70],ECX      ; 005780d6
    MOV dword ptr [ESP + 0x7c],EDX      ; 005780da
    MOV dword ptr [ESP + 0x84],EAX      ; 005780de
    MOV dword ptr [ESP + 0x68],EBX      ; 005780e5
    MOV dword ptr [ESP + 0x5c],ESI      ; 005780e9
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005780ed
        ;   Label: LAB_005780ed
    MOV EDX,dword ptr [ESP + 0x5c]      ; 005780f1
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 005780f5 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    MOV EBX,dword ptr [ESP + 0x84]      ; 005780fb
    ADD EAX,EDX                         ; 00578102
    MOV EDI,dword ptr [ESP + 0x70]      ; 00578104
    LEA ESI,[EAX + 0x4]                 ; 00578108
    MOV EAX,dword ptr [EBX + 0x3365cc0] ; 0057810b | DAT_03365cc0 | DAT_03365cc4 | DAT_03365dc0
        ;   Label: LAB_0057810b
    MOV EDX,EAX                         ; 00578111
    MOV ECX,EAX                         ; 00578113
    SHR EAX,0x10                        ; 00578115
    AND EAX,0xff                        ; 00578118
    SHR ECX,0x8                         ; 0057811d
    PUSH EAX                            ; 00578120
    AND ECX,0xff                        ; 00578121
    PUSH ECX                            ; 00578127
    AND EDX,0xff                        ; 00578128
    PUSH EDX                            ; 0057812e
    ADD ESI,0x4                         ; 0057812f
    ADD EBX,0x4                         ; 00578132
    CALL engine_font.cpp_packPixelNative_FUN_004d1170 ; 00578135
        ;   XREF to: 004d1170 (UNCONDITIONAL_CALL)  ; uint engine_font.cpp_packPixelNative_FUN_004d1170(int red, int green, int blue)
    ADD ESP,0xc                         ; 0057813a
    MOV dword ptr [ESI + -0x4],EAX      ; 0057813d
    CMP EBX,EDI                         ; 00578140
    JNZ 0x0057810b                      ; 00578142
        ;   XREF to: 0057810b (CONDITIONAL_JUMP)  ; LAB_0057810b
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00578144
    MOV ESI,dword ptr [ESP + 0x84]      ; 00578148
    MOV ECX,dword ptr [ESP + 0x70]      ; 0057814f
    MOV EDI,dword ptr [ESP + 0x68]      ; 00578153
    ADD EBX,0x4                         ; 00578157
    ADD ESI,0x100                       ; 0057815a
    ADD ECX,0x100                       ; 00578160
    MOV dword ptr [ESP + 0x7c],EBX      ; 00578166
    MOV dword ptr [ESP + 0x84],ESI      ; 0057816a
    MOV dword ptr [ESP + 0x70],ECX      ; 00578171
    CMP ESI,EDI                         ; 00578175
    JZ 0x00577e6f                       ; 00578177
        ;   XREF to: 00577e6f (CONDITIONAL_JUMP)  ; LAB_00577e6f
    JMP 0x005780ed                      ; 0057817d
        ;   XREF to: 005780ed (UNCONDITIONAL_JUMP)  ; LAB_005780ed
    MOV EDX,0xffffffff                  ; 00578182
        ;   Label: LAB_00578182
    MOV EAX,EDX                         ; 00578187
    ADD ESP,0x90                        ; 00578189
    POP EBP                             ; 0057818f
    POP EDI                             ; 00578190
    POP ESI                             ; 00578191
    POP EBX                             ; 00578192
    RET                                 ; 00578193

