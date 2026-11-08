; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a7870(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f8fd3
;   undefined4 DAT_005f8fdb
;
; Called Functions:
;   FUN_00408850
;   FUN_00447db0
;   FUN_004688e0
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7870
        ;   Label: FUN_005a7870
    PUSH ESI                            ; 005a7871
    PUSH EDI                            ; 005a7872
    PUSH EBP                            ; 005a7873
    SUB ESP,0x30                        ; 005a7874
    MOV EBX,dword ptr [ESP + 0x44]      ; 005a7877
    PUSH EBX                            ; 005a787b
    CALL FUN_00408850                   ; 005a787c
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 005a7881
    LEA EAX,[EBX + 0x158]               ; 005a7884
    PUSH EAX                            ; 005a788a
    XOR EDI,EDI                         ; 005a788b
    CALL FUN_004688e0                   ; 005a788d
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    MOV EDX,dword ptr [EBX + 0x938]     ; 005a7892
    ADD ESP,0x4                         ; 005a7898
    TEST EDX,EDX                        ; 005a789b
    JLE 0x005a78c0                      ; 005a789d
        ;   XREF to: 005a78c0 (CONDITIONAL_JUMP)  ; LAB_005a78c0
    LEA ESI,[EBX + 0x950]               ; 005a789f
    PUSH ESI                            ; 005a78a5
        ;   Label: LAB_005a78a5
    CALL FUN_004688e0                   ; 005a78a6
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    INC EDI                             ; 005a78ab
    ADD ESP,0x4                         ; 005a78ac
    MOV ECX,dword ptr [EBX + 0x938]     ; 005a78af
    ADD ESI,0x1b4                       ; 005a78b5
    CMP EDI,ECX                         ; 005a78bb
    JL 0x005a78a5                       ; 005a78bd
        ;   XREF to: 005a78a5 (CONDITIONAL_JUMP)  ; LAB_005a78a5
    NOP                                 ; 005a78bf
    LEA EAX,[EBX + 0x158]               ; 005a78c0
        ;   Label: LAB_005a78c0
    PUSH EAX                            ; 005a78c6
    LEA EDI,[ESP + 0x4]                 ; 005a78c7
    CALL FUN_00468900                   ; 005a78cb
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV ECX,0x6                         ; 005a78d0
    MOV ESI,dword ptr [EAX + 0x350]     ; 005a78d5
    ADD ESP,0x4                         ; 005a78db
    LEA EDX,[EBX + 0x92c]               ; 005a78de
    MOVSD.REP ES:EDI,ESI                ; 005a78e4
    LEA EAX,[ESP + 0x24]                ; 005a78e6
    FLD float ptr [ESP + 0xc]           ; 005a78ea
    FLD float ptr [ESP + 0x10]          ; 005a78ee
    FLD float ptr [ESP + 0x14]          ; 005a78f2
    LEA EDI,[ESP + 0x24]                ; 005a78f6
    LEA ESI,[ESP + 0x18]                ; 005a78fa
    FXCH ST2                            ; 005a78fe
    FSUB float ptr [ESP]                ; 005a7900
    FXCH                                ; 005a7903
    FSUB float ptr [ESP + 0x4]          ; 005a7905
    FXCH ST2                            ; 005a7909
    FSUB float ptr [ESP + 0x8]          ; 005a790b
    FXCH                                ; 005a790f
    FSTP float ptr [ESP + 0x18]         ; 005a7911
    FXCH                                ; 005a7915
    FSTP float ptr [ESP + 0x1c]         ; 005a7917
    FSTP float ptr [ESP + 0x20]         ; 005a791b
    MOVSD ES:EDI,ESI                    ; 005a791f
    MOVSD ES:EDI,ESI                    ; 005a7920
    MOVSD ES:EDI,ESI                    ; 005a7921
    CMP EDX,EAX                         ; 005a7922
    JZ 0x005a793a                       ; 005a7924
        ;   XREF to: 005a793a (CONDITIONAL_JUMP)  ; LAB_005a793a
    MOV EAX,dword ptr [ESP + 0x24]      ; 005a7926
    MOV dword ptr [EDX],EAX             ; 005a792a
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a792c
    MOV dword ptr [EDX + 0x4],EAX       ; 005a7930
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005a7933
    MOV dword ptr [EDX + 0x8],EAX       ; 005a7937
    FLD float ptr [EBX + 0x918]         ; 005a793a
        ;   Label: LAB_005a793a
    FMUL double ptr [0x005f8fd3]        ; 005a7940 | DAT_005f8fd3
    FLD float ptr [EBX + 0x930]         ; 005a7946
    FMUL ST0                            ; 005a794c
    FLD float ptr [EBX + 0x92c]         ; 005a794e
    FMUL ST0                            ; 005a7954
    FLD float ptr [EBX + 0x92c]         ; 005a7956
    FMUL ST0                            ; 005a795c
    FLD float ptr [EBX + 0x934]         ; 005a795e
    FMUL ST0                            ; 005a7964
    FLD float ptr [EBX + 0x934]         ; 005a7966
    FMUL ST0                            ; 005a796c
    FLD float ptr [EBX + 0x930]         ; 005a796e
    FMUL ST0                            ; 005a7974
    FXCH ST2                            ; 005a7976
    FADDP ST5,ST0                       ; 005a7978
    FXCH ST5                            ; 005a797a
    FST float ptr [EBX + 0x91c]         ; 005a797c
    FLD double ptr [0x005f8fdb]         ; 005a7982 | DAT_005f8fdb
    FXCH                                ; 005a7988
    FMUL ST1                            ; 005a798a
    FXCH ST6                            ; 005a798c
    FADDP ST4,ST0                       ; 005a798e
    FXCH                                ; 005a7990
    FADDP ST2,ST0                       ; 005a7992
    FLD float ptr [EBX + 0x91c]         ; 005a7994
    FMUL ST1                            ; 005a799a
    FLD float ptr [EBX + 0x91c]         ; 005a799c
    FMULP ST2                           ; 005a79a2
    FXCH ST5                            ; 005a79a4
    FMULP ST4                           ; 005a79a6
    FXCH ST4                            ; 005a79a8
    FMULP ST2                           ; 005a79aa
    FMULP ST3                           ; 005a79ac
    LEA EAX,[EBX + 0x8e8]               ; 005a79ae
    FXCH                                ; 005a79b4
    FSTP float ptr [EBX + 0x920]        ; 005a79b6
    FSTP float ptr [EBX + 0x924]        ; 005a79bc
    FSTP float ptr [EBX + 0x928]        ; 005a79c2
    MOV dword ptr [EAX + 0x8],0x0       ; 005a79c8
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a79cf
    MOV dword ptr [EAX + 0x4],EDX       ; 005a79d2
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a79d5
    MOV dword ptr [EAX],EDX             ; 005a79d8
    LEA EAX,[EBX + 0x90c]               ; 005a79da
    MOV dword ptr [EAX + 0x8],0x0       ; 005a79e0
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a79e7
    MOV dword ptr [EAX + 0x4],EDX       ; 005a79ea
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a79ed
    MOV dword ptr [EAX],EDX             ; 005a79f0
    LEA EAX,[EBX + 0x8d0]               ; 005a79f2
    MOV dword ptr [EAX + 0x8],0x0       ; 005a79f8
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a79ff
    MOV dword ptr [EAX + 0x4],EDX       ; 005a7a02
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a7a05
    MOV dword ptr [EAX],EDX             ; 005a7a08
    LEA EAX,[EBX + 0x8f4]               ; 005a7a0a
    MOV dword ptr [EAX + 0x8],0x0       ; 005a7a10
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a7a17
    MOV dword ptr [EAX + 0x4],EDX       ; 005a7a1a
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a7a1d
    MOV dword ptr [EAX],EDX             ; 005a7a20
    LEA EAX,[EBX + 0x8dc]               ; 005a7a22
    MOV dword ptr [EAX + 0x8],0x0       ; 005a7a28
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a7a2f
    MOV dword ptr [EAX + 0x4],EDX       ; 005a7a32
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a7a35
    MOV dword ptr [EAX],EDX             ; 005a7a38
    LEA EAX,[EBX + 0x900]               ; 005a7a3a
    MOV dword ptr [EAX + 0x8],0x0       ; 005a7a40
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a7a47
    MOV dword ptr [EAX + 0x4],EDX       ; 005a7a4a
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a7a4d
    MOV dword ptr [EAX],EDX             ; 005a7a50
    LEA EAX,[EBX + 0x8c4]               ; 005a7a52
    MOV dword ptr [EAX + 0x8],0x0       ; 005a7a58
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a7a5f
    MOV dword ptr [EAX + 0x4],EDX       ; 005a7a62
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a7a65
    MOV dword ptr [EAX],EDX             ; 005a7a68
    MOV EDI,dword ptr [EBX + 0x938]     ; 005a7a6a
    XOR ESI,ESI                         ; 005a7a70
    TEST EDI,EDI                        ; 005a7a72
    JLE 0x005a7adc                      ; 005a7a74
        ;   XREF to: 005a7adc (CONDITIONAL_JUMP)  ; LAB_005a7adc
    LEA EDI,[EBX + 0x93c]               ; 005a7a76
    LEA EDX,[EDI + 0x19c]               ; 005a7a7c
    LEA EAX,[EDI + 0x190]               ; 005a7a82
    IMUL ECX,ESI,0x1b4                  ; 005a7a88
        ;   Label: LAB_005a7a88
    ADD ECX,EDI                         ; 005a7a8e
    CMP EDX,ECX                         ; 005a7a90
    JZ 0x005a7aa4                       ; 005a7a92
        ;   XREF to: 005a7aa4 (CONDITIONAL_JUMP)  ; LAB_005a7aa4
    MOV EBP,dword ptr [ECX]             ; 005a7a94
    MOV dword ptr [EDX],EBP             ; 005a7a96
    MOV EBP,dword ptr [ECX + 0x4]       ; 005a7a98
    MOV dword ptr [EDX + 0x4],EBP       ; 005a7a9b
    MOV EBP,dword ptr [ECX + 0x8]       ; 005a7a9e
    MOV dword ptr [EDX + 0x8],EBP       ; 005a7aa1
    MOV dword ptr [EAX + 0x8],0x0       ; 005a7aa4
        ;   Label: LAB_005a7aa4
    ADD EDX,0x1b4                       ; 005a7aab
    MOV dword ptr [EAX + 0x20],0x0      ; 005a7ab1
    INC ESI                             ; 005a7ab8
    FLD float ptr [EAX + 0x20]          ; 005a7ab9
    MOV ECX,dword ptr [EAX + 0x8]       ; 005a7abc
    MOV dword ptr [EAX + 0x4],ECX       ; 005a7abf
    FST float ptr [EAX + 0x1c]          ; 005a7ac2
    MOV ECX,dword ptr [EAX + 0x4]       ; 005a7ac5
    MOV dword ptr [EAX],ECX             ; 005a7ac8
    FSTP float ptr [EAX + 0x18]         ; 005a7aca
    MOV EBP,dword ptr [EBX + 0x938]     ; 005a7acd
    ADD EAX,0x1b4                       ; 005a7ad3
    CMP ESI,EBP                         ; 005a7ad8
    JL 0x005a7a88                       ; 005a7ada
        ;   XREF to: 005a7a88 (CONDITIONAL_JUMP)  ; LAB_005a7a88
    MOV dword ptr [EBX + 0x100c],0x0    ; 005a7adc
        ;   Label: LAB_005a7adc
    LEA EAX,[EBX + 0x1034]              ; 005a7ae6
    MOV dword ptr [EBX + 0x1010],0x3f800000 ; 005a7aec
    PUSH EAX                            ; 005a7af6
    LEA EAX,[EBX + 0x1020]              ; 005a7af7
    MOV dword ptr [EBX + 0x1014],0x0    ; 005a7afd
    PUSH EAX                            ; 005a7b07
    MOV dword ptr [EBX + 0x1018],0x0    ; 005a7b08
    CALL FUN_00447db0                   ; 005a7b12
        ;   XREF to: 00447db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00447db0()
    MOV dword ptr [EBX + 0x106c],0x1    ; 005a7b17
    MOV dword ptr [EBX + 0x1054],0x0    ; 005a7b21
    MOV dword ptr [EBX + 0x1058],0x0    ; 005a7b2b
    ADD ESP,0x8                         ; 005a7b35
    MOV dword ptr [EBX + 0x105c],0x0    ; 005a7b38
    ADD ESP,0x30                        ; 005a7b42
    POP EBP                             ; 005a7b45
    POP EDI                             ; 005a7b46
    POP ESI                             ; 005a7b47
    POP EBX                             ; 005a7b48
    RET                                 ; 005a7b49

