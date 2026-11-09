; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00480720(undefined4 param_1,float *param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005d24f7
;
; Called Functions:
;   shape_edittool.cpp_FUN_00480150
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00480720
        ;   Label: shape_edittool.cpp_FUN_00480720
    PUSH EDI                            ; 00480721
    PUSH EBP                            ; 00480722
    MOV EBP,ESP                         ; 00480723
    SUB ESP,0x48                        ; 00480725
    MOV EAX,dword ptr [EBP + 0x14]      ; 00480728
    FLD float ptr [0x005d24f7]          ; 0048072b | DAT_005d24f7
    FLD float ptr [EAX]                 ; 00480731
    FMUL ST1                            ; 00480733
    FLD float ptr [EAX + 0x4]           ; 00480735
    FMUL ST2                            ; 00480738
    FLD float ptr [EAX + 0x8]           ; 0048073a
    FMUL ST3                            ; 0048073d
    LEA EDI,[EBP + -0x3c]               ; 0048073f
    LEA ESI,[EBP + -0x30]               ; 00480742
    FXCH ST2                            ; 00480745
    FSTP float ptr [EBP + -0x30]        ; 00480747
    FSTP float ptr [EBP + -0x2c]        ; 0048074a
    FSTP float ptr [EBP + -0x28]        ; 0048074d
    MOVSD ES:EDI,ESI                    ; 00480750
    MOVSD ES:EDI,ESI                    ; 00480751
    MOVSD ES:EDI,ESI                    ; 00480752
    FLD float ptr [EAX]                 ; 00480753
    FLD float ptr [EAX + 0x4]           ; 00480755
    FLD float ptr [EAX + 0x8]           ; 00480758
    LEA EDI,[EBP + -0x18]               ; 0048075b
    LEA ESI,[EBP + -0x48]               ; 0048075e
    FXCH ST2                            ; 00480761
    FCHS                                ; 00480763
    FXCH                                ; 00480765
    FCHS                                ; 00480767
    FXCH ST2                            ; 00480769
    FCHS                                ; 0048076b
    FXCH                                ; 0048076d
    FSTP float ptr [EBP + -0x48]        ; 0048076f
    FXCH                                ; 00480772
    FSTP float ptr [EBP + -0x44]        ; 00480774
    FSTP float ptr [EBP + -0x40]        ; 00480777
    MOVSD ES:EDI,ESI                    ; 0048077a
    MOVSD ES:EDI,ESI                    ; 0048077b
    MOVSD ES:EDI,ESI                    ; 0048077c
    FLD float ptr [EBP + -0x18]         ; 0048077d
    FMUL ST1                            ; 00480780
    MOV EDX,dword ptr [EBP + 0x18]      ; 00480782
    FLD float ptr [EBP + -0x14]         ; 00480785
    FMUL ST2                            ; 00480788
    PUSH EDX                            ; 0048078a
    LEA EDX,[EBP + -0x3c]               ; 0048078b
    FLD float ptr [EBP + -0x10]         ; 0048078e
    FMULP ST3                           ; 00480791
    PUSH EDX                            ; 00480793
    LEA EAX,[EBP + -0x24]               ; 00480794
    MOV ECX,dword ptr [EBP + 0x10]      ; 00480797
    PUSH EAX                            ; 0048079a
    LEA EDI,[EBP + -0x24]               ; 0048079b
    LEA ESI,[EBP + -0xc]                ; 0048079e
    PUSH ECX                            ; 004807a1
    FXCH                                ; 004807a2
    FSTP float ptr [EBP + -0xc]         ; 004807a4
    FSTP float ptr [EBP + -0x8]         ; 004807a7
    FSTP float ptr [EBP + -0x4]         ; 004807aa
    MOVSD ES:EDI,ESI                    ; 004807ad
    MOVSD ES:EDI,ESI                    ; 004807ae
    MOVSD ES:EDI,ESI                    ; 004807af
    CALL shape_edittool.cpp_FUN_00480150 ; 004807b0
        ;   XREF to: 00480150 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_00480150()
    ADD ESP,0x10                        ; 004807b5
    MOV ESP,EBP                         ; 004807b8
    POP EBP                             ; 004807ba
    POP EDI                             ; 004807bb
    POP ESI                             ; 004807bc
    RET                                 ; 004807bd

