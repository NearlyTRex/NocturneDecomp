; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004287f0(int param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x30]:1  local_30
;
; XREF[35]:
;   FUN_0040ef00 at 0040ef8e
;   FUN_0040f950 at 0040fa87
;   FUN_00411a10 at 00411abf
;   FUN_00412f40 at 00412fec
;   FUN_00414e50 at 00414ed2
;   FUN_004186c0 at 00418b0e
;   FUN_00435830 at 004358e6
;   FUN_00436e80 at 00437375
;   FUN_004392b0 at 00439353
;   FUN_00450c60 at 004526c7
;   ... and 25 more
;
; Referenced Globals:
;   undefined4 s_s_can_t_figure_out_next_005ccee9+1
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_007c158c
;   undefined4 DAT_0265370c
;   undefined4 DAT_02661adc
;
; Called Functions:
;   FUN_00408de0
;   FUN_0040c8f0
;   FUN_0040d0c0
;   FUN_00423000
;   FUN_00428260
;   FUN_0042b420
;   FUN_00436710
;   FUN_00460350
;   FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004287f0
        ;   Label: FUN_004287f0
    PUSH ESI                            ; 004287f1
    PUSH EDI                            ; 004287f2
    PUSH EBP                            ; 004287f3
    SUB ESP,0x5c                        ; 004287f4
    MOV EBX,dword ptr [ESP + 0x70]      ; 004287f7
    CMP dword ptr [EBX + 0x2774],0x0    ; 004287fb
    JNZ 0x0042880d                      ; 00428802
        ;   XREF to: 0042880d (CONDITIONAL_JUMP)  ; LAB_0042880d
    CMP dword ptr [EBX + 0x27b0],0x0    ; 00428804
    JZ 0x0042887a                       ; 0042880b
        ;   XREF to: 0042887a (CONDITIONAL_JUMP)  ; LAB_0042887a
    FLD float ptr [EBX + 0x2780]        ; 0042880d
        ;   Label: LAB_0042880d
    FLDZ                                ; 00428813
    FCOMPP                              ; 00428815
    FNSTSW AX                           ; 00428817
    SAHF                                ; 00428819
    JA 0x0042887e                       ; 0042881a
        ;   XREF to: 0042887e (CONDITIONAL_JUMP)  ; LAB_0042887e
    FLD float ptr [EBX + 0x2780]        ; 0042881c
    FSUB float ptr [ESP + 0x74]         ; 00428822
    FST float ptr [EBX + 0x2780]        ; 00428826
    FLDZ                                ; 0042882c
    FCOMPP                              ; 0042882e
    FNSTSW AX                           ; 00428830
    SAHF                                ; 00428832
    JC 0x0042887e                       ; 00428833
        ;   XREF to: 0042887e (CONDITIONAL_JUMP)  ; LAB_0042887e
    MOV dword ptr [EBX + 0x27ac],0x0    ; 00428835
    MOV dword ptr [EBX + 0x2774],0x0    ; 0042883f
    MOV EDI,dword ptr [EBX + 0x27b0]    ; 00428849
    MOV dword ptr [EBX + 0x2780],0x0    ; 0042884f
    TEST EDI,EDI                        ; 00428859
    JZ 0x0042886d                       ; 0042885b
        ;   XREF to: 0042886d (CONDITIONAL_JUMP)  ; LAB_0042886d
    PUSH EBX                            ; 0042885d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0042885e
    CALL dword ptr [EAX + 0x128]        ; 00428864
    ADD ESP,0x4                         ; 0042886a
    MOV EAX,0x1                         ; 0042886d
        ;   Label: LAB_0042886d
    ADD ESP,0x5c                        ; 00428872
        ;   Label: LAB_00428872
    POP EBP                             ; 00428875
    POP EDI                             ; 00428876
    POP ESI                             ; 00428877
    POP EBX                             ; 00428878
    RET                                 ; 00428879
    XOR EAX,EAX                         ; 0042887a
        ;   Label: LAB_0042887a
    JMP 0x00428872                      ; 0042887c
        ;   XREF to: 00428872 (UNCONDITIONAL_JUMP)  ; LAB_00428872
    MOV ESI,dword ptr [EBX + 0x27b0]    ; 0042887e
        ;   Label: LAB_0042887e
    TEST ESI,ESI                        ; 00428884
    JZ 0x00428a10                       ; 00428886
        ;   XREF to: 00428a10 (CONDITIONAL_JUMP)  ; LAB_00428a10
    LEA EAX,[EBX + 0x20]                ; 0042888c
    PUSH EAX                            ; 0042888f
    LEA EAX,[EBX + 0x27b4]              ; 00428890
    PUSH EAX                            ; 00428896
    PUSH ESI                            ; 00428897
    LEA ESI,[ESP + 0x30]                ; 00428898
    CALL FUN_00460350                   ; 0042889c
        ;   XREF to: 00460350 (UNCONDITIONAL_CALL)  ; undefined FUN_00460350()
    ADD ESP,0xc                         ; 004288a1
    LEA EDI,[ESP + 0x3c]                ; 004288a4
    PUSH 0x0                            ; 004288a8
    LEA ESI,[ESP + 0x28]                ; 004288aa
    PUSH 0x0                            ; 004288ae
    MOVSD ES:EDI,ESI                    ; 004288b0
    MOVSD ES:EDI,ESI                    ; 004288b1
    MOVSD ES:EDI,ESI                    ; 004288b2
    PUSH 0x265370c                      ; 004288b3 | DAT_0265370c
    MOV EAX,dword ptr [EBX + 0x27b0]    ; 004288b8
    PUSH EAX                            ; 004288be
    MOV ESI,dword ptr [EAX + 0x2b0]     ; 004288bf
    CALL dword ptr [ESI + 0xcc]         ; 004288c5
    ADD ESP,0x4                         ; 004288cb
    PUSH EAX                            ; 004288ce
    LEA EAX,[ESP + 0x4c]                ; 004288cf
    PUSH EAX                            ; 004288d3
    PUSH EBX                            ; 004288d4
    CALL FUN_00423000                   ; 004288d5
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; undefined FUN_00423000()
    ADD ESP,0x18                        ; 004288da
    TEST EAX,EAX                        ; 004288dd
    JL 0x004289ba                       ; 004288df
        ;   XREF to: 004289ba (CONDITIONAL_JUMP)  ; LAB_004289ba
    JLE 0x004289f9                      ; 004288e5
        ;   XREF to: 004289f9 (CONDITIONAL_JUMP)  ; LAB_004289f9
    MOV EAX,dword ptr [EBX + 0x27b0]    ; 004288eb
    ADD EAX,0xb18                       ; 004288f1
    PUSH EAX                            ; 004288f6
    PUSH EBX                            ; 004288f7
    LEA ESI,[ESP + 0x38]                ; 004288f8
    LEA EDI,[ESP + 0x8]                 ; 004288fc
    CALL FUN_00408de0                   ; 00428900
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x38]                ; 00428905
    ADD ESP,0x8                         ; 00428909
    MOV EAX,ESP                         ; 0042890c
    MOVSD ES:EDI,ESI                    ; 0042890e
    MOVSD ES:EDI,ESI                    ; 0042890f
    MOVSD ES:EDI,ESI                    ; 00428910
    PUSH EAX                            ; 00428911
    LEA ESI,[ESP + 0x1c]                ; 00428912
    LEA EDI,[ESP + 0x10]                ; 00428916
    CALL FUN_005838f0                   ; 0042891a
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x1c]                ; 0042891f
    ADD ESP,0x4                         ; 00428923
    MOVSD ES:EDI,ESI                    ; 00428926
    MOVSD ES:EDI,ESI                    ; 00428927
    MOVSD ES:EDI,ESI                    ; 00428928
    MOV EAX,dword ptr [ESP + 0x10]      ; 00428929
    MOV dword ptr [EBX + 0x2578],EAX    ; 0042892d
    CMP EAX,0x3f20d97c                  ; 00428933
    JGE 0x004289d1                      ; 00428938
        ;   XREF to: 004289d1 (CONDITIONAL_JUMP)  ; LAB_004289d1
    PUSH EBX                            ; 0042893e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0042893f
    MOV dword ptr [EBX + 0x27ac],0x0    ; 00428945
    CALL dword ptr [EAX + 0x128]        ; 0042894f
    ADD ESP,0x4                         ; 00428955
    MOV EAX,dword ptr [EBX + 0x2578]    ; 00428958
        ;   Label: LAB_00428958
    MOV dword ptr [ESP + 0x54],EAX      ; 0042895e
    MOV EAX,dword ptr [EBX + 0x2598]    ; 00428962
    PUSH dword ptr [ESP + 0x54]         ; 00428968
    MOV dword ptr [ESP + 0x54],EAX      ; 0042896c
    CALL FUN_0040d0c0                   ; 00428970
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [ESP + 0x5c],EAX      ; 00428975
    FLD float ptr [ESP + 0x5c]          ; 00428979
    ADD ESP,0x4                         ; 0042897d
    FLD float ptr [ESP + 0x50]          ; 00428980
    FXCH                                ; 00428984
    FST float ptr [ESP + 0x54]          ; 00428986
    FXCH                                ; 0042898a
    FCHS                                ; 0042898c
    FSTP float ptr [ESP + 0x48]         ; 0042898e
    FCOMP float ptr [ESP + 0x48]        ; 00428992
    FNSTSW AX                           ; 00428996
    SAHF                                ; 00428998
    JNC 0x004289e0                      ; 00428999
        ;   XREF to: 004289e0 (CONDITIONAL_JUMP)  ; LAB_004289e0
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042899b
    MOV dword ptr [ESP + 0x4c],EAX      ; 0042899f
        ;   Label: LAB_0042899f
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004289a3
    MOV dword ptr [EBX + 0x2578],EAX    ; 004289a7
    MOV EAX,0x1                         ; 004289ad
    ADD ESP,0x5c                        ; 004289b2
    POP EBP                             ; 004289b5
    POP EDI                             ; 004289b6
    POP ESI                             ; 004289b7
    POP EBX                             ; 004289b8
    RET                                 ; 004289b9
    MOV dword ptr [EBX + 0x27ac],0x3    ; 004289ba
        ;   Label: LAB_004289ba
    MOV EAX,0x1                         ; 004289c4
    ADD ESP,0x5c                        ; 004289c9
    POP EBP                             ; 004289cc
    POP EDI                             ; 004289cd
    POP ESI                             ; 004289ce
    POP EBX                             ; 004289cf
    RET                                 ; 004289d0
    MOV dword ptr [EBX + 0x27ac],0x1    ; 004289d1
        ;   Label: LAB_004289d1
    JMP 0x00428958                      ; 004289db
        ;   XREF to: 00428958 (UNCONDITIONAL_JUMP)  ; LAB_00428958
    FLD float ptr [ESP + 0x54]          ; 004289e0
        ;   Label: LAB_004289e0
    FCOMP float ptr [ESP + 0x50]        ; 004289e4
    FNSTSW AX                           ; 004289e8
    SAHF                                ; 004289ea
    JBE 0x004289f3                      ; 004289eb
        ;   XREF to: 004289f3 (CONDITIONAL_JUMP)  ; LAB_004289f3
    MOV EAX,dword ptr [ESP + 0x50]      ; 004289ed
    JMP 0x0042899f                      ; 004289f1
        ;   XREF to: 0042899f (UNCONDITIONAL_JUMP)  ; LAB_0042899f
    MOV EAX,dword ptr [ESP + 0x54]      ; 004289f3
        ;   Label: LAB_004289f3
    JMP 0x0042899f                      ; 004289f7
        ;   XREF to: 0042899f (UNCONDITIONAL_JUMP)  ; LAB_0042899f
    MOV dword ptr [EBX + 0x27ac],0x1    ; 004289f9
        ;   Label: LAB_004289f9
    MOV EAX,0x1                         ; 00428a03
    ADD ESP,0x5c                        ; 00428a08
    POP EBP                             ; 00428a0b
    POP EDI                             ; 00428a0c
    POP ESI                             ; 00428a0d
    POP EBX                             ; 00428a0e
    RET                                 ; 00428a0f
    FLD float ptr [EBX + 0x2778]        ; 00428a10
        ;   Label: LAB_00428a10
    FLDZ                                ; 00428a16
    MOV ESI,dword ptr [EBX + 0x2774]    ; 00428a18
    FCOMPP                              ; 00428a1e
    FNSTSW AX                           ; 00428a20
    SAHF                                ; 00428a22
    JA 0x00428a2e                       ; 00428a23
        ;   XREF to: 00428a2e (CONDITIONAL_JUMP)  ; LAB_00428a2e
    CMP dword ptr [EBX + 0x2814],0x0    ; 00428a25
    JZ 0x00428a58                       ; 00428a2c
        ;   XREF to: 00428a58 (CONDITIONAL_JUMP)  ; LAB_00428a58
    LEA EAX,[EBX + 0x27ac]              ; 00428a2e
        ;   Label: LAB_00428a2e
    PUSH EAX                            ; 00428a34
    PUSH dword ptr [EBX + 0x277c]       ; 00428a35
    PUSH dword ptr [EBX + 0x2778]       ; 00428a3b
    PUSH ESI                            ; 00428a41
    PUSH EBX                            ; 00428a42
    CALL FUN_00428260                   ; 00428a43
        ;   XREF to: 00428260 (UNCONDITIONAL_CALL)  ; undefined FUN_00428260()
    ADD ESP,0x14                        ; 00428a48
    MOV EAX,0x1                         ; 00428a4b
    ADD ESP,0x5c                        ; 00428a50
    POP EBP                             ; 00428a53
    POP EDI                             ; 00428a54
    POP ESI                             ; 00428a55
    POP EBX                             ; 00428a56
    RET                                 ; 00428a57
    MOV EBP,dword ptr [0x02661adc]      ; 00428a58 | DAT_02661adc
        ;   Label: LAB_00428a58
    PUSH EBP                            ; 00428a5e
    PUSH ESI                            ; 00428a5f
    CALL FUN_0040c8f0                   ; 00428a60
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 00428a65
    TEST EAX,EAX                        ; 00428a68
    JZ 0x00428a2e                       ; 00428a6a
        ;   XREF to: 00428a2e (CONDITIONAL_JUMP)  ; LAB_00428a2e
    PUSH EAX                            ; 00428a6c
    PUSH EBX                            ; 00428a6d
    CALL FUN_0042b420                   ; 00428a6e
        ;   XREF to: 0042b420 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b420()
    ADD ESP,0x8                         ; 00428a73
    MOV ESI,EAX                         ; 00428a76
    TEST EAX,EAX                        ; 00428a78
    JNZ 0x00428a2e                      ; 00428a7a
        ;   XREF to: 00428a2e (CONDITIONAL_JUMP)  ; LAB_00428a2e
    MOV EAX,dword ptr [EBX + 0x2774]    ; 00428a7c
    PUSH EAX                            ; 00428a82
    PUSH EBX                            ; 00428a83
    PUSH 0x5cceea                       ; 00428a84 | s_s_can_t_figure_out_next_005ccee9+1
    MOV EDX,dword ptr [0x00609ed0]      ; 00428a89 | PTR_DAT_00609ed0
    PUSH EDX                            ; 00428a8f | DAT_007c158c
    CALL FUN_00436710                   ; 00428a90
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    MOV EAX,0x1                         ; 00428a95
    ADD ESP,0x10                        ; 00428a9a
    ADD ESP,0x5c                        ; 00428a9d
    POP EBP                             ; 00428aa0
    POP EDI                             ; 00428aa1
    POP ESI                             ; 00428aa2
    POP EBX                             ; 00428aa3
    RET                                 ; 00428aa4

