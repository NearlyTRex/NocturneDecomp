; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b5760(float *param_1,float *param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[43]:
;   FUN_0041a200 at 0041a64f
;   FUN_0041c720 at 0041c77c
;   FUN_00422f90 at 0042312e
;   FUN_004263d0 at 004264cc
;   FUN_0042a4f0 at 0042a587
;   FUN_0042c7f0 at 0042ca93
;   FUN_00430440 at 0043069e
;   FUN_00432690 at 004326f4
;   FUN_004328f0 at 004329fa
;   FUN_0045b120 at 0045b1b7
;   ... and 33 more
;
; Called Functions:
;   FUN_0045fd80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b5760
        ;   Label: FUN_005b5760
    PUSH ESI                            ; 005b5761
    PUSH EDI                            ; 005b5762
    SUB ESP,0x18                        ; 005b5763
    MOV EBX,dword ptr [ESP + 0x28]      ; 005b5766
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005b576a
    MOV ESI,dword ptr [ESP + 0x30]      ; 005b576e
    PUSH ESI                            ; 005b5772
    LEA EAX,[ESP + 0x8]                 ; 005b5773
    PUSH EAX                            ; 005b5777
    LEA EAX,[ESP + 0x8]                 ; 005b5778
    PUSH EAX                            ; 005b577c
    CALL FUN_0045fd80                   ; 005b577d
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fd80()
    ADD ESP,0xc                         ; 005b5782
    LEA EAX,[ESI + 0x8]                 ; 005b5785
    PUSH EAX                            ; 005b5788
    LEA EAX,[ESP + 0x14]                ; 005b5789
    PUSH EAX                            ; 005b578d
    LEA EAX,[ESP + 0x10]                ; 005b578e
    PUSH EAX                            ; 005b5792
    CALL FUN_0045fd80                   ; 005b5793
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fd80()
    ADD ESP,0xc                         ; 005b5798
    ADD ESI,0x4                         ; 005b579b
    PUSH ESI                            ; 005b579e
    LEA EAX,[ESP + 0x10]                ; 005b579f
    PUSH EAX                            ; 005b57a3
    LEA EAX,[ESP + 0x1c]                ; 005b57a4
    PUSH EAX                            ; 005b57a8
    CALL FUN_0045fd80                   ; 005b57a9
        ;   XREF to: 0045fd80 (UNCONDITIONAL_CALL)  ; undefined FUN_0045fd80()
    ADD ESP,0xc                         ; 005b57ae
    FLD float ptr [ESP + 0x14]          ; 005b57b1
    FMUL float ptr [ESP]                ; 005b57b5
    FMUL float ptr [ESP + 0x8]          ; 005b57b8
    FLD float ptr [ESP + 0xc]           ; 005b57bc
    FMUL float ptr [ESP + 0x10]         ; 005b57c0
    FADDP                               ; 005b57c4
    FSTP float ptr [EBX]                ; 005b57c6
    FLD float ptr [ESP + 0x14]          ; 005b57c8
    FMUL float ptr [ESP]                ; 005b57cc
    FMUL float ptr [ESP + 0x10]         ; 005b57cf
    FLD float ptr [ESP + 0xc]           ; 005b57d3
    FCHS                                ; 005b57d7
    FMUL float ptr [ESP + 0x8]          ; 005b57d9
    FADDP                               ; 005b57dd
    FSTP float ptr [EBX + 0x4]          ; 005b57df
    FLD float ptr [ESP + 0x14]          ; 005b57e2
    FMUL float ptr [ESP + 0x4]          ; 005b57e6
    FSTP float ptr [EBX + 0x8]          ; 005b57ea
    FLD float ptr [ESP + 0x8]           ; 005b57ed
    FMUL float ptr [ESP + 0x4]          ; 005b57f1
    FSTP float ptr [EBX + 0x10]         ; 005b57f5
    FLD float ptr [ESP + 0x10]          ; 005b57f8
    FMUL float ptr [ESP + 0x4]          ; 005b57fc
    FSTP float ptr [EBX + 0x14]         ; 005b5800
    FLD float ptr [ESP]                 ; 005b5803
    FCHS                                ; 005b5806
    FSTP float ptr [EBX + 0x18]         ; 005b5808
    FLD float ptr [ESP + 0xc]           ; 005b580b
    FMUL float ptr [ESP]                ; 005b580f
    FMUL float ptr [ESP + 0x8]          ; 005b5812
    FLD float ptr [ESP + 0x14]          ; 005b5816
    FCHS                                ; 005b581a
    FMUL float ptr [ESP + 0x10]         ; 005b581c
    FADDP                               ; 005b5820
    FSTP float ptr [EBX + 0x20]         ; 005b5822
    FLD float ptr [ESP + 0xc]           ; 005b5825
    FMUL float ptr [ESP]                ; 005b5829
    FMUL float ptr [ESP + 0x10]         ; 005b582c
    FLD float ptr [ESP + 0x8]           ; 005b5830
    FMUL float ptr [ESP + 0x14]         ; 005b5834
    FADDP                               ; 005b5838
    FSTP float ptr [EBX + 0x24]         ; 005b583a
    FLD float ptr [ESP + 0xc]           ; 005b583d
    FMUL float ptr [ESP + 0x4]          ; 005b5841
    FSTP float ptr [EBX + 0x28]         ; 005b5845
    MOV EAX,dword ptr [EDI]             ; 005b5848
    MOV dword ptr [EBX + 0xc],EAX       ; 005b584a
    MOV EAX,dword ptr [EDI + 0x4]       ; 005b584d
    MOV dword ptr [EBX + 0x1c],EAX      ; 005b5850
    MOV EAX,dword ptr [EDI + 0x8]       ; 005b5853
    MOV dword ptr [EBX + 0x2c],EAX      ; 005b5856
    ADD ESP,0x18                        ; 005b5859
    POP EDI                             ; 005b585c
    POP ESI                             ; 005b585d
    POP EBX                             ; 005b585e
    RET                                 ; 005b585f

