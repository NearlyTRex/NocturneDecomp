; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_spline_cpp_FUN_00561540(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)
;
; Local Variables:
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
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
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[3]:
;   core_dracbrid.cpp_FUN_00465400 at 004657c7
;   core_dracbrid.cpp_FUN_004658e0 at 00465b52
;   core_flies.cpp_FUN_004a70b0 at 004a7304
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561540
        ;   Label: core_spline.cpp_FUN_00561540
    PUSH EDI                            ; 00561541
    PUSH EBP                            ; 00561542
    SUB ESP,0x9c                        ; 00561543
    MOV EDX,dword ptr [ESP + 0xac]      ; 00561549
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00561550
    MOV EBP,dword ptr [ESP + 0xb4]      ; 00561557
    MOV EAX,ESI                         ; 0056155e
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00561560
    LEA ECX,[EDX + 0xc]                 ; 00561567
    FLD float ptr [ESI]                 ; 0056156a
    FMUL float ptr [ECX]                ; 0056156c
    FLD float ptr [ESI + 0x4]           ; 0056156e
    FMUL float ptr [ECX]                ; 00561571
    FLD float ptr [ESI + 0x8]           ; 00561573
    FMUL float ptr [ECX]                ; 00561576
    LEA EDI,[ESP + 0x6c]                ; 00561578
    LEA ESI,[ESP + 0x48]                ; 0056157c
    FXCH ST2                            ; 00561580
    FSTP float ptr [ESP + 0x48]         ; 00561582
    FSTP float ptr [ESP + 0x4c]         ; 00561586
    FSTP float ptr [ESP + 0x50]         ; 0056158a
    MOVSD ES:EDI,ESI                    ; 0056158e
    MOVSD ES:EDI,ESI                    ; 0056158f
    MOVSD ES:EDI,ESI                    ; 00561590
    MOV ESI,dword ptr [ESP + 0xb8]      ; 00561591
    LEA ECX,[EDX + 0x8]                 ; 00561598
    FLD float ptr [ESI]                 ; 0056159b
    FMUL float ptr [ECX]                ; 0056159d
    FLD float ptr [ESI + 0x4]           ; 0056159f
    FMUL float ptr [ECX]                ; 005615a2
    FLD float ptr [ESI + 0x8]           ; 005615a4
    FMUL float ptr [ECX]                ; 005615a7
    LEA EDI,[ESP + 0x18]                ; 005615a9
    LEA ESI,[ESP + 0x84]                ; 005615ad
    FXCH ST2                            ; 005615b4
    FSTP float ptr [ESP + 0x84]         ; 005615b6
    FSTP float ptr [ESP + 0x88]         ; 005615bd
    FSTP float ptr [ESP + 0x8c]         ; 005615c4
    MOVSD ES:EDI,ESI                    ; 005615cb
    MOVSD ES:EDI,ESI                    ; 005615cc
    MOVSD ES:EDI,ESI                    ; 005615cd
    LEA ECX,[EDX + 0x4]                 ; 005615ce
    FLD float ptr [EBP]                 ; 005615d1
    FMUL float ptr [ECX]                ; 005615d4
    FLD float ptr [EBP + 0x4]           ; 005615d6
    FMUL float ptr [ECX]                ; 005615d9
    FLD float ptr [EBP + 0x8]           ; 005615db
    FMUL float ptr [ECX]                ; 005615de
    MOV EDI,ESP                         ; 005615e0
    LEA ESI,[ESP + 0x30]                ; 005615e2
    FXCH ST2                            ; 005615e6
    FSTP float ptr [ESP + 0x30]         ; 005615e8
    FSTP float ptr [ESP + 0x34]         ; 005615ec
    FSTP float ptr [ESP + 0x38]         ; 005615f0
    MOVSD ES:EDI,ESI                    ; 005615f4
    MOVSD ES:EDI,ESI                    ; 005615f5
    MOVSD ES:EDI,ESI                    ; 005615f6
    FLD float ptr [EBX]                 ; 005615f7
    FMUL float ptr [EDX]                ; 005615f9
    FLD float ptr [EBX + 0x4]           ; 005615fb
    FMUL float ptr [EDX]                ; 005615fe
    FLD float ptr [EBX + 0x8]           ; 00561600
    FMUL float ptr [EDX]                ; 00561603
    LEA EDI,[ESP + 0x54]                ; 00561605
    LEA ESI,[ESP + 0x60]                ; 00561609
    FXCH ST2                            ; 0056160d
    FSTP float ptr [ESP + 0x60]         ; 0056160f
    FSTP float ptr [ESP + 0x64]         ; 00561613
    FSTP float ptr [ESP + 0x68]         ; 00561617
    MOVSD ES:EDI,ESI                    ; 0056161b
    MOVSD ES:EDI,ESI                    ; 0056161c
    MOVSD ES:EDI,ESI                    ; 0056161d
    FLD float ptr [ESP + 0x54]          ; 0056161e
    FLD float ptr [ESP + 0x58]          ; 00561622
    FLD float ptr [ESP + 0x5c]          ; 00561626
    LEA EDI,[ESP + 0xc]                 ; 0056162a
    LEA ESI,[ESP + 0x3c]                ; 0056162e
    FXCH ST2                            ; 00561632
    FADD float ptr [ESP]                ; 00561634
    FXCH                                ; 00561637
    FADD float ptr [ESP + 0x4]          ; 00561639
    FXCH ST2                            ; 0056163d
    FADD float ptr [ESP + 0x8]          ; 0056163f
    FXCH                                ; 00561643
    FSTP float ptr [ESP + 0x3c]         ; 00561645
    FXCH                                ; 00561649
    FSTP float ptr [ESP + 0x40]         ; 0056164b
    FSTP float ptr [ESP + 0x44]         ; 0056164f
    MOVSD ES:EDI,ESI                    ; 00561653
    MOVSD ES:EDI,ESI                    ; 00561654
    MOVSD ES:EDI,ESI                    ; 00561655
    FLD float ptr [ESP + 0xc]           ; 00561656
    FLD float ptr [ESP + 0x10]          ; 0056165a
    FLD float ptr [ESP + 0x14]          ; 0056165e
    LEA EDI,[ESP + 0x24]                ; 00561662
    LEA ESI,[ESP + 0x90]                ; 00561666
    FXCH ST2                            ; 0056166d
    FADD float ptr [ESP + 0x18]         ; 0056166f
    FXCH                                ; 00561673
    FADD float ptr [ESP + 0x1c]         ; 00561675
    FXCH ST2                            ; 00561679
    FADD float ptr [ESP + 0x20]         ; 0056167b
    FXCH                                ; 0056167f
    FSTP float ptr [ESP + 0x90]         ; 00561681
    FXCH                                ; 00561688
    FSTP float ptr [ESP + 0x94]         ; 0056168a
    FSTP float ptr [ESP + 0x98]         ; 00561691
    MOVSD ES:EDI,ESI                    ; 00561698
    MOVSD ES:EDI,ESI                    ; 00561699
    MOVSD ES:EDI,ESI                    ; 0056169a
    FLD float ptr [ESP + 0x24]          ; 0056169b
    FLD float ptr [ESP + 0x28]          ; 0056169f
    FLD float ptr [ESP + 0x2c]          ; 005616a3
    LEA ESI,[ESP + 0x78]                ; 005616a7
    MOV EDI,EAX                         ; 005616ab
    FXCH ST2                            ; 005616ad
    FADD float ptr [ESP + 0x6c]         ; 005616af
    FXCH                                ; 005616b3
    FADD float ptr [ESP + 0x70]         ; 005616b5
    FXCH ST2                            ; 005616b9
    FADD float ptr [ESP + 0x74]         ; 005616bb
    FXCH                                ; 005616bf
    FSTP float ptr [ESP + 0x78]         ; 005616c1
    FXCH                                ; 005616c5
    FSTP float ptr [ESP + 0x7c]         ; 005616c7
    FSTP float ptr [ESP + 0x80]         ; 005616cb
    MOVSD ES:EDI,ESI                    ; 005616d2
    MOVSD ES:EDI,ESI                    ; 005616d3
    MOVSD ES:EDI,ESI                    ; 005616d4
    ADD ESP,0x9c                        ; 005616d5
    POP EBP                             ; 005616db
    POP EDI                             ; 005616dc
    POP EBX                             ; 005616dd
    RET                                 ; 005616de

