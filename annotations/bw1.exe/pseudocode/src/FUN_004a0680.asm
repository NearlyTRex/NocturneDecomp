; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004a0680(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dcb36
;   undefined4 DAT_005dcb3a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0680
        ;   Label: FUN_004a0680
    PUSH ESI                            ; 004a0681
    PUSH EDI                            ; 004a0682
    PUSH EBP                            ; 004a0683
    MOV EBP,ESP                         ; 004a0684
    SUB ESP,0x68                        ; 004a0686
    AND ESP,0xfffffff8                  ; 004a0689
    MOV ESI,dword ptr [EBP + 0x14]      ; 004a068c
    MOV EBX,dword ptr [EBP + 0x18]      ; 004a068f
    PUSH ESI                            ; 004a0692
    MOV EAX,dword ptr [ESI + 0x154]     ; 004a0693
    LEA ESI,[ESP + 0x4]                 ; 004a0699
    LEA EDI,[ESP + 0x1c]                ; 004a069d
    CALL dword ptr [EAX + 0x1c]         ; 004a06a1
    MOV ECX,0x6                         ; 004a06a4
    LEA ESI,[ESP + 0x4]                 ; 004a06a9
    ADD ESP,0x4                         ; 004a06ad
    MOVSD.REP ES:EDI,ESI                ; 004a06b0
    FLD float ptr [ESP + 0x28]          ; 004a06b2
    FSUB float ptr [ESP + 0x1c]         ; 004a06b6
    FMUL double ptr [0x005dcb3a]        ; 004a06ba | DAT_005dcb3a
    FLD float ptr [ESP + 0x18]          ; 004a06c0
    FLD float ptr [ESP + 0x1c]          ; 004a06c4
    FLD float ptr [ESP + 0x20]          ; 004a06c8
    LEA EDI,[ESP + 0x54]                ; 004a06cc
    LEA ESI,[ESP + 0x48]                ; 004a06d0
    FXCH ST2                            ; 004a06d4
    FADD float ptr [ESP + 0x24]         ; 004a06d6
    FXCH                                ; 004a06da
    FADD float ptr [ESP + 0x28]         ; 004a06dc
    FXCH ST2                            ; 004a06e0
    FADD float ptr [ESP + 0x2c]         ; 004a06e2
    FXCH                                ; 004a06e6
    FSTP float ptr [ESP + 0x48]         ; 004a06e8
    FXCH                                ; 004a06ec
    FSTP float ptr [ESP + 0x4c]         ; 004a06ee
    FSTP float ptr [ESP + 0x50]         ; 004a06f2
    MOVSD ES:EDI,ESI                    ; 004a06f6
    MOVSD ES:EDI,ESI                    ; 004a06f7
    MOVSD ES:EDI,ESI                    ; 004a06f8
    FLD float ptr [0x005dcb36]          ; 004a06f9 | DAT_005dcb36
    FLD float ptr [ESP + 0x54]          ; 004a06ff
    FMUL ST1                            ; 004a0703
    FLD float ptr [ESP + 0x58]          ; 004a0705
    FMUL ST2                            ; 004a0709
    FLD float ptr [ESP + 0x5c]          ; 004a070b
    FMULP ST3                           ; 004a070f
    LEA EDI,[ESP + 0x3c]                ; 004a0711
    LEA ESI,[ESP + 0x30]                ; 004a0715
    FXCH                                ; 004a0719
    FSTP float ptr [ESP + 0x30]         ; 004a071b
    FSTP float ptr [ESP + 0x34]         ; 004a071f
    FSTP float ptr [ESP + 0x38]         ; 004a0723
    MOVSD ES:EDI,ESI                    ; 004a0727
    MOVSD ES:EDI,ESI                    ; 004a0728
    MOVSD ES:EDI,ESI                    ; 004a0729
    FLD float ptr [ESP + 0x40]          ; 004a072a
    FXCH                                ; 004a072e
    FADD ST0,ST1                        ; 004a0730
    LEA EAX,[ESP + 0x3c]                ; 004a0732
    FSTP ST1                            ; 004a0736
    FSTP float ptr [ESP + 0x40]         ; 004a0738
    CMP EBX,EAX                         ; 004a073c
    JNZ 0x004a074c                      ; 004a073e
        ;   XREF to: 004a074c (CONDITIONAL_JUMP)  ; LAB_004a074c
    MOV EAX,0x1                         ; 004a0740
    MOV ESP,EBP                         ; 004a0745
    POP EBP                             ; 004a0747
    POP EDI                             ; 004a0748
    POP ESI                             ; 004a0749
    POP EBX                             ; 004a074a
    RET                                 ; 004a074b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a074c
        ;   Label: LAB_004a074c
    MOV dword ptr [EBX],EAX             ; 004a0750
    MOV EAX,dword ptr [ESP + 0x40]      ; 004a0752
    MOV dword ptr [EBX + 0x4],EAX       ; 004a0756
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a0759
    MOV dword ptr [EBX + 0x8],EAX       ; 004a075d
    MOV EAX,0x1                         ; 004a0760
    MOV ESP,EBP                         ; 004a0765
    POP EBP                             ; 004a0767
    POP EDI                             ; 004a0768
    POP ESI                             ; 004a0769
    POP EBX                             ; 004a076a
    RET                                 ; 004a076b

