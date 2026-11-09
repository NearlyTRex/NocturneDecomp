; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_00480000(float *param_1,float *param_2)
;
;
; XREF[1]:
;   shape_edittool.cpp_FUN_0047dc40 at 0047dcdb
;
; Referenced Globals:
;   undefined4 DAT_005d24e7
;   undefined4 DAT_005d24eb
;   undefined4 DAT_005f5cec
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407cc0
;   engine_matrix.c_transformToCache_FUN_004e8e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480000
        ;   Label: shape_edittool.cpp_FUN_00480000
    PUSH ESI                            ; 00480001
    PUSH EDI                            ; 00480002
    PUSH EBP                            ; 00480003
    SUB ESP,0x54                        ; 00480004
    MOV EBP,dword ptr [ESP + 0x68]      ; 00480007
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0048000b
    LEA EBX,[ESP + 0x18]                ; 0048000f
    MOV EAX,EBP                         ; 00480013
    FLD float ptr [EAX]                 ; 00480015
    FMUL float ptr [0x005f5cec]         ; 00480017 | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 0048001d
    FLD float ptr [EAX + 0x4]           ; 0048001f
    FMUL float ptr [0x005f5cec]         ; 00480022 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 00480028
    FLD float ptr [EAX + 0x8]           ; 0048002b
    FMUL float ptr [0x005f5cec]         ; 0048002e | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 00480034
    LEA EAX,[ESP + 0x18]                ; 00480037
    PUSH EAX                            ; 0048003b
    PUSH 0x0                            ; 0048003c
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 0048003e
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    FLD float ptr [0x005d24e7]          ; 00480043 | DAT_005d24e7
    FLD float ptr [EDI]                 ; 00480049
    FMUL ST1                            ; 0048004b
    FLD float ptr [EDI + 0x4]           ; 0048004d
    FMUL ST2                            ; 00480050
    FLD float ptr [EDI + 0x8]           ; 00480052
    FMULP ST3                           ; 00480055
    LEA ESI,[ESP + 0x38]                ; 00480057
    ADD ESP,0x8                         ; 0048005b
    LEA EDI,[ESP + 0x48]                ; 0048005e
    FXCH                                ; 00480062
    FSTP float ptr [ESP + 0x30]         ; 00480064
    FSTP float ptr [ESP + 0x34]         ; 00480068
    FSTP float ptr [ESP + 0x38]         ; 0048006c
    MOVSD ES:EDI,ESI                    ; 00480070
    MOVSD ES:EDI,ESI                    ; 00480071
    MOVSD ES:EDI,ESI                    ; 00480072
    FLD float ptr [0x005d24eb]          ; 00480073 | DAT_005d24eb
    FLD float ptr [EBP]                 ; 00480079
    FMUL ST1                            ; 0048007c
    FLD float ptr [EBP + 0x4]           ; 0048007e
    FMUL ST2                            ; 00480081
    FLD float ptr [EBP + 0x8]           ; 00480083
    FMULP ST3                           ; 00480086
    LEA EBX,[ESP + 0x18]                ; 00480088
    LEA EDI,[ESP + 0xc]                 ; 0048008c
    LEA ESI,[ESP + 0x3c]                ; 00480090
    FXCH                                ; 00480094
    FSTP float ptr [ESP + 0x3c]         ; 00480096
    FSTP float ptr [ESP + 0x40]         ; 0048009a
    FSTP float ptr [ESP + 0x44]         ; 0048009e
    MOVSD ES:EDI,ESI                    ; 004800a2
    MOVSD ES:EDI,ESI                    ; 004800a3
    MOVSD ES:EDI,ESI                    ; 004800a4
    LEA EAX,[ESP + 0x24]                ; 004800a5
    FLD float ptr [ESP + 0xc]           ; 004800a9
    FLD float ptr [ESP + 0x10]          ; 004800ad
    FLD float ptr [ESP + 0x14]          ; 004800b1
    LEA EDI,[ESP + 0x24]                ; 004800b5
    MOV ESI,ESP                         ; 004800b9
    FXCH ST2                            ; 004800bb
    FADD float ptr [ESP + 0x48]         ; 004800bd
    FXCH                                ; 004800c1
    FADD float ptr [ESP + 0x4c]         ; 004800c3
    FXCH ST2                            ; 004800c7
    FADD float ptr [ESP + 0x50]         ; 004800c9
    FXCH                                ; 004800cd
    FSTP float ptr [ESP]                ; 004800cf
    FXCH                                ; 004800d2
    FSTP float ptr [ESP + 0x4]          ; 004800d4
    FSTP float ptr [ESP + 0x8]          ; 004800d8
    MOVSD ES:EDI,ESI                    ; 004800dc
    MOVSD ES:EDI,ESI                    ; 004800dd
    MOVSD ES:EDI,ESI                    ; 004800de
    FLD float ptr [EAX]                 ; 004800df
    FMUL float ptr [0x005f5cec]         ; 004800e1 | DAT_005f5cec
    FISTP dword ptr [EBX]               ; 004800e7
    FLD float ptr [EAX + 0x4]           ; 004800e9
    FMUL float ptr [0x005f5cec]         ; 004800ec | DAT_005f5cec
    FISTP dword ptr [EBX + 0x4]         ; 004800f2
    FLD float ptr [EAX + 0x8]           ; 004800f5
    FMUL float ptr [0x005f5cec]         ; 004800f8 | DAT_005f5cec
    FISTP dword ptr [EBX + 0x8]         ; 004800fe
    LEA EAX,[ESP + 0x18]                ; 00480101
    PUSH EAX                            ; 00480105
    PUSH 0x1                            ; 00480106
    CALL engine_matrix.c_transformToCache_FUN_004e8e60 ; 00480108
        ;   XREF to: 004e8e60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_transformToCache_FUN_004e8e60(int cacheIndex, CVector3i * inputPoint)
    ADD ESP,0x8                         ; 0048010d
    MOV ESI,0x622044                    ; 00480110
    SUB ESP,0x30                        ; 00480115
    MOV ECX,0xc                         ; 00480118
    MOV EDI,ESP                         ; 0048011d
    MOVSD.REP ES:EDI,ESI                ; 0048011f
    SUB ESP,0x30                        ; 00480121
    MOV ECX,0xc                         ; 00480124
    MOV ESI,0x622014                    ; 00480129
    MOV EDI,ESP                         ; 0048012e
    MOVSD.REP ES:EDI,ESI                ; 00480130
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407cc0 ; 00480132
        ;   XREF to: 00407cc0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_clipAndDrawLine2D_FUN_00407cc0()
    ADD ESP,0x60                        ; 00480137
    ADD ESP,0x54                        ; 0048013a
    POP EBP                             ; 0048013d
    POP EDI                             ; 0048013e
    POP ESI                             ; 0048013f
    POP EBX                             ; 00480140
    RET                                 ; 00480141

