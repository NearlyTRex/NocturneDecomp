; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00561780(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)
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
; XREF[2]:
;   FUN_00465400 at 0046582a
;   FUN_004658e0 at 00465bed
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561780
        ;   Label: FUN_00561780
    PUSH EDI                            ; 00561781
    PUSH EBP                            ; 00561782
    SUB ESP,0x9c                        ; 00561783
    MOV ECX,dword ptr [ESP + 0xac]      ; 00561789
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00561790
    MOV EBP,dword ptr [ESP + 0xb4]      ; 00561797
    MOV EAX,ESI                         ; 0056179e
    MOV ESI,dword ptr [ESP + 0xbc]      ; 005617a0
    LEA EDX,[ECX + 0x1c]                ; 005617a7
    FLD float ptr [ESI]                 ; 005617aa
    FMUL float ptr [EDX]                ; 005617ac
    FLD float ptr [ESI + 0x4]           ; 005617ae
    FMUL float ptr [EDX]                ; 005617b1
    FLD float ptr [ESI + 0x8]           ; 005617b3
    FMUL float ptr [EDX]                ; 005617b6
    LEA EDI,[ESP + 0x84]                ; 005617b8
    LEA ESI,[ESP + 0x24]                ; 005617bf
    FXCH ST2                            ; 005617c3
    FSTP float ptr [ESP + 0x24]         ; 005617c5
    FSTP float ptr [ESP + 0x28]         ; 005617c9
    FSTP float ptr [ESP + 0x2c]         ; 005617cd
    MOVSD ES:EDI,ESI                    ; 005617d1
    MOVSD ES:EDI,ESI                    ; 005617d2
    MOVSD ES:EDI,ESI                    ; 005617d3
    MOV ESI,dword ptr [ESP + 0xb8]      ; 005617d4
    LEA EDX,[ECX + 0x18]                ; 005617db
    FLD float ptr [ESI]                 ; 005617de
    FMUL float ptr [EDX]                ; 005617e0
    FLD float ptr [ESI + 0x4]           ; 005617e2
    FMUL float ptr [EDX]                ; 005617e5
    FLD float ptr [ESI + 0x8]           ; 005617e7
    FMUL float ptr [EDX]                ; 005617ea
    LEA EDI,[ESP + 0x18]                ; 005617ec
    LEA ESI,[ESP + 0x6c]                ; 005617f0
    FXCH ST2                            ; 005617f4
    FSTP float ptr [ESP + 0x6c]         ; 005617f6
    FSTP float ptr [ESP + 0x70]         ; 005617fa
    FSTP float ptr [ESP + 0x74]         ; 005617fe
    MOVSD ES:EDI,ESI                    ; 00561802
    MOVSD ES:EDI,ESI                    ; 00561803
    MOVSD ES:EDI,ESI                    ; 00561804
    LEA EDX,[ECX + 0x14]                ; 00561805
    FLD float ptr [EBP]                 ; 00561808
    FMUL float ptr [EDX]                ; 0056180b
    FLD float ptr [EBP + 0x4]           ; 0056180d
    FMUL float ptr [EDX]                ; 00561810
    FLD float ptr [EBP + 0x8]           ; 00561812
    FMUL float ptr [EDX]                ; 00561815
    MOV EDI,ESP                         ; 00561817
    LEA ESI,[ESP + 0x30]                ; 00561819
    FXCH ST2                            ; 0056181d
    FSTP float ptr [ESP + 0x30]         ; 0056181f
    FSTP float ptr [ESP + 0x34]         ; 00561823
    FSTP float ptr [ESP + 0x38]         ; 00561827
    MOVSD ES:EDI,ESI                    ; 0056182b
    MOVSD ES:EDI,ESI                    ; 0056182c
    MOVSD ES:EDI,ESI                    ; 0056182d
    LEA EDX,[ECX + 0x10]                ; 0056182e
    FLD float ptr [EBX]                 ; 00561831
    FMUL float ptr [EDX]                ; 00561833
    FLD float ptr [EBX + 0x4]           ; 00561835
    FMUL float ptr [EDX]                ; 00561838
    FLD float ptr [EBX + 0x8]           ; 0056183a
    FMUL float ptr [EDX]                ; 0056183d
    LEA EDI,[ESP + 0x54]                ; 0056183f
    LEA ESI,[ESP + 0x48]                ; 00561843
    FXCH ST2                            ; 00561847
    FSTP float ptr [ESP + 0x48]         ; 00561849
    FSTP float ptr [ESP + 0x4c]         ; 0056184d
    FSTP float ptr [ESP + 0x50]         ; 00561851
    MOVSD ES:EDI,ESI                    ; 00561855
    MOVSD ES:EDI,ESI                    ; 00561856
    MOVSD ES:EDI,ESI                    ; 00561857
    FLD float ptr [ESP + 0x54]          ; 00561858
    FLD float ptr [ESP + 0x58]          ; 0056185c
    FLD float ptr [ESP + 0x5c]          ; 00561860
    LEA EDI,[ESP + 0xc]                 ; 00561864
    LEA ESI,[ESP + 0x78]                ; 00561868
    FXCH ST2                            ; 0056186c
    FADD float ptr [ESP]                ; 0056186e
    FXCH                                ; 00561871
    FADD float ptr [ESP + 0x4]          ; 00561873
    FXCH ST2                            ; 00561877
    FADD float ptr [ESP + 0x8]          ; 00561879
    FXCH                                ; 0056187d
    FSTP float ptr [ESP + 0x78]         ; 0056187f
    FXCH                                ; 00561883
    FSTP float ptr [ESP + 0x7c]         ; 00561885
    FSTP float ptr [ESP + 0x80]         ; 00561889
    MOVSD ES:EDI,ESI                    ; 00561890
    MOVSD ES:EDI,ESI                    ; 00561891
    MOVSD ES:EDI,ESI                    ; 00561892
    FLD float ptr [ESP + 0xc]           ; 00561893
    FLD float ptr [ESP + 0x10]          ; 00561897
    FLD float ptr [ESP + 0x14]          ; 0056189b
    LEA EDI,[ESP + 0x60]                ; 0056189f
    LEA ESI,[ESP + 0x3c]                ; 005618a3
    FXCH ST2                            ; 005618a7
    FADD float ptr [ESP + 0x18]         ; 005618a9
    FXCH                                ; 005618ad
    FADD float ptr [ESP + 0x1c]         ; 005618af
    FXCH ST2                            ; 005618b3
    FADD float ptr [ESP + 0x20]         ; 005618b5
    FXCH                                ; 005618b9
    FSTP float ptr [ESP + 0x3c]         ; 005618bb
    FXCH                                ; 005618bf
    FSTP float ptr [ESP + 0x40]         ; 005618c1
    FSTP float ptr [ESP + 0x44]         ; 005618c5
    MOVSD ES:EDI,ESI                    ; 005618c9
    MOVSD ES:EDI,ESI                    ; 005618ca
    MOVSD ES:EDI,ESI                    ; 005618cb
    FLD float ptr [ESP + 0x60]          ; 005618cc
    FLD float ptr [ESP + 0x64]          ; 005618d0
    FLD float ptr [ESP + 0x68]          ; 005618d4
    LEA ESI,[ESP + 0x90]                ; 005618d8
    MOV EDI,EAX                         ; 005618df
    FXCH ST2                            ; 005618e1
    FADD float ptr [ESP + 0x84]         ; 005618e3
    FXCH                                ; 005618ea
    FADD float ptr [ESP + 0x88]         ; 005618ec
    FXCH ST2                            ; 005618f3
    FADD float ptr [ESP + 0x8c]         ; 005618f5
    FXCH                                ; 005618fc
    FSTP float ptr [ESP + 0x90]         ; 005618fe
    FXCH                                ; 00561905
    FSTP float ptr [ESP + 0x94]         ; 00561907
    FSTP float ptr [ESP + 0x98]         ; 0056190e
    MOVSD ES:EDI,ESI                    ; 00561915
    MOVSD ES:EDI,ESI                    ; 00561916
    MOVSD ES:EDI,ESI                    ; 00561917
    ADD ESP,0x9c                        ; 00561918
    POP EBP                             ; 0056191e
    POP EDI                             ; 0056191f
    POP EBX                             ; 00561920
    RET                                 ; 00561921

