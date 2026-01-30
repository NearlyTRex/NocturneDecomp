; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_FUN_00577430(void)
;
; Local Variables:
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
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_BitsPerPixel = 0x8
;   void*[1200] g_ScreenBufferArray
;   undefined4 g_ScreenBufferArray[1]
;   uchar[32768] g_ColorCubeLookup
;   int g_RedBitPosition
;   int g_RedScaleFactor
;   int g_GreenBitPosition
;   int g_GreenScaleFactor
;   int g_BlueBitPosition
;   int g_BlueScaleFactor
;   undefined4 DAT_03365cc0
;   undefined4 DAT_03365cc4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577430
        ;   Label: core_setedit.cpp_FUN_00577430
    PUSH ESI                            ; 00577431
    PUSH EDI                            ; 00577432
    PUSH EBP                            ; 00577433
    SUB ESP,0x48                        ; 00577434
    MOV EBX,dword ptr [ESP + 0x60]      ; 00577437
    MOV ECX,dword ptr [ESP + 0x64]      ; 0057743b
    TEST EBX,EBX                        ; 0057743f
    JL 0x0057759a                       ; 00577441
        ;   XREF to: 0057759a (CONDITIONAL_JUMP)  ; LAB_0057759a
    TEST ECX,ECX                        ; 00577447
    JL 0x0057759a                       ; 00577449
        ;   XREF to: 0057759a (CONDITIONAL_JUMP)  ; LAB_0057759a
    MOV EDX,dword ptr [0x00679394]      ; 0057744f | g_WindowWidth
    LEA EAX,[EBX + 0x40]                ; 00577455
    CMP EAX,EDX                         ; 00577458
    JG 0x0057759a                       ; 0057745a
        ;   XREF to: 0057759a (CONDITIONAL_JUMP)  ; LAB_0057759a
    MOV ESI,dword ptr [0x00679398]      ; 00577460 | g_WindowHeight
    LEA EAX,[ECX + 0x30]                ; 00577466
    CMP EAX,ESI                         ; 00577469
    JG 0x0057759a                       ; 0057746b
        ;   XREF to: 0057759a (CONDITIONAL_JUMP)  ; LAB_0057759a
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00577471
    LEA EAX,[EDX*0x4 + 0x0]             ; 00577475
    SUB EAX,EDX                         ; 0057747c
    MOV EDI,dword ptr [0x0067939c]      ; 0057747e | g_BitsPerPixel
    SHL EAX,0xc                         ; 00577484
    SHL ECX,0x2                         ; 00577487
    LEA EDX,[EAX + 0x100]               ; 0057748a
    CMP EDI,0x8                         ; 00577490
    JZ 0x005775a2                       ; 00577493
        ;   XREF to: 005775a2 (CONDITIONAL_JUMP)  ; LAB_005775a2
    CMP EDI,0x10                        ; 00577499
    JNZ 0x00577651                      ; 0057749c
        ;   XREF to: 00577651 (CONDITIONAL_JUMP)  ; LAB_00577651
    MOV dword ptr [ESP + 0x20],EAX      ; 005774a2
    MOV dword ptr [ESP + 0x24],EDX      ; 005774a6
    MOV dword ptr [ESP + 0x8],ECX       ; 005774aa
    ADD EBX,EBX                         ; 005774ae
    XOR EBP,EBP                         ; 005774b0
    MOV dword ptr [ESP + 0x1c],EBX      ; 005774b2
    MOV dword ptr [ESP + 0x38],EBP      ; 005774b6
    MOV EAX,dword ptr [ESP + 0x8]       ; 005774ba
        ;   Label: LAB_005774ba
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005774be
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 005774c2 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EDX                         ; 005774c8
    ADD EAX,0x2                         ; 005774ca
    MOV dword ptr [ESP + 0x44],EAX      ; 005774cd
    MOV EAX,dword ptr [ESP + 0x38]      ; 005774d1
    MOV EBX,dword ptr [ESP + 0x20]      ; 005774d5
    SHL EAX,0x8                         ; 005774d9
    ADD EBX,EAX                         ; 005774dc
    MOV EAX,dword ptr [ESP + 0x24]      ; 005774de
    MOV dword ptr [ESP + 0x40],EAX      ; 005774e2
    MOV ESI,dword ptr [EBX + 0x3365cc0] ; 005774e6 | DAT_03365cc0 | DAT_03365cc4
        ;   Label: LAB_005774e6
    XOR EDX,EDX                         ; 005774ec
    MOV EAX,ESI                         ; 005774ee
    MOV ECX,ESI                         ; 005774f0
    MOV EBP,ESI                         ; 005774f2
    MOV ESI,dword ptr [0x02d01f28]      ; 005774f4 | g_RedScaleFactor
    AND EAX,0xff                        ; 005774fa
    DIV ESI                             ; 005774ff
    SHR ECX,0x8                         ; 00577501
    AND ECX,0xff                        ; 00577504
    MOV EDI,EAX                         ; 0057750a
    XOR EDX,EDX                         ; 0057750c
    MOV EAX,ECX                         ; 0057750e
    DIV dword ptr [0x02d01f34]          ; 00577510 | g_GreenScaleFactor
    SHR EBP,0x10                        ; 00577516
    AND EBP,0xff                        ; 00577519
    MOV dword ptr [ESP],EBP             ; 0057751f
    MOV ESI,EAX                         ; 00577522
    XOR EDX,EDX                         ; 00577524
    MOV EAX,EBP                         ; 00577526
    DIV dword ptr [0x02d01f40]          ; 00577528 | g_BlueScaleFactor
    MOV CL,byte ptr [0x02d01f24]        ; 0057752e | g_RedBitPosition
    MOV dword ptr [ESP],EAX             ; 00577534
    MOV EAX,EDI                         ; 00577537
    SHL EAX,CL                          ; 00577539
    MOV CL,byte ptr [0x02d01f30]        ; 0057753b | g_GreenBitPosition
    MOV EDX,dword ptr [ESP]             ; 00577541
    SHL ESI,CL                          ; 00577544
    MOV CL,byte ptr [0x02d01f3c]        ; 00577546 | g_BlueBitPosition
    OR EAX,ESI                          ; 0057754c
    SHL EDX,CL                          ; 0057754e
    OR EAX,EDX                          ; 00577550
    MOV EDX,dword ptr [ESP + 0x44]      ; 00577552
    MOV word ptr [EDX],AX               ; 00577556
    LEA EAX,[EDX + 0x2]                 ; 00577559
    ADD EBX,0x4                         ; 0057755c
    MOV EDX,dword ptr [ESP + 0x40]      ; 0057755f
    MOV dword ptr [ESP + 0x44],EAX      ; 00577563
    CMP EBX,EDX                         ; 00577567
    JNZ 0x005774e6                      ; 00577569
        ;   XREF to: 005774e6 (CONDITIONAL_JUMP)  ; LAB_005774e6
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057756f
    MOV ESI,dword ptr [ESP + 0x38]      ; 00577573
    MOV ECX,dword ptr [ESP + 0x24]      ; 00577577
    ADD EBX,0x4                         ; 0057757b
    INC ESI                             ; 0057757e
    ADD ECX,0x100                       ; 0057757f
    MOV dword ptr [ESP + 0x8],EBX       ; 00577585
    MOV dword ptr [ESP + 0x38],ESI      ; 00577589
    MOV dword ptr [ESP + 0x24],ECX      ; 0057758d
    CMP ESI,0x30                        ; 00577591
    JL 0x005774ba                       ; 00577594
        ;   XREF to: 005774ba (CONDITIONAL_JUMP)  ; LAB_005774ba
    ADD ESP,0x48                        ; 0057759a
        ;   Label: LAB_0057759a
    POP EBP                             ; 0057759d
    POP EDI                             ; 0057759e
    POP ESI                             ; 0057759f
    POP EBX                             ; 005775a0
    RET                                 ; 005775a1
    MOV dword ptr [ESP + 0x10],EBX      ; 005775a2
        ;   Label: LAB_005775a2
    MOV dword ptr [ESP + 0x18],EAX      ; 005775a6
    MOV dword ptr [ESP + 0x4],EDX       ; 005775aa
    MOV dword ptr [ESP + 0x28],ECX      ; 005775ae
    XOR EBX,EBX                         ; 005775b2
    MOV EBP,dword ptr [ESP + 0x10]      ; 005775b4
    MOV dword ptr [ESP + 0x3c],EBX      ; 005775b8
    MOV EAX,dword ptr [ESP + 0x28]      ; 005775bc
        ;   Label: LAB_005775bc
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 005775c0 | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,EBP                         ; 005775c6
    LEA EBX,[EAX + 0x1]                 ; 005775c8
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005775cb
    MOV EDX,dword ptr [ESP + 0x18]      ; 005775cf
    SHL EAX,0x8                         ; 005775d3
    ADD EAX,EDX                         ; 005775d6
    MOV EDX,dword ptr [ESP + 0x4]       ; 005775d8
    MOV ECX,dword ptr [EAX + 0x3365cc0] ; 005775dc | DAT_03365cc0 | DAT_03365cc4
        ;   Label: LAB_005775dc
    MOV EDI,ECX                         ; 005775e2
    MOV ESI,ECX                         ; 005775e4
    AND EDI,0xff                        ; 005775e6
    SHR ESI,0x8                         ; 005775ec
    SHR ECX,0x10                        ; 005775ef
    AND ESI,0xff                        ; 005775f2
    SHR EDI,0x3                         ; 005775f8
    SHR ESI,0x3                         ; 005775fb
    SHL EDI,0xa                         ; 005775fe
    SHL ESI,0x5                         ; 00577601
    AND ECX,0xff                        ; 00577604
    ADD ESI,EDI                         ; 0057760a
    SHR ECX,0x3                         ; 0057760c
    INC EBX                             ; 0057760f
    MOV CL,byte ptr [ECX + ESI*0x1 + 0x2cf9020] ; 00577610 | g_ColorCubeLookup
    ADD EAX,0x4                         ; 00577617
    MOV byte ptr [EBX + -0x1],CL        ; 0057761a
    CMP EAX,EDX                         ; 0057761d
    JNZ 0x005775dc                      ; 0057761f
        ;   XREF to: 005775dc (CONDITIONAL_JUMP)  ; LAB_005775dc
    MOV EBX,dword ptr [ESP + 0x28]      ; 00577621
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00577625
    MOV ECX,dword ptr [ESP + 0x4]       ; 00577629
    ADD EBX,0x4                         ; 0057762d
    INC ESI                             ; 00577630
    ADD ECX,0x100                       ; 00577631
    MOV dword ptr [ESP + 0x28],EBX      ; 00577637
    MOV dword ptr [ESP + 0x3c],ESI      ; 0057763b
    MOV dword ptr [ESP + 0x4],ECX       ; 0057763f
    CMP ESI,0x30                        ; 00577643
    JGE 0x0057759a                      ; 00577646
        ;   XREF to: 0057759a (CONDITIONAL_JUMP)  ; LAB_0057759a
    JMP 0x005775bc                      ; 0057764c
        ;   XREF to: 005775bc (UNCONDITIONAL_JUMP)  ; LAB_005775bc
    CMP EDI,0x20                        ; 00577651
        ;   Label: LAB_00577651
    JNZ 0x0057759a                      ; 00577654
        ;   XREF to: 0057759a (CONDITIONAL_JUMP)  ; LAB_0057759a
    SHL EBX,0x2                         ; 0057765a
    MOV dword ptr [ESP + 0xc],EAX       ; 0057765d
    MOV dword ptr [ESP + 0x2c],EDX      ; 00577661
    MOV dword ptr [ESP + 0x30],ECX      ; 00577665
    XOR EDI,EDI                         ; 00577669
    MOV dword ptr [ESP + 0x14],EBX      ; 0057766b
    MOV dword ptr [ESP + 0x34],EDI      ; 0057766f
    MOV EAX,dword ptr [ESP + 0x30]      ; 00577673
        ;   Label: LAB_00577673
    MOV ESI,dword ptr [ESP + 0x14]      ; 00577677
    MOV EAX,dword ptr [EAX + 0x2cf6a9c] ; 0057767b | g_ScreenBufferArray | g_ScreenBufferArray[1]
    ADD EAX,ESI                         ; 00577681
    LEA EBX,[EAX + 0x4]                 ; 00577683
    MOV EAX,dword ptr [ESP + 0x34]      ; 00577686
    MOV EDI,dword ptr [ESP + 0xc]       ; 0057768a
    SHL EAX,0x8                         ; 0057768e
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00577691
    ADD EAX,EDI                         ; 00577695
    MOV ECX,dword ptr [EAX + 0x3365cc0] ; 00577697 | DAT_03365cc0 | DAT_03365cc4
        ;   Label: LAB_00577697
    MOV EDI,ECX                         ; 0057769d
    MOV ESI,ECX                         ; 0057769f
    MOV EBP,ECX                         ; 005776a1
    MOV ECX,dword ptr [0x0067939c]      ; 005776a3 | g_BitsPerPixel
    AND EDI,0xff                        ; 005776a9
    SHR ESI,0x8                         ; 005776af
    SHR EBP,0x10                        ; 005776b2
    AND ESI,0xff                        ; 005776b5
    AND EBP,0xff                        ; 005776bb
    CMP ECX,0x20                        ; 005776c1
    JNZ 0x00577721                      ; 005776c4
        ;   XREF to: 00577721 (CONDITIONAL_JUMP)  ; LAB_00577721
    MOV CL,byte ptr [0x02d01f24]        ; 005776c6 | g_RedBitPosition
    SHL EDI,CL                          ; 005776cc
    MOV CL,byte ptr [0x02d01f30]        ; 005776ce | g_GreenBitPosition
    SHL ESI,CL                          ; 005776d4
    MOV CL,byte ptr [0x02d01f3c]        ; 005776d6 | g_BlueBitPosition
    SHL EBP,CL                          ; 005776dc
    OR ESI,EDI                          ; 005776de
    MOV ECX,EBP                         ; 005776e0
    OR ECX,ESI                          ; 005776e2
    ADD EBX,0x4                         ; 005776e4
        ;   Label: LAB_005776e4
    ADD EAX,0x4                         ; 005776e7
    MOV dword ptr [EBX + -0x4],ECX      ; 005776ea
    CMP EAX,EDX                         ; 005776ed
    JNZ 0x00577697                      ; 005776ef
        ;   XREF to: 00577697 (CONDITIONAL_JUMP)  ; LAB_00577697
    MOV ESI,dword ptr [ESP + 0x30]      ; 005776f1
    MOV EDI,dword ptr [ESP + 0x34]      ; 005776f5
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005776f9
    ADD ESI,0x4                         ; 005776fd
    INC EDI                             ; 00577700
    ADD EBX,0x100                       ; 00577701
    MOV dword ptr [ESP + 0x30],ESI      ; 00577707
    MOV dword ptr [ESP + 0x34],EDI      ; 0057770b
    MOV dword ptr [ESP + 0x2c],EBX      ; 0057770f
    CMP EDI,0x30                        ; 00577713
    JGE 0x0057759a                      ; 00577716
        ;   XREF to: 0057759a (CONDITIONAL_JUMP)  ; LAB_0057759a
    JMP 0x00577673                      ; 0057771c
        ;   XREF to: 00577673 (UNCONDITIONAL_JUMP)  ; LAB_00577673
    MOV ECX,ESI                         ; 00577721
        ;   Label: LAB_00577721
    SHL EDI,0x10                        ; 00577723
    SHL ECX,0x8                         ; 00577726
    OR ECX,EDI                          ; 00577729
    OR ECX,EBP                          ; 0057772b
    JMP 0x005776e4                      ; 0057772d
        ;   XREF to: 005776e4 (UNCONDITIONAL_JUMP)  ; LAB_005776e4

