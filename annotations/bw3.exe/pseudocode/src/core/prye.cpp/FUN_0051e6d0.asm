; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051e6d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xfc]:4  local_fc
; undefined8       Stack[-0xf8]:8  local_f8
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined        Stack[-0xe0]:1  local_e0
; undefined        Stack[-0xd0]:1  local_d0
; undefined        Stack[-0xc0]:1  local_c0
; undefined        Stack[-0xb0]:1  local_b0
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0051c1c0 at 0051c2b2
;
; Referenced Globals:
;   TerminatedCString s_core_prye_cpp_005cd3f7
;   TerminatedCString s_CPrye_makeDrawDecision_d_005cd408
;   undefined4 DAT_005cd43f
;   undefined4 DAT_005cd447
;   undefined4 DAT_005cd44f
;   undefined4 DAT_005cd457
;   undefined4 DAT_005cd45f
;   undefined4 DAT_005cd463
;   undefined4 DAT_005e3524
;   undefined4 DAT_005e3528
;   undefined4 DAT_007e1a50
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ed36f0
;   undefined4 DAT_01ed36f4
;   ... and 3 more
;
; Called Functions:
;   FUN_0040c840
;   FUN_0040ce40
;   FUN_00433a60
;   FUN_004e4330
;   FUN_004fb9c0
;   FUN_004fc070
;   FUN_004fc350
;   FUN_004fc930
;   FUN_004fca20
;   FUN_0051ee10
;   FUN_0054cc90
;   FUN_0054e170
;   FUN_0054eac0
;   FUN_00585b20
;   FUN_00585cd0
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e6d0
        ;   Label: FUN_0051e6d0
    PUSH ESI                            ; 0051e6d1
    PUSH EDI                            ; 0051e6d2
    PUSH EBP                            ; 0051e6d3
    MOV EBP,ESP                         ; 0051e6d4
    SUB ESP,0xe4                        ; 0051e6d6
    AND ESP,0xfffffff8                  ; 0051e6dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0051e6df
    MOV EDX,dword ptr [EBX + 0x2f00]    ; 0051e6e2
    TEST EDX,EDX                        ; 0051e6e8
    JL 0x0051e6f1                       ; 0051e6ea
        ;   XREF to: 0051e6f1 (CONDITIONAL_JUMP)  ; LAB_0051e6f1
    CMP EDX,0x21                        ; 0051e6ec
    JL 0x0051e714                       ; 0051e6ef
        ;   XREF to: 0051e714 (CONDITIONAL_JUMP)  ; LAB_0051e714
    MOV ESI,0x5cd3f7                    ; 0051e6f1 | = "..\\core\\prye.cpp"
        ;   Label: LAB_0051e6f1
    MOV EDI,0xe24                       ; 0051e6f6
    PUSH 0x5cd408                       ; 0051e6fb | = "CPrye::makeDrawDecision - draw motion..."
    MOV dword ptr [0x01d71de0],ESI      ; 0051e700 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0051e706 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0051e70c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0051e711
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0051e714
        ;   Label: LAB_0051e714
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 0051e71c
    SHL EAX,0x3                         ; 0051e722
    MOV ESI,EAX                         ; 0051e725
    SHL EAX,0x3                         ; 0051e727
    SUB EAX,ESI                         ; 0051e72a
    CMP dword ptr [EBX + EAX*0x1 + 0x27c8],0x0 ; 0051e72c
    JNZ 0x0051e740                      ; 0051e734
        ;   XREF to: 0051e740 (CONDITIONAL_JUMP)  ; LAB_0051e740
    MOV EAX,dword ptr [EBX + 0x2f04]    ; 0051e736
    MOV dword ptr [ESP + 0x10],EAX      ; 0051e73c
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 0051e740
        ;   Label: LAB_0051e740
    SHL EAX,0x3                         ; 0051e746
    MOV ESI,EAX                         ; 0051e749
    SHL EAX,0x3                         ; 0051e74b
    SUB EAX,ESI                         ; 0051e74e
    CMP dword ptr [EBX + EAX*0x1 + 0x27cc],0x0 ; 0051e750
    JNZ 0x0051e76c                      ; 0051e758
        ;   XREF to: 0051e76c (CONDITIONAL_JUMP)  ; LAB_0051e76c
    FLD float ptr [EBX + 0x2f04]        ; 0051e75a
    FLD1                                ; 0051e760
    FSUBRP                              ; 0051e762
    FMUL float ptr [ESP + 0x10]         ; 0051e764
    FSTP float ptr [ESP + 0x10]         ; 0051e768
    PUSH 0x35                           ; 0051e76c
        ;   Label: LAB_0051e76c
    LEA ESI,[EBX + 0x158]               ; 0051e76e
    PUSH ESI                            ; 0051e774
    CALL FUN_004fc350                   ; 0051e775
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0xcc],EAX      ; 0051e77a
    ADD ESP,0x8                         ; 0051e781
    PUSH 0x36                           ; 0051e784
    PUSH ESI                            ; 0051e786
    CALL FUN_004fc350                   ; 0051e787
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051e78c
    FLD float ptr [ESP + 0xe8]          ; 0051e793
    ADD ESP,0x8                         ; 0051e79a
    PUSH 0x31                           ; 0051e79d
    FADD float ptr [ESP + 0xc8]         ; 0051e79f
    PUSH ESI                            ; 0051e7a6
    FSTP float ptr [ESP + 0xcc]         ; 0051e7a7
    CALL FUN_004fc350                   ; 0051e7ae
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051e7b3
    FLD float ptr [ESP + 0xe8]          ; 0051e7ba
    ADD ESP,0x8                         ; 0051e7c1
    PUSH 0x2f                           ; 0051e7c4
    FADD float ptr [ESP + 0xc8]         ; 0051e7c6
    PUSH ESI                            ; 0051e7cd
    FSTP float ptr [ESP + 0xcc]         ; 0051e7ce
    CALL FUN_004fc350                   ; 0051e7d5
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051e7da
    FLD float ptr [ESP + 0xe8]          ; 0051e7e1
    ADD ESP,0x8                         ; 0051e7e8
    FADD float ptr [ESP + 0xc4]         ; 0051e7eb
    FLD1                                ; 0051e7f2
    FSUBRP                              ; 0051e7f4
    FLD float ptr [ESP + 0x10]          ; 0051e7f6
    FXCH                                ; 0051e7fa
    FMUL ST1                            ; 0051e7fc
    FLDZ                                ; 0051e7fe
    FXCH                                ; 0051e800
    FSTP ST2                            ; 0051e802
    FXCH                                ; 0051e804
    FSTP float ptr [ESP + 0x10]         ; 0051e806
    FCOMP float ptr [ESP + 0x10]        ; 0051e80a
    FNSTSW AX                           ; 0051e80e
    SAHF                                ; 0051e810
    JBE 0x0051e819                      ; 0051e811
        ;   XREF to: 0051e819 (CONDITIONAL_JUMP)  ; LAB_0051e819
    XOR ESI,ESI                         ; 0051e813
    MOV dword ptr [ESP + 0x10],ESI      ; 0051e815
    CMP dword ptr [EBX + 0x2f00],0x11   ; 0051e819
        ;   Label: LAB_0051e819
    JNZ 0x0051e8aa                      ; 0051e820
        ;   XREF to: 0051e8aa (CONDITIONAL_JUMP)  ; LAB_0051e8aa
    LEA ESI,[EBX + 0x158]               ; 0051e826
    PUSH ESI                            ; 0051e82c
    CALL FUN_004fc930                   ; 0051e82d
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc930()
    MOV dword ptr [ESP + 0xe4],EAX      ; 0051e832
    FLD float ptr [ESP + 0xe4]          ; 0051e839
    ADD ESP,0x4                         ; 0051e840
    MOV EAX,0x3f800000                  ; 0051e843
    PUSH ESI                            ; 0051e848
    FSTP float ptr [ESP + 0x18]         ; 0051e849
    MOV dword ptr [ESP + 0xe0],EAX      ; 0051e84d
    CALL FUN_004fc070                   ; 0051e854
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051e859
    ADD ESP,0x4                         ; 0051e85c
    CMP EAX,0x22                        ; 0051e85f
    JNZ 0x0051ece7                      ; 0051e862
        ;   XREF to: 0051ece7 (CONDITIONAL_JUMP)  ; LAB_0051ece7
    FLD float ptr [ESP + 0x14]          ; 0051e868
        ;   Label: LAB_0051e868
    FADD double ptr [0x005cd44f]        ; 0051e86c | DAT_005cd44f
    FMUL double ptr [0x005cd447]        ; 0051e872 | DAT_005cd447
        ;   Label: LAB_0051e872
    FSTP float ptr [ESP + 0xdc]         ; 0051e878
    CMP dword ptr [ESP + 0xdc],0x3f800000 ; 0051e87f
        ;   Label: LAB_0051e87f
    JLE 0x0051ed0e                      ; 0051e88a
        ;   XREF to: 0051ed0e (CONDITIONAL_JUMP)  ; LAB_0051ed0e
    MOV dword ptr [ESP + 0xdc],0x3f800000 ; 0051e890
    FLD float ptr [ESP + 0x10]          ; 0051e89b
        ;   Label: LAB_0051e89b
    FMUL float ptr [ESP + 0xdc]         ; 0051e89f
    FSTP float ptr [ESP + 0x10]         ; 0051e8a6
    FLD float ptr [ESP + 0x10]          ; 0051e8aa
        ;   Label: LAB_0051e8aa
    FST double ptr [ESP]                ; 0051e8ae
    FCOMP double ptr [0x005cd457]       ; 0051e8b1 | DAT_005cd457
    FNSTSW AX                           ; 0051e8b7
    SAHF                                ; 0051e8b9
    JBE 0x0051ece0                      ; 0051e8ba
        ;   XREF to: 0051ece0 (CONDITIONAL_JUMP)  ; LAB_0051ece0
    FLD1                                ; 0051e8c0
    FCOMP double ptr [ESP]              ; 0051e8c2
    FNSTSW AX                           ; 0051e8c5
    SAHF                                ; 0051e8c7
    JNC 0x0051e8d2                      ; 0051e8c8
        ;   XREF to: 0051e8d2 (CONDITIONAL_JUMP)  ; LAB_0051e8d2
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 0051e8ca
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 0051e8d2
        ;   Label: LAB_0051e8d2
    SHL EAX,0x3                         ; 0051e8d8
    MOV ESI,EAX                         ; 0051e8db
    SHL EAX,0x3                         ; 0051e8dd
    SUB EAX,ESI                         ; 0051e8e0
    LEA ESI,[EBX + 0x27c8]              ; 0051e8e2
    ADD EAX,ESI                         ; 0051e8e8
    PUSH 0x1                            ; 0051e8ea
    ADD EAX,0x8                         ; 0051e8ec
    PUSH EAX                            ; 0051e8ef
    LEA ESI,[EBX + 0x158]               ; 0051e8f0
    PUSH ESI                            ; 0051e8f6
    CALL FUN_0054eac0                   ; 0051e8f7
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0051e8fc
    PUSH EAX                            ; 0051e8ff
    CALL FUN_004fb9c0                   ; 0051e900
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb9c0()
    ADD ESP,0xc                         ; 0051e905
    PUSH dword ptr [EBX + 0x2f04]       ; 0051e908
    PUSH EAX                            ; 0051e90e
    PUSH ESI                            ; 0051e90f
    MOV dword ptr [ESP + 0xe4],EAX      ; 0051e910
    CALL FUN_004fca20                   ; 0051e917
        ;   XREF to: 004fca20 (UNCONDITIONAL_CALL)  ; undefined FUN_004fca20()
    MOV dword ptr [ESP + 0xec],EAX      ; 0051e91c
    FLD float ptr [ESP + 0xec]          ; 0051e923
    ADD ESP,0xc                         ; 0051e92a
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 0051e92d
    FSTP float ptr [ESP + 0xd4]         ; 0051e933
    CMP EAX,0x9                         ; 0051e93a
    JNZ 0x0051e9c1                      ; 0051e93d
        ;   XREF to: 0051e9c1 (CONDITIONAL_JUMP)  ; LAB_0051e9c1
    FLD float ptr [EBX + 0x2f04]        ; 0051e943
    FLD1                                ; 0051e949
    FCOMPP                              ; 0051e94b
    FNSTSW AX                           ; 0051e94d
    SAHF                                ; 0051e94f
    JA 0x0051e9c1                       ; 0051e950
        ;   XREF to: 0051e9c1 (CONDITIONAL_JUMP)  ; LAB_0051e9c1
    CMP dword ptr [EBX + 0x20c2c],0x0   ; 0051e952
    JZ 0x0051e9c1                       ; 0051e959
        ;   XREF to: 0051e9c1 (CONDITIONAL_JUMP)  ; LAB_0051e9c1
    PUSH 0x1                            ; 0051e95b
    LEA EAX,[EBX + 0x2a00]              ; 0051e95d
    PUSH EAX                            ; 0051e963
    PUSH ESI                            ; 0051e964
    CALL FUN_0054eac0                   ; 0051e965
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 0051e96a
    PUSH EAX                            ; 0051e96d
    CALL FUN_004fb9c0                   ; 0051e96e
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb9c0()
    ADD ESP,0xc                         ; 0051e973
    PUSH 0x3f800000                     ; 0051e976
    MOV EDI,EAX                         ; 0051e97b
    PUSH 0x0                            ; 0051e97d
    MOV dword ptr [ESP + 0xe0],EAX      ; 0051e97f
    CALL FUN_0040ce40                   ; 0051e986
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051e98b
    FLD float ptr [ESP + 0xe8]          ; 0051e992
    ADD ESP,0x8                         ; 0051e999
    SUB ESP,0x4                         ; 0051e99c
    FSTP float ptr [ESP]                ; 0051e99f
    PUSH EDI                            ; 0051e9a2
    PUSH ESI                            ; 0051e9a3
    CALL FUN_004fca20                   ; 0051e9a4
        ;   XREF to: 004fca20 (UNCONDITIONAL_CALL)  ; undefined FUN_004fca20()
    MOV dword ptr [ESP + 0xec],EAX      ; 0051e9a9
    FLD float ptr [ESP + 0xec]          ; 0051e9b0
    ADD ESP,0xc                         ; 0051e9b7
    FSTP float ptr [ESP + 0xd4]         ; 0051e9ba
    PUSH 0x54bef0                       ; 0051e9c1 | LAB_0054bef0
        ;   Label: LAB_0051e9c1
    MOV ECX,dword ptr [0x01ed3720]      ; 0051e9c6 | DAT_01ed3720
    PUSH ECX                            ; 0051e9cc
    PUSH dword ptr [ESP + 0x18]         ; 0051e9cd
    MOV ESI,dword ptr [ESP + 0xe4]      ; 0051e9d1
    PUSH dword ptr [ESP + 0xe0]         ; 0051e9d8
    PUSH ESI                            ; 0051e9df
    LEA EAX,[EBX + 0x158]               ; 0051e9e0
    PUSH EAX                            ; 0051e9e6
    CALL FUN_0054cc90                   ; 0051e9e7
        ;   XREF to: 0054cc90 (UNCONDITIONAL_CALL)  ; undefined FUN_0054cc90()
    MOV EDI,dword ptr [EBX + 0x2f00]    ; 0051e9ec
    ADD ESP,0x18                        ; 0051e9f2
    TEST EDI,EDI                        ; 0051e9f5
    JNZ 0x0051ea9b                      ; 0051e9f7
        ;   XREF to: 0051ea9b (CONDITIONAL_JUMP)  ; LAB_0051ea9b
    MOV EAX,[0x01ed36f4]                ; 0051e9fd | DAT_01ed36f4
    LEA ESI,[EBX + 0x808]               ; 0051ea02
    SHL EAX,0x4                         ; 0051ea08
    ADD EAX,ESI                         ; 0051ea0b
    PUSH dword ptr [EBX + 0x2f04]       ; 0051ea0d
    PUSH EAX                            ; 0051ea13
    MOV EAX,[0x01ed3714]                ; 0051ea14 | DAT_01ed3714
    SHL EAX,0x4                         ; 0051ea19
    ADD EAX,ESI                         ; 0051ea1c
    PUSH EAX                            ; 0051ea1e
    MOV dword ptr [ESP + 0xd0],ESI      ; 0051ea1f
    LEA ESI,[ESP + 0xa4]                ; 0051ea26
    CALL FUN_00585b20                   ; 0051ea2d
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00585b20()
    MOV EAX,[0x01ed3714]                ; 0051ea32 | DAT_01ed3714
    SHL EAX,0x4                         ; 0051ea37
    LEA ESI,[ESP + 0xa4]                ; 0051ea3a
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 0051ea41
    ADD ESP,0xc                         ; 0051ea48
    MOVSD ES:EDI,ESI                    ; 0051ea4b
    MOVSD ES:EDI,ESI                    ; 0051ea4c
    MOVSD ES:EDI,ESI                    ; 0051ea4d
    MOVSD ES:EDI,ESI                    ; 0051ea4e
    MOV EAX,[0x01ed36f0]                ; 0051ea4f | DAT_01ed36f0
    MOV ESI,dword ptr [ESP + 0xc4]      ; 0051ea54
    SHL EAX,0x4                         ; 0051ea5b
    ADD EAX,ESI                         ; 0051ea5e
    PUSH dword ptr [EBX + 0x2f04]       ; 0051ea60
    PUSH EAX                            ; 0051ea66
    MOV EAX,[0x01ed3710]                ; 0051ea67 | DAT_01ed3710
    SHL EAX,0x4                         ; 0051ea6c
    ADD EAX,ESI                         ; 0051ea6f
    PUSH EAX                            ; 0051ea71
    LEA ESI,[ESP + 0xb4]                ; 0051ea72
    CALL FUN_00585b20                   ; 0051ea79
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00585b20()
    MOV EAX,[0x01ed3710]                ; 0051ea7e | DAT_01ed3710
    SHL EAX,0x4                         ; 0051ea83
    LEA ESI,[ESP + 0xb4]                ; 0051ea86
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 0051ea8d
    ADD ESP,0xc                         ; 0051ea94
    MOVSD ES:EDI,ESI                    ; 0051ea97
    MOVSD ES:EDI,ESI                    ; 0051ea98
    MOVSD ES:EDI,ESI                    ; 0051ea99
    MOVSD ES:EDI,ESI                    ; 0051ea9a
    MOV EAX,dword ptr [EBX + 0x2f00]    ; 0051ea9b
        ;   Label: LAB_0051ea9b
    CMP EAX,0x1                         ; 0051eaa1
    JNZ 0x0051ed2e                      ; 0051eaa4
        ;   XREF to: 0051ed2e (CONDITIONAL_JUMP)  ; LAB_0051ed2e
    MOV EDX,0x3f19999a                  ; 0051eaaa
        ;   Label: LAB_0051eaaa
    MOV EAX,dword ptr [EBX + 0x20be8]   ; 0051eaaf
    XOR EDI,EDI                         ; 0051eab5
    MOV dword ptr [ESP + 0xc],EAX       ; 0051eab7
    MOV dword ptr [ESP + 0x8],EDI       ; 0051eabb
    MOV dword ptr [ESP + 0xcc],EDX      ; 0051eabf
    FLD float ptr [ESP + 0xc]           ; 0051eac6
    MOV EAX,0x3e860a92                  ; 0051eaca
    FLDZ                                ; 0051eacf
    MOV dword ptr [ESP + 0xd0],EAX      ; 0051ead1
    FCOMPP                              ; 0051ead8
    FNSTSW AX                           ; 0051eada
    SAHF                                ; 0051eadc
    JBE 0x0051eaff                      ; 0051eadd
        ;   XREF to: 0051eaff (CONDITIONAL_JUMP)  ; LAB_0051eaff
    FLD float ptr [0x005cd45f]          ; 0051eadf | DAT_005cd45f
    FLD float ptr [ESP + 0xc]           ; 0051eae5
    FADD ST0,ST1                        ; 0051eae9
    FLD float ptr [0x005e3524]          ; 0051eaeb | DAT_005e3524
    FADDP ST2,ST0                       ; 0051eaf1
    FDIVRP                              ; 0051eaf3
    FMUL float ptr [0x005cd463]         ; 0051eaf5 | DAT_005cd463
    FSTP float ptr [ESP + 0x8]          ; 0051eafb
    FLD float ptr [ESP + 0xc]           ; 0051eaff
        ;   Label: LAB_0051eaff
    FLDZ                                ; 0051eb03
    FCOMPP                              ; 0051eb05
    FNSTSW AX                           ; 0051eb07
    SAHF                                ; 0051eb09
    JNC 0x0051eb2e                      ; 0051eb0a
        ;   XREF to: 0051eb2e (CONDITIONAL_JUMP)  ; LAB_0051eb2e
    FLD float ptr [ESP + 0xd0]          ; 0051eb0c
    FLD float ptr [ESP + 0xc]           ; 0051eb13
    FSUB ST0,ST1                        ; 0051eb17
    FLD float ptr [0x005e3528]          ; 0051eb19 | DAT_005e3528
    FSUBRP ST2,ST0                      ; 0051eb1f
    FDIVRP                              ; 0051eb21
    FMUL float ptr [ESP + 0xcc]         ; 0051eb23
    FSTP float ptr [ESP + 0x8]          ; 0051eb2a
    PUSH 0x3                            ; 0051eb2e
        ;   Label: LAB_0051eb2e
    PUSH EBX                            ; 0051eb30
    CALL FUN_00433a60                   ; 0051eb31
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00433a60()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051eb36
    FLD float ptr [ESP + 0xe8]          ; 0051eb3d
    FLD1                                ; 0051eb44
    FSUBRP                              ; 0051eb46
    ADD ESP,0x8                         ; 0051eb48
    FMUL float ptr [ESP + 0x10]         ; 0051eb4b
    FMUL float ptr [ESP + 0x8]          ; 0051eb4f
    FST float ptr [ESP + 0x8]           ; 0051eb53
    FLDZ                                ; 0051eb57
    FCOMPP                              ; 0051eb59
    FNSTSW AX                           ; 0051eb5b
    SAHF                                ; 0051eb5d
    JNC 0x0051eba0                      ; 0051eb5e
        ;   XREF to: 0051eba0 (CONDITIONAL_JUMP)  ; LAB_0051eba0
    PUSH 0x517ce0                       ; 0051eb60 | LAB_00517ce0
    MOV ECX,dword ptr [0x01ed3720]      ; 0051eb65 | DAT_01ed3720
    PUSH ECX                            ; 0051eb6b
    PUSH dword ptr [ESP + 0x10]         ; 0051eb6c
    LEA ESI,[ESP + 0x64]                ; 0051eb70
    PUSH dword ptr [ESP + 0x18]         ; 0051eb74
    CALL FUN_00585cd0                   ; 0051eb78
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00585cd0()
    ADD ESP,0x4                         ; 0051eb7d
    LEA EAX,[ESP + 0x24]                ; 0051eb80
    LEA EDI,[ESP + 0x24]                ; 0051eb84
    PUSH EAX                            ; 0051eb88
    LEA EAX,[EBX + 0x158]               ; 0051eb89
    LEA ESI,[ESP + 0x68]                ; 0051eb8f
    PUSH EAX                            ; 0051eb93
    MOVSD ES:EDI,ESI                    ; 0051eb94
    MOVSD ES:EDI,ESI                    ; 0051eb95
    MOVSD ES:EDI,ESI                    ; 0051eb96
    MOVSD ES:EDI,ESI                    ; 0051eb97
    CALL FUN_0054e170                   ; 0051eb98
        ;   XREF to: 0054e170 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e170()
    ADD ESP,0x14                        ; 0051eb9d
    PUSH 0x3                            ; 0051eba0
        ;   Label: LAB_0051eba0
    PUSH EBX                            ; 0051eba2
    CALL FUN_00433a60                   ; 0051eba3
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00433a60()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051eba8
    FLD float ptr [ESP + 0xe8]          ; 0051ebaf
    FLD1                                ; 0051ebb6
    FSUBRP                              ; 0051ebb8
    ADD ESP,0x8                         ; 0051ebba
    FMUL float ptr [ESP + 0x10]         ; 0051ebbd
    LEA ESI,[ESP + 0x88]                ; 0051ebc1
    LEA EDI,[ESP + 0x78]                ; 0051ebc8
    PUSH dword ptr [EBX + 0x20bec]      ; 0051ebcc
    FSTP float ptr [ESP + 0xc4]         ; 0051ebd2
    CALL FUN_00585d10                   ; 0051ebd9
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00585d10()
    LEA ESI,[ESP + 0x8c]                ; 0051ebde
    ADD ESP,0x4                         ; 0051ebe5
    MOVSD ES:EDI,ESI                    ; 0051ebe8
    MOVSD ES:EDI,ESI                    ; 0051ebe9
    MOVSD ES:EDI,ESI                    ; 0051ebea
    MOVSD ES:EDI,ESI                    ; 0051ebeb
    PUSH 0x517ce0                       ; 0051ebec | LAB_00517ce0
    MOV ESI,dword ptr [0x01ed3720]      ; 0051ebf1 | DAT_01ed3720
    PUSH ESI                            ; 0051ebf7
    LEA EAX,[ESP + 0x80]                ; 0051ebf8
    PUSH dword ptr [ESP + 0xc8]         ; 0051ebff
    PUSH EAX                            ; 0051ec06
    LEA EAX,[EBX + 0x158]               ; 0051ec07
    PUSH EAX                            ; 0051ec0d
    CALL FUN_0054e170                   ; 0051ec0e
        ;   XREF to: 0054e170 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e170()
    ADD ESP,0x14                        ; 0051ec13
    MOV EDI,dword ptr [0x007e1a50]      ; 0051ec16 | DAT_007e1a50
    PUSH EDI                            ; 0051ec1c
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 0051ec1d
    PUSH EAX                            ; 0051ec23
    CALL FUN_0040c840                   ; 0051ec24
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 0051ec29
    TEST EAX,EAX                        ; 0051ec2c
    JZ 0x0051ec44                       ; 0051ec2e
        ;   XREF to: 0051ec44 (CONDITIONAL_JUMP)  ; LAB_0051ec44
    CMP dword ptr [EBX + 0x20c24],0x0   ; 0051ec30
    JZ 0x0051ec44                       ; 0051ec37
        ;   XREF to: 0051ec44 (CONDITIONAL_JUMP)  ; LAB_0051ec44
    PUSH 0x0                            ; 0051ec39
    PUSH EBX                            ; 0051ec3b
    CALL FUN_0051ee10                   ; 0051ec3c
        ;   XREF to: 0051ee10 (UNCONDITIONAL_CALL)  ; undefined FUN_0051ee10()
    ADD ESP,0x8                         ; 0051ec41
    PUSH 0x1                            ; 0051ec44
        ;   Label: LAB_0051ec44
    PUSH EBX                            ; 0051ec46
    CALL FUN_0051ee10                   ; 0051ec47
        ;   XREF to: 0051ee10 (UNCONDITIONAL_CALL)  ; undefined FUN_0051ee10()
    MOV ESI,dword ptr [0x01ed3714]      ; 0051ec4c | DAT_01ed3714
    MOV EAX,[0x01ed36f4]                ; 0051ec52 | DAT_01ed36f4
    SHL ESI,0x4                         ; 0051ec57
    SHL EAX,0x4                         ; 0051ec5a
    LEA EDI,[ESI + EBX*0x1 + 0x808]     ; 0051ec5d
    LEA ESI,[EBX + EAX*0x1 + 0x808]     ; 0051ec64
    MOV EAX,[0x01ed36f0]                ; 0051ec6b | DAT_01ed36f0
    MOVSD ES:EDI,ESI                    ; 0051ec70
    MOVSD ES:EDI,ESI                    ; 0051ec71
    MOVSD ES:EDI,ESI                    ; 0051ec72
    MOVSD ES:EDI,ESI                    ; 0051ec73
    SHL EAX,0x4                         ; 0051ec74
    LEA ESI,[EBX + EAX*0x1]             ; 0051ec77
    MOV EAX,[0x01ed3710]                ; 0051ec7a | DAT_01ed3710
    SHL EAX,0x4                         ; 0051ec7f
    LEA ESI,[ESI + 0x808]               ; 0051ec82
    LEA EDI,[EBX + EAX*0x1 + 0x808]     ; 0051ec88
    ADD ESP,0x8                         ; 0051ec8f
    MOVSD ES:EDI,ESI                    ; 0051ec92
    MOVSD ES:EDI,ESI                    ; 0051ec93
    MOVSD ES:EDI,ESI                    ; 0051ec94
    MOVSD ES:EDI,ESI                    ; 0051ec95
    MOV ECX,dword ptr [EBX + 0x2f00]    ; 0051ec96
        ;   Label: LAB_0051ec96
    CMP ECX,0x3                         ; 0051ec9c
    JZ 0x0051ed4e                       ; 0051ec9f
        ;   XREF to: 0051ed4e (CONDITIONAL_JUMP)  ; LAB_0051ed4e
    CMP ECX,0x4                         ; 0051eca5
    JZ 0x0051ed4e                       ; 0051eca8
        ;   XREF to: 0051ed4e (CONDITIONAL_JUMP)  ; LAB_0051ed4e
    CMP ECX,0x9                         ; 0051ecae
    JZ 0x0051ed4e                       ; 0051ecb1
        ;   XREF to: 0051ed4e (CONDITIONAL_JUMP)  ; LAB_0051ed4e
    CMP ECX,0x6                         ; 0051ecb7
    JZ 0x0051ed4e                       ; 0051ecba
        ;   XREF to: 0051ed4e (CONDITIONAL_JUMP)  ; LAB_0051ed4e
    CMP ECX,0x7                         ; 0051ecc0
    JZ 0x0051ed4e                       ; 0051ecc3
        ;   XREF to: 0051ed4e (CONDITIONAL_JUMP)  ; LAB_0051ed4e
    CMP ECX,0x14                        ; 0051ecc9
    JZ 0x0051ed4e                       ; 0051eccc
        ;   XREF to: 0051ed4e (CONDITIONAL_JUMP)  ; LAB_0051ed4e
    CMP ECX,0x15                        ; 0051ecd2
    JZ 0x0051ed4e                       ; 0051ecd5
        ;   XREF to: 0051ed4e (CONDITIONAL_JUMP)  ; LAB_0051ed4e
    CMP ECX,0x8                         ; 0051ecdb
    JZ 0x0051ed4e                       ; 0051ecde
        ;   XREF to: 0051ed4e (CONDITIONAL_JUMP)  ; LAB_0051ed4e
    MOV ESP,EBP                         ; 0051ece0
        ;   Label: LAB_0051ece0
    POP EBP                             ; 0051ece2
    POP EDI                             ; 0051ece3
    POP ESI                             ; 0051ece4
    POP EBX                             ; 0051ece5
    RET                                 ; 0051ece6
    CMP EAX,0x23                        ; 0051ece7
        ;   Label: LAB_0051ece7
    JZ 0x0051e868                       ; 0051ecea
        ;   XREF to: 0051e868 (CONDITIONAL_JUMP)  ; LAB_0051e868
    CMP EAX,0x24                        ; 0051ecf0
    JNZ 0x0051ed04                      ; 0051ecf3
        ;   XREF to: 0051ed04 (CONDITIONAL_JUMP)  ; LAB_0051ed04
    FLD float ptr [ESP + 0x14]          ; 0051ecf5
        ;   Label: LAB_0051ecf5
    FSUBR double ptr [0x005cd43f]       ; 0051ecf9 | DAT_005cd43f
    JMP 0x0051e872                      ; 0051ecff
        ;   XREF to: 0051e872 (UNCONDITIONAL_JUMP)  ; LAB_0051e872
    CMP EAX,0x25                        ; 0051ed04
        ;   Label: LAB_0051ed04
    JZ 0x0051ecf5                       ; 0051ed07
        ;   XREF to: 0051ecf5 (CONDITIONAL_JUMP)  ; LAB_0051ecf5
    JMP 0x0051e87f                      ; 0051ed09
        ;   XREF to: 0051e87f (UNCONDITIONAL_JUMP)  ; LAB_0051e87f
    FLDZ                                ; 0051ed0e
        ;   Label: LAB_0051ed0e
    FCOMP float ptr [ESP + 0xdc]        ; 0051ed10
    FNSTSW AX                           ; 0051ed17
    SAHF                                ; 0051ed19
    JBE 0x0051e89b                      ; 0051ed1a
        ;   XREF to: 0051e89b (CONDITIONAL_JUMP)  ; LAB_0051e89b
    XOR ECX,ECX                         ; 0051ed20
    MOV dword ptr [ESP + 0xdc],ECX      ; 0051ed22
    JMP 0x0051e89b                      ; 0051ed29
        ;   XREF to: 0051e89b (UNCONDITIONAL_JUMP)  ; LAB_0051e89b
    CMP EAX,0x16                        ; 0051ed2e
        ;   Label: LAB_0051ed2e
    JZ 0x0051eaaa                       ; 0051ed31
        ;   XREF to: 0051eaaa (CONDITIONAL_JUMP)  ; LAB_0051eaaa
    CMP EAX,0x19                        ; 0051ed37
    JZ 0x0051eaaa                       ; 0051ed3a
        ;   XREF to: 0051eaaa (CONDITIONAL_JUMP)  ; LAB_0051eaaa
    CMP EAX,0x1a                        ; 0051ed40
    JZ 0x0051eaaa                       ; 0051ed43
        ;   XREF to: 0051eaaa (CONDITIONAL_JUMP)  ; LAB_0051eaaa
    JMP 0x0051ec96                      ; 0051ed49
        ;   XREF to: 0051ec96 (UNCONDITIONAL_JUMP)  ; LAB_0051ec96
    PUSH 0x3                            ; 0051ed4e
        ;   Label: LAB_0051ed4e
    PUSH EBX                            ; 0051ed50
    CALL FUN_00433a60                   ; 0051ed51
        ;   XREF to: 00433a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00433a60()
    MOV dword ptr [ESP + 0xe8],EAX      ; 0051ed56
    FLD float ptr [ESP + 0xe8]          ; 0051ed5d
    FLD1                                ; 0051ed64
    FSUBRP                              ; 0051ed66
    ADD ESP,0x8                         ; 0051ed68
    FMUL float ptr [ESP + 0x10]         ; 0051ed6b
    LEA ESI,[ESP + 0x48]                ; 0051ed6f
    PUSH dword ptr [EBX + 0x20be8]      ; 0051ed73
    FSTP float ptr [ESP + 0xcc]         ; 0051ed79
    CALL FUN_00585cd0                   ; 0051ed80
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00585cd0()
    ADD ESP,0x4                         ; 0051ed85
    PUSH 0x517ce0                       ; 0051ed88 | LAB_00517ce0
    MOV EAX,[0x01ed3720]                ; 0051ed8d | DAT_01ed3720
    PUSH EAX                            ; 0051ed92
    PUSH dword ptr [ESP + 0xd0]         ; 0051ed93
    LEA EAX,[ESP + 0x44]                ; 0051ed9a
    LEA EDI,[ESP + 0x44]                ; 0051ed9e
    PUSH EAX                            ; 0051eda2
    LEA EAX,[EBX + 0x158]               ; 0051eda3
    LEA ESI,[ESP + 0x58]                ; 0051eda9
    PUSH EAX                            ; 0051edad
    MOVSD ES:EDI,ESI                    ; 0051edae
    MOVSD ES:EDI,ESI                    ; 0051edaf
    MOVSD ES:EDI,ESI                    ; 0051edb0
    MOVSD ES:EDI,ESI                    ; 0051edb1
    MOV dword ptr [ESP + 0xf4],EAX      ; 0051edb2
    CALL FUN_0054e170                   ; 0051edb9
        ;   XREF to: 0054e170 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e170()
    ADD ESP,0x14                        ; 0051edbe
    LEA ESI,[ESP + 0x68]                ; 0051edc1
    PUSH dword ptr [EBX + 0x20bec]      ; 0051edc5
    CALL FUN_00585d10                   ; 0051edcb
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00585d10()
    ADD ESP,0x4                         ; 0051edd0
    PUSH 0x517ce0                       ; 0051edd3 | LAB_00517ce0
    MOV ECX,dword ptr [0x01ed3720]      ; 0051edd8 | DAT_01ed3720
    PUSH ECX                            ; 0051edde
    LEA EAX,[ESP + 0x30]                ; 0051eddf
    PUSH dword ptr [ESP + 0xd0]         ; 0051ede3
    LEA EDI,[ESP + 0x34]                ; 0051edea
    PUSH EAX                            ; 0051edee
    MOV EBX,dword ptr [ESP + 0xf0]      ; 0051edef
    LEA ESI,[ESP + 0x78]                ; 0051edf6
    PUSH EBX                            ; 0051edfa
    MOVSD ES:EDI,ESI                    ; 0051edfb
    MOVSD ES:EDI,ESI                    ; 0051edfc
    MOVSD ES:EDI,ESI                    ; 0051edfd
    MOVSD ES:EDI,ESI                    ; 0051edfe
    CALL FUN_0054e170                   ; 0051edff
        ;   XREF to: 0054e170 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e170()
    ADD ESP,0x14                        ; 0051ee04
    MOV ESP,EBP                         ; 0051ee07
    POP EBP                             ; 0051ee09
    POP EDI                             ; 0051ee0a
    POP ESI                             ; 0051ee0b
    POP EBX                             ; 0051ee0c
    RET                                 ; 0051ee0d

