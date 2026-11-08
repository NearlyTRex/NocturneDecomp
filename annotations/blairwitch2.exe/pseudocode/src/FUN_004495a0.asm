; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004495a0(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[23]:
;   FUN_00408d30 at 00408d4a
;   FUN_00408de0 at 00408e2a
;   FUN_00416700 at 00416cad
;   FUN_00416d70 at 0041708f
;   FUN_00448c90 at 00448ce5
;   FUN_0044ac60 at 0044ae54
;   FUN_0044b960 at 0044ba08
;   FUN_0044c830 at 0044c9b2
;   FUN_0044f020 at 0044f3cf
;   FUN_0045f5a0 at 0045f9f8
;   ... and 13 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004495a0
        ;   Label: FUN_004495a0
    SUB ESP,0xc                         ; 004495a1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004495a4
    MOV EAX,dword ptr [ESP + 0x18]      ; 004495a8
    MOV ECX,ESI                         ; 004495ac
    FLD float ptr [EAX + 0x4]           ; 004495ae
    FMUL float ptr [EDX + 0xc]          ; 004495b1
    FLD float ptr [EAX + 0x4]           ; 004495b4
    FMUL float ptr [EDX + 0x10]         ; 004495b7
    FLD float ptr [EAX + 0x4]           ; 004495ba
    FMUL float ptr [EDX + 0x14]         ; 004495bd
    FLD float ptr [EAX]                 ; 004495c0
    FMUL float ptr [EDX]                ; 004495c2
    FLD float ptr [EAX]                 ; 004495c4
    FMUL float ptr [EDX + 0x4]          ; 004495c6
    FLD float ptr [EAX]                 ; 004495c9
    FXCH ST2                            ; 004495cb
    FADDP ST5,ST0                       ; 004495cd
    FXCH                                ; 004495cf
    FMUL float ptr [EDX + 0x8]          ; 004495d1
    FLD float ptr [EAX + 0x8]           ; 004495d4
    FMUL float ptr [EDX + 0x18]         ; 004495d7
    FXCH ST2                            ; 004495da
    FADDP ST4,ST0                       ; 004495dc
    FADDP ST2,ST0                       ; 004495de
    FLD float ptr [EAX + 0x8]           ; 004495e0
    FMUL float ptr [EDX + 0x1c]         ; 004495e3
    FLD float ptr [EAX + 0x8]           ; 004495e6
    FMUL float ptr [EDX + 0x20]         ; 004495e9
    MOV EDI,ESI                         ; 004495ec
    MOV ESI,ESP                         ; 004495ee
    FXCH ST2                            ; 004495f0
    FADDP ST5,ST0                       ; 004495f2
    FADDP ST3,ST0                       ; 004495f4
    FADDP                               ; 004495f6
    FXCH                                ; 004495f8
    FSTP float ptr [ESP + 0x4]          ; 004495fa
    FSTP float ptr [ESP + 0x8]          ; 004495fe
    FSTP float ptr [ESP]                ; 00449602
    MOVSD ES:EDI,ESI                    ; 00449605
    MOVSD ES:EDI,ESI                    ; 00449606
    MOVSD ES:EDI,ESI                    ; 00449607
    MOV EAX,ECX                         ; 00449608
    ADD ESP,0xc                         ; 0044960a
    POP EDI                             ; 0044960d
    RET                                 ; 0044960e

