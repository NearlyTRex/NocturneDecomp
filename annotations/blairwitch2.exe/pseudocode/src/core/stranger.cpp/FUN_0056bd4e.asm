; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_stranger_cpp_FUN_0056bd4e(float *param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ebc5d
;
; Called Functions:
;   core_actor.cpp_FUN_0040d0c0
;   core_vecdir.cpp_FUN_005838f0
;   crt_math.c_acos_FUN_005b9924
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0056bd4e
        ;   Label: core_stranger.cpp_FUN_0056bd4e
    PUSH EBX                            ; 0056bd50
    PUSH EDI                            ; 0056bd51
    PUSH EBP                            ; 0056bd52
    MOV EBP,ESP                         ; 0056bd53
    SUB ESP,0x58                        ; 0056bd55
    AND ESP,0xfffffff8                  ; 0056bd58
    MOV EBX,dword ptr [EBP + 0x10]      ; 0056bd5b
    MOV dword ptr [ESP + 0x40],ESI      ; 0056bd5e
    PUSH EBX                            ; 0056bd62
    LEA ESI,[ESP + 0x2c]                ; 0056bd63
    LEA EDI,[ESP + 0x38]                ; 0056bd67
    CALL core_vecdir.cpp_FUN_005838f0   ; 0056bd6b
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x2c]                ; 0056bd70
    ADD ESP,0x4                         ; 0056bd74
    MOVSD ES:EDI,ESI                    ; 0056bd77
    MOVSD ES:EDI,ESI                    ; 0056bd78
    MOVSD ES:EDI,ESI                    ; 0056bd79
    FLD float ptr [EBX + 0x4]           ; 0056bd7a
    FMUL ST0                            ; 0056bd7d
    FLD float ptr [EBX]                 ; 0056bd7f
    FMUL ST0                            ; 0056bd81
    FADDP                               ; 0056bd83
    FLD float ptr [EBX + 0x8]           ; 0056bd85
    FMUL ST0                            ; 0056bd88
    FADDP                               ; 0056bd8a
    FSQRT                               ; 0056bd8c
    FST float ptr [ESP + 0x24]          ; 0056bd8e
    MOV EBX,dword ptr [ESP + 0x24]      ; 0056bd92
    FST double ptr [ESP + 0x18]         ; 0056bd96
    MOV dword ptr [ESP + 0x20],EBX      ; 0056bd9a
    FCOMP double ptr [0x005ebc5d]       ; 0056bd9e | DAT_005ebc5d
    FNSTSW AX                           ; 0056bda4
    SAHF                                ; 0056bda6
    JBE 0x0056be4e                      ; 0056bda7
        ;   XREF to: 0056be4e (CONDITIONAL_JUMP)  ; LAB_0056be4e
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056bdad
    FLD float ptr [EBX]                 ; 0056bdb0
    FCHS                                ; 0056bdb2
    FSTP float ptr [ESP + 0x4c]         ; 0056bdb4
    JNC 0x0056be63                      ; 0056bdb8
        ;   XREF to: 0056be63 (CONDITIONAL_JUMP)  ; LAB_0056be63
    FLD float ptr [ESP + 0x20]          ; 0056bdbe
        ;   Label: LAB_0056bdbe
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056bdc2
    FSTP double ptr [ESP]               ; 0056bdc5
    MOV EBX,dword ptr [EBX + 0x4]       ; 0056bdc8
    FLD double ptr [ESP]                ; 0056bdcb
    MOV dword ptr [ESP + 0x48],EBX      ; 0056bdce
    FCOMP double ptr [0x005ebc5d]       ; 0056bdd2 | DAT_005ebc5d
    FNSTSW AX                           ; 0056bdd8
    SAHF                                ; 0056bdda
    JC 0x0056be4e                       ; 0056bddb
        ;   XREF to: 0056be4e (CONDITIONAL_JUMP)  ; LAB_0056be4e
    FLD float ptr [ESP + 0x20]          ; 0056bddd
    FMUL ST0                            ; 0056bde1
    FLD float ptr [ESP + 0x48]          ; 0056bde3
    FMUL ST0                            ; 0056bde7
    FSUBP                               ; 0056bde9
    FSQRT                               ; 0056bdeb
    FDIV double ptr [ESP]               ; 0056bded
    FLD1                                ; 0056bdf0
    FXCH                                ; 0056bdf2
    FSTP double ptr [ESP + 0x8]         ; 0056bdf4
    FCOMP double ptr [ESP + 0x8]        ; 0056bdf8
    FNSTSW AX                           ; 0056bdfc
    SAHF                                ; 0056bdfe
    JBE 0x0056be4e                      ; 0056bdff
        ;   XREF to: 0056be4e (CONDITIONAL_JUMP)  ; LAB_0056be4e
    FLDZ                                ; 0056be01
    FCOMP double ptr [ESP + 0x8]        ; 0056be03
    FNSTSW AX                           ; 0056be07
    SAHF                                ; 0056be09
    JA 0x0056be4e                       ; 0056be0a
        ;   XREF to: 0056be4e (CONDITIONAL_JUMP)  ; LAB_0056be4e
    FLD double ptr [ESP + 0x8]          ; 0056be0c
    CALL crt_math.c_acos_FUN_005b9924   ; 0056be10
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FLDZ                                ; 0056be15
    FXCH                                ; 0056be17
    FSTP float ptr [ESP + 0x50]         ; 0056be19
    FCOMP float ptr [ESP + 0x48]        ; 0056be1d
    FNSTSW AX                           ; 0056be21
    SAHF                                ; 0056be23
    JBE 0x0056bee8                      ; 0056be24
        ;   XREF to: 0056bee8 (CONDITIONAL_JUMP)  ; LAB_0056bee8
    FLD float ptr [ESP + 0x34]          ; 0056be2a
    FSUB float ptr [ESP + 0x50]         ; 0056be2e
    FSTP float ptr [ESP + 0x34]         ; 0056be32
        ;   Label: LAB_0056be32
    PUSH dword ptr [ESP + 0x34]         ; 0056be36
    CALL core_actor.cpp_FUN_0040d0c0    ; 0056be3a
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x58],EAX      ; 0056be3f
    FLD float ptr [ESP + 0x58]          ; 0056be43
    ADD ESP,0x4                         ; 0056be47
    FSTP float ptr [ESP + 0x34]         ; 0056be4a
    MOV EDI,dword ptr [ESP + 0x40]      ; 0056be4e
        ;   Label: LAB_0056be4e
    LEA ESI,[ESP + 0x34]                ; 0056be52
    MOVSD ES:EDI,ESI                    ; 0056be56
    MOVSD ES:EDI,ESI                    ; 0056be57
    MOVSD ES:EDI,ESI                    ; 0056be58
    MOV EAX,dword ptr [ESP + 0x40]      ; 0056be59
    MOV ESP,EBP                         ; 0056be5d
    POP EBP                             ; 0056be5f
    POP EDI                             ; 0056be60
    POP EBX                             ; 0056be61
    RET                                 ; 0056be62
    FLD float ptr [ESP + 0x24]          ; 0056be63
        ;   Label: LAB_0056be63
    FMUL ST0                            ; 0056be67
    FLD float ptr [ESP + 0x4c]          ; 0056be69
    FMUL ST0                            ; 0056be6d
    FSUBP                               ; 0056be6f
    FSQRT                               ; 0056be71
    FDIV double ptr [ESP + 0x18]        ; 0056be73
    FLD1                                ; 0056be77
    FXCH                                ; 0056be79
    FSTP double ptr [ESP + 0x10]        ; 0056be7b
    FCOMP double ptr [ESP + 0x10]       ; 0056be7f
    FNSTSW AX                           ; 0056be83
    SAHF                                ; 0056be85
    JBE 0x0056bdbe                      ; 0056be86
        ;   XREF to: 0056bdbe (CONDITIONAL_JUMP)  ; LAB_0056bdbe
    FLDZ                                ; 0056be8c
    FCOMP double ptr [ESP + 0x10]       ; 0056be8e
    FNSTSW AX                           ; 0056be92
    SAHF                                ; 0056be94
    JA 0x0056bdbe                       ; 0056be95
        ;   XREF to: 0056bdbe (CONDITIONAL_JUMP)  ; LAB_0056bdbe
    FLD double ptr [ESP + 0x10]         ; 0056be9b
    CALL crt_math.c_acos_FUN_005b9924   ; 0056be9f
        ;   XREF to: 005b9924 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_acos_FUN_005b9924()
    FLDZ                                ; 0056bea4
    FXCH                                ; 0056bea6
    FSTP float ptr [ESP + 0x44]         ; 0056bea8
    FCOMP float ptr [ESP + 0x4c]        ; 0056beac
    FNSTSW AX                           ; 0056beb0
    SAHF                                ; 0056beb2
    JBE 0x0056bede                      ; 0056beb3
        ;   XREF to: 0056bede (CONDITIONAL_JUMP)  ; LAB_0056bede
    FLD float ptr [ESP + 0x38]          ; 0056beb5
    FSUB float ptr [ESP + 0x44]         ; 0056beb9
    FSTP float ptr [ESP + 0x38]         ; 0056bebd
        ;   Label: LAB_0056bebd
    PUSH dword ptr [ESP + 0x38]         ; 0056bec1
    CALL core_actor.cpp_FUN_0040d0c0    ; 0056bec5
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x58],EAX      ; 0056beca
    FLD float ptr [ESP + 0x58]          ; 0056bece
    ADD ESP,0x4                         ; 0056bed2
    FSTP float ptr [ESP + 0x38]         ; 0056bed5
    JMP 0x0056bdbe                      ; 0056bed9
        ;   XREF to: 0056bdbe (UNCONDITIONAL_JUMP)  ; LAB_0056bdbe
    FLD float ptr [ESP + 0x38]          ; 0056bede
        ;   Label: LAB_0056bede
    FADD float ptr [ESP + 0x44]         ; 0056bee2
    JMP 0x0056bebd                      ; 0056bee6
        ;   XREF to: 0056bebd (UNCONDITIONAL_JUMP)  ; LAB_0056bebd
    FLD float ptr [ESP + 0x34]          ; 0056bee8
        ;   Label: LAB_0056bee8
    FADD float ptr [ESP + 0x50]         ; 0056beec
    JMP 0x0056be32                      ; 0056bef0
        ;   XREF to: 0056be32 (UNCONDITIONAL_JUMP)  ; LAB_0056be32

