; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_rasterizeTriangle_FUN_00516060(float *v0,float *v1,float *v2)
;
; Parameters:
; float *          Stack[0x4]:4   v0
; float *          Stack[0x8]:4   v1
; float *          Stack[0xc]:4   v2
; Local Variables:
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
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
; XREF[2]:
;   engine_mini3d.cpp_drawTransformedList_FUN_00515ae0 at 00515b40
;   engine_mini3d.cpp_flushTriangleBatch_FUN_00515750 at 0051582c
;
; Referenced Globals:
;   undefined4 DAT_005e8f2b
;   undefined4 DAT_005e8f2f
;   undefined4 DAT_005e8f33
;   undefined4 DAT_005e8f37
;   undefined4 DAT_005e8f3b
;   undefined4 DAT_005e8f43
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01d224b8
;   undefined4 DAT_01d22578
;   undefined4 DAT_01d2c0c4
;   undefined4 DAT_01d2c0c8
;   undefined4 DAT_01d2c0cc
;   ... and 12 more
;
; Called Functions:
;   engine_mini3d.cpp_roundFloat_FUN_00516040
;   engine_mini3d.cpp_setupScanEdge_FUN_00515bd0
;   engine_special.cpp_drawPolygon_FUN_00582340
;   engine_special.cpp_FUN_0057eeac
;   engine_special.cpp_FUN_0057f473
;   engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39
;   engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516060
        ;   Label: engine_mini3d.cpp_rasterizeTriangle_FUN_00516060
    PUSH ESI                            ; 00516061
    PUSH EDI                            ; 00516062
    PUSH EBP                            ; 00516063
    SUB ESP,0xb0                        ; 00516064
    MOV ESI,dword ptr [ESP + 0xc4]      ; 0051606a
    MOV EBX,dword ptr [ESP + 0xc8]      ; 00516071
    MOV EBP,dword ptr [ESP + 0xcc]      ; 00516078
    FLD float ptr [EBP + 0x14]          ; 0051607f
    FLD float ptr [EBX + 0x18]          ; 00516082
    FSUB float ptr [ESI + 0x18]         ; 00516085
    FXCH                                ; 00516088
    FSUB float ptr [EBX + 0x14]         ; 0051608a
    FXCH                                ; 0051608d
    FSTP float ptr [ESP + 0x98]         ; 0051608f
    FSTP float ptr [ESP + 0x94]         ; 00516096
    FLD float ptr [ESP + 0x98]          ; 0051609d
    FMUL float ptr [ESP + 0x94]         ; 005160a4
    FLD float ptr [EBP + 0x18]          ; 005160ab
    FLD float ptr [EBX + 0x14]          ; 005160ae
    FSUB float ptr [ESI + 0x14]         ; 005160b1
    FXCH                                ; 005160b4
    FSUB float ptr [EBX + 0x18]         ; 005160b6
    FXCH                                ; 005160b9
    FSTP float ptr [ESP + 0x90]         ; 005160bb
    FSTP float ptr [ESP + 0x9c]         ; 005160c2
    FLD float ptr [ESP + 0x90]          ; 005160c9
    FMUL float ptr [ESP + 0x9c]         ; 005160d0
    MOV EDX,dword ptr [0x01d22578]      ; 005160d7 | DAT_01d22578
    FXCH                                ; 005160dd
    FSTP float ptr [ESP + 0xa0]         ; 005160df
    FSTP float ptr [ESP + 0xa4]         ; 005160e6
    TEST EDX,EDX                        ; 005160ed
    JNZ 0x00516397                      ; 005160ef
        ;   XREF to: 00516397 (CONDITIONAL_JUMP)  ; LAB_00516397
    FLD float ptr [ESP + 0xa4]          ; 005160f5
    FCOMP float ptr [ESP + 0xa0]        ; 005160fc
    FNSTSW AX                           ; 00516103
    SAHF                                ; 00516105
    JBE 0x005163ae                      ; 00516106
        ;   XREF to: 005163ae (CONDITIONAL_JUMP)  ; LAB_005163ae
    MOV ECX,dword ptr [0x01c50948]      ; 0051610c | DAT_01c50948
        ;   Label: LAB_0051610c
    TEST ECX,ECX                        ; 00516112
    JNZ 0x005163b9                      ; 00516114
        ;   XREF to: 005163b9 (CONDITIONAL_JUMP)  ; LAB_005163b9
    PUSH EBX                            ; 0051611a
    MOV EDI,0x4b0                       ; 0051611b
    MOV dword ptr [0x01d2c5cc],ECX      ; 00516120 | DAT_01d2c5cc
    PUSH ESI                            ; 00516126
    MOV dword ptr [0x01d2c0c4],ECX      ; 00516127 | DAT_01d2c0c4
    MOV dword ptr [0x01d2c5c8],EDI      ; 0051612d | DAT_01d2c5c8
    CALL engine_mini3d.cpp_setupScanEdge_FUN_00515bd0 ; 00516133
        ;   XREF to: 00515bd0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setupScanEdge_FUN_00515bd0(float * v0, float * v1)
    ADD ESP,0x8                         ; 00516138
    PUSH EBP                            ; 0051613b
    PUSH EBX                            ; 0051613c
    CALL engine_mini3d.cpp_setupScanEdge_FUN_00515bd0 ; 0051613d
        ;   XREF to: 00515bd0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setupScanEdge_FUN_00515bd0(float * v0, float * v1)
    ADD ESP,0x8                         ; 00516142
    PUSH ESI                            ; 00516145
    PUSH EBP                            ; 00516146
    CALL engine_mini3d.cpp_setupScanEdge_FUN_00515bd0 ; 00516147
        ;   XREF to: 00515bd0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_setupScanEdge_FUN_00515bd0(float * v0, float * v1)
    MOV EAX,0x1d2c0c8                   ; 0051614c | DAT_01d2c0c8
    MOV ECX,dword ptr [0x01d2c5c8]      ; 00516151 | DAT_01d2c5c8
    MOV EBX,dword ptr [0x01d2c0c4]      ; 00516157 | DAT_01d2c0c4
    ADD ESP,0x8                         ; 0051615d
    XOR EDX,EDX                         ; 00516160
    TEST EBX,EBX                        ; 00516162
    JLE 0x0051681b                      ; 00516164
        ;   XREF to: 0051681b (CONDITIONAL_JUMP)  ; LAB_0051681b
    MOV EDI,dword ptr [0x01d2c0c4]      ; 0051616a | DAT_01d2c0c4
    CMP ECX,dword ptr [EAX]             ; 00516170 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00516170
    JNZ 0x0051680f                      ; 00516172
        ;   XREF to: 0051680f (CONDITIONAL_JUMP)  ; LAB_0051680f
    TEST EAX,EAX                        ; 00516178
    JZ 0x0051680f                       ; 0051617a
        ;   XREF to: 0051680f (CONDITIONAL_JUMP)  ; LAB_0051680f
    MOV dword ptr [ESP + 0xac],EAX      ; 00516180 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00516180
    TEST EAX,EAX                        ; 00516187
    JZ 0x005163ae                       ; 00516189
        ;   XREF to: 005163ae (CONDITIONAL_JUMP)  ; LAB_005163ae
    MOV ESI,dword ptr [0x01d2c0c4]      ; 0051618f | DAT_01d2c0c4
    MOV ECX,dword ptr [0x01d2c5c8]      ; 00516195 | DAT_01d2c5c8
    MOV EBX,EAX                         ; 0051619b
    XOR EDX,EDX                         ; 0051619d
    MOV EAX,0x1d2c0c8                   ; 0051619f
    TEST ESI,ESI                        ; 005161a4
    JLE 0x0051682e                      ; 005161a6
        ;   XREF to: 0051682e (CONDITIONAL_JUMP)  ; LAB_0051682e
    MOV EDI,dword ptr [0x01d2c0c4]      ; 005161ac | DAT_01d2c0c4
    CMP ECX,dword ptr [EAX]             ; 005161b2 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_005161b2
    JNZ 0x00516822                      ; 005161b4
        ;   XREF to: 00516822 (CONDITIONAL_JUMP)  ; LAB_00516822
    CMP EAX,EBX                         ; 005161ba
    JZ 0x00516822                       ; 005161bc
        ;   XREF to: 00516822 (CONDITIONAL_JUMP)  ; LAB_00516822
    MOV EBP,EAX                         ; 005161c2
        ;   Label: LAB_005161c2
    TEST EAX,EAX                        ; 005161c4
    JZ 0x005163ae                       ; 005161c6
        ;   XREF to: 005163ae (CONDITIONAL_JUMP)  ; LAB_005163ae
    MOV EAX,[0x01d2c5c8]                ; 005161cc | DAT_01d2c5c8
    MOV dword ptr [ESP + 0xa8],EAX      ; 005161d1
    MOV EDX,dword ptr [ESP + 0xac]      ; 005161d8
        ;   Label: LAB_005161d8
    MOV EAX,dword ptr [ESP + 0xa8]      ; 005161df
    CMP EAX,dword ptr [EDX + 0x4]       ; 005161e6 | DAT_01d2c0cc
    JL 0x0051622f                       ; 005161e9
        ;   XREF to: 0051622f (CONDITIONAL_JUMP)  ; LAB_0051622f
    MOV ESI,dword ptr [0x01d2c0c4]      ; 005161eb | DAT_01d2c0c4
    MOV EBX,EAX                         ; 005161f1
    MOV ECX,EBP                         ; 005161f3
    MOV dword ptr [EDX],0xffffffff      ; 005161f5 | DAT_01d2c0c8
    MOV EAX,0x1d2c0c8                   ; 005161fb
    XOR EDX,EDX                         ; 00516200
    TEST ESI,ESI                        ; 00516202
    JLE 0x00516841                      ; 00516204
        ;   XREF to: 00516841 (CONDITIONAL_JUMP)  ; LAB_00516841
    MOV EDI,dword ptr [0x01d2c0c4]      ; 0051620a | DAT_01d2c0c4
    CMP EBX,dword ptr [EAX]             ; 00516210 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00516210
    JNZ 0x00516835                      ; 00516212
        ;   XREF to: 00516835 (CONDITIONAL_JUMP)  ; LAB_00516835
    CMP EAX,ECX                         ; 00516218
    JZ 0x00516835                       ; 0051621a
        ;   XREF to: 00516835 (CONDITIONAL_JUMP)  ; LAB_00516835
    MOV dword ptr [ESP + 0xac],EAX      ; 00516220 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00516220
    TEST EAX,EAX                        ; 00516227
    JZ 0x005163ae                       ; 00516229
        ;   XREF to: 005163ae (CONDITIONAL_JUMP)  ; LAB_005163ae
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0051622f
        ;   Label: LAB_0051622f
    CMP EAX,dword ptr [EBP + 0x4]       ; 00516236
    JL 0x00516280                       ; 00516239
        ;   XREF to: 00516280 (CONDITIONAL_JUMP)  ; LAB_00516280
    MOV EBX,dword ptr [ESP + 0xac]      ; 0051623b
    MOV ECX,EAX                         ; 00516242
    MOV dword ptr [EBP],0xffffffff      ; 00516244
    XOR EDX,EDX                         ; 0051624b
    MOV EBP,dword ptr [0x01d2c0c4]      ; 0051624d | DAT_01d2c0c4
    MOV EAX,0x1d2c0c8                   ; 00516253
    TEST EBP,EBP                        ; 00516258
    JLE 0x00516854                      ; 0051625a
        ;   XREF to: 00516854 (CONDITIONAL_JUMP)  ; LAB_00516854
    MOV ESI,dword ptr [0x01d2c0c4]      ; 00516260 | DAT_01d2c0c4
    CMP ECX,dword ptr [EAX]             ; 00516266 | DAT_01d2c0c8 | DAT_01d2c118
        ;   Label: LAB_00516266
    JNZ 0x00516848                      ; 00516268
        ;   XREF to: 00516848 (CONDITIONAL_JUMP)  ; LAB_00516848
    CMP EAX,EBX                         ; 0051626e
    JZ 0x00516848                       ; 00516270
        ;   XREF to: 00516848 (CONDITIONAL_JUMP)  ; LAB_00516848
    MOV EBP,EAX                         ; 00516276
        ;   Label: LAB_00516276
    TEST EAX,EAX                        ; 00516278
    JZ 0x005163ae                       ; 0051627a
        ;   XREF to: 005163ae (CONDITIONAL_JUMP)  ; LAB_005163ae
    CMP dword ptr [0x01c51d00],0x0      ; 00516280 | DAT_01c51d00
        ;   Label: LAB_00516280
    JZ 0x00516875                       ; 00516287
        ;   XREF to: 00516875 (CONDITIONAL_JUMP)  ; LAB_00516875
    CMP dword ptr [0x0061b4a0],0x20     ; 0051628d | DAT_0061b4a0
    JNZ 0x0051685b                      ; 00516294
        ;   XREF to: 0051685b (CONDITIONAL_JUMP)  ; LAB_0051685b
    MOV ESI,dword ptr [ESP + 0xac]      ; 0051629a
    MOV EBX,dword ptr [ESP + 0xa8]      ; 005162a1
    MOV EDI,EBP                         ; 005162a8
    CALL engine_special.cpp_FUN_0057eeac ; 005162aa
        ;   XREF to: 0057eeac (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0057eeac()
    MOV EDX,dword ptr [ESP + 0xac]      ; 005162af
        ;   Label: LAB_005162af
    MOV EAX,dword ptr [ESP + 0xac]      ; 005162b6
    MOV EBX,dword ptr [EDX + 0x8]       ; 005162bd | DAT_01d2c0d0
    MOV EAX,dword ptr [EAX + 0xc]       ; 005162c0 | DAT_01d2c0d4
    ADD EBX,EAX                         ; 005162c3
    MOV dword ptr [EDX + 0x8],EBX       ; 005162c5 | DAT_01d2c0d0
    MOV ESI,dword ptr [EDX + 0x18]      ; 005162c8 | DAT_01d2c0e0
    MOV EDI,dword ptr [EDX + 0x20]      ; 005162cb | DAT_01d2c0e8
    MOV ECX,dword ptr [EDX + 0x28]      ; 005162ce | DAT_01d2c0f0
    MOV EAX,dword ptr [EDX + 0x1c]      ; 005162d1 | DAT_01d2c0e4
    MOV EBX,dword ptr [EDX + 0x10]      ; 005162d4 | DAT_01d2c0d8
    ADD ESI,EAX                         ; 005162d7
    MOV EAX,dword ptr [EDX + 0x24]      ; 005162d9 | DAT_01d2c0ec
    MOV dword ptr [EDX + 0x18],ESI      ; 005162dc | DAT_01d2c0e0
    ADD EDI,EAX                         ; 005162df
    MOV EAX,dword ptr [EDX + 0x2c]      ; 005162e1 | DAT_01d2c0f4
    MOV dword ptr [EDX + 0x20],EDI      ; 005162e4 | DAT_01d2c0e8
    ADD ECX,EAX                         ; 005162e7
    MOV EAX,dword ptr [EDX + 0x14]      ; 005162e9
    MOV dword ptr [EDX + 0x28],ECX      ; 005162ec
    ADD EBX,EAX                         ; 005162ef
    MOV dword ptr [EDX + 0x10],EBX      ; 005162f1
    MOV ESI,dword ptr [EDX + 0x38]      ; 005162f4
    MOV EDI,dword ptr [EDX + 0x40]      ; 005162f7
    MOV ECX,dword ptr [EDX + 0x48]      ; 005162fa
    MOV EAX,dword ptr [EDX + 0x3c]      ; 005162fd
    MOV EBX,dword ptr [EDX + 0x30]      ; 00516300
    ADD ESI,EAX                         ; 00516303
    MOV EAX,dword ptr [EDX + 0x44]      ; 00516305
    MOV dword ptr [EDX + 0x38],ESI      ; 00516308
    ADD EDI,EAX                         ; 0051630b
    MOV EAX,dword ptr [EDX + 0x4c]      ; 0051630d
    MOV dword ptr [EDX + 0x40],EDI      ; 00516310
    ADD ECX,EAX                         ; 00516313
    MOV EAX,dword ptr [EDX + 0x34]      ; 00516315
    MOV dword ptr [EDX + 0x48],ECX      ; 00516318
    ADD EBX,EAX                         ; 0051631b
    MOV dword ptr [EDX + 0x30],EBX      ; 0051631d
    MOV EAX,dword ptr [EBP + 0xc]       ; 00516320
    MOV ESI,dword ptr [EBP + 0x8]       ; 00516323
    MOV EDI,dword ptr [EBP + 0x18]      ; 00516326
    MOV EDX,dword ptr [EBP + 0x20]      ; 00516329
    MOV ECX,dword ptr [EBP + 0x28]      ; 0051632c
    ADD ESI,EAX                         ; 0051632f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00516331
    MOV dword ptr [EBP + 0x8],ESI       ; 00516334
    ADD EDI,EAX                         ; 00516337
    MOV EAX,dword ptr [EBP + 0x24]      ; 00516339
    MOV dword ptr [EBP + 0x18],EDI      ; 0051633c
    ADD EDX,EAX                         ; 0051633f
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00516341
    MOV dword ptr [EBP + 0x20],EDX      ; 00516344
    ADD ECX,EAX                         ; 00516347
    MOV dword ptr [EBP + 0x28],ECX      ; 00516349
    MOV EBX,dword ptr [EBP + 0x10]      ; 0051634c
    MOV ESI,dword ptr [EBP + 0x38]      ; 0051634f
    MOV EDI,dword ptr [EBP + 0x40]      ; 00516352
    MOV EDX,dword ptr [EBP + 0x48]      ; 00516355
    MOV EAX,dword ptr [EBP + 0x14]      ; 00516358
    MOV ECX,dword ptr [EBP + 0x30]      ; 0051635b
    ADD EBX,EAX                         ; 0051635e
    MOV EAX,dword ptr [EBP + 0x3c]      ; 00516360
    MOV dword ptr [EBP + 0x10],EBX      ; 00516363
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00516366
    ADD ESI,EAX                         ; 0051636d
    INC EBX                             ; 0051636f
    MOV EAX,dword ptr [EBP + 0x44]      ; 00516370
    MOV dword ptr [EBP + 0x38],ESI      ; 00516373
    ADD EDI,EAX                         ; 00516376
    MOV EAX,dword ptr [EBP + 0x4c]      ; 00516378
    MOV dword ptr [EBP + 0x40],EDI      ; 0051637b
    ADD EDX,EAX                         ; 0051637e
    MOV EAX,dword ptr [EBP + 0x34]      ; 00516380
    MOV dword ptr [EBP + 0x48],EDX      ; 00516383
    ADD ECX,EAX                         ; 00516386
    MOV dword ptr [ESP + 0xa8],EBX      ; 00516388
    MOV dword ptr [EBP + 0x30],ECX      ; 0051638f
    JMP 0x005161d8                      ; 00516392
        ;   XREF to: 005161d8 (UNCONDITIONAL_JUMP)  ; LAB_005161d8
    FLD float ptr [ESP + 0xa4]          ; 00516397
        ;   Label: LAB_00516397
    FCOMP float ptr [ESP + 0xa0]        ; 0051639e
    FNSTSW AX                           ; 005163a5
    SAHF                                ; 005163a7
    JC 0x0051610c                       ; 005163a8
        ;   XREF to: 0051610c (CONDITIONAL_JUMP)  ; LAB_0051610c
    ADD ESP,0xb0                        ; 005163ae
        ;   Label: LAB_005163ae
    POP EBP                             ; 005163b4
    POP EDI                             ; 005163b5
    POP ESI                             ; 005163b6
    POP EBX                             ; 005163b7
    RET                                 ; 005163b8
    FLD float ptr [ESI]                 ; 005163b9
        ;   Label: LAB_005163b9
    FMUL float ptr [0x005e8f2b]         ; 005163bb | DAT_005e8f2b
    SUB ESP,0x4                         ; 005163c1
    FSTP float ptr [ESP]                ; 005163c4
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005163c7
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005163cc
    MOV dword ptr [ESP],EAX             ; 005163cf
    FLD float ptr [ESI + 0x4]           ; 005163d2
    FMUL float ptr [0x005e8f2b]         ; 005163d5 | DAT_005e8f2b
    SUB ESP,0x4                         ; 005163db
    FSTP float ptr [ESP]                ; 005163de
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005163e1
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005163e6
    MOV dword ptr [ESP + 0x4],EAX       ; 005163e9
    FLD float ptr [ESI + 0x8]           ; 005163ed
    FMUL float ptr [0x005e8f2b]         ; 005163f0 | DAT_005e8f2b
    SUB ESP,0x4                         ; 005163f6
    FSTP float ptr [ESP]                ; 005163f9
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005163fc
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516401
    MOV dword ptr [ESP + 0x8],EAX       ; 00516404
    FLD float ptr [ESI + 0xc]           ; 00516408
    FMUL float ptr [0x005e8f2f]         ; 0051640b | DAT_005e8f2f
    SUB ESP,0x4                         ; 00516411
    FSTP float ptr [ESP]                ; 00516414
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516417
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 0051641c
    MOV dword ptr [ESP + 0xc],EAX       ; 0051641f
    FLD float ptr [ESI + 0x14]          ; 00516423
    FMUL float ptr [0x005e8f33]         ; 00516426 | DAT_005e8f33
    SUB ESP,0x4                         ; 0051642c
    FSTP float ptr [ESP]                ; 0051642f
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516432
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516437
    MOV dword ptr [ESP + 0x10],EAX      ; 0051643a
    FLD float ptr [ESI + 0x18]          ; 0051643e
    FMUL float ptr [0x005e8f33]         ; 00516441 | DAT_005e8f33
    SUB ESP,0x4                         ; 00516447
    FSTP float ptr [ESP]                ; 0051644a
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 0051644d
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516452
    MOV dword ptr [ESP + 0x14],EAX      ; 00516455
    FLD float ptr [ESI + 0x1c]          ; 00516459
    FMUL float ptr [0x005e8f2b]         ; 0051645c | DAT_005e8f2b
    FMUL float ptr [0x005e8f33]         ; 00516462 | DAT_005e8f33
    SUB ESP,0x4                         ; 00516468
    FSTP float ptr [ESP]                ; 0051646b
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 0051646e
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516473
    MOV dword ptr [ESP + 0x18],EAX      ; 00516476
    FLD float ptr [ESI + 0x20]          ; 0051647a
    FMUL float ptr [0x005e8f2b]         ; 0051647d | DAT_005e8f2b
    FMUL float ptr [0x005e8f33]         ; 00516483 | DAT_005e8f33
    SUB ESP,0x4                         ; 00516489
    FSTP float ptr [ESP]                ; 0051648c
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 0051648f
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516494
    MOV dword ptr [ESP + 0x1c],EAX      ; 00516497
    FLD float ptr [ESI + 0x2c]          ; 0051649b
    FMUL float ptr [0x005e8f37]         ; 0051649e | DAT_005e8f37
    SUB ESP,0x4                         ; 005164a4
    FSTP float ptr [ESP]                ; 005164a7
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005164aa
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005164af
    MOV dword ptr [ESP + 0x20],EAX      ; 005164b2
    FLD float ptr [ESI + 0x28]          ; 005164b6
    FMUL float ptr [0x005e8f37]         ; 005164b9 | DAT_005e8f37
    SUB ESP,0x4                         ; 005164bf
    FSTP float ptr [ESP]                ; 005164c2
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005164c5
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005164ca
    MOV dword ptr [ESP + 0x24],EAX      ; 005164cd
    FLD float ptr [ESI + 0x24]          ; 005164d1
    FMUL float ptr [0x005e8f37]         ; 005164d4 | DAT_005e8f37
    SUB ESP,0x4                         ; 005164da
    FSTP float ptr [ESP]                ; 005164dd
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005164e0
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005164e5
    MOV dword ptr [ESP + 0x28],EAX      ; 005164e8
    TEST byte ptr [0x01d224b8],0x8      ; 005164ec | DAT_01d224b8
    JZ 0x005167fa                       ; 005164f3
        ;   XREF to: 005167fa (CONDITIONAL_JUMP)  ; LAB_005167fa
    FLD float ptr [ESI + 0x34]          ; 005164f9
    FMUL float ptr [0x005e8f37]         ; 005164fc | DAT_005e8f37
        ;   Label: LAB_005164fc
    SUB ESP,0x4                         ; 00516502
    FSTP float ptr [ESP]                ; 00516505
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516508
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 0051650d
    MOV dword ptr [ESP + 0x2c],EAX      ; 00516510
    FLD float ptr [EBX]                 ; 00516514
    FMUL float ptr [0x005e8f2b]         ; 00516516 | DAT_005e8f2b
    SUB ESP,0x4                         ; 0051651c
    FSTP float ptr [ESP]                ; 0051651f
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516522
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516527
    MOV dword ptr [ESP + 0x30],EAX      ; 0051652a
    FLD float ptr [EBX + 0x4]           ; 0051652e
    FMUL float ptr [0x005e8f2b]         ; 00516531 | DAT_005e8f2b
    SUB ESP,0x4                         ; 00516537
    FSTP float ptr [ESP]                ; 0051653a
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 0051653d
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516542
    MOV dword ptr [ESP + 0x34],EAX      ; 00516545
    FLD float ptr [EBX + 0x8]           ; 00516549
    FMUL float ptr [0x005e8f2b]         ; 0051654c | DAT_005e8f2b
    SUB ESP,0x4                         ; 00516552
    FSTP float ptr [ESP]                ; 00516555
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516558
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 0051655d
    MOV dword ptr [ESP + 0x38],EAX      ; 00516560
    FLD float ptr [EBX + 0xc]           ; 00516564
    FMUL float ptr [0x005e8f2f]         ; 00516567 | DAT_005e8f2f
    SUB ESP,0x4                         ; 0051656d
    FSTP float ptr [ESP]                ; 00516570
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516573
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516578
    MOV dword ptr [ESP + 0x3c],EAX      ; 0051657b
    FLD float ptr [EBX + 0x14]          ; 0051657f
    FMUL float ptr [0x005e8f33]         ; 00516582 | DAT_005e8f33
    SUB ESP,0x4                         ; 00516588
    FSTP float ptr [ESP]                ; 0051658b
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 0051658e
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516593
    MOV dword ptr [ESP + 0x40],EAX      ; 00516596
    FLD float ptr [EBX + 0x18]          ; 0051659a
    FMUL float ptr [0x005e8f33]         ; 0051659d | DAT_005e8f33
    SUB ESP,0x4                         ; 005165a3
    FSTP float ptr [ESP]                ; 005165a6
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005165a9
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005165ae
    MOV dword ptr [ESP + 0x44],EAX      ; 005165b1
    FLD float ptr [EBX + 0x1c]          ; 005165b5
    FMUL float ptr [0x005e8f2b]         ; 005165b8 | DAT_005e8f2b
    FMUL float ptr [0x005e8f33]         ; 005165be | DAT_005e8f33
    SUB ESP,0x4                         ; 005165c4
    FSTP float ptr [ESP]                ; 005165c7
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005165ca
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005165cf
    MOV dword ptr [ESP + 0x48],EAX      ; 005165d2
    FLD float ptr [EBX + 0x20]          ; 005165d6
    FMUL float ptr [0x005e8f2b]         ; 005165d9 | DAT_005e8f2b
    FMUL float ptr [0x005e8f33]         ; 005165df | DAT_005e8f33
    SUB ESP,0x4                         ; 005165e5
    FSTP float ptr [ESP]                ; 005165e8
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005165eb
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005165f0
    MOV dword ptr [ESP + 0x4c],EAX      ; 005165f3
    FLD float ptr [EBX + 0x2c]          ; 005165f7
    FMUL float ptr [0x005e8f37]         ; 005165fa | DAT_005e8f37
    SUB ESP,0x4                         ; 00516600
    FSTP float ptr [ESP]                ; 00516603
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516606
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 0051660b
    MOV dword ptr [ESP + 0x50],EAX      ; 0051660e
    FLD float ptr [EBX + 0x28]          ; 00516612
    FMUL float ptr [0x005e8f37]         ; 00516615 | DAT_005e8f37
    SUB ESP,0x4                         ; 0051661b
    FSTP float ptr [ESP]                ; 0051661e
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516621
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516626
    MOV dword ptr [ESP + 0x54],EAX      ; 00516629
    FLD float ptr [EBX + 0x24]          ; 0051662d
    FMUL float ptr [0x005e8f37]         ; 00516630 | DAT_005e8f37
    SUB ESP,0x4                         ; 00516636
    FSTP float ptr [ESP]                ; 00516639
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 0051663c
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516641
    MOV DL,byte ptr [0x01d224b8]        ; 00516644 | DAT_01d224b8
    MOV dword ptr [ESP + 0x58],EAX      ; 0051664a
    TEST DL,0x8                         ; 0051664e
    JZ 0x00516802                       ; 00516651
        ;   XREF to: 00516802 (CONDITIONAL_JUMP)  ; LAB_00516802
    FLD float ptr [EBX + 0x34]          ; 00516657
    FMUL float ptr [0x005e8f37]         ; 0051665a | DAT_005e8f37
        ;   Label: LAB_0051665a
    SUB ESP,0x4                         ; 00516660
    FSTP float ptr [ESP]                ; 00516663
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516666
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 0051666b
    MOV dword ptr [ESP + 0x5c],EAX      ; 0051666e
    FLD float ptr [EBP]                 ; 00516672
    FMUL float ptr [0x005e8f2b]         ; 00516675 | DAT_005e8f2b
    SUB ESP,0x4                         ; 0051667b
    FSTP float ptr [ESP]                ; 0051667e
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516681
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516686
    MOV dword ptr [ESP + 0x60],EAX      ; 00516689
    FLD float ptr [EBP + 0x4]           ; 0051668d
    FMUL float ptr [0x005e8f2b]         ; 00516690 | DAT_005e8f2b
    SUB ESP,0x4                         ; 00516696
    FSTP float ptr [ESP]                ; 00516699
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 0051669c
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005166a1
    MOV dword ptr [ESP + 0x64],EAX      ; 005166a4
    FLD float ptr [EBP + 0x8]           ; 005166a8
    FMUL float ptr [0x005e8f2b]         ; 005166ab | DAT_005e8f2b
    SUB ESP,0x4                         ; 005166b1
    FSTP float ptr [ESP]                ; 005166b4
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005166b7
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005166bc
    MOV dword ptr [ESP + 0x68],EAX      ; 005166bf
    FLD float ptr [EBP + 0xc]           ; 005166c3
    FMUL float ptr [0x005e8f2f]         ; 005166c6 | DAT_005e8f2f
    SUB ESP,0x4                         ; 005166cc
    FSTP float ptr [ESP]                ; 005166cf
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005166d2
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005166d7
    MOV dword ptr [ESP + 0x6c],EAX      ; 005166da
    FLD float ptr [EBP + 0x14]          ; 005166de
    FMUL float ptr [0x005e8f33]         ; 005166e1 | DAT_005e8f33
    SUB ESP,0x4                         ; 005166e7
    FSTP float ptr [ESP]                ; 005166ea
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005166ed
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005166f2
    MOV dword ptr [ESP + 0x70],EAX      ; 005166f5
    FLD float ptr [EBP + 0x18]          ; 005166f9
    FMUL float ptr [0x005e8f33]         ; 005166fc | DAT_005e8f33
    SUB ESP,0x4                         ; 00516702
    FSTP float ptr [ESP]                ; 00516705
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516708
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 0051670d
    MOV dword ptr [ESP + 0x74],EAX      ; 00516710
    FLD float ptr [EBP + 0x1c]          ; 00516714
    FMUL double ptr [0x005e8f3b]        ; 00516717 | DAT_005e8f3b
    FMUL double ptr [0x005e8f43]        ; 0051671d | DAT_005e8f43
    SUB ESP,0x4                         ; 00516723
    FSTP float ptr [ESP]                ; 00516726
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516729
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 0051672e
    MOV dword ptr [ESP + 0x78],EAX      ; 00516731
    FLD float ptr [EBP + 0x20]          ; 00516735
    FMUL double ptr [0x005e8f3b]        ; 00516738 | DAT_005e8f3b
    FMUL double ptr [0x005e8f43]        ; 0051673e | DAT_005e8f43
    SUB ESP,0x4                         ; 00516744
    FSTP float ptr [ESP]                ; 00516747
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 0051674a
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 0051674f
    MOV dword ptr [ESP + 0x7c],EAX      ; 00516752
    FLD float ptr [EBP + 0x2c]          ; 00516756
    FMUL float ptr [0x005e8f37]         ; 00516759 | DAT_005e8f37
    SUB ESP,0x4                         ; 0051675f
    FSTP float ptr [ESP]                ; 00516762
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516765
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 0051676a
    MOV dword ptr [ESP + 0x80],EAX      ; 0051676d
    FLD float ptr [EBP + 0x28]          ; 00516774
    FMUL float ptr [0x005e8f37]         ; 00516777 | DAT_005e8f37
    SUB ESP,0x4                         ; 0051677d
    FSTP float ptr [ESP]                ; 00516780
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 00516783
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 00516788
    MOV dword ptr [ESP + 0x84],EAX      ; 0051678b
    FLD float ptr [EBP + 0x24]          ; 00516792
    FMUL float ptr [0x005e8f37]         ; 00516795 | DAT_005e8f37
    SUB ESP,0x4                         ; 0051679b
    FSTP float ptr [ESP]                ; 0051679e
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005167a1
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005167a6
    MOV DH,byte ptr [0x01d224b8]        ; 005167a9 | DAT_01d224b8
    MOV dword ptr [ESP + 0x88],EAX      ; 005167af
    TEST DH,0x8                         ; 005167b6
    JZ 0x0051680a                       ; 005167b9
        ;   XREF to: 0051680a (CONDITIONAL_JUMP)  ; LAB_0051680a
    FLD float ptr [EBP + 0x34]          ; 005167bb
    FMUL float ptr [0x005e8f37]         ; 005167be | DAT_005e8f37
        ;   Label: LAB_005167be
    SUB ESP,0x4                         ; 005167c4
    FSTP float ptr [ESP]                ; 005167c7
    CALL engine_mini3d.cpp_roundFloat_FUN_00516040 ; 005167ca
        ;   XREF to: 00516040 (UNCONDITIONAL_CALL)  ; int engine_mini3d.cpp_roundFloat_FUN_00516040(float value)
    ADD ESP,0x4                         ; 005167cf
    MOV dword ptr [ESP + 0x8c],EAX      ; 005167d2
    MOV ESI,dword ptr [0x01c51d14]      ; 005167d9 | DAT_01c51d14
    PUSH ESI                            ; 005167df
    PUSH 0x3                            ; 005167e0
    LEA EAX,[ESP + 0x8]                 ; 005167e2
    PUSH EAX                            ; 005167e6
    CALL engine_special.cpp_drawPolygon_FUN_00582340 ; 005167e7
        ;   XREF to: 00582340 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon_FUN_00582340(SRenderVertex * vertices, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 005167ec
    ADD ESP,0xb0                        ; 005167ef
    POP EBP                             ; 005167f5
    POP EDI                             ; 005167f6
    POP ESI                             ; 005167f7
    POP EBX                             ; 005167f8
    RET                                 ; 005167f9
    FLD float ptr [ESI + 0x30]          ; 005167fa
        ;   Label: LAB_005167fa
    JMP 0x005164fc                      ; 005167fd
        ;   XREF to: 005164fc (UNCONDITIONAL_JUMP)  ; LAB_005164fc
    FLD float ptr [EBX + 0x30]          ; 00516802
        ;   Label: LAB_00516802
    JMP 0x0051665a                      ; 00516805
        ;   XREF to: 0051665a (UNCONDITIONAL_JUMP)  ; LAB_0051665a
    FLD float ptr [EBP + 0x30]          ; 0051680a
        ;   Label: LAB_0051680a
    JMP 0x005167be                      ; 0051680d
        ;   XREF to: 005167be (UNCONDITIONAL_JUMP)  ; LAB_005167be
    INC EDX                             ; 0051680f
        ;   Label: LAB_0051680f
    ADD EAX,0x50                        ; 00516810
    CMP EDX,EDI                         ; 00516813
    JL 0x00516170                       ; 00516815
        ;   XREF to: 00516170 (CONDITIONAL_JUMP)  ; LAB_00516170
    XOR EAX,EAX                         ; 0051681b
        ;   Label: LAB_0051681b
    JMP 0x00516180                      ; 0051681d
        ;   XREF to: 00516180 (UNCONDITIONAL_JUMP)  ; LAB_00516180
    INC EDX                             ; 00516822
        ;   Label: LAB_00516822
    ADD EAX,0x50                        ; 00516823
    CMP EDX,EDI                         ; 00516826
    JL 0x005161b2                       ; 00516828
        ;   XREF to: 005161b2 (CONDITIONAL_JUMP)  ; LAB_005161b2
    XOR EAX,EAX                         ; 0051682e
        ;   Label: LAB_0051682e
    JMP 0x005161c2                      ; 00516830
        ;   XREF to: 005161c2 (UNCONDITIONAL_JUMP)  ; LAB_005161c2
    INC EDX                             ; 00516835
        ;   Label: LAB_00516835
    ADD EAX,0x50                        ; 00516836
    CMP EDX,EDI                         ; 00516839
    JL 0x00516210                       ; 0051683b
        ;   XREF to: 00516210 (CONDITIONAL_JUMP)  ; LAB_00516210
    XOR EAX,EAX                         ; 00516841
        ;   Label: LAB_00516841
    JMP 0x00516220                      ; 00516843
        ;   XREF to: 00516220 (UNCONDITIONAL_JUMP)  ; LAB_00516220
    INC EDX                             ; 00516848
        ;   Label: LAB_00516848
    ADD EAX,0x50                        ; 00516849
    CMP EDX,ESI                         ; 0051684c
    JL 0x00516266                       ; 0051684e
        ;   XREF to: 00516266 (CONDITIONAL_JUMP)  ; LAB_00516266
    XOR EAX,EAX                         ; 00516854
        ;   Label: LAB_00516854
    JMP 0x00516276                      ; 00516856
        ;   XREF to: 00516276 (UNCONDITIONAL_JUMP)  ; LAB_00516276
    MOV ESI,dword ptr [ESP + 0xac]      ; 0051685b
        ;   Label: LAB_0051685b
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00516862
    MOV EDI,EBP                         ; 00516869
    CALL engine_special.cpp_FUN_0057f473 ; 0051686b
        ;   XREF to: 0057f473 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_0057f473()
    JMP 0x005162af                      ; 00516870
        ;   XREF to: 005162af (UNCONDITIONAL_JUMP)  ; LAB_005162af
    CMP dword ptr [0x0061b4a0],0x20     ; 00516875 | DAT_0061b4a0
        ;   Label: LAB_00516875
    JNZ 0x00516898                      ; 0051687c
        ;   XREF to: 00516898 (CONDITIONAL_JUMP)  ; LAB_00516898
    MOV ESI,dword ptr [ESP + 0xac]      ; 0051687e
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00516885
    MOV EDI,EBP                         ; 0051688c
    CALL engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03 ; 0051688e
        ;   XREF to: 0057fb03 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x005162af                      ; 00516893
        ;   XREF to: 005162af (UNCONDITIONAL_JUMP)  ; LAB_005162af
    MOV ESI,dword ptr [ESP + 0xac]      ; 00516898
        ;   Label: LAB_00516898
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0051689f
    MOV EDI,EBP                         ; 005168a6
    CALL engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39 ; 005168a8
        ;   XREF to: 0057fd39 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39(SSoftwareEdge * left_vertex, SSoftwareEdge * right_vertex, int scanline_y)
    JMP 0x005162af                      ; 005168ad
        ;   XREF to: 005162af (UNCONDITIONAL_JUMP)  ; LAB_005162af

