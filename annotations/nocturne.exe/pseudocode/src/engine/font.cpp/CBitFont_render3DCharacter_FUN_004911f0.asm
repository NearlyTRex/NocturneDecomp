; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_render3DCharacter_FUN_004911f0(CBitFont *this_ptr,int character_code,int x,int y,int right_x,int bottom_y,int color_mode)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   character_code
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
; int              Stack[0x14]:4   right_x
; int              Stack[0x18]:4   bottom_y
; int              Stack[0x1c]:4   color_mode
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
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
; XREF[1]:
;   engine_font.cpp_CBitFont_drawCharacter_FUN_004916c0 at 00491984
;
; Referenced Globals:
;   undefined4 DAT_005b9250
;   undefined1 DAT_005b9258
;   undefined1 DAT_005b9259
;   undefined1 DAT_005b925a
;   undefined1 DAT_005b925b
;   undefined4 DAT_006af554
;   undefined4 DAT_006af558
;   undefined4 DAT_006af55c
;   undefined4 DAT_006af560
;   undefined4 DAT_006af56c
;   undefined4 DAT_006af570
;   undefined4 DAT_006af574
;   undefined4 DAT_006af578
;   undefined4 DAT_006af57c
;   undefined4 DAT_006af584
;   ... and 21 more
;
; Called Functions:
;   engine_3d.c_renderPolygonWithRenderFlags_FUN_00408c10
;   engine_3d.c_setRenderAlpha_FUN_00408370
;   engine_matrix.c_projectCachedPoint_FUN_004cd240
;   engine_texture.cpp_ensureTextureLoaded_FUN_00545920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004911f0
        ;   Label: engine_font.cpp_CBitFont_render3DCharacter_FUN_004911f0
    PUSH ESI                            ; 004911f1
    PUSH EDI                            ; 004911f2
    PUSH EBP                            ; 004911f3
    SUB ESP,0x44                        ; 004911f4
    MOV EBX,dword ptr [ESP + 0x70]      ; 004911f7
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004911fb
    MOV EDX,dword ptr [ESP + 0x58]      ; 004911ff
    SHL EAX,0x2                         ; 00491203
    ADD EAX,EDX                         ; 00491206
    MOV EAX,dword ptr [EAX + 0x2168]    ; 00491208
    LEA ECX,[EAX*0x4 + 0x0]             ; 0049120e
    ADD ECX,EAX                         ; 00491215
    LEA ESI,[EDX + 0x4]                 ; 00491217
    SHL ECX,0x4                         ; 0049121a
    MOV EDI,0x5b9258                    ; 0049121d | DAT_005b9258
    ADD ESI,ECX                         ; 00491222
    PUSH EDI                            ; 00491224 | DAT_005b9258
    MOV AL,byte ptr [ESI]               ; 00491225
        ;   Label: LAB_00491225
    MOV byte ptr [EDI],AL               ; 00491227 | DAT_005b9258 | DAT_005b925a
    CMP AL,0x0                          ; 00491229
    JZ 0x0049123d                       ; 0049122b
        ;   XREF to: 0049123d (CONDITIONAL_JUMP)  ; LAB_0049123d
    MOV AL,byte ptr [ESI + 0x1]         ; 0049122d
    ADD ESI,0x2                         ; 00491230
    MOV byte ptr [EDI + 0x1],AL         ; 00491233 | DAT_005b9259 | DAT_005b925b
    ADD EDI,0x2                         ; 00491236
    CMP AL,0x0                          ; 00491239
    JNZ 0x00491225                      ; 0049123b
        ;   XREF to: 00491225 (CONDITIONAL_JUMP)  ; LAB_00491225
    POP EDI                             ; 0049123d
        ;   Label: LAB_0049123d
    PUSH 0x5b9250                       ; 0049123e | DAT_005b9250
    MOV EBP,0x4e1e                      ; 00491243
    MOV ESI,0x4e1d                      ; 00491248
    CALL engine_texture.cpp_ensureTextureLoaded_FUN_00545920 ; 0049124d
        ;   XREF to: 00545920 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_texture.cpp_ensureTextureLoaded_FUN_00545920(SMRGLTextureBasic * texture)
    MOV ECX,0x4e1c                      ; 00491252
    ADD ESP,0x4                         ; 00491257
    MOV EDI,0x4e1f                      ; 0049125a
    MOV dword ptr [ESP + 0x3c],ECX      ; 0049125f
    MOV dword ptr [ESP + 0x40],ESI      ; 00491263
    MOV dword ptr [ESP + 0x38],EDI      ; 00491267
    CMP EBX,-0x2                        ; 0049126b
    JZ 0x00491666                       ; 0049126e
        ;   XREF to: 00491666 (CONDITIONAL_JUMP)  ; LAB_00491666
    TEST EBX,EBX                        ; 00491274
    JL 0x0049168a                       ; 00491276
        ;   XREF to: 0049168a (CONDITIONAL_JUMP)  ; LAB_0049168a
    MOV EAX,EBX                         ; 0049127c
    LEA ECX,[EBX*0x4 + 0x0]             ; 0049127e
    SUB ECX,EBX                         ; 00491285
    XOR EAX,EBX                         ; 00491287
    MOV AL,byte ptr [ECX + 0x1c00648]   ; 00491289 | DAT_01c00648
    SHL EAX,0x8                         ; 0049128f
    MOV [0x006af574],EAX                ; 00491292 | DAT_006af574
    XOR EAX,EAX                         ; 00491297
    MOV AL,byte ptr [ECX + 0x1c00649]   ; 00491299
    SHL EAX,0x8                         ; 0049129f
    MOV [0x006af578],EAX                ; 004912a2 | DAT_006af578
    XOR EAX,EAX                         ; 004912a7
    MOV AL,byte ptr [ECX + 0x1c0064a]   ; 004912a9
    SHL EAX,0x8                         ; 004912af
        ;   Label: LAB_004912af
    MOV [0x006af57c],EAX                ; 004912b2 | DAT_006af57c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004912b7
        ;   Label: LAB_004912b7
    LEA ECX,[EAX*0x4 + 0x0]             ; 004912bb
    MOV EBX,0x10000                     ; 004912c2
    SUB ECX,EAX                         ; 004912c7
    MOV EDX,dword ptr [ESP + 0x40]      ; 004912c9
    MOV EAX,ECX                         ; 004912cd
    LEA ESI,[EDX*0x4 + 0x0]             ; 004912cf
    SHL EAX,0x4                         ; 004912d6
    SUB ESI,EDX                         ; 004912d9
    MOV dword ptr [EAX + 0x5c501c],EBX  ; 004912db | DAT_006af55c
    SHL ESI,0x4                         ; 004912e1
    MOV dword ptr [EAX + 0x5c5020],EBX  ; 004912e4 | DAT_006af560
    MOV ECX,0xc                         ; 004912ea
    LEA EDI,[ESI + 0x5c5014]            ; 004912ef | DAT_006af584
    LEA ESI,[EAX + 0x5c5014]            ; 004912f5 | DAT_006af554
    MOVSD.REP ES:EDI,ESI                ; 004912fb | DAT_006af554 | DAT_006af584 | DAT_006af558
    LEA ESI,[EBP*0x4 + 0x0]             ; 004912fd
    SUB ESI,EBP                         ; 00491304
    SHL ESI,0x4                         ; 00491306
    MOV ECX,0xc                         ; 00491309
    LEA EDI,[ESI + 0x5c5014]            ; 0049130e | DAT_006af5b4
    LEA ESI,[EAX + 0x5c5014]            ; 00491314 | DAT_006af554
    MOV EDX,dword ptr [ESP + 0x38]      ; 0049131a
    MOVSD.REP ES:EDI,ESI                ; 0049131e | DAT_006af554 | DAT_006af5b4 | DAT_006af558
    LEA ESI,[EDX*0x4 + 0x0]             ; 00491320
    MOV ECX,0xc                         ; 00491327
    SUB ESI,EDX                         ; 0049132c
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0049132e
    SHL ESI,0x4                         ; 00491332
    INC EDX                             ; 00491335
    LEA EDI,[ESI + 0x5c5014]            ; 00491336 | DAT_006af5e4
    LEA ESI,[EAX + 0x5c5014]            ; 0049133c | DAT_006af554
    MOV dword ptr [ESP + 0x6c],EDX      ; 00491342
    MOVSD.REP ES:EDI,ESI                ; 00491346 | DAT_006af554 | DAT_006af5e4 | DAT_006af558
    MOV EAX,dword ptr [ESP + 0x60]      ; 00491348
    MOV EDI,dword ptr [ESP + 0x68]      ; 0049134c
    MOV ECX,dword ptr [0x01c02594]      ; 00491350 | DAT_01c02594
    SHL EAX,0x10                        ; 00491356
    INC EDI                             ; 00491359
    SUB EAX,0x1000                      ; 0049135a
    MOV dword ptr [ESP + 0x68],EDI      ; 0049135f
    MOV dword ptr [ESP + 0x34],EAX      ; 00491363
    MOV ESI,EDI                         ; 00491367
    MOV EAX,dword ptr [ESP + 0x64]      ; 00491369
    SHL ESI,0x10                        ; 0049136d
    MOV EDI,EDX                         ; 00491370
    SHL EAX,0x10                        ; 00491372
    ADD ESI,0x1000                      ; 00491375
    SHL EDI,0x10                        ; 0049137b
    SUB EAX,0x1000                      ; 0049137e
    ADD EDI,0x1000                      ; 00491383
    MOV dword ptr [ESP + 0x30],EAX      ; 00491389
    TEST ECX,ECX                        ; 0049138d
    JZ 0x004916a3                       ; 0049138f
        ;   XREF to: 004916a3 (CONDITIONAL_JUMP)  ; LAB_004916a3
    MOV EAX,dword ptr [ESP + 0x34]      ; 00491395
        ;   Label: LAB_00491395
    MOV EDX,dword ptr [0x01c00c50]      ; 00491399 | DAT_01c00c50
    MOV EBX,dword ptr [0x01c00c48]      ; 0049139f | DAT_01c00c48
    SUB EAX,EDX                         ; 004913a5
    MOV EDX,0x10000                     ; 004913a7
    IMUL EDX                            ; 004913ac
    IDIV EBX                            ; 004913ae
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004913b0
    LEA ECX,[EDX*0x4 + 0x0]             ; 004913b4
    SUB ECX,EDX                         ; 004913bb
    SHL ECX,0x4                         ; 004913bd
    MOV EDX,dword ptr [0x01c00c54]      ; 004913c0 | DAT_01c00c54
    MOV dword ptr [ECX + 0x5c5014],EAX  ; 004913c6 | DAT_006af554
    MOV EAX,dword ptr [ESP + 0x30]      ; 004913cc
    MOV EBX,dword ptr [0x01c00c4c]      ; 004913d0 | DAT_01c00c4c
    SUB EAX,EDX                         ; 004913d6
    MOV EDX,0x10000                     ; 004913d8
    IMUL EDX                            ; 004913dd
    IDIV EBX                            ; 004913df
    MOV EDX,0x10000                     ; 004913e1
    MOV dword ptr [ECX + 0x5c5018],EAX  ; 004913e6 | DAT_006af558
    MOV ECX,dword ptr [0x01c00c50]      ; 004913ec | DAT_01c00c50
    MOV EAX,ESI                         ; 004913f2
    MOV EBX,dword ptr [0x01c00c48]      ; 004913f4 | DAT_01c00c48
    SUB EAX,ECX                         ; 004913fa
    IMUL EDX                            ; 004913fc
    IDIV EBX                            ; 004913fe
    MOV EDX,EAX                         ; 00491400
    MOV EAX,dword ptr [ESP + 0x40]      ; 00491402
    LEA ECX,[EAX*0x4 + 0x0]             ; 00491406
    SUB ECX,EAX                         ; 0049140d
    SHL ECX,0x4                         ; 0049140f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00491412
    MOV dword ptr [ECX + 0x5c5014],EDX  ; 00491416 | DAT_006af584
    MOV EDX,dword ptr [0x01c00c54]      ; 0049141c | DAT_01c00c54
    MOV EBX,dword ptr [0x01c00c4c]      ; 00491422 | DAT_01c00c4c
    SUB EAX,EDX                         ; 00491428
    MOV EDX,0x10000                     ; 0049142a
    IMUL EDX                            ; 0049142f
    IDIV EBX                            ; 00491431
    MOV dword ptr [ECX + 0x5c5018],EAX  ; 00491433 | DAT_006af588
    MOV ECX,dword ptr [0x01c00c50]      ; 00491439 | DAT_01c00c50
    MOV EAX,ESI                         ; 0049143f
    MOV EDX,0x10000                     ; 00491441
    SUB EAX,ECX                         ; 00491446
    LEA ECX,[EBP*0x4 + 0x0]             ; 00491448
    MOV EBX,dword ptr [0x01c00c48]      ; 0049144f | DAT_01c00c48
    SUB ECX,EBP                         ; 00491455
    IMUL EDX                            ; 00491457
    IDIV EBX                            ; 00491459
    SHL ECX,0x4                         ; 0049145b
    MOV EDX,dword ptr [0x01c00c54]      ; 0049145e | DAT_01c00c54
    MOV dword ptr [ECX + 0x5c5014],EAX  ; 00491464 | DAT_006af5b4
    MOV EAX,EDI                         ; 0049146a
    MOV EBX,dword ptr [0x01c00c4c]      ; 0049146c | DAT_01c00c4c
    SUB EAX,EDX                         ; 00491472
    MOV EDX,0x10000                     ; 00491474
    IMUL EDX                            ; 00491479
    IDIV EBX                            ; 0049147b
    MOV EDX,0x10000                     ; 0049147d
    MOV dword ptr [ECX + 0x5c5018],EAX  ; 00491482 | DAT_006af5b8
    MOV EAX,dword ptr [ESP + 0x34]      ; 00491488
    MOV ECX,dword ptr [0x01c00c50]      ; 0049148c | DAT_01c00c50
    MOV EBX,dword ptr [0x01c00c48]      ; 00491492 | DAT_01c00c48
    SUB EAX,ECX                         ; 00491498
    IMUL EDX                            ; 0049149a
    IDIV EBX                            ; 0049149c
    MOV EDX,dword ptr [ESP + 0x38]      ; 0049149e
    LEA ECX,[EDX*0x4 + 0x0]             ; 004914a2
    SUB ECX,EDX                         ; 004914a9
    SHL ECX,0x4                         ; 004914ab
    MOV dword ptr [ECX + 0x5c5014],EAX  ; 004914ae | DAT_006af5e4
    MOV EDX,dword ptr [0x01c00c54]      ; 004914b4 | DAT_01c00c54
    MOV EAX,EDI                         ; 004914ba
    MOV EBX,dword ptr [0x01c00c4c]      ; 004914bc | DAT_01c00c4c
    SUB EAX,EDX                         ; 004914c2
    MOV EDX,0x10000                     ; 004914c4
    IMUL EDX                            ; 004914c9
    IDIV EBX                            ; 004914cb
    MOV dword ptr [ECX + 0x5c5018],EAX  ; 004914cd | DAT_006af5e8
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004914d3
    PUSH ECX                            ; 004914d7
    CALL engine_matrix.c_projectCachedPoint_FUN_004cd240 ; 004914d8
        ;   XREF to: 004cd240 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_004cd240(int cacheIndex)
    ADD ESP,0x4                         ; 004914dd
    MOV EBX,dword ptr [ESP + 0x40]      ; 004914e0
    PUSH EBX                            ; 004914e4
    CALL engine_matrix.c_projectCachedPoint_FUN_004cd240 ; 004914e5
        ;   XREF to: 004cd240 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_004cd240(int cacheIndex)
    ADD ESP,0x4                         ; 004914ea
    PUSH EBP                            ; 004914ed
    CALL engine_matrix.c_projectCachedPoint_FUN_004cd240 ; 004914ee
        ;   XREF to: 004cd240 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_004cd240(int cacheIndex)
    ADD ESP,0x4                         ; 004914f3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004914f6
    PUSH EAX                            ; 004914fa
    CALL engine_matrix.c_projectCachedPoint_FUN_004cd240 ; 004914fb
        ;   XREF to: 004cd240 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPoint_FUN_004cd240(int cacheIndex)
    ADD ESP,0x4                         ; 00491500
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00491503
    MOV EDX,dword ptr [ESP + 0x58]      ; 00491507
    SHL ECX,0x2                         ; 0049150b
    ADD ECX,EDX                         ; 0049150e
    MOV EAX,dword ptr [ECX + 0x2168]    ; 00491510
    SHL EAX,0x2                         ; 00491516
    ADD EAX,EDX                         ; 00491519
    MOV ECX,dword ptr [ECX + 0x1d68]    ; 0049151b
    MOV EDX,dword ptr [EAX + 0x144]     ; 00491521
    MOV EAX,dword ptr [EAX + 0x154]     ; 00491527
    SUB ECX,EDX                         ; 0049152d
    MOV dword ptr [ESP + 0x28],EAX      ; 0049152f
    MOV EDX,ECX                         ; 00491533
    MOV EBX,dword ptr [ESP + 0x28]      ; 00491535
    MOV EAX,ECX                         ; 00491539
    SAR EDX,0x1f                        ; 0049153b
    IDIV EBX                            ; 0049153e
    SHL EDX,0x10                        ; 00491540
    LEA EBX,[EDX + 0xfffff000]          ; 00491543
    MOV EAX,ECX                         ; 00491549
    MOV EDX,ECX                         ; 0049154b
    MOV ECX,dword ptr [ESP + 0x28]      ; 0049154d
    SAR EDX,0x1f                        ; 00491551
    IDIV ECX                            ; 00491554
    SHL EAX,0x10                        ; 00491556
    LEA EDX,[EAX + 0xfffff000]          ; 00491559
    LEA EAX,[EBX + ESI*0x1]             ; 0049155f
    SUB EAX,dword ptr [ESP + 0x34]      ; 00491562
    LEA ESI,[EDX + EDI*0x1]             ; 00491566
    MOV EDI,dword ptr [ESP + 0x30]      ; 00491569
    MOV ECX,dword ptr [0x01c02594]      ; 0049156d | DAT_01c02594
    SUB ESI,EDI                         ; 00491573
    TEST ECX,ECX                        ; 00491575
    JNZ 0x00491584                      ; 00491577
        ;   XREF to: 00491584 (CONDITIONAL_JUMP)  ; LAB_00491584
    ADD ESI,0x8000                      ; 00491579
    ADD EAX,0x8000                      ; 0049157f
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00491584
        ;   Label: LAB_00491584
    MOV dword ptr [ESP + 0x2c],ECX      ; 00491588
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0049158c
    SHL ECX,0x2                         ; 00491590
    SUB ECX,EDI                         ; 00491593
    SHL ECX,0x4                         ; 00491595
    MOV dword ptr [ECX + 0x5c502c],EBX  ; 00491598 | DAT_006af56c
    MOV dword ptr [ECX + 0x5c5030],EDX  ; 0049159e | DAT_006af570
    MOV ECX,dword ptr [ESP + 0x40]      ; 004915a4
    MOV dword ptr [ESP + 0x2c],ECX      ; 004915a8
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004915ac
    SHL ECX,0x2                         ; 004915b0
    SUB ECX,EDI                         ; 004915b3
    SHL ECX,0x4                         ; 004915b5
    MOV dword ptr [ECX + 0x5c502c],EAX  ; 004915b8 | DAT_006af59c
    MOV dword ptr [ECX + 0x5c5030],EDX  ; 004915be | DAT_006af5a0
    MOV EDX,EBP                         ; 004915c4
    LEA ECX,[EBP*0x4 + 0x0]             ; 004915c6
    SUB ECX,EBP                         ; 004915cd
    PUSH 0xffff                         ; 004915cf
    SHL ECX,0x4                         ; 004915d4
    MOV dword ptr [ESP + 0x24],EBP      ; 004915d7
    MOV dword ptr [ECX + 0x5c502c],EAX  ; 004915db | DAT_006af5cc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004915e1
    MOV dword ptr [ECX + 0x5c5030],ESI  ; 004915e5 | DAT_006af5d0
    LEA ECX,[EAX*0x4 + 0x0]             ; 004915eb
    XOR EDX,EBP                         ; 004915f2
    SUB ECX,EAX                         ; 004915f4
    MOV dword ptr [ESP + 0x18],EDX      ; 004915f6
    SHL ECX,0x4                         ; 004915fa
    MOV EAX,0x4                         ; 004915fd
    MOV dword ptr [ECX + 0x5c502c],EBX  ; 00491602 | DAT_006af5fc
    MOV dword ptr [ESP + 0x8],EAX       ; 00491608
    MOV dword ptr [ECX + 0x5c5030],ESI  ; 0049160c | DAT_006af600
    XOR ECX,ECX                         ; 00491612
    MOV EAX,dword ptr [ESP + 0x40]      ; 00491614
    MOV dword ptr [ESP + 0x14],ECX      ; 00491618
    MOV dword ptr [ESP + 0x1c],EAX      ; 0049161c
    MOV EAX,dword ptr [ESP + 0x44]      ; 00491620
    MOV dword ptr [ESP + 0x10],ECX      ; 00491624
    MOV dword ptr [ESP + 0x20],EAX      ; 00491628
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0049162c
    MOV dword ptr [ESP + 0xc],ECX       ; 00491630
    MOV dword ptr [ESP + 0x28],EAX      ; 00491634
    CALL engine_3d.c_setRenderAlpha_FUN_00408370 ; 00491638
        ;   XREF to: 00408370 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00408370(int alpha_color_value)
    MOV EDI,dword ptr [0x01c02584]      ; 0049163d | DAT_01c02584
    ADD ESP,0x4                         ; 00491643
    TEST EDI,EDI                        ; 00491646
    JZ 0x004916b4                       ; 00491648
        ;   XREF to: 004916b4 (CONDITIONAL_JUMP)  ; LAB_004916b4
    PUSH 0x0                            ; 0049164a
    PUSH 0x227                          ; 0049164c
    LEA EAX,[ESP + 0x8]                 ; 00491651
        ;   Label: LAB_00491651
    PUSH EAX                            ; 00491655
    CALL engine_3d.c_renderPolygonWithRenderFlags_FUN_00408c10 ; 00491656
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void engine_3d.c_renderPolygonWithRenderFlags_FUN_00408c10(SMRGLHeaderPrimitive * primitive, int render_flags, int render_state_flags)
    ADD ESP,0xc                         ; 0049165b
    ADD ESP,0x44                        ; 0049165e
    POP EBP                             ; 00491661
    POP EDI                             ; 00491662
    POP ESI                             ; 00491663
    POP EBX                             ; 00491664
    RET                                 ; 00491665
    MOV EAX,[0x01c70f64]                ; 00491666 | DAT_01c70f64
        ;   Label: LAB_00491666
    SHL EAX,0x8                         ; 0049166b
    MOV [0x006af574],EAX                ; 0049166e | DAT_006af574
    MOV EAX,[0x01c70f68]                ; 00491673 | DAT_01c70f68
    SHL EAX,0x8                         ; 00491678
    MOV [0x006af578],EAX                ; 0049167b | DAT_006af578
    MOV EAX,[0x01c70f6c]                ; 00491680 | DAT_01c70f6c
    JMP 0x004912af                      ; 00491685
        ;   XREF to: 004912af (UNCONDITIONAL_JUMP)  ; LAB_004912af
    MOV EAX,0xffff                      ; 0049168a
        ;   Label: LAB_0049168a
    MOV [0x006af578],EAX                ; 0049168f | DAT_006af578
    MOV [0x006af57c],EAX                ; 00491694 | DAT_006af57c
    MOV [0x006af574],EAX                ; 00491699 | DAT_006af574
    JMP 0x004912b7                      ; 0049169e
        ;   XREF to: 004912b7 (UNCONDITIONAL_JUMP)  ; LAB_004912b7
    ADD EDI,0x8000                      ; 004916a3
        ;   Label: LAB_004916a3
    ADD ESI,0x8000                      ; 004916a9
    JMP 0x00491395                      ; 004916af
        ;   XREF to: 00491395 (UNCONDITIONAL_JUMP)  ; LAB_00491395
    PUSH EDI                            ; 004916b4
        ;   Label: LAB_004916b4
    PUSH 0x207                          ; 004916b5
    JMP 0x00491651                      ; 004916ba
        ;   XREF to: 00491651 (UNCONDITIONAL_JUMP)  ; LAB_00491651

