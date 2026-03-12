; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_addQuadPolygonOctant_FUN_00469220(uint vertex_index_1,uint vertex_index_2,uint vertex_index_3,uint vertex_index_4)
;
; Parameters:
; uint             Stack[0x4]:4   vertex_index_1
; uint             Stack[0x8]:4   vertex_index_2
; uint             Stack[0xc]:4   vertex_index_3
; uint             Stack[0x10]:4   vertex_index_4
; Local Variables:
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_generateOctant_FUN_00469420 at 00469642
;
; Referenced Globals:
;   TerminatedCString s_rustplat_raw_0061cf16
;   double g_UvScaleConstant256 = 256
;   undefined4 DAT_01626418
;   undefined4 DAT_0162641c
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 DAT_016e99b4
;   undefined4 DAT_016e99c8
;   undefined4 DAT_016e99cc
;   undefined4 DAT_016e99d0
;   undefined4 DAT_016e99d4
;   undefined4 DAT_016e9a08
;   undefined4 DAT_016e9a0c
;   undefined4 DAT_016e9a10
;   undefined4 DAT_016e9a14
;   ... and 4 more
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469220
        ;   Label: shape_design.c_addQuadPolygonOctant_FUN_00469220
    PUSH ESI                            ; 00469221
    PUSH EDI                            ; 00469222
    PUSH EBP                            ; 00469223
    MOV EBP,ESP                         ; 00469224
    SUB ESP,0x10                        ; 00469226
    IMUL EAX,dword ptr [0x016e990c],0x184 ; 0046922c | g_PolygonCount
    MOV EDX,0x16e9910                   ; 00469236 | g_ModelPolygonData
    ADD EDX,EAX                         ; 0046923b
    MOV dword ptr [EBP + -0x4],EDX      ; 0046923d
    INC dword ptr [0x016e990c]          ; 00469240 | g_PolygonCount
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469246
    MOV dword ptr [EAX],0x2             ; 00469249 | g_ModelPolygonData
    MOV EAX,0x61cf16                    ; 0046924f | = "rustplat.raw"
    PUSH EAX                            ; 00469254 | = "rustplat.raw"
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469255
    ADD EAX,0x4                         ; 00469258
    PUSH EAX                            ; 0046925b
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0046925c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00469261
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469264
    MOV dword ptr [EAX + 0xa4],0x4      ; 00469267 | DAT_016e99b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00469271
    MOV EDX,dword ptr [EBP + -0x4]      ; 00469274
    MOV dword ptr [EDX + 0xb8],EAX      ; 00469277 | DAT_016e99c8
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046927d
    MOV EDX,dword ptr [EBP + -0x4]      ; 00469280
    MOV dword ptr [EDX + 0xbc],EAX      ; 00469283 | DAT_016e99cc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00469289
    MOV EDX,dword ptr [EBP + -0x4]      ; 0046928c
    MOV dword ptr [EDX + 0xc0],EAX      ; 0046928f | DAT_016e99d0
    MOV EAX,dword ptr [EBP + 0x20]      ; 00469295
    MOV EDX,dword ptr [EBP + -0x4]      ; 00469298
    MOV dword ptr [EDX + 0xc4],EAX      ; 0046929b | DAT_016e99d4
    IMUL EAX,dword ptr [EBP + 0x14],0x14 ; 004692a1
    FLD float ptr [EAX + 0x1626418]     ; 004692a5 | DAT_01626418
    FMUL double ptr [0x0061cf26]        ; 004692ab | g_UvScaleConstant256
    MOV EAX,dword ptr [EBP + -0x4]      ; 004692b1
    FSTP float ptr [EAX + 0xf8]         ; 004692b4 | DAT_016e9a08
    IMUL EAX,dword ptr [EBP + 0x14],0x14 ; 004692ba
    FLD float ptr [EAX + 0x162641c]     ; 004692be | DAT_0162641c
    FMUL double ptr [0x0061cf26]        ; 004692c4 | g_UvScaleConstant256
    MOV EAX,dword ptr [EBP + -0x4]      ; 004692ca
    FSTP float ptr [EAX + 0x138]        ; 004692cd | DAT_016e9a48
    IMUL EAX,dword ptr [EBP + 0x18],0x14 ; 004692d3
    FLD float ptr [EAX + 0x1626418]     ; 004692d7 | DAT_01626418
    FMUL double ptr [0x0061cf26]        ; 004692dd | g_UvScaleConstant256
    MOV EAX,dword ptr [EBP + -0x4]      ; 004692e3
    FSTP float ptr [EAX + 0xfc]         ; 004692e6 | DAT_016e9a0c
    IMUL EAX,dword ptr [EBP + 0x18],0x14 ; 004692ec
    FLD float ptr [EAX + 0x162641c]     ; 004692f0 | DAT_0162641c
    FMUL double ptr [0x0061cf26]        ; 004692f6 | g_UvScaleConstant256
    MOV EAX,dword ptr [EBP + -0x4]      ; 004692fc
    FSTP float ptr [EAX + 0x13c]        ; 004692ff | DAT_016e9a4c
    IMUL EAX,dword ptr [EBP + 0x1c],0x14 ; 00469305
    FLD float ptr [EAX + 0x1626418]     ; 00469309 | DAT_01626418
    FMUL double ptr [0x0061cf26]        ; 0046930f | g_UvScaleConstant256
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469315
    FSTP float ptr [EAX + 0x100]        ; 00469318 | DAT_016e9a10
    IMUL EAX,dword ptr [EBP + 0x1c],0x14 ; 0046931e
    FLD float ptr [EAX + 0x162641c]     ; 00469322 | DAT_0162641c
    FMUL double ptr [0x0061cf26]        ; 00469328 | g_UvScaleConstant256
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046932e
    FSTP float ptr [EAX + 0x140]        ; 00469331 | DAT_016e9a50
    IMUL EAX,dword ptr [EBP + 0x20],0x14 ; 00469337
    FLD float ptr [EAX + 0x1626418]     ; 0046933b | DAT_01626418
    FMUL double ptr [0x0061cf26]        ; 00469341 | g_UvScaleConstant256
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469347
    FSTP float ptr [EAX + 0x104]        ; 0046934a | DAT_016e9a14
    IMUL EAX,dword ptr [EBP + 0x20],0x14 ; 00469350
    FLD float ptr [EAX + 0x162641c]     ; 00469354 | DAT_0162641c
    FMUL double ptr [0x0061cf26]        ; 0046935a | g_UvScaleConstant256
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469360
    FSTP float ptr [EAX + 0x144]        ; 00469363 | DAT_016e9a54
    MOV dword ptr [EBP + -0x8],0x0      ; 00469369
    JMP 0x00469378                      ; 00469370
        ;   XREF to: 00469378 (UNCONDITIONAL_JUMP)  ; LAB_00469378
    MOV EAX,dword ptr [EBP + -0x8]      ; 00469372
        ;   Label: LAB_00469372
    INC dword ptr [EBP + -0x8]          ; 00469375
    CMP dword ptr [EBP + -0x8],0x4      ; 00469378
        ;   Label: LAB_00469378
    JGE 0x00469413                      ; 0046937c
        ;   XREF to: 00469413 (CONDITIONAL_JUMP)  ; LAB_00469413
    MOV EAX,dword ptr [EBP + -0x8]      ; 00469382
    SHL EAX,0x2                         ; 00469385
    ADD EAX,dword ptr [EBP + -0x4]      ; 00469388
    MOV EAX,dword ptr [EAX + 0xf8]      ; 0046938b
    MOV dword ptr [EBP + -0x10],EAX     ; 00469391
    MOV EAX,dword ptr [EBP + -0x8]      ; 00469394
    SHL EAX,0x2                         ; 00469397
    ADD EAX,dword ptr [EBP + -0x4]      ; 0046939a
    MOV EAX,dword ptr [EAX + 0x138]     ; 0046939d
    MOV dword ptr [EBP + -0xc],EAX      ; 004693a3
    CMP dword ptr [EBP + -0x10],0x40800000 ; 004693a6
    JGE 0x004693b6                      ; 004693ad
        ;   XREF to: 004693b6 (CONDITIONAL_JUMP)  ; LAB_004693b6
    MOV dword ptr [EBP + -0x10],0x40800000 ; 004693af
    CMP dword ptr [EBP + -0x10],0x437b0000 ; 004693b6
        ;   Label: LAB_004693b6
    JLE 0x004693c6                      ; 004693bd
        ;   XREF to: 004693c6 (CONDITIONAL_JUMP)  ; LAB_004693c6
    MOV dword ptr [EBP + -0x10],0x437b0000 ; 004693bf
    CMP dword ptr [EBP + -0xc],0x40800000 ; 004693c6
        ;   Label: LAB_004693c6
    JGE 0x004693d6                      ; 004693cd
        ;   XREF to: 004693d6 (CONDITIONAL_JUMP)  ; LAB_004693d6
    MOV dword ptr [EBP + -0xc],0x40800000 ; 004693cf
    CMP dword ptr [EBP + -0xc],0x437b0000 ; 004693d6
        ;   Label: LAB_004693d6
    JLE 0x004693e6                      ; 004693dd
        ;   XREF to: 004693e6 (CONDITIONAL_JUMP)  ; LAB_004693e6
    MOV dword ptr [EBP + -0xc],0x437b0000 ; 004693df
    MOV EAX,dword ptr [EBP + -0x8]      ; 004693e6
        ;   Label: LAB_004693e6
    SHL EAX,0x2                         ; 004693e9
    MOV EDX,dword ptr [EBP + -0x4]      ; 004693ec
    ADD EDX,EAX                         ; 004693ef
    MOV EAX,dword ptr [EBP + -0x10]     ; 004693f1
    MOV dword ptr [EDX + 0xf8],EAX      ; 004693f4
    MOV EAX,dword ptr [EBP + -0x8]      ; 004693fa
    SHL EAX,0x2                         ; 004693fd
    MOV EDX,dword ptr [EBP + -0x4]      ; 00469400
    ADD EDX,EAX                         ; 00469403
    MOV EAX,dword ptr [EBP + -0xc]      ; 00469405
    MOV dword ptr [EDX + 0x138],EAX     ; 00469408
    JMP 0x00469372                      ; 0046940e
        ;   XREF to: 00469372 (UNCONDITIONAL_JUMP)  ; LAB_00469372
    MOV ESP,EBP                         ; 00469413
        ;   Label: LAB_00469413
    POP EBP                             ; 00469415
    POP EDI                             ; 00469416
    POP ESI                             ; 00469417
    POP EBX                             ; 00469418
    RET                                 ; 00469419

