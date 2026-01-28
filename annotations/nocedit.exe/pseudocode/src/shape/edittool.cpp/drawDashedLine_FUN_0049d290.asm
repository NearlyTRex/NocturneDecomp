; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_edittool_cpp_drawDashedLine_FUN_0049d290(int x1,int y1,int x2,int y2,int dash_length)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   x2
; int              Stack[0x10]:4   y2
; int              Stack[0x14]:4   dash_length
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 at 004a6720
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 at 004a5073
;
; Called Functions:
;   engine_2d.c_plotPixel_FUN_00401140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d290
        ;   Label: shape_edittool.cpp_drawDashedLine_FUN_0049d290
    PUSH ESI                            ; 0049d291
    PUSH EDI                            ; 0049d292
    PUSH EBP                            ; 0049d293
    SUB ESP,0x10                        ; 0049d294
    MOV EBP,dword ptr [ESP + 0x28]      ; 0049d297
    MOV ESI,dword ptr [ESP + 0x34]      ; 0049d29b
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049d29f
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0049d2a3
    CMP EDX,ECX                         ; 0049d2a7
    JG 0x0049d39e                       ; 0049d2a9
        ;   XREF to: 0049d39e (CONDITIONAL_JUMP)  ; LAB_0049d39e
    MOV EBX,dword ptr [ESP + 0x30]      ; 0049d2af
        ;   Label: LAB_0049d2af
    CMP EBP,EBX                         ; 0049d2b3
    JLE 0x0049d2bf                      ; 0049d2b5
        ;   XREF to: 0049d2bf (CONDITIONAL_JUMP)  ; LAB_0049d2bf
    MOV EDX,EBP                         ; 0049d2b7
    MOV EBP,EBX                         ; 0049d2b9
    MOV dword ptr [ESP + 0x30],EDX      ; 0049d2bb
    MOV EDI,dword ptr [ESP + 0x24]      ; 0049d2bf
        ;   Label: LAB_0049d2bf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049d2c3
    MOV EBX,0x1                         ; 0049d2c7
    CMP EDI,EAX                         ; 0049d2cc
    JGE 0x0049d2fc                      ; 0049d2ce
        ;   XREF to: 0049d2fc (CONDITIONAL_JUMP)  ; LAB_0049d2fc
    LEA EDX,[ESI + ESI*0x1]             ; 0049d2d0
    MOV dword ptr [ESP + 0x4],EDX       ; 0049d2d3
    MOV ECX,dword ptr [ESP + 0x4]       ; 0049d2d7
        ;   Label: LAB_0049d2d7
    MOV EDX,EBX                         ; 0049d2db
    MOV EAX,EBX                         ; 0049d2dd
    SAR EDX,0x1f                        ; 0049d2df
    IDIV ECX                            ; 0049d2e2
    CMP EDX,ESI                         ; 0049d2e4
    JGE 0x0049d2f2                      ; 0049d2e6
        ;   XREF to: 0049d2f2 (CONDITIONAL_JUMP)  ; LAB_0049d2f2
    PUSH EBP                            ; 0049d2e8
    PUSH EDI                            ; 0049d2e9
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0049d2ea
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0049d2ef
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0049d2f2
        ;   Label: LAB_0049d2f2
    INC EDI                             ; 0049d2f6
    INC EBX                             ; 0049d2f7
    CMP EDI,EDX                         ; 0049d2f8
    JL 0x0049d2d7                       ; 0049d2fa
        ;   XREF to: 0049d2d7 (CONDITIONAL_JUMP)  ; LAB_0049d2d7
    MOV ECX,dword ptr [ESP + 0x30]      ; 0049d2fc
        ;   Label: LAB_0049d2fc
    MOV EDI,EBP                         ; 0049d300
    CMP EBP,ECX                         ; 0049d302
    JGE 0x0049d336                      ; 0049d304
        ;   XREF to: 0049d336 (CONDITIONAL_JUMP)  ; LAB_0049d336
    LEA EDX,[ESI + ESI*0x1]             ; 0049d306
    MOV dword ptr [ESP + 0xc],EDX       ; 0049d309
    MOV ECX,dword ptr [ESP + 0xc]       ; 0049d30d
        ;   Label: LAB_0049d30d
    MOV EDX,EBX                         ; 0049d311
    MOV EAX,EBX                         ; 0049d313
    SAR EDX,0x1f                        ; 0049d315
    IDIV ECX                            ; 0049d318
    CMP EDX,ESI                         ; 0049d31a
    JGE 0x0049d32c                      ; 0049d31c
        ;   XREF to: 0049d32c (CONDITIONAL_JUMP)  ; LAB_0049d32c
    PUSH EDI                            ; 0049d31e
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049d31f
    PUSH EAX                            ; 0049d323
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0049d324
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0049d329
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049d32c
        ;   Label: LAB_0049d32c
    INC EDI                             ; 0049d330
    INC EBX                             ; 0049d331
    CMP EDI,EAX                         ; 0049d332
    JL 0x0049d30d                       ; 0049d334
        ;   XREF to: 0049d30d (CONDITIONAL_JUMP)  ; LAB_0049d30d
    MOV ECX,dword ptr [ESP + 0x24]      ; 0049d336
        ;   Label: LAB_0049d336
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0049d33a
    CMP EDI,ECX                         ; 0049d33e
    JLE 0x0049d370                      ; 0049d340
        ;   XREF to: 0049d370 (CONDITIONAL_JUMP)  ; LAB_0049d370
    LEA EDX,[ESI + ESI*0x1]             ; 0049d342
    MOV dword ptr [ESP],EDX             ; 0049d345
    MOV ECX,dword ptr [ESP]             ; 0049d348
        ;   Label: LAB_0049d348
    MOV EDX,EBX                         ; 0049d34b
    MOV EAX,EBX                         ; 0049d34d
    SAR EDX,0x1f                        ; 0049d34f
    IDIV ECX                            ; 0049d352
    CMP EDX,ESI                         ; 0049d354
    JGE 0x0049d366                      ; 0049d356
        ;   XREF to: 0049d366 (CONDITIONAL_JUMP)  ; LAB_0049d366
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049d358
    PUSH EAX                            ; 0049d35c
    PUSH EDI                            ; 0049d35d
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0049d35e
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0049d363
    MOV EDX,dword ptr [ESP + 0x24]      ; 0049d366
        ;   Label: LAB_0049d366
    DEC EDI                             ; 0049d36a
    INC EBX                             ; 0049d36b
    CMP EDI,EDX                         ; 0049d36c
    JG 0x0049d348                       ; 0049d36e
        ;   XREF to: 0049d348 (CONDITIONAL_JUMP)  ; LAB_0049d348
    MOV EDI,dword ptr [ESP + 0x30]      ; 0049d370
        ;   Label: LAB_0049d370
    CMP EBP,EDI                         ; 0049d374
    JGE 0x0049d396                      ; 0049d376
        ;   XREF to: 0049d396 (CONDITIONAL_JUMP)  ; LAB_0049d396
    LEA EDX,[ESI + ESI*0x1]             ; 0049d378
    MOV dword ptr [ESP + 0x8],EDX       ; 0049d37b
    MOV ECX,dword ptr [ESP + 0x8]       ; 0049d37f
        ;   Label: LAB_0049d37f
    MOV EDX,EBX                         ; 0049d383
    MOV EAX,EBX                         ; 0049d385
    SAR EDX,0x1f                        ; 0049d387
    IDIV ECX                            ; 0049d38a
    CMP EDX,ESI                         ; 0049d38c
    JL 0x0049d3ab                       ; 0049d38e
        ;   XREF to: 0049d3ab (CONDITIONAL_JUMP)  ; LAB_0049d3ab
    DEC EDI                             ; 0049d390
    INC EBX                             ; 0049d391
    CMP EDI,EBP                         ; 0049d392
    JG 0x0049d37f                       ; 0049d394
        ;   XREF to: 0049d37f (CONDITIONAL_JUMP)  ; LAB_0049d37f
    ADD ESP,0x10                        ; 0049d396
        ;   Label: LAB_0049d396
    POP EBP                             ; 0049d399
    POP EDI                             ; 0049d39a
    POP ESI                             ; 0049d39b
    POP EBX                             ; 0049d39c
    RET                                 ; 0049d39d
    MOV dword ptr [ESP + 0x24],ECX      ; 0049d39e
        ;   Label: LAB_0049d39e
    MOV dword ptr [ESP + 0x2c],EDX      ; 0049d3a2
    JMP 0x0049d2af                      ; 0049d3a6
        ;   XREF to: 0049d2af (UNCONDITIONAL_JUMP)  ; LAB_0049d2af
    PUSH EDI                            ; 0049d3ab
        ;   Label: LAB_0049d3ab
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049d3ac
    PUSH EAX                            ; 0049d3b0
    CALL engine_2d.c_plotPixel_FUN_00401140 ; 0049d3b1
        ;   XREF to: 00401140 (UNCONDITIONAL_CALL)  ; void engine_2d.c_plotPixel_FUN_00401140(int x, int y)
    ADD ESP,0x8                         ; 0049d3b6
    DEC EDI                             ; 0049d3b9
    INC EBX                             ; 0049d3ba
    CMP EDI,EBP                         ; 0049d3bb
    JG 0x0049d37f                       ; 0049d3bd
        ;   XREF to: 0049d37f (CONDITIONAL_JUMP)  ; LAB_0049d37f
    ADD ESP,0x10                        ; 0049d3bf
    POP EBP                             ; 0049d3c2
    POP EDI                             ; 0049d3c3
    POP ESI                             ; 0049d3c4
    POP EBX                             ; 0049d3c5
    RET                                 ; 0049d3c6

