; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044bc50(int param_1,float *param_2,CMatrix3x3f *param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddfbc
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045b870
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0044bc50
        ;   Label: FUN_0044bc50
    SUB ESP,0x30                        ; 0044bc51
    MOV EBP,dword ptr [ESP + 0x38]      ; 0044bc54
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0044bc58
    PUSH EDI                            ; 0044bc5c
    PUSH ESI                            ; 0044bc5d
    PUSH EBX                            ; 0044bc5e
    LEA EBX,[EBP + 0x1498]              ; 0044bc5f
    LEA EDI,[EBP + 0x148c]              ; 0044bc65
    LEA ESI,[EBP + 0x16c]               ; 0044bc6b
    LEA EAX,[EBP + 0x4]                 ; 0044bc71
    MOVSD ES:EDI,ESI                    ; 0044bc74
    MOVSD ES:EDI,ESI                    ; 0044bc75
    MOVSD ES:EDI,ESI                    ; 0044bc76
    CMP EBX,EAX                         ; 0044bc77
    JZ 0x0044bc8b                       ; 0044bc79
        ;   XREF to: 0044bc8b (CONDITIONAL_JUMP)  ; LAB_0044bc8b
    MOV ECX,dword ptr [EAX]             ; 0044bc7b
    MOV dword ptr [EBX],ECX             ; 0044bc7d
    MOV ECX,dword ptr [EAX + 0x4]       ; 0044bc7f
    MOV dword ptr [EBX + 0x4],ECX       ; 0044bc82
    MOV ECX,dword ptr [EAX + 0x8]       ; 0044bc85
    MOV dword ptr [EBX + 0x8],ECX       ; 0044bc88
    MOV EAX,dword ptr [EBP + 0x178]     ; 0044bc8b
        ;   Label: LAB_0044bc8b
    MOV dword ptr [EBP + 0x14a4],EAX    ; 0044bc91
    MOV EAX,dword ptr [EBP + 0x17c]     ; 0044bc97
    MOV dword ptr [EBP + 0x14a8],EAX    ; 0044bc9d
    MOV EAX,dword ptr [EBP + 0x180]     ; 0044bca3
    MOV dword ptr [EBP + 0x14ac],EAX    ; 0044bca9
    MOV EAX,dword ptr [EBP + 0x184]     ; 0044bcaf
    MOV dword ptr [EBP + 0x14b0],EAX    ; 0044bcb5
    MOV EAX,dword ptr [EBP + 0x188]     ; 0044bcbb
    MOV dword ptr [EBP + 0x14b4],EAX    ; 0044bcc1
    MOV EAX,dword ptr [EBP + 0x18c]     ; 0044bcc7
    MOV dword ptr [EBP + 0x14b8],EAX    ; 0044bccd
    MOV EAX,dword ptr [EBP + 0x190]     ; 0044bcd3
    MOV dword ptr [EBP + 0x14bc],EAX    ; 0044bcd9
    MOV EAX,dword ptr [EBP + 0x194]     ; 0044bcdf
    MOV dword ptr [EBP + 0x14c0],EAX    ; 0044bce5
    LEA EDI,[ESP + 0xc]                 ; 0044bceb
    MOV EAX,dword ptr [EBP + 0x198]     ; 0044bcef
    LEA ESI,[ESP + 0x24]                ; 0044bcf5
    MOV dword ptr [EBP + 0x14c4],EAX    ; 0044bcf9
    LEA EBX,[EBP + 0x4]                 ; 0044bcff
    FLD float ptr [EDX + 0x4]           ; 0044bd02
    FLD float ptr [EDX + 0x8]           ; 0044bd05
    FLD float ptr [EDX]                 ; 0044bd08
    LEA EAX,[ESP + 0xc]                 ; 0044bd0a
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0044bd0e
    PUSH EAX                            ; 0044bd12
    FSUB float ptr [EBX]                ; 0044bd13
    FXCH ST2                            ; 0044bd15
    FSUB float ptr [EBX + 0x4]          ; 0044bd17
    FXCH                                ; 0044bd1a
    FSUB float ptr [EBX + 0x8]          ; 0044bd1c
    FXCH ST2                            ; 0044bd1f
    FSTP float ptr [ESP + 0x28]         ; 0044bd21
    FSTP float ptr [ESP + 0x2c]         ; 0044bd25
    FSTP float ptr [ESP + 0x30]         ; 0044bd29
    MOVSD ES:EDI,ESI                    ; 0044bd2d
    MOVSD ES:EDI,ESI                    ; 0044bd2e
    MOVSD ES:EDI,ESI                    ; 0044bd2f
    PUSH EDX                            ; 0044bd30
    LEA ESI,[ESP + 0x38]                ; 0044bd31
    LEA EDI,[ESP + 0x20]                ; 0044bd35
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045b870 ; 0044bd39
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045b870(CMatrix3x3f * this_ptr, CVector3f * input, CVector3f * output)
    LEA ESI,[ESP + 0x38]                ; 0044bd3e
    ADD ESP,0x8                         ; 0044bd42
    LEA EAX,[ESP + 0x18]                ; 0044bd45
    MOVSD ES:EDI,ESI                    ; 0044bd49
    MOVSD ES:EDI,ESI                    ; 0044bd4a
    MOVSD ES:EDI,ESI                    ; 0044bd4b
    CMP EBX,EAX                         ; 0044bd4c
    JZ 0x0044bd64                       ; 0044bd4e
        ;   XREF to: 0044bd64 (CONDITIONAL_JUMP)  ; LAB_0044bd64
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044bd50
    MOV dword ptr [EBX],EAX             ; 0044bd54
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0044bd56
    MOV dword ptr [EBX + 0x4],EAX       ; 0044bd5a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044bd5d
    MOV dword ptr [EBX + 0x8],EAX       ; 0044bd61
    LEA EAX,[EBP + 0x4]                 ; 0044bd64
        ;   Label: LAB_0044bd64
    LEA EBX,[EBP + 0x16c]               ; 0044bd67
    FLD float ptr [EAX]                 ; 0044bd6d
    FMUL float ptr [0x005ddfbc]         ; 0044bd6f | DAT_005ddfbc
    FISTP dword ptr [EBX]               ; 0044bd75
    FLD float ptr [EAX + 0x4]           ; 0044bd77
    FMUL float ptr [0x005ddfbc]         ; 0044bd7a | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x4]         ; 0044bd80
    FLD float ptr [EAX + 0x8]           ; 0044bd83
    FMUL float ptr [0x005ddfbc]         ; 0044bd86 | DAT_005ddfbc
    FISTP dword ptr [EBX + 0x8]         ; 0044bd8c
    POP EBX                             ; 0044bd8f
    POP ESI                             ; 0044bd90
    POP EDI                             ; 0044bd91
    MOV EAX,dword ptr [ESP + 0x40]      ; 0044bd92
    FILD dword ptr [EBP + 0x14a8]       ; 0044bd96
    FMUL float ptr [EAX + 0xc]          ; 0044bd9c
    FILD dword ptr [EBP + 0x14a4]       ; 0044bd9f
    FMUL float ptr [EAX]                ; 0044bda5
    FADDP                               ; 0044bda7
    FILD dword ptr [EBP + 0x14ac]       ; 0044bda9
    FMUL float ptr [EAX + 0x18]         ; 0044bdaf
    FADDP                               ; 0044bdb2
    FILD dword ptr [EBP + 0x14a4]       ; 0044bdb4
    FXCH                                ; 0044bdba
    CALL crt_math.c_round_FUN_005a3120  ; 0044bdbc
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [EBP + 0x178]       ; 0044bdc1
    FMUL float ptr [EAX + 0x4]          ; 0044bdc7
    FILD dword ptr [EBP + 0x14a8]       ; 0044bdca
    FMUL float ptr [EAX + 0x10]         ; 0044bdd0
    FADDP                               ; 0044bdd3
    FILD dword ptr [EBP + 0x14ac]       ; 0044bdd5
    FMUL float ptr [EAX + 0x1c]         ; 0044bddb
    FADDP                               ; 0044bdde
    FILD dword ptr [EBP + 0x14a4]       ; 0044bde0
    FXCH                                ; 0044bde6
    CALL crt_math.c_round_FUN_005a3120  ; 0044bde8
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [EBP + 0x17c]       ; 0044bded
    FMUL float ptr [EAX + 0x8]          ; 0044bdf3
    FILD dword ptr [EBP + 0x14a8]       ; 0044bdf6
    FMUL float ptr [EAX + 0x14]         ; 0044bdfc
    FADDP                               ; 0044bdff
    FILD dword ptr [EBP + 0x14ac]       ; 0044be01
    FMUL float ptr [EAX + 0x20]         ; 0044be07
    FADDP                               ; 0044be0a
    FILD dword ptr [EBP + 0x14b4]       ; 0044be0c
    FXCH                                ; 0044be12
    CALL crt_math.c_round_FUN_005a3120  ; 0044be14
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [EBP + 0x180]       ; 0044be19
    FMUL float ptr [EAX + 0xc]          ; 0044be1f
    FILD dword ptr [EBP + 0x14b0]       ; 0044be22
    FMUL float ptr [EAX]                ; 0044be28
    FADDP                               ; 0044be2a
    FILD dword ptr [EBP + 0x14b8]       ; 0044be2c
    FMUL float ptr [EAX + 0x18]         ; 0044be32
    FADDP                               ; 0044be35
    FILD dword ptr [EBP + 0x14b0]       ; 0044be37
    FXCH                                ; 0044be3d
    CALL crt_math.c_round_FUN_005a3120  ; 0044be3f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [EBP + 0x184]       ; 0044be44
    FMUL float ptr [EAX + 0x4]          ; 0044be4a
    FILD dword ptr [EBP + 0x14b4]       ; 0044be4d
    FMUL float ptr [EAX + 0x10]         ; 0044be53
    FADDP                               ; 0044be56
    FILD dword ptr [EBP + 0x14b8]       ; 0044be58
    FMUL float ptr [EAX + 0x1c]         ; 0044be5e
    FADDP                               ; 0044be61
    FILD dword ptr [EBP + 0x14b0]       ; 0044be63
    FXCH                                ; 0044be69
    CALL crt_math.c_round_FUN_005a3120  ; 0044be6b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [EBP + 0x188]       ; 0044be70
    FMUL float ptr [EAX + 0x8]          ; 0044be76
    FILD dword ptr [EBP + 0x14b4]       ; 0044be79
    FMUL float ptr [EAX + 0x14]         ; 0044be7f
    FADDP                               ; 0044be82
    FILD dword ptr [EBP + 0x14b8]       ; 0044be84
    FMUL float ptr [EAX + 0x20]         ; 0044be8a
    FADDP                               ; 0044be8d
    FILD dword ptr [EBP + 0x14c0]       ; 0044be8f
    FXCH                                ; 0044be95
    CALL crt_math.c_round_FUN_005a3120  ; 0044be97
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [EBP + 0x18c]       ; 0044be9c
    FMUL float ptr [EAX + 0xc]          ; 0044bea2
    FILD dword ptr [EBP + 0x14bc]       ; 0044bea5
    FMUL float ptr [EAX]                ; 0044beab
    FADDP                               ; 0044bead
    FILD dword ptr [EBP + 0x14c4]       ; 0044beaf
    FMUL float ptr [EAX + 0x18]         ; 0044beb5
    FADDP                               ; 0044beb8
    FILD dword ptr [EBP + 0x14bc]       ; 0044beba
    FXCH                                ; 0044bec0
    CALL crt_math.c_round_FUN_005a3120  ; 0044bec2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [EBP + 0x190]       ; 0044bec7
    FMUL float ptr [EAX + 0x4]          ; 0044becd
    FILD dword ptr [EBP + 0x14c0]       ; 0044bed0
    FMUL float ptr [EAX + 0x10]         ; 0044bed6
    FADDP                               ; 0044bed9
    FILD dword ptr [EBP + 0x14c4]       ; 0044bedb
    FMUL float ptr [EAX + 0x1c]         ; 0044bee1
    FADDP                               ; 0044bee4
    FILD dword ptr [EBP + 0x14bc]       ; 0044bee6
    FXCH                                ; 0044beec
    CALL crt_math.c_round_FUN_005a3120  ; 0044beee
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [EBP + 0x194]       ; 0044bef3
    FMUL float ptr [EAX + 0x8]          ; 0044bef9
    FILD dword ptr [EBP + 0x14c0]       ; 0044befc
    FMUL float ptr [EAX + 0x14]         ; 0044bf02
    FADDP                               ; 0044bf05
    FILD dword ptr [EBP + 0x14c4]       ; 0044bf07
    FMUL float ptr [EAX + 0x20]         ; 0044bf0d
    FADDP                               ; 0044bf10
    CALL crt_math.c_round_FUN_005a3120  ; 0044bf12
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005a3120(double value)
    FISTP dword ptr [EBP + 0x198]       ; 0044bf17
    ADD ESP,0x30                        ; 0044bf1d
    POP EBP                             ; 0044bf20
    RET                                 ; 0044bf21

