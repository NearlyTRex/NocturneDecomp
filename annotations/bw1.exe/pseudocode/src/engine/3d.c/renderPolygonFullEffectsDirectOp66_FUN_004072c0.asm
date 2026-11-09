; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_004072c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_00629014
;   undefined4 DAT_00629018
;   undefined4 DAT_00713af8
;   undefined4 DAT_00713afc
;   undefined4 DAT_00713b00
;   undefined4 DAT_00713b04
;   undefined4 DAT_00713b08
;   undefined4 DAT_00713b0c
;   undefined4 DAT_00713b34
;   undefined4 DAT_00713bc4
;   undefined4 DAT_00713bc8
;   undefined4 DAT_00713c0c
;   undefined4 DAT_00713c10
;   ... and 6 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_texture.cpp_FUN_00597d00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004072c0
        ;   Label: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_004072c0
    PUSH ESI                            ; 004072c1
    PUSH EDI                            ; 004072c2
    PUSH EBP                            ; 004072c3
    SUB ESP,0x4                         ; 004072c4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004072c7
    ADD EAX,0x8                         ; 004072cb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004072ce
    PUSH EAX                            ; 004072d2
    ADD EBX,0x18                        ; 004072d3
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004072d6
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004072db
    TEST EAX,EAX                        ; 004072de
    JZ 0x004073f8                       ; 004072e0
        ;   XREF to: 004073f8 (CONDITIONAL_JUMP)  ; LAB_004073f8
    CMP dword ptr [0x01c51d00],0x0      ; 004072e6 | DAT_01c51d00
    JNZ 0x0040742f                      ; 004072ed
        ;   XREF to: 0040742f (CONDITIONAL_JUMP)  ; LAB_0040742f
    CMP dword ptr [0x0061b4a0],0x20     ; 004072f3 | DAT_0061b4a0
    JNZ 0x00407420                      ; 004072fa
        ;   XREF to: 00407420 (CONDITIONAL_JUMP)  ; LAB_00407420
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00407300 | DAT_01c4f02c
    MOV ESI,0x1                         ; 0040730a
        ;   Label: LAB_0040730a
    MOV ECX,0x1e7                       ; 0040730f
    MOV EDI,dword ptr [0x00713af8]      ; 00407314 | DAT_00713af8
    MOV dword ptr [0x01c51d18],ESI      ; 0040731a | DAT_01c51d18
    MOV dword ptr [0x01c51d14],ECX      ; 00407320 | DAT_01c51d14
    TEST EDI,EDI                        ; 00407326
    JZ 0x00407456                       ; 00407328
        ;   XREF to: 00407456 (CONDITIONAL_JUMP)  ; LAB_00407456
    MOV EBP,dword ptr [0x00713afc]      ; 0040732e | DAT_00713afc
    CMP EBP,0x9c4                       ; 00407334
    JGE 0x00407456                      ; 0040733a
        ;   XREF to: 00407456 (CONDITIONAL_JUMP)  ; LAB_00407456
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407340
    CMP dword ptr [EAX + 0x4],0x4       ; 00407344
    JG 0x00407456                       ; 00407348
        ;   XREF to: 00407456 (CONDITIONAL_JUMP)  ; LAB_00407456
    LEA EAX,[EBP*0x8 + 0x0]             ; 0040734e
    ADD EAX,EBP                         ; 00407355
    SHL EAX,0x2                         ; 00407357
    SUB EAX,EBP                         ; 0040735a
    MOV EDX,0x713b00                    ; 0040735c | DAT_00713b00
    SHL EAX,0x3                         ; 00407361
    MOV ESI,dword ptr [0x00713afc]      ; 00407364 | DAT_00713afc
    ADD EDX,EAX                         ; 0040736a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040736c
    INC ESI                             ; 00407370
    MOV EAX,dword ptr [EAX + 0x4]       ; 00407371
    MOV dword ptr [0x00713afc],ESI      ; 00407374 | DAT_00713afc
    MOV dword ptr [EDX],EAX             ; 0040737a | DAT_00713b00
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040737c
    MOV EBP,0x7fffffff                  ; 00407380
    MOV dword ptr [ESP],EDX             ; 00407385
    MOV EDI,dword ptr [EAX + 0x4]       ; 00407388
    XOR EDX,EDX                         ; 0040738b
    TEST EDI,EDI                        ; 0040738d
    JLE 0x004073c2                      ; 0040738f
        ;   XREF to: 004073c2 (CONDITIONAL_JUMP)  ; LAB_004073c2
    MOV EAX,dword ptr [ESP]             ; 00407391
    IMUL ESI,dword ptr [EBX],0x30       ; 00407394
        ;   Label: LAB_00407394
    MOV ECX,0xc                         ; 00407397
    LEA EDI,[EAX + 0x4]                 ; 0040739c
    LEA ESI,[ESI + 0x629014]            ; 0040739f | DAT_00629014
    MOVSD.REP ES:EDI,ESI                ; 004073a5 | DAT_00629014 | DAT_00713b04 | DAT_00629018
    MOV ECX,dword ptr [EAX + 0xc]       ; 004073a7 | DAT_00713b0c
    CMP EBP,ECX                         ; 004073aa
    JLE 0x004073b0                      ; 004073ac
        ;   XREF to: 004073b0 (CONDITIONAL_JUMP)  ; LAB_004073b0
    MOV EBP,ECX                         ; 004073ae
    MOV ESI,dword ptr [ESP + 0x18]      ; 004073b0
        ;   Label: LAB_004073b0
    ADD EAX,0x30                        ; 004073b4
    INC EDX                             ; 004073b7
    MOV ECX,dword ptr [ESI + 0x4]       ; 004073b8
    ADD EBX,0x4                         ; 004073bb
    CMP EDX,ECX                         ; 004073be
    JL 0x00407394                       ; 004073c0
        ;   XREF to: 00407394 (CONDITIONAL_JUMP)  ; LAB_00407394
    CALL engine_texture.cpp_FUN_00597d00 ; 004073c2
        ;   XREF to: 00597d00 (UNCONDITIONAL_CALL)  ; SMRGLTextureBasic * engine_texture.cpp_FUN_00597d00()
        ;   Label: LAB_004073c2
    MOV EDI,dword ptr [ESP]             ; 004073c7
    MOV ECX,0x12                        ; 004073ca
    MOV ESI,EAX                         ; 004073cf
    LEA EDI,[EDI + 0xc4]                ; 004073d1
    MOV EDX,dword ptr [ESP]             ; 004073d7
    MOV EAX,[0x0061b4b8]                ; 004073da | DAT_0061b4b8
    MOVSD.REP ES:EDI,ESI                ; 004073df | DAT_00713bc4 | DAT_00713bc8
    MOV dword ptr [EDX + 0x10c],EAX     ; 004073e1 | DAT_00713c0c
    MOV dword ptr [EDX + 0x114],EBP     ; 004073e7 | DAT_00713c14
    MOV EAX,[0x01c51d0c]                ; 004073ed | DAT_01c51d0c
    MOV dword ptr [EDX + 0x110],EAX     ; 004073f2 | DAT_00713c10
    MOV EDX,dword ptr [ESP + 0x18]      ; 004073f8
        ;   Label: LAB_004073f8
    MOV EDX,dword ptr [EDX + 0x4]       ; 004073fc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004073ff
    SUB EAX,EDX                         ; 00407406
    LEA EDX,[EAX*0x4 + 0x0]             ; 00407408
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040740f
    ADD EAX,0x18                        ; 00407413
    ADD EAX,EDX                         ; 00407416
    ADD ESP,0x4                         ; 00407418
    POP EBP                             ; 0040741b
    POP EDI                             ; 0040741c
    POP ESI                             ; 0040741d
    POP EBX                             ; 0040741e
    RET                                 ; 0040741f
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00407420 | DAT_01c4f02c
        ;   Label: LAB_00407420
    JMP 0x0040730a                      ; 0040742a
        ;   XREF to: 0040730a (UNCONDITIONAL_JUMP)  ; LAB_0040730a
    CMP dword ptr [0x0061b4a0],0x20     ; 0040742f | DAT_0061b4a0
        ;   Label: LAB_0040742f
    JNZ 0x00407447                      ; 00407436
        ;   XREF to: 00407447 (CONDITIONAL_JUMP)  ; LAB_00407447
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00407438 | DAT_01c4f02c
    JMP 0x0040730a                      ; 00407442
        ;   XREF to: 0040730a (UNCONDITIONAL_JUMP)  ; LAB_0040730a
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00407447 | DAT_01c4f02c
        ;   Label: LAB_00407447
    JMP 0x0040730a                      ; 00407451
        ;   XREF to: 0040730a (UNCONDITIONAL_JUMP)  ; LAB_0040730a
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407456
        ;   Label: LAB_00407456
    PUSH EBX                            ; 0040745a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0040745b
    PUSH ECX                            ; 0040745e
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 0040745f
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407464
    JMP 0x004073f8                      ; 00407467
        ;   XREF to: 004073f8 (UNCONDITIONAL_JUMP)  ; LAB_004073f8

