; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_renderLightCoronas_FUN_00444920(CDemonCamera *this_ptr,CDemonLight *light_source)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CDemonLight *    Stack[0x8]:4   light_source
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderScene_FUN_00509a80 at 00509ba4
;
; Referenced Globals:
;   double DOUBLE_0057b973 = 256
;   double DOUBLE_0057b97b = 3.32192809489000
;   undefined4 DAT_00b0e5fc
;   undefined4 DAT_00b0e600
;   undefined4 DAT_012b022c
;   undefined4 DAT_012b0634
;   undefined4 DAT_012b0638
;   undefined4 DAT_012b063c
;   undefined4 DAT_012b0640
;   undefined4 DAT_012b064c
;   undefined4 DAT_012b0658
;   undefined4 DAT_012b0660
;   uint*[1200] g_ZBufferScanlineArray
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044f0b0
;   crt_math.c_round_FUN_00563a30
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444920
        ;   Label: core_dcamera.cpp_CDemonCamera_renderLightCoronas_FUN_00444920
    PUSH ESI                            ; 00444921
    PUSH EDI                            ; 00444922
    PUSH EBP                            ; 00444923
    MOV EBP,ESP                         ; 00444924
    SUB ESP,0x50                        ; 00444926
    AND ESP,0xfffffff8                  ; 00444929
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044492c
    MOV ESI,EAX                         ; 0044492f
    MOV ECX,0xa                         ; 00444931
    MOV EDI,0x12b0638                   ; 00444936
    LEA ESI,[ESI + 0x110]               ; 0044493b
    XOR EBX,EBX                         ; 00444941
    MOV [0x012b0634],EAX                ; 00444943 | DAT_012b0634
    MOVSD.REP ES:EDI,ESI                ; 00444948 | DAT_012b0638 | DAT_012b063c
    ADD EBX,0x4                         ; 0044494a
        ;   Label: LAB_0044494a
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0044494d
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    AND EAX,0xff                        ; 00444952
    MOV dword ptr [EBX + 0x12b0230],EAX ; 00444957
    CMP EBX,0x400                       ; 0044495d
    JNZ 0x0044494a                      ; 00444963
        ;   XREF to: 0044494a (CONDITIONAL_JUMP)  ; LAB_0044494a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00444965
    MOV ECX,dword ptr [EAX + 0x154]     ; 00444968
    XOR EDX,EDX                         ; 0044496e
    TEST ECX,ECX                        ; 00444970
    JLE 0x004449a0                      ; 00444972
        ;   XREF to: 004449a0 (CONDITIONAL_JUMP)  ; LAB_004449a0
    XOR EAX,EAX                         ; 00444974
    MOV ECX,dword ptr [EBP + 0x14]      ; 00444976
        ;   Label: LAB_00444976
    MOV ECX,dword ptr [ECX + 0x150]     ; 00444979
    XOR EBX,EBX                         ; 0044497f
    MOV dword ptr [EAX + 0x146b290],ECX ; 00444981
    MOV ECX,dword ptr [EBP + 0x14]      ; 00444987
    MOV dword ptr [EAX + 0x146b650],EBX ; 0044498a
    INC EDX                             ; 00444990
    MOV ESI,dword ptr [ECX + 0x154]     ; 00444991
    ADD EAX,0x4                         ; 00444997
    CMP EDX,ESI                         ; 0044499a
    JL 0x00444976                       ; 0044499c
        ;   XREF to: 00444976 (CONDITIONAL_JUMP)  ; LAB_00444976
    MOV EAX,EAX                         ; 0044499e
    MOV EDI,dword ptr [EBP + 0x18]      ; 004449a0
        ;   Label: LAB_004449a0
    PUSH EDI                            ; 004449a3
    CALL core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044f0b0 ; 004449a4
        ;   XREF to: 0044f0b0 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0044f0b0(CDemonLight * this_ptr)
    FLD float ptr [EDI + 0x100]         ; 004449a9
    FMUL double ptr [0x0057b973]        ; 004449af | DOUBLE_0057b973
    ADD ESP,0x4                         ; 004449b5
    FLD ST0                             ; 004449b8
    FLDLG2                              ; 004449ba
    FXCH                                ; 004449bc
    FYL2X                               ; 004449be
    FMUL double ptr [0x0057b97b]        ; 004449c0 | DOUBLE_0057b97b
    FXCH                                ; 004449c6
    CALL crt_math.c_round_FUN_00563a30  ; 004449c8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    XOR EAX,EAX                         ; 004449cd
    FXCH                                ; 004449cf
    CALL crt_math.c_round_FUN_00563a30  ; 004449d1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV dword ptr [ESP + 0x30],EAX      ; 004449d6
    FISTP dword ptr [0x00b0e600]        ; 004449da | DAT_00b0e600
    MOV EAX,dword ptr [EBP + 0x14]      ; 004449e0
    MOV EDX,dword ptr [0x00b0e600]      ; 004449e3 | DAT_00b0e600
    FISTP dword ptr [0x00b0e5fc]        ; 004449e9 | DAT_00b0e5fc
    DEC EDX                             ; 004449ef
    MOV ECX,dword ptr [EAX + 0x154]     ; 004449f0
    MOV dword ptr [0x00b0e600],EDX      ; 004449f6 | DAT_00b0e600
    TEST ECX,ECX                        ; 004449fc
    JLE 0x00444a9b                      ; 004449fe
        ;   XREF to: 00444a9b (CONDITIONAL_JUMP)  ; LAB_00444a9b
    MOV EDI,0x9bb178                    ; 00444a04
    MOV EAX,0x146ba10                   ; 00444a09
    MOV EDX,0xa9d078                    ; 00444a0e
    XOR ESI,ESI                         ; 00444a13
    MOV ECX,0x8d9278                    ; 00444a15
    MOV dword ptr [ESP + 0x34],ESI      ; 00444a1a
    MOV dword ptr [ESP + 0x28],EDI      ; 00444a1e
    MOV dword ptr [ESP + 0x24],EAX      ; 00444a22
    MOV dword ptr [ESP + 0x20],EDX      ; 00444a26
    MOV dword ptr [ESP + 0x2c],ECX      ; 00444a2a
    MOV EDX,dword ptr [EBP + 0x14]      ; 00444a2e
        ;   Label: LAB_00444a2e
    MOV EAX,dword ptr [ESP + 0x34]      ; 00444a31
    MOV EBX,dword ptr [EDX + 0x150]     ; 00444a35
    CMP EBX,dword ptr [EAX + 0x146b290] ; 00444a3b
    JNZ 0x00444aac                      ; 00444a41
        ;   XREF to: 00444aac (CONDITIONAL_JUMP)  ; LAB_00444aac
    MOV EBX,dword ptr [ESP + 0x34]      ; 00444a43
        ;   Label: LAB_00444a43
    MOV ESI,dword ptr [ESP + 0x28]      ; 00444a47
    MOV EDI,dword ptr [ESP + 0x24]      ; 00444a4b
    MOV EAX,dword ptr [ESP + 0x20]      ; 00444a4f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00444a53
    MOV ECX,dword ptr [ESP + 0x30]      ; 00444a57
    ADD EBX,0x4                         ; 00444a5b
    ADD ESI,0xf00                       ; 00444a5e
    ADD EDI,0x500                       ; 00444a64
    ADD EAX,0x140                       ; 00444a6a
    ADD EDX,0xf00                       ; 00444a6f
    INC ECX                             ; 00444a75
    MOV dword ptr [ESP + 0x34],EBX      ; 00444a76
    MOV dword ptr [ESP + 0x28],ESI      ; 00444a7a
    MOV dword ptr [ESP + 0x2c],EDX      ; 00444a7e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00444a82
    MOV dword ptr [ESP + 0x24],EDI      ; 00444a85
    MOV dword ptr [ESP + 0x20],EAX      ; 00444a89
    MOV EBX,dword ptr [EDX + 0x154]     ; 00444a8d
    MOV dword ptr [ESP + 0x30],ECX      ; 00444a93
    CMP ECX,EBX                         ; 00444a97
    JL 0x00444a2e                       ; 00444a99
        ;   XREF to: 00444a2e (CONDITIONAL_JUMP)  ; LAB_00444a2e
    MOV dword ptr [0x012b022c],0x1      ; 00444a9b | DAT_012b022c
        ;   Label: LAB_00444a9b
    MOV ESP,EBP                         ; 00444aa5
    POP EBP                             ; 00444aa7
    POP EDI                             ; 00444aa8
    POP ESI                             ; 00444aa9
    POP EBX                             ; 00444aaa
    RET                                 ; 00444aab
    MOV EAX,dword ptr [ESP + 0x34]      ; 00444aac
        ;   Label: LAB_00444aac
    MOV EAX,dword ptr [EAX + 0x146b290] ; 00444ab0
    MOV dword ptr [ESP + 0x48],EAX      ; 00444ab6
    MOV ESI,dword ptr [ESP + 0x48]      ; 00444aba
    IMUL EBX,ESI,0xc                    ; 00444abe
    MOV EAX,dword ptr [ESP + 0x34]      ; 00444ac1
    MOV EAX,dword ptr [EAX + 0x146b650] ; 00444ac5
    MOV dword ptr [ESP + 0x38],EAX      ; 00444acb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00444acf
    ADD EAX,EBX                         ; 00444ad3
    MOV dword ptr [ESP + 0x44],EAX      ; 00444ad5
    MOV EAX,dword ptr [ESP + 0x20]      ; 00444ad9
    ADD EAX,ESI                         ; 00444add
    MOV EDX,dword ptr [ESP + 0x24]      ; 00444adf
    MOV dword ptr [ESP + 0x4c],EAX      ; 00444ae3
    LEA EAX,[ESI*0x4 + 0x0]             ; 00444ae7
    MOV CL,byte ptr [0x012b0660]        ; 00444aee | DAT_012b0660
    ADD EDX,EAX                         ; 00444af4
    MOV EAX,dword ptr [ESP + 0x30]      ; 00444af6
    MOV dword ptr [ESP + 0x3c],EDX      ; 00444afa
    MOV EDX,ESI                         ; 00444afe
    SHL EAX,CL                          ; 00444b00
    SHL EDX,CL                          ; 00444b02
    MOV EAX,dword ptr [EAX*0x4 + 0x1bd4260] ; 00444b04 | g_ZBufferScanlineArray
    SHL EDX,0x2                         ; 00444b0b
    ADD EAX,EDX                         ; 00444b0e
    MOV dword ptr [ESP + 0x40],EAX      ; 00444b10
    MOV EAX,dword ptr [ESP + 0x28]      ; 00444b14
    MOV EDX,dword ptr [ESP + 0x38]      ; 00444b18
    ADD EBX,EAX                         ; 00444b1c
    CMP ESI,EDX                         ; 00444b1e
    JGE 0x00444a43                      ; 00444b20
        ;   XREF to: 00444a43 (CONDITIONAL_JUMP)  ; LAB_00444a43
        ;   Label: LAB_00444b20
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00444b26
    MOV EAX,dword ptr [ESP + 0x40]      ; 00444b2a
    MOV ESI,dword ptr [EDX]             ; 00444b2e
    CMP ESI,dword ptr [EAX]             ; 00444b30
    JBE 0x00444c38                      ; 00444b32
        ;   XREF to: 00444c38 (CONDITIONAL_JUMP)  ; LAB_00444c38
    FLD float ptr [EBX + 0x4]           ; 00444b38
    FMUL float ptr [0x012b064c]         ; 00444b3b | DAT_012b064c
    FLD float ptr [EBX]                 ; 00444b41
    FMUL float ptr [0x012b0640]         ; 00444b43 | DAT_012b0640
    FADDP                               ; 00444b49
    FLD float ptr [EBX + 0x8]           ; 00444b4b
    FMUL float ptr [0x012b0658]         ; 00444b4e | DAT_012b0658
    FADDP                               ; 00444b54
    FLDZ                                ; 00444b56
    FCOMPP                              ; 00444b58
    FNSTSW AX                           ; 00444b5a
    SAHF                                ; 00444b5c
    JA 0x00444c38                       ; 00444b5d
        ;   XREF to: 00444c38 (CONDITIONAL_JUMP)  ; LAB_00444c38
    MOV EDI,dword ptr [ESP + 0x44]      ; 00444b63
    PUSH EDI                            ; 00444b67
    MOV EAX,[0x012b0634]                ; 00444b68 | DAT_012b0634
    PUSH EAX                            ; 00444b6d
    LEA ESI,[ESP + 0x8]                 ; 00444b6e
    LEA EDI,[ESP + 0x14]                ; 00444b72
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610 ; 00444b76
        ;   XREF to: 00441610 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_00441610(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
    LEA ESI,[ESP + 0x8]                 ; 00444b7b
    ADD ESP,0x8                         ; 00444b7f
    MOVSD ES:EDI,ESI                    ; 00444b82
    MOVSD ES:EDI,ESI                    ; 00444b83
    MOVSD ES:EDI,ESI                    ; 00444b84
    CMP dword ptr [ESP + 0x14],0x0      ; 00444b85
    JLE 0x00444c38                      ; 00444b8a
        ;   XREF to: 00444c38 (CONDITIONAL_JUMP)  ; LAB_00444c38
    MOV EDX,dword ptr [ESP + 0x10]      ; 00444b90
    MOV EAX,[0x012b0634]                ; 00444b94 | DAT_012b0634
    SAR EDX,0x10                        ; 00444b99
    IMUL EDX,dword ptr [EAX + 0x1cc0]   ; 00444b9c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00444ba3
    SAR ECX,0x10                        ; 00444ba7
    ADD EDX,ECX                         ; 00444baa
    LEA ESI,[EDX + EDX*0x1]             ; 00444bac
    MOV EDX,dword ptr [EAX + 0x2f94]    ; 00444baf
    MOV DX,word ptr [EDX + ESI*0x1]     ; 00444bb5
    MOV ESI,dword ptr [0x00b0e5fc]      ; 00444bb9 | DAT_00b0e5fc
    AND EDX,0xffff                      ; 00444bbf
    CMP EDX,ESI                         ; 00444bc5
    JGE 0x00444c38                      ; 00444bc7
        ;   XREF to: 00444c38 (CONDITIONAL_JUMP)  ; LAB_00444c38
    MOV EDI,dword ptr [ESP + 0x14]      ; 00444bc9
    LEA ECX,[EDX + 0x80]                ; 00444bcd
    CMP ECX,EDI                         ; 00444bd3
    JLE 0x00444c38                      ; 00444bd5
        ;   XREF to: 00444c38 (CONDITIONAL_JUMP)  ; LAB_00444c38
    MOV ESI,dword ptr [ESP + 0xc]       ; 00444bd7
    MOV CL,byte ptr [EAX + 0x1cc8]      ; 00444bdb
    SAR ESI,CL                          ; 00444be1
    MOV ECX,dword ptr [EAX + 0x1c68]    ; 00444be3
    MOV EDI,dword ptr [ESP + 0x10]      ; 00444be9
    AND ESI,ECX                         ; 00444bed
    MOV CL,byte ptr [EAX + 0x1ccc]      ; 00444bef
    SAR EDI,CL                          ; 00444bf5
    MOV ECX,EDI                         ; 00444bf7
    MOV EDI,dword ptr [EAX + 0x1c68]    ; 00444bf9
    AND EDI,ECX                         ; 00444bff
    MOV CL,byte ptr [EAX + 0x1c60]      ; 00444c01
    SHL EDI,CL                          ; 00444c07
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 00444c09
    LEA ECX,[EDI + ESI*0x1]             ; 00444c0f
    ADD EAX,ECX                         ; 00444c12
    XOR ECX,ECX                         ; 00444c14
    MOV CL,byte ptr [EAX]               ; 00444c16
    MOV EAX,[0x00b0e5fc]                ; 00444c18 | DAT_00b0e5fc
    SUB EAX,EDX                         ; 00444c1d
    MOV EDX,EAX                         ; 00444c1f
    IMUL EDX,ECX                        ; 00444c21
    MOV CL,byte ptr [0x00b0e600]        ; 00444c24 | DAT_00b0e600
    SAR EDX,CL                          ; 00444c2a
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00444c2c
    XOR EAX,EAX                         ; 00444c30
    MOV AL,byte ptr [ECX]               ; 00444c32
    ADD EAX,EDX                         ; 00444c34
    MOV byte ptr [ECX],AL               ; 00444c36
    MOV EAX,0x1                         ; 00444c38
        ;   Label: LAB_00444c38
    MOV ESI,dword ptr [ESP + 0x3c]      ; 00444c3d
    MOV EDI,dword ptr [ESP + 0x44]      ; 00444c41
    MOV EDX,dword ptr [ESP + 0x48]      ; 00444c45
    MOV CL,byte ptr [0x012b0660]        ; 00444c49 | DAT_012b0660
    ADD EBX,0xc                         ; 00444c4f
    ADD ESI,0x4                         ; 00444c52
    ADD EDI,0xc                         ; 00444c55
    INC EDX                             ; 00444c58
    SHL EAX,CL                          ; 00444c59
    MOV ECX,dword ptr [ESP + 0x40]      ; 00444c5b
    SHL EAX,0x2                         ; 00444c5f
    MOV dword ptr [ESP + 0x3c],ESI      ; 00444c62
    MOV dword ptr [ESP + 0x44],EDI      ; 00444c66
    MOV dword ptr [ESP + 0x48],EDX      ; 00444c6a
    ADD ECX,EAX                         ; 00444c6e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00444c70
    MOV dword ptr [ESP + 0x40],ECX      ; 00444c74
    INC EAX                             ; 00444c78
    MOV ECX,dword ptr [ESP + 0x38]      ; 00444c79
    MOV dword ptr [ESP + 0x4c],EAX      ; 00444c7d
    CMP EDX,ECX                         ; 00444c81
    JMP 0x00444b20                      ; 00444c83
        ;   XREF to: 00444b20 (UNCONDITIONAL_JUMP)  ; LAB_00444b20

