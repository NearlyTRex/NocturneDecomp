; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_font_cpp_FUN_004b01d0(void)
;
;
; Called Functions:
;   crt_string.c_strupr_FUN_005a5b10
;   engine_font.cpp_CBitFont_loadNewBitmap_FUN_004b0190
;   engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0
;   support_trstream.cpp_CInStream_readLine_FUN_00573790
;   support_trstream.cpp_CInStream_scanf_FUN_00572590
;   support_trstream.cpp_CInStreamFile_close_FUN_00573db0
;   support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0
;   support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40
;   support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b01d0
        ;   Label: engine_font.cpp_FUN_004b01d0
    PUSH ESI                            ; 004b01d1
    PUSH EDI                            ; 004b01d2
    PUSH EBP                            ; 004b01d3
    SUB ESP,0x24c                       ; 004b01d4
    MOV EBX,dword ptr [ESP + 0x260]     ; 004b01da
    MOV EBP,dword ptr [ESP + 0x264]     ; 004b01e1
    LEA EAX,[ESP + 0x200]               ; 004b01e8
    PUSH EAX                            ; 004b01ef
    CALL support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0 ; 004b01f0
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004b01f5
    LEA EDX,[EBX + 0x144]               ; 004b01f8
    MOV ESI,EBP                         ; 004b01fe
    MOV EDI,EDX                         ; 004b0200
    PUSH EDI                            ; 004b0202
    MOV AL,byte ptr [ESI]               ; 004b0203
        ;   Label: LAB_004b0203
    MOV byte ptr [EDI],AL               ; 004b0205
    CMP AL,0x0                          ; 004b0207
    JZ 0x004b021b                       ; 004b0209
        ;   XREF to: 004b021b (CONDITIONAL_JUMP)  ; LAB_004b021b
    MOV AL,byte ptr [ESI + 0x1]         ; 004b020b
    ADD ESI,0x2                         ; 004b020e
    MOV byte ptr [EDI + 0x1],AL         ; 004b0211
    ADD EDI,0x2                         ; 004b0214
    CMP AL,0x0                          ; 004b0217
    JNZ 0x004b0203                      ; 004b0219
        ;   XREF to: 004b0203 (CONDITIONAL_JUMP)  ; LAB_004b0203
    POP EDI                             ; 004b021b
        ;   Label: LAB_004b021b
    PUSH EDX                            ; 004b021c
    CALL crt_string.c_strupr_FUN_005a5b10 ; 004b021d
        ;   XREF to: 005a5b10 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strupr_FUN_005a5b10(char * string)
    ADD ESP,0x4                         ; 004b0222
    PUSH 0x1                            ; 004b0225
    PUSH EBP                            ; 004b0227
    PUSH 0x5c1fb2                       ; 004b0228
    LEA EAX,[ESP + 0x20c]               ; 004b022d
    PUSH EAX                            ; 004b0234
    CALL support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0 ; 004b0235
        ;   XREF to: 00573fc0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_openInDirectory_FUN_00573fc0(CInStreamFile * this_ptr, char * directory, char * filename, int binary_mode)
    ADD ESP,0x10                        ; 004b023a
    TEST EAX,EAX                        ; 004b023d
    JNZ 0x004b025e                      ; 004b023f
        ;   XREF to: 004b025e (CONDITIONAL_JUMP)  ; LAB_004b025e
    PUSH 0x0                            ; 004b0241
        ;   Label: LAB_004b0241
    LEA EAX,[ESP + 0x204]               ; 004b0243
    PUSH EAX                            ; 004b024a
    CALL support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40 ; 004b024b
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * support_trstream.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004b0250
    ADD ESP,0x24c                       ; 004b0253
    POP EBP                             ; 004b0259
    POP EDI                             ; 004b025a
    POP ESI                             ; 004b025b
    POP EBX                             ; 004b025c
    RET                                 ; 004b025d
    PUSH 0xff                           ; 004b025e
        ;   Label: LAB_004b025e
    LEA EAX,[ESP + 0x104]               ; 004b0263
    PUSH EAX                            ; 004b026a
    LEA EAX,[ESP + 0x208]               ; 004b026b
    PUSH EAX                            ; 004b0272
    CALL support_trstream.cpp_CInStream_readLine_FUN_00573790 ; 004b0273
        ;   XREF to: 00573790 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_readLine_FUN_00573790(CInStream * this_ptr, char * buffer, int size)
    ADD ESP,0xc                         ; 004b0278
    MOV EAX,ESP                         ; 004b027b
    PUSH EAX                            ; 004b027d
    PUSH 0x5c1fb6                       ; 004b027e
    LEA EAX,[ESP + 0x208]               ; 004b0283
    PUSH EAX                            ; 004b028a
    CALL support_trstream.cpp_CInStream_scanf_FUN_00572590 ; 004b028b
        ;   XREF to: 00572590 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_scanf_FUN_00572590(CInStream * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b0290
    PUSH 0xff                           ; 004b0293
    LEA EAX,[ESP + 0x104]               ; 004b0298
    PUSH EAX                            ; 004b029f
    LEA EAX,[ESP + 0x208]               ; 004b02a0
    PUSH EAX                            ; 004b02a7
    CALL support_trstream.cpp_CInStream_readLine_FUN_00573790 ; 004b02a8
        ;   XREF to: 00573790 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_readLine_FUN_00573790(CInStream * this_ptr, char * buffer, int size)
    ADD ESP,0xc                         ; 004b02ad
    LEA EAX,[ESP + 0x230]               ; 004b02b0
    PUSH EAX                            ; 004b02b7
    LEA EAX,[ESP + 0x230]               ; 004b02b8
    PUSH EAX                            ; 004b02bf
    PUSH 0x5c1fba                       ; 004b02c0
    LEA EAX,[ESP + 0x20c]               ; 004b02c5
    PUSH EAX                            ; 004b02cc
    CALL support_trstream.cpp_CInStream_scanf_FUN_00572590 ; 004b02cd
        ;   XREF to: 00572590 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_scanf_FUN_00572590(CInStream * this_ptr, char * format)
    ADD ESP,0x10                        ; 004b02d2
    PUSH 0xff                           ; 004b02d5
    LEA EAX,[ESP + 0x104]               ; 004b02da
    PUSH EAX                            ; 004b02e1
    LEA EAX,[ESP + 0x208]               ; 004b02e2
    PUSH EAX                            ; 004b02e9
    CALL support_trstream.cpp_CInStream_readLine_FUN_00573790 ; 004b02ea
        ;   XREF to: 00573790 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_readLine_FUN_00573790(CInStream * this_ptr, char * buffer, int size)
    ADD ESP,0xc                         ; 004b02ef
    LEA EAX,[ESP + 0x238]               ; 004b02f2
    PUSH EAX                            ; 004b02f9
    LEA EAX,[ESP + 0x238]               ; 004b02fa
    PUSH EAX                            ; 004b0301
    PUSH 0x5c1fc1                       ; 004b0302
    LEA EAX,[ESP + 0x20c]               ; 004b0307
    PUSH EAX                            ; 004b030e
    CALL support_trstream.cpp_CInStream_scanf_FUN_00572590 ; 004b030f
        ;   XREF to: 00572590 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_scanf_FUN_00572590(CInStream * this_ptr, char * format)
    ADD ESP,0x10                        ; 004b0314
    PUSH 0xff                           ; 004b0317
    LEA EAX,[ESP + 0x104]               ; 004b031c
    PUSH EAX                            ; 004b0323
    LEA EAX,[ESP + 0x208]               ; 004b0324
    PUSH EAX                            ; 004b032b
    CALL support_trstream.cpp_CInStream_readLine_FUN_00573790 ; 004b032c
        ;   XREF to: 00573790 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_readLine_FUN_00573790(CInStream * this_ptr, char * buffer, int size)
    ADD ESP,0xc                         ; 004b0331
    LEA EAX,[ESP + 0x23c]               ; 004b0334
    PUSH EAX                            ; 004b033b
    PUSH 0x5c1fc8                       ; 004b033c
    LEA EAX,[ESP + 0x208]               ; 004b0341
    PUSH EAX                            ; 004b0348
    CALL support_trstream.cpp_CInStream_scanf_FUN_00572590 ; 004b0349
        ;   XREF to: 00572590 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_scanf_FUN_00572590(CInStream * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b034e
    PUSH 0xff                           ; 004b0351
    LEA EAX,[ESP + 0x104]               ; 004b0356
    PUSH EAX                            ; 004b035d
    LEA EAX,[ESP + 0x208]               ; 004b035e
    PUSH EAX                            ; 004b0365
    CALL support_trstream.cpp_CInStream_readLine_FUN_00573790 ; 004b0366
        ;   XREF to: 00573790 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_readLine_FUN_00573790(CInStream * this_ptr, char * buffer, int size)
    ADD ESP,0xc                         ; 004b036b
    LEA EAX,[ESP + 0x240]               ; 004b036e
    PUSH EAX                            ; 004b0375
    PUSH 0x5c1fcc                       ; 004b0376
    LEA EAX,[ESP + 0x208]               ; 004b037b
    PUSH EAX                            ; 004b0382
    CALL support_trstream.cpp_CInStream_scanf_FUN_00572590 ; 004b0383
        ;   XREF to: 00572590 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_scanf_FUN_00572590(CInStream * this_ptr, char * format)
    ADD ESP,0xc                         ; 004b0388
    PUSH 0xff                           ; 004b038b
    LEA EAX,[ESP + 0x104]               ; 004b0390
    PUSH EAX                            ; 004b0397
    LEA EAX,[ESP + 0x208]               ; 004b0398
    PUSH EAX                            ; 004b039f
    CALL support_trstream.cpp_CInStream_readLine_FUN_00573790 ; 004b03a0
        ;   XREF to: 00573790 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_readLine_FUN_00573790(CInStream * this_ptr, char * buffer, int size)
    ADD ESP,0xc                         ; 004b03a5
    LEA EAX,[ESP + 0x248]               ; 004b03a8
    PUSH EAX                            ; 004b03af
    LEA EAX,[ESP + 0x248]               ; 004b03b0
    PUSH EAX                            ; 004b03b7
    PUSH 0x5c1fd0                       ; 004b03b8
    LEA EAX,[ESP + 0x20c]               ; 004b03bd
    PUSH EAX                            ; 004b03c4
    CALL support_trstream.cpp_CInStream_scanf_FUN_00572590 ; 004b03c5
        ;   XREF to: 00572590 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStream_scanf_FUN_00572590(CInStream * this_ptr, char * format)
    ADD ESP,0x10                        ; 004b03ca
    LEA EAX,[ESP + 0x200]               ; 004b03cd
    PUSH EAX                            ; 004b03d4
    CALL support_trstream.cpp_CInStreamFile_close_FUN_00573db0 ; 004b03d5
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; int support_trstream.cpp_CInStreamFile_close_FUN_00573db0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 004b03da
    CMP dword ptr [ESP + 0x234],0x20    ; 004b03dd
    JZ 0x004b0449                       ; 004b03e5
        ;   XREF to: 004b0449 (CONDITIONAL_JUMP)  ; LAB_004b0449
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004b03e7
        ;   Label: LAB_004b03e7
    PUSH EAX                            ; 004b03ee
    MOV EDX,dword ptr [ESP + 0x23c]     ; 004b03ef
    PUSH EDX                            ; 004b03f6
    MOV ECX,dword ptr [ESP + 0x23c]     ; 004b03f7
    PUSH ECX                            ; 004b03fe
    MOV ESI,dword ptr [ESP + 0x23c]     ; 004b03ff
    PUSH ESI                            ; 004b0406
    MOV EDI,dword ptr [ESP + 0x23c]     ; 004b0407
    PUSH EDI                            ; 004b040e
    LEA EAX,[ESP + 0x14]                ; 004b040f
    PUSH EAX                            ; 004b0413
    PUSH EBX                            ; 004b0414
    CALL engine_font.cpp_CBitFont_loadNewBitmap_FUN_004b0190 ; 004b0415
        ;   XREF to: 004b0190 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_loadNewBitmap_FUN_004b0190(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x1c                        ; 004b041a
    MOV EAX,dword ptr [ESP + 0x240]     ; 004b041d
        ;   Label: LAB_004b041d
    MOV dword ptr [EBX + 0x3668],EAX    ; 004b0424
    MOV EAX,dword ptr [ESP + 0x244]     ; 004b042a
    MOV EDX,dword ptr [ESP + 0x248]     ; 004b0431
    MOV dword ptr [EBX + 0x41fc],EAX    ; 004b0438
    MOV dword ptr [EBX + 0x4200],EDX    ; 004b043e
    JMP 0x004b0241                      ; 004b0444
        ;   XREF to: 004b0241 (UNCONDITIONAL_JUMP)  ; LAB_004b0241
    CMP dword ptr [ESP + 0x238],0xff    ; 004b0449
        ;   Label: LAB_004b0449
    JNZ 0x004b03e7                      ; 004b0454
        ;   XREF to: 004b03e7 (CONDITIONAL_JUMP)  ; LAB_004b03e7
    MOV ESI,dword ptr [ESP + 0x23c]     ; 004b0456
    PUSH ESI                            ; 004b045d
    MOV EDI,dword ptr [ESP + 0x234]     ; 004b045e
    PUSH EDI                            ; 004b0465
    MOV EBP,dword ptr [ESP + 0x234]     ; 004b0466
    PUSH EBP                            ; 004b046d
    LEA EAX,[ESP + 0xc]                 ; 004b046e
    PUSH EAX                            ; 004b0472
    PUSH EBX                            ; 004b0473
    CALL engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0 ; 004b0474
        ;   XREF to: 004af8f0 (UNCONDITIONAL_CALL)  ; void engine_font.cpp_CBitFont_openFontFile_FUN_004af8f0(CBitFont * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x14                        ; 004b0479
    JMP 0x004b041d                      ; 004b047c
        ;   XREF to: 004b041d (UNCONDITIONAL_JUMP)  ; LAB_004b041d

