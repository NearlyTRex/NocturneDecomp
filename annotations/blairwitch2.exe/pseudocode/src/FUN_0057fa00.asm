; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057fa00(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x68]:1  local_68
;
; XREF[1]:
;   FUN_0057f0b0 at 0057f6ef
;
; Referenced Globals:
;   undefined4 DAT_005ed81c
;   undefined4 DAT_005ed824
;
; Called Functions:
;   FUN_00408d70
;   FUN_0040cf60
;   FUN_0057f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057fa00
        ;   Label: FUN_0057fa00
    PUSH ESI                            ; 0057fa01
    PUSH EDI                            ; 0057fa02
    PUSH EBP                            ; 0057fa03
    SUB ESP,0x70                        ; 0057fa04
    MOV EBP,dword ptr [ESP + 0x84]      ; 0057fa07
    FLD float ptr [EBP + 0x9c8]         ; 0057fa0e
    FLDZ                                ; 0057fa14
    FCOMPP                              ; 0057fa16
    FNSTSW AX                           ; 0057fa18
    SAHF                                ; 0057fa1a
    JNC 0x0057fa46                      ; 0057fa1b
        ;   XREF to: 0057fa46 (CONDITIONAL_JUMP)  ; LAB_0057fa46
    FLD float ptr [EBP + 0x45c]         ; 0057fa1d
    FLDZ                                ; 0057fa23
    FCOMPP                              ; 0057fa25
    FNSTSW AX                           ; 0057fa27
    SAHF                                ; 0057fa29
    JNC 0x0057fa34                      ; 0057fa2a
        ;   XREF to: 0057fa34 (CONDITIONAL_JUMP)  ; LAB_0057fa34
    ADD ESP,0x70                        ; 0057fa2c
        ;   Label: LAB_0057fa2c
    POP EBP                             ; 0057fa2f
    POP EDI                             ; 0057fa30
    POP ESI                             ; 0057fa31
    POP EBX                             ; 0057fa32
    RET                                 ; 0057fa33
    PUSH EBP                            ; 0057fa34
        ;   Label: LAB_0057fa34
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 0057fa35
    CALL dword ptr [EAX + 0xec]         ; 0057fa3b
    ADD ESP,0x4                         ; 0057fa41
    JMP 0x0057fa2c                      ; 0057fa44
        ;   XREF to: 0057fa2c (UNCONDITIONAL_JUMP)  ; LAB_0057fa2c
    CMP dword ptr [EBP + 0x8dc],0x0     ; 0057fa46
        ;   Label: LAB_0057fa46
    JZ 0x0057fa2c                       ; 0057fa4d
        ;   XREF to: 0057fa2c (CONDITIONAL_JUMP)  ; LAB_0057fa2c
    FLD float ptr [ESP + 0x88]          ; 0057fa4f
    FMUL double ptr [0x005ed81c]        ; 0057fa56 | DAT_005ed81c
    SUB ESP,0x4                         ; 0057fa5c
    LEA EBX,[EBP + 0x9a8]               ; 0057fa5f
    FSTP float ptr [ESP]                ; 0057fa65
    PUSH EBX                            ; 0057fa68
    PUSH EBP                            ; 0057fa69
    CALL FUN_0057f700                   ; 0057fa6a
        ;   XREF to: 0057f700 (UNCONDITIONAL_CALL)  ; undefined FUN_0057f700()
    ADD ESP,0xc                         ; 0057fa6f
    TEST EAX,EAX                        ; 0057fa72
    JZ 0x0057fa2c                       ; 0057fa74
        ;   XREF to: 0057fa2c (CONDITIONAL_JUMP)  ; LAB_0057fa2c
    MOV EAX,dword ptr [EBP + 0x8dc]     ; 0057fa76
    PUSH EAX                            ; 0057fa7c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0057fa7d
    LEA ESI,[ESP + 0x1c]                ; 0057fa83
    LEA EDI,[ESP + 0x4]                 ; 0057fa87
    CALL dword ptr [EDX + 0x24]         ; 0057fa8b
    MOV ECX,0x6                         ; 0057fa8e
    LEA ESI,[ESP + 0x1c]                ; 0057fa93
    ADD ESP,0x4                         ; 0057fa97
    MOVSD.REP ES:EDI,ESI                ; 0057fa9a
    LEA EDI,[ESP + 0x48]                ; 0057fa9c
    LEA ESI,[EBP + 0x9a8]               ; 0057faa0
    XOR ECX,ECX                         ; 0057faa6
    MOV dword ptr [ESP + 0x64],EBX      ; 0057faa8
    MOV dword ptr [ESP + 0x68],ECX      ; 0057faac
    MOVSD ES:EDI,ESI                    ; 0057fab0
    MOVSD ES:EDI,ESI                    ; 0057fab1
    MOVSD ES:EDI,ESI                    ; 0057fab2
    PUSH 0x3f666666                     ; 0057fab3
        ;   Label: LAB_0057fab3
    PUSH 0x3dcccccd                     ; 0057fab8
    CALL FUN_0040cf60                   ; 0057fabd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x74],EAX      ; 0057fac2
    FLD float ptr [ESP + 0x74]          ; 0057fac6
    ADD ESP,0x8                         ; 0057faca
    FLD1                                ; 0057facd
    FXCH                                ; 0057facf
    FSTP float ptr [ESP + 0x54]         ; 0057fad1
    FSUB float ptr [ESP + 0x54]         ; 0057fad5
    FMUL float ptr [ESP + 0xc]          ; 0057fad9
    FLD float ptr [ESP]                 ; 0057fadd
    FMUL float ptr [ESP + 0x54]         ; 0057fae0
    PUSH 0x3f666666                     ; 0057fae4
    FADDP                               ; 0057fae9
    PUSH 0x3dcccccd                     ; 0057faeb
    FSTP float ptr [EBP + 0x9a8]        ; 0057faf0
    CALL FUN_0040cf60                   ; 0057faf6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x74],EAX      ; 0057fafb
    FLD float ptr [ESP + 0x74]          ; 0057faff
    ADD ESP,0x8                         ; 0057fb03
    FLD1                                ; 0057fb06
    FXCH                                ; 0057fb08
    FSTP float ptr [ESP + 0x54]         ; 0057fb0a
    FSUB float ptr [ESP + 0x54]         ; 0057fb0e
    FMUL float ptr [ESP + 0x14]         ; 0057fb12
    FLD float ptr [ESP + 0x8]           ; 0057fb16
    FMUL float ptr [ESP + 0x54]         ; 0057fb1a
    LEA EDI,[ESP + 0x30]                ; 0057fb1e
    PUSH EBX                            ; 0057fb22
    MOV ESI,dword ptr [EBP + 0x8dc]     ; 0057fb23
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057fb29
    PUSH ESI                            ; 0057fb2d
    MOV dword ptr [EBP + 0x9ac],EAX     ; 0057fb2e
    FADDP                               ; 0057fb34
    LEA ESI,[ESP + 0x44]                ; 0057fb36
    FSTP float ptr [EBP + 0x9b0]        ; 0057fb3a
    CALL FUN_00408d70                   ; 0057fb40
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x44]                ; 0057fb45
    ADD ESP,0x8                         ; 0057fb49
    LEA EAX,[ESP + 0x30]                ; 0057fb4c
    MOVSD ES:EDI,ESI                    ; 0057fb50
    MOVSD ES:EDI,ESI                    ; 0057fb51
    MOVSD ES:EDI,ESI                    ; 0057fb52
    CMP EBX,EAX                         ; 0057fb53
    JNZ 0x0057fba4                      ; 0057fb55
        ;   XREF to: 0057fba4 (CONDITIONAL_JUMP)  ; LAB_0057fba4
    MOV EAX,dword ptr [ESP + 0x64]      ; 0057fb57
        ;   Label: LAB_0057fb57
    FLD float ptr [EAX]                 ; 0057fb5b
    FSUB float ptr [ESP + 0x48]         ; 0057fb5d
    FMUL ST0                            ; 0057fb61
    FLD float ptr [EAX + 0x4]           ; 0057fb63
    FSUB float ptr [ESP + 0x4c]         ; 0057fb66
    FMUL ST0                            ; 0057fb6a
    FLD float ptr [EAX + 0x8]           ; 0057fb6c
    FXCH                                ; 0057fb6f
    FADDP ST2,ST0                       ; 0057fb71
    FSUB float ptr [ESP + 0x50]         ; 0057fb73
    FMUL ST0                            ; 0057fb77
    FADDP                               ; 0057fb79
    FCOMP float ptr [0x005ed824]        ; 0057fb7b | DAT_005ed824
    FNSTSW AX                           ; 0057fb81
    SAHF                                ; 0057fb83
    JA 0x0057fa2c                       ; 0057fb84
        ;   XREF to: 0057fa2c (CONDITIONAL_JUMP)  ; LAB_0057fa2c
    MOV EDI,dword ptr [ESP + 0x68]      ; 0057fb8a
    INC EDI                             ; 0057fb8e
    MOV dword ptr [ESP + 0x68],EDI      ; 0057fb8f
    CMP EDI,0x5                         ; 0057fb93
    JL 0x0057fab3                       ; 0057fb96
        ;   XREF to: 0057fab3 (CONDITIONAL_JUMP)  ; LAB_0057fab3
    ADD ESP,0x70                        ; 0057fb9c
    POP EBP                             ; 0057fb9f
    POP EDI                             ; 0057fba0
    POP ESI                             ; 0057fba1
    POP EBX                             ; 0057fba2
    RET                                 ; 0057fba3
    MOV EAX,dword ptr [ESP + 0x30]      ; 0057fba4
        ;   Label: LAB_0057fba4
    MOV dword ptr [EBX],EAX             ; 0057fba8
    MOV EAX,dword ptr [ESP + 0x34]      ; 0057fbaa
    MOV dword ptr [EBX + 0x4],EAX       ; 0057fbae
    MOV EAX,dword ptr [ESP + 0x38]      ; 0057fbb1
    MOV dword ptr [EBX + 0x8],EAX       ; 0057fbb5
    JMP 0x0057fb57                      ; 0057fbb8
        ;   XREF to: 0057fb57 (UNCONDITIONAL_JUMP)  ; LAB_0057fb57

