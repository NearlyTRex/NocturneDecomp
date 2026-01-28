; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_expandIndexedTo16Bit_FUN_00431410 (void *output_buffer,void *indexed_input_buffer,int pixel_count)
;
; Parameters:
; void *           Stack[0x4]:4   output_buffer
; void *           Stack[0x8]:4   indexed_input_buffer
; int              Stack[0xc]:4   pixel_count
;
; Referenced Globals:
;   uint g_CPUFamily = 0x5
;   ushort[256] g_Hardware16BitPalette
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00431410
        ;   Label: cockpit_ckptutil.c_expandIndexedTo16Bit_FUN_00431410
    MOV EBP,ESP                         ; 00431411
    PUSH ESI                            ; 00431413
    PUSH EDI                            ; 00431414
    CMP dword ptr [0x006793b0],0x6      ; 00431415 | g_CPUFamily
    JNC 0x00431489                      ; 0043141c
        ;   XREF to: 00431489 (CONDITIONAL_JUMP)  ; LAB_00431489
    PUSH EAX                            ; 0043141e
    PUSH EBX                            ; 0043141f
    PUSH ECX                            ; 00431420
    MOV EDI,dword ptr [EBP + 0x8]       ; 00431421
    MOV ESI,dword ptr [EBP + 0xc]       ; 00431424
    MOV ECX,dword ptr [EBP + 0x10]      ; 00431427
    MOV EAX,0x0                         ; 0043142a
    TEST EDI,0x2                        ; 0043142f
    JZ 0x00431449                       ; 00431435
        ;   XREF to: 00431449 (CONDITIONAL_JUMP)  ; LAB_00431449
    MOV AL,byte ptr [ESI]               ; 00431437
    MOV BX,word ptr [EAX*0x2 + 0x2d01d24] ; 00431439 | g_Hardware16BitPalette
    MOV word ptr [EDI],BX               ; 00431441
    ADD EDI,0x2                         ; 00431444
    INC ESI                             ; 00431447
    DEC ECX                             ; 00431448
    SUB ECX,0x2                         ; 00431449
        ;   Label: LAB_00431449
    JL 0x00431470                       ; 0043144c
        ;   XREF to: 00431470 (CONDITIONAL_JUMP)  ; LAB_00431470
    MOV AL,byte ptr [ESI + 0x1]         ; 0043144e
    MOV BX,word ptr [EAX*0x2 + 0x2d01d24] ; 00431451 | g_Hardware16BitPalette
    SHL EBX,0x10                        ; 00431459
    MOV AL,byte ptr [ESI]               ; 0043145c
    MOV BX,word ptr [EAX*0x2 + 0x2d01d24] ; 0043145e | g_Hardware16BitPalette
    MOV dword ptr [EDI],EBX             ; 00431466
    ADD ESI,0x2                         ; 00431468
    ADD EDI,0x4                         ; 0043146b
    JMP 0x00431449                      ; 0043146e
        ;   XREF to: 00431449 (UNCONDITIONAL_JUMP)  ; LAB_00431449
    CMP ECX,-0x1                        ; 00431470
        ;   Label: LAB_00431470
    JNZ 0x00431482                      ; 00431473
        ;   XREF to: 00431482 (CONDITIONAL_JUMP)  ; LAB_00431482
    MOV AL,byte ptr [ESI]               ; 00431475
    MOV BX,word ptr [EAX*0x2 + 0x2d01d24] ; 00431477 | g_Hardware16BitPalette
    MOV word ptr [EDI],BX               ; 0043147f
    POP ECX                             ; 00431482
        ;   Label: LAB_00431482
    POP EBX                             ; 00431483
    POP EAX                             ; 00431484
    POP EDI                             ; 00431485
    POP ESI                             ; 00431486
    LEAVE                               ; 00431487
    RET                                 ; 00431488
    PUSH EAX                            ; 00431489
        ;   Label: LAB_00431489
    PUSH EBX                            ; 0043148a
    PUSH ECX                            ; 0043148b
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043148c
    MOV ESI,dword ptr [EBP + 0xc]       ; 0043148f
    MOV ECX,dword ptr [EBP + 0x10]      ; 00431492
    MOV EAX,0x0                         ; 00431495
    TEST EDI,0x2                        ; 0043149a
    JZ 0x004314b5                       ; 004314a0
        ;   XREF to: 004314b5 (CONDITIONAL_JUMP)  ; LAB_004314b5
    MOVZX EAX,byte ptr [ESI]            ; 004314a2
    MOV BX,word ptr [EAX*0x2 + 0x2d01d24] ; 004314a5 | g_Hardware16BitPalette
    MOV word ptr [EDI],BX               ; 004314ad
    ADD EDI,0x2                         ; 004314b0
    INC ESI                             ; 004314b3
    DEC ECX                             ; 004314b4
    SUB ECX,0x2                         ; 004314b5
        ;   Label: LAB_004314b5
    JL 0x004314e0                       ; 004314b8
        ;   XREF to: 004314e0 (CONDITIONAL_JUMP)  ; LAB_004314e0
    MOVZX EAX,byte ptr [ESI + 0x1]      ; 004314ba
    MOVZX EBX,word ptr [EAX*0x2 + 0x2d01d24] ; 004314be | g_Hardware16BitPalette
    MOVZX EAX,byte ptr [ESI]            ; 004314c6
    SHL EBX,0x10                        ; 004314c9
    MOVZX EAX,word ptr [EAX*0x2 + 0x2d01d24] ; 004314cc | g_Hardware16BitPalette
    OR EBX,EAX                          ; 004314d4
    ADD ESI,0x2                         ; 004314d6
    MOV dword ptr [EDI],EBX             ; 004314d9
    ADD EDI,0x4                         ; 004314db
    JMP 0x004314b5                      ; 004314de
        ;   XREF to: 004314b5 (UNCONDITIONAL_JUMP)  ; LAB_004314b5
    CMP ECX,-0x1                        ; 004314e0
        ;   Label: LAB_004314e0
    JNZ 0x004314f3                      ; 004314e3
        ;   XREF to: 004314f3 (CONDITIONAL_JUMP)  ; LAB_004314f3
    MOVZX EAX,byte ptr [ESI]            ; 004314e5
    MOV BX,word ptr [EAX*0x2 + 0x2d01d24] ; 004314e8 | g_Hardware16BitPalette
    MOV word ptr [EDI],BX               ; 004314f0
    POP ECX                             ; 004314f3
        ;   Label: LAB_004314f3
    POP EBX                             ; 004314f4
    POP EAX                             ; 004314f5
    POP EDI                             ; 004314f6
    POP ESI                             ; 004314f7
    LEAVE                               ; 004314f8
    RET                                 ; 004314f9

