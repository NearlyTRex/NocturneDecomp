; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40(CBodyPart *this_ptr,CVector3i *out_bbox_min,CVector3i *out_bbox_max)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   out_bbox_min
; CVector3i *      Stack[0xc]:4   out_bbox_max
; Local Variables:
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined1       Stack[-0x84]:1  local_84
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_0041a050 at 0041a0df
;
; Referenced Globals:
;   double DOUBLE_00615e4c = 3.14159265350000
;   double DOUBLE_00615e54 = 0.0833333333333333
;   float FLOAT_00615e5c = 65536
;
; Called Functions:
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a630
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041aa40
        ;   Label: core_bodypart.cpp_CBodyPart_optimizeBoundingBoxRotation_FUN_0041aa40
    PUSH ESI                            ; 0041aa41
    PUSH EDI                            ; 0041aa42
    PUSH EBP                            ; 0041aa43
    MOV EBP,ESP                         ; 0041aa44
    SUB ESP,0xac                        ; 0041aa46
    AND ESP,0xfffffff8                  ; 0041aa4c
    MOV EDX,0x7fffffff                  ; 0041aa4f
    XOR ECX,ECX                         ; 0041aa54
    MOV dword ptr [ESP + 0x7c],EDX      ; 0041aa56
    MOV dword ptr [ESP + 0x78],ECX      ; 0041aa5a
    MOV EAX,dword ptr [ESP + 0x78]      ; 0041aa5e
        ;   Label: LAB_0041aa5e
    XOR EBX,EBX                         ; 0041aa62
    MOV dword ptr [ESP + 0x4],EAX       ; 0041aa64
    MOV dword ptr [ESP],EBX             ; 0041aa68
    MOV EAX,dword ptr [ESP]             ; 0041aa6b
        ;   Label: LAB_0041aa6b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0041aa6e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0041aa75
    FILD dword ptr [ESP + 0xa8]         ; 0041aa79
    MOV dword ptr [ESP + 0xa8],EAX      ; 0041aa80
    FLD double ptr [0x00615e4c]         ; 0041aa87 | DOUBLE_00615e4c
    FXCH                                ; 0041aa8d
    FMUL ST1                            ; 0041aa8f
    FILD dword ptr [ESP + 0xa8]         ; 0041aa91
    FMULP ST2                           ; 0041aa98
    FLD double ptr [0x00615e54]         ; 0041aa9a | DOUBLE_00615e54
    FXCH                                ; 0041aaa0
    FMUL ST1                            ; 0041aaa2
    FXCH ST2                            ; 0041aaa4
    FMULP                               ; 0041aaa6
    XOR ESI,ESI                         ; 0041aaa8
    LEA EAX,[ESP + 0x6c]                ; 0041aaaa
    MOV dword ptr [ESP + 0x74],ESI      ; 0041aaae
    PUSH EAX                            ; 0041aab2
    LEA EAX,[ESP + 0xc]                 ; 0041aab3
    FXCH                                ; 0041aab7
    FSTP float ptr [ESP + 0x70]         ; 0041aab9
    PUSH EAX                            ; 0041aabd
    FSTP float ptr [ESP + 0x78]         ; 0041aabe
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 0041aac2
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041aac7
    FLD float ptr [ESP + 0x8]           ; 0041aaca
    FMUL float ptr [0x00615e5c]         ; 0041aace | FLOAT_00615e5c
    FLD float ptr [ESP + 0xc]           ; 0041aad4
    FMUL float ptr [0x00615e5c]         ; 0041aad8 | FLOAT_00615e5c
    FLD float ptr [ESP + 0x10]          ; 0041aade
    FMUL float ptr [0x00615e5c]         ; 0041aae2 | FLOAT_00615e5c
    FLD float ptr [ESP + 0x14]          ; 0041aae8
    FMUL float ptr [0x00615e5c]         ; 0041aaec | FLOAT_00615e5c
    FLD float ptr [ESP + 0x18]          ; 0041aaf2
    FMUL float ptr [0x00615e5c]         ; 0041aaf6 | FLOAT_00615e5c
    FLD float ptr [ESP + 0x1c]          ; 0041aafc
    FMUL float ptr [0x00615e5c]         ; 0041ab00 | FLOAT_00615e5c
    FLD float ptr [ESP + 0x20]          ; 0041ab06
    FMUL float ptr [0x00615e5c]         ; 0041ab0a | FLOAT_00615e5c
    FXCH ST6                            ; 0041ab10
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041ab12
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x98]        ; 0041ab17
    FLD float ptr [ESP + 0x24]          ; 0041ab1e
    FMUL float ptr [0x00615e5c]         ; 0041ab22 | FLOAT_00615e5c
    FXCH ST5                            ; 0041ab28
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041ab2a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x9c]        ; 0041ab2f
    FLD float ptr [ESP + 0x28]          ; 0041ab36
    FMUL float ptr [0x00615e5c]         ; 0041ab3a | FLOAT_00615e5c
    MOV EDI,0x7fffffff                  ; 0041ab40
    MOV ECX,0x80000001                  ; 0041ab45
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ab4a
    MOV dword ptr [ESP + 0x68],EDI      ; 0041ab4d
    MOV dword ptr [ESP + 0x64],EDI      ; 0041ab51
    MOV dword ptr [ESP + 0x60],EDI      ; 0041ab55
    MOV dword ptr [ESP + 0x50],ECX      ; 0041ab59
    MOV dword ptr [ESP + 0x4c],ECX      ; 0041ab5d
    MOV dword ptr [ESP + 0x48],ECX      ; 0041ab61
    MOV EDX,dword ptr [EAX + 0x174]     ; 0041ab65
    XOR EDI,EDI                         ; 0041ab6b
    FXCH ST4                            ; 0041ab6d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041ab6f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 0041ab74
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041ab76
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST2                            ; 0041ab7b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041ab7d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0041ab82
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041ab84
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST6                            ; 0041ab89
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041ab8b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST5                            ; 0041ab90
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041ab92
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST4                            ; 0041ab97
    CALL crt_math.c_round_FUN_005fe6b0  ; 0041ab99
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH ST3                            ; 0041ab9e
    FISTP dword ptr [ESP + 0x84]        ; 0041aba0
    FXCH                                ; 0041aba7
    FISTP dword ptr [ESP + 0xa0]        ; 0041aba9
    FISTP dword ptr [ESP + 0x8c]        ; 0041abb0
    FXCH ST3                            ; 0041abb7
    FISTP dword ptr [ESP + 0x94]        ; 0041abb9
    FXCH                                ; 0041abc0
    FISTP dword ptr [ESP + 0x90]        ; 0041abc2
    FISTP dword ptr [ESP + 0x88]        ; 0041abc9
    FISTP dword ptr [ESP + 0x80]        ; 0041abd0
    TEST EDX,EDX                        ; 0041abd7
    JLE 0x0041ad12                      ; 0041abd9
        ;   XREF to: 0041ad12 (CONDITIONAL_JUMP)  ; LAB_0041ad12
    MOV dword ptr [ESP + 0xa4],ESI      ; 0041abdf
    MOV ECX,dword ptr [EBP + 0x14]      ; 0041abe6
        ;   Label: LAB_0041abe6
    MOV EDX,dword ptr [ESP + 0xa4]      ; 0041abe9
    MOV ECX,dword ptr [ECX + 0x178]     ; 0041abf0
    ADD ECX,EDX                         ; 0041abf6
    MOV EAX,dword ptr [ESP + 0x98]      ; 0041abf8
    MOV EDX,dword ptr [ECX]             ; 0041abff
    IMUL EDX                            ; 0041ac01
    SHRD EAX,EDX,0x10                   ; 0041ac03
    MOV EBX,EAX                         ; 0041ac07
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041ac09
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0041ac0c
    IMUL EDX                            ; 0041ac13
    SHRD EAX,EDX,0x10                   ; 0041ac15
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041ac19
    ADD EBX,EAX                         ; 0041ac1c
    MOV EAX,dword ptr [ESP + 0x90]      ; 0041ac1e
    IMUL EDX                            ; 0041ac25
    SHRD EAX,EDX,0x10                   ; 0041ac27
    MOV EDX,dword ptr [ECX]             ; 0041ac2b
    ADD EBX,EAX                         ; 0041ac2d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0041ac2f
    IMUL EDX                            ; 0041ac36
    SHRD EAX,EDX,0x10                   ; 0041ac38
    MOV ESI,EAX                         ; 0041ac3c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041ac3e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0041ac41
    IMUL EDX                            ; 0041ac48
    SHRD EAX,EDX,0x10                   ; 0041ac4a
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041ac4e
    ADD ESI,EAX                         ; 0041ac51
    MOV EAX,dword ptr [ESP + 0x88]      ; 0041ac53
    IMUL EDX                            ; 0041ac5a
    SHRD EAX,EDX,0x10                   ; 0041ac5c
    MOV EDX,dword ptr [ECX]             ; 0041ac60
    ADD ESI,EAX                         ; 0041ac62
    MOV EAX,dword ptr [ESP + 0x84]      ; 0041ac64
    IMUL EDX                            ; 0041ac6b
    SHRD EAX,EDX,0x10                   ; 0041ac6d
    MOV dword ptr [ESP + 0xa8],EAX      ; 0041ac71
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041ac78
    MOV EAX,dword ptr [ESP + 0x94]      ; 0041ac7b
    IMUL EDX                            ; 0041ac82
    SHRD EAX,EDX,0x10                   ; 0041ac84
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0041ac88
    ADD EDX,EAX                         ; 0041ac8f
    MOV EAX,dword ptr [ESP + 0x80]      ; 0041ac91
    MOV dword ptr [ESP + 0xa8],EDX      ; 0041ac98
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041ac9f
    IMUL EDX                            ; 0041aca2
    SHRD EAX,EDX,0x10                   ; 0041aca4
    MOV ECX,dword ptr [ESP + 0xa8]      ; 0041aca8
    MOV EDX,dword ptr [ESP + 0x60]      ; 0041acaf
    ADD EAX,ECX                         ; 0041acb3
    CMP EBX,EDX                         ; 0041acb5
    JL 0x0041adc3                       ; 0041acb7
        ;   XREF to: 0041adc3 (CONDITIONAL_JUMP)  ; LAB_0041adc3
    CMP EBX,dword ptr [ESP + 0x48]      ; 0041acbd
        ;   Label: LAB_0041acbd
    JLE 0x0041acc7                      ; 0041acc1
        ;   XREF to: 0041acc7 (CONDITIONAL_JUMP)  ; LAB_0041acc7
    MOV dword ptr [ESP + 0x48],EBX      ; 0041acc3
    CMP ESI,dword ptr [ESP + 0x64]      ; 0041acc7
        ;   Label: LAB_0041acc7
    JGE 0x0041acd1                      ; 0041accb
        ;   XREF to: 0041acd1 (CONDITIONAL_JUMP)  ; LAB_0041acd1
    MOV dword ptr [ESP + 0x64],ESI      ; 0041accd
    CMP ESI,dword ptr [ESP + 0x4c]      ; 0041acd1
        ;   Label: LAB_0041acd1
    JLE 0x0041acdb                      ; 0041acd5
        ;   XREF to: 0041acdb (CONDITIONAL_JUMP)  ; LAB_0041acdb
    MOV dword ptr [ESP + 0x4c],ESI      ; 0041acd7
    CMP EAX,dword ptr [ESP + 0x68]      ; 0041acdb
        ;   Label: LAB_0041acdb
    JGE 0x0041ace5                      ; 0041acdf
        ;   XREF to: 0041ace5 (CONDITIONAL_JUMP)  ; LAB_0041ace5
    MOV dword ptr [ESP + 0x68],EAX      ; 0041ace1
    CMP EAX,dword ptr [ESP + 0x50]      ; 0041ace5
        ;   Label: LAB_0041ace5
    JLE 0x0041acef                      ; 0041ace9
        ;   XREF to: 0041acef (CONDITIONAL_JUMP)  ; LAB_0041acef
    MOV dword ptr [ESP + 0x50],EAX      ; 0041aceb
    MOV ECX,dword ptr [ESP + 0xa4]      ; 0041acef
        ;   Label: LAB_0041acef
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041acf6
    INC EDI                             ; 0041acf9
    ADD ECX,0xc                         ; 0041acfa
    MOV EBX,dword ptr [EAX + 0x174]     ; 0041acfd
    MOV dword ptr [ESP + 0xa4],ECX      ; 0041ad03
    CMP EDI,EBX                         ; 0041ad0a
    JL 0x0041abe6                       ; 0041ad0c
        ;   XREF to: 0041abe6 (CONDITIONAL_JUMP)  ; LAB_0041abe6
    MOV EDX,dword ptr [ESP + 0x48]      ; 0041ad12
        ;   Label: LAB_0041ad12
    MOV ESI,dword ptr [ESP + 0x60]      ; 0041ad16
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0041ad1a
    MOV EDI,dword ptr [ESP + 0x64]      ; 0041ad1e
    SUB EDX,ESI                         ; 0041ad22
    SUB ECX,EDI                         ; 0041ad24
    MOV EAX,EDX                         ; 0041ad26
    CMP ECX,EDX                         ; 0041ad28
    JLE 0x0041ad2e                      ; 0041ad2a
        ;   XREF to: 0041ad2e (CONDITIONAL_JUMP)  ; LAB_0041ad2e
    MOV EAX,ECX                         ; 0041ad2c
    CMP EAX,dword ptr [ESP + 0x7c]      ; 0041ad2e
        ;   Label: LAB_0041ad2e
    JGE 0x0041ad72                      ; 0041ad32
        ;   XREF to: 0041ad72 (CONDITIONAL_JUMP)  ; LAB_0041ad72
    LEA EDI,[ESP + 0x3c]                ; 0041ad34
    LEA ESI,[ESP + 0x60]                ; 0041ad38
    MOVSD ES:EDI,ESI                    ; 0041ad3c
    MOVSD ES:EDI,ESI                    ; 0041ad3d
    MOVSD ES:EDI,ESI                    ; 0041ad3e
    LEA EDX,[ESP + 0x30]                ; 0041ad3f
    LEA EDI,[ESP + 0x54]                ; 0041ad43
    LEA ESI,[ESP + 0x48]                ; 0041ad47
    MOV dword ptr [ESP + 0x7c],EAX      ; 0041ad4b
    LEA EAX,[ESP + 0x6c]                ; 0041ad4f
    MOVSD ES:EDI,ESI                    ; 0041ad53
    MOVSD ES:EDI,ESI                    ; 0041ad54
    MOVSD ES:EDI,ESI                    ; 0041ad55
    CMP EDX,EAX                         ; 0041ad56
    JZ 0x0041ad72                       ; 0041ad58
        ;   XREF to: 0041ad72 (CONDITIONAL_JUMP)  ; LAB_0041ad72
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0041ad5a
    MOV dword ptr [ESP + 0x30],EAX      ; 0041ad5e
    MOV EAX,dword ptr [ESP + 0x70]      ; 0041ad62
    MOV dword ptr [ESP + 0x34],EAX      ; 0041ad66
    MOV EAX,dword ptr [ESP + 0x74]      ; 0041ad6a
    MOV dword ptr [ESP + 0x38],EAX      ; 0041ad6e
    MOV ECX,dword ptr [ESP]             ; 0041ad72
        ;   Label: LAB_0041ad72
    ADD ECX,0x2                         ; 0041ad75
    MOV dword ptr [ESP],ECX             ; 0041ad78
    CMP ECX,0x18                        ; 0041ad7b
    JNZ 0x0041aa6b                      ; 0041ad7e
        ;   XREF to: 0041aa6b (CONDITIONAL_JUMP)  ; LAB_0041aa6b
    MOV ESI,dword ptr [ESP + 0x78]      ; 0041ad84
    ADD ESI,0x2                         ; 0041ad88
    MOV dword ptr [ESP + 0x78],ESI      ; 0041ad8b
    CMP ESI,ECX                         ; 0041ad8f
    JNZ 0x0041aa5e                      ; 0041ad91
        ;   XREF to: 0041aa5e (CONDITIONAL_JUMP)  ; LAB_0041aa5e
    MOV EDI,dword ptr [EBP + 0x18]      ; 0041ad97
    LEA ESI,[ESP + 0x3c]                ; 0041ad9a
    MOVSD ES:EDI,ESI                    ; 0041ad9e
    MOVSD ES:EDI,ESI                    ; 0041ad9f
    MOVSD ES:EDI,ESI                    ; 0041ada0
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0041ada1
    LEA ESI,[ESP + 0x54]                ; 0041ada4
    LEA EAX,[ESP + 0x30]                ; 0041ada8
    MOVSD ES:EDI,ESI                    ; 0041adac
    MOVSD ES:EDI,ESI                    ; 0041adad
    MOVSD ES:EDI,ESI                    ; 0041adae
    PUSH EAX                            ; 0041adaf
    MOV ESI,dword ptr [EBP + 0x14]      ; 0041adb0
    PUSH ESI                            ; 0041adb3
    CALL core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a630 ; 0041adb4
        ;   XREF to: 0041a630 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_applyRotation_FUN_0041a630(CBodyPart * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0041adb9
    MOV ESP,EBP                         ; 0041adbc
    POP EBP                             ; 0041adbe
    POP EDI                             ; 0041adbf
    POP ESI                             ; 0041adc0
    POP EBX                             ; 0041adc1
    RET                                 ; 0041adc2
    MOV dword ptr [ESP + 0x60],EBX      ; 0041adc3
        ;   Label: LAB_0041adc3
    JMP 0x0041acbd                      ; 0041adc7
        ;   XREF to: 0041acbd (UNCONDITIONAL_JUMP)  ; LAB_0041acbd

