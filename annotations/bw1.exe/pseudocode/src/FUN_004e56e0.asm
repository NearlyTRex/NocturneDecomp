; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e56e0(undefined4 *param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004e6510 at 004e6570
;
; Referenced Globals:
;   undefined4 DAT_005e4115
;   undefined4 DAT_005e411d
;   undefined4 DAT_005e4125
;   undefined4 DAT_005e4129
;   undefined4 DAT_0061ee0c
;   undefined4 DAT_0061ee10
;   undefined4 DAT_0061ee1c
;   undefined4 DAT_01fe5c1c
;
; Called Functions:
;   FUN_0048b150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e56e0
        ;   Label: FUN_004e56e0
    PUSH ESI                            ; 004e56e1
    PUSH EDI                            ; 004e56e2
    PUSH EBP                            ; 004e56e3
    MOV EBP,ESP                         ; 004e56e4
    SUB ESP,0x2c                        ; 004e56e6
    AND ESP,0xfffffff8                  ; 004e56e9
    MOV EDI,dword ptr [EBP + 0x18]      ; 004e56ec
    MOV ESI,dword ptr [EBP + 0x14]      ; 004e56ef
    XOR EBX,EBX                         ; 004e56f2
    ADD ESI,0x8                         ; 004e56f4
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004e56f7
        ;   Label: LAB_004e56f7
    FLD float ptr [EAX + 0x4]           ; 004e56fa
    FLD ST0                             ; 004e56fd
    FSIN                                ; 004e56ff
    FXCH                                ; 004e5701
    FCOS                                ; 004e5703
    FXCH                                ; 004e5705
    FLD double ptr [0x005e4115]         ; 004e5707 | DAT_005e4115
    FXCH                                ; 004e570d
    FMUL ST1                            ; 004e570f
    FXCH ST2                            ; 004e5711
    FMULP                               ; 004e5713
    FLD ST1                             ; 004e5715
    FMUL float ptr [EBX + 0x61ee0c]     ; 004e5717 | DAT_0061ee0c | DAT_0061ee10
    FLD ST1                             ; 004e571d
    FCHS                                ; 004e571f
    FMUL float ptr [EBX + 0x61ee0c]     ; 004e5721 | DAT_0061ee0c | DAT_0061ee10
    FXCH ST2                            ; 004e5727
    FMUL float ptr [EBX + 0x61ee1c]     ; 004e5729 | DAT_0061ee1c
    XOR EDX,EDX                         ; 004e572f
    FXCH ST3                            ; 004e5731
    FMUL float ptr [EBX + 0x61ee1c]     ; 004e5733 | DAT_0061ee1c
    MOV dword ptr [ESP + 0x4],EDX       ; 004e5739
    FXCH ST3                            ; 004e573d
    FADDP                               ; 004e573f
    FXCH ST2                            ; 004e5741
    FADDP                               ; 004e5743
    FXCH                                ; 004e5745
    FSTP float ptr [ESP + 0x8]          ; 004e5747
    FST float ptr [ESP]                 ; 004e574b
    FADD float ptr [EDI]                ; 004e574e
    FSTP float ptr [ESP]                ; 004e5750
    MOV EAX,dword ptr [EDI + 0x4]       ; 004e5753
    LEA EDX,[ESP + 0xc]                 ; 004e5756
    MOV dword ptr [ESP + 0x4],EAX       ; 004e575a
    FLD float ptr [ESP + 0x8]           ; 004e575e
    FADD float ptr [EDI + 0x8]          ; 004e5762
    MOV EAX,ESP                         ; 004e5765
    FSTP float ptr [ESP + 0x8]          ; 004e5767
    CMP EDX,EAX                         ; 004e576b
    JZ 0x004e5786                       ; 004e576d
        ;   XREF to: 004e5786 (CONDITIONAL_JUMP)  ; LAB_004e5786
    MOV EAX,dword ptr [ESP]             ; 004e576f
    MOV dword ptr [ESP + 0xc],EAX       ; 004e5772
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e5776
    MOV dword ptr [ESP + 0x10],EAX      ; 004e577a
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e577e
    MOV dword ptr [ESP + 0x14],EAX      ; 004e5782
    FLD1                                ; 004e5786
        ;   Label: LAB_004e5786
    PUSH 0x0                            ; 004e5788
    FLD float ptr [ESP + 0x14]          ; 004e578a
    LEA EAX,[ESP + 0x10]                ; 004e578e
    PUSH 0x0                            ; 004e5792
    FXCH                                ; 004e5794
    FADD float ptr [ESP + 0xc]          ; 004e5796
    PUSH EAX                            ; 004e579a
    LEA EAX,[ESP + 0xc]                 ; 004e579b
    FXCH                                ; 004e579f
    FADD float ptr [0x005e4125]         ; 004e57a1 | DAT_005e4125
    PUSH EAX                            ; 004e57a7
    FXCH                                ; 004e57a8
    FSTP float ptr [ESP + 0x14]         ; 004e57aa
    PUSH 0x1fe5c1c                      ; 004e57ae | DAT_01fe5c1c
    FSTP float ptr [ESP + 0x24]         ; 004e57b3
    CALL FUN_0048b150                   ; 004e57b7
        ;   XREF to: 0048b150 (UNCONDITIONAL_CALL)  ; undefined FUN_0048b150()
    MOV dword ptr [ESP + 0x3c],EAX      ; 004e57bc
    FLD float ptr [ESP + 0x3c]          ; 004e57c0
    FMUL double ptr [0x005e411d]        ; 004e57c4 | DAT_005e411d
    ADD ESP,0x14                        ; 004e57ca
    FSUBR float ptr [ESP + 0x4]         ; 004e57cd
    FADD float ptr [0x005e4129]         ; 004e57d1 | DAT_005e4129
    MOV EAX,ESP                         ; 004e57d7
    FSTP float ptr [ESP + 0x4]          ; 004e57d9
    CMP ESI,EAX                         ; 004e57dd
    JZ 0x004e57f4                       ; 004e57df
        ;   XREF to: 004e57f4 (CONDITIONAL_JUMP)  ; LAB_004e57f4
    MOV EAX,dword ptr [ESP]             ; 004e57e1
    MOV dword ptr [ESI],EAX             ; 004e57e4
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e57e6
    MOV dword ptr [ESI + 0x4],EAX       ; 004e57ea
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e57ed
    MOV dword ptr [ESI + 0x8],EAX       ; 004e57f1
    ADD EBX,0x4                         ; 004e57f4
        ;   Label: LAB_004e57f4
    ADD ESI,0xc                         ; 004e57f7
    CMP EBX,0x10                        ; 004e57fa
    JNZ 0x004e56f7                      ; 004e57fd
        ;   XREF to: 004e56f7 (CONDITIONAL_JUMP)  ; LAB_004e56f7
    MOV EBX,dword ptr [EBP + 0x14]      ; 004e5803
    MOV EDX,dword ptr [EBP + 0x14]      ; 004e5806
    ADD EBX,0xc                         ; 004e5809
    ADD EDX,0x30                        ; 004e580c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e580f
        ;   Label: LAB_004e580f
    FLD float ptr [EAX + 0xc]           ; 004e5812
    FSUB float ptr [EBX + 0xc]          ; 004e5815
    FABS                                ; 004e5818
    FCOMP double ptr [0x005e4115]       ; 004e581a | DAT_005e4115
    FNSTSW AX                           ; 004e5820
    SAHF                                ; 004e5822
    JBE 0x004e582e                      ; 004e5823
        ;   XREF to: 004e582e (CONDITIONAL_JUMP)  ; LAB_004e582e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e5825
    MOV ECX,dword ptr [EAX + 0xc]       ; 004e5828
    MOV dword ptr [EBX + 0xc],ECX       ; 004e582b
    ADD EBX,0xc                         ; 004e582e
        ;   Label: LAB_004e582e
    CMP EBX,EDX                         ; 004e5831
    JNZ 0x004e580f                      ; 004e5833
        ;   XREF to: 004e580f (CONDITIONAL_JUMP)  ; LAB_004e580f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004e5835
    MOV EDX,dword ptr [EBP + 0x24]      ; 004e5838
    MOV dword ptr [EAX],0x0             ; 004e583b
    MOV dword ptr [EAX + 0x38],EDX      ; 004e5841
    MOV EDX,dword ptr [EBP + 0x20]      ; 004e5844
    MOV dword ptr [EAX + 0x3c],EDX      ; 004e5847
    MOV EDX,dword ptr [EBP + 0x28]      ; 004e584a
    MOV dword ptr [EAX + 0x4],EDX       ; 004e584d
    MOV ESP,EBP                         ; 004e5850
    POP EBP                             ; 004e5852
    POP EDI                             ; 004e5853
    POP ESI                             ; 004e5854
    POP EBX                             ; 004e5855
    RET                                 ; 004e5856

