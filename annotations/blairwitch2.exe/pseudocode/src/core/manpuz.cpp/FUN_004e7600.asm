; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004e7600(int param_1,int param_2)
;
;
; XREF[2]:
;   core_manpuz.cpp_CMansionPuzzleCircle_process_FUN_004e57f0 at 004e587d
;   core_manpuz.cpp_CMansionPuzzleCircle_setup_FUN_004e5080 at 004e564d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e7600
        ;   Label: core_manpuz.cpp_FUN_004e7600
    PUSH EDI                            ; 004e7601
    SUB ESP,0x4c                        ; 004e7602
    MOV EDX,dword ptr [ESP + 0x5c]      ; 004e7605
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7609
    SUB EAX,EDX                         ; 004e7610
    MOV EDX,EAX                         ; 004e7612
    MOV EAX,dword ptr [ESP + 0x58]      ; 004e7614
    SHL EDX,0x5                         ; 004e7618
    ADD EAX,0x149c                      ; 004e761b
    ADD EAX,EDX                         ; 004e7620
    LEA ECX,[EAX + 0xc]                 ; 004e7622
    LEA EDX,[EAX + 0x18]                ; 004e7625
    FLD float ptr [ECX]                 ; 004e7628
    FMUL float ptr [EDX]                ; 004e762a
    FLD float ptr [ECX + 0x4]           ; 004e762c
    FMUL float ptr [EDX]                ; 004e762f
    FLD float ptr [ECX + 0x8]           ; 004e7631
    FMUL float ptr [EDX]                ; 004e7634
    LEA EDI,[ESP + 0x18]                ; 004e7636
    LEA ESI,[ESP + 0x30]                ; 004e763a
    FXCH ST2                            ; 004e763e
    FSTP float ptr [ESP + 0x30]         ; 004e7640
    FSTP float ptr [ESP + 0x34]         ; 004e7644
    FSTP float ptr [ESP + 0x38]         ; 004e7648
    MOVSD ES:EDI,ESI                    ; 004e764c
    MOVSD ES:EDI,ESI                    ; 004e764d
    MOVSD ES:EDI,ESI                    ; 004e764e
    FLD float ptr [EAX + 0x18]          ; 004e764f
    FLD1                                ; 004e7652
    FSUBRP                              ; 004e7654
    FLD float ptr [EAX]                 ; 004e7656
    FXCH                                ; 004e7658
    FSTP float ptr [ESP + 0x48]         ; 004e765a
    FMUL float ptr [ESP + 0x48]         ; 004e765e
    FLD float ptr [EAX + 0x4]           ; 004e7662
    FMUL float ptr [ESP + 0x48]         ; 004e7665
    FLD float ptr [EAX + 0x8]           ; 004e7669
    FMUL float ptr [ESP + 0x48]         ; 004e766c
    LEA EDX,[EAX + 0x1c]                ; 004e7670
    LEA EDI,[ESP + 0x3c]                ; 004e7673
    MOV ESI,ESP                         ; 004e7677
    FXCH ST2                            ; 004e7679
    FSTP float ptr [ESP]                ; 004e767b
    FSTP float ptr [ESP + 0x4]          ; 004e767e
    FSTP float ptr [ESP + 0x8]          ; 004e7682
    MOVSD ES:EDI,ESI                    ; 004e7686
    MOVSD ES:EDI,ESI                    ; 004e7687
    MOVSD ES:EDI,ESI                    ; 004e7688
    LEA EAX,[ESP + 0xc]                 ; 004e7689
    FLD float ptr [ESP + 0x3c]          ; 004e768d
    FLD float ptr [ESP + 0x40]          ; 004e7691
    FLD float ptr [ESP + 0x44]          ; 004e7695
    LEA EDI,[ESP + 0xc]                 ; 004e7699
    LEA ESI,[ESP + 0x24]                ; 004e769d
    FXCH ST2                            ; 004e76a1
    FADD float ptr [ESP + 0x18]         ; 004e76a3
    FXCH                                ; 004e76a7
    FADD float ptr [ESP + 0x1c]         ; 004e76a9
    FXCH ST2                            ; 004e76ad
    FADD float ptr [ESP + 0x20]         ; 004e76af
    FXCH                                ; 004e76b3
    FSTP float ptr [ESP + 0x24]         ; 004e76b5
    FXCH                                ; 004e76b9
    FSTP float ptr [ESP + 0x28]         ; 004e76bb
    FSTP float ptr [ESP + 0x2c]         ; 004e76bf
    MOVSD ES:EDI,ESI                    ; 004e76c3
    MOVSD ES:EDI,ESI                    ; 004e76c4
    MOVSD ES:EDI,ESI                    ; 004e76c5
    CMP EDX,EAX                         ; 004e76c6
    JNZ 0x004e76d0                      ; 004e76c8
        ;   XREF to: 004e76d0 (CONDITIONAL_JUMP)  ; LAB_004e76d0
    ADD ESP,0x4c                        ; 004e76ca
    POP EDI                             ; 004e76cd
    POP ESI                             ; 004e76ce
    RET                                 ; 004e76cf
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e76d0
        ;   Label: LAB_004e76d0
    MOV dword ptr [EDX],EAX             ; 004e76d4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e76d6
    MOV dword ptr [EDX + 0x4],EAX       ; 004e76da
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e76dd
    MOV dword ptr [EDX + 0x8],EAX       ; 004e76e1
    ADD ESP,0x4c                        ; 004e76e4
    POP EDI                             ; 004e76e7
    POP ESI                             ; 004e76e8
    RET                                 ; 004e76e9

