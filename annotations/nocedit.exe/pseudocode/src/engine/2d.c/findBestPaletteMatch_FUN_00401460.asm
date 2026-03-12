; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_2d_c_findBestPaletteMatch_FUN_00401460(int red,int green,int blue,int start_index,int end_index)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
; int              Stack[0x10]:4   start_index
; int              Stack[0x14]:4   end_index
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_2d.c_buildColorLookupTable_FUN_00402870 at 004028f2
;
; Referenced Globals:
;   double g_PaletteLuminanceScaleFactor = 0.577350270000000
;   double g_RedComponentWeight = 0.300000000000000
;   double g_GreenComponentWeight = 0.590000000000000
;   double g_BlueComponentWeight = 0.110000000000000
;   double g_LuminanceDifferenceWeight = 0.150000000000000
;   float[256] g_PaletteLuminanceCache
;   undefined4 DAT_0077263c
;   char[768] g_SourcePaletteData
;   undefined4 CHAR_ARRAY_02d01f49
;   undefined4 CHAR_ARRAY_02d01f4a
;   undefined4 CHAR_ARRAY_02d01f4b
;   undefined4 CHAR_ARRAY_02d01f4c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401460
        ;   Label: engine_2d.c_findBestPaletteMatch_FUN_00401460
    PUSH ESI                            ; 00401461
    PUSH EDI                            ; 00401462
    PUSH EBP                            ; 00401463
    SUB ESP,0x30                        ; 00401464
    MOV EBP,dword ptr [ESP + 0x48]      ; 00401467
    MOV ESI,dword ptr [ESP + 0x50]      ; 0040146b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0040146f
    MOV ECX,0x2d01f48                   ; 00401476 | g_SourcePaletteData
    SUB EAX,ESI                         ; 0040147b
    ADD ECX,EAX                         ; 0040147d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040147f
    MOV dword ptr [ESP + 0x28],EAX      ; 00401483
    MOV dword ptr [ESP + 0x2c],EBP      ; 00401487
    FILD dword ptr [ESP + 0x28]         ; 0040148b
    FMUL ST0                            ; 0040148f
    FILD dword ptr [ESP + 0x2c]         ; 00401491
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00401495
    FMUL ST0                            ; 00401499
    MOV dword ptr [ESP + 0x2c],EAX      ; 0040149b
    FADDP                               ; 0040149f
    FILD dword ptr [ESP + 0x2c]         ; 004014a1
    FMUL ST0                            ; 004014a5
    FADDP                               ; 004014a7
    FSQRT                               ; 004014a9
    MOV EDX,0x7149f2ca                  ; 004014ab
    FMUL double ptr [0x00613084]        ; 004014b0 | g_PaletteLuminanceScaleFactor
    MOV dword ptr [ESP + 0x20],EDX      ; 004014b6
    MOV EBX,ESI                         ; 004014ba
    MOV EAX,dword ptr [ESP + 0x54]      ; 004014bc
    FSTP float ptr [ESP + 0x1c]         ; 004014c0
    CMP ESI,EAX                         ; 004014c4
    JG 0x0040157e                       ; 004014c6
        ;   XREF to: 0040157e (CONDITIONAL_JUMP)  ; LAB_0040157e
    SHL ESI,0x2                         ; 004014cc
    XOR EAX,EAX                         ; 004014cf
        ;   Label: LAB_004014cf
    MOV EDX,dword ptr [ESP + 0x44]      ; 004014d1
    MOV AL,byte ptr [ECX]               ; 004014d5 | g_SourcePaletteData | CHAR_ARRAY_02d01f4b
    SUB EDX,EAX                         ; 004014d7
    MOV EAX,EDX                         ; 004014d9
    CDQ                                 ; 004014db
    XOR EAX,EDX                         ; 004014dc
    SUB EAX,EDX                         ; 004014de
    MOV dword ptr [ESP + 0x2c],EAX      ; 004014e0
    XOR EAX,EAX                         ; 004014e4
    MOV EDX,EBP                         ; 004014e6
    MOV AL,byte ptr [ECX + 0x1]         ; 004014e8 | CHAR_ARRAY_02d01f49 | CHAR_ARRAY_02d01f4c
    SUB EDX,EAX                         ; 004014eb
    FILD dword ptr [ESP + 0x2c]         ; 004014ed
    MOV EAX,EDX                         ; 004014f1
    FSTP float ptr [ESP + 0x8]          ; 004014f3
    CDQ                                 ; 004014f7
    XOR EAX,EDX                         ; 004014f8
    SUB EAX,EDX                         ; 004014fa
    MOV dword ptr [ESP + 0x2c],EAX      ; 004014fc
    XOR EAX,EAX                         ; 00401500
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00401502
    MOV AL,byte ptr [ECX + 0x2]         ; 00401506 | CHAR_ARRAY_02d01f4a
    SUB EDX,EAX                         ; 00401509
    FILD dword ptr [ESP + 0x2c]         ; 0040150b
    MOV EAX,EDX                         ; 0040150f
    FSTP float ptr [ESP]                ; 00401511
    CDQ                                 ; 00401514
    XOR EAX,EDX                         ; 00401515
    SUB EAX,EDX                         ; 00401517
    FLD float ptr [ESP + 0x1c]          ; 00401519
    FSUB float ptr [ESI + 0x772638]     ; 0040151d | g_PaletteLuminanceCache | DAT_0077263c
    MOV dword ptr [ESP + 0x2c],EAX      ; 00401523
    FABS                                ; 00401527
    FLD float ptr [ESP + 0x8]           ; 00401529
    FMUL ST0                            ; 0040152d
    FMUL double ptr [0x0061308c]        ; 0040152f | g_RedComponentWeight
    FLD float ptr [ESP]                 ; 00401535
    FMUL ST0                            ; 00401538
    FMUL double ptr [0x00613094]        ; 0040153a | g_GreenComponentWeight
    FADDP                               ; 00401540
    FILD dword ptr [ESP + 0x2c]         ; 00401542
    FMUL ST0                            ; 00401546
    FMUL double ptr [0x0061309c]        ; 00401548 | g_BlueComponentWeight
    FADDP                               ; 0040154e
    FLD ST1                             ; 00401550
    FMULP ST2                           ; 00401552
    FXCH                                ; 00401554
    FMUL double ptr [0x006130a4]        ; 00401556 | g_LuminanceDifferenceWeight
    FADDP                               ; 0040155c
    FST float ptr [ESP + 0x24]          ; 0040155e
    FCOMP float ptr [ESP + 0x20]        ; 00401562
    FNSTSW AX                           ; 00401566
    SAHF                                ; 00401568
    JC 0x00401591                       ; 00401569
        ;   XREF to: 00401591 (CONDITIONAL_JUMP)  ; LAB_00401591
    MOV EDX,dword ptr [ESP + 0x54]      ; 0040156b
        ;   Label: LAB_0040156b
    ADD ECX,0x3                         ; 0040156f
    INC EBX                             ; 00401572
    ADD ESI,0x4                         ; 00401573
    CMP EBX,EDX                         ; 00401576
    JLE 0x004014cf                      ; 00401578
        ;   XREF to: 004014cf (CONDITIONAL_JUMP)  ; LAB_004014cf
    MOV EAX,EDI                         ; 0040157e
        ;   Label: LAB_0040157e
    ADD ESP,0x30                        ; 00401580
    POP EBP                             ; 00401583
    POP EDI                             ; 00401584
    POP ESI                             ; 00401585
    POP EBX                             ; 00401586
    LEA EAX,[EAX]                       ; 00401587
    LEA EDX,[EDX]                       ; 0040158d
    MOV EAX,dword ptr [ESP + 0x24]      ; 00401591
        ;   Label: LAB_00401591
    MOV EDI,EBX                         ; 00401595
    MOV dword ptr [ESP + 0x20],EAX      ; 00401597
    JMP 0x0040156b                      ; 0040159b
        ;   XREF to: 0040156b (UNCONDITIONAL_JUMP)  ; LAB_0040156b

