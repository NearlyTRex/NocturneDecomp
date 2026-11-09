; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_005944a0(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005eedee
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449c20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005944a0
        ;   Label: core_xform.cpp_FUN_005944a0
    PUSH EDI                            ; 005944a1
    SUB ESP,0x3c                        ; 005944a2
    MOV EBX,ESI                         ; 005944a5
    MOV ESI,dword ptr [ESP + 0x48]      ; 005944a7
    FLD float ptr [ESI]                 ; 005944ab
    LEA EAX,[ESP + 0x24]                ; 005944ad
    FMUL float ptr [0x005eedee]         ; 005944b1 | DAT_005eedee
    PUSH EAX                            ; 005944b7
    LEA EAX,[ESP + 0x20]                ; 005944b8
    PUSH EAX                            ; 005944bc
    LEA EAX,[ESP + 0x18]                ; 005944bd
    PUSH EAX                            ; 005944c1
    FSTP float ptr [ESP + 0x30]         ; 005944c2
    CALL core_dirmat.cpp_FUN_00449c20   ; 005944c6
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    FLD float ptr [ESI + 0x8]           ; 005944cb
    LEA EAX,[ESP + 0x34]                ; 005944ce
    ADD ESP,0xc                         ; 005944d2
    FMUL float ptr [0x005eedee]         ; 005944d5 | DAT_005eedee
    PUSH EAX                            ; 005944db
    LEA EAX,[ESP + 0x38]                ; 005944dc
    PUSH EAX                            ; 005944e0
    LEA EAX,[ESP + 0x1c]                ; 005944e1
    PUSH EAX                            ; 005944e5
    FSTP float ptr [ESP + 0x34]         ; 005944e6
    CALL core_dirmat.cpp_FUN_00449c20   ; 005944ea
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    FLD float ptr [ESI + 0x4]           ; 005944ef
    LEA EAX,[ESP + 0x38]                ; 005944f2
    ADD ESP,0xc                         ; 005944f6
    FMUL float ptr [0x005eedee]         ; 005944f9 | DAT_005eedee
    PUSH EAX                            ; 005944ff
    LEA EAX,[ESP + 0x24]                ; 00594500
    PUSH EAX                            ; 00594504
    LEA EAX,[ESP + 0x20]                ; 00594505
    PUSH EAX                            ; 00594509
    FSTP float ptr [ESP + 0x38]         ; 0059450a
    CALL core_dirmat.cpp_FUN_00449c20   ; 0059450e
        ;   XREF to: 00449c20 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449c20()
    ADD ESP,0xc                         ; 00594513
    FLD float ptr [ESP + 0x1c]          ; 00594516
    FMUL float ptr [ESP + 0x34]         ; 0059451a
    FLD float ptr [ESP + 0x10]          ; 0059451e
    FMUL float ptr [ESP + 0x34]         ; 00594522
    FLD float ptr [ESP + 0x10]          ; 00594526
    FCHS                                ; 0059452a
    FMUL float ptr [ESP + 0x34]         ; 0059452c
    FXCH                                ; 00594530
    FMUL float ptr [ESP + 0x18]         ; 00594532
    FXCH                                ; 00594536
    FMUL float ptr [ESP + 0x20]         ; 00594538
    FXCH ST2                            ; 0059453c
    FST float ptr [ESP + 0x30]          ; 0059453e
    FMUL float ptr [ESP + 0x20]         ; 00594542
    FLD float ptr [ESP + 0x1c]          ; 00594546
    FMUL float ptr [ESP + 0x14]         ; 0059454a
    FLD float ptr [ESP + 0x10]          ; 0059454e
    FMUL float ptr [ESP + 0x14]         ; 00594552
    FLD ST1                             ; 00594556
    FMUL float ptr [ESP + 0x18]         ; 00594558
    FXCH ST2                            ; 0059455c
    FMUL float ptr [ESP + 0x20]         ; 0059455e
    FLD ST1                             ; 00594562
    FMUL float ptr [ESP + 0x18]         ; 00594564
    FXCH ST3                            ; 00594568
    FSUBP ST6,ST0                       ; 0059456a
    FXCH                                ; 0059456c
    FMUL float ptr [ESP + 0x20]         ; 0059456e
    FXCH ST5                            ; 00594572
    FSTP float ptr [ESP + 0x4]          ; 00594574
    FLD float ptr [ESP + 0x30]          ; 00594578
    FMUL float ptr [ESP + 0x18]         ; 0059457c
    MOV EDI,EBX                         ; 00594580
    FXCH                                ; 00594582
    FSUBP ST4,ST0                       ; 00594584
    MOV ESI,ESP                         ; 00594586
    FXCH ST3                            ; 00594588
    FSTP float ptr [ESP + 0xc]          ; 0059458a
    FADDP                               ; 0059458e
    FXCH                                ; 00594590
    FSUBP ST2,ST0                       ; 00594592
    FSTP float ptr [ESP]                ; 00594594
    FSTP float ptr [ESP + 0x8]          ; 00594597
    MOVSD ES:EDI,ESI                    ; 0059459b
    MOVSD ES:EDI,ESI                    ; 0059459c
    MOVSD ES:EDI,ESI                    ; 0059459d
    MOVSD ES:EDI,ESI                    ; 0059459e
    MOV EAX,EBX                         ; 0059459f
    ADD ESP,0x3c                        ; 005945a1
    POP EDI                             ; 005945a4
    POP EBX                             ; 005945a5
    RET                                 ; 005945a6

