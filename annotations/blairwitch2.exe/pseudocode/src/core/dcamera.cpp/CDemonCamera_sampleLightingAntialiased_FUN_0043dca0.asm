; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_sampleLightingAntialiased_FUN_0043dca0(CDemonCamera *this_ptr,CVector3i *world_pos,CDemonLight *light_source,int intensity)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   world_pos
; CDemonLight *    Stack[0xc]:4   light_source
; int              Stack[0x10]:4   intensity
; Local Variables:
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
;   core_dcamera.cpp_FUN_0043e300 at 0043e324
;
; Referenced Globals:
;   undefined4 DAT_005ce45e
;   undefined4 DAT_01468540
;   undefined4 DAT_01468542
;   undefined4 DAT_01468544
;   undefined4 DAT_01468546
;   undefined4 DAT_01468548
;   undefined4 DAT_026810c0
;   undefined4 DAT_026810c4
;   undefined4 DAT_026810c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043dca0
        ;   Label: core_dcamera.cpp_CDemonCamera_sampleLightingAntialiased_FUN_0043dca0
    PUSH ESI                            ; 0043dca1
    PUSH EDI                            ; 0043dca2
    PUSH EBP                            ; 0043dca3
    MOV EBP,ESP                         ; 0043dca4
    SUB ESP,0x28                        ; 0043dca6
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043dca9
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0043dcac
    CMP dword ptr [ESI + 0x1cd0],0x0    ; 0043dcaf
    JNZ 0x0043de9b                      ; 0043dcb6
        ;   XREF to: 0043de9b (CONDITIONAL_JUMP)  ; LAB_0043de9b
    MOV EBX,dword ptr [EAX]             ; 0043dcbc
    MOV EDI,dword ptr [ESI + 0x16c]     ; 0043dcbe
    MOV EDX,dword ptr [ESI + 0x170]     ; 0043dcc4
    SUB EBX,EDI                         ; 0043dcca
    MOV ECX,dword ptr [ESI + 0x174]     ; 0043dccc
    MOV dword ptr [EBP + -0x28],EBX     ; 0043dcd2
    MOV EBX,dword ptr [EAX + 0x4]       ; 0043dcd5
    MOV EAX,dword ptr [EAX + 0x8]       ; 0043dcd8
    SUB EBX,EDX                         ; 0043dcdb
    SUB EAX,ECX                         ; 0043dcdd
    MOV EDX,dword ptr [EBP + -0x28]     ; 0043dcdf
    MOV dword ptr [EBP + -0x20],EAX     ; 0043dce2
    MOV EAX,dword ptr [ESI + 0x180]     ; 0043dce5
    MOV dword ptr [EBP + -0x24],EBX     ; 0043dceb
    IMUL EDX                            ; 0043dcee
    SHRD EAX,EDX,0x10                   ; 0043dcf0
    MOV EDX,dword ptr [EBP + -0x24]     ; 0043dcf4
    MOV EBX,EAX                         ; 0043dcf7
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0043dcf9
    IMUL EDX                            ; 0043dcff
    SHRD EAX,EDX,0x10                   ; 0043dd01
    MOV EDX,dword ptr [EBP + -0x20]     ; 0043dd05
    ADD EBX,EAX                         ; 0043dd08
    MOV EAX,dword ptr [ESI + 0x198]     ; 0043dd0a
    IMUL EDX                            ; 0043dd10
    SHRD EAX,EDX,0x10                   ; 0043dd12
    ADD EBX,EAX                         ; 0043dd16
    MOV dword ptr [0x026810c8],EBX      ; 0043dd18 | DAT_026810c8
    TEST EBX,EBX                        ; 0043dd1e
    JLE 0x0043dd65                      ; 0043dd20
        ;   XREF to: 0043dd65 (CONDITIONAL_JUMP)  ; LAB_0043dd65
    MOV EDX,dword ptr [EBP + -0x28]     ; 0043dd22
    MOV EAX,dword ptr [ESI + 0x178]     ; 0043dd25
    IMUL EDX                            ; 0043dd2b
    SHRD EAX,EDX,0x10                   ; 0043dd2d
    MOV EDX,dword ptr [EBP + -0x24]     ; 0043dd31
    MOV EBX,EAX                         ; 0043dd34
    MOV EAX,dword ptr [ESI + 0x184]     ; 0043dd36
    IMUL EDX                            ; 0043dd3c
    SHRD EAX,EDX,0x10                   ; 0043dd3e
    MOV EDX,dword ptr [EBP + -0x20]     ; 0043dd42
    ADD EBX,EAX                         ; 0043dd45
    MOV EAX,dword ptr [ESI + 0x190]     ; 0043dd47
    IMUL EDX                            ; 0043dd4d
    SHRD EAX,EDX,0x10                   ; 0043dd4f
    ADD EBX,EAX                         ; 0043dd53
    MOV EDI,dword ptr [0x026810c8]      ; 0043dd55 | DAT_026810c8
    MOV dword ptr [0x026810c0],EBX      ; 0043dd5b | DAT_026810c0
    CMP EBX,EDI                         ; 0043dd61
    JL 0x0043ddbf                       ; 0043dd63
        ;   XREF to: 0043ddbf (CONDITIONAL_JUMP)  ; LAB_0043ddbf
    MOV EAX,0x1468540                   ; 0043dd65
        ;   Label: LAB_0043dd65
    CMP dword ptr [EAX + 0x8],0x0       ; 0043dd6a | DAT_01468548 | DAT_026810c8
        ;   Label: LAB_0043dd6a
    JLE 0x0043ddb6                      ; 0043dd6e
        ;   XREF to: 0043ddb6 (CONDITIONAL_JUMP)  ; LAB_0043ddb6
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043dd70 | DAT_01468544 | DAT_026810c4
    MOV EBX,dword ptr [ESI + 0x1cc0]    ; 0043dd73
    SAR EDX,0x10                        ; 0043dd79
    IMUL EBX,EDX                        ; 0043dd7c
    MOV EDX,dword ptr [EAX]             ; 0043dd7f | DAT_01468540 | DAT_026810c0
    SAR EDX,0x10                        ; 0043dd81
    ADD EDX,EBX                         ; 0043dd84
    MOV EBX,dword ptr [ESI + 0x2f94]    ; 0043dd86
    MOV DX,word ptr [EBX + EDX*0x2]     ; 0043dd8c
    AND EDX,0xffff                      ; 0043dd90
    JZ 0x0043ddb6                       ; 0043dd96
        ;   XREF to: 0043ddb6 (CONDITIONAL_JUMP)  ; LAB_0043ddb6
    FILD dword ptr [EAX + 0x8]          ; 0043dd98 | DAT_01468548 | DAT_026810c8
    FMUL double ptr [0x005ce45e]        ; 0043dd9b | DAT_005ce45e
    FSTP float ptr [EBP + -0x10]        ; 0043dda1
    FLD float ptr [EBP + -0x10]         ; 0043dda4
    FCOMP float ptr [ESI + 0x140]       ; 0043dda7
    FNSTSW AX                           ; 0043ddad
    SAHF                                ; 0043ddaf
    JC 0x0043de64                       ; 0043ddb0
        ;   XREF to: 0043de64 (CONDITIONAL_JUMP)  ; LAB_0043de64
    XOR EAX,EAX                         ; 0043ddb6
        ;   Label: LAB_0043ddb6
    MOV ESP,EBP                         ; 0043ddb8
    POP EBP                             ; 0043ddba
    POP EDI                             ; 0043ddbb
    POP ESI                             ; 0043ddbc
    POP EBX                             ; 0043ddbd
    RET                                 ; 0043ddbe
    MOV EAX,EDI                         ; 0043ddbf
        ;   Label: LAB_0043ddbf
    NEG EAX                             ; 0043ddc1
    CMP EAX,EBX                         ; 0043ddc3
    JGE 0x0043dd65                      ; 0043ddc5
        ;   XREF to: 0043dd65 (CONDITIONAL_JUMP)  ; LAB_0043dd65
    MOV EDX,dword ptr [EBP + -0x28]     ; 0043ddc7
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0043ddca
    IMUL EDX                            ; 0043ddd0
    SHRD EAX,EDX,0x10                   ; 0043ddd2
    MOV EDX,dword ptr [EBP + -0x24]     ; 0043ddd6
    MOV EBX,EAX                         ; 0043ddd9
    MOV EAX,dword ptr [ESI + 0x188]     ; 0043dddb
    IMUL EDX                            ; 0043dde1
    SHRD EAX,EDX,0x10                   ; 0043dde3
    MOV EDX,dword ptr [EBP + -0x20]     ; 0043dde7
    ADD EBX,EAX                         ; 0043ddea
    MOV EAX,dword ptr [ESI + 0x194]     ; 0043ddec
    IMUL EDX                            ; 0043ddf2
    SHRD EAX,EDX,0x10                   ; 0043ddf4
    ADD EBX,EAX                         ; 0043ddf8
    MOV ECX,dword ptr [0x026810c8]      ; 0043ddfa | DAT_026810c8
    MOV dword ptr [0x026810c4],EBX      ; 0043de00 | DAT_026810c4
    CMP EBX,ECX                         ; 0043de06
    JGE 0x0043dd65                      ; 0043de08
        ;   XREF to: 0043dd65 (CONDITIONAL_JUMP)  ; LAB_0043dd65
    MOV EAX,ECX                         ; 0043de0e
    NEG EAX                             ; 0043de10
    CMP EAX,EBX                         ; 0043de12
    JGE 0x0043dd65                      ; 0043de14
        ;   XREF to: 0043dd65 (CONDITIONAL_JUMP)  ; LAB_0043dd65
    MOV EAX,[0x026810c0]                ; 0043de1a | DAT_026810c0
    MOV EBX,ECX                         ; 0043de1f
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0043de21
    IMUL EDX                            ; 0043de27
    IDIV EBX                            ; 0043de29
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0043de2b
    ADD EAX,EDX                         ; 0043de31
    MOV EBX,dword ptr [0x026810c8]      ; 0043de33 | DAT_026810c8
    MOV [0x026810c0],EAX                ; 0043de39 | DAT_026810c0
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0043de3e
    MOV EAX,[0x026810c4]                ; 0043de44 | DAT_026810c4
    IMUL EDX                            ; 0043de49
    IDIV EBX                            ; 0043de4b
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0043de4d
    ADD EAX,EDX                         ; 0043de53
    MOV [0x026810c4],EAX                ; 0043de55 | DAT_026810c4
    MOV EAX,0x26810c0                   ; 0043de5a
    JMP 0x0043dd6a                      ; 0043de5f
        ;   XREF to: 0043dd6a (UNCONDITIONAL_JUMP)  ; LAB_0043dd6a
    FLD float ptr [ESI + 0x140]         ; 0043de64
        ;   Label: LAB_0043de64
    FSUB float ptr [EBP + -0x10]        ; 0043de6a
    FDIV float ptr [ESI + 0x140]        ; 0043de6d
    FSTP float ptr [EBP + -0x10]        ; 0043de73
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043de76
    MOV dword ptr [EBP + -0x4],EAX      ; 0043de79
    FILD dword ptr [EBP + -0x4]         ; 0043de7c
    FMUL float ptr [EBP + -0x10]        ; 0043de7f
    FSTP float ptr [EBP + -0x10]        ; 0043de82
    FLD float ptr [EBP + 0xfffffff0]    ; 0043de85
    FISTP dword ptr [EBP + 0x20]        ; 0043de8b
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043de91
    MOV ESP,EBP                         ; 0043de94
    POP EBP                             ; 0043de96
    POP EDI                             ; 0043de97
    POP ESI                             ; 0043de98
    POP EBX                             ; 0043de99
    RET                                 ; 0043de9a
    MOV EBX,dword ptr [EAX]             ; 0043de9b
        ;   Label: LAB_0043de9b
    MOV ECX,dword ptr [ESI + 0x16c]     ; 0043de9d
    MOV EDI,dword ptr [ESI + 0x170]     ; 0043dea3
    SUB EBX,ECX                         ; 0043dea9
    MOV EDX,dword ptr [ESI + 0x174]     ; 0043deab
    MOV dword ptr [EBP + -0x1c],EBX     ; 0043deb1
    MOV EBX,dword ptr [EAX + 0x4]       ; 0043deb4
    MOV EAX,dword ptr [EAX + 0x8]       ; 0043deb7
    SUB EBX,EDI                         ; 0043deba
    SUB EAX,EDX                         ; 0043debc
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0043debe
    MOV dword ptr [EBP + -0x14],EAX     ; 0043dec1
    MOV EAX,dword ptr [ESI + 0x180]     ; 0043dec4
    MOV dword ptr [EBP + -0x18],EBX     ; 0043deca
    IMUL EDX                            ; 0043decd
    SHRD EAX,EDX,0x10                   ; 0043decf
    MOV EDX,dword ptr [EBP + -0x18]     ; 0043ded3
    MOV EBX,EAX                         ; 0043ded6
    MOV EAX,dword ptr [ESI + 0x18c]     ; 0043ded8
    IMUL EDX                            ; 0043dede
    SHRD EAX,EDX,0x10                   ; 0043dee0
    MOV EDX,dword ptr [EBP + -0x14]     ; 0043dee4
    ADD EBX,EAX                         ; 0043dee7
    MOV EAX,dword ptr [ESI + 0x198]     ; 0043dee9
    IMUL EDX                            ; 0043deef
    SHRD EAX,EDX,0x10                   ; 0043def1
    ADD EBX,EAX                         ; 0043def5
    MOV dword ptr [0x026810c8],EBX      ; 0043def7 | DAT_026810c8
    TEST EBX,EBX                        ; 0043defd
    JLE 0x0043df4a                      ; 0043deff
        ;   XREF to: 0043df4a (CONDITIONAL_JUMP)  ; LAB_0043df4a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0043df01
    MOV EAX,dword ptr [ESI + 0x178]     ; 0043df04
    IMUL EDX                            ; 0043df0a
    SHRD EAX,EDX,0x10                   ; 0043df0c
    MOV EDX,dword ptr [EBP + -0x18]     ; 0043df10
    MOV EBX,EAX                         ; 0043df13
    MOV EAX,dword ptr [ESI + 0x184]     ; 0043df15
    IMUL EDX                            ; 0043df1b
    SHRD EAX,EDX,0x10                   ; 0043df1d
    MOV EDX,dword ptr [EBP + -0x14]     ; 0043df21
    ADD EBX,EAX                         ; 0043df24
    MOV EAX,dword ptr [ESI + 0x190]     ; 0043df26
    IMUL EDX                            ; 0043df2c
    SHRD EAX,EDX,0x10                   ; 0043df2e
    ADD EBX,EAX                         ; 0043df32
    MOV dword ptr [0x026810c0],EBX      ; 0043df34 | DAT_026810c0
    MOV EAX,EBX                         ; 0043df3a
    MOV EBX,dword ptr [0x026810c8]      ; 0043df3c | DAT_026810c8
    CMP EAX,EBX                         ; 0043df42
    JL 0x0043e1fc                       ; 0043df44
        ;   XREF to: 0043e1fc (CONDITIONAL_JUMP)  ; LAB_0043e1fc
    MOV EAX,0x1468540                   ; 0043df4a
        ;   Label: LAB_0043df4a
    MOV EDI,dword ptr [EAX + 0x8]       ; 0043df4f | DAT_01468548 | DAT_026810c8
        ;   Label: LAB_0043df4f
    MOV EBX,EAX                         ; 0043df52
    TEST EDI,EDI                        ; 0043df54
    JLE 0x0043ddb6                      ; 0043df56
        ;   XREF to: 0043ddb6 (CONDITIONAL_JUMP)  ; LAB_0043ddb6
    MOV dword ptr [EBP + -0x8],0x1      ; 0043df5c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043df63 | DAT_01468544 | DAT_026810c4
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0043df66
    SAR EDX,0x10                        ; 0043df6c
    IMUL ECX,EDX                        ; 0043df6f
    MOV EDX,dword ptr [EAX]             ; 0043df72 | DAT_01468540 | DAT_026810c0
    SAR EDX,0x10                        ; 0043df74
    ADD EDX,ECX                         ; 0043df77
    MOV ECX,dword ptr [ESI + 0x2f94]    ; 0043df79
    ADD EDX,EDX                         ; 0043df7f
    ADD EDX,ECX                         ; 0043df81
    XOR EDI,EDI                         ; 0043df83
    MOV DX,word ptr [EDX]               ; 0043df85
    AND EDX,0xffff                      ; 0043df88
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043df8e | DAT_01468548
    ADD EDX,0x90                        ; 0043df91
    CMP EDX,ECX                         ; 0043df97
    JG 0x0043e2ab                       ; 0043df99
        ;   XREF to: 0043e2ab (CONDITIONAL_JUMP)  ; LAB_0043e2ab
    INC word ptr [EBX + 0x2]            ; 0043df9f | DAT_01468542
        ;   Label: LAB_0043df9f
    MOV EAX,dword ptr [EBX]             ; 0043dfa3 | DAT_01468540
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0043dfa5
    SAR EAX,0x10                        ; 0043dfab
    CMP EAX,EDX                         ; 0043dfae
    JGE 0x0043e02a                      ; 0043dfb0
        ;   XREF to: 0043e02a (CONDITIONAL_JUMP)  ; LAB_0043e02a
    MOV EDX,dword ptr [EBX + 0x4]       ; 0043dfb2 | DAT_01468544
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0043dfb5
    SAR EDX,0x10                        ; 0043dfbb
    IMUL EDX,ECX                        ; 0043dfbe
    ADD EAX,EDX                         ; 0043dfc1
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0043dfc3
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0043dfc9
    AND EAX,0xffff                      ; 0043dfcd
    MOV EDX,dword ptr [EBX + 0x8]       ; 0043dfd2 | DAT_01468548
    ADD EAX,0x90                        ; 0043dfd5
    CMP EAX,EDX                         ; 0043dfda
    JLE 0x0043e027                      ; 0043dfdc
        ;   XREF to: 0043e027 (CONDITIONAL_JUMP)  ; LAB_0043e027
    MOV EAX,dword ptr [EBX]             ; 0043dfde | DAT_01468540
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0043dfe0
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0043dfe6
    SAR EAX,CL                          ; 0043dfec
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0043dfee
    AND EDX,EAX                         ; 0043dff4
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043dff6 | DAT_01468544
    SAR EAX,CL                          ; 0043dff9
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0043dffb
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0043e001
    SHL EAX,CL                          ; 0043e007
    ADD EDX,EAX                         ; 0043e009
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 0043e00b
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0043e011
    AND EAX,0xff                        ; 0043e014
    SHL EAX,0xa                         ; 0043e019
    MOV EDX,dword ptr [EBP + 0x20]      ; 0043e01c
    IMUL EDX                            ; 0043e01f
    SHRD EAX,EDX,0x10                   ; 0043e021
    ADD EDI,EAX                         ; 0043e025
    INC dword ptr [EBP + -0x8]          ; 0043e027
        ;   Label: LAB_0043e027
    MOV EDX,dword ptr [EBX]             ; 0043e02a | DAT_01468540
        ;   Label: LAB_0043e02a
    SUB EDX,0x20000                     ; 0043e02c
    MOV EAX,EDX                         ; 0043e032
    SAR EAX,0x10                        ; 0043e034
    MOV dword ptr [EBX],EDX             ; 0043e037 | DAT_01468540
    TEST EAX,EAX                        ; 0043e039
    JLE 0x0043e0bc                      ; 0043e03b
        ;   XREF to: 0043e0bc (CONDITIONAL_JUMP)  ; LAB_0043e0bc
    MOV EDX,dword ptr [EBX + 0x4]       ; 0043e041 | DAT_01468544
    MOV ECX,dword ptr [ESI + 0x1cc0]    ; 0043e044
    SAR EDX,0x10                        ; 0043e04a
    IMUL EDX,ECX                        ; 0043e04d
    ADD EAX,EDX                         ; 0043e050
    LEA EDX,[EAX + EAX*0x1]             ; 0043e052
    MOV EAX,dword ptr [ESI + 0x2f94]    ; 0043e055
    MOV AX,word ptr [EDX + EAX*0x1]     ; 0043e05b
    AND EAX,0xffff                      ; 0043e05f
    MOV EDX,dword ptr [EBX + 0x8]       ; 0043e064 | DAT_01468548
    ADD EAX,0x90                        ; 0043e067
    CMP EAX,EDX                         ; 0043e06c
    JLE 0x0043e0b9                      ; 0043e06e
        ;   XREF to: 0043e0b9 (CONDITIONAL_JUMP)  ; LAB_0043e0b9
    MOV EAX,dword ptr [EBX]             ; 0043e070 | DAT_01468540
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0043e072
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0043e078
    SAR EAX,CL                          ; 0043e07e
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0043e080
    AND EDX,EAX                         ; 0043e086
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043e088 | DAT_01468544
    SAR EAX,CL                          ; 0043e08b
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0043e08d
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0043e093
    SHL EAX,CL                          ; 0043e099
    ADD EAX,EDX                         ; 0043e09b
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0043e09d
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0043e0a3
    AND EAX,0xff                        ; 0043e0a6
    SHL EAX,0xa                         ; 0043e0ab
    MOV EDX,dword ptr [EBP + 0x20]      ; 0043e0ae
    IMUL EDX                            ; 0043e0b1
    SHRD EAX,EDX,0x10                   ; 0043e0b3
    ADD EDI,EAX                         ; 0043e0b7
    INC dword ptr [EBP + -0x8]          ; 0043e0b9
        ;   Label: LAB_0043e0b9
    MOV AX,word ptr [EBX + 0x6]         ; 0043e0bc | DAT_01468546
        ;   Label: LAB_0043e0bc
    MOV CX,word ptr [EBX + 0x2]         ; 0043e0c0 | DAT_01468542
    INC EAX                             ; 0043e0c4
    INC ECX                             ; 0043e0c5
    MOV word ptr [EBX + 0x6],AX         ; 0043e0c6 | DAT_01468546
    MOV word ptr [EBX + 0x2],CX         ; 0043e0ca | DAT_01468542
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043e0ce | DAT_01468544
    MOV EDX,dword ptr [ESI + 0x1cc4]    ; 0043e0d1
    SAR EAX,0x10                        ; 0043e0d7
    CMP EAX,EDX                         ; 0043e0da
    JGE 0x0043e161                      ; 0043e0dc
        ;   XREF to: 0043e161 (CONDITIONAL_JUMP)  ; LAB_0043e161
    MOV EDX,dword ptr [ESI + 0x1cc0]    ; 0043e0e2
    IMUL EDX,EAX                        ; 0043e0e8
    MOV EAX,dword ptr [EBX]             ; 0043e0eb | DAT_01468540
    SAR EAX,0x10                        ; 0043e0ed
    ADD EAX,EDX                         ; 0043e0f0
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0043e0f2
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0043e0f8
    AND EAX,0xffff                      ; 0043e0fc
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043e101 | DAT_01468548
    ADD EAX,0x90                        ; 0043e104
    CMP EAX,ECX                         ; 0043e109
    JLE 0x0043e15e                      ; 0043e10b
        ;   XREF to: 0043e15e (CONDITIONAL_JUMP)  ; LAB_0043e15e
    MOV EAX,dword ptr [EBX]             ; 0043e10d | DAT_01468540
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0043e10f
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0043e115
    SAR EAX,CL                          ; 0043e11b
    AND EDX,EAX                         ; 0043e11d
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0043e11f
    MOV dword ptr [EBP + -0xc],EDX      ; 0043e125
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043e128 | DAT_01468544
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0043e12b
    SAR EAX,CL                          ; 0043e131
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0043e133
    AND EAX,EDX                         ; 0043e139
    SHL EAX,CL                          ; 0043e13b
    MOV ECX,dword ptr [EBP + -0xc]      ; 0043e13d
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0043e140
    ADD EAX,ECX                         ; 0043e146
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0043e148
    AND EAX,0xff                        ; 0043e14b
    SHL EAX,0xa                         ; 0043e150
    MOV EDX,dword ptr [EBP + 0x20]      ; 0043e153
    IMUL EDX                            ; 0043e156
    SHRD EAX,EDX,0x10                   ; 0043e158
    ADD EDI,EAX                         ; 0043e15c
    INC dword ptr [EBP + -0x8]          ; 0043e15e
        ;   Label: LAB_0043e15e
    MOV EDX,dword ptr [EBX + 0x4]       ; 0043e161 | DAT_01468544
        ;   Label: LAB_0043e161
    SUB EDX,0x20000                     ; 0043e164
    MOV dword ptr [EBX + 0x4],EDX       ; 0043e16a | DAT_01468544
    TEST EDX,EDX                        ; 0043e16d
    JLE 0x0043e1e9                      ; 0043e16f
        ;   XREF to: 0043e1e9 (CONDITIONAL_JUMP)  ; LAB_0043e1e9
    SAR EDX,0x10                        ; 0043e171
    IMUL EDX,dword ptr [ESI + 0x1cc0]   ; 0043e174
    MOV EAX,dword ptr [EBX]             ; 0043e17b | DAT_01468540
    SAR EAX,0x10                        ; 0043e17d
    ADD EAX,EDX                         ; 0043e180
    MOV EDX,dword ptr [ESI + 0x2f94]    ; 0043e182
    MOV AX,word ptr [EDX + EAX*0x2]     ; 0043e188
    AND EAX,0xffff                      ; 0043e18c
    MOV EDX,dword ptr [EBX + 0x8]       ; 0043e191 | DAT_01468548
    ADD EAX,0x90                        ; 0043e194
    CMP EAX,EDX                         ; 0043e199
    JLE 0x0043e1e6                      ; 0043e19b
        ;   XREF to: 0043e1e6 (CONDITIONAL_JUMP)  ; LAB_0043e1e6
    MOV EAX,dword ptr [EBX]             ; 0043e19d | DAT_01468540
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0043e19f
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0043e1a5
    SAR EAX,CL                          ; 0043e1ab
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0043e1ad
    AND EDX,EAX                         ; 0043e1b3
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043e1b5 | DAT_01468544
    SAR EAX,CL                          ; 0043e1b8
    AND EAX,dword ptr [ESI + 0x1c68]    ; 0043e1ba
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0043e1c0
    SHL EAX,CL                          ; 0043e1c6
    ADD EDX,EAX                         ; 0043e1c8
    MOV EAX,dword ptr [ESI + 0x1c54]    ; 0043e1ca
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0043e1d0
    AND EAX,0xff                        ; 0043e1d3
    SHL EAX,0xa                         ; 0043e1d8
    MOV EDX,dword ptr [EBP + 0x20]      ; 0043e1db
    IMUL EDX                            ; 0043e1de
    SHRD EAX,EDX,0x10                   ; 0043e1e0
    ADD EDI,EAX                         ; 0043e1e4
    INC dword ptr [EBP + -0x8]          ; 0043e1e6
        ;   Label: LAB_0043e1e6
    MOV ESI,dword ptr [EBP + -0x8]      ; 0043e1e9
        ;   Label: LAB_0043e1e9
    MOV EDX,EDI                         ; 0043e1ec
    MOV EAX,EDI                         ; 0043e1ee
    SAR EDX,0x1f                        ; 0043e1f0
    IDIV ESI                            ; 0043e1f3
    MOV ESP,EBP                         ; 0043e1f5
    POP EBP                             ; 0043e1f7
    POP EDI                             ; 0043e1f8
    POP ESI                             ; 0043e1f9
    POP EBX                             ; 0043e1fa
    RET                                 ; 0043e1fb
    MOV EAX,EBX                         ; 0043e1fc
        ;   Label: LAB_0043e1fc
    MOV EDI,dword ptr [0x026810c0]      ; 0043e1fe | DAT_026810c0
    NEG EAX                             ; 0043e204
    CMP EAX,EDI                         ; 0043e206
    JGE 0x0043df4a                      ; 0043e208
        ;   XREF to: 0043df4a (CONDITIONAL_JUMP)  ; LAB_0043df4a
    MOV EDX,dword ptr [EBP + -0x1c]     ; 0043e20e
    MOV EAX,dword ptr [ESI + 0x17c]     ; 0043e211
    IMUL EDX                            ; 0043e217
    SHRD EAX,EDX,0x10                   ; 0043e219
    MOV EDX,dword ptr [EBP + -0x18]     ; 0043e21d
    MOV EBX,EAX                         ; 0043e220
    MOV EAX,dword ptr [ESI + 0x188]     ; 0043e222
    IMUL EDX                            ; 0043e228
    SHRD EAX,EDX,0x10                   ; 0043e22a
    MOV EDX,dword ptr [EBP + -0x14]     ; 0043e22e
    ADD EBX,EAX                         ; 0043e231
    MOV EAX,dword ptr [ESI + 0x194]     ; 0043e233
    IMUL EDX                            ; 0043e239
    SHRD EAX,EDX,0x10                   ; 0043e23b
    ADD EBX,EAX                         ; 0043e23f
    MOV EDX,dword ptr [0x026810c8]      ; 0043e241 | DAT_026810c8
    MOV dword ptr [0x026810c4],EBX      ; 0043e247 | DAT_026810c4
    CMP EBX,EDX                         ; 0043e24d
    JGE 0x0043df4a                      ; 0043e24f
        ;   XREF to: 0043df4a (CONDITIONAL_JUMP)  ; LAB_0043df4a
    MOV EAX,EDX                         ; 0043e255
    NEG EAX                             ; 0043e257
    CMP EAX,EBX                         ; 0043e259
    JGE 0x0043df4a                      ; 0043e25b
        ;   XREF to: 0043df4a (CONDITIONAL_JUMP)  ; LAB_0043df4a
    MOV EAX,[0x026810c0]                ; 0043e261 | DAT_026810c0
    MOV EBX,EDX                         ; 0043e266
    MOV EDX,dword ptr [ESI + 0x1c0]     ; 0043e268
    IMUL EDX                            ; 0043e26e
    IDIV EBX                            ; 0043e270
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0043e272
    ADD EAX,EDX                         ; 0043e278
    MOV EBX,dword ptr [0x026810c8]      ; 0043e27a | DAT_026810c8
    MOV [0x026810c0],EAX                ; 0043e280 | DAT_026810c0
    MOV EDX,dword ptr [ESI + 0x1c4]     ; 0043e285
    MOV EAX,[0x026810c4]                ; 0043e28b | DAT_026810c4
    IMUL EDX                            ; 0043e290
    IDIV EBX                            ; 0043e292
    MOV EDX,dword ptr [ESI + 0x1cc]     ; 0043e294
    ADD EAX,EDX                         ; 0043e29a
    MOV [0x026810c4],EAX                ; 0043e29c | DAT_026810c4
    MOV EAX,0x26810c0                   ; 0043e2a1
    JMP 0x0043df4f                      ; 0043e2a6
        ;   XREF to: 0043df4f (UNCONDITIONAL_JUMP)  ; LAB_0043df4f
    MOV EDI,dword ptr [EAX]             ; 0043e2ab | DAT_01468540
        ;   Label: LAB_0043e2ab
    MOV CL,byte ptr [ESI + 0x1cc8]      ; 0043e2ad
    MOV EDX,dword ptr [ESI + 0x1c68]    ; 0043e2b3
    MOV EAX,dword ptr [EAX + 0x4]       ; 0043e2b9 | DAT_01468544
    SAR EDI,CL                          ; 0043e2bc
    MOV CL,byte ptr [ESI + 0x1ccc]      ; 0043e2be
    AND EDX,EDI                         ; 0043e2c4
    MOV EDI,dword ptr [ESI + 0x1c68]    ; 0043e2c6
    SAR EAX,CL                          ; 0043e2cc
    MOV CL,byte ptr [ESI + 0x1c60]      ; 0043e2ce
    AND EAX,EDI                         ; 0043e2d4
    SHL EAX,CL                          ; 0043e2d6
    ADD EAX,EDX                         ; 0043e2d8
    MOV EDX,dword ptr [ESI + 0x1c54]    ; 0043e2da
    MOV AL,byte ptr [EDX + EAX*0x1]     ; 0043e2e0
    AND EAX,0xff                        ; 0043e2e3
    SHL EAX,0xa                         ; 0043e2e8
    MOV EDX,dword ptr [EBP + 0x20]      ; 0043e2eb
    IMUL EDX                            ; 0043e2ee
    SHRD EAX,EDX,0x10                   ; 0043e2f0
    MOV EDI,EAX                         ; 0043e2f4
    JMP 0x0043df9f                      ; 0043e2f6
        ;   XREF to: 0043df9f (UNCONDITIONAL_JUMP)  ; LAB_0043df9f

