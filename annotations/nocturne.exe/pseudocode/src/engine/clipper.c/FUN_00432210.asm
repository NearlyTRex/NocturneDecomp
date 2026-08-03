; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_clipper_c_FUN_00432210(uint param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
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
; Referenced Globals:
;   undefined1* switchdataD_004321bc = 00432497
;   undefined1* PTR_caseD_1_004321c0 = 0043276c
;   undefined1* PTR_caseD_3_004321c8 = 004324aa
;   undefined1* switchdataD_004321cc = 00432534
;   undefined1* PTR_caseD_1_004321d0 = 00432845
;   undefined1* PTR_caseD_3_004321d8 = 00432539
;   undefined1* switchdataD_004321dc = 004325cd
;   undefined1* PTR_caseD_1_004321e0 = 004328f4
;   undefined1* PTR_caseD_3_004321e8 = 004325d2
;   undefined1* switchdataD_004321ec = 00432670
;   undefined1* PTR_caseD_1_004321f0 = 004329a3
;   undefined1* PTR_caseD_3_004321f8 = 00432675
;   undefined1* switchdataD_004321fc = 00432b42
;   undefined1* PTR_caseD_1_00432200 = 00432bac
;   undefined1* PTR_caseD_3_00432208 = 00432b87
;   ... and 40 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00431730
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00431530
;   engine_clipper.c_interpolateVertexRightClip_FUN_00431630
;   engine_clipper.c_interpolateVertexTopClip_FUN_00431830
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_special.cpp_drawPolygon2_FUN_00532650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432210
        ;   Label: engine_clipper.c_FUN_00432210
    PUSH ESI                            ; 00432211
    PUSH EDI                            ; 00432212
    PUSH EBP                            ; 00432213
    SUB ESP,0x13c                       ; 00432214
    MOV EBP,dword ptr [ESP + 0x150]     ; 0043221a
    MOV ECX,0xffffffff                  ; 00432221
    XOR EAX,EAX                         ; 00432226
    XOR ESI,ESI                         ; 00432228
    TEST EBP,EBP                        ; 0043222a
    JLE 0x00432251                      ; 0043222c
        ;   XREF to: 00432251 (CONDITIONAL_JUMP)  ; LAB_00432251
    MOV EDX,dword ptr [ESP + 0x154]     ; 0043222e
    IMUL EBX,dword ptr [EDX],0x30       ; 00432235
        ;   Label: LAB_00432235
    MOV EBX,dword ptr [EBX + 0x5c5024]  ; 00432238 | DAT_005c5024
    TEST EBX,0x80000000                 ; 0043223e
    JZ 0x00432247                       ; 00432244
        ;   XREF to: 00432247 (CONDITIONAL_JUMP)  ; LAB_00432247
    INC ESI                             ; 00432246
    ADD EDX,0x4                         ; 00432247
        ;   Label: LAB_00432247
    INC EAX                             ; 0043224a
    AND ECX,EBX                         ; 0043224b
    CMP EAX,EBP                         ; 0043224d
    JL 0x00432235                       ; 0043224f
        ;   XREF to: 00432235 (CONDITIONAL_JUMP)  ; LAB_00432235
    CMP ESI,EBP                         ; 00432251
        ;   Label: LAB_00432251
    JNZ 0x0043225e                      ; 00432253
        ;   XREF to: 0043225e (CONDITIONAL_JUMP)  ; LAB_0043225e
    TEST CL,0xff                        ; 00432255
    JNZ 0x00432320                      ; 00432258
        ;   XREF to: 00432320 (CONDITIONAL_JUMP)  ; LAB_00432320
    TEST ESI,ESI                        ; 0043225e
        ;   Label: LAB_0043225e
    JNZ 0x0043240d                      ; 00432260
        ;   XREF to: 0043240d (CONDITIONAL_JUMP)  ; LAB_0043240d
    CMP dword ptr [0x01c02594],0x0      ; 00432266 | DAT_01c02594
    JZ 0x00432384                       ; 0043226d
        ;   XREF to: 00432384 (CONDITIONAL_JUMP)  ; LAB_00432384
    CMP dword ptr [0x006b0278],0x0      ; 00432273 | DAT_006b0278
    JNZ 0x00432384                      ; 0043227a
        ;   XREF to: 00432384 (CONDITIONAL_JUMP)  ; LAB_00432384
    XOR EAX,EAX                         ; 00432280
    TEST EBP,EBP                        ; 00432282
    JLE 0x004322b0                      ; 00432284
        ;   XREF to: 004322b0 (CONDITIONAL_JUMP)  ; LAB_004322b0
    MOV EBX,dword ptr [ESP + 0x154]     ; 00432286
    IMUL EDX,dword ptr [EBX],0x30       ; 0043228d
        ;   Label: LAB_0043228d
    INC EAX                             ; 00432290
    ADD EDX,0x5c5014                    ; 00432291 | DAT_005c5014
    ADD EBX,0x4                         ; 00432297
    MOV dword ptr [EAX*0x4 + 0x767270],EDX ; 0043229a | DAT_00767274 | DAT_00767278
    CMP EAX,EBP                         ; 004322a1
    JL 0x0043228d                       ; 004322a3
        ;   XREF to: 0043228d (CONDITIONAL_JUMP)  ; LAB_0043228d
    LEA EAX,[EAX]                       ; 004322a5
    LEA EDX,[EDX]                       ; 004322ab
    MOV EBX,EBX                         ; 004322ae
    CMP dword ptr [0x006b0280],0x0      ; 004322b0 | DAT_006b0280
        ;   Label: LAB_004322b0
    JZ 0x00432352                       ; 004322b7
        ;   XREF to: 00432352 (CONDITIONAL_JUMP)  ; LAB_00432352
    CMP EBP,0x3                         ; 004322bd
    JLE 0x00432332                      ; 004322c0
        ;   XREF to: 00432332 (CONDITIONAL_JUMP)  ; LAB_00432332
    LEA EAX,[EBP + -0x2]                ; 004322c6
    XOR EBX,EBX                         ; 004322c9
    MOV dword ptr [ESP + 0x124],EAX     ; 004322cb
    LEA EDI,[EAX*0x4 + 0x0]             ; 004322d2
    XOR ESI,ESI                         ; 004322d9
    TEST EDI,EDI                        ; 004322db
    JLE 0x00432307                      ; 004322dd
        ;   XREF to: 00432307 (CONDITIONAL_JUMP)  ; LAB_00432307
    MOV EAX,dword ptr [EBX + 0x76727c]  ; 004322df | DAT_0076727c | DAT_00767280
        ;   Label: LAB_004322df
    PUSH EAX                            ; 004322e5
    MOV EDX,dword ptr [EBX + 0x767278]  ; 004322e6 | DAT_00767278 | DAT_0076727c
    PUSH EDX                            ; 004322ec
    MOV ECX,dword ptr [0x00767274]      ; 004322ed | DAT_00767274
    PUSH ECX                            ; 004322f3
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 004322f4
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 004322f9
    TEST EAX,EAX                        ; 004322fc
    JZ 0x0043232f                       ; 004322fe
        ;   XREF to: 0043232f (CONDITIONAL_JUMP)  ; LAB_0043232f
    ADD EBX,0x4                         ; 00432300
        ;   Label: LAB_00432300
    CMP EBX,EDI                         ; 00432303
    JL 0x004322df                       ; 00432305
        ;   XREF to: 004322df (CONDITIONAL_JUMP)  ; LAB_004322df
    CMP ESI,dword ptr [ESP + 0x124]     ; 00432307
        ;   Label: LAB_00432307
    JNZ 0x00432352                      ; 0043230e
        ;   XREF to: 00432352 (CONDITIONAL_JUMP)  ; LAB_00432352
        ;   Label: LAB_0043230e
    MOV EAX,0x1                         ; 00432310
        ;   Label: LAB_00432310
    ADD ESP,0x13c                       ; 00432315
        ;   Label: LAB_00432315
    POP EBP                             ; 0043231b
    POP EDI                             ; 0043231c
    POP ESI                             ; 0043231d
    POP EBX                             ; 0043231e
    RET                                 ; 0043231f
    XOR ESI,EBP                         ; 00432320
        ;   Label: LAB_00432320
    MOV EAX,0x1                         ; 00432322
    MOV dword ptr [0x00766c70],ESI      ; 00432327 | DAT_00766c70
    JMP 0x00432315                      ; 0043232d
        ;   XREF to: 00432315 (UNCONDITIONAL_JUMP)  ; LAB_00432315
    INC ESI                             ; 0043232f
        ;   Label: LAB_0043232f
    JMP 0x00432300                      ; 00432330
        ;   XREF to: 00432300 (UNCONDITIONAL_JUMP)  ; LAB_00432300
    MOV EAX,[0x0076727c]                ; 00432332 | DAT_0076727c
        ;   Label: LAB_00432332
    PUSH EAX                            ; 00432337
    MOV EDX,dword ptr [0x00767278]      ; 00432338 | DAT_00767278
    PUSH EDX                            ; 0043233e
    MOV ECX,dword ptr [0x00767274]      ; 0043233f | DAT_00767274
    PUSH ECX                            ; 00432345
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00432346
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043234b
    TEST EAX,EAX                        ; 0043234e
    JMP 0x0043230e                      ; 00432350
        ;   XREF to: 0043230e (UNCONDITIONAL_JUMP)  ; LAB_0043230e
    MOV EBX,dword ptr [0x01c039a0]      ; 00432352 | DAT_01c039a0
        ;   Label: LAB_00432352
    PUSH EBX                            ; 00432358
    MOV ESI,dword ptr [0x01e52ef8]      ; 00432359 | DAT_01e52ef8
    PUSH EBP                            ; 0043235f
    INC ESI                             ; 00432360
    PUSH 0x767274                       ; 00432361 | DAT_00767274
    MOV dword ptr [0x01e52ef8],ESI      ; 00432366 | DAT_01e52ef8
    CALL engine_special.cpp_drawPolygon2_FUN_00532650 ; 0043236c
        ;   XREF to: 00532650 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00532650(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    MOV EAX,0x1                         ; 00432371
    ADD ESP,0xc                         ; 00432376
    ADD ESP,0x13c                       ; 00432379
    POP EBP                             ; 0043237f
    POP EDI                             ; 00432380
    POP ESI                             ; 00432381
    POP EBX                             ; 00432382
    RET                                 ; 00432383
    XOR EBX,EBX                         ; 00432384
        ;   Label: LAB_00432384
    MOV dword ptr [0x00766c70],EBP      ; 00432386 | DAT_00766c70
    MOV dword ptr [ESP + 0x134],EBX     ; 0043238c
    TEST EBP,EBP                        ; 00432393
    JLE 0x00432400                      ; 00432395
        ;   XREF to: 00432400 (CONDITIONAL_JUMP)  ; LAB_00432400
    MOV EDX,dword ptr [ESP + 0x154]     ; 00432397
    MOV EBX,0x766c74                    ; 0043239e | DAT_00766c74
    IMUL ESI,dword ptr [EDX],0x30       ; 004323a3
        ;   Label: LAB_004323a3
    MOV ECX,0x30                        ; 004323a6
    ADD ESI,0x5c5014                    ; 004323ab | DAT_005c5014
    MOV EDI,EBX                         ; 004323b1
    TEST EDI,0x7                        ; 004323b3
    JZ 0x004323c1                       ; 004323b9
        ;   XREF to: 004323c1 (CONDITIONAL_JUMP)  ; LAB_004323c1
    MOVSD ES:EDI,ESI                    ; 004323bb | DAT_005c5014 | DAT_00766c74 | DAT_00766ca4
    SUB ECX,0x4                         ; 004323bc
    JLE 0x004323de                      ; 004323bf
        ;   XREF to: 004323de (CONDITIONAL_JUMP)  ; LAB_004323de
    SUB ECX,0x8                         ; 004323c1
        ;   Label: LAB_004323c1
    JL 0x004323d2                       ; 004323c4
        ;   XREF to: 004323d2 (CONDITIONAL_JUMP)  ; LAB_004323d2
    FILD qword ptr [ESI]                ; 004323c6 | DAT_005c5018 | DAT_005c5020 | DAT_005c5014
    ADD ESI,0x8                         ; 004323c8
    FISTP qword ptr [EDI]               ; 004323cb | DAT_00766c78 | DAT_00766c80 | DAT_00766ca8
    ADD EDI,0x8                         ; 004323cd
    JMP 0x004323c1                      ; 004323d0
        ;   XREF to: 004323c1 (UNCONDITIONAL_JUMP)  ; LAB_004323c1
    ADD ECX,0x8                         ; 004323d2
        ;   Label: LAB_004323d2
    JLE 0x004323de                      ; 004323d5
        ;   XREF to: 004323de (CONDITIONAL_JUMP)  ; LAB_004323de
    MOVSD ES:EDI,ESI                    ; 004323d7 | DAT_005c5020 | DAT_00766c80
    SUB ECX,0x4                         ; 004323d8
    JLE 0x004323de                      ; 004323db
        ;   XREF to: 004323de (CONDITIONAL_JUMP)  ; LAB_004323de
    MOVSD ES:EDI,ESI                    ; 004323dd | DAT_005c5024 | DAT_00766c84
    MOV EAX,dword ptr [ESP + 0x134]     ; 004323de
        ;   Label: LAB_004323de
    ADD EDX,0x4                         ; 004323e5
    INC EAX                             ; 004323e8
    ADD EBX,0x30                        ; 004323e9
    MOV dword ptr [ESP + 0x134],EAX     ; 004323ec
    CMP EBP,EAX                         ; 004323f3
    JG 0x004323a3                       ; 004323f5
        ;   XREF to: 004323a3 (CONDITIONAL_JUMP)  ; LAB_004323a3
    LEA EAX,[EAX]                       ; 004323f7
    LEA EDX,[EDX]                       ; 004323fd
    XOR EAX,EAX                         ; 00432400
        ;   Label: LAB_00432400
    ADD ESP,0x13c                       ; 00432402
    POP EBP                             ; 00432408
    POP EDI                             ; 00432409
    POP ESI                             ; 0043240a
    POP EBX                             ; 0043240b
    RET                                 ; 0043240c
    XOR EAX,EAX                         ; 0043240d
        ;   Label: LAB_0043240d
    TEST EBP,EBP                        ; 0043240f
    JLE 0x00432430                      ; 00432411
        ;   XREF to: 00432430 (CONDITIONAL_JUMP)  ; LAB_00432430
    MOV EBX,dword ptr [ESP + 0x154]     ; 00432413
    IMUL EDX,dword ptr [EBX],0x30       ; 0043241a
        ;   Label: LAB_0043241a
    INC EAX                             ; 0043241d
    ADD EDX,0x5c5014                    ; 0043241e | DAT_005c5014
    ADD EBX,0x4                         ; 00432424
    MOV dword ptr [ESP + EAX*0x4 + 0x7c],EDX ; 00432427
    CMP EAX,EBP                         ; 0043242b
    JL 0x0043241a                       ; 0043242d
        ;   XREF to: 0043241a (CONDITIONAL_JUMP)  ; LAB_0043241a
    NOP                                 ; 0043242f
    MOV EAX,ESP                         ; 00432430
        ;   Label: LAB_00432430
    LEA EDX,[ESP + 0x80]                ; 00432432
    MOV dword ptr [0x00766c70],EBP      ; 00432439 | DAT_00766c70
    MOV dword ptr [ESP + 0x104],EBP     ; 0043243f
    XOR EBX,EBX                         ; 00432446
    XOR ESI,ESI                         ; 00432448
    XOR EDI,EDI                         ; 0043244a
    MOV dword ptr [0x00767b38],EBX      ; 0043244c | DAT_00767b38
    MOV dword ptr [ESP + 0x100],EAX     ; 00432452
    MOV dword ptr [ESP + 0x108],EDI     ; 00432459
    MOV EBX,dword ptr [EDX + EBP*0x4 + -0x4] ; 00432460
    TEST EBP,EBP                        ; 00432464
    JLE 0x004324c9                      ; 00432466
        ;   XREF to: 004324c9 (CONDITIONAL_JUMP)  ; LAB_004324c9
    LEA EBP,[ESP + 0x80]                ; 00432468
    MOV EDX,dword ptr [EBX]             ; 0043246f | DAT_005c5014
        ;   Label: LAB_0043246f
    MOV ECX,dword ptr [EBX + 0x8]       ; 00432471 | DAT_005c501c
    MOV EDI,dword ptr [EBP]             ; 00432474
    XOR EAX,EAX                         ; 00432477
    CMP EDX,ECX                         ; 00432479
    JL 0x00432482                       ; 0043247b
        ;   XREF to: 00432482 (CONDITIONAL_JUMP)  ; LAB_00432482
    MOV EAX,0x1                         ; 0043247d
    MOV ECX,dword ptr [EDI + 0x8]       ; 00432482 | DAT_005c501c
        ;   Label: LAB_00432482
    CMP ECX,dword ptr [EDI]             ; 00432485 | DAT_005c5014
    JG 0x0043248b                       ; 00432487
        ;   XREF to: 0043248b (CONDITIONAL_JUMP)  ; LAB_0043248b
    OR AL,0x2                           ; 00432489
    CMP EAX,0x3                         ; 0043248b
        ;   Label: LAB_0043248b
    JA 0x004324aa                       ; 0043248e
        ;   XREF to: 004324aa (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4321bc]  ; 00432490 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ECX,dword ptr [ESP + 0x100]     ; 00432497
        ;   Label: caseD_0
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043249e
    ADD EAX,ECX                         ; 004324a5
    INC ESI                             ; 004324a7
    MOV dword ptr [EAX],EBX             ; 004324a8
    MOV EAX,dword ptr [ESP + 0x108]     ; 004324aa
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x104]     ; 004324b1
    MOV EBX,EDI                         ; 004324b8
    INC EAX                             ; 004324ba
    ADD EBP,0x4                         ; 004324bb
    MOV dword ptr [ESP + 0x108],EAX     ; 004324be
    CMP EAX,EDX                         ; 004324c5
    JL 0x0043246f                       ; 004324c7
        ;   XREF to: 0043246f (CONDITIONAL_JUMP)  ; LAB_0043246f
    MOV dword ptr [0x00766c70],ESI      ; 004324c9 | DAT_00766c70
        ;   Label: LAB_004324c9
    CMP ESI,0x3                         ; 004324cf
    JL 0x00432310                       ; 004324d2
        ;   XREF to: 00432310 (CONDITIONAL_JUMP)  ; LAB_00432310
    MOV EDX,ESP                         ; 004324d8
    LEA EBP,[ESP + 0x80]                ; 004324da
    XOR EBX,EBX                         ; 004324e1
    MOV dword ptr [ESP + 0x10c],ESI     ; 004324e3
    MOV dword ptr [ESP + 0x110],EBX     ; 004324ea
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 004324f1
    TEST ESI,ESI                        ; 004324f5
    JLE 0x00432566                      ; 004324f7
        ;   XREF to: 00432566 (CONDITIONAL_JUMP)  ; LAB_00432566
    MOV dword ptr [ESP + 0x128],EDX     ; 004324f9
    MOV ESI,dword ptr [ESP + 0x128]     ; 00432500
        ;   Label: LAB_00432500
    MOV EDX,dword ptr [EDI + 0x8]       ; 00432507
    MOV ECX,dword ptr [EDI]             ; 0043250a
    XOR EAX,EAX                         ; 0043250c
    NEG EDX                             ; 0043250e
    MOV ESI,dword ptr [ESI]             ; 00432510
    CMP EDX,ECX                         ; 00432512
    JL 0x0043251b                       ; 00432514
        ;   XREF to: 0043251b (CONDITIONAL_JUMP)  ; LAB_0043251b
    MOV EAX,0x1                         ; 00432516
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043251b
        ;   Label: LAB_0043251b
    MOV ECX,dword ptr [ESI]             ; 0043251e
    NEG EDX                             ; 00432520
    CMP EDX,ECX                         ; 00432522
    JL 0x00432528                       ; 00432524
        ;   XREF to: 00432528 (CONDITIONAL_JUMP)  ; LAB_00432528
    OR AL,0x2                           ; 00432526
    CMP EAX,0x3                         ; 00432528
        ;   Label: LAB_00432528
    JA 0x00432539                       ; 0043252b
        ;   XREF to: 00432539 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4321cc]  ; 0043252d | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 00432534
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 00432535
    MOV EAX,dword ptr [ESP + 0x110]     ; 00432539
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00432540
    MOV EDI,ESI                         ; 00432547
    MOV ESI,dword ptr [ESP + 0x128]     ; 00432549
    INC EAX                             ; 00432550
    ADD ESI,0x4                         ; 00432551
    MOV dword ptr [ESP + 0x110],EAX     ; 00432554
    MOV dword ptr [ESP + 0x128],ESI     ; 0043255b
    CMP EAX,EDX                         ; 00432562
    JL 0x00432500                       ; 00432564
        ;   XREF to: 00432500 (CONDITIONAL_JUMP)  ; LAB_00432500
    MOV dword ptr [0x00766c70],EBX      ; 00432566 | DAT_00766c70
        ;   Label: LAB_00432566
    CMP EBX,0x3                         ; 0043256c
    JL 0x00432310                       ; 0043256f
        ;   XREF to: 00432310 (CONDITIONAL_JUMP)  ; LAB_00432310
    LEA EDX,[ESP + 0x80]                ; 00432575
    MOV EBP,ESP                         ; 0043257c
    XOR ESI,ESI                         ; 0043257e
    MOV dword ptr [ESP + 0x114],EBX     ; 00432580
    MOV dword ptr [ESP + 0x118],ESI     ; 00432587
    MOV EDI,dword ptr [EDX + EBX*0x4 + -0x4] ; 0043258e
    TEST EBX,EBX                        ; 00432592
    JLE 0x004325ff                      ; 00432594
        ;   XREF to: 004325ff (CONDITIONAL_JUMP)  ; LAB_004325ff
    MOV dword ptr [ESP + 0x12c],EDX     ; 00432596
    MOV EBX,dword ptr [ESP + 0x12c]     ; 0043259d
        ;   Label: LAB_0043259d
    MOV EDX,dword ptr [EDI + 0x4]       ; 004325a4 | DAT_005c5018
    MOV ECX,dword ptr [EDI + 0x8]       ; 004325a7 | DAT_005c501c
    XOR EAX,EAX                         ; 004325aa
    MOV EBX,dword ptr [EBX]             ; 004325ac
    CMP EDX,ECX                         ; 004325ae
    JL 0x004325b7                       ; 004325b0
        ;   XREF to: 004325b7 (CONDITIONAL_JUMP)  ; LAB_004325b7
    MOV EAX,0x1                         ; 004325b2
    MOV ECX,dword ptr [EBX + 0x8]       ; 004325b7 | DAT_005c501c
        ;   Label: LAB_004325b7
    CMP ECX,dword ptr [EBX + 0x4]       ; 004325ba | DAT_005c5018
    JG 0x004325c1                       ; 004325bd
        ;   XREF to: 004325c1 (CONDITIONAL_JUMP)  ; LAB_004325c1
    OR AL,0x2                           ; 004325bf
    CMP EAX,0x3                         ; 004325c1
        ;   Label: LAB_004325c1
    JA 0x004325d2                       ; 004325c4
        ;   XREF to: 004325d2 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4321dc]  ; 004325c6 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC ESI                             ; 004325cd
        ;   Label: caseD_0
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 004325ce
    MOV ECX,dword ptr [ESP + 0x12c]     ; 004325d2
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x114]     ; 004325d9
    MOV EDI,EBX                         ; 004325e0
    MOV EBX,dword ptr [ESP + 0x118]     ; 004325e2
    ADD ECX,0x4                         ; 004325e9
    INC EBX                             ; 004325ec
    MOV dword ptr [ESP + 0x12c],ECX     ; 004325ed
    MOV dword ptr [ESP + 0x118],EBX     ; 004325f4
    CMP EBX,EDX                         ; 004325fb
    JL 0x0043259d                       ; 004325fd
        ;   XREF to: 0043259d (CONDITIONAL_JUMP)  ; LAB_0043259d
    MOV dword ptr [0x00766c70],ESI      ; 004325ff | DAT_00766c70
        ;   Label: LAB_004325ff
    CMP ESI,0x3                         ; 00432605
    JL 0x00432310                       ; 00432608
        ;   XREF to: 00432310 (CONDITIONAL_JUMP)  ; LAB_00432310
    MOV EDX,ESP                         ; 0043260e
    LEA EBP,[ESP + 0x80]                ; 00432610
    XOR EBX,EBX                         ; 00432617
    MOV dword ptr [ESP + 0x11c],ESI     ; 00432619
    MOV dword ptr [ESP + 0x120],EBX     ; 00432620
    MOV EDI,dword ptr [EDX + ESI*0x4 + -0x4] ; 00432627
    TEST ESI,ESI                        ; 0043262b
    JLE 0x004326a2                      ; 0043262d
        ;   XREF to: 004326a2 (CONDITIONAL_JUMP)  ; LAB_004326a2
    MOV dword ptr [ESP + 0x130],EDX     ; 00432633
    MOV ESI,dword ptr [ESP + 0x130]     ; 0043263a
        ;   Label: LAB_0043263a
    MOV EDX,dword ptr [EDI + 0x8]       ; 00432641
    MOV ECX,dword ptr [EDI + 0x4]       ; 00432644
    XOR EAX,EAX                         ; 00432647
    NEG EDX                             ; 00432649
    MOV ESI,dword ptr [ESI]             ; 0043264b
    CMP EDX,ECX                         ; 0043264d
    JL 0x00432656                       ; 0043264f
        ;   XREF to: 00432656 (CONDITIONAL_JUMP)  ; LAB_00432656
    MOV EAX,0x1                         ; 00432651
    MOV EDX,dword ptr [ESI + 0x8]       ; 00432656
        ;   Label: LAB_00432656
    MOV ECX,dword ptr [ESI + 0x4]       ; 00432659
    NEG EDX                             ; 0043265c
    CMP EDX,ECX                         ; 0043265e
    JL 0x00432664                       ; 00432660
        ;   XREF to: 00432664 (CONDITIONAL_JUMP)  ; LAB_00432664
    OR AL,0x2                           ; 00432662
    CMP EAX,0x3                         ; 00432664
        ;   Label: LAB_00432664
    JA 0x00432675                       ; 00432667
        ;   XREF to: 00432675 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4321ec]  ; 00432669 | caseD_3 | caseD_0 | caseD_1
        ;   Label: switchD
    INC EBX                             ; 00432670
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 00432671
    MOV ECX,dword ptr [ESP + 0x130]     ; 00432675
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP + 0x11c]     ; 0043267c
    MOV EDI,ESI                         ; 00432683
    MOV ESI,dword ptr [ESP + 0x120]     ; 00432685
    ADD ECX,0x4                         ; 0043268c
    INC ESI                             ; 0043268f
    MOV dword ptr [ESP + 0x130],ECX     ; 00432690
    MOV dword ptr [ESP + 0x120],ESI     ; 00432697
    CMP ESI,EDX                         ; 0043269e
    JL 0x0043263a                       ; 004326a0
        ;   XREF to: 0043263a (CONDITIONAL_JUMP)  ; LAB_0043263a
    MOV dword ptr [0x00766c70],EBX      ; 004326a2 | DAT_00766c70
        ;   Label: LAB_004326a2
    CMP EBX,0x3                         ; 004326a8
    JL 0x00432310                       ; 004326ab
        ;   XREF to: 00432310 (CONDITIONAL_JUMP)  ; LAB_00432310
    XOR EDX,EDX                         ; 004326b1
    TEST EBX,EBX                        ; 004326b3
    JLE 0x00432710                      ; 004326b5
        ;   XREF to: 00432710 (CONDITIONAL_JUMP)  ; LAB_00432710
    MOV EBX,0x766c74                    ; 004326b7 | DAT_00766c74
    XOR EBP,EBP                         ; 004326bc
    MOV ECX,0x30                        ; 004326be
        ;   Label: LAB_004326be
    MOV EDI,EBX                         ; 004326c3
    MOV ESI,dword ptr [ESP + EBP*0x1 + 0x80] ; 004326c5
    TEST EDI,0x7                        ; 004326cc
    JZ 0x004326da                       ; 004326d2
        ;   XREF to: 004326da (CONDITIONAL_JUMP)  ; LAB_004326da
    MOVSD ES:EDI,ESI                    ; 004326d4 | DAT_00766c74 | DAT_00766ca4 | DAT_005c5014
    SUB ECX,0x4                         ; 004326d5
    JLE 0x004326f7                      ; 004326d8
        ;   XREF to: 004326f7 (CONDITIONAL_JUMP)  ; LAB_004326f7
    SUB ECX,0x8                         ; 004326da
        ;   Label: LAB_004326da
    JL 0x004326eb                       ; 004326dd
        ;   XREF to: 004326eb (CONDITIONAL_JUMP)  ; LAB_004326eb
    FILD qword ptr [ESI]                ; 004326df | DAT_005c5018 | DAT_005c5020
    ADD ESI,0x8                         ; 004326e1
    FISTP qword ptr [EDI]               ; 004326e4 | DAT_00766c78 | DAT_00766c80 | DAT_00766ca8
    ADD EDI,0x8                         ; 004326e6
    JMP 0x004326da                      ; 004326e9
        ;   XREF to: 004326da (UNCONDITIONAL_JUMP)  ; LAB_004326da
    ADD ECX,0x8                         ; 004326eb
        ;   Label: LAB_004326eb
    JLE 0x004326f7                      ; 004326ee
        ;   XREF to: 004326f7 (CONDITIONAL_JUMP)  ; LAB_004326f7
    MOVSD ES:EDI,ESI                    ; 004326f0 | DAT_00766c80 | DAT_005c5020
    SUB ECX,0x4                         ; 004326f1
    JLE 0x004326f7                      ; 004326f4
        ;   XREF to: 004326f7 (CONDITIONAL_JUMP)  ; LAB_004326f7
    MOVSD ES:EDI,ESI                    ; 004326f6 | DAT_00766c84 | DAT_005c5024
    ADD EBP,0x4                         ; 004326f7
        ;   Label: LAB_004326f7
    INC EDX                             ; 004326fa
    MOV ECX,dword ptr [0x00766c70]      ; 004326fb | DAT_00766c70
    ADD EBX,0x30                        ; 00432701
    CMP EDX,ECX                         ; 00432704
    JL 0x004326be                       ; 00432706
        ;   XREF to: 004326be (CONDITIONAL_JUMP)  ; LAB_004326be
    LEA EAX,[EAX]                       ; 00432708
    MOV EDX,EDX                         ; 0043270e
    MOV ESI,dword ptr [0x005ad284]      ; 00432710 | DAT_005ad284
        ;   Label: LAB_00432710
    XOR EBX,EBX                         ; 00432716
    TEST ESI,ESI                        ; 00432718
    JNZ 0x00432a52                      ; 0043271a
        ;   XREF to: 00432a52 (CONDITIONAL_JUMP)  ; LAB_00432a52
    MOV EBP,dword ptr [0x00766c70]      ; 00432720 | DAT_00766c70
        ;   Label: LAB_00432720
    CMP EBP,0x3                         ; 00432726
    JL 0x00432310                       ; 00432729
        ;   XREF to: 00432310 (CONDITIONAL_JUMP)  ; LAB_00432310
    XOR EDX,EDX                         ; 0043272f
    TEST EBP,EBP                        ; 00432731
    JLE 0x0043275f                      ; 00432733
        ;   XREF to: 0043275f (CONDITIONAL_JUMP)  ; LAB_0043275f
    MOV EAX,0x766c74                    ; 00432735 | DAT_00766c74
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043273a | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_0043273a
    TEST EBX,EBX                        ; 0043273d
    JNZ 0x00432c43                      ; 0043273f
        ;   XREF to: 00432c43 (CONDITIONAL_JUMP)  ; LAB_00432c43
    MOV dword ptr [EAX + 0x8],0x1       ; 00432745 | DAT_00766c7c | DAT_00766cac
    MOV dword ptr [EAX],EBX             ; 0043274c | DAT_00766c74 | DAT_00766ca4
    MOV dword ptr [EAX + 0x4],EBX       ; 0043274e | DAT_00766c78 | DAT_00766ca8
        ;   Label: LAB_0043274e
    MOV ECX,dword ptr [0x00766c70]      ; 00432751 | DAT_00766c70
        ;   Label: LAB_00432751
    INC EDX                             ; 00432757
    ADD EAX,0x30                        ; 00432758
    CMP EDX,ECX                         ; 0043275b
    JL 0x0043273a                       ; 0043275d
        ;   XREF to: 0043273a (CONDITIONAL_JUMP)  ; LAB_0043273a
    XOR EAX,EAX                         ; 0043275f
        ;   Label: LAB_0043275f
    ADD ESP,0x13c                       ; 00432761
    POP EBP                             ; 00432767
    POP EDI                             ; 00432768
    POP ESI                             ; 00432769
    POP EBX                             ; 0043276a
    RET                                 ; 0043276b
    CMP dword ptr [0x00767b38],0xc      ; 0043276c | DAT_00767b38
        ;   Label: caseD_1
    JL 0x00432797                       ; 00432773
        ;   XREF to: 00432797 (CONDITIONAL_JUMP)  ; LAB_00432797
    MOV EAX,0x57ac47                    ; 00432775 | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 0043277a
    PUSH 0x57ac5b                       ; 0043277f | = "Ran out of clipped verts!"
    MOV [0x01cc4800],EAX                ; 00432784 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00432789 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0043278f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00432794
    MOV EAX,[0x00767b38]                ; 00432797 | DAT_00767b38
        ;   Label: LAB_00432797
    IMUL EDX,EAX,0x30                   ; 0043279c
    MOV ECX,dword ptr [ESP + 0x100]     ; 0043279f
    ADD EDX,0x7678f8                    ; 004327a6 | DAT_007678f8
    INC EAX                             ; 004327ac
    PUSH EDX                            ; 004327ad | DAT_007678f8
    MOV [0x00767b38],EAX                ; 004327ae | DAT_00767b38
    LEA EAX,[ESI*0x4 + 0x0]             ; 004327b3
    PUSH EBX                            ; 004327ba
    ADD EAX,ECX                         ; 004327bb
    PUSH EDI                            ; 004327bd
    INC ESI                             ; 004327be
    MOV dword ptr [EAX],EDX             ; 004327bf | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00431530 ; 004327c1
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00431530(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 004327c6
    JMP 0x004324aa                      ; 004327c9
        ;   XREF to: 004324aa (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EDX,dword ptr [ESP + 0x100]     ; 004327ce
        ;   Label: caseD_2
    LEA EAX,[ESI*0x4 + 0x0]             ; 004327d5
    ADD EAX,EDX                         ; 004327dc
    MOV ECX,dword ptr [0x00767b38]      ; 004327de | DAT_00767b38
    INC ESI                             ; 004327e4
    MOV dword ptr [EAX],EBX             ; 004327e5
    CMP ECX,0xc                         ; 004327e7
    JL 0x0043280e                       ; 004327ea
        ;   XREF to: 0043280e (CONDITIONAL_JUMP)  ; LAB_0043280e
    MOV EAX,0x57ac47                    ; 004327ec | = "..\\engine\\clipper.c"
    MOV EDX,0x5e                        ; 004327f1
    PUSH 0x57ac5b                       ; 004327f6 | = "Ran out of clipped verts!"
    MOV [0x01cc4800],EAX                ; 004327fb | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00432800 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00432806
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0043280b
    MOV EAX,[0x00767b38]                ; 0043280e | DAT_00767b38
        ;   Label: LAB_0043280e
    IMUL EDX,EAX,0x30                   ; 00432813
    MOV ECX,dword ptr [ESP + 0x100]     ; 00432816
    ADD EDX,0x7678f8                    ; 0043281d | DAT_007678f8
    INC EAX                             ; 00432823
    PUSH EDX                            ; 00432824 | DAT_007678f8
    MOV [0x00767b38],EAX                ; 00432825 | DAT_00767b38
    LEA EAX,[ESI*0x4 + 0x0]             ; 0043282a
    PUSH EDI                            ; 00432831
    ADD EAX,ECX                         ; 00432832
    PUSH EBX                            ; 00432834
    INC ESI                             ; 00432835
    MOV dword ptr [EAX],EDX             ; 00432836 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00431530 ; 00432838
        ;   XREF to: 00431530 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00431530(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043283d
    JMP 0x004324aa                      ; 00432840
        ;   XREF to: 004324aa (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x00767b38],0xc      ; 00432845 | DAT_00767b38
        ;   Label: caseD_1
    JL 0x00432870                       ; 0043284c
        ;   XREF to: 00432870 (CONDITIONAL_JUMP)  ; LAB_00432870
    MOV ECX,0x57ac47                    ; 0043284e | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00432853
    PUSH 0x57ac5b                       ; 00432858 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 0043285d | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00432863 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00432868
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0043286d
    MOV EAX,[0x00767b38]                ; 00432870 | DAT_00767b38
        ;   Label: LAB_00432870
    IMUL EDX,EAX,0x30                   ; 00432875
    ADD EDX,0x7678f8                    ; 00432878 | DAT_007678f8
    PUSH EDX                            ; 0043287e | DAT_007678f8
    PUSH EDI                            ; 0043287f
    INC EBX                             ; 00432880
    INC EAX                             ; 00432881
    PUSH ESI                            ; 00432882
    MOV [0x00767b38],EAX                ; 00432883 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00432888 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00431630 ; 0043288c
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00431630(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00432891
    JMP 0x00432539                      ; 00432894
        ;   XREF to: 00432539 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 00432899
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 0043289a | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 0043289f
    CMP EAX,0xc                         ; 004328a3
    JL 0x004328cb                       ; 004328a6
        ;   XREF to: 004328cb (CONDITIONAL_JUMP)  ; LAB_004328cb
    MOV EDX,0x57ac47                    ; 004328a8 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 004328ad
    PUSH 0x57ac5b                       ; 004328b2 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 004328b7 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004328bd | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004328c3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004328c8
    MOV EAX,[0x00767b38]                ; 004328cb | DAT_00767b38
        ;   Label: LAB_004328cb
    IMUL EDX,EAX,0x30                   ; 004328d0
    ADD EDX,0x7678f8                    ; 004328d3 | DAT_007678f8
    PUSH EDX                            ; 004328d9 | DAT_007678f8
    PUSH ESI                            ; 004328da
    INC EBX                             ; 004328db
    INC EAX                             ; 004328dc
    PUSH EDI                            ; 004328dd
    MOV [0x00767b38],EAX                ; 004328de | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004328e3 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00431630 ; 004328e7
        ;   XREF to: 00431630 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00431630(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 004328ec
    JMP 0x00432539                      ; 004328ef
        ;   XREF to: 00432539 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x00767b38],0xc      ; 004328f4 | DAT_00767b38
        ;   Label: caseD_1
    JL 0x0043291f                       ; 004328fb
        ;   XREF to: 0043291f (CONDITIONAL_JUMP)  ; LAB_0043291f
    MOV ECX,0x57ac47                    ; 004328fd | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00432902
    PUSH 0x57ac5b                       ; 00432907 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 0043290c | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00432912 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00432917
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0043291c
    MOV EAX,[0x00767b38]                ; 0043291f | DAT_00767b38
        ;   Label: LAB_0043291f
    IMUL EDX,EAX,0x30                   ; 00432924
    ADD EDX,0x7678f8                    ; 00432927 | DAT_007678f8
    PUSH EDX                            ; 0043292d | DAT_007678f8
    PUSH EDI                            ; 0043292e
    INC ESI                             ; 0043292f
    INC EAX                             ; 00432930
    PUSH EBX                            ; 00432931
    MOV [0x00767b38],EAX                ; 00432932 | DAT_00767b38
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 00432937 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00431730 ; 0043293b
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00431730(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00432940
    JMP 0x004325d2                      ; 00432943
        ;   XREF to: 004325d2 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC ESI                             ; 00432948
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 00432949 | DAT_00767b38
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDI ; 0043294e
    CMP EAX,0xc                         ; 00432952
    JL 0x0043297a                       ; 00432955
        ;   XREF to: 0043297a (CONDITIONAL_JUMP)  ; LAB_0043297a
    MOV EDX,0x57ac47                    ; 00432957 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043295c
    PUSH 0x57ac5b                       ; 00432961 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 00432966 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0043296c | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00432972
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00432977
    MOV EAX,[0x00767b38]                ; 0043297a | DAT_00767b38
        ;   Label: LAB_0043297a
    IMUL EDX,EAX,0x30                   ; 0043297f
    ADD EDX,0x7678f8                    ; 00432982 | DAT_007678f8
    PUSH EDX                            ; 00432988 | DAT_007678f8
    PUSH EBX                            ; 00432989
    INC ESI                             ; 0043298a
    INC EAX                             ; 0043298b
    PUSH EDI                            ; 0043298c
    MOV [0x00767b38],EAX                ; 0043298d | DAT_00767b38
    MOV dword ptr [EBP + ESI*0x4 + -0x4],EDX ; 00432992 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00431730 ; 00432996
        ;   XREF to: 00431730 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00431730(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043299b
    JMP 0x004325d2                      ; 0043299e
        ;   XREF to: 004325d2 (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP dword ptr [0x00767b38],0xc      ; 004329a3 | DAT_00767b38
        ;   Label: caseD_1
    JL 0x004329ce                       ; 004329aa
        ;   XREF to: 004329ce (CONDITIONAL_JUMP)  ; LAB_004329ce
    MOV ECX,0x57ac47                    ; 004329ac | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 004329b1
    PUSH 0x57ac5b                       ; 004329b6 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],ECX      ; 004329bb | g_CHAR_PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004329c1 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004329c6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004329cb
    MOV EAX,[0x00767b38]                ; 004329ce | DAT_00767b38
        ;   Label: LAB_004329ce
    IMUL EDX,EAX,0x30                   ; 004329d3
    ADD EDX,0x7678f8                    ; 004329d6 | DAT_007678f8
    PUSH EDX                            ; 004329dc | DAT_00767928
    PUSH EDI                            ; 004329dd
    INC EBX                             ; 004329de
    INC EAX                             ; 004329df
    PUSH ESI                            ; 004329e0
    MOV [0x00767b38],EAX                ; 004329e1 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004329e6 | DAT_00767928
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00431830 ; 004329ea
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00431830(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 004329ef
    JMP 0x00432675                      ; 004329f2
        ;   XREF to: 00432675 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 004329f7
        ;   Label: caseD_2
    MOV EAX,[0x00767b38]                ; 004329f8 | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDI ; 004329fd
    CMP EAX,0xc                         ; 00432a01
    JL 0x00432a29                       ; 00432a04
        ;   XREF to: 00432a29 (CONDITIONAL_JUMP)  ; LAB_00432a29
    MOV EDX,0x57ac47                    ; 00432a06 | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 00432a0b
    PUSH 0x57ac5b                       ; 00432a10 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01cc4800],EDX      ; 00432a15 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00432a1b | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00432a21
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00432a26
    MOV EAX,[0x00767b38]                ; 00432a29 | DAT_00767b38
        ;   Label: LAB_00432a29
    IMUL EDX,EAX,0x30                   ; 00432a2e
    ADD EDX,0x7678f8                    ; 00432a31 | DAT_007678f8
    PUSH EDX                            ; 00432a37 | DAT_007678f8
    PUSH ESI                            ; 00432a38
    INC EBX                             ; 00432a39
    INC EAX                             ; 00432a3a
    PUSH EDI                            ; 00432a3b
    MOV [0x00767b38],EAX                ; 00432a3c | DAT_00767b38
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 00432a41 | DAT_007678f8
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00431830 ; 00432a45
        ;   XREF to: 00431830 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00431830(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 00432a4a
    JMP 0x00432675                      ; 00432a4d
        ;   XREF to: 00432675 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV EDI,dword ptr [0x00766c70]      ; 00432a52 | DAT_00766c70
        ;   Label: LAB_00432a52
    TEST EDI,EDI                        ; 00432a58
    JLE 0x00432a7d                      ; 00432a5a
        ;   XREF to: 00432a7d (CONDITIONAL_JUMP)  ; LAB_00432a7d
    LEA ECX,[EDI*0x4 + 0x0]             ; 00432a5c
    SUB ECX,EDI                         ; 00432a63
    XOR EAX,EAX                         ; 00432a65
    SHL ECX,0x4                         ; 00432a67
    MOV ESI,dword ptr [EAX + 0x766c7c]  ; 00432a6a | DAT_00766c7c | DAT_00766cac
        ;   Label: LAB_00432a6a
    CMP EBX,ESI                         ; 00432a70
    JGE 0x00432a76                      ; 00432a72
        ;   XREF to: 00432a76 (CONDITIONAL_JUMP)  ; LAB_00432a76
    MOV EBX,ESI                         ; 00432a74
    ADD EAX,0x30                        ; 00432a76
        ;   Label: LAB_00432a76
    CMP EAX,ECX                         ; 00432a79
    JL 0x00432a6a                       ; 00432a7b
        ;   XREF to: 00432a6a (CONDITIONAL_JUMP)  ; LAB_00432a6a
    CMP EBX,dword ptr [0x005ad284]      ; 00432a7d | DAT_005ad284
        ;   Label: LAB_00432a7d
    JL 0x00432720                       ; 00432a83
        ;   XREF to: 00432720 (CONDITIONAL_JUMP)  ; LAB_00432720
    MOV EAX,[0x00766c70]                ; 00432a89 | DAT_00766c70
    MOV [0x007672f4],EAX                ; 00432a8e | DAT_007672f4
    LEA ECX,[EAX*0x4 + 0x0]             ; 00432a93
    MOV ESI,0x766c74                    ; 00432a9a | DAT_00766c74
    SUB ECX,EAX                         ; 00432a9f
    MOV EDI,0x7672f8                    ; 00432aa1 | DAT_007672f8
    SHL ECX,0x4                         ; 00432aa6
    TEST EDI,0x7                        ; 00432aa9
    JZ 0x00432ab7                       ; 00432aaf
        ;   XREF to: 00432ab7 (CONDITIONAL_JUMP)  ; LAB_00432ab7
    MOVSD ES:EDI,ESI                    ; 00432ab1 | DAT_00766c74 | DAT_007672f8
    SUB ECX,0x4                         ; 00432ab2
    JLE 0x00432ad4                      ; 00432ab5
        ;   XREF to: 00432ad4 (CONDITIONAL_JUMP)  ; LAB_00432ad4
    SUB ECX,0x8                         ; 00432ab7
        ;   Label: LAB_00432ab7
    JL 0x00432ac8                       ; 00432aba
        ;   XREF to: 00432ac8 (CONDITIONAL_JUMP)  ; LAB_00432ac8
    FILD qword ptr [ESI]                ; 00432abc | DAT_00766c74
    ADD ESI,0x8                         ; 00432abe
    FISTP qword ptr [EDI]               ; 00432ac1 | DAT_007672f8
    ADD EDI,0x8                         ; 00432ac3
    JMP 0x00432ab7                      ; 00432ac6
        ;   XREF to: 00432ab7 (UNCONDITIONAL_JUMP)  ; LAB_00432ab7
    ADD ECX,0x8                         ; 00432ac8
        ;   Label: LAB_00432ac8
    JLE 0x00432ad4                      ; 00432acb
        ;   XREF to: 00432ad4 (CONDITIONAL_JUMP)  ; LAB_00432ad4
    MOVSD ES:EDI,ESI                    ; 00432acd | DAT_00766c74 | DAT_007672f8
    SUB ECX,0x4                         ; 00432ace
    JLE 0x00432ad4                      ; 00432ad1
        ;   XREF to: 00432ad4 (CONDITIONAL_JUMP)  ; LAB_00432ad4
    MOVSD ES:EDI,ESI                    ; 00432ad3 | DAT_00766c78 | DAT_007672fc
    XOR EAX,EAX                         ; 00432ad4
        ;   Label: LAB_00432ad4
    MOV ECX,dword ptr [0x007672f4]      ; 00432ad6 | DAT_007672f4
    MOV [0x00766c70],EAX                ; 00432adc | DAT_00766c70
    MOV dword ptr [ESP + 0x138],EAX     ; 00432ae1
    TEST ECX,ECX                        ; 00432ae8
    JLE 0x00432720                      ; 00432aea
        ;   XREF to: 00432720 (CONDITIONAL_JUMP)  ; LAB_00432720
    MOV EBP,0x7672f8                    ; 00432af0 | DAT_007672f8
    MOV EAX,dword ptr [ESP + 0x138]     ; 00432af5
        ;   Label: LAB_00432af5
    MOV ECX,dword ptr [0x007672f4]      ; 00432afc | DAT_007672f4
    INC EAX                             ; 00432b02
    CMP EAX,ECX                         ; 00432b03
    JNZ 0x00432b09                      ; 00432b05
        ;   XREF to: 00432b09 (CONDITIONAL_JUMP)  ; LAB_00432b09
    XOR EAX,ECX                         ; 00432b07
    IMUL EAX,EAX,0x30                   ; 00432b09
        ;   Label: LAB_00432b09
    MOV EDX,0x7672f8                    ; 00432b0c | DAT_007672f8
    MOV ESI,dword ptr [0x005ad284]      ; 00432b11 | DAT_005ad284
    MOV EBX,EBP                         ; 00432b17
    MOV ECX,dword ptr [EBP + 0x8]       ; 00432b19 | DAT_00767300 | DAT_00767330
    ADD EDX,EAX                         ; 00432b1c
    XOR EAX,EAX                         ; 00432b1e
    CMP ECX,ESI                         ; 00432b20
    JL 0x00432b29                       ; 00432b22
        ;   XREF to: 00432b29 (CONDITIONAL_JUMP)  ; LAB_00432b29
    MOV EAX,0x1                         ; 00432b24
    MOV EDI,dword ptr [0x005ad284]      ; 00432b29 | DAT_005ad284
        ;   Label: LAB_00432b29
    CMP EDI,dword ptr [EDX + 0x8]       ; 00432b2f | DAT_00767300
    JG 0x00432b36                       ; 00432b32
        ;   XREF to: 00432b36 (CONDITIONAL_JUMP)  ; LAB_00432b36
    OR AL,0x2                           ; 00432b34
    CMP EAX,0x3                         ; 00432b36
        ;   Label: LAB_00432b36
    JA 0x00432b87                       ; 00432b39
        ;   XREF to: 00432b87 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4321fc]  ; 00432b3b | = "k=plv" | caseD_1 | caseD_2
        ;   Label: switchD

