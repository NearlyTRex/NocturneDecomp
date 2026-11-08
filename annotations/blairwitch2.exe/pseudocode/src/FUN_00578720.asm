; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00578720(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ecf0a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578720
        ;   Label: FUN_00578720
    PUSH ESI                            ; 00578721
    SUB ESP,0x60                        ; 00578722
    MOV ESI,dword ptr [ESP + 0x6c]      ; 00578725
    MOV EBX,dword ptr [ESP + 0x70]      ; 00578729
    CMP dword ptr [ESI + 0x2d0],0x4     ; 0057872d
    JZ 0x0057873e                       ; 00578734
        ;   XREF to: 0057873e (CONDITIONAL_JUMP)  ; LAB_0057873e
    XOR EAX,EAX                         ; 00578736
    ADD ESP,0x60                        ; 00578738
    POP ESI                             ; 0057873b
    POP EBX                             ; 0057873c
    RET                                 ; 0057873d
    PUSH EDI                            ; 0057873e
        ;   Label: LAB_0057873e
    PUSH ESI                            ; 0057873f
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00578740
    LEA ESI,[ESP + 0x20]                ; 00578746
    LEA EDI,[ESP + 0x8]                 ; 0057874a
    CALL dword ptr [EAX + 0x24]         ; 0057874e
    MOV ECX,0x6                         ; 00578751
    LEA ESI,[ESP + 0x20]                ; 00578756
    ADD ESP,0x4                         ; 0057875a
    MOVSD.REP ES:EDI,ESI                ; 0057875d
    LEA EAX,[ESP + 0x4]                 ; 0057875f
    FLD float ptr [ESP + 0x4]           ; 00578763
    FLD float ptr [ESP + 0x8]           ; 00578767
    FLD float ptr [ESP + 0xc]           ; 0057876b
    LEA EDI,[ESP + 0x40]                ; 0057876f
    LEA ESI,[ESP + 0x4c]                ; 00578773
    FXCH ST2                            ; 00578777
    FADD float ptr [EAX + 0xc]          ; 00578779
    FXCH                                ; 0057877c
    FADD float ptr [EAX + 0x10]         ; 0057877e
    FXCH ST2                            ; 00578781
    FADD float ptr [EAX + 0x14]         ; 00578783
    FXCH                                ; 00578786
    FSTP float ptr [ESP + 0x4c]         ; 00578788
    FXCH                                ; 0057878c
    FSTP float ptr [ESP + 0x50]         ; 0057878e
    FSTP float ptr [ESP + 0x54]         ; 00578792
    MOVSD ES:EDI,ESI                    ; 00578796
    MOVSD ES:EDI,ESI                    ; 00578797
    MOVSD ES:EDI,ESI                    ; 00578798
    FLD float ptr [0x005ecf0a]          ; 00578799 | DAT_005ecf0a
    FLD float ptr [ESP + 0x40]          ; 0057879f
    FMUL ST1                            ; 005787a3
    FLD float ptr [ESP + 0x44]          ; 005787a5
    FMUL ST2                            ; 005787a9
    FLD float ptr [ESP + 0x48]          ; 005787ab
    FMULP ST3                           ; 005787af
    LEA EAX,[ESP + 0x58]                ; 005787b1
    LEA EDI,[ESP + 0x58]                ; 005787b5
    LEA ESI,[ESP + 0x34]                ; 005787b9
    FXCH                                ; 005787bd
    FSTP float ptr [ESP + 0x34]         ; 005787bf
    FSTP float ptr [ESP + 0x38]         ; 005787c3
    FSTP float ptr [ESP + 0x3c]         ; 005787c7
    MOVSD ES:EDI,ESI                    ; 005787cb
    MOVSD ES:EDI,ESI                    ; 005787cc
    MOVSD ES:EDI,ESI                    ; 005787cd
    CMP EBX,EAX                         ; 005787ce
    JZ 0x005787e6                       ; 005787d0
        ;   XREF to: 005787e6 (CONDITIONAL_JUMP)  ; LAB_005787e6
    MOV EAX,dword ptr [ESP + 0x58]      ; 005787d2
    MOV dword ptr [EBX],EAX             ; 005787d6
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005787d8
    MOV dword ptr [EBX + 0x4],EAX       ; 005787dc
    MOV EAX,dword ptr [ESP + 0x60]      ; 005787df
    MOV dword ptr [EBX + 0x8],EAX       ; 005787e3
    MOV EAX,0x1                         ; 005787e6
        ;   Label: LAB_005787e6
    POP EDI                             ; 005787eb
    ADD ESP,0x60                        ; 005787ec
    POP ESI                             ; 005787ef
    POP EBX                             ; 005787f0
    RET                                 ; 005787f1

