; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_wrapTextToWidth_FUN_004023b0(char *input_text,int max_width,char *output_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   input_text
; int              Stack[0x8]:4   max_width
; char *           Stack[0xc]:4   output_buffer
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_00401ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004023b0
        ;   Label: engine_2d.c_wrapTextToWidth_FUN_004023b0
    PUSH ESI                            ; 004023b1
    PUSH EDI                            ; 004023b2
    PUSH EBP                            ; 004023b3
    SUB ESP,0x104                       ; 004023b4
    MOV ESI,dword ptr [ESP + 0x118]     ; 004023ba
    MOV EDX,0x1                         ; 004023c1
    MOV AH,byte ptr [ESI]               ; 004023c6
    MOV dword ptr [ESP + 0x100],EDX     ; 004023c8
    TEST AH,AH                          ; 004023cf
    JNZ 0x004023e8                      ; 004023d1
        ;   XREF to: 004023e8 (CONDITIONAL_JUMP)  ; LAB_004023e8
    MOV EAX,dword ptr [ESP + 0x120]     ; 004023d3
    MOV byte ptr [EAX],0x0              ; 004023da
    ADD ESP,0x104                       ; 004023dd
        ;   Label: LAB_004023dd
    POP EBP                             ; 004023e3
    POP EDI                             ; 004023e4
    POP ESI                             ; 004023e5
    POP EBX                             ; 004023e6
    RET                                 ; 004023e7
    MOV EDI,dword ptr [ESP + 0x120]     ; 004023e8
        ;   Label: LAB_004023e8
    PUSH EDI                            ; 004023ef
    MOV AL,byte ptr [ESI]               ; 004023f0
        ;   Label: LAB_004023f0
    MOV byte ptr [EDI],AL               ; 004023f2
    CMP AL,0x0                          ; 004023f4
    JZ 0x00402408                       ; 004023f6
        ;   XREF to: 00402408 (CONDITIONAL_JUMP)  ; LAB_00402408
    MOV AL,byte ptr [ESI + 0x1]         ; 004023f8
    ADD ESI,0x2                         ; 004023fb
    MOV byte ptr [EDI + 0x1],AL         ; 004023fe
    ADD EDI,0x2                         ; 00402401
    CMP AL,0x0                          ; 00402404
    JNZ 0x004023f0                      ; 00402406
        ;   XREF to: 004023f0 (CONDITIONAL_JUMP)  ; LAB_004023f0
    POP EDI                             ; 00402408
        ;   Label: LAB_00402408
    PUSH EDI                            ; 00402409
    CALL engine_2d.c_getStringWidth_FUN_00401ed0 ; 0040240a
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_00401ed0(char * text)
    ADD ESP,0x4                         ; 0040240f
    CMP EAX,dword ptr [ESP + 0x11c]     ; 00402412
    JLE 0x004023dd                      ; 00402419
        ;   XREF to: 004023dd (CONDITIONAL_JUMP)  ; LAB_004023dd
    MOV EBP,EDI                         ; 0040241b
    MOV EBX,EDI                         ; 0040241d
    MOV DL,byte ptr [EBX]               ; 0040241f
        ;   Label: LAB_0040241f
    TEST DL,DL                          ; 00402421
    JZ 0x0040243b                       ; 00402423
        ;   XREF to: 0040243b (CONDITIONAL_JUMP)  ; LAB_0040243b
    MOV AL,DL                           ; 00402425
    INC AL                              ; 00402427
    AND EAX,0xff                        ; 00402429
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0040242e | g_CharacterClassificationTable
    JZ 0x004024c6                       ; 00402435
        ;   XREF to: 004024c6 (CONDITIONAL_JUMP)  ; LAB_004024c6
    MOV EDX,EBX                         ; 0040243b
        ;   Label: LAB_0040243b
    MOV EDI,ESP                         ; 0040243d
    SUB EDX,EBP                         ; 0040243f
    MOV ESI,EBP                         ; 00402441
    MOV ECX,EDX                         ; 00402443
    PUSH EDI                            ; 00402445
    MOV EAX,ECX                         ; 00402446
    SHR ECX,0x2                         ; 00402448
    MOVSD.REP ES:EDI,ESI                ; 0040244b
    MOV CL,AL                           ; 0040244d
    AND CL,0x3                          ; 0040244f
    MOVSB.REP ES:EDI,ESI                ; 00402452
    POP EDI                             ; 00402454
    MOV EAX,ESP                         ; 00402455
    XOR CH,CH                           ; 00402457
    PUSH EAX                            ; 00402459
    MOV byte ptr [ESP + EDX*0x1 + 0x4],CH ; 0040245a
    CALL engine_2d.c_getStringWidth_FUN_00401ed0 ; 0040245e
        ;   XREF to: 00401ed0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_00401ed0(char * text)
    ADD ESP,0x4                         ; 00402463
    CMP EAX,dword ptr [ESP + 0x11c]     ; 00402466
    JLE 0x00402495                      ; 0040246d
        ;   XREF to: 00402495 (CONDITIONAL_JUMP)  ; LAB_00402495
    MOV AL,byte ptr [EBX + -0x1]        ; 0040246f
    DEC EBX                             ; 00402472
    CMP AL,0xa                          ; 00402473
    JZ 0x00402485                       ; 00402475
        ;   XREF to: 00402485 (CONDITIONAL_JUMP)  ; LAB_00402485
    CMP byte ptr [EBX],0x20             ; 00402477
        ;   Label: LAB_00402477
    JZ 0x00402485                       ; 0040247a
        ;   XREF to: 00402485 (CONDITIONAL_JUMP)  ; LAB_00402485
    MOV DL,byte ptr [EBX + -0x1]        ; 0040247c
    DEC EBX                             ; 0040247f
    CMP DL,0xa                          ; 00402480
    JNZ 0x00402477                      ; 00402483
        ;   XREF to: 00402477 (CONDITIONAL_JUMP)  ; LAB_00402477
    MOV EDI,dword ptr [ESP + 0x120]     ; 00402485
        ;   Label: LAB_00402485
    MOV EAX,EBX                         ; 0040248c
    SUB EAX,EDI                         ; 0040248e
    ADD EAX,EDI                         ; 00402490
    MOV byte ptr [EAX],0xa              ; 00402492
    CMP byte ptr [EBX],0xa              ; 00402495
        ;   Label: LAB_00402495
    JNZ 0x0040249d                      ; 00402498
        ;   XREF to: 0040249d (CONDITIONAL_JUMP)  ; LAB_0040249d
    LEA EBP,[EBX + 0x1]                 ; 0040249a
    CMP byte ptr [EBX],0x0              ; 0040249d
        ;   Label: LAB_0040249d
    JNZ 0x004024ab                      ; 004024a0
        ;   XREF to: 004024ab (CONDITIONAL_JUMP)  ; LAB_004024ab
    XOR ECX,ECX                         ; 004024a2
    MOV dword ptr [ESP + 0x100],ECX     ; 004024a4
    MOV ESI,dword ptr [ESP + 0x100]     ; 004024ab
        ;   Label: LAB_004024ab
    INC EBX                             ; 004024b2
    TEST ESI,ESI                        ; 004024b3
    JNZ 0x0040241f                      ; 004024b5
        ;   XREF to: 0040241f (CONDITIONAL_JUMP)  ; LAB_0040241f
    ADD ESP,0x104                       ; 004024bb
    POP EBP                             ; 004024c1
    POP EDI                             ; 004024c2
    POP ESI                             ; 004024c3
    POP EBX                             ; 004024c4
    RET                                 ; 004024c5
    CMP DL,0xa                          ; 004024c6
        ;   Label: LAB_004024c6
    JZ 0x0040243b                       ; 004024c9
        ;   XREF to: 0040243b (CONDITIONAL_JUMP)  ; LAB_0040243b
    JMP 0x004024ab                      ; 004024cf
        ;   XREF to: 004024ab (UNCONDITIONAL_JUMP)  ; LAB_004024ab

