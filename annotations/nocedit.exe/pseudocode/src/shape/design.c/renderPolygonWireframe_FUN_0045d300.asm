; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_renderPolygonWireframe_FUN_0045d300(SMRGLHeaderPrimitive *polygon_data)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   polygon_data
; Local Variables:
; SRenderVertex    Stack[-0xa8]:48  local_a8
; SRenderVertex    Stack[-0x78]:48  local_78
; SRenderVertex    Stack[-0x48]:48  local_48
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_design.c_renderSinglePolygonWithColorOverlay_FUN_0045d1d0 at 0045d2db
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_3d.c_setActiveRenderColor_FUN_00404540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d300
        ;   Label: shape_design.c_renderPolygonWireframe_FUN_0045d300
    PUSH ESI                            ; 0045d301
    PUSH EDI                            ; 0045d302
    PUSH EBP                            ; 0045d303
    MOV EBP,ESP                         ; 0045d304
    SUB ESP,0x98                        ; 0045d306
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d30c
    ADD EAX,0x18                        ; 0045d30f
    MOV dword ptr [EBP + -0x4],EAX      ; 0045d312
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d315
    ADD EAX,0x8                         ; 0045d318
    PUSH EAX                            ; 0045d31b
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0045d31c
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045d321
    TEST EAX,EAX                        ; 0045d324
    JZ 0x0045d45c                       ; 0045d326
        ;   XREF to: 0045d45c (CONDITIONAL_JUMP)  ; LAB_0045d45c
    CALL engine_3d.c_setActiveRenderColor_FUN_00404540 ; 0045d32c
        ;   XREF to: 00404540 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setActiveRenderColor_FUN_00404540()
    MOV dword ptr [EBP + -0x8],0x0      ; 0045d331
    JMP 0x0045d340                      ; 0045d338
        ;   XREF to: 0045d340 (UNCONDITIONAL_JUMP)  ; LAB_0045d340
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045d33a
        ;   Label: LAB_0045d33a
    INC dword ptr [EBP + -0x8]          ; 0045d33d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045d340
        ;   Label: LAB_0045d340
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045d343
    DEC EAX                             ; 0045d346
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045d347
    JLE 0x0045d3da                      ; 0045d34a
        ;   XREF to: 0045d3da (CONDITIONAL_JUMP)  ; LAB_0045d3da
    MOV EDI,dword ptr [EBP + -0x8]      ; 0045d350
    SHL EDI,0x2                         ; 0045d353
    ADD EDI,dword ptr [EBP + -0x4]      ; 0045d356
    IMUL ESI,dword ptr [EDI],0x30       ; 0045d359
    JMP 0x03fc0ba8                      ; 0045d35c
        ;   XREF to: 03fc0ba8 (UNCONDITIONAL_JUMP)  ; LAB_03fc0ba8
    MOV ESI,dword ptr [EBP + -0x8]      ; 0045d36c
        ;   Label: LAB_0045d36c
    SHL ESI,0x2                         ; 0045d36f
    ADD ESI,dword ptr [EBP + -0x4]      ; 0045d372
    IMUL ESI,dword ptr [ESI + 0x4],0x30 ; 0045d375
    JMP 0x03fc0c09                      ; 0045d379
        ;   XREF to: 03fc0c09 (UNCONDITIONAL_JUMP)  ; LAB_03fc0c09
    JMP 0x03fc0c6a                      ; 0045d389
        ;   XREF to: 03fc0c6a (UNCONDITIONAL_JUMP)  ; LAB_03fc0c6a
        ;   Label: LAB_0045d389
    JMP 0x00603048                      ; 0045d399
        ;   XREF to: 00603048 (UNCONDITIONAL_JUMP)  ; LAB_00603048
        ;   Label: LAB_0045d399
    MOVSD.REP ES:EDI,ESI                ; 0045d3a9
        ;   Label: LAB_0045d3a9
    JMP 0x03fc0ccb                      ; 0045d3ab
        ;   XREF to: 03fc0ccb (UNCONDITIONAL_JUMP)  ; LAB_03fc0ccb
    JMP 0x006030a3                      ; 0045d3bb
        ;   XREF to: 006030a3 (UNCONDITIONAL_JUMP)  ; LAB_006030a3
        ;   Label: LAB_0045d3bb
    MOVSD.REP ES:EDI,ESI                ; 0045d3cb
        ;   Label: LAB_0045d3cb
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0045d3cd
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0045d3d2
    JMP 0x0045d33a                      ; 0045d3d5
        ;   XREF to: 0045d33a (UNCONDITIONAL_JUMP)  ; LAB_0045d33a
    MOV EDI,dword ptr [EBP + 0x14]      ; 0045d3da
        ;   Label: LAB_0045d3da
    MOV EDI,dword ptr [EDI + 0x4]       ; 0045d3dd
    SHL EDI,0x2                         ; 0045d3e0
    ADD EDI,dword ptr [EBP + -0x4]      ; 0045d3e3
    IMUL ESI,dword ptr [EDI + -0x4],0x30 ; 0045d3e6
    JMP 0x03fc0d2c                      ; 0045d3ea
        ;   XREF to: 03fc0d2c (UNCONDITIONAL_JUMP)  ; LAB_03fc0d2c
    MOV EDI,dword ptr [EBP + -0x4]      ; 0045d3fa
        ;   Label: LAB_0045d3fa
    IMUL ESI,dword ptr [EDI],0x30       ; 0045d3fd
    JMP 0x03fc0d8d                      ; 0045d400
        ;   XREF to: 03fc0d8d (UNCONDITIONAL_JUMP)  ; LAB_03fc0d8d
    JMP 0x03fc0dee                      ; 0045d410
        ;   XREF to: 03fc0dee (UNCONDITIONAL_JUMP)  ; LAB_03fc0dee
        ;   Label: LAB_0045d410
    JMP 0x006030fe                      ; 0045d420
        ;   XREF to: 006030fe (UNCONDITIONAL_JUMP)  ; LAB_006030fe
        ;   Label: LAB_0045d420
    MOVSD.REP ES:EDI,ESI                ; 0045d430
        ;   Label: LAB_0045d430
    JMP 0x03fc0e4f                      ; 0045d432
        ;   XREF to: 03fc0e4f (UNCONDITIONAL_JUMP)  ; LAB_03fc0e4f
    JMP 0x00603159                      ; 0045d442
        ;   XREF to: 00603159 (UNCONDITIONAL_JUMP)  ; LAB_00603159
        ;   Label: LAB_0045d442
    MOVSD.REP ES:EDI,ESI                ; 0045d452
        ;   Label: LAB_0045d452
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0045d454
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0045d459
    MOV ESP,EBP                         ; 0045d45c
        ;   Label: LAB_0045d45c
    POP EBP                             ; 0045d45e
    POP EDI                             ; 0045d45f
    POP ESI                             ; 0045d460
    POP EBX                             ; 0045d461
    RET                                 ; 0045d462
    MOV ECX,0xc                         ; 00603048
        ;   Label: LAB_00603048
    SUB ESP,0x30                        ; 0060304d
    MOV EDI,ESP                         ; 00603050
    LEA ESI,[EBP + 0xffffff68]          ; 00603052
    MOV ECX,dword ptr [ESI]             ; 00603058
    MOV dword ptr [EDI],ECX             ; 0060305a
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060305c
    MOV dword ptr [EDI + 0x4],ECX       ; 0060305f
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603062
    MOV dword ptr [EDI + 0x8],ECX       ; 00603065
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603068
    MOV dword ptr [EDI + 0xc],ECX       ; 0060306b
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060306e
    MOV dword ptr [EDI + 0x10],ECX      ; 00603071
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603074
    MOV dword ptr [EDI + 0x14],ECX      ; 00603077
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060307a
    MOV dword ptr [EDI + 0x18],ECX      ; 0060307d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603080
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603083
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603086
    MOV dword ptr [EDI + 0x20],ECX      ; 00603089
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060308c
    MOV dword ptr [EDI + 0x24],ECX      ; 0060308f
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603092
    MOV dword ptr [EDI + 0x28],ECX      ; 00603095
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00603098
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060309b
    JMP 0x0045d3a9                      ; 0060309e
        ;   XREF to: 0045d3a9 (UNCONDITIONAL_JUMP)  ; LAB_0045d3a9
    MOV ECX,0xc                         ; 006030a3
        ;   Label: LAB_006030a3
    SUB ESP,0x30                        ; 006030a8
    MOV EDI,ESP                         ; 006030ab
    LEA ESI,[EBP + 0xffffff68]          ; 006030ad
    MOV ECX,dword ptr [ESI]             ; 006030b3
    MOV dword ptr [EDI],ECX             ; 006030b5
    MOV ECX,dword ptr [ESI + 0x4]       ; 006030b7
    MOV dword ptr [EDI + 0x4],ECX       ; 006030ba
    MOV ECX,dword ptr [ESI + 0x8]       ; 006030bd
    MOV dword ptr [EDI + 0x8],ECX       ; 006030c0
    MOV ECX,dword ptr [ESI + 0xc]       ; 006030c3
    MOV dword ptr [EDI + 0xc],ECX       ; 006030c6
    MOV ECX,dword ptr [ESI + 0x10]      ; 006030c9
    MOV dword ptr [EDI + 0x10],ECX      ; 006030cc
    MOV ECX,dword ptr [ESI + 0x14]      ; 006030cf
    MOV dword ptr [EDI + 0x14],ECX      ; 006030d2
    MOV ECX,dword ptr [ESI + 0x18]      ; 006030d5
    MOV dword ptr [EDI + 0x18],ECX      ; 006030d8
    MOV ECX,dword ptr [ESI + 0x1c]      ; 006030db
    MOV dword ptr [EDI + 0x1c],ECX      ; 006030de
    MOV ECX,dword ptr [ESI + 0x20]      ; 006030e1
    MOV dword ptr [EDI + 0x20],ECX      ; 006030e4
    MOV ECX,dword ptr [ESI + 0x24]      ; 006030e7
    MOV dword ptr [EDI + 0x24],ECX      ; 006030ea
    MOV ECX,dword ptr [ESI + 0x28]      ; 006030ed
    MOV dword ptr [EDI + 0x28],ECX      ; 006030f0
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006030f3
    MOV dword ptr [EDI + 0x2c],ECX      ; 006030f6
    JMP 0x0045d3cb                      ; 006030f9
        ;   XREF to: 0045d3cb (UNCONDITIONAL_JUMP)  ; LAB_0045d3cb
    MOV ECX,0xc                         ; 006030fe
        ;   Label: LAB_006030fe
    SUB ESP,0x30                        ; 00603103
    MOV EDI,ESP                         ; 00603106
    LEA ESI,[EBP + 0xffffff68]          ; 00603108
    MOV ECX,dword ptr [ESI]             ; 0060310e
    MOV dword ptr [EDI],ECX             ; 00603110
    MOV ECX,dword ptr [ESI + 0x4]       ; 00603112
    MOV dword ptr [EDI + 0x4],ECX       ; 00603115
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603118
    MOV dword ptr [EDI + 0x8],ECX       ; 0060311b
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060311e
    MOV dword ptr [EDI + 0xc],ECX       ; 00603121
    MOV ECX,dword ptr [ESI + 0x10]      ; 00603124
    MOV dword ptr [EDI + 0x10],ECX      ; 00603127
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060312a
    MOV dword ptr [EDI + 0x14],ECX      ; 0060312d
    MOV ECX,dword ptr [ESI + 0x18]      ; 00603130
    MOV dword ptr [EDI + 0x18],ECX      ; 00603133
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603136
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603139
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060313c
    MOV dword ptr [EDI + 0x20],ECX      ; 0060313f
    MOV ECX,dword ptr [ESI + 0x24]      ; 00603142
    MOV dword ptr [EDI + 0x24],ECX      ; 00603145
    MOV ECX,dword ptr [ESI + 0x28]      ; 00603148
    MOV dword ptr [EDI + 0x28],ECX      ; 0060314b
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060314e
    MOV dword ptr [EDI + 0x2c],ECX      ; 00603151
    JMP 0x0045d430                      ; 00603154
        ;   XREF to: 0045d430 (UNCONDITIONAL_JUMP)  ; LAB_0045d430
    MOV ECX,0xc                         ; 00603159
        ;   Label: LAB_00603159
    SUB ESP,0x30                        ; 0060315e
    MOV EDI,ESP                         ; 00603161
    LEA ESI,[EBP + 0xffffff68]          ; 00603163
    MOV ECX,dword ptr [ESI]             ; 00603169
    MOV dword ptr [EDI],ECX             ; 0060316b
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060316d
    MOV dword ptr [EDI + 0x4],ECX       ; 00603170
    MOV ECX,dword ptr [ESI + 0x8]       ; 00603173
    MOV dword ptr [EDI + 0x8],ECX       ; 00603176
    MOV ECX,dword ptr [ESI + 0xc]       ; 00603179
    MOV dword ptr [EDI + 0xc],ECX       ; 0060317c
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060317f
    MOV dword ptr [EDI + 0x10],ECX      ; 00603182
    MOV ECX,dword ptr [ESI + 0x14]      ; 00603185
    MOV dword ptr [EDI + 0x14],ECX      ; 00603188
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060318b
    MOV dword ptr [EDI + 0x18],ECX      ; 0060318e
    MOV ECX,dword ptr [ESI + 0x1c]      ; 00603191
    MOV dword ptr [EDI + 0x1c],ECX      ; 00603194
    MOV ECX,dword ptr [ESI + 0x20]      ; 00603197
    MOV dword ptr [EDI + 0x20],ECX      ; 0060319a
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060319d
    MOV dword ptr [EDI + 0x24],ECX      ; 006031a0
    MOV ECX,dword ptr [ESI + 0x28]      ; 006031a3
    MOV dword ptr [EDI + 0x28],ECX      ; 006031a6
    MOV ECX,dword ptr [ESI + 0x2c]      ; 006031a9
    MOV dword ptr [EDI + 0x2c],ECX      ; 006031ac
    JMP 0x0045d452                      ; 006031af
        ;   XREF to: 0045d452 (UNCONDITIONAL_JUMP)  ; LAB_0045d452
    MOV ECX,0xc                         ; 03fc0ba8
        ;   Label: LAB_03fc0ba8
    LEA EDI,[EBP + -0x68]               ; 03fc0bad
    LEA ESI,[ESI + 0x688014]            ; 03fc0bb0
    MOV ECX,dword ptr [ESI]             ; 03fc0bb6
    MOV dword ptr [EDI],ECX             ; 03fc0bb8
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0bba
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0bbd
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0bc0
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0bc3
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0bc6
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0bc9
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0bcc
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0bcf
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0bd2
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0bd5
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0bd8
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0bdb
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0bde
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0be1
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0be4
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0be7
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0bea
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0bed
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0bf0
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0bf3
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0bf6
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0bf9
    ADD ESI,0x30                        ; 03fc0bfc
    ADD EDI,0x30                        ; 03fc0bff
    XOR ECX,ECX                         ; 03fc0c02
    JMP 0x0045d36c                      ; 03fc0c04
        ;   XREF to: 0045d36c (UNCONDITIONAL_JUMP)  ; LAB_0045d36c
    MOV ECX,0xc                         ; 03fc0c09
        ;   Label: LAB_03fc0c09
    LEA EDI,[EBP + -0x38]               ; 03fc0c0e
    LEA ESI,[ESI + 0x688014]            ; 03fc0c11
    MOV ECX,dword ptr [ESI]             ; 03fc0c17
    MOV dword ptr [EDI],ECX             ; 03fc0c19
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0c1b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0c1e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0c21
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0c24
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0c27
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0c2a
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0c2d
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0c30
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0c33
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0c36
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0c39
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0c3c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0c3f
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0c42
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0c45
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0c48
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0c4b
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0c4e
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0c51
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0c54
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0c57
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0c5a
    ADD ESI,0x30                        ; 03fc0c5d
    ADD EDI,0x30                        ; 03fc0c60
    XOR ECX,ECX                         ; 03fc0c63
    JMP 0x0045d389                      ; 03fc0c65
        ;   XREF to: 0045d389 (UNCONDITIONAL_JUMP)  ; LAB_0045d389
    MOV ECX,0xc                         ; 03fc0c6a
        ;   Label: LAB_03fc0c6a
    LEA EDI,[EBP + 0xffffff68]          ; 03fc0c6f
    LEA ESI,[EBP + -0x38]               ; 03fc0c75
    MOV ECX,dword ptr [ESI]             ; 03fc0c78
    MOV dword ptr [EDI],ECX             ; 03fc0c7a
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0c7c
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0c7f
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0c82
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0c85
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0c88
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0c8b
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0c8e
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0c91
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0c94
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0c97
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0c9a
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0c9d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0ca0
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0ca3
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0ca6
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0ca9
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0cac
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0caf
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0cb2
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0cb5
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0cb8
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0cbb
    ADD ESI,0x30                        ; 03fc0cbe
    ADD EDI,0x30                        ; 03fc0cc1
    XOR ECX,ECX                         ; 03fc0cc4
    JMP 0x0045d399                      ; 03fc0cc6
        ;   XREF to: 0045d399 (UNCONDITIONAL_JUMP)  ; LAB_0045d399
    MOV ECX,0xc                         ; 03fc0ccb
        ;   Label: LAB_03fc0ccb
    LEA EDI,[EBP + 0xffffff68]          ; 03fc0cd0
    LEA ESI,[EBP + -0x68]               ; 03fc0cd6
    MOV ECX,dword ptr [ESI]             ; 03fc0cd9
    MOV dword ptr [EDI],ECX             ; 03fc0cdb
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0cdd
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0ce0
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0ce3
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0ce6
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0ce9
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0cec
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0cef
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0cf2
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0cf5
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0cf8
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0cfb
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0cfe
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0d01
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0d04
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0d07
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0d0a
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0d0d
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0d10
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0d13
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0d16
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0d19
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0d1c
    ADD ESI,0x30                        ; 03fc0d1f
    ADD EDI,0x30                        ; 03fc0d22
    XOR ECX,ECX                         ; 03fc0d25
    JMP 0x0045d3bb                      ; 03fc0d27
        ;   XREF to: 0045d3bb (UNCONDITIONAL_JUMP)  ; LAB_0045d3bb
    MOV ECX,0xc                         ; 03fc0d2c
        ;   Label: LAB_03fc0d2c
    LEA EDI,[EBP + -0x68]               ; 03fc0d31
    LEA ESI,[ESI + 0x688014]            ; 03fc0d34
    MOV ECX,dword ptr [ESI]             ; 03fc0d3a
    MOV dword ptr [EDI],ECX             ; 03fc0d3c
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0d3e
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0d41
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0d44
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0d47
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0d4a
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0d4d
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0d50
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0d53
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0d56
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0d59
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0d5c
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0d5f
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0d62
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0d65
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0d68
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0d6b
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0d6e
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0d71
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0d74
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0d77
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0d7a
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0d7d
    ADD ESI,0x30                        ; 03fc0d80
    ADD EDI,0x30                        ; 03fc0d83
    XOR ECX,ECX                         ; 03fc0d86
    JMP 0x0045d3fa                      ; 03fc0d88
        ;   XREF to: 0045d3fa (UNCONDITIONAL_JUMP)  ; LAB_0045d3fa
    MOV ECX,0xc                         ; 03fc0d8d
        ;   Label: LAB_03fc0d8d
    LEA EDI,[EBP + -0x38]               ; 03fc0d92
    LEA ESI,[ESI + 0x688014]            ; 03fc0d95
    MOV ECX,dword ptr [ESI]             ; 03fc0d9b
    MOV dword ptr [EDI],ECX             ; 03fc0d9d
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0d9f
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0da2
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0da5
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0da8
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0dab
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0dae
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0db1
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0db4
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0db7
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0dba
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0dbd
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0dc0
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0dc3
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0dc6
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0dc9
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0dcc
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0dcf
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0dd2
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0dd5
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0dd8
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0ddb
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0dde
    ADD ESI,0x30                        ; 03fc0de1
    ADD EDI,0x30                        ; 03fc0de4
    XOR ECX,ECX                         ; 03fc0de7
    JMP 0x0045d410                      ; 03fc0de9
        ;   XREF to: 0045d410 (UNCONDITIONAL_JUMP)  ; LAB_0045d410
    MOV ECX,0xc                         ; 03fc0dee
        ;   Label: LAB_03fc0dee
    LEA EDI,[EBP + 0xffffff68]          ; 03fc0df3
    LEA ESI,[EBP + -0x38]               ; 03fc0df9
    MOV ECX,dword ptr [ESI]             ; 03fc0dfc
    MOV dword ptr [EDI],ECX             ; 03fc0dfe
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0e00
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0e03
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0e06
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0e09
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0e0c
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0e0f
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0e12
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0e15
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0e18
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0e1b
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0e1e
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0e21
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0e24
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0e27
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0e2a
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0e2d
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0e30
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0e33
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0e36
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0e39
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0e3c
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0e3f
    ADD ESI,0x30                        ; 03fc0e42
    ADD EDI,0x30                        ; 03fc0e45
    XOR ECX,ECX                         ; 03fc0e48
    JMP 0x0045d420                      ; 03fc0e4a
        ;   XREF to: 0045d420 (UNCONDITIONAL_JUMP)  ; LAB_0045d420
    MOV ECX,0xc                         ; 03fc0e4f
        ;   Label: LAB_03fc0e4f
    LEA EDI,[EBP + 0xffffff68]          ; 03fc0e54
    LEA ESI,[EBP + -0x68]               ; 03fc0e5a
    MOV ECX,dword ptr [ESI]             ; 03fc0e5d
    MOV dword ptr [EDI],ECX             ; 03fc0e5f
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0e61
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0e64
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0e67
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0e6a
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0e6d
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0e70
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0e73
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0e76
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0e79
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0e7c
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0e7f
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0e82
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0e85
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0e88
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0e8b
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0e8e
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0e91
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0e94
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0e97
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0e9a
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0e9d
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0ea0
    ADD ESI,0x30                        ; 03fc0ea3
    ADD EDI,0x30                        ; 03fc0ea6
    XOR ECX,ECX                         ; 03fc0ea9
    JMP 0x0045d442                      ; 03fc0eab
        ;   XREF to: 0045d442 (UNCONDITIONAL_JUMP)  ; LAB_0045d442

