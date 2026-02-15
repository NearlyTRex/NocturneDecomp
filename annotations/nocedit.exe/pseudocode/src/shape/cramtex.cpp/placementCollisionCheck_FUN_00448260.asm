; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_cramtex_cpp_placementCollisionCheck_FUN_00448260(int layer_id,int start_x,int start_y,int width,int height)
;
; Parameters:
; int              Stack[0x4]:4   layer_id
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   start_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_0083c1a0
;   undefined4 DAT_0083c1ac
;   undefined4 DAT_0083c1b0
;   undefined4 DAT_0083c1b4
;   undefined4 DAT_0083c1b8
;   CCramTex[1] g_CramSortedTextureEntries
;   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
;   undefined4 g_CramSortedTextureEntries[0].placement_bottom
;   undefined4 g_CramSortedTextureEntries[0].working_right
;   undefined4 g_CramSortedTextureEntries[0].working_top
;   undefined4 g_CramSortedTextureEntries[0].working_width
;   SCramRectangle[50] g_CramRectangles
;   undefined4 DAT_00840c18
;   undefined4 DAT_00840c1c
;   undefined4 DAT_00840c20
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448260
        ;   Label: shape_cramtex.cpp_placementCollisionCheck_FUN_00448260
    PUSH ESI                            ; 00448261
    PUSH EDI                            ; 00448262
    PUSH EBP                            ; 00448263
    SUB ESP,0x8                         ; 00448264
    MOV EBX,dword ptr [ESP + 0x20]      ; 00448267
    MOV ECX,dword ptr [ESP + 0x24]      ; 0044826b
    MOV EDX,dword ptr [0x0084a860]      ; 0044826f | g_CramRectangleCount
    TEST EDX,EDX                        ; 00448275
    JLE 0x004482ac                      ; 00448277
        ;   XREF to: 004482ac (CONDITIONAL_JUMP)  ; LAB_004482ac
    MOV ESI,EDX                         ; 00448279
    SHL EDX,0x2                         ; 0044827b
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0044827e
    ADD EDX,ESI                         ; 00448282
    XOR EAX,EAX                         ; 00448284
    SHL EDX,0x3                         ; 00448286
    CMP EDI,dword ptr [EAX + 0x840c14]  ; 00448289 | g_CramRectangles | DAT_00840c3c
        ;   Label: LAB_00448289
    JNZ 0x004482a5                      ; 0044828f
        ;   XREF to: 004482a5 (CONDITIONAL_JUMP)  ; LAB_004482a5
    CMP EBX,dword ptr [EAX + 0x840c18]  ; 00448291 | DAT_00840c18 | DAT_00840c40
    JNZ 0x004482a5                      ; 00448297
        ;   XREF to: 004482a5 (CONDITIONAL_JUMP)  ; LAB_004482a5
    CMP ECX,dword ptr [EAX + 0x840c1c]  ; 00448299 | DAT_00840c1c | DAT_00840c44
    JZ 0x00448322                       ; 0044829f
        ;   XREF to: 00448322 (CONDITIONAL_JUMP)  ; LAB_00448322
    ADD EAX,0x28                        ; 004482a5
        ;   Label: LAB_004482a5
    CMP EAX,EDX                         ; 004482a8
    JL 0x00448289                       ; 004482aa
        ;   XREF to: 00448289 (CONDITIONAL_JUMP)  ; LAB_00448289
    MOV EDX,dword ptr [0x0084a860]      ; 004482ac | g_CramRectangleCount
        ;   Label: LAB_004482ac
    LEA EAX,[EDX*0x4 + 0x0]             ; 004482b2
    ADD EAX,EDX                         ; 004482b9
    SHL EAX,0x3                         ; 004482bb
    XOR ESI,ESI                         ; 004482be
    ADD EAX,0x840c14                    ; 004482c0 | g_CramRectangles
    MOV dword ptr [ESP],ESI             ; 004482c5
    MOV dword ptr [ESP + 0x4],EAX       ; 004482c8
    CMP dword ptr [ESP],0x0             ; 004482cc
        ;   Label: LAB_004482cc
    JZ 0x0044832a                       ; 004482d0
        ;   XREF to: 0044832a (CONDITIONAL_JUMP)  ; LAB_0044832a
    MOV ESI,dword ptr [0x0084a868]      ; 004482d2 | g_CramMinPlacementX
    MOV EDI,dword ptr [0x0084a86c]      ; 004482d8 | g_CramMinPlacementY
    ADD ESI,ECX                         ; 004482de
        ;   Label: LAB_004482de
    ADD EDI,EBX                         ; 004482e0
    MOV EDX,dword ptr [0x0084a85c]      ; 004482e2 | g_CramPlacedTextureCount
    DEC EDX                             ; 004482e8
    TEST EDX,EDX                        ; 004482e9
    JL 0x00448312                       ; 004482eb
        ;   XREF to: 00448312 (CONDITIONAL_JUMP)  ; LAB_00448312
    IMUL EAX,EDX,0x4c                   ; 004482ed
    ADD EAX,0x83c1dc                    ; 004482f0 | g_CramSortedTextureEntries
    MOV EBP,dword ptr [EAX + 0x10]      ; 004482f5 | g_CramSortedTextureEntries[0].assigned_map_number | DAT_0083c1a0
        ;   Label: LAB_004482f5
    CMP EBP,dword ptr [ESP + 0x1c]      ; 004482f8
    JNZ 0x00448338                      ; 004482fc
        ;   XREF to: 00448338 (CONDITIONAL_JUMP)  ; LAB_00448338
    CMP EBX,dword ptr [EAX + 0x24]      ; 004482fe | g_CramSortedTextureEntries[0].working_top | DAT_0083c1b4
    JGE 0x00448338                      ; 00448301
        ;   XREF to: 00448338 (CONDITIONAL_JUMP)  ; LAB_00448338
    CMP ECX,dword ptr [EAX + 0x28]      ; 00448303 | g_CramSortedTextureEntries[0].working_width | DAT_0083c1b8
    JGE 0x00448338                      ; 00448306
        ;   XREF to: 00448338 (CONDITIONAL_JUMP)  ; LAB_00448338
    CMP EDI,dword ptr [EAX + 0x1c]      ; 00448308 | g_CramSortedTextureEntries[0].placement_bottom | DAT_0083c1ac
    JLE 0x00448338                      ; 0044830b
        ;   XREF to: 00448338 (CONDITIONAL_JUMP)  ; LAB_00448338
    CMP ESI,dword ptr [EAX + 0x20]      ; 0044830d | g_CramSortedTextureEntries[0].working_right | DAT_0083c1b0
    JLE 0x00448338                      ; 00448310
        ;   XREF to: 00448338 (CONDITIONAL_JUMP)  ; LAB_00448338
    TEST EDX,EDX                        ; 00448312
        ;   Label: LAB_00448312
    JL 0x00448342                       ; 00448314
        ;   XREF to: 00448342 (CONDITIONAL_JUMP)  ; LAB_00448342
    MOV ESI,dword ptr [ESP]             ; 00448316
        ;   Label: LAB_00448316
    INC ESI                             ; 00448319
    MOV dword ptr [ESP],ESI             ; 0044831a
    CMP ESI,0x1                         ; 0044831d
    JLE 0x004482cc                      ; 00448320
        ;   XREF to: 004482cc (CONDITIONAL_JUMP)  ; LAB_004482cc
    ADD ESP,0x8                         ; 00448322
        ;   Label: LAB_00448322
    POP EBP                             ; 00448325
    POP EDI                             ; 00448326
    POP ESI                             ; 00448327
    POP EBX                             ; 00448328
    RET                                 ; 00448329
    MOV ESI,dword ptr [0x0084a86c]      ; 0044832a | g_CramMinPlacementY
        ;   Label: LAB_0044832a
    MOV EDI,dword ptr [0x0084a868]      ; 00448330 | g_CramMinPlacementX
    JMP 0x004482de                      ; 00448336
        ;   XREF to: 004482de (UNCONDITIONAL_JUMP)  ; LAB_004482de
    DEC EDX                             ; 00448338
        ;   Label: LAB_00448338
    SUB EAX,0x4c                        ; 00448339
    TEST EDX,EDX                        ; 0044833c
    JGE 0x004482f5                      ; 0044833e
        ;   XREF to: 004482f5 (CONDITIONAL_JUMP)  ; LAB_004482f5
    JMP 0x00448312                      ; 00448340
        ;   XREF to: 00448312 (UNCONDITIONAL_JUMP)  ; LAB_00448312
    MOV EDX,dword ptr [ESP + 0x4]       ; 00448342
        ;   Label: LAB_00448342
    MOV dword ptr [EDX + 0x18],0x0      ; 00448346 | DAT_00840c2c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044834d
    MOV dword ptr [EDX + 0x24],0x1      ; 00448351 | DAT_00840c38
    MOV dword ptr [EDX],EAX             ; 00448358 | g_CramRectangles
    MOV dword ptr [EDX + 0x4],EBX       ; 0044835a | DAT_00840c18
    MOV dword ptr [EDX + 0x8],ECX       ; 0044835d | DAT_00840c1c
    MOV dword ptr [EDX + 0xc],EDI       ; 00448360 | DAT_00840c20
    MOV EAX,dword ptr [ESP]             ; 00448363
    MOV dword ptr [EDX + 0x14],EAX      ; 00448366 | DAT_00840c28
    LEA EAX,[EDX + 0x28]                ; 00448369
    MOV dword ptr [EDX + 0x10],ESI      ; 0044836c | DAT_00840c24
    MOV EDX,dword ptr [0x0084a860]      ; 0044836f | g_CramRectangleCount
    INC EDX                             ; 00448375
    MOV dword ptr [ESP + 0x4],EAX       ; 00448376
    MOV dword ptr [0x0084a860],EDX      ; 0044837a | g_CramRectangleCount
    JMP 0x00448316                      ; 00448380
        ;   XREF to: 00448316 (UNCONDITIONAL_JUMP)  ; LAB_00448316

