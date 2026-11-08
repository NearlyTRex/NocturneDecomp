; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a85c0(int *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_005a8180 at 005a81fb
;
; *****************************************************************************

section .text

    SUB ESP,0x30                        ; 005a85c0
        ;   Label: FUN_005a85c0
    MOV EDX,dword ptr [ESP + 0x34]      ; 005a85c3
    CMP dword ptr [EDX],0x0             ; 005a85c7
    JZ 0x005a868e                       ; 005a85ca
        ;   XREF to: 005a868e (CONDITIONAL_JUMP)  ; LAB_005a868e
    FLD float ptr [EDX + 0x8]           ; 005a85d0
    FSUB float ptr [ESP + 0x38]         ; 005a85d3
    FST float ptr [EDX + 0x8]           ; 005a85d7
    FLDZ                                ; 005a85da
    FCOMPP                              ; 005a85dc
    FNSTSW AX                           ; 005a85de
    SAHF                                ; 005a85e0
    JC 0x005a85f0                       ; 005a85e1
        ;   XREF to: 005a85f0 (CONDITIONAL_JUMP)  ; LAB_005a85f0
    MOV dword ptr [EDX],0x0             ; 005a85e3
    MOV dword ptr [EDX + 0x8],0x0       ; 005a85e9
    PUSH EDI                            ; 005a85f0
        ;   Label: LAB_005a85f0
    PUSH ESI                            ; 005a85f1
    LEA EAX,[EDX + 0x3c]                ; 005a85f2
    FLD float ptr [ESP + 0x40]          ; 005a85f5
    FLD float ptr [EAX]                 ; 005a85f9
    FMUL ST1                            ; 005a85fb
    FLD float ptr [EAX + 0x4]           ; 005a85fd
    FMUL ST2                            ; 005a8600
    FLD float ptr [EAX + 0x8]           ; 005a8602
    FMUL ST3                            ; 005a8605
    LEA EDI,[ESP + 0x8]                 ; 005a8607
    LEA ESI,[ESP + 0x2c]                ; 005a860b
    LEA EAX,[EDX + 0x30]                ; 005a860f
    FXCH ST2                            ; 005a8612
    FSTP float ptr [ESP + 0x2c]         ; 005a8614
    FSTP float ptr [ESP + 0x30]         ; 005a8618
    FSTP float ptr [ESP + 0x34]         ; 005a861c
    MOVSD ES:EDI,ESI                    ; 005a8620
    MOVSD ES:EDI,ESI                    ; 005a8621
    MOVSD ES:EDI,ESI                    ; 005a8622
    FLD float ptr [EAX]                 ; 005a8623
    FADD float ptr [ESP + 0x8]          ; 005a8625
    FST float ptr [EAX]                 ; 005a8629
    FMUL ST1                            ; 005a862b
    FLD float ptr [EAX + 0x8]           ; 005a862d
    FLD float ptr [EAX + 0x4]           ; 005a8630
    FADD float ptr [ESP + 0xc]          ; 005a8633
    FXCH                                ; 005a8637
    FADD float ptr [ESP + 0x10]         ; 005a8639
    FXCH                                ; 005a863d
    FST float ptr [EAX + 0x4]           ; 005a863f
    FMUL ST3                            ; 005a8642
    FXCH                                ; 005a8644
    FST float ptr [EAX + 0x8]           ; 005a8646
    FMULP ST3                           ; 005a8649
    LEA EDI,[ESP + 0x20]                ; 005a864b
    LEA ESI,[ESP + 0x14]                ; 005a864f
    FXCH                                ; 005a8653
    FSTP float ptr [ESP + 0x14]         ; 005a8655
    FSTP float ptr [ESP + 0x18]         ; 005a8659
    FSTP float ptr [ESP + 0x1c]         ; 005a865d
    MOVSD ES:EDI,ESI                    ; 005a8661
    MOVSD ES:EDI,ESI                    ; 005a8662
    MOVSD ES:EDI,ESI                    ; 005a8663
    FLD float ptr [EDX + 0x24]          ; 005a8664
    FLD float ptr [EDX + 0x28]          ; 005a8667
    FLD float ptr [EDX + 0x2c]          ; 005a866a
    FXCH ST2                            ; 005a866d
    FADD float ptr [ESP + 0x20]         ; 005a866f
    FXCH                                ; 005a8673
    FADD float ptr [ESP + 0x24]         ; 005a8675
    FXCH ST2                            ; 005a8679
    FADD float ptr [ESP + 0x28]         ; 005a867b
    FXCH                                ; 005a867f
    FSTP float ptr [EDX + 0x24]         ; 005a8681
    FXCH                                ; 005a8684
    FSTP float ptr [EDX + 0x28]         ; 005a8686
    FSTP float ptr [EDX + 0x2c]         ; 005a8689
    POP ESI                             ; 005a868c
    POP EDI                             ; 005a868d
    ADD ESP,0x30                        ; 005a868e
        ;   Label: LAB_005a868e
    RET                                 ; 005a8691

