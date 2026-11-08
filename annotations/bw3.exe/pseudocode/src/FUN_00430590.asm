; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00430590(int param_1,int param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0xc8]:1  local_c8
; undefined        Stack[-0x98]:1  local_98
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x6c]:4  local_6c
; undefined        Stack[-0x68]:1  local_68
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[13]:
;   FUN_00419550 at 004196bb
;   FUN_00428810 at 00428973
;   FUN_00430520 at 00430574
;   FUN_00444110 at 00444249
;   FUN_00445730 at 004457ea
;   FUN_00458680 at 00458760
;   FUN_004c5f10 at 004c5fe5
;   FUN_004c9140 at 004c9220
;   FUN_004d7bd0 at 004d7cb5
;   FUN_004f9050 at 004f90dc
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_007e2bac
;
; Called Functions:
;   FUN_004166d0
;   FUN_00416750
;   FUN_0054f360
;   FUN_00583260
;   FUN_005833e0
;   FUN_00583b10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430590
        ;   Label: FUN_00430590
    PUSH ESI                            ; 00430591
    PUSH EDI                            ; 00430592
    PUSH EBP                            ; 00430593
    MOV EBP,ESP                         ; 00430594
    SUB ESP,0xb8                        ; 00430596
    SUB EBP,0x72                        ; 0043059c
    MOV EAX,dword ptr [EBP + 0x86]      ; 0043059f
    MOV EBX,dword ptr [EBP + 0x86]      ; 004305a5
    MOV DL,byte ptr [EAX + 0x24a8]      ; 004305ab
    ADD EBX,0x158                       ; 004305b1
    TEST DL,DL                          ; 004305b7
    JZ 0x004305d5                       ; 004305b9
        ;   XREF to: 004305d5 (CONDITIONAL_JUMP)  ; LAB_004305d5
    MOV EAX,dword ptr [EBP + 0x8e]      ; 004305bb
    MOV EDX,dword ptr [EBP + 0x86]      ; 004305c1
    SHL EAX,0x2                         ; 004305c7
    ADD EAX,EDX                         ; 004305ca
    CMP dword ptr [EAX + 0x2298],0x0    ; 004305cc
    JNZ 0x004305dd                      ; 004305d3
        ;   XREF to: 004305dd (CONDITIONAL_JUMP)  ; LAB_004305dd
    LEA ESP,[EBP + 0x72]                ; 004305d5
        ;   Label: LAB_004305d5
    POP EBP                             ; 004305d8
    POP EDI                             ; 004305d9
    POP ESI                             ; 004305da
    POP EBX                             ; 004305db
    RET                                 ; 004305dc
    MOV ESI,dword ptr [EBP + 0x8e]      ; 004305dd
        ;   Label: LAB_004305dd
    PUSH ESI                            ; 004305e3
    MOV EDI,dword ptr [EBP + 0x8a]      ; 004305e4
    PUSH EDI                            ; 004305ea
    PUSH EBX                            ; 004305eb
    CALL FUN_0054f360                   ; 004305ec
        ;   XREF to: 0054f360 (UNCONDITIONAL_CALL)  ; undefined FUN_0054f360()
    XOR EAX,EAX                         ; 004305f1
    MOV dword ptr [EBP + 0x6a],EAX      ; 004305f3
    MOV EAX,dword ptr [EBP + 0x86]      ; 004305f6
    MOV EDX,dword ptr [EAX + 0x3284]    ; 004305fc
    ADD ESP,0xc                         ; 00430602
    TEST EDX,EDX                        ; 00430605
    JLE 0x00430645                      ; 00430607
        ;   XREF to: 00430645 (CONDITIONAL_JUMP)  ; LAB_00430645
    MOV EBX,dword ptr [EBP + 0x86]      ; 00430609
    ADD EAX,0xfd8                       ; 0043060f
    ADD EBX,0x3288                      ; 00430614
    MOV dword ptr [EBP + 0x62],EAX      ; 0043061a
    MOV ECX,dword ptr [EBP + 0x8e]      ; 0043061d
        ;   Label: LAB_0043061d
    CMP ECX,dword ptr [EBX]             ; 00430623
    JZ 0x004306ed                       ; 00430625
        ;   XREF to: 004306ed (CONDITIONAL_JUMP)  ; LAB_004306ed
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0043062b
        ;   Label: LAB_0043062b
    MOV ESI,dword ptr [EBP + 0x86]      ; 0043062e
    ADD EBX,0x38                        ; 00430634
    INC ECX                             ; 00430637
    MOV EDI,dword ptr [ESI + 0x3284]    ; 00430638
    MOV dword ptr [EBP + 0x6a],ECX      ; 0043063e
    CMP ECX,EDI                         ; 00430641
    JL 0x0043061d                       ; 00430643
        ;   XREF to: 0043061d (CONDITIONAL_JUMP)  ; LAB_0043061d
    XOR EAX,EAX                         ; 00430645
        ;   Label: LAB_00430645
    MOV dword ptr [EBP + 0x6e],EAX      ; 00430647
    MOV EAX,dword ptr [EBP + 0x86]      ; 0043064a
    CMP dword ptr [EAX + 0x33a0],0x0    ; 00430650
    JLE 0x00430695                      ; 00430657
        ;   XREF to: 00430695 (CONDITIONAL_JUMP)  ; LAB_00430695
    MOV EBX,dword ptr [EBP + 0x86]      ; 00430659
    ADD EAX,0xfd8                       ; 0043065f
    ADD EBX,0x33ac                      ; 00430664
    MOV dword ptr [EBP + 0x66],EAX      ; 0043066a
    MOV ESI,dword ptr [EBP + 0x8e]      ; 0043066d
        ;   Label: LAB_0043066d
    CMP ESI,dword ptr [EBX]             ; 00430673
    JZ 0x00430765                       ; 00430675
        ;   XREF to: 00430765 (CONDITIONAL_JUMP)  ; LAB_00430765
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0043067b
        ;   Label: LAB_0043067b
    MOV ESI,dword ptr [EBP + 0x86]      ; 0043067e
    ADD EBX,0x18                        ; 00430684
    INC EDX                             ; 00430687
    MOV ECX,dword ptr [ESI + 0x33a0]    ; 00430688
    MOV dword ptr [EBP + 0x6e],EDX      ; 0043068e
    CMP EDX,ECX                         ; 00430691
    JL 0x0043066d                       ; 00430693
        ;   XREF to: 0043066d (CONDITIONAL_JUMP)  ; LAB_0043066d
    MOV EBX,dword ptr [EBP + 0x86]      ; 00430695
        ;   Label: LAB_00430695
    MOV EDI,dword ptr [EBP + 0x8e]      ; 0043069b
    XOR ESI,ESI                         ; 004306a1
    CMP EDI,dword ptr [EBX + 0x25ac]    ; 004306a3
        ;   Label: LAB_004306a3
    JNZ 0x004306ca                      ; 004306a9
        ;   XREF to: 004306ca (CONDITIONAL_JUMP)  ; LAB_004306ca
    PUSH 0x0                            ; 004306ab
    MOV EAX,dword ptr [EBP + 0x86]      ; 004306ad
    PUSH ESI                            ; 004306b3
    MOV EDX,dword ptr [EBP + 0x86]      ; 004306b4
    MOV EAX,dword ptr [EAX + 0x154]     ; 004306ba
    PUSH EDX                            ; 004306c0
    CALL dword ptr [EAX + 0x128]        ; 004306c1
    ADD ESP,0xc                         ; 004306c7
    INC ESI                             ; 004306ca
        ;   Label: LAB_004306ca
    ADD EBX,0x78                        ; 004306cb
    CMP ESI,0x2                         ; 004306ce
    JL 0x004306a3                       ; 004306d1
        ;   XREF to: 004306a3 (CONDITIONAL_JUMP)  ; LAB_004306a3
    MOV EAX,dword ptr [EBP + 0x8a]      ; 004306d3
    MOV EBX,dword ptr [EBP + 0x92]      ; 004306d9
    MOV dword ptr [EAX + 0x158],EBX     ; 004306df
    LEA ESP,[EBP + 0x72]                ; 004306e5
    POP EBP                             ; 004306e8
    POP EDI                             ; 004306e9
    POP ESI                             ; 004306ea
    POP EBX                             ; 004306eb
    RET                                 ; 004306ec
    IMUL EAX,dword ptr [EBX + 0x4],0x30 ; 004306ed
        ;   Label: LAB_004306ed
    ADD EAX,dword ptr [EBP + 0x62]      ; 004306f1
    PUSH EAX                            ; 004306f4
    LEA EAX,[EBX + 0x8]                 ; 004306f5
    PUSH EAX                            ; 004306f8
    LEA ESI,[EBP + -0x46]               ; 004306f9
    LEA EDI,[EBP + -0x16]               ; 004306fc
    CALL FUN_005833e0                   ; 004306ff
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 00430704
    LEA ESI,[EBP + -0x46]               ; 00430709
    LEA EAX,[EBP + -0x16]               ; 0043070c
    ADD ESP,0x8                         ; 0043070f
    MOVSD.REP ES:EDI,ESI                ; 00430712
    PUSH EAX                            ; 00430714
    LEA ESI,[EBP + 0x1a]                ; 00430715
    CALL FUN_00583b10                   ; 00430718
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    ADD ESP,0x4                         ; 0043071d
    LEA EAX,[EBP + 0x26]                ; 00430720
    PUSH EAX                            ; 00430723
    MOV EAX,dword ptr [EBP + -0xa]      ; 00430724
    MOV dword ptr [EBP + 0x32],EAX      ; 00430727
    MOV EAX,dword ptr [EBP + 0x6]       ; 0043072a
    LEA EDI,[EBP + 0x26]                ; 0043072d
    MOV dword ptr [EBP + 0x36],EAX      ; 00430730
    MOV EAX,dword ptr [EBP + 0x16]      ; 00430733
    LEA ESI,[EBP + 0x1a]                ; 00430736
    MOV dword ptr [EBP + 0x3a],EAX      ; 00430739
    LEA EAX,[EBP + 0x3e]                ; 0043073c
    MOVSD ES:EDI,ESI                    ; 0043073f
    MOVSD ES:EDI,ESI                    ; 00430740
    MOVSD ES:EDI,ESI                    ; 00430741
    PUSH EAX                            ; 00430742
    LEA EDI,[EBP + 0x3e]                ; 00430743
    PUSH 0x7e2bac                       ; 00430746 | DAT_007e2bac
    MOV EAX,dword ptr [EBP + 0x8a]      ; 0043074b
    LEA ESI,[EBP + 0x32]                ; 00430751
    PUSH EAX                            ; 00430754
    MOVSD ES:EDI,ESI                    ; 00430755
    MOVSD ES:EDI,ESI                    ; 00430756
    MOVSD ES:EDI,ESI                    ; 00430757
    CALL FUN_004166d0                   ; 00430758
        ;   XREF to: 004166d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004166d0()
    ADD ESP,0x10                        ; 0043075d
    JMP 0x0043062b                      ; 00430760
        ;   XREF to: 0043062b (UNCONDITIONAL_JUMP)  ; LAB_0043062b
    MOV EDI,dword ptr [EBX + 0x4]       ; 00430765
        ;   Label: LAB_00430765
    TEST EDI,EDI                        ; 00430768
    JL 0x0043067b                       ; 0043076a
        ;   XREF to: 0043067b (CONDITIONAL_JUMP)  ; LAB_0043067b
    IMUL EAX,EDI,0x30                   ; 00430770
    ADD EAX,dword ptr [EBP + 0x66]      ; 00430773
    PUSH EAX                            ; 00430776
    LEA EAX,[EBX + 0x8]                 ; 00430777
    PUSH EAX                            ; 0043077a
    LEA ESI,[EBP + 0x56]                ; 0043077b
    LEA EDI,[EBP + 0x4a]                ; 0043077e
    CALL FUN_00583260                   ; 00430781
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    LEA ESI,[EBP + 0x56]                ; 00430786
    LEA EAX,[EBP + 0x4a]                ; 00430789
    ADD ESP,0x8                         ; 0043078c
    MOVSD ES:EDI,ESI                    ; 0043078f
    MOVSD ES:EDI,ESI                    ; 00430790
    MOVSD ES:EDI,ESI                    ; 00430791
    PUSH EAX                            ; 00430792
    MOV ESI,dword ptr [EBP + 0x8a]      ; 00430793
    PUSH ESI                            ; 00430799
    CALL FUN_00416750                   ; 0043079a
        ;   XREF to: 00416750 (UNCONDITIONAL_CALL)  ; undefined FUN_00416750()
    ADD ESP,0x8                         ; 0043079f
    JMP 0x0043067b                      ; 004307a2
        ;   XREF to: 0043067b (UNCONDITIONAL_JUMP)  ; LAB_0043067b

