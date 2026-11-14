; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_doc_cpp_CDoc_canReachPickup_FUN_00475c20(CDoc *this_ptr,CDemonActor *item,int pickup_type,float *best_distance)
;
; Parameters:
; CDoc *           Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   item
; int              Stack[0xc]:4   pickup_type
; float *          Stack[0x10]:4   best_distance
;
; Referenced Globals:
;   undefined1* switchdataD_00475c0c = 00475c42
;   undefined4 DAT_005da5cc
;   undefined4 DAT_005da5d4
;   undefined4 DAT_005da5dc
;   undefined4 DAT_005da5e4
;   undefined4 DAT_005da5ec
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.game_control
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475c20
        ;   Label: core_doc.cpp_CDoc_canReachPickup_FUN_00475c20
    PUSH ESI                            ; 00475c21
    PUSH EDI                            ; 00475c22
    PUSH EBP                            ; 00475c23
    MOV EBP,ESP                         ; 00475c24
    SUB ESP,0x12c                       ; 00475c26
    AND ESP,0xfffffff8                  ; 00475c2c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00475c2f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00475c32
    DEC EAX                             ; 00475c35
    CMP EAX,0x3                         ; 00475c36
    JA 0x00475c52                       ; 00475c39
        ;   XREF to: 00475c52 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x475c0c]  ; 00475c3b | caseD_1 | caseD_2 | caseD_4
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 00475c42
        ;   Label: caseD_1
    CMP dword ptr [EAX + 0x25b0],0x0    ; 00475c45
    JZ 0x00475f3f                       ; 00475c4c
        ;   XREF to: 00475f3f (CONDITIONAL_JUMP)  ; LAB_00475f3f
    XOR ESI,ESI                         ; 00475c52
        ;   Label: default
    MOV EAX,ESI                         ; 00475c54
    MOV ESP,EBP                         ; 00475c56
    POP EBP                             ; 00475c58
    POP EDI                             ; 00475c59
    POP ESI                             ; 00475c5a
    POP EBX                             ; 00475c5b
    RET                                 ; 00475c5c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00475c5d
        ;   Label: caseD_2
    MOV EDI,dword ptr [EAX + 0x2628]    ; 00475c60
    TEST EDI,EDI                        ; 00475c66
    JNZ 0x00475c52                      ; 00475c68
        ;   XREF to: 00475c52 (CONDITIONAL_JUMP)  ; default
    MOV EDX,0x40400000                  ; 00475c6a
    MOV ECX,0x40000000                  ; 00475c6f
    LEA EAX,[ESP + 0xa0]                ; 00475c74
    LEA ESI,[ESP + 0x40]                ; 00475c7b
    MOV dword ptr [ESP + 0xa0],EDI      ; 00475c7f
    MOV dword ptr [ESP + 0xa4],EDX      ; 00475c86
    MOV dword ptr [ESP + 0xa8],ECX      ; 00475c8d
    CMP ESI,EAX                         ; 00475c94
    JZ 0x00475ca4                       ; 00475c96
        ;   XREF to: 00475ca4 (CONDITIONAL_JUMP)  ; LAB_00475ca4
    MOV dword ptr [ESP + 0x44],EDX      ; 00475c98
    MOV dword ptr [ESP + 0x48],ECX      ; 00475c9c
    MOV dword ptr [ESP + 0x40],EDI      ; 00475ca0
    LEA EAX,[ESP + 0x40]                ; 00475ca4
        ;   Label: LAB_00475ca4
    PUSH EAX                            ; 00475ca8
    MOV EDX,dword ptr [EBP + 0x14]      ; 00475ca9
    PUSH EDX                            ; 00475cac
    LEA ESI,[ESP + 0x78]                ; 00475cad
    LEA EDI,[ESP + 0x9c]                ; 00475cb1
    CALL core_actor.cpp_FUN_00408b40    ; 00475cb8
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x78]                ; 00475cbd
    ADD ESP,0x8                         ; 00475cc1
    MOVSD ES:EDI,ESI                    ; 00475cc4
    MOVSD ES:EDI,ESI                    ; 00475cc5
    MOVSD ES:EDI,ESI                    ; 00475cc6
    PUSH EBX                            ; 00475cc7
    MOV EAX,dword ptr [EBX + 0x154]     ; 00475cc8
    LEA ESI,[ESP + 0x20]                ; 00475cce
    LEA EDI,[ESP + 0x8]                 ; 00475cd2
    CALL dword ptr [EAX + 0x1c]         ; 00475cd6
    MOV ECX,0x6                         ; 00475cd9
    LEA ESI,[ESP + 0x20]                ; 00475cde
    ADD ESP,0x4                         ; 00475ce2
    MOVSD.REP ES:EDI,ESI                ; 00475ce5
    FLD float ptr [ESP + 0x4]           ; 00475ce7
    FLD float ptr [ESP + 0x8]           ; 00475ceb
    LEA ESI,[ESP + 0x4]                 ; 00475cef
    FLD float ptr [ESP + 0xc]           ; 00475cf3
    LEA EDI,[ESP + 0xb8]                ; 00475cf7
    FXCH ST2                            ; 00475cfe
    FADD float ptr [ESI + 0xc]          ; 00475d00
    FXCH                                ; 00475d03
    FADD float ptr [ESI + 0x10]         ; 00475d05
    FXCH ST2                            ; 00475d08
    FADD float ptr [ESI + 0x14]         ; 00475d0a
    FXCH                                ; 00475d0d
    FSTP float ptr [ESP + 0xe8]         ; 00475d0f
    FXCH                                ; 00475d16
    FSTP float ptr [ESP + 0xec]         ; 00475d18
    LEA ESI,[ESP + 0xe8]                ; 00475d1f
    FSTP float ptr [ESP + 0xf0]         ; 00475d26
    MOVSD ES:EDI,ESI                    ; 00475d2d
    MOVSD ES:EDI,ESI                    ; 00475d2e
    MOVSD ES:EDI,ESI                    ; 00475d2f
    FLD float ptr [0x005da5d4]          ; 00475d30 | DAT_005da5d4
    FLD float ptr [ESP + 0xb8]          ; 00475d36
    FMUL ST1                            ; 00475d3d
    FLD float ptr [ESP + 0xbc]          ; 00475d3f
    FMUL ST2                            ; 00475d46
    LEA EAX,[ESP + 0xdc]                ; 00475d48
    FLD float ptr [ESP + 0xc0]          ; 00475d4f
    FMULP ST3                           ; 00475d56
    PUSH EAX                            ; 00475d58
    LEA EDI,[ESP + 0xe0]                ; 00475d59
    LEA ESI,[ESP + 0x8c]                ; 00475d60
    FXCH                                ; 00475d67
    FSTP float ptr [ESP + 0x8c]         ; 00475d69
    FSTP float ptr [ESP + 0x90]         ; 00475d70
    FSTP float ptr [ESP + 0x94]         ; 00475d77
    MOVSD ES:EDI,ESI                    ; 00475d7e
    MOVSD ES:EDI,ESI                    ; 00475d7f
    MOVSD ES:EDI,ESI                    ; 00475d80
    PUSH EBX                            ; 00475d81
    LEA ESI,[ESP + 0x120]               ; 00475d82
    LEA EDI,[ESP + 0x60]                ; 00475d89
    CALL core_actor.cpp_FUN_00408b40    ; 00475d8d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x120]               ; 00475d92
    ADD ESP,0x8                         ; 00475d99
    MOVSD ES:EDI,ESI                    ; 00475d9c
    MOVSD ES:EDI,ESI                    ; 00475d9d
    MOVSD ES:EDI,ESI                    ; 00475d9e
    FLD float ptr [ESP + 0x58]          ; 00475d9f
    FLD float ptr [ESP + 0x5c]          ; 00475da3
    FLD float ptr [ESP + 0x60]          ; 00475da7
    LEA EDI,[ESP + 0x4c]                ; 00475dab
    LEA ESI,[ESP + 0x34]                ; 00475daf
    FXCH ST2                            ; 00475db3
    FSUB float ptr [ESP + 0x94]         ; 00475db5
    FXCH                                ; 00475dbc
    FSUB float ptr [ESP + 0x98]         ; 00475dbe
    FXCH ST2                            ; 00475dc5
    FSUB float ptr [ESP + 0x9c]         ; 00475dc7
    FXCH                                ; 00475dce
    FSTP float ptr [ESP + 0x34]         ; 00475dd0
    FXCH                                ; 00475dd4
    FSTP float ptr [ESP + 0x38]         ; 00475dd6
    FSTP float ptr [ESP + 0x3c]         ; 00475dda
    MOVSD ES:EDI,ESI                    ; 00475dde
    MOVSD ES:EDI,ESI                    ; 00475ddf
    MOVSD ES:EDI,ESI                    ; 00475de0
    FLD float ptr [ESP + 0x50]          ; 00475de1
    FABS                                ; 00475de5
    FCOMP double ptr [0x005da5dc]       ; 00475de7 | DAT_005da5dc
    FNSTSW AX                           ; 00475ded
    SAHF                                ; 00475def
    JA 0x00475c52                       ; 00475df0
        ;   XREF to: 00475c52 (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x54]          ; 00475df6
    FMUL ST0                            ; 00475dfa
    FLD float ptr [ESP + 0x4c]          ; 00475dfc
    FMUL ST0                            ; 00475e00
    FADDP                               ; 00475e02
    FSQRT                               ; 00475e04
    MOV EAX,[0x0061d95c]                ; 00475e06 | g_CGamePtr
    MOV ECX,dword ptr [EAX + 0xd0]      ; 00475e0b | g_CGameInstance.game_control
    FSTP float ptr [ESP]                ; 00475e11
    CMP ECX,0x3                         ; 00475e14
    JNZ 0x00476047                      ; 00475e17
        ;   XREF to: 00476047 (CONDITIONAL_JUMP)  ; LAB_00476047
    FLD float ptr [ESP]                 ; 00475e1d
    FCOMP double ptr [0x005da5ec]       ; 00475e20 | DAT_005da5ec
    FNSTSW AX                           ; 00475e26
    SAHF                                ; 00475e28
    JA 0x00475c52                       ; 00475e29
        ;   XREF to: 00475c52 (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x20]      ; 00475e2f
        ;   Label: LAB_00475e2f
    FLD float ptr [ESP]                 ; 00475e32
    FCOMP float ptr [EAX]               ; 00475e35
    FNSTSW AX                           ; 00475e37
    SAHF                                ; 00475e39
    JBE 0x00476064                      ; 00475e3a
        ;   XREF to: 00476064 (CONDITIONAL_JUMP)  ; LAB_00476064
    XOR ESI,ESI                         ; 00475e40
    MOV EAX,ESI                         ; 00475e42
    MOV ESP,EBP                         ; 00475e44
    POP EBP                             ; 00475e46
    POP EDI                             ; 00475e47
    POP ESI                             ; 00475e48
    POP EBX                             ; 00475e49
    RET                                 ; 00475e4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00475e4b
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0x2628],0x0    ; 00475e4e
    JNZ 0x00475c52                      ; 00475e55
        ;   XREF to: 00475c52 (CONDITIONAL_JUMP)  ; default
    TEST EBX,EBX                        ; 00475e5b
    JNZ 0x00475eab                      ; 00475e5d
        ;   XREF to: 00475eab (CONDITIONAL_JUMP)  ; LAB_00475eab
    MOV EDI,0x40400000                  ; 00475e5f
        ;   Label: LAB_00475e5f
    XOR ESI,ESI                         ; 00475e64
    MOV EAX,0x40000000                  ; 00475e66
    MOV dword ptr [ESP + 0xc4],ESI      ; 00475e6b
    MOV dword ptr [ESP + 0xcc],EAX      ; 00475e72
    LEA ESI,[ESP + 0xc4]                ; 00475e79
    LEA EAX,[ESP + 0x40]                ; 00475e80
    MOV dword ptr [ESP + 0xc8],EDI      ; 00475e84
    CMP EAX,ESI                         ; 00475e8b
    JZ 0x00475ca4                       ; 00475e8d
        ;   XREF to: 00475ca4 (CONDITIONAL_JUMP)  ; LAB_00475ca4
    MOV ESI,0x40000000                  ; 00475e93
    MOV dword ptr [ESP + 0x44],EDI      ; 00475e98
    XOR EDX,EDX                         ; 00475e9c
    MOV dword ptr [ESP + 0x48],ESI      ; 00475e9e
    MOV dword ptr [ESP + 0x40],EDX      ; 00475ea2
    JMP 0x00475ca4                      ; 00475ea6
        ;   XREF to: 00475ca4 (UNCONDITIONAL_JUMP)  ; LAB_00475ca4
    MOV ECX,dword ptr [EBP + 0x14]      ; 00475eab
        ;   Label: LAB_00475eab
    PUSH ECX                            ; 00475eae
    MOV EAX,dword ptr [EBX + 0x154]     ; 00475eaf
    PUSH EBX                            ; 00475eb5
    CALL dword ptr [EAX + 0x84]         ; 00475eb6
    ADD ESP,0x8                         ; 00475ebc
    CMP EAX,0x4                         ; 00475ebf
    SETZ AL                             ; 00475ec2
    AND EAX,0xff                        ; 00475ec5
    JZ 0x00475e5f                       ; 00475eca
        ;   XREF to: 00475e5f (CONDITIONAL_JUMP)  ; LAB_00475e5f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00475ecc
    ADD EAX,0x20                        ; 00475ecf
    PUSH EAX                            ; 00475ed2
    PUSH EBX                            ; 00475ed3
    LEA ESI,[ESP + 0x114]               ; 00475ed4
    LEA EDI,[ESP + 0x108]               ; 00475edb
    CALL core_actor.cpp_FUN_00408bb0    ; 00475ee2
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x114]               ; 00475ee7
    ADD ESP,0x8                         ; 00475eee
    LEA EAX,[ESP + 0x100]               ; 00475ef1
    MOVSD ES:EDI,ESI                    ; 00475ef8
    MOVSD ES:EDI,ESI                    ; 00475ef9
    MOVSD ES:EDI,ESI                    ; 00475efa
    PUSH EAX                            ; 00475efb
    LEA ESI,[ESP + 0xd4]                ; 00475efc
    LEA EDI,[ESP + 0xb0]                ; 00475f03
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 00475f0a
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0xd4]                ; 00475f0f
    ADD ESP,0x4                         ; 00475f16
    MOVSD ES:EDI,ESI                    ; 00475f19
    MOVSD ES:EDI,ESI                    ; 00475f1a
    MOVSD ES:EDI,ESI                    ; 00475f1b
    FLD float ptr [ESP + 0xb0]          ; 00475f1c
    FABS                                ; 00475f23
    FCOMP double ptr [0x005da5cc]       ; 00475f25 | DAT_005da5cc
    FNSTSW AX                           ; 00475f2b
    SAHF                                ; 00475f2d
    JBE 0x00475e5f                      ; 00475f2e
        ;   XREF to: 00475e5f (CONDITIONAL_JUMP)  ; LAB_00475e5f
    XOR ESI,ESI                         ; 00475f34
    MOV EAX,ESI                         ; 00475f36
    MOV ESP,EBP                         ; 00475f38
    POP EBP                             ; 00475f3a
    POP EDI                             ; 00475f3b
    POP ESI                             ; 00475f3c
    POP EBX                             ; 00475f3d
    RET                                 ; 00475f3e
    ADD EAX,0x20                        ; 00475f3f
        ;   Label: LAB_00475f3f
    PUSH EAX                            ; 00475f42
    PUSH EBX                            ; 00475f43
    LEA ESI,[ESP + 0x6c]                ; 00475f44
    LEA EDI,[ESP + 0xfc]                ; 00475f48
    CALL core_actor.cpp_FUN_00408bb0    ; 00475f4f
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x6c]                ; 00475f54
    ADD ESP,0x8                         ; 00475f58
    MOVSD ES:EDI,ESI                    ; 00475f5b
    MOVSD ES:EDI,ESI                    ; 00475f5c
    MOVSD ES:EDI,ESI                    ; 00475f5d
    FLD float ptr [ESP + 0xf8]          ; 00475f5e
    FMUL ST0                            ; 00475f65
    FLD float ptr [ESP + 0xf4]          ; 00475f67
    FMUL ST0                            ; 00475f6e
    FADDP                               ; 00475f70
    FLD float ptr [ESP + 0xfc]          ; 00475f72
    FMUL ST0                            ; 00475f79
    FADDP                               ; 00475f7b
    FSQRT                               ; 00475f7d
    FLDZ                                ; 00475f7f
    FXCH                                ; 00475f81
    FSTP float ptr [ESP + 0x124]        ; 00475f83
    FCOMP float ptr [ESP + 0x124]       ; 00475f8a
    FNSTSW AX                           ; 00475f91
    SAHF                                ; 00475f93
    JNC 0x0047602e                      ; 00475f94
        ;   XREF to: 0047602e (CONDITIONAL_JUMP)  ; LAB_0047602e
    FLD1                                ; 00475f9a
    FLD float ptr [ESP + 0xf4]          ; 00475f9c
    FXCH                                ; 00475fa3
    FDIV float ptr [ESP + 0x124]        ; 00475fa5
    FXCH                                ; 00475fac
    FMUL ST1                            ; 00475fae
    FLD float ptr [ESP + 0xf8]          ; 00475fb0
    FMUL ST2                            ; 00475fb7
    FLD float ptr [ESP + 0xfc]          ; 00475fb9
    FMULP ST3                           ; 00475fc0
    FXCH                                ; 00475fc2
    FSTP float ptr [ESP + 0xf4]         ; 00475fc4
    FSTP float ptr [ESP + 0xf8]         ; 00475fcb
    FSTP float ptr [ESP + 0xfc]         ; 00475fd2
    FLD float ptr [ESP + 0xfc]          ; 00475fd9
        ;   Label: LAB_00475fd9
    FLDZ                                ; 00475fe0
    FCOMPP                              ; 00475fe2
    FNSTSW AX                           ; 00475fe4
    SAHF                                ; 00475fe6
    JC 0x00475c52                       ; 00475fe7
        ;   XREF to: 00475c52 (CONDITIONAL_JUMP)  ; default
    MOV EDX,0x40400000                  ; 00475fed
    MOV ECX,0x40000000                  ; 00475ff2
    XOR EAX,EAX                         ; 00475ff7
    LEA ESI,[ESP + 0x40]                ; 00475ff9
    MOV dword ptr [ESP + 0x7c],EAX      ; 00475ffd
    MOV dword ptr [ESP + 0x80],EDX      ; 00476001
    LEA EAX,[ESP + 0x7c]                ; 00476008
    MOV dword ptr [ESP + 0x84],ECX      ; 0047600c
    CMP ESI,EAX                         ; 00476013
    JZ 0x00475ca4                       ; 00476015
        ;   XREF to: 00475ca4 (CONDITIONAL_JUMP)  ; LAB_00475ca4
    MOV dword ptr [ESP + 0x44],EDX      ; 0047601b
    XOR ESI,ESI                         ; 0047601f
    MOV dword ptr [ESP + 0x48],ECX      ; 00476021
    MOV dword ptr [ESP + 0x40],ESI      ; 00476025
    JMP 0x00475ca4                      ; 00476029
        ;   XREF to: 00475ca4 (UNCONDITIONAL_JUMP)  ; LAB_00475ca4
    XOR ECX,ECX                         ; 0047602e
        ;   Label: LAB_0047602e
    MOV dword ptr [ESP + 0xf8],ECX      ; 00476030
    MOV dword ptr [ESP + 0xf4],ECX      ; 00476037
    MOV dword ptr [ESP + 0xfc],ECX      ; 0047603e
    JMP 0x00475fd9                      ; 00476045
        ;   XREF to: 00475fd9 (UNCONDITIONAL_JUMP)  ; LAB_00475fd9
    FLD float ptr [ESP]                 ; 00476047
        ;   Label: LAB_00476047
    FCOMP double ptr [0x005da5e4]       ; 0047604a | DAT_005da5e4
    FNSTSW AX                           ; 00476050
    SAHF                                ; 00476052
    JBE 0x00475e2f                      ; 00476053
        ;   XREF to: 00475e2f (CONDITIONAL_JUMP)  ; LAB_00475e2f
    XOR ESI,ESI                         ; 00476059
    MOV EAX,ESI                         ; 0047605b
    MOV ESP,EBP                         ; 0047605d
    POP EBP                             ; 0047605f
    POP EDI                             ; 00476060
    POP ESI                             ; 00476061
    POP EBX                             ; 00476062
    RET                                 ; 00476063
    MOV EBX,dword ptr [EBP + 0x20]      ; 00476064
        ;   Label: LAB_00476064
    MOV EAX,dword ptr [ESP]             ; 00476067
    MOV ESI,0x1                         ; 0047606a
    MOV dword ptr [EBX],EAX             ; 0047606f
    MOV EAX,ESI                         ; 00476071
    MOV ESP,EBP                         ; 00476073
    POP EBP                             ; 00476075
    POP EDI                             ; 00476076
    POP ESI                             ; 00476077
    POP EBX                             ; 00476078
    RET                                 ; 00476079

