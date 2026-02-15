; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_spline_cpp_FUN_005b9490(void)
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
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_FUN_004869a0 at 00486c63
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9490
        ;   Label: core_spline.cpp_FUN_005b9490
    PUSH ESI                            ; 005b9491
    PUSH EDI                            ; 005b9492
    PUSH EBP                            ; 005b9493
    SUB ESP,0x48                        ; 005b9494
    MOV ECX,dword ptr [ESP + 0x5c]      ; 005b9497
    MOV EDX,dword ptr [ESP + 0x60]      ; 005b949b
    MOV EDI,dword ptr [ESP + 0x64]      ; 005b949f
    MOV ESI,dword ptr [ESP + 0x68]      ; 005b94a3
    MOV EBX,dword ptr [ESP + 0x6c]      ; 005b94a7
    MOV EBP,dword ptr [ESP + 0x70]      ; 005b94ab
    LEA EAX,[ECX + 0x1c]                ; 005b94af
    FLD float ptr [EBP]                 ; 005b94b2
    FMUL float ptr [EAX]                ; 005b94b5
    FSTP float ptr [ESP + 0x24]         ; 005b94b7
    FLD float ptr [EBP + 0x4]           ; 005b94bb
    FMUL float ptr [EAX]                ; 005b94be
    FSTP float ptr [ESP + 0x28]         ; 005b94c0
    FLD float ptr [EBP + 0x8]           ; 005b94c4
    FMUL float ptr [EAX]                ; 005b94c7
    FSTP float ptr [ESP + 0x2c]         ; 005b94c9
    LEA EAX,[ECX + 0x18]                ; 005b94cd
    FLD float ptr [EBX]                 ; 005b94d0
    FMUL float ptr [EAX]                ; 005b94d2
    FSTP float ptr [ESP + 0x30]         ; 005b94d4
    FLD float ptr [EBX + 0x4]           ; 005b94d8
    FMUL float ptr [EAX]                ; 005b94db
    FSTP float ptr [ESP + 0x34]         ; 005b94dd
    FLD float ptr [EBX + 0x8]           ; 005b94e1
    FMUL float ptr [EAX]                ; 005b94e4
    FSTP float ptr [ESP + 0x38]         ; 005b94e6
    LEA EAX,[ECX + 0x14]                ; 005b94ea
    FLD float ptr [ESI]                 ; 005b94ed
    FMUL float ptr [EAX]                ; 005b94ef
    FSTP float ptr [ESP + 0x18]         ; 005b94f1
    FLD float ptr [ESI + 0x4]           ; 005b94f5
    FMUL float ptr [EAX]                ; 005b94f8
    FSTP float ptr [ESP + 0x1c]         ; 005b94fa
    FLD float ptr [ESI + 0x8]           ; 005b94fe
    FMUL float ptr [EAX]                ; 005b9501
    FSTP float ptr [ESP + 0x20]         ; 005b9503
    LEA EAX,[ECX + 0x10]                ; 005b9507
    FLD float ptr [EDI]                 ; 005b950a
    FMUL float ptr [EAX]                ; 005b950c
    FSTP float ptr [ESP + 0xc]          ; 005b950e
    FLD float ptr [EDI + 0x4]           ; 005b9512
    FMUL float ptr [EAX]                ; 005b9515
    FSTP float ptr [ESP + 0x10]         ; 005b9517
    FLD float ptr [EDI + 0x8]           ; 005b951b
    FMUL float ptr [EAX]                ; 005b951e
    FLD float ptr [ESP + 0xc]           ; 005b9520
    FADD float ptr [ESP + 0x18]         ; 005b9524
    FLD float ptr [ESP + 0x10]          ; 005b9528
    FADD float ptr [ESP + 0x1c]         ; 005b952c
    FXCH ST2                            ; 005b9530
    FSTP float ptr [ESP + 0x14]         ; 005b9532
    FSTP float ptr [ESP + 0x3c]         ; 005b9536
    FSTP float ptr [ESP + 0x40]         ; 005b953a
    FLD float ptr [ESP + 0x14]          ; 005b953e
    FLD float ptr [ESP + 0x3c]          ; 005b9542
    FLD float ptr [ESP + 0x40]          ; 005b9546
    FXCH ST2                            ; 005b954a
    FADD float ptr [ESP + 0x20]         ; 005b954c
    FXCH                                ; 005b9550
    FADD float ptr [ESP + 0x30]         ; 005b9552
    FXCH ST2                            ; 005b9556
    FADD float ptr [ESP + 0x34]         ; 005b9558
    FXCH                                ; 005b955c
    FSTP float ptr [ESP + 0x44]         ; 005b955e
    FXCH                                ; 005b9562
    FSTP float ptr [ESP]                ; 005b9564
    FSTP float ptr [ESP + 0x4]          ; 005b9567
    FLD float ptr [ESP]                 ; 005b956b
    FLD float ptr [ESP + 0x44]          ; 005b956e
    FADD float ptr [ESP + 0x38]         ; 005b9572
    FXCH                                ; 005b9576
    FADD float ptr [ESP + 0x24]         ; 005b9578
    FXCH                                ; 005b957c
    FSTP float ptr [ESP + 0x8]          ; 005b957e
    FSTP float ptr [EDX]                ; 005b9582
    FLD float ptr [ESP + 0x4]           ; 005b9584
    FADD float ptr [ESP + 0x28]         ; 005b9588
    FSTP float ptr [EDX + 0x4]          ; 005b958c
    FLD float ptr [ESP + 0x8]           ; 005b958f
    FADD float ptr [ESP + 0x2c]         ; 005b9593
    MOV EAX,EDX                         ; 005b9597
    FSTP float ptr [EDX + 0x8]          ; 005b9599
    ADD ESP,0x48                        ; 005b959c
    POP EBP                             ; 005b959f
    POP EDI                             ; 005b95a0
    POP ESI                             ; 005b95a1
    POP EBX                             ; 005b95a2
    RET                                 ; 005b95a3

