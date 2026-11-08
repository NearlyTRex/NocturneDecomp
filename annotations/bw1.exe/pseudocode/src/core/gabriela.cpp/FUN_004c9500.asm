; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004c9500(int param_1)
;
; Local Variables:
; undefined        Stack[-0x100]:1  local_100
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004c65f0 at 004c746d
;
; Referenced Globals:
;   TerminatedCString s_core_gabriela_cpp_005e10ee
;   TerminatedCString s_Hell_froze_invalid_pickU_005e1103
;   undefined4 DAT_005e112c
;   undefined4 DAT_005e1134
;   undefined4 DAT_005fb430
;   undefined4 DAT_00622c18
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01fcf2cc
;   undefined4 DAT_01fcf2d0
;
; Called Functions:
;   FUN_00408b40
;   FUN_00408bb0
;   FUN_005030e0
;   FUN_005247c0
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9500
        ;   Label: FUN_004c9500
    PUSH ESI                            ; 004c9501
    PUSH EDI                            ; 004c9502
    PUSH EBP                            ; 004c9503
    MOV EBP,ESP                         ; 004c9504
    SUB ESP,0xf0                        ; 004c9506
    AND ESP,0xfffffff8                  ; 004c950c
    PUSH 0x5fb430                       ; 004c950f | DAT_005fb430
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9514
    PUSH 0x4                            ; 004c9517
    MOV dword ptr [EAX + 0x1ff78],0x0   ; 004c9519
    LEA EAX,[ESP + 0x8]                 ; 004c9523
    PUSH EAX                            ; 004c9527
    MOV EBX,0x3ff5c28f                  ; 004c9528
    LEA EDI,[ESP + 0xcc]                ; 004c952d
    CALL FUN_005c0357                   ; 004c9534
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    MOV EDX,0xbda3d70a                  ; 004c9539
    MOV ECX,0x3ee147ae                  ; 004c953e
    ADD ESP,0xc                         ; 004c9543
    LEA EAX,[ESP + 0x60]                ; 004c9546
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c954a
    PUSH EAX                            ; 004c954d
    MOV dword ptr [ESP + 0x64],EDX      ; 004c954e
    MOV dword ptr [ESP + 0x68],ECX      ; 004c9552
    PUSH ESI                            ; 004c9556
    LEA ESI,[ESP + 0x5c]                ; 004c9557
    MOV dword ptr [ESP + 0x70],EBX      ; 004c955b
    CALL FUN_00408b40                   ; 004c955f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x5c]                ; 004c9564
    LEA EDX,[ESP + 0xc8]                ; 004c9568
    ADD ESP,0x8                         ; 004c956f
    LEA EAX,[ESP + 0xc]                 ; 004c9572
    MOVSD ES:EDI,ESI                    ; 004c9576
    MOVSD ES:EDI,ESI                    ; 004c9577
    MOVSD ES:EDI,ESI                    ; 004c9578
    CMP EAX,EDX                         ; 004c9579
    JZ 0x004c959e                       ; 004c957b
        ;   XREF to: 004c959e (CONDITIONAL_JUMP)  ; LAB_004c959e
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004c957d
    MOV dword ptr [ESP + 0xc],EAX       ; 004c9584
    MOV EAX,dword ptr [ESP + 0xc4]      ; 004c9588
    MOV dword ptr [ESP + 0x10],EAX      ; 004c958f
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004c9593
    MOV dword ptr [ESP + 0x14],EAX      ; 004c959a
    MOV EDI,0xbf266666                  ; 004c959e
        ;   Label: LAB_004c959e
    XOR EAX,EAX                         ; 004c95a3
    MOV EDX,0x4007ae14                  ; 004c95a5
    MOV dword ptr [ESP + 0xac],EAX      ; 004c95aa
    LEA EAX,[ESP + 0xa8]                ; 004c95b1
    MOV ECX,dword ptr [EBP + 0x14]      ; 004c95b8
    PUSH EAX                            ; 004c95bb
    LEA ESI,[ESP + 0xb8]                ; 004c95bc
    MOV dword ptr [ESP + 0xac],EDI      ; 004c95c3
    PUSH ECX                            ; 004c95ca
    MOV dword ptr [ESP + 0xb8],EDX      ; 004c95cb
    LEA EDI,[ESP + 0x38]                ; 004c95d2
    CALL FUN_00408b40                   ; 004c95d6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0xbc]                ; 004c95db
    LEA EAX,[ESP + 0x38]                ; 004c95e2
    ADD ESP,0x8                         ; 004c95e6
    LEA EDX,[ESP + 0x18]                ; 004c95e9
    MOVSD ES:EDI,ESI                    ; 004c95ed
    MOVSD ES:EDI,ESI                    ; 004c95ee
    MOVSD ES:EDI,ESI                    ; 004c95ef
    CMP EDX,EAX                         ; 004c95f0
    JZ 0x004c960c                       ; 004c95f2
        ;   XREF to: 004c960c (CONDITIONAL_JUMP)  ; LAB_004c960c
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c95f4
    MOV dword ptr [ESP + 0x18],EAX      ; 004c95f8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c95fc
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c9600
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c9604
    MOV dword ptr [ESP + 0x20],EAX      ; 004c9608
    MOV EDI,0x40000000                  ; 004c960c
        ;   Label: LAB_004c960c
    LEA EAX,[ESP + 0x90]                ; 004c9611
    XOR EBX,EBX                         ; 004c9618
    LEA ESI,[ESP + 0x9c]                ; 004c961a
    MOV dword ptr [ESP + 0x90],EBX      ; 004c9621
    PUSH EAX                            ; 004c9628
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9629
    MOV dword ptr [ESP + 0x98],EBX      ; 004c962c
    PUSH EAX                            ; 004c9633
    MOV dword ptr [ESP + 0xa0],EDI      ; 004c9634
    LEA EDI,[ESP + 0x44]                ; 004c963b
    CALL FUN_00408b40                   ; 004c963f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0xa4]                ; 004c9644
    LEA EAX,[ESP + 0x44]                ; 004c964b
    ADD ESP,0x8                         ; 004c964f
    LEA EDX,[ESP + 0x24]                ; 004c9652
    MOVSD ES:EDI,ESI                    ; 004c9656
    MOVSD ES:EDI,ESI                    ; 004c9657
    MOVSD ES:EDI,ESI                    ; 004c9658
    CMP EDX,EAX                         ; 004c9659
    JNZ 0x004c96e9                      ; 004c965b
        ;   XREF to: 004c96e9 (CONDITIONAL_JUMP)  ; LAB_004c96e9
    MOV EDX,0x40800000                  ; 004c9661
        ;   Label: LAB_004c9661
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9666
    XOR ECX,ECX                         ; 004c9669
    MOV dword ptr [ESP + 0xd8],EDX      ; 004c966b
    MOV dword ptr [ESP + 0xe8],ECX      ; 004c9672
    ADD EAX,0x20                        ; 004c9679
    MOV dword ptr [ESP + 0xec],ECX      ; 004c967c
    MOV dword ptr [ESP + 0xd4],EAX      ; 004c9683
    MOV EAX,[0x00622c18]                ; 004c968a | DAT_00622c18
        ;   Label: LAB_004c968a
    MOV EDX,dword ptr [ESP + 0xe8]      ; 004c968f
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 004c9696 | DAT_01fcf2cc
    JGE 0x004c98ce                      ; 004c969c
        ;   XREF to: 004c98ce (CONDITIONAL_JUMP)  ; LAB_004c98ce
    ADD EAX,dword ptr [ESP + 0xec]      ; 004c96a2
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004c96a9 | DAT_01fcf2d0
    PUSH EBX                            ; 004c96af
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c96b0
    CALL dword ptr [EAX + 0x94]         ; 004c96b6
    ADD ESP,0x4                         ; 004c96bc
    TEST EAX,EAX                        ; 004c96bf
    JZ 0x004c988c                       ; 004c96c1
        ;   XREF to: 004c988c (CONDITIONAL_JUMP)  ; LAB_004c988c
    MOV ESI,dword ptr [ESP + 0xe8]      ; 004c96c7
        ;   Label: LAB_004c96c7
    MOV EBX,dword ptr [ESP + 0xec]      ; 004c96ce
    INC ESI                             ; 004c96d5
    ADD EBX,0x4                         ; 004c96d6
    MOV dword ptr [ESP + 0xe8],ESI      ; 004c96d9
    MOV dword ptr [ESP + 0xec],EBX      ; 004c96e0
    JMP 0x004c968a                      ; 004c96e7
        ;   XREF to: 004c968a (UNCONDITIONAL_JUMP)  ; LAB_004c968a
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c96e9
        ;   Label: LAB_004c96e9
    MOV dword ptr [ESP + 0x24],EAX      ; 004c96ed
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c96f1
    MOV dword ptr [ESP + 0x28],EAX      ; 004c96f5
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c96f9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004c96fd
    JMP 0x004c9661                      ; 004c9701
        ;   XREF to: 004c9661 (UNCONDITIONAL_JUMP)  ; LAB_004c9661
    CMP dword ptr [ESI + 0x25b0],0x0    ; 004c9706
        ;   Label: LAB_004c9706
    JNZ 0x004c96c7                      ; 004c970d
        ;   XREF to: 004c96c7 (CONDITIONAL_JUMP)  ; LAB_004c96c7
    MOV ECX,dword ptr [ESP + 0xe0]      ; 004c970f
        ;   Label: LAB_004c970f
    IMUL EDX,ECX,0xc                    ; 004c9716
    MOV EAX,ESP                         ; 004c9719
    ADD EAX,EDX                         ; 004c971b
    LEA EDX,[EBX + 0x20]                ; 004c971d
    LEA EDI,[ESP + 0x78]                ; 004c9720
    LEA ESI,[ESP + 0x6c]                ; 004c9724
    FLD float ptr [EDX]                 ; 004c9728
    FLD float ptr [EDX + 0x4]           ; 004c972a
    FLD float ptr [EDX + 0x8]           ; 004c972d
    FXCH ST2                            ; 004c9730
    FSUB float ptr [EAX]                ; 004c9732
    FXCH                                ; 004c9734
    FSUB float ptr [EAX + 0x4]          ; 004c9736
    FXCH ST2                            ; 004c9739
    FSUB float ptr [EAX + 0x8]          ; 004c973b
    FXCH                                ; 004c973e
    FSTP float ptr [ESP + 0x6c]         ; 004c9740
    FXCH                                ; 004c9744
    FSTP float ptr [ESP + 0x70]         ; 004c9746
    FSTP float ptr [ESP + 0x74]         ; 004c974a
    MOVSD ES:EDI,ESI                    ; 004c974e
    MOVSD ES:EDI,ESI                    ; 004c974f
    MOVSD ES:EDI,ESI                    ; 004c9750
    FLD float ptr [ESP + 0x7c]          ; 004c9751
    FABS                                ; 004c9755
    FCOMP double ptr [0x005e1134]       ; 004c9757 | DAT_005e1134
    FNSTSW AX                           ; 004c975d
    SAHF                                ; 004c975f
    JA 0x004c96c7                       ; 004c9760
        ;   XREF to: 004c96c7 (CONDITIONAL_JUMP)  ; LAB_004c96c7
    FLD float ptr [ESP + 0x80]          ; 004c9766
    FMUL ST0                            ; 004c976d
    FLD float ptr [ESP + 0x78]          ; 004c976f
    FMUL ST0                            ; 004c9773
    FADDP                               ; 004c9775
    FST float ptr [ESP + 0xdc]          ; 004c9777
    FCOMP float ptr [ESP + 0xd8]        ; 004c977e
    FNSTSW AX                           ; 004c9785
    SAHF                                ; 004c9787
    JA 0x004c96c7                       ; 004c9788
        ;   XREF to: 004c96c7 (CONDITIONAL_JUMP)  ; LAB_004c96c7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c978e
    MOV dword ptr [EAX + 0x1ff78],EBX   ; 004c9791
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004c9797
    MOV dword ptr [ESP + 0xcc],ECX      ; 004c979e
    MOV dword ptr [ESP + 0xd8],EAX      ; 004c97a5
    JMP 0x004c96c7                      ; 004c97ac
        ;   XREF to: 004c96c7 (UNCONDITIONAL_JUMP)  ; LAB_004c96c7
    CMP dword ptr [ESI + 0x25b0],0x0    ; 004c97b1
        ;   Label: LAB_004c97b1
    JNZ 0x004c96c7                      ; 004c97b8
        ;   XREF to: 004c96c7 (CONDITIONAL_JUMP)  ; LAB_004c96c7
    MOV ESI,dword ptr [ESP + 0xd4]      ; 004c97be
    PUSH ESI                            ; 004c97c5
    PUSH EBX                            ; 004c97c6
    LEA ESI,[ESP + 0x50]                ; 004c97c7
    LEA EDI,[ESP + 0x8c]                ; 004c97cb
    CALL FUN_00408bb0                   ; 004c97d2
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x50]                ; 004c97d7
    ADD ESP,0x8                         ; 004c97db
    MOVSD ES:EDI,ESI                    ; 004c97de
    MOVSD ES:EDI,ESI                    ; 004c97df
    MOVSD ES:EDI,ESI                    ; 004c97e0
    FLD float ptr [ESP + 0x88]          ; 004c97e1
    FMUL ST0                            ; 004c97e8
    FLD float ptr [ESP + 0x84]          ; 004c97ea
    FMUL ST0                            ; 004c97f1
    FADDP                               ; 004c97f3
    FLD float ptr [ESP + 0x8c]          ; 004c97f5
    FMUL ST0                            ; 004c97fc
    FADDP                               ; 004c97fe
    FSQRT                               ; 004c9800
    FLDZ                                ; 004c9802
    FXCH                                ; 004c9804
    FSTP float ptr [ESP + 0xe4]         ; 004c9806
    FCOMP float ptr [ESP + 0xe4]        ; 004c980d
    FNSTSW AX                           ; 004c9814
    SAHF                                ; 004c9816
    JNC 0x004c9873                      ; 004c9817
        ;   XREF to: 004c9873 (CONDITIONAL_JUMP)  ; LAB_004c9873
    FLD1                                ; 004c9819
    FLD float ptr [ESP + 0x84]          ; 004c981b
    FXCH                                ; 004c9822
    FDIV float ptr [ESP + 0xe4]         ; 004c9824
    FXCH                                ; 004c982b
    FMUL ST1                            ; 004c982d
    FLD float ptr [ESP + 0x88]          ; 004c982f
    FMUL ST2                            ; 004c9836
    FLD float ptr [ESP + 0x8c]          ; 004c9838
    FMULP ST3                           ; 004c983f
    FXCH                                ; 004c9841
    FSTP float ptr [ESP + 0x84]         ; 004c9843
    FSTP float ptr [ESP + 0x88]         ; 004c984a
    FSTP float ptr [ESP + 0x8c]         ; 004c9851
    FLD float ptr [ESP + 0x8c]          ; 004c9858
        ;   Label: LAB_004c9858
    FCOMP double ptr [0x005e112c]       ; 004c985f | DAT_005e112c
    FNSTSW AX                           ; 004c9865
    SAHF                                ; 004c9867
    JA 0x004c96c7                       ; 004c9868
        ;   XREF to: 004c96c7 (CONDITIONAL_JUMP)  ; LAB_004c96c7
    JMP 0x004c970f                      ; 004c986e
        ;   XREF to: 004c970f (UNCONDITIONAL_JUMP)  ; LAB_004c970f
    XOR EDI,EDI                         ; 004c9873
        ;   Label: LAB_004c9873
    MOV dword ptr [ESP + 0x88],EDI      ; 004c9875
    MOV dword ptr [ESP + 0x84],EDI      ; 004c987c
    MOV dword ptr [ESP + 0x8c],EDI      ; 004c9883
    JMP 0x004c9858                      ; 004c988a
        ;   XREF to: 004c9858 (UNCONDITIONAL_JUMP)  ; LAB_004c9858
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c988c
        ;   Label: LAB_004c988c
    PUSH ESI                            ; 004c988f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004c9890
    PUSH EBX                            ; 004c9896
    CALL dword ptr [EAX + 0x84]         ; 004c9897
    ADD ESP,0x8                         ; 004c989d
    MOV dword ptr [ESP + 0xe0],EAX      ; 004c98a0
    CMP EAX,0x2                         ; 004c98a7
    JNC 0x004c98ba                      ; 004c98aa
        ;   XREF to: 004c98ba (CONDITIONAL_JUMP)  ; LAB_004c98ba
    CMP EAX,0x1                         ; 004c98ac
    JZ 0x004c97b1                       ; 004c98af
        ;   XREF to: 004c97b1 (CONDITIONAL_JUMP)  ; LAB_004c97b1
    JMP 0x004c96c7                      ; 004c98b5
        ;   XREF to: 004c96c7 (UNCONDITIONAL_JUMP)  ; LAB_004c96c7
    JBE 0x004c9706                      ; 004c98ba
        ;   XREF to: 004c9706 (CONDITIONAL_JUMP)  ; LAB_004c9706
        ;   Label: LAB_004c98ba
    CMP EAX,0x3                         ; 004c98c0
    JZ 0x004c9706                       ; 004c98c3
        ;   XREF to: 004c9706 (CONDITIONAL_JUMP)  ; LAB_004c9706
    JMP 0x004c96c7                      ; 004c98c9
        ;   XREF to: 004c96c7 (UNCONDITIONAL_JUMP)  ; LAB_004c96c7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c98ce
        ;   Label: LAB_004c98ce
    MOV EDI,dword ptr [EAX + 0x1ff78]   ; 004c98d1
    TEST EDI,EDI                        ; 004c98d7
    JZ 0x004c9946                       ; 004c98d9
        ;   XREF to: 004c9946 (CONDITIONAL_JUMP)  ; LAB_004c9946
    MOV EDX,dword ptr [ESP + 0xcc]      ; 004c98db
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c98e2
    MOV EBX,EDI                         ; 004c98e9
    SUB EAX,EDX                         ; 004c98eb
    FLD float ptr [EBX + 0x20]          ; 004c98ed
    FSUB float ptr [ESP + EAX*0x4]      ; 004c98f0
    MOV EDX,dword ptr [EBP + 0x14]      ; 004c98f3
    FADD float ptr [EDX + 0x20]         ; 004c98f6
    FSTP float ptr [EDX + 0x20]         ; 004c98f9
    MOV EDX,dword ptr [EDX + 0x1ff78]   ; 004c98fc
    FLD float ptr [EDX + 0x28]          ; 004c9902
    FSUB float ptr [ESP + EAX*0x4 + 0x8] ; 004c9905
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c9909
    ADD EAX,0x158                       ; 004c990c
    FADD float ptr [EAX + 0xfffffed0]   ; 004c9911
    MOV EDX,dword ptr [ESP + 0xcc]      ; 004c9917
    FSTP float ptr [EAX + 0xfffffed0]   ; 004c991e
    CMP EDX,0x2                         ; 004c9924
    JNC 0x004c9982                      ; 004c9927
        ;   XREF to: 004c9982 (CONDITIONAL_JUMP)  ; LAB_004c9982
    CMP EDX,0x1                         ; 004c9929
    JNZ 0x004c9956                      ; 004c992c
        ;   XREF to: 004c9956 (CONDITIONAL_JUMP)  ; LAB_004c9956
    PUSH EDX                            ; 004c992e
    PUSH 0xe                            ; 004c992f
    PUSH EAX                            ; 004c9931
        ;   Label: LAB_004c9931
    CALL FUN_005247c0                   ; 004c9932
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004c9937
    MOV EAX,0x1                         ; 004c993a
        ;   Label: LAB_004c993a
    MOV ESP,EBP                         ; 004c993f
        ;   Label: LAB_004c993f
    POP EBP                             ; 004c9941
    POP EDI                             ; 004c9942
    POP ESI                             ; 004c9943
    POP EBX                             ; 004c9944
    RET                                 ; 004c9945
    XOR EAX,EAX                         ; 004c9946
        ;   Label: LAB_004c9946
    JMP 0x004c993f                      ; 004c9948
        ;   XREF to: 004c993f (UNCONDITIONAL_JUMP)  ; LAB_004c993f
    PUSH 0x1                            ; 004c994a
        ;   Label: LAB_004c994a
    PUSH 0xf                            ; 004c994c
    JMP 0x004c9931                      ; 004c994e
        ;   XREF to: 004c9931 (UNCONDITIONAL_JUMP)  ; LAB_004c9931
    PUSH 0x1                            ; 004c9950
        ;   Label: LAB_004c9950
    PUSH 0x4                            ; 004c9952
    JMP 0x004c9931                      ; 004c9954
        ;   XREF to: 004c9931 (UNCONDITIONAL_JUMP)  ; LAB_004c9931
    MOV EDX,dword ptr [ESP + 0xcc]      ; 004c9956
        ;   Label: LAB_004c9956
    PUSH EDX                            ; 004c995d
    MOV EDI,0x5e10ee                    ; 004c995e | = "..\\core\\gabriela.cpp"
    MOV EAX,0x637                       ; 004c9963
    PUSH 0x5e1103                       ; 004c9968 | = "Hell froze - invalid pickUpType: %d"
    MOV dword ptr [0x01d1d400],EDI      ; 004c996d | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004c9973 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004c9978
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 004c997d
    JMP 0x004c993a                      ; 004c9980
        ;   XREF to: 004c993a (UNCONDITIONAL_JUMP)  ; LAB_004c993a
    JBE 0x004c994a                      ; 004c9982
        ;   XREF to: 004c994a (CONDITIONAL_JUMP)  ; LAB_004c994a
        ;   Label: LAB_004c9982
    CMP EDX,0x3                         ; 004c9984
    JZ 0x004c9950                       ; 004c9987
        ;   XREF to: 004c9950 (CONDITIONAL_JUMP)  ; LAB_004c9950
    JMP 0x004c9956                      ; 004c9989
        ;   XREF to: 004c9956 (UNCONDITIONAL_JUMP)  ; LAB_004c9956

