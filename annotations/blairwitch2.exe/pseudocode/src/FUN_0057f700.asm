; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057f700(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0057f0b0 at 0057f6a4
;   FUN_0057fa00 at 0057fa6a
;
; Referenced Globals:
;   undefined4 DAT_005ed810
;   undefined4 DAT_005ed814
;   undefined4 DAT_005fd52c
;   undefined4 DAT_005fd530
;
; Called Functions:
;   FUN_00408ae0
;   FUN_0040d0c0
;   FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057f700
        ;   Label: FUN_0057f700
    PUSH ESI                            ; 0057f701
    PUSH EDI                            ; 0057f702
    PUSH EBP                            ; 0057f703
    MOV EBP,ESP                         ; 0057f704
    SUB ESP,0x48                        ; 0057f706
    AND ESP,0xfffffff8                  ; 0057f709
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057f70c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0057f70f
    FLD float ptr [ESI + 0x4]           ; 0057f712
    FLD float ptr [ESI + 0x8]           ; 0057f715
    FLD float ptr [ESI]                 ; 0057f718
    LEA EAX,[EBX + 0x20]                ; 0057f71a
    LEA EDI,[ESP + 0x8]                 ; 0057f71d
    LEA ESI,[ESP + 0x14]                ; 0057f721
    FSUB float ptr [EAX]                ; 0057f725
    FXCH ST2                            ; 0057f727
    FSUB float ptr [EAX + 0x4]          ; 0057f729
    FXCH                                ; 0057f72c
    FSUB float ptr [EAX + 0x8]          ; 0057f72e
    FXCH ST2                            ; 0057f731
    FSTP float ptr [ESP + 0x14]         ; 0057f733
    FSTP float ptr [ESP + 0x18]         ; 0057f737
    FSTP float ptr [ESP + 0x1c]         ; 0057f73b
    LEA EAX,[ESP + 0x8]                 ; 0057f73f
    MOVSD ES:EDI,ESI                    ; 0057f743
    MOVSD ES:EDI,ESI                    ; 0057f744
    MOVSD ES:EDI,ESI                    ; 0057f745
    PUSH EAX                            ; 0057f746
    LEA ESI,[ESP + 0x30]                ; 0057f747
    LEA EDI,[ESP + 0x24]                ; 0057f74b
    CALL FUN_005838f0                   ; 0057f74f
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x30]                ; 0057f754
    ADD ESP,0x4                         ; 0057f758
    MOVSD ES:EDI,ESI                    ; 0057f75b
    MOVSD ES:EDI,ESI                    ; 0057f75c
    MOVSD ES:EDI,ESI                    ; 0057f75d
    FLD float ptr [ESP + 0x20]          ; 0057f75e
    FCOMP float ptr [0x005fd52c]        ; 0057f762 | DAT_005fd52c
    FNSTSW AX                           ; 0057f768
    SAHF                                ; 0057f76a
    JC 0x0057f8bf                       ; 0057f76b
        ;   XREF to: 0057f8bf (CONDITIONAL_JUMP)  ; LAB_0057f8bf
    FLD float ptr [ESP + 0x20]          ; 0057f771
        ;   Label: LAB_0057f771
    FCOMP float ptr [0x005fd530]        ; 0057f775 | DAT_005fd530
    FNSTSW AX                           ; 0057f77b
    SAHF                                ; 0057f77d
    JBE 0x0057f789                      ; 0057f77e
        ;   XREF to: 0057f789 (CONDITIONAL_JUMP)  ; LAB_0057f789
    MOV EAX,[0x005fd530]                ; 0057f780 | DAT_005fd530
    MOV dword ptr [ESP + 0x20],EAX      ; 0057f785
    FLD float ptr [ESP + 0x24]          ; 0057f789
        ;   Label: LAB_0057f789
    FSUB float ptr [EBX + 0x34]         ; 0057f78d
    SUB ESP,0x4                         ; 0057f790
    FSTP float ptr [ESP]                ; 0057f793
    CALL FUN_0040d0c0                   ; 0057f796
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x48],EAX      ; 0057f79b
    FLD float ptr [ESP + 0x48]          ; 0057f79f
    ADD ESP,0x4                         ; 0057f7a3
    FLD float ptr [ESP + 0x20]          ; 0057f7a6
    FXCH                                ; 0057f7aa
    FSTP float ptr [ESP + 0x4]          ; 0057f7ac
    FSUB float ptr [EBX + 0x30]         ; 0057f7b0
    SUB ESP,0x4                         ; 0057f7b3
    FSTP float ptr [ESP]                ; 0057f7b6
    CALL FUN_0040d0c0                   ; 0057f7b9
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    FLD float ptr [EBX + 0x8d4]         ; 0057f7be
    MOV dword ptr [ESP + 0x48],EAX      ; 0057f7c4
    FMUL float ptr [0x005ed810]         ; 0057f7c8 | DAT_005ed810
    FLD float ptr [ESP + 0x48]          ; 0057f7ce
    ADD ESP,0x4                         ; 0057f7d2
    FXCH                                ; 0057f7d5
    FMUL float ptr [EBP + 0x1c]         ; 0057f7d7
    FLD float ptr [ESP + 0x4]           ; 0057f7da
    FXCH ST2                            ; 0057f7de
    FSTP float ptr [ESP]                ; 0057f7e0
    FST float ptr [ESP + 0x40]          ; 0057f7e3
    FCHS                                ; 0057f7e7
    FSTP float ptr [ESP + 0x3c]         ; 0057f7e9
    FCOMP float ptr [ESP + 0x3c]        ; 0057f7ed
    FNSTSW AX                           ; 0057f7f1
    SAHF                                ; 0057f7f3
    JNC 0x0057f7fe                      ; 0057f7f4
        ;   XREF to: 0057f7fe (CONDITIONAL_JUMP)  ; LAB_0057f7fe
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0057f7f6
    MOV dword ptr [ESP + 0x4],EAX       ; 0057f7fa
    FLD float ptr [ESP + 0x4]           ; 0057f7fe
        ;   Label: LAB_0057f7fe
    FCOMP float ptr [ESP + 0x40]        ; 0057f802
    FNSTSW AX                           ; 0057f806
    SAHF                                ; 0057f808
    JBE 0x0057f813                      ; 0057f809
        ;   XREF to: 0057f813 (CONDITIONAL_JUMP)  ; LAB_0057f813
    MOV EAX,dword ptr [ESP + 0x40]      ; 0057f80b
    MOV dword ptr [ESP + 0x4],EAX       ; 0057f80f
    FLD float ptr [ESP]                 ; 0057f813
        ;   Label: LAB_0057f813
    FLD float ptr [ESP + 0x40]          ; 0057f816
    FCHS                                ; 0057f81a
    FSTP float ptr [ESP + 0x38]         ; 0057f81c
    FCOMP float ptr [ESP + 0x38]        ; 0057f820
    FNSTSW AX                           ; 0057f824
    SAHF                                ; 0057f826
    JNC 0x0057f830                      ; 0057f827
        ;   XREF to: 0057f830 (CONDITIONAL_JUMP)  ; LAB_0057f830
    MOV EAX,dword ptr [ESP + 0x38]      ; 0057f829
    MOV dword ptr [ESP],EAX             ; 0057f82d
    FLD float ptr [ESP]                 ; 0057f830
        ;   Label: LAB_0057f830
    FCOMP float ptr [ESP + 0x40]        ; 0057f833
    FNSTSW AX                           ; 0057f837
    SAHF                                ; 0057f839
    JBE 0x0057f843                      ; 0057f83a
        ;   XREF to: 0057f843 (CONDITIONAL_JUMP)  ; LAB_0057f843
    MOV EAX,dword ptr [ESP + 0x40]      ; 0057f83c
    MOV dword ptr [ESP],EAX             ; 0057f840
    FLD float ptr [EBX + 0x34]          ; 0057f843
        ;   Label: LAB_0057f843
    FLD float ptr [EBX + 0x30]          ; 0057f846
    PUSH EBX                            ; 0057f849
    FXCH                                ; 0057f84a
    FADD float ptr [ESP + 0x8]          ; 0057f84c
    FXCH                                ; 0057f850
    FADD float ptr [ESP + 0x4]          ; 0057f852
    FXCH                                ; 0057f856
    FSTP float ptr [EBX + 0x34]         ; 0057f858
    FSTP float ptr [EBX + 0x30]         ; 0057f85b
    CALL FUN_00408ae0                   ; 0057f85e
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    ADD ESP,0x4                         ; 0057f863
    FLD float ptr [ESP + 0x4]           ; 0057f866
    FCOMP double ptr [0x005ed814]       ; 0057f86a | DAT_005ed814
    FNSTSW AX                           ; 0057f870
    SAHF                                ; 0057f872
    JNC 0x0057f8cd                      ; 0057f873
        ;   XREF to: 0057f8cd (CONDITIONAL_JUMP)  ; LAB_0057f8cd
    MOV EAX,0x1                         ; 0057f875
    MOV dword ptr [ESP + 0x44],EAX      ; 0057f87a
        ;   Label: LAB_0057f87a
    FILD dword ptr [ESP + 0x44]         ; 0057f87e
    FABS                                ; 0057f882
    FLDZ                                ; 0057f884
    FCOMPP                              ; 0057f886
    FNSTSW AX                           ; 0057f888
    SAHF                                ; 0057f88a
    JZ 0x0057f8d5                       ; 0057f88b
        ;   XREF to: 0057f8d5 (CONDITIONAL_JUMP)  ; LAB_0057f8d5
    FLD float ptr [ESP]                 ; 0057f88d
    FCOMP double ptr [0x005ed814]       ; 0057f890 | DAT_005ed814
    FNSTSW AX                           ; 0057f896
    SAHF                                ; 0057f898
    JNC 0x0057f8d1                      ; 0057f899
        ;   XREF to: 0057f8d1 (CONDITIONAL_JUMP)  ; LAB_0057f8d1
    MOV EAX,0x1                         ; 0057f89b
    MOV dword ptr [ESP + 0x44],EAX      ; 0057f8a0
        ;   Label: LAB_0057f8a0
    FILD dword ptr [ESP + 0x44]         ; 0057f8a4
    FABS                                ; 0057f8a8
    FLDZ                                ; 0057f8aa
    FCOMPP                              ; 0057f8ac
    FNSTSW AX                           ; 0057f8ae
    SAHF                                ; 0057f8b0
    JZ 0x0057f8d5                       ; 0057f8b1
        ;   XREF to: 0057f8d5 (CONDITIONAL_JUMP)  ; LAB_0057f8d5
    MOV EAX,0x1                         ; 0057f8b3
    MOV ESP,EBP                         ; 0057f8b8
    POP EBP                             ; 0057f8ba
    POP EDI                             ; 0057f8bb
    POP ESI                             ; 0057f8bc
    POP EBX                             ; 0057f8bd
    RET                                 ; 0057f8be
    MOV EAX,[0x005fd52c]                ; 0057f8bf | DAT_005fd52c
        ;   Label: LAB_0057f8bf
    MOV dword ptr [ESP + 0x20],EAX      ; 0057f8c4
    JMP 0x0057f771                      ; 0057f8c8
        ;   XREF to: 0057f771 (UNCONDITIONAL_JUMP)  ; LAB_0057f771
    XOR EAX,EAX                         ; 0057f8cd
        ;   Label: LAB_0057f8cd
    JMP 0x0057f87a                      ; 0057f8cf
        ;   XREF to: 0057f87a (UNCONDITIONAL_JUMP)  ; LAB_0057f87a
    XOR EAX,EAX                         ; 0057f8d1
        ;   Label: LAB_0057f8d1
    JMP 0x0057f8a0                      ; 0057f8d3
        ;   XREF to: 0057f8a0 (UNCONDITIONAL_JUMP)  ; LAB_0057f8a0
    XOR EAX,EAX                         ; 0057f8d5
        ;   Label: LAB_0057f8d5
    MOV ESP,EBP                         ; 0057f8d7
    POP EBP                             ; 0057f8d9
    POP EDI                             ; 0057f8da
    POP ESI                             ; 0057f8db
    POP EBX                             ; 0057f8dc
    RET                                 ; 0057f8dd

