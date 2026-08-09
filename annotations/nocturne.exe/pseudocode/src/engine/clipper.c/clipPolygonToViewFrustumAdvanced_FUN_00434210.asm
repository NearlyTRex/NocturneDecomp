; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_00434210(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_004341cc = 0043448c
;   void* PTR_caseD_3_004341d8 = 004344b6
;   void* PTR_caseD_1_004341e0 = 0043479d
;   void* PTR_caseD_3_004341e8 = 00434565
;   void* switchdataD_004341ec = 004345e5
;   void* PTR_caseD_3_004341f8 = 0043460f
;   void* PTR_caseD_1_00434200 = 0043489b
;   void* PTR_caseD_3_00434208 = 004346bf
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_005c5024
;   undefined4 DAT_006b0280
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined1 DAT_00766c78
;   ... and 38 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_special.cpp_drawPolygon2_FUN_00532650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434210
        ;   Label: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00434210
    PUSH ESI                            ; 00434211
    PUSH EDI                            ; 00434212
    PUSH EBP                            ; 00434213
    SUB ESP,0x1c                        ; 00434214
    MOV EBP,dword ptr [ESP + 0x30]      ; 00434217
    MOV ECX,0xffffffff                  ; 0043421b
    XOR EBX,EBX                         ; 00434220
    XOR ESI,ESI                         ; 00434222
    TEST EBP,EBP                        ; 00434224
    JLE 0x00434248                      ; 00434226
        ;   XREF to: 00434248 (CONDITIONAL_JUMP)  ; LAB_00434248
    MOV EAX,dword ptr [ESP + 0x34]      ; 00434228
    IMUL EDX,dword ptr [EAX],0x30       ; 0043422c
        ;   Label: LAB_0043422c
    MOV EDX,dword ptr [EDX + 0x5c5024]  ; 0043422f | DAT_005c5024
    TEST EDX,0x80000000                 ; 00434235
    JZ 0x0043423e                       ; 0043423b
        ;   XREF to: 0043423e (CONDITIONAL_JUMP)  ; LAB_0043423e
    INC ESI                             ; 0043423d
    ADD EAX,0x4                         ; 0043423e
        ;   Label: LAB_0043423e
    INC EBX                             ; 00434241
    AND ECX,EDX                         ; 00434242
    CMP EBX,EBP                         ; 00434244
    JL 0x0043422c                       ; 00434246
        ;   XREF to: 0043422c (CONDITIONAL_JUMP)  ; LAB_0043422c
    CMP ESI,EBP                         ; 00434248
        ;   Label: LAB_00434248
    JNZ 0x00434255                      ; 0043424a
        ;   XREF to: 00434255 (CONDITIONAL_JUMP)  ; LAB_00434255
    TEST CL,0xff                        ; 0043424c
    JNZ 0x004342f1                      ; 0043424f
        ;   XREF to: 004342f1 (CONDITIONAL_JUMP)  ; LAB_004342f1
    TEST ESI,ESI                        ; 00434255
        ;   Label: LAB_00434255
    JNZ 0x004343ba                      ; 00434257
        ;   XREF to: 004343ba (CONDITIONAL_JUMP)  ; LAB_004343ba
    CMP dword ptr [0x01c02594],0x0      ; 0043425d | g_UseExternalRenderer
    JZ 0x0043435f                       ; 00434264
        ;   XREF to: 0043435f (CONDITIONAL_JUMP)  ; LAB_0043435f
    XOR EAX,EAX                         ; 0043426a
    TEST EBP,EBP                        ; 0043426c
    JLE 0x00434290                      ; 0043426e
        ;   XREF to: 00434290 (CONDITIONAL_JUMP)  ; LAB_00434290
    MOV EBX,dword ptr [ESP + 0x34]      ; 00434270
    IMUL EDX,dword ptr [EBX],0x30       ; 00434274
        ;   Label: LAB_00434274
    INC EAX                             ; 00434277
    ADD EDX,0x5c5014                    ; 00434278 | DAT_005c5014
    ADD EBX,0x4                         ; 0043427e
    MOV dword ptr [EAX*0x4 + 0x767270],EDX ; 00434281 | DAT_00767274 | DAT_00767278
    CMP EAX,EBP                         ; 00434288
    JL 0x00434274                       ; 0043428a
        ;   XREF to: 00434274 (CONDITIONAL_JUMP)  ; LAB_00434274
    LEA EAX,[EAX]                       ; 0043428c
    CMP dword ptr [0x006b0280],0x0      ; 00434290 | DAT_006b0280
        ;   Label: LAB_00434290
    JZ 0x00434330                       ; 00434297
        ;   XREF to: 00434330 (CONDITIONAL_JUMP)  ; LAB_00434330
    CMP EBP,0x3                         ; 0043429d
    JLE 0x00434303                      ; 004342a0
        ;   XREF to: 00434303 (CONDITIONAL_JUMP)  ; LAB_00434303
    LEA EAX,[EBP + -0x2]                ; 004342a2
    XOR EBX,EBX                         ; 004342a5
    MOV dword ptr [ESP],EAX             ; 004342a7
    LEA EDI,[EAX*0x4 + 0x0]             ; 004342aa
    XOR ESI,ESI                         ; 004342b1
    TEST EDI,EDI                        ; 004342b3
    JLE 0x004342df                      ; 004342b5
        ;   XREF to: 004342df (CONDITIONAL_JUMP)  ; LAB_004342df
    MOV EAX,dword ptr [EBX + 0x76727c]  ; 004342b7 | DAT_0076727c | DAT_00767280
        ;   Label: LAB_004342b7
    PUSH EAX                            ; 004342bd
    MOV EDX,dword ptr [EBX + 0x767278]  ; 004342be | DAT_00767278 | DAT_0076727c
    PUSH EDX                            ; 004342c4
    MOV ECX,dword ptr [0x00767274]      ; 004342c5 | DAT_00767274
    PUSH ECX                            ; 004342cb
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 004342cc
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004342d1
    TEST EAX,EAX                        ; 004342d4
    JZ 0x00434300                       ; 004342d6
        ;   XREF to: 00434300 (CONDITIONAL_JUMP)  ; LAB_00434300
    ADD EBX,0x4                         ; 004342d8
        ;   Label: LAB_004342d8
    CMP EBX,EDI                         ; 004342db
    JL 0x004342b7                       ; 004342dd
        ;   XREF to: 004342b7 (CONDITIONAL_JUMP)  ; LAB_004342b7
    CMP ESI,dword ptr [ESP]             ; 004342df
        ;   Label: LAB_004342df
    JNZ 0x00434330                      ; 004342e2
        ;   XREF to: 00434330 (CONDITIONAL_JUMP)  ; LAB_00434330
    MOV EAX,0x1                         ; 004342e4
    ADD ESP,0x1c                        ; 004342e9
        ;   Label: LAB_004342e9
    POP EBP                             ; 004342ec
    POP EDI                             ; 004342ed
    POP ESI                             ; 004342ee
    POP EBX                             ; 004342ef
    RET                                 ; 004342f0
    XOR EDX,EDX                         ; 004342f1
        ;   Label: LAB_004342f1
    MOV EAX,0x1                         ; 004342f3
    MOV dword ptr [0x00766c70],EDX      ; 004342f8 | DAT_00766c70
    JMP 0x004342e9                      ; 004342fe
        ;   XREF to: 004342e9 (UNCONDITIONAL_JUMP)  ; LAB_004342e9
    INC ESI                             ; 00434300
        ;   Label: LAB_00434300
    JMP 0x004342d8                      ; 00434301
        ;   XREF to: 004342d8 (UNCONDITIONAL_JUMP)  ; LAB_004342d8
    MOV EAX,[0x0076727c]                ; 00434303 | DAT_0076727c
        ;   Label: LAB_00434303
    PUSH EAX                            ; 00434308
    MOV EDX,dword ptr [0x00767278]      ; 00434309 | DAT_00767278
    PUSH EDX                            ; 0043430f
    MOV ECX,dword ptr [0x00767274]      ; 00434310 | DAT_00767274
    PUSH ECX                            ; 00434316
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00434317
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043431c
    TEST EAX,EAX                        ; 0043431f
    JNZ 0x00434330                      ; 00434321
        ;   XREF to: 00434330 (CONDITIONAL_JUMP)  ; LAB_00434330
    MOV EAX,0x1                         ; 00434323
    ADD ESP,0x1c                        ; 00434328
    POP EBP                             ; 0043432b
    POP EDI                             ; 0043432c
    POP ESI                             ; 0043432d
    POP EBX                             ; 0043432e
    RET                                 ; 0043432f
    MOV EBX,dword ptr [0x01c039a0]      ; 00434330 | g_RenderStateFlags
        ;   Label: LAB_00434330
    PUSH EBX                            ; 00434336
    MOV ESI,dword ptr [0x01e52ef8]      ; 00434337 | g_RenderedTriangleCount
    PUSH EBP                            ; 0043433d
    INC ESI                             ; 0043433e
    PUSH 0x767274                       ; 0043433f | DAT_00767274
    MOV dword ptr [0x01e52ef8],ESI      ; 00434344 | g_RenderedTriangleCount
    CALL engine_special.cpp_drawPolygon2_FUN_00532650 ; 0043434a
        ;   XREF to: 00532650 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00532650(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    MOV EAX,0x1                         ; 0043434f
    ADD ESP,0xc                         ; 00434354
    ADD ESP,0x1c                        ; 00434357
    POP EBP                             ; 0043435a
    POP EDI                             ; 0043435b
    POP ESI                             ; 0043435c
    POP EBX                             ; 0043435d
    RET                                 ; 0043435e
    MOV dword ptr [ESP + 0x8],ESI       ; 0043435f
        ;   Label: LAB_0043435f
    MOV dword ptr [0x00766c70],EBP      ; 00434363 | DAT_00766c70
    TEST EBP,EBP                        ; 00434369
    JLE 0x004343b0                      ; 0043436b
        ;   XREF to: 004343b0 (CONDITIONAL_JUMP)  ; LAB_004343b0
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043436d
    MOV EDX,0x766c74                    ; 00434371 | DAT_00766c74
    IMUL ESI,dword ptr [EBX],0x30       ; 00434376
        ;   Label: LAB_00434376
    MOV ECX,0x30                        ; 00434379
    ADD ESI,0x5c5014                    ; 0043437e | DAT_005c5014
    MOV EDI,EDX                         ; 00434384
    PUSH EDI                            ; 00434386 | DAT_00766c74 | DAT_00766ca4
    MOV EAX,ECX                         ; 00434387
    SHR ECX,0x2                         ; 00434389
    MOVSD.REP ES:EDI,ESI                ; 0043438c | DAT_005c5014 | DAT_00766c74 | DAT_005c5018
    MOV CL,AL                           ; 0043438e
    AND CL,0x3                          ; 00434390
    MOVSB.REP ES:EDI,ESI                ; 00434393 | DAT_005c5018 | DAT_00766c78
    POP EDI                             ; 00434395
    MOV EAX,dword ptr [ESP + 0x8]       ; 00434396
    ADD EBX,0x4                         ; 0043439a
    INC EAX                             ; 0043439d
    ADD EDX,0x30                        ; 0043439e
    MOV dword ptr [ESP + 0x8],EAX       ; 004343a1
    CMP EBP,EAX                         ; 004343a5
    JG 0x00434376                       ; 004343a7
        ;   XREF to: 00434376 (CONDITIONAL_JUMP)  ; LAB_00434376
    LEA EAX,[EAX]                       ; 004343a9
    NOP                                 ; 004343af
    XOR EAX,EAX                         ; 004343b0
        ;   Label: LAB_004343b0
    ADD ESP,0x1c                        ; 004343b2
    POP EBP                             ; 004343b5
    POP EDI                             ; 004343b6
    POP ESI                             ; 004343b7
    POP EBX                             ; 004343b8
    RET                                 ; 004343b9
    MOV dword ptr [0x00767b3c],EBP      ; 004343ba | DAT_00767b3c
        ;   Label: LAB_004343ba
    XOR EDX,EDX                         ; 004343c0
    XOR EBX,EBX                         ; 004343c2
    MOV dword ptr [0x00767b40],EDX      ; 004343c4 | DAT_00767b40
    MOV dword ptr [0x00767b44],EDX      ; 004343ca | DAT_00767b44
    MOV dword ptr [0x00767b48],EDX      ; 004343d0 | DAT_00767b48
    MOV dword ptr [0x00766c70],EDX      ; 004343d6 | DAT_00766c70
    TEST EBP,EBP                        ; 004343dc
    JLE 0x00434430                      ; 004343de
        ;   XREF to: 00434430 (CONDITIONAL_JUMP)  ; LAB_00434430
    MOV EAX,dword ptr [ESP + 0x34]      ; 004343e0
    MOV EDX,0x76814c                    ; 004343e4 | DAT_0076814c
    MOV dword ptr [ESP + 0x4],EAX       ; 004343e9
    MOV EAX,dword ptr [ESP + 0x4]       ; 004343ed
        ;   Label: LAB_004343ed
    IMUL ESI,dword ptr [EAX],0x30       ; 004343f1
    MOV EDI,EDX                         ; 004343f4
    MOV ECX,0x30                        ; 004343f6
    ADD ESI,0x5c5014                    ; 004343fb | DAT_005c5014
    PUSH EDI                            ; 00434401 | DAT_0076814c | DAT_0076817c
    MOV EAX,ECX                         ; 00434402
    SHR ECX,0x2                         ; 00434404
    MOVSD.REP ES:EDI,ESI                ; 00434407 | DAT_005c5014 | DAT_0076814c | DAT_005c5018
    MOV CL,AL                           ; 00434409
    AND CL,0x3                          ; 0043440b
    MOVSB.REP ES:EDI,ESI                ; 0043440e | DAT_005c5018 | DAT_00768150
    POP EDI                             ; 00434410
    MOV ESI,dword ptr [ESP + 0x4]       ; 00434411
    INC EBX                             ; 00434415
    ADD ESI,0x4                         ; 00434416
    ADD EDX,0x30                        ; 00434419
    MOV dword ptr [ESP + 0x4],ESI       ; 0043441c
    CMP EBX,EBP                         ; 00434420
    JL 0x004343ed                       ; 00434422
        ;   XREF to: 004343ed (CONDITIONAL_JUMP)  ; LAB_004343ed
    LEA EAX,[EAX]                       ; 00434424
    LEA EDX,[EDX]                       ; 0043442a | DAT_0076817c
    XOR EDI,EDI                         ; 00434430
        ;   Label: LAB_00434430
    MOV EBP,dword ptr [0x00767b3c]      ; 00434432 | DAT_00767b3c
    MOV dword ptr [ESP + 0x18],EDI      ; 00434438
    TEST EBP,EBP                        ; 0043443c
    JLE 0x004344d0                      ; 0043443e
        ;   XREF to: 004344d0 (CONDITIONAL_JUMP)  ; LAB_004344d0
    MOV EBX,0x76814c                    ; 00434444 | DAT_0076814c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00434449
        ;   Label: LAB_00434449
    MOV EDI,dword ptr [0x00767b3c]      ; 0043444d | DAT_00767b3c
    INC EAX                             ; 00434453
    CMP EAX,EDI                         ; 00434454
    JNZ 0x0043445a                      ; 00434456
        ;   XREF to: 0043445a (CONDITIONAL_JUMP)  ; LAB_0043445a
    XOR EAX,EDI                         ; 00434458
    IMUL EAX,EAX,0x30                   ; 0043445a
        ;   Label: LAB_0043445a
    MOV EBP,0x76814c                    ; 0043445d | DAT_0076814c
    MOV EDX,EBX                         ; 00434462
    MOV ECX,dword ptr [EBX]             ; 00434464 | DAT_0076814c | DAT_0076817c
    MOV ESI,dword ptr [EBX + 0x8]       ; 00434466 | DAT_00768154 | DAT_00768184
    ADD EBP,EAX                         ; 00434469
    XOR EAX,EAX                         ; 0043446b
    CMP ECX,ESI                         ; 0043446d
    JL 0x00434476                       ; 0043446f
        ;   XREF to: 00434476 (CONDITIONAL_JUMP)  ; LAB_00434476
    MOV EAX,0x1                         ; 00434471
    MOV EDI,dword ptr [EBP + 0x8]       ; 00434476 | DAT_00768154
        ;   Label: LAB_00434476
    CMP EDI,dword ptr [EBP]             ; 00434479 | DAT_0076814c
    JG 0x00434480                       ; 0043447c
        ;   XREF to: 00434480 (CONDITIONAL_JUMP)  ; LAB_00434480
    OR AL,0x2                           ; 0043447e
    CMP EAX,0x3                         ; 00434480
        ;   Label: LAB_00434480
    JA 0x004344b6                       ; 00434483
        ;   XREF to: 004344b6 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4341cc]  ; 00434485 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00767b40],0x30 ; 0043448c | DAT_00767b40
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00434493
    MOV ESI,EDX                         ; 00434498
    ADD EDI,0x767b4c                    ; 0043449a | DAT_00767b4c
    PUSH EDI                            ; 004344a0 | DAT_00767b4c
    MOV EAX,ECX                         ; 004344a1
    SHR ECX,0x2                         ; 004344a3
    MOVSD.REP ES:EDI,ESI                ; 004344a6 | DAT_0076817c | DAT_00767b4c | DAT_00768180
    MOV CL,AL                           ; 004344a8
    AND CL,0x3                          ; 004344aa
    MOVSB.REP ES:EDI,ESI                ; 004344ad | DAT_00768180 | DAT_00767b50
    POP EDI                             ; 004344af
    INC dword ptr [0x00767b40]          ; 004344b0 | DAT_00767b40
    MOV EAX,dword ptr [ESP + 0x18]      ; 004344b6
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x00767b3c]      ; 004344ba | DAT_00767b3c
    INC EAX                             ; 004344c0
    ADD EBX,0x30                        ; 004344c1
    MOV dword ptr [ESP + 0x18],EAX      ; 004344c4
    CMP EAX,EDX                         ; 004344c8
    JL 0x00434449                       ; 004344ca
        ;   XREF to: 00434449 (CONDITIONAL_JUMP)  ; LAB_00434449
    MOV ECX,dword ptr [0x00767b40]      ; 004344d0 | DAT_00767b40
        ;   Label: LAB_004344d0
    CMP ECX,0x3                         ; 004344d6
    JL 0x00434714                       ; 004344d9
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    XOR EBX,EBX                         ; 004344df
    MOV dword ptr [ESP + 0xc],EBX       ; 004344e1
    TEST ECX,ECX                        ; 004344e5
    JLE 0x0043457f                      ; 004344e7
        ;   XREF to: 0043457f (CONDITIONAL_JUMP)  ; LAB_0043457f
    MOV EBX,0x767b4c                    ; 004344ed | DAT_00767b4c
    MOV EAX,dword ptr [ESP + 0xc]       ; 004344f2
        ;   Label: LAB_004344f2
    MOV EBP,dword ptr [0x00767b40]      ; 004344f6 | DAT_00767b40
    INC EAX                             ; 004344fc
    CMP EAX,EBP                         ; 004344fd
    JNZ 0x00434503                      ; 004344ff
        ;   XREF to: 00434503 (CONDITIONAL_JUMP)  ; LAB_00434503
    XOR EAX,EBP                         ; 00434501
    IMUL EAX,EAX,0x30                   ; 00434503
        ;   Label: LAB_00434503
    MOV EBP,0x767b4c                    ; 00434506 | DAT_00767b4c
    MOV EDX,EBX                         ; 0043450b
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043450d | DAT_00767b54 | DAT_00767b84
    MOV ESI,dword ptr [EBX]             ; 00434510 | DAT_00767b4c | DAT_00767b7c
    NEG ECX                             ; 00434512
    ADD EBP,EAX                         ; 00434514
    XOR EAX,EAX                         ; 00434516
    CMP ECX,ESI                         ; 00434518
    JL 0x00434521                       ; 0043451a
        ;   XREF to: 00434521 (CONDITIONAL_JUMP)  ; LAB_00434521
    MOV EAX,0x1                         ; 0043451c
    MOV ECX,dword ptr [EBP + 0x8]       ; 00434521 | DAT_00767b54
        ;   Label: LAB_00434521
    MOV EDI,dword ptr [EBP]             ; 00434524 | DAT_00767b4c
    NEG ECX                             ; 00434527
    CMP ECX,EDI                         ; 00434529
    JL 0x0043452f                       ; 0043452b
        ;   XREF to: 0043452f (CONDITIONAL_JUMP)  ; LAB_0043452f
    OR AL,0x2                           ; 0043452d
    CMP EAX,0x3                         ; 0043452f
        ;   Label: LAB_0043452f
    JA 0x00434565                       ; 00434532
        ;   XREF to: 00434565 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4341dc]  ; 00434534 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00767b44],0x30 ; 0043453b | DAT_00767b44
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 00434542
    MOV ESI,EDX                         ; 00434547
    ADD EDI,0x76874c                    ; 00434549 | DAT_0076874c
    PUSH EDI                            ; 0043454f | DAT_0076874c
    MOV EAX,ECX                         ; 00434550
    SHR ECX,0x2                         ; 00434552
    MOVSD.REP ES:EDI,ESI                ; 00434555 | DAT_00767b4c | DAT_0076874c | DAT_00767b50
    MOV CL,AL                           ; 00434557
    AND CL,0x3                          ; 00434559
    MOVSB.REP ES:EDI,ESI                ; 0043455c | DAT_00767b50 | DAT_00768750
    POP EDI                             ; 0043455e
    INC dword ptr [0x00767b44]          ; 0043455f | DAT_00767b44
    MOV EDX,dword ptr [ESP + 0xc]       ; 00434565
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00767b40]      ; 00434569 | DAT_00767b40
    INC EDX                             ; 0043456f
    ADD EBX,0x30                        ; 00434570
    MOV dword ptr [ESP + 0xc],EDX       ; 00434573
    CMP EDX,ECX                         ; 00434577
    JL 0x004344f2                       ; 00434579
        ;   XREF to: 004344f2 (CONDITIONAL_JUMP)  ; LAB_004344f2
    MOV EBX,dword ptr [0x00767b44]      ; 0043457f | DAT_00767b44
        ;   Label: LAB_0043457f
    CMP EBX,0x3                         ; 00434585
    JL 0x00434714                       ; 00434588
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    XOR ESI,ESI                         ; 0043458e
    MOV dword ptr [ESP + 0x10],ESI      ; 00434590
    TEST EBX,EBX                        ; 00434594
    JLE 0x00434629                      ; 00434596
        ;   XREF to: 00434629 (CONDITIONAL_JUMP)  ; LAB_00434629
    MOV EBX,0x76874c                    ; 0043459c | DAT_0076874c
    MOV EAX,dword ptr [ESP + 0x10]      ; 004345a1
        ;   Label: LAB_004345a1
    MOV EBP,dword ptr [0x00767b44]      ; 004345a5 | DAT_00767b44
    INC EAX                             ; 004345ab
    CMP EAX,EBP                         ; 004345ac
    JNZ 0x004345b2                      ; 004345ae
        ;   XREF to: 004345b2 (CONDITIONAL_JUMP)  ; LAB_004345b2
    XOR EAX,EBP                         ; 004345b0
    IMUL EAX,EAX,0x30                   ; 004345b2
        ;   Label: LAB_004345b2
    MOV EBP,0x76874c                    ; 004345b5 | DAT_0076874c
    MOV EDX,EBX                         ; 004345ba
    MOV ECX,dword ptr [EBX + 0x4]       ; 004345bc | DAT_00768750 | DAT_00768780
    MOV ESI,dword ptr [EBX + 0x8]       ; 004345bf | DAT_00768754 | DAT_00768784
    ADD EBP,EAX                         ; 004345c2
    XOR EAX,EAX                         ; 004345c4
    CMP ECX,ESI                         ; 004345c6
    JL 0x004345cf                       ; 004345c8
        ;   XREF to: 004345cf (CONDITIONAL_JUMP)  ; LAB_004345cf
    MOV EAX,0x1                         ; 004345ca
    MOV EDI,dword ptr [EBP + 0x8]       ; 004345cf | DAT_00768754
        ;   Label: LAB_004345cf
    CMP EDI,dword ptr [EBP + 0x4]       ; 004345d2 | DAT_00768750
    JG 0x004345d9                       ; 004345d5
        ;   XREF to: 004345d9 (CONDITIONAL_JUMP)  ; LAB_004345d9
    OR AL,0x2                           ; 004345d7
    CMP EAX,0x3                         ; 004345d9
        ;   Label: LAB_004345d9
    JA 0x0043460f                       ; 004345dc
        ;   XREF to: 0043460f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4341ec]  ; 004345de | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00767b48],0x30 ; 004345e5 | DAT_00767b48
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 004345ec
    MOV ESI,EDX                         ; 004345f1
    ADD EDI,0x768d4c                    ; 004345f3 | DAT_00768d4c
    PUSH EDI                            ; 004345f9 | DAT_00768d4c
    MOV EAX,ECX                         ; 004345fa
    SHR ECX,0x2                         ; 004345fc
    MOVSD.REP ES:EDI,ESI                ; 004345ff | DAT_0076877c | DAT_00768d4c | DAT_00768780
    MOV CL,AL                           ; 00434601
    AND CL,0x3                          ; 00434603
    MOVSB.REP ES:EDI,ESI                ; 00434606 | DAT_00768780 | DAT_00768d50
    POP EDI                             ; 00434608
    INC dword ptr [0x00767b48]          ; 00434609 | DAT_00767b48
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043460f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00767b44]      ; 00434613 | DAT_00767b44
    INC EDX                             ; 00434619
    ADD EBX,0x30                        ; 0043461a
    MOV dword ptr [ESP + 0x10],EDX      ; 0043461d
    CMP EDX,ECX                         ; 00434621
    JL 0x004345a1                       ; 00434623
        ;   XREF to: 004345a1 (CONDITIONAL_JUMP)  ; LAB_004345a1
    MOV EBX,dword ptr [0x00767b48]      ; 00434629 | DAT_00767b48
        ;   Label: LAB_00434629
    CMP EBX,0x3                         ; 0043462f
    JL 0x00434714                       ; 00434632
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    XOR ESI,ESI                         ; 00434638
    MOV dword ptr [ESP + 0x14],ESI      ; 0043463a
    TEST EBX,EBX                        ; 0043463e
    JLE 0x004346d9                      ; 00434640
        ;   XREF to: 004346d9 (CONDITIONAL_JUMP)  ; LAB_004346d9
    MOV EBX,0x768d4c                    ; 00434646 | DAT_00768d4c
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043464b
        ;   Label: LAB_0043464b
    MOV EDI,dword ptr [0x00767b48]      ; 0043464f | DAT_00767b48
    INC EAX                             ; 00434655
    CMP EAX,EDI                         ; 00434656
    JNZ 0x0043465c                      ; 00434658
        ;   XREF to: 0043465c (CONDITIONAL_JUMP)  ; LAB_0043465c
    XOR EAX,EDI                         ; 0043465a
    IMUL EAX,EAX,0x30                   ; 0043465c
        ;   Label: LAB_0043465c
    MOV EBP,0x768d4c                    ; 0043465f | DAT_00768d4c
    MOV EDX,EBX                         ; 00434664
    MOV ECX,dword ptr [EBX + 0x8]       ; 00434666 | DAT_00768d54 | DAT_00768d84
    MOV ESI,dword ptr [EBX + 0x4]       ; 00434669 | DAT_00768d50 | DAT_00768d80
    NEG ECX                             ; 0043466c
    ADD EBP,EAX                         ; 0043466e
    XOR EAX,EAX                         ; 00434670
    CMP ECX,ESI                         ; 00434672
    JL 0x0043467b                       ; 00434674
        ;   XREF to: 0043467b (CONDITIONAL_JUMP)  ; LAB_0043467b
    MOV EAX,0x1                         ; 00434676
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043467b | DAT_00768d54
        ;   Label: LAB_0043467b
    MOV EDI,dword ptr [EBP + 0x4]       ; 0043467e | DAT_00768d50
    NEG ECX                             ; 00434681
    CMP ECX,EDI                         ; 00434683
    JL 0x00434689                       ; 00434685
        ;   XREF to: 00434689 (CONDITIONAL_JUMP)  ; LAB_00434689
    OR AL,0x2                           ; 00434687
    CMP EAX,0x3                         ; 00434689
        ;   Label: LAB_00434689
    JA 0x004346bf                       ; 0043468c
        ;   XREF to: 004346bf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4341fc]  ; 0043468e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 00434695 | DAT_00766c70
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043469c
    MOV ESI,EDX                         ; 004346a1
    ADD EDI,0x766c74                    ; 004346a3 | DAT_00766c74
    PUSH EDI                            ; 004346a9 | DAT_00766c74
    MOV EAX,ECX                         ; 004346aa
    SHR ECX,0x2                         ; 004346ac
    MOVSD.REP ES:EDI,ESI                ; 004346af | DAT_00768d4c | DAT_00766c74 | DAT_00768d50
    MOV CL,AL                           ; 004346b1
    AND CL,0x3                          ; 004346b3
    MOVSB.REP ES:EDI,ESI                ; 004346b6 | DAT_00768d50 | DAT_00766c78
    POP EDI                             ; 004346b8
    INC dword ptr [0x00766c70]          ; 004346b9 | DAT_00766c70
    MOV EDX,dword ptr [ESP + 0x14]      ; 004346bf
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x00767b48]      ; 004346c3 | DAT_00767b48
    INC EDX                             ; 004346c9
    ADD EBX,0x30                        ; 004346ca
    MOV dword ptr [ESP + 0x14],EDX      ; 004346cd
    CMP EDX,ECX                         ; 004346d1
    JL 0x0043464b                       ; 004346d3
        ;   XREF to: 0043464b (CONDITIONAL_JUMP)  ; LAB_0043464b
    MOV EBX,dword ptr [0x00766c70]      ; 004346d9 | DAT_00766c70
        ;   Label: LAB_004346d9
    CMP EBX,0x3                         ; 004346df
    JL 0x00434714                       ; 004346e2
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    MOV EAX,0x766c74                    ; 004346e4 | DAT_00766c74
    XOR EBP,EBP                         ; 004346e9
    TEST EBX,EBX                        ; 004346eb
    JLE 0x00434714                      ; 004346ed
        ;   XREF to: 00434714 (CONDITIONAL_JUMP)  ; LAB_00434714
    MOV ECX,dword ptr [EAX + 0x8]       ; 004346ef | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_004346ef
    TEST ECX,ECX                        ; 004346f2
    JNZ 0x0043491a                      ; 004346f4
        ;   XREF to: 0043491a (CONDITIONAL_JUMP)  ; LAB_0043491a
    MOV dword ptr [EAX + 0x8],0x1       ; 004346fa | DAT_00766c7c | DAT_00766cac
    MOV dword ptr [EAX],ECX             ; 00434701 | DAT_00766c74 | DAT_00766ca4
    MOV dword ptr [EAX + 0x4],ECX       ; 00434703 | DAT_00766c78 | DAT_00766ca8
    MOV EDX,dword ptr [0x00766c70]      ; 00434706 | DAT_00766c70
        ;   Label: LAB_00434706
    INC EBP                             ; 0043470c
    ADD EAX,0x30                        ; 0043470d
    CMP EBP,EDX                         ; 00434710
    JL 0x004346ef                       ; 00434712
        ;   XREF to: 004346ef (CONDITIONAL_JUMP)  ; LAB_004346ef
    XOR EAX,EAX                         ; 00434714
        ;   Label: LAB_00434714
    ADD ESP,0x1c                        ; 00434716
    POP EBP                             ; 00434719
    POP EDI                             ; 0043471a
    POP ESI                             ; 0043471b
    POP EBX                             ; 0043471c
    RET                                 ; 0043471d
    IMUL EAX,dword ptr [0x00767b40],0x30 ; 0043471e | DAT_00767b40
        ;   Label: caseD_1
    ADD EAX,0x767b4c                    ; 00434725 | DAT_00767b4c
    PUSH EAX                            ; 0043472a | DAT_00767b4c
    PUSH EDX                            ; 0043472b | DAT_0076817c
    PUSH EBP                            ; 0043472c
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0 ; 0043472d
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00767b40]      ; 00434732 | DAT_00767b40
    INC ESI                             ; 00434738
    ADD ESP,0xc                         ; 00434739
    MOV dword ptr [0x00767b40],ESI      ; 0043473c | DAT_00767b40
    JMP 0x004344b6                      ; 00434742
        ;   XREF to: 004344b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00767b40],0x30 ; 00434747 | DAT_00767b40
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043474e
    MOV ESI,EDX                         ; 00434753
    ADD EDI,0x767b4c                    ; 00434755 | DAT_00767b4c
    PUSH EDI                            ; 0043475b | DAT_00767b4c
    MOV EAX,ECX                         ; 0043475c
    SHR ECX,0x2                         ; 0043475e
    MOVSD.REP ES:EDI,ESI                ; 00434761 | DAT_0076817c | DAT_00767b4c | DAT_00768180
    MOV CL,AL                           ; 00434763
    AND CL,0x3                          ; 00434765
    MOVSB.REP ES:EDI,ESI                ; 00434768 | DAT_00768180 | DAT_00767b50
    POP EDI                             ; 0043476a
    MOV ECX,dword ptr [0x00767b40]      ; 0043476b | DAT_00767b40
    INC ECX                             ; 00434771
    MOV dword ptr [0x00767b40],ECX      ; 00434772 | DAT_00767b40
    IMUL EAX,ECX,0x30                   ; 00434778
    ADD EAX,0x767b4c                    ; 0043477b | DAT_00767b4c
    PUSH EAX                            ; 00434780 | DAT_00767b7c
    PUSH EBP                            ; 00434781
    PUSH EDX                            ; 00434782 | DAT_0076817c
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0 ; 00434783
        ;   XREF to: 004337a0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00767b40]      ; 00434788 | DAT_00767b40
    INC EDI                             ; 0043478e
    ADD ESP,0xc                         ; 0043478f
    MOV dword ptr [0x00767b40],EDI      ; 00434792 | DAT_00767b40
    JMP 0x004344b6                      ; 00434798
        ;   XREF to: 004344b6 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00767b44],0x30 ; 0043479d | DAT_00767b44
        ;   Label: caseD_1
    ADD EAX,0x76874c                    ; 004347a4 | DAT_0076874c
    PUSH EAX                            ; 004347a9 | DAT_0076874c
    PUSH EDX                            ; 004347aa | DAT_00767b4c
    PUSH EBP                            ; 004347ab
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0 ; 004347ac
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00767b44]      ; 004347b1 | DAT_00767b44
    INC ESI                             ; 004347b7
    ADD ESP,0xc                         ; 004347b8
    MOV dword ptr [0x00767b44],ESI      ; 004347bb | DAT_00767b44
    JMP 0x00434565                      ; 004347c1
        ;   XREF to: 00434565 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00767b44],0x30 ; 004347c6 | DAT_00767b44
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004347cd
    MOV ESI,EDX                         ; 004347d2
    ADD EDI,0x76874c                    ; 004347d4 | DAT_0076874c
    PUSH EDI                            ; 004347da | DAT_0076874c
    MOV EAX,ECX                         ; 004347db
    SHR ECX,0x2                         ; 004347dd
    MOVSD.REP ES:EDI,ESI                ; 004347e0 | DAT_00767b4c | DAT_0076874c | DAT_00767b50
    MOV CL,AL                           ; 004347e2
    AND CL,0x3                          ; 004347e4
    MOVSB.REP ES:EDI,ESI                ; 004347e7 | DAT_00767b50 | DAT_00768750
    POP EDI                             ; 004347e9
    MOV ECX,dword ptr [0x00767b44]      ; 004347ea | DAT_00767b44
    INC ECX                             ; 004347f0
    MOV dword ptr [0x00767b44],ECX      ; 004347f1 | DAT_00767b44
    IMUL EAX,ECX,0x30                   ; 004347f7
    ADD EAX,0x76874c                    ; 004347fa | DAT_0076874c
    PUSH EAX                            ; 004347ff | DAT_0076877c
    PUSH EBP                            ; 00434800
    PUSH EDX                            ; 00434801 | DAT_00767b4c
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0 ; 00434802
        ;   XREF to: 004338d0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00767b44]      ; 00434807 | DAT_00767b44
    INC EDI                             ; 0043480d
    ADD ESP,0xc                         ; 0043480e
    MOV dword ptr [0x00767b44],EDI      ; 00434811 | DAT_00767b44
    JMP 0x00434565                      ; 00434817
        ;   XREF to: 00434565 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00767b48],0x30 ; 0043481c | DAT_00767b48
        ;   Label: caseD_1
    ADD EAX,0x768d4c                    ; 00434823 | DAT_00768d4c
    PUSH EAX                            ; 00434828 | DAT_00768d4c
    PUSH EDX                            ; 00434829 | DAT_0076877c
    PUSH EBP                            ; 0043482a
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00 ; 0043482b
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00767b48]      ; 00434830 | DAT_00767b48
    INC ESI                             ; 00434836
    ADD ESP,0xc                         ; 00434837
    MOV dword ptr [0x00767b48],ESI      ; 0043483a | DAT_00767b48
    JMP 0x0043460f                      ; 00434840
        ;   XREF to: 0043460f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00767b48],0x30 ; 00434845 | DAT_00767b48
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043484c
    MOV ESI,EDX                         ; 00434851
    ADD EDI,0x768d4c                    ; 00434853 | DAT_00768d4c
    PUSH EDI                            ; 00434859 | DAT_00768d4c
    MOV EAX,ECX                         ; 0043485a
    SHR ECX,0x2                         ; 0043485c
    MOVSD.REP ES:EDI,ESI                ; 0043485f | DAT_0076877c | DAT_00768d4c | DAT_00768780
    MOV CL,AL                           ; 00434861
    AND CL,0x3                          ; 00434863
    MOVSB.REP ES:EDI,ESI                ; 00434866 | DAT_00768780 | DAT_00768d50
    POP EDI                             ; 00434868
    MOV ECX,dword ptr [0x00767b48]      ; 00434869 | DAT_00767b48
    INC ECX                             ; 0043486f
    MOV dword ptr [0x00767b48],ECX      ; 00434870 | DAT_00767b48
    IMUL EAX,ECX,0x30                   ; 00434876
    ADD EAX,0x768d4c                    ; 00434879 | DAT_00768d4c
    PUSH EAX                            ; 0043487e | DAT_00768d7c
    PUSH EBP                            ; 0043487f
    PUSH EDX                            ; 00434880 | DAT_0076877c
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00 ; 00434881
        ;   XREF to: 00433a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_00433a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00767b48]      ; 00434886 | DAT_00767b48
    INC EDI                             ; 0043488c
    ADD ESP,0xc                         ; 0043488d
    MOV dword ptr [0x00767b48],EDI      ; 00434890 | DAT_00767b48
    JMP 0x0043460f                      ; 00434896
        ;   XREF to: 0043460f (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 0043489b | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 004348a2 | DAT_00766c74
    PUSH EAX                            ; 004348a7 | DAT_00766c74
    PUSH EDX                            ; 004348a8 | DAT_00768d4c
    PUSH EBP                            ; 004348a9
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 004348aa
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x00766c70]      ; 004348af | DAT_00766c70
    INC ESI                             ; 004348b5
    ADD ESP,0xc                         ; 004348b6
    MOV dword ptr [0x00766c70],ESI      ; 004348b9 | DAT_00766c70
    JMP 0x004346bf                      ; 004348bf
        ;   XREF to: 004346bf (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x00766c70],0x30 ; 004348c4 | DAT_00766c70
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 004348cb
    MOV ESI,EDX                         ; 004348d0
    ADD EDI,0x766c74                    ; 004348d2 | DAT_00766c74
    PUSH EDI                            ; 004348d8 | DAT_00766c74
    MOV EAX,ECX                         ; 004348d9
    SHR ECX,0x2                         ; 004348db
    MOVSD.REP ES:EDI,ESI                ; 004348de | DAT_00768d4c | DAT_00766c74 | DAT_00768d50
    MOV CL,AL                           ; 004348e0
    AND CL,0x3                          ; 004348e2
    MOVSB.REP ES:EDI,ESI                ; 004348e5 | DAT_00768d50 | DAT_00766c78
    POP EDI                             ; 004348e7
    MOV ECX,dword ptr [0x00766c70]      ; 004348e8 | DAT_00766c70
    INC ECX                             ; 004348ee
    MOV dword ptr [0x00766c70],ECX      ; 004348ef | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 004348f5
    ADD EAX,0x766c74                    ; 004348f8 | DAT_00766c74
    PUSH EAX                            ; 004348fd | DAT_00766ca4
    PUSH EBP                            ; 004348fe
    PUSH EDX                            ; 004348ff | DAT_00768d4c
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 00434900
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x00766c70]      ; 00434905 | DAT_00766c70
    INC EDI                             ; 0043490b
    ADD ESP,0xc                         ; 0043490c
    MOV dword ptr [0x00766c70],EDI      ; 0043490f | DAT_00766c70
    JMP 0x004346bf                      ; 00434915
        ;   XREF to: 004346bf (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP ECX,dword ptr [EAX]             ; 0043491a | DAT_00766ca4
        ;   Label: LAB_0043491a
    JGE 0x00434925                      ; 0043491c
        ;   XREF to: 00434925 (CONDITIONAL_JUMP)  ; LAB_00434925
    MOV dword ptr [EAX],ECX             ; 0043491e | DAT_00766ca4
    JMP 0x00434706                      ; 00434920
        ;   XREF to: 00434706 (UNCONDITIONAL_JUMP)  ; LAB_00434706
    MOV EDX,ECX                         ; 00434925
        ;   Label: LAB_00434925
    MOV ESI,dword ptr [EAX]             ; 00434927 | DAT_00766ca4
    NEG EDX                             ; 00434929
    CMP EDX,ESI                         ; 0043492b
    JLE 0x00434936                      ; 0043492d
        ;   XREF to: 00434936 (CONDITIONAL_JUMP)  ; LAB_00434936
    MOV dword ptr [EAX],EDX             ; 0043492f | DAT_00766ca4
    JMP 0x00434706                      ; 00434931
        ;   XREF to: 00434706 (UNCONDITIONAL_JUMP)  ; LAB_00434706
    MOV EDI,dword ptr [EAX + 0x8]       ; 00434936 | DAT_00766cac
        ;   Label: LAB_00434936
    MOV ECX,dword ptr [EAX + 0x4]       ; 00434939 | DAT_00766ca8
    CMP ECX,EDI                         ; 0043493c
    JLE 0x00434948                      ; 0043493e
        ;   XREF to: 00434948 (CONDITIONAL_JUMP)  ; LAB_00434948
    MOV dword ptr [EAX + 0x4],EDI       ; 00434940 | DAT_00766ca8
    JMP 0x00434706                      ; 00434943
        ;   XREF to: 00434706 (UNCONDITIONAL_JUMP)  ; LAB_00434706
    CMP EDX,ECX                         ; 00434948
        ;   Label: LAB_00434948
    JLE 0x00434706                      ; 0043494a
        ;   XREF to: 00434706 (CONDITIONAL_JUMP)  ; LAB_00434706
    MOV dword ptr [EAX + 0x4],EDX       ; 00434950 | DAT_00766ca8
    JMP 0x00434706                      ; 00434953
        ;   XREF to: 00434706 (UNCONDITIONAL_JUMP)  ; LAB_00434706

