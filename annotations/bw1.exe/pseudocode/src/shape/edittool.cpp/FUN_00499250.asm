; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00499250(undefined4 param_1,uint param_2,uint param_3,uint param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_0061abc4
;   undefined4 DAT_0061abc8
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c3f540
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499250
        ;   Label: shape_edittool.cpp_FUN_00499250
    MOV EDX,dword ptr [ESP + 0xc]       ; 00499251
    MOV EBX,dword ptr [ESP + 0x14]      ; 00499255
    MOV dword ptr [0x01c3f540],EDX      ; 00499259 | DAT_01c3f540
    CMP EDX,0x1                         ; 0049925f
    JNC 0x00499306                      ; 00499262
        ;   XREF to: 00499306 (CONDITIONAL_JUMP)  ; LAB_00499306
    TEST EDX,EDX                        ; 00499268
    JNZ 0x00499311                      ; 0049926a
        ;   XREF to: 00499311 (CONDITIONAL_JUMP)  ; LAB_00499311
    CMP dword ptr [ESP + 0x10],0x0      ; 00499270
        ;   Label: LAB_00499270
    JLE 0x0049929e                      ; 00499275
        ;   XREF to: 0049929e (CONDITIONAL_JUMP)  ; LAB_0049929e
    TEST EBX,EBX                        ; 00499277
        ;   Label: LAB_00499277
    JLE 0x004992a8                      ; 00499279
        ;   XREF to: 004992a8 (CONDITIONAL_JUMP)  ; LAB_004992a8
    TEST byte ptr [ESP + 0x10],0x1      ; 0049927b
        ;   Label: LAB_0049927b
    JNZ 0x00499286                      ; 00499280
        ;   XREF to: 00499286 (CONDITIONAL_JUMP)  ; LAB_00499286
    INC dword ptr [ESP + 0x10]          ; 00499282
    TEST BL,0x1                         ; 00499286
        ;   Label: LAB_00499286
    JNZ 0x0049928c                      ; 00499289
        ;   XREF to: 0049928c (CONDITIONAL_JUMP)  ; LAB_0049928c
    INC EBX                             ; 0049928b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049928c
        ;   Label: LAB_0049928c
    MOV dword ptr [0x0061abc4],EBX      ; 00499290 | DAT_0061abc4
    MOV dword ptr [0x0061abc8],EDX      ; 00499296 | DAT_0061abc8
    POP EBX                             ; 0049929c
    RET                                 ; 0049929d
    MOV dword ptr [ESP + 0x10],0xb      ; 0049929e
        ;   Label: LAB_0049929e
    JMP 0x00499277                      ; 004992a6
        ;   XREF to: 00499277 (UNCONDITIONAL_JUMP)  ; LAB_00499277
    MOV EBX,dword ptr [ESP + 0x10]      ; 004992a8
        ;   Label: LAB_004992a8
    IMUL EBX,dword ptr [0x0061b498]     ; 004992ac | DAT_0061b498
    LEA EDX,[EBX*0x4 + 0x0]             ; 004992b3
    SUB EDX,EBX                         ; 004992ba
    MOV ECX,dword ptr [0x0061b49c]      ; 004992bc | DAT_0061b49c
    MOV EAX,EDX                         ; 004992c2
    SAR EDX,0x1f                        ; 004992c4
    IDIV ECX                            ; 004992c7
    MOV EDX,EAX                         ; 004992c9
    SAR EDX,0x1f                        ; 004992cb
    SHL EDX,0x2                         ; 004992ce
    SBB EAX,EDX                         ; 004992d1
    SAR EAX,0x2                         ; 004992d3
    MOV EBX,EAX                         ; 004992d6
    JMP 0x0049927b                      ; 004992d8
        ;   XREF to: 0049927b (UNCONDITIONAL_JUMP)  ; LAB_0049927b
    CMP dword ptr [ESP + 0x10],0x0      ; 004992da
        ;   Label: LAB_004992da
    JLE 0x004992e7                      ; 004992df
        ;   XREF to: 004992e7 (CONDITIONAL_JUMP)  ; LAB_004992e7
    TEST EBX,EBX                        ; 004992e1
    JLE 0x004992f5                      ; 004992e3
        ;   XREF to: 004992f5 (CONDITIONAL_JUMP)  ; LAB_004992f5
    JMP 0x00499286                      ; 004992e5
        ;   XREF to: 00499286 (UNCONDITIONAL_JUMP)  ; LAB_00499286
    MOV dword ptr [ESP + 0x10],0xb      ; 004992e7
        ;   Label: LAB_004992e7
    TEST EBX,EBX                        ; 004992ef
    JLE 0x004992f5                      ; 004992f1
        ;   XREF to: 004992f5 (CONDITIONAL_JUMP)  ; LAB_004992f5
    JMP 0x00499286                      ; 004992f3
        ;   XREF to: 00499286 (UNCONDITIONAL_JUMP)  ; LAB_00499286
    MOV EAX,dword ptr [ESP + 0x10]      ; 004992f5
        ;   Label: LAB_004992f5
    MOV EDX,EAX                         ; 004992f9
    SAR EDX,0x1f                        ; 004992fb
    SUB EAX,EDX                         ; 004992fe
    SAR EAX,0x1                         ; 00499300
    MOV EBX,EAX                         ; 00499302
    JMP 0x00499286                      ; 00499304
        ;   XREF to: 00499286 (UNCONDITIONAL_JUMP)  ; LAB_00499286
    JBE 0x004992da                      ; 00499306
        ;   XREF to: 004992da (CONDITIONAL_JUMP)  ; LAB_004992da
        ;   Label: LAB_00499306
    CMP EDX,0x2                         ; 00499308
    JZ 0x00499270                       ; 0049930b
        ;   XREF to: 00499270 (CONDITIONAL_JUMP)  ; LAB_00499270
    PUSH EDI                            ; 00499311
        ;   Label: LAB_00499311
    PUSH ESI                            ; 00499312
    MOV ESI,0x5dc2f0                    ; 00499313
    MOV EDI,0xb9a                       ; 00499318
    PUSH 0x5dc306                       ; 0049931d
    MOV dword ptr [0x01d1d400],ESI      ; 00499322 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00499328 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049932e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00499333
    POP ESI                             ; 00499336
    POP EDI                             ; 00499337
    MOV EDX,dword ptr [ESP + 0x10]      ; 00499338
    MOV dword ptr [0x0061abc4],EBX      ; 0049933c | DAT_0061abc4
    MOV dword ptr [0x0061abc8],EDX      ; 00499342 | DAT_0061abc8
    POP EBX                             ; 00499348
    RET                                 ; 00499349

