; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_FUN_00585f40(float *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d81cf
;   undefined4 DAT_005d81d3
;   undefined4 DAT_005d81d7
;   undefined4 DAT_005d81db
;   undefined4 DAT_005d81df
;   undefined4 DAT_005d81e3
;
; Called Functions:
;   crt_math.c_asin_FUN_005a4b46
;   crt_math.c_atan2_FUN_005a5cc1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585f40
        ;   Label: core_xform.cpp_FUN_00585f40
    PUSH EDI                            ; 00585f41
    PUSH EBP                            ; 00585f42
    MOV EBP,ESP                         ; 00585f43
    SUB ESP,0x14                        ; 00585f45
    AND ESP,0xfffffff8                  ; 00585f48
    MOV EDX,dword ptr [EBP + 0x10]      ; 00585f4b
    MOV ECX,ESI                         ; 00585f4e
    FLD float ptr [EDX + 0x8]           ; 00585f50
    FMUL float ptr [EDX + 0xc]          ; 00585f53
    FLD float ptr [EDX]                 ; 00585f56
    FCHS                                ; 00585f58
    FMUL float ptr [EDX + 0x4]          ; 00585f5a
    FSUBRP                              ; 00585f5d
    FMUL float ptr [0x005d81cf]         ; 00585f5f | DAT_005d81cf
    FST float ptr [ESP]                 ; 00585f65
    FCOMP float ptr [0x005d81d3]        ; 00585f68 | DAT_005d81d3
    FNSTSW AX                           ; 00585f6e
    SAHF                                ; 00585f70
    JC 0x0058600e                       ; 00585f71
        ;   XREF to: 0058600e (CONDITIONAL_JUMP)  ; LAB_0058600e
    FLD float ptr [ESP]                 ; 00585f77
    FCOMP float ptr [0x005d81d7]        ; 00585f7a | DAT_005d81d7
    FNSTSW AX                           ; 00585f80
    SAHF                                ; 00585f82
    JA 0x00586057                       ; 00585f83
        ;   XREF to: 00586057 (CONDITIONAL_JUMP)  ; LAB_00586057
    FLD float ptr [ESP]                 ; 00585f89
    CALL crt_math.c_asin_FUN_005a4b46   ; 00585f8c
        ;   XREF to: 005a4b46 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_asin_FUN_005a4b46()
    FST float ptr [ESP + 0x4]           ; 00585f91
    FCOMP float ptr [0x005d81db]        ; 00585f95 | DAT_005d81db
    FNSTSW AX                           ; 00585f9b
    SAHF                                ; 00585f9d
    JNC 0x00585fae                      ; 00585f9e
        ;   XREF to: 00585fae (CONDITIONAL_JUMP)  ; LAB_00585fae
    FLD float ptr [ESP + 0x4]           ; 00585fa0
    FADD float ptr [0x005d81df]         ; 00585fa4 | DAT_005d81df
    FSTP float ptr [ESP + 0x4]          ; 00585faa
    FLD float ptr [EDX + 0x4]           ; 00585fae
        ;   Label: LAB_00585fae
    FMUL ST0                            ; 00585fb1
    FLD float ptr [EDX + 0x8]           ; 00585fb3
    FMUL ST0                            ; 00585fb6
    FXCH                                ; 00585fb8
    FSUBR float ptr [0x005d81e3]        ; 00585fba | DAT_005d81e3
    FXCH                                ; 00585fc0
    FSUBR ST0,ST1                       ; 00585fc2
    FLD float ptr [EDX + 0x4]           ; 00585fc4
    FMUL float ptr [EDX + 0xc]          ; 00585fc7
    FLD float ptr [EDX]                 ; 00585fca
    FMUL float ptr [EDX + 0x8]          ; 00585fcc
    FSUBP                               ; 00585fcf
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00585fd1
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FLD float ptr [EDX + 0xc]           ; 00585fd6
    FMUL ST0                            ; 00585fd9
    FSUBP ST2,ST0                       ; 00585fdb
    FLD float ptr [EDX + 0x4]           ; 00585fdd
    FMUL float ptr [EDX + 0x8]          ; 00585fe0
    FLD float ptr [EDX]                 ; 00585fe3
    FMUL float ptr [EDX + 0xc]          ; 00585fe5
    FSUBP                               ; 00585fe8
    FLD ST2                             ; 00585fea
    FXCH                                ; 00585fec
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00585fee
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    FSTP ST2                            ; 00585ff3
    FSTP float ptr [ESP + 0x8]          ; 00585ff5
    FSTP float ptr [ESP + 0xc]          ; 00585ff9
    LEA ESI,[ESP + 0x4]                 ; 00585ffd
    MOV EDI,ECX                         ; 00586001
    MOVSD ES:EDI,ESI                    ; 00586003
    MOVSD ES:EDI,ESI                    ; 00586004
    MOVSD ES:EDI,ESI                    ; 00586005
    MOV EAX,ECX                         ; 00586006
    MOV ESP,EBP                         ; 00586008
    POP EBP                             ; 0058600a
    POP EDI                             ; 0058600b
    POP EBX                             ; 0058600c
    RET                                 ; 0058600d
    FLD float ptr [EDX + 0x8]           ; 0058600e
        ;   Label: LAB_0058600e
    FMUL ST0                            ; 00586011
    FSUBR float ptr [0x005d81e3]        ; 00586013 | DAT_005d81e3
    FLD float ptr [EDX + 0xc]           ; 00586019
    FMUL ST0                            ; 0058601c
    FSUBP                               ; 0058601e
    FLD float ptr [EDX + 0x4]           ; 00586020
    FCHS                                ; 00586023
    FMUL float ptr [EDX + 0xc]          ; 00586025
    FLD float ptr [EDX]                 ; 00586028
    FMUL float ptr [EDX + 0x8]          ; 0058602a
    FSUBP                               ; 0058602d
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 0058602f
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    MOV dword ptr [ESP + 0x4],0xbfc90fdb ; 00586034
    XOR EAX,EAX                         ; 0058603c
    FSTP float ptr [ESP + 0x8]          ; 0058603e
    MOV dword ptr [ESP + 0xc],EAX       ; 00586042
    LEA ESI,[ESP + 0x4]                 ; 00586046
    MOV EDI,ECX                         ; 0058604a
    MOVSD ES:EDI,ESI                    ; 0058604c
    MOVSD ES:EDI,ESI                    ; 0058604d
    MOVSD ES:EDI,ESI                    ; 0058604e
    MOV EAX,ECX                         ; 0058604f
    MOV ESP,EBP                         ; 00586051
    POP EBP                             ; 00586053
    POP EDI                             ; 00586054
    POP EBX                             ; 00586055
    RET                                 ; 00586056
    FLD float ptr [EDX + 0x8]           ; 00586057
        ;   Label: LAB_00586057
    FMUL ST0                            ; 0058605a
    FSUBR float ptr [0x005d81e3]        ; 0058605c | DAT_005d81e3
    FLD float ptr [EDX + 0xc]           ; 00586062
    FMUL ST0                            ; 00586065
    FSUBP                               ; 00586067
    FLD float ptr [EDX + 0x4]           ; 00586069
    FCHS                                ; 0058606c
    FMUL float ptr [EDX + 0xc]          ; 0058606e
    FLD float ptr [EDX]                 ; 00586071
    FMUL float ptr [EDX + 0x8]          ; 00586073
    FSUBP                               ; 00586076
    CALL crt_math.c_atan2_FUN_005a5cc1  ; 00586078
        ;   XREF to: 005a5cc1 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005a5cc1()
    MOV EBX,0x3fc90fdb                  ; 0058607d
    XOR ESI,ESI                         ; 00586082
    MOV dword ptr [ESP + 0x4],EBX       ; 00586084
    MOV dword ptr [ESP + 0xc],ESI       ; 00586088
    FSTP float ptr [ESP + 0x8]          ; 0058608c
    LEA ESI,[ESP + 0x4]                 ; 00586090
    MOV EDI,ECX                         ; 00586094
    MOVSD ES:EDI,ESI                    ; 00586096
    MOVSD ES:EDI,ESI                    ; 00586097
    MOVSD ES:EDI,ESI                    ; 00586098
    MOV EAX,ECX                         ; 00586099
    MOV ESP,EBP                         ; 0058609b
    POP EBP                             ; 0058609d
    POP EDI                             ; 0058609e
    POP EBX                             ; 0058609f
    RET                                 ; 005860a0

