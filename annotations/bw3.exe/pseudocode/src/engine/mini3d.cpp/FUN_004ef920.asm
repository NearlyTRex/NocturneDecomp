; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004ef920(undefined4 *param_1,CVector3f *param_2,float param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; Referenced Globals:
;   undefined4 DAT_005c818d
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d79784
;   undefined4 DAT_02cf6100
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b550
;   engine_mini3d.cpp_FUN_004edcc0
;   unkafter_minecar.cpp_FUN_004eceb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef920
        ;   Label: engine_mini3d.cpp_FUN_004ef920
    PUSH ESI                            ; 004ef921
    PUSH EDI                            ; 004ef922
    SUB ESP,0x1c                        ; 004ef923
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004ef926
    MOV EDX,dword ptr [0x01d79784]      ; 004ef92a | DAT_01d79784
    CMP EDX,0x32                        ; 004ef930
    JGE 0x004efa07                      ; 004ef933
        ;   XREF to: 004efa07 (CONDITIONAL_JUMP)  ; LAB_004efa07
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef939
    ADD EAX,EDX                         ; 004ef940
    SHL EAX,0x2                         ; 004ef942
    SUB EAX,EDX                         ; 004ef945
    MOV EBX,0x1d79788                   ; 004ef947
    SHL EAX,0x2                         ; 004ef94c
    ADD EBX,EAX                         ; 004ef94f
    MOV EAX,EDX                         ; 004ef951
    INC EAX                             ; 004ef953
    MOV DL,0x1                          ; 004ef954
    MOV [0x01d79784],EAX                ; 004ef956 | DAT_01d79784
    MOV byte ptr [EAX + 0x1d7a65f],DL   ; 004ef95b
    CMP EBX,ESI                         ; 004ef961
    JZ 0x004ef975                       ; 004ef963
        ;   XREF to: 004ef975 (CONDITIONAL_JUMP)  ; LAB_004ef975
    MOV EAX,dword ptr [ESI]             ; 004ef965
    MOV dword ptr [EBX],EAX             ; 004ef967
    MOV EAX,dword ptr [ESI + 0x4]       ; 004ef969
    MOV dword ptr [EBX + 0x4],EAX       ; 004ef96c
    MOV EAX,dword ptr [ESI + 0x8]       ; 004ef96f
    MOV dword ptr [EBX + 0x8],EAX       ; 004ef972
    MOV ECX,dword ptr [ESP + 0x30]      ; 004ef975
        ;   Label: LAB_004ef975
    PUSH ECX                            ; 004ef979
    LEA EAX,[EBX + 0xc]                 ; 004ef97a
    PUSH EAX                            ; 004ef97d
    CALL core_dirmat.cpp_FUN_0045b550   ; 004ef97e
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004ef983
    FLD1                                ; 004ef986
    FDIV float ptr [ESP + 0x34]         ; 004ef988
    FLD float ptr [EBX + 0xc]           ; 004ef98c
    FMUL float ptr [ESP + 0x38]         ; 004ef98f
    FLD float ptr [EBX + 0x18]          ; 004ef993
    FMUL float ptr [ESP + 0x38]         ; 004ef996
    FLD float ptr [EBX + 0x24]          ; 004ef99a
    FMUL float ptr [ESP + 0x38]         ; 004ef99d
    FLD float ptr [EBX + 0x10]          ; 004ef9a1
    FMUL float ptr [ESP + 0x38]         ; 004ef9a4
    FLD float ptr [EBX + 0x1c]          ; 004ef9a8
    FMUL float ptr [ESP + 0x38]         ; 004ef9ab
    FLD float ptr [EBX + 0x28]          ; 004ef9af
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ef9b2
    FMUL float ptr [ESP + 0x38]         ; 004ef9b6
    MOV dword ptr [EBX + 0x34],EAX      ; 004ef9ba
    MOV EAX,dword ptr [ESP + 0x38]      ; 004ef9bd
    MOV dword ptr [EBX + 0x3c],EAX      ; 004ef9c1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ef9c4
    MOV dword ptr [EBX + 0x40],EAX      ; 004ef9c8
    MOV EAX,dword ptr [ESP + 0x40]      ; 004ef9cb
    MOV dword ptr [EBX + 0x44],EAX      ; 004ef9cf
    MOV EAX,dword ptr [ESP + 0x44]      ; 004ef9d2
    MOV dword ptr [EBX + 0x48],EAX      ; 004ef9d6
    MOV EDI,dword ptr [0x02cf6100]      ; 004ef9d9 | DAT_02cf6100
    FXCH ST5                            ; 004ef9df
    FSTP float ptr [EBX + 0xc]          ; 004ef9e1
    FXCH ST3                            ; 004ef9e4
    FSTP float ptr [EBX + 0x18]         ; 004ef9e6
    FXCH                                ; 004ef9e9
    FSTP float ptr [EBX + 0x24]         ; 004ef9eb
    FSTP float ptr [EBX + 0x10]         ; 004ef9ee
    FSTP float ptr [EBX + 0x1c]         ; 004ef9f1
    FSTP float ptr [EBX + 0x28]         ; 004ef9f4
    FSTP float ptr [EBX + 0x38]         ; 004ef9f7
    TEST EDI,EDI                        ; 004ef9fa
    JZ 0x004efa07                       ; 004ef9fc
        ;   XREF to: 004efa07 (CONDITIONAL_JUMP)  ; LAB_004efa07
    CMP dword ptr [0x01c6cee8],0x0      ; 004ef9fe | DAT_01c6cee8
    JNZ 0x004efa0e                      ; 004efa05
        ;   XREF to: 004efa0e (CONDITIONAL_JUMP)  ; LAB_004efa0e
    ADD ESP,0x1c                        ; 004efa07
        ;   Label: LAB_004efa07
    POP EDI                             ; 004efa0a
    POP ESI                             ; 004efa0b
    POP EBX                             ; 004efa0c
    RET                                 ; 004efa0d
    PUSH 0x2cfd900                      ; 004efa0e
        ;   Label: LAB_004efa0e
    CALL unkafter_minecar.cpp_FUN_004eceb0 ; 004efa13
        ;   XREF to: 004eceb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_minecar.cpp_FUN_004eceb0()
    ADD ESP,0x4                         ; 004efa18
    CALL engine_mini3d.cpp_FUN_004edcc0 ; 004efa1b
        ;   XREF to: 004edcc0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004edcc0()
    FLD1                                ; 004efa20
    FDIV float ptr [ESP + 0x38]         ; 004efa22
    MOV EAX,dword ptr [EBX + 0x14]      ; 004efa26
    MOV dword ptr [ESP],EAX             ; 004efa29
    MOV EAX,dword ptr [EBX + 0x20]      ; 004efa2c
    MOV dword ptr [ESP + 0x4],EAX       ; 004efa2f
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004efa33
    MOV dword ptr [ESP + 0x8],EAX       ; 004efa36
    MOV EAX,dword ptr [ESI]             ; 004efa3a
    MOV dword ptr [ESP + 0xc],EAX       ; 004efa3c
    MOV EAX,dword ptr [ESI + 0x4]       ; 004efa40
    MOV dword ptr [ESP + 0x10],EAX      ; 004efa43
    MOV EAX,dword ptr [ESI + 0x8]       ; 004efa47
    MOV dword ptr [ESP + 0x14],EAX      ; 004efa4a
    FLD1                                ; 004efa4e
    FPATAN                              ; 004efa50
    FMUL double ptr [0x005c818d]        ; 004efa52 | DAT_005c818d
    PUSH dword ptr [EBX + 0x48]         ; 004efa58
    PUSH dword ptr [EBX + 0x44]         ; 004efa5b
    PUSH dword ptr [EBX + 0x40]         ; 004efa5e
    FSTP float ptr [ESP + 0x24]         ; 004efa61
    PUSH dword ptr [ESP + 0x24]         ; 004efa65
    LEA EAX,[ESP + 0x10]                ; 004efa69
    PUSH dword ptr [ESP + 0x44]         ; 004efa6d
    PUSH EAX                            ; 004efa71
    LEA EAX,[ESP + 0x24]                ; 004efa72
    PUSH EAX                            ; 004efa76
    CALL dword ptr [0x02cf6100]         ; 004efa77 | DAT_02cf6100
    ADD ESP,0x1c                        ; 004efa7d
    ADD ESP,0x1c                        ; 004efa80
    POP EDI                             ; 004efa83
    POP ESI                             ; 004efa84
    POP EBX                             ; 004efa85
    RET                                 ; 004efa86

