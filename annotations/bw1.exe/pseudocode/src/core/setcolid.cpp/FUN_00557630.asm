; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_setcolid_cpp_FUN_00557630(undefined4 param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
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
;
; XREF[2]:
;   core_doc.cpp_FUN_00471af0 at 00471c13
;   core_stranger.cpp_FUN_0058e3c0 at 0058e4d1
;
; Referenced Globals:
;   undefined4 DAT_005f0e25
;   undefined4 DAT_005f0e29
;
; Called Functions:
;   core_setcolid.cpp_FUN_00557300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00557630
        ;   Label: core_setcolid.cpp_FUN_00557630
    PUSH ESI                            ; 00557631
    PUSH EDI                            ; 00557632
    PUSH EBP                            ; 00557633
    MOV EBP,ESP                         ; 00557634
    SUB ESP,0xb8                        ; 00557636
    AND ESP,0xfffffff8                  ; 0055763c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0055763f
    LEA EDI,[ESP + 0x24]                ; 00557642
    MOV ESI,dword ptr [EBP + 0x18]      ; 00557646
    MOVSD ES:EDI,ESI                    ; 00557649
    MOVSD ES:EDI,ESI                    ; 0055764a
    MOVSD ES:EDI,ESI                    ; 0055764b
    XOR EDX,EDX                         ; 0055764c
    LEA EDI,[ESP + 0x90]                ; 0055764e
    MOV ESI,EAX                         ; 00557655
    XOR EBX,EBX                         ; 00557657
    MOV dword ptr [ESP + 0xac],EDX      ; 00557659
    MOVSD ES:EDI,ESI                    ; 00557660
    MOVSD ES:EDI,ESI                    ; 00557661
    MOVSD ES:EDI,ESI                    ; 00557662
    MOV dword ptr [ESP + 0xb0],EDX      ; 00557663
    MOV ESI,0xbe23d70a                  ; 0055766a
    MOV dword ptr [ESP + 0xa0],EDX      ; 0055766f
    MOV dword ptr [ESP + 0x9c],ESI      ; 00557676
    FLD float ptr [0x005f0e25]          ; 0055767d | DAT_005f0e25
        ;   Label: LAB_0055767d
    FLD float ptr [ESP + 0x90]          ; 00557683
    FMUL ST1                            ; 0055768a
    FLD float ptr [ESP + 0x94]          ; 0055768c
    FMUL ST2                            ; 00557693
    FLD float ptr [ESP + 0x98]          ; 00557695
    FMULP ST3                           ; 0055769c
    FLD float ptr [ESP + 0x24]          ; 0055769e
    FLD float ptr [ESP + 0x28]          ; 005576a2
    FLD float ptr [ESP + 0x2c]          ; 005576a6
    MOV EAX,0x3dcccccd                  ; 005576aa
    LEA EDI,[ESP + 0x84]                ; 005576af
    MOV dword ptr [ESP + 0xa8],EAX      ; 005576b6
    MOV EAX,dword ptr [ESP + 0xb0]      ; 005576bd
    LEA ESI,[ESP + 0x6c]                ; 005576c4
    MOV dword ptr [ESP + 0x6c],EAX      ; 005576c8
    MOV EAX,dword ptr [ESP + 0x9c]      ; 005576cc
    MOV EDX,dword ptr [EBP + 0x14]      ; 005576d3
    MOV dword ptr [ESP + 0x70],EAX      ; 005576d6
    MOV EAX,dword ptr [ESP + 0xa0]      ; 005576da
    FXCH ST4                            ; 005576e1
    FSTP float ptr [ESP + 0x3c]         ; 005576e3
    MOV dword ptr [ESP + 0x74],EAX      ; 005576e7
    FXCH ST2                            ; 005576eb
    FSTP float ptr [ESP + 0x40]         ; 005576ed
    MOVSD ES:EDI,ESI                    ; 005576f1
    MOVSD ES:EDI,ESI                    ; 005576f2
    MOVSD ES:EDI,ESI                    ; 005576f3
    LEA EAX,[ESP + 0x60]                ; 005576f4
    LEA EDI,[ESP + 0x78]                ; 005576f8
    LEA ESI,[ESP + 0x3c]                ; 005576fc
    FXCH ST3                            ; 00557700
    FSTP float ptr [ESP + 0x44]         ; 00557702
    PUSH EAX                            ; 00557706
    MOVSD ES:EDI,ESI                    ; 00557707
    MOVSD ES:EDI,ESI                    ; 00557708
    MOVSD ES:EDI,ESI                    ; 00557709
    LEA EAX,[ESP + 0x28]                ; 0055770a
    LEA EDI,[ESP + 0x58]                ; 0055770e
    LEA ESI,[ESP + 0x1c]                ; 00557712
    PUSH EAX                            ; 00557716
    FXCH ST2                            ; 00557717
    FADD float ptr [ESP + 0x80]         ; 00557719
    FXCH ST2                            ; 00557720
    FADD float ptr [ESP + 0x84]         ; 00557722
    FXCH                                ; 00557729
    FADD float ptr [ESP + 0x88]         ; 0055772b
    FXCH ST2                            ; 00557732
    FSTP float ptr [ESP + 0x20]         ; 00557734
    FSTP float ptr [ESP + 0x24]         ; 00557738
    FSTP float ptr [ESP + 0x28]         ; 0055773c
    MOVSD ES:EDI,ESI                    ; 00557740
    MOVSD ES:EDI,ESI                    ; 00557741
    MOVSD ES:EDI,ESI                    ; 00557742
    PUSH EDX                            ; 00557743
    FLD float ptr [ESP + 0x60]          ; 00557744
    FLD float ptr [ESP + 0x64]          ; 00557748
    FLD float ptr [ESP + 0x68]          ; 0055774c
    LEA EDI,[ESP + 0x6c]                ; 00557750
    LEA ESI,[ESP + 0x3c]                ; 00557754
    FXCH ST2                            ; 00557758
    FADD float ptr [ESP + 0x90]         ; 0055775a
    FXCH                                ; 00557761
    FADD float ptr [ESP + 0x94]         ; 00557763
    FXCH ST2                            ; 0055776a
    FADD float ptr [ESP + 0x98]         ; 0055776c
    FXCH                                ; 00557773
    FSTP float ptr [ESP + 0x3c]         ; 00557775
    FXCH                                ; 00557779
    FSTP float ptr [ESP + 0x40]         ; 0055777b
    FSTP float ptr [ESP + 0x44]         ; 0055777f
    MOVSD ES:EDI,ESI                    ; 00557783
    MOVSD ES:EDI,ESI                    ; 00557784
    MOVSD ES:EDI,ESI                    ; 00557785
    CALL core_setcolid.cpp_FUN_00557300 ; 00557786
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0xc0],EAX      ; 0055778b
    FLD float ptr [ESP + 0xc0]          ; 00557792
    ADD ESP,0xc                         ; 00557799
    FLDZ                                ; 0055779c
    FXCH                                ; 0055779e
    FST float ptr [ESP + 0x8]           ; 005577a0
    FSTP double ptr [ESP]               ; 005577a4
    FCOMP double ptr [ESP]              ; 005577a7
    FNSTSW AX                           ; 005577aa
    SAHF                                ; 005577ac
    JA 0x005577bd                       ; 005577ad
        ;   XREF to: 005577bd (CONDITIONAL_JUMP)  ; LAB_005577bd
    FLD1                                ; 005577af
    FCOMP double ptr [ESP]              ; 005577b1
    FNSTSW AX                           ; 005577b4
    SAHF                                ; 005577b6
    JNC 0x0055788a                      ; 005577b7
        ;   XREF to: 0055788a (CONDITIONAL_JUMP)  ; LAB_0055788a
    LEA EAX,[ESP + 0x24]                ; 005577bd
        ;   Label: LAB_005577bd
    LEA EDX,[ESP + 0x60]                ; 005577c1
    CMP EAX,EDX                         ; 005577c5
    JZ 0x005577e1                       ; 005577c7
        ;   XREF to: 005577e1 (CONDITIONAL_JUMP)  ; LAB_005577e1
    MOV EAX,dword ptr [ESP + 0x60]      ; 005577c9
    MOV dword ptr [ESP + 0x24],EAX      ; 005577cd
    MOV EAX,dword ptr [ESP + 0x64]      ; 005577d1
    MOV dword ptr [ESP + 0x28],EAX      ; 005577d5
    MOV EAX,dword ptr [ESP + 0x68]      ; 005577d9
    MOV dword ptr [ESP + 0x2c],EAX      ; 005577dd
    FLDZ                                ; 005577e1
        ;   Label: LAB_005577e1
    FLD float ptr [ESP + 0xa8]          ; 005577e3
    FXCH                                ; 005577ea
    FMUL ST1                            ; 005577ec
    FLD ST1                             ; 005577ee
    FMUL float ptr [0x005f0e29]         ; 005577f0 | DAT_005f0e29
    FLD float ptr [ESP + 0x90]          ; 005577f6
    FLD float ptr [ESP + 0x94]          ; 005577fd
    FLD float ptr [ESP + 0x98]          ; 00557804
    FLD float ptr [ESP + 0xac]          ; 0055780b
    LEA EDI,[ESP + 0xc]                 ; 00557812
    LEA ESI,[ESP + 0x48]                ; 00557816
    INC EBX                             ; 0055781a
    FXCH ST5                            ; 0055781b
    FSTP float ptr [ESP + 0x48]         ; 0055781d
    MOV EAX,dword ptr [ESP + 0x48]      ; 00557821
    FXCH ST4                            ; 00557825
    FADDP ST5,ST0                       ; 00557827
    MOV dword ptr [ESP + 0x50],EAX      ; 00557829
    FXCH ST2                            ; 0055782d
    FSTP float ptr [ESP + 0x4c]         ; 0055782f
    MOVSD ES:EDI,ESI                    ; 00557833
    MOVSD ES:EDI,ESI                    ; 00557834
    MOVSD ES:EDI,ESI                    ; 00557835
    FXCH ST3                            ; 00557836
    FSTP float ptr [ESP + 0xac]         ; 00557838
    FXCH ST2                            ; 0055783f
    FADD float ptr [ESP + 0xc]          ; 00557841
    FXCH ST2                            ; 00557845
    FADD float ptr [ESP + 0x10]         ; 00557847
    FXCH                                ; 0055784b
    FADD float ptr [ESP + 0x14]         ; 0055784d
    FXCH ST2                            ; 00557851
    FSTP float ptr [ESP + 0x90]         ; 00557853
    FSTP float ptr [ESP + 0x94]         ; 0055785a
    FSTP float ptr [ESP + 0x98]         ; 00557861
    CMP EBX,0x64                        ; 00557868
    JL 0x0055767d                       ; 0055786b
        ;   XREF to: 0055767d (CONDITIONAL_JUMP)  ; LAB_0055767d
    MOV dword ptr [ESP + 0xa4],0xbf800000 ; 00557871
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0055787c
    MOV ESP,EBP                         ; 00557883
    POP EBP                             ; 00557885
    POP EDI                             ; 00557886
    POP ESI                             ; 00557887
    POP EBX                             ; 00557888
    RET                                 ; 00557889
    FLD float ptr [ESP + 0x8]           ; 0055788a
        ;   Label: LAB_0055788a
    FMUL float ptr [0x005f0e25]         ; 0055788e | DAT_005f0e25
    FADD float ptr [ESP + 0xac]         ; 00557894
    FSTP float ptr [ESP + 0xa4]         ; 0055789b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 005578a2
    MOV ESP,EBP                         ; 005578a9
    POP EBP                             ; 005578ab
    POP EDI                             ; 005578ac
    POP ESI                             ; 005578ad
    POP EBX                             ; 005578ae
    RET                                 ; 005578af

