; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b5750(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0053fc60 at 0053ff0d
;
; Referenced Globals:
;   undefined4 DAT_00585893
;   undefined4 DAT_0058589b
;   undefined4 DAT_005858a3
;   undefined4 DAT_005be368
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   FUN_0040a240
;   FUN_0040a290
;   FUN_0040df00
;   FUN_004294f0
;   FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5750
        ;   Label: FUN_004b5750
    PUSH ESI                            ; 004b5751
    PUSH EDI                            ; 004b5752
    PUSH EBP                            ; 004b5753
    MOV EBP,ESP                         ; 004b5754
    SUB ESP,0x70                        ; 004b5756
    AND ESP,0xfffffff8                  ; 004b5759
    MOV EDI,dword ptr [EBP + 0x14]      ; 004b575c
    PUSH EDI                            ; 004b575f
    CALL FUN_004294f0                   ; 004b5760
        ;   XREF to: 004294f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004294f0()
    ADD ESP,0x4                         ; 004b5765
    TEST EAX,EAX                        ; 004b5768
    JNZ 0x004b57e9                      ; 004b576a
        ;   XREF to: 004b57e9 (CONDITIONAL_JUMP)  ; LAB_004b57e9
    CMP dword ptr [EDI + 0x1fa18],0x0   ; 004b5770
    JNZ 0x004b57f2                      ; 004b5777
        ;   XREF to: 004b57f2 (CONDITIONAL_JUMP)  ; LAB_004b57f2
    MOV dword ptr [ESP + 0x60],EAX      ; 004b577d
    LEA ESI,[EDI + 0x20]                ; 004b5781
    MOV dword ptr [ESP + 0x64],EAX      ; 004b5784
    MOV EAX,[0x005be368]                ; 004b5788 | DAT_005be368
        ;   Label: LAB_004b5788
    MOV EDX,dword ptr [ESP + 0x60]      ; 004b578d
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 004b5791 | DAT_01fa3ff0
    JGE 0x004b57e9                      ; 004b5797
        ;   XREF to: 004b57e9 (CONDITIONAL_JUMP)  ; LAB_004b57e9
    ADD EAX,dword ptr [ESP + 0x64]      ; 004b5799
    MOV EBX,dword ptr [EAX + 0x14cd70]  ; 004b579d | DAT_01fa3ff4
    LEA EAX,[EBX + 0x20]                ; 004b57a3
    FLD float ptr [EAX]                 ; 004b57a6
    FSUB float ptr [ESI]                ; 004b57a8
    FSTP float ptr [ESP + 0x20]         ; 004b57aa
    FLD float ptr [EAX + 0x4]           ; 004b57ae
    FSUB float ptr [ESI + 0x4]          ; 004b57b1
    FST float ptr [ESP + 0x24]          ; 004b57b4
    FLD float ptr [EAX + 0x8]           ; 004b57b8
    FXCH                                ; 004b57bb
    FABS                                ; 004b57bd
    FXCH                                ; 004b57bf
    FSUB float ptr [ESI + 0x8]          ; 004b57c1
    FSTP float ptr [ESP + 0x28]         ; 004b57c4
    FCOMP double ptr [0x00585893]       ; 004b57c8 | DAT_00585893
    FNSTSW AX                           ; 004b57ce
    SAHF                                ; 004b57d0
    JBE 0x004b57f9                      ; 004b57d1
        ;   XREF to: 004b57f9 (CONDITIONAL_JUMP)  ; LAB_004b57f9
    MOV EBX,dword ptr [ESP + 0x60]      ; 004b57d3
        ;   Label: LAB_004b57d3
    MOV ECX,dword ptr [ESP + 0x64]      ; 004b57d7
    INC EBX                             ; 004b57db
    ADD ECX,0x4                         ; 004b57dc
    MOV dword ptr [ESP + 0x60],EBX      ; 004b57df
    MOV dword ptr [ESP + 0x64],ECX      ; 004b57e3
    JMP 0x004b5788                      ; 004b57e7
        ;   XREF to: 004b5788 (UNCONDITIONAL_JUMP)  ; LAB_004b5788
    XOR EAX,EAX                         ; 004b57e9
        ;   Label: LAB_004b57e9
    MOV ESP,EBP                         ; 004b57eb
        ;   Label: LAB_004b57eb
    POP EBP                             ; 004b57ed
    POP EDI                             ; 004b57ee
    POP ESI                             ; 004b57ef
    POP EBX                             ; 004b57f0
    RET                                 ; 004b57f1
    MOV EAX,0x1                         ; 004b57f2
        ;   Label: LAB_004b57f2
    JMP 0x004b57eb                      ; 004b57f7
        ;   XREF to: 004b57eb (UNCONDITIONAL_JUMP)  ; LAB_004b57eb
    FLD float ptr [ESP + 0x20]          ; 004b57f9
        ;   Label: LAB_004b57f9
    FMUL ST0                            ; 004b57fd
    FLD float ptr [ESP + 0x28]          ; 004b57ff
    FMUL ST0                            ; 004b5803
    XOR EAX,EAX                         ; 004b5805
    FADDP                               ; 004b5807
    MOV dword ptr [ESP + 0x24],EAX      ; 004b5809
    FSQRT                               ; 004b580d
    FCOMP double ptr [0x00585893]       ; 004b580f | DAT_00585893
    FNSTSW AX                           ; 004b5815
    SAHF                                ; 004b5817
    JA 0x004b57d3                       ; 004b5818
        ;   XREF to: 004b57d3 (CONDITIONAL_JUMP)  ; LAB_004b57d3
    CMP EBX,EDI                         ; 004b581a
    JZ 0x004b57d3                       ; 004b581c
        ;   XREF to: 004b57d3 (CONDITIONAL_JUMP)  ; LAB_004b57d3
    LEA EAX,[ESP + 0x20]                ; 004b581e
    PUSH EAX                            ; 004b5822
    LEA EAX,[ESP + 0x54]                ; 004b5823
    PUSH EAX                            ; 004b5827
    CALL FUN_0054e4a0                   ; 004b5828
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 004b582d
    ADD ESP,0x8                         ; 004b5830
    FSUB float ptr [EDI + 0x34]         ; 004b5833
    SUB ESP,0x4                         ; 004b5836
    FSTP float ptr [ESP]                ; 004b5839
    CALL FUN_0040df00                   ; 004b583c
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040df00()
    MOV dword ptr [ESP + 0x70],EAX      ; 004b5841
    FLD float ptr [ESP + 0x70]          ; 004b5845
    FABS                                ; 004b5849
    ADD ESP,0x4                         ; 004b584b
    FCOMP double ptr [0x0058589b]       ; 004b584e | DAT_0058589b
    FNSTSW AX                           ; 004b5854
    SAHF                                ; 004b5856
    JA 0x004b57d3                       ; 004b5857
        ;   XREF to: 004b57d3 (CONDITIONAL_JUMP)  ; LAB_004b57d3
    PUSH ESI                            ; 004b585d
    LEA EAX,[ESP + 0x48]                ; 004b585e
    PUSH EAX                            ; 004b5862
    PUSH EBX                            ; 004b5863
    CALL FUN_0040a290                   ; 004b5864
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a290()
    FLD float ptr [EAX + 0x8]           ; 004b5869
    FLDZ                                ; 004b586c
    ADD ESP,0xc                         ; 004b586e
    FCOMPP                              ; 004b5871
    FNSTSW AX                           ; 004b5873
    SAHF                                ; 004b5875
    JC 0x004b57d3                       ; 004b5876
        ;   XREF to: 004b57d3 (CONDITIONAL_JUMP)  ; LAB_004b57d3
    MOV EDX,ESP                         ; 004b587c
    PUSH EDX                            ; 004b587e
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b587f
    PUSH EBX                            ; 004b5885
    CALL dword ptr [EAX + 0x90]         ; 004b5886
    ADD ESP,0x8                         ; 004b588c
    CMP dword ptr [ESP],0x0             ; 004b588f
    JZ 0x004b57d3                       ; 004b5893
        ;   XREF to: 004b57d3 (CONDITIONAL_JUMP)  ; LAB_004b57d3
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b5899
    TEST ECX,ECX                        ; 004b589d
    JNZ 0x004b57d3                      ; 004b589f
        ;   XREF to: 004b57d3 (CONDITIONAL_JUMP)  ; LAB_004b57d3
    MOV EAX,dword ptr [ESP + 0x8]       ; 004b58a5
    MOV dword ptr [ESP + 0x40],EAX      ; 004b58a9
    LEA EAX,[ESP + 0x38]                ; 004b58ad
    PUSH EAX                            ; 004b58b1
    LEA EAX,[ESP + 0x30]                ; 004b58b2
    PUSH EAX                            ; 004b58b6
    PUSH EBX                            ; 004b58b7
    MOV dword ptr [ESP + 0x44],ECX      ; 004b58b8
    MOV dword ptr [ESP + 0x48],ECX      ; 004b58bc
    CALL FUN_0040a240                   ; 004b58c0
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    ADD ESP,0xc                         ; 004b58c5
    FLD float ptr [ESP + 0x2c]          ; 004b58c8
    FSUB float ptr [ESI]                ; 004b58cc
    FMUL ST0                            ; 004b58ce
    FLD float ptr [ESP + 0x34]          ; 004b58d0
    FSUB float ptr [ESI + 0x8]          ; 004b58d4
    FMUL ST0                            ; 004b58d7
    FADDP                               ; 004b58d9
    FSQRT                               ; 004b58db
    FCOMP double ptr [0x005858a3]       ; 004b58dd | DAT_005858a3
    FNSTSW AX                           ; 004b58e3
    SAHF                                ; 004b58e5
    JA 0x004b57d3                       ; 004b58e6
        ;   XREF to: 004b57d3 (CONDITIONAL_JUMP)  ; LAB_004b57d3
    PUSH EDI                            ; 004b58ec
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b58ed
    PUSH EBX                            ; 004b58f3
    CALL dword ptr [EAX + 0x94]         ; 004b58f4
    ADD ESP,0x8                         ; 004b58fa
    TEST EAX,EAX                        ; 004b58fd
    JZ 0x004b57d3                       ; 004b58ff
        ;   XREF to: 004b57d3 (CONDITIONAL_JUMP)  ; LAB_004b57d3
    MOV EAX,0x1                         ; 004b5905
    MOV dword ptr [EDI + 0x1fa18],EBX   ; 004b590a
    MOV ESP,EBP                         ; 004b5910
    POP EBP                             ; 004b5912
    POP EDI                             ; 004b5913
    POP ESI                             ; 004b5914
    POP EBX                             ; 004b5915
    RET                                 ; 004b5916

