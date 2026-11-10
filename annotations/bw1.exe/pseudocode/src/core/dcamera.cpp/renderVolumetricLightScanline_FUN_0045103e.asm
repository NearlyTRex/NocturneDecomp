; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_renderVolumetricLightScanline_FUN_0045103e(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_013238cc
;   undefined4 DAT_013238d0
;   undefined4 DAT_01323d00
;   undefined4 DAT_01c4480c
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0045103e
        ;   Label: core_dcamera.cpp_renderVolumetricLightScanline_FUN_0045103e
    PUSH EBX                            ; 00451040
        ;   Label: LAB_00451040
    PUSH ESI                            ; 00451041
    PUSH EDI                            ; 00451042
    PUSH EBP                            ; 00451043
    MOV EBP,ESP                         ; 00451044
    SUB ESP,0x1c                        ; 00451046
    MOV EDI,dword ptr [EBP + 0x18]      ; 00451049
    MOV EDX,dword ptr [EBP + 0x14]      ; 0045104c
    SUB EDX,dword ptr [0x01c4f00c]      ; 0045104f | DAT_01c4f00c
    MOV ECX,dword ptr [0x01323d00]      ; 00451055 | DAT_01323d00
    MOV dword ptr [EBP + 0x14],EDX      ; 0045105b
    CMP ECX,0x1                         ; 0045105e
    JNZ 0x0045106d                      ; 00451061
        ;   XREF to: 0045106d (CONDITIONAL_JUMP)  ; LAB_0045106d
    TEST byte ptr [EBP + 0x14],0x1      ; 00451063
    JNZ 0x004511d6                      ; 00451067
        ;   XREF to: 004511d6 (CONDITIONAL_JUMP)  ; LAB_004511d6
    CMP dword ptr [0x01323d00],0x2      ; 0045106d | DAT_01323d00
        ;   Label: LAB_0045106d
    JNZ 0x00451080                      ; 00451074
        ;   XREF to: 00451080 (CONDITIONAL_JUMP)  ; LAB_00451080
    TEST byte ptr [EBP + 0x14],0x3      ; 00451076
    JNZ 0x004511d6                      ; 0045107a
        ;   XREF to: 004511d6 (CONDITIONAL_JUMP)  ; LAB_004511d6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00451080
        ;   Label: LAB_00451080
    MOV CL,byte ptr [0x01323d00]        ; 00451083 | DAT_01323d00
    SAR ESI,CL                          ; 00451089
    MOV dword ptr [EBP + 0x14],ESI      ; 0045108b
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0045108e
    MOV EAX,[0x01c4f008]                ; 00451091 | DAT_01c4f008
    MOV EBX,dword ptr [EDI + 0x8]       ; 00451096
    MOV ESI,dword ptr [ESI + 0x8]       ; 00451099
    SAR EBX,0x10                        ; 0045109c
    SAR ESI,0x10                        ; 0045109f
    SUB EBX,EAX                         ; 004510a2
    SUB ESI,EAX                         ; 004510a4
    SAR EBX,CL                          ; 004510a6
    SAR ESI,CL                          ; 004510a8
    CMP EBX,ESI                         ; 004510aa
    JLE 0x004510bc                      ; 004510ac
        ;   XREF to: 004510bc (CONDITIONAL_JUMP)  ; LAB_004510bc
    MOV EAX,EBX                         ; 004510ae
    MOV EBX,ESI                         ; 004510b0
    MOV ESI,EAX                         ; 004510b2
    MOV EAX,EDI                         ; 004510b4
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004510b6
    MOV dword ptr [EBP + 0x1c],EAX      ; 004510b9
    MOV EAX,dword ptr [EDI + 0x28]      ; 004510bc
        ;   Label: LAB_004510bc
    MOV EDX,EAX                         ; 004510bf
    SAR EDX,0x1f                        ; 004510c1
    SHL EDX,0x8                         ; 004510c4
    SBB EAX,EDX                         ; 004510c7
    SAR EAX,0x8                         ; 004510c9
    MOV dword ptr [EBP + -0x1c],EAX     ; 004510cc
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004510cf
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004510d2
    MOV EDX,dword ptr [EDX + 0x28]      ; 004510d5
    MOV EAX,dword ptr [EAX + 0x28]      ; 004510d8
    SAR EDX,0x1f                        ; 004510db
    SHL EDX,0x8                         ; 004510de
    SBB EAX,EDX                         ; 004510e1
    SAR EAX,0x8                         ; 004510e3
    MOV ECX,EAX                         ; 004510e6
    MOV EAX,dword ptr [EDI + 0x28]      ; 004510e8
    MOV EDX,EAX                         ; 004510eb
    SAR EDX,0x1f                        ; 004510ed
    SHL EDX,0x8                         ; 004510f0
    SBB EAX,EDX                         ; 004510f3
    SAR EAX,0x8                         ; 004510f5
    MOV EDX,ECX                         ; 004510f8
    MOV ECX,ESI                         ; 004510fa
    SUB EDX,EAX                         ; 004510fc
    SUB ECX,EBX                         ; 004510fe
    MOV EAX,EDX                         ; 00451100
    INC ECX                             ; 00451102
    SAR EDX,0x1f                        ; 00451103
    IDIV ECX                            ; 00451106
    MOV dword ptr [EBP + -0x18],EAX     ; 00451108
    MOV EAX,dword ptr [EDI + 0x10]      ; 0045110b
    MOV dword ptr [EBP + -0x14],EAX     ; 0045110e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00451111
    MOV EDX,dword ptr [EDX + 0x10]      ; 00451114
    SUB EDX,EAX                         ; 00451117
    MOV EAX,EDX                         ; 00451119
    SAR EDX,0x1f                        ; 0045111b
    IDIV ECX                            ; 0045111e
    MOV dword ptr [EBP + -0x10],EAX     ; 00451120
    MOV CL,byte ptr [0x01323d00]        ; 00451123 | DAT_01323d00
    MOV EDX,EBX                         ; 00451129
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045112b
    SHL EDX,CL                          ; 0045112e
    SHL EAX,CL                          ; 00451130
    SHL EDX,0x2                         ; 00451132
    MOV EAX,dword ptr [EAX*0x4 + 0x1c4480c] ; 00451135 | DAT_01c4480c
    ADD EAX,EDX                         ; 0045113c
    MOV dword ptr [EBP + -0xc],EAX      ; 0045113e
    MOV EDX,dword ptr [EBP + 0x14]      ; 00451141
    LEA EAX,[EDX*0x4 + 0x0]             ; 00451144
    ADD EAX,EDX                         ; 0045114b
    SHL EAX,0x6                         ; 0045114d
    ADD EAX,0x1342220                   ; 00451150
    ADD EAX,EBX                         ; 00451155
    MOV dword ptr [EBP + -0x8],EAX      ; 00451157
    SUB ESI,EBX                         ; 0045115a
    MOV dword ptr [EBP + -0x4],ESI      ; 0045115c
    MOV ECX,dword ptr [EBP + 0xfffffffc] ; 0045115f
    SHL ECX,0x2                         ; 00451165
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 00451168
    MOV EDI,dword ptr [0x013238d0]      ; 0045116e | DAT_013238d0
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 00451174
    MOV EDX,dword ptr [EBP + 0xffffffec] ; 0045117a
    MOV EAX,ECX                         ; 00451180
        ;   Label: LAB_00451180
    ADD EAX,dword ptr [EBP + 0xfffffff4] ; 00451182
    CMP EBX,dword ptr [EAX]             ; 00451188
    JLE 0x004511b4                      ; 0045118a
        ;   XREF to: 004511b4 (CONDITIONAL_JUMP)  ; LAB_004511b4
    MOVZX EAX,byte ptr [ESI]            ; 0045118c
    SHL EAX,0x8                         ; 0045118f
    ADD EAX,EDX                         ; 00451192
    ADD EAX,dword ptr [EDI + 0x13238d4] ; 00451194
    ADD EDI,0x4                         ; 0045119a
    AND EDI,0x3fc                       ; 0045119d
    SHR EAX,0x8                         ; 004511a3
    CMP EAX,0xff                        ; 004511a6
    JC 0x004511b2                       ; 004511ab
        ;   XREF to: 004511b2 (CONDITIONAL_JUMP)  ; LAB_004511b2
    MOV EAX,0xff                        ; 004511ad
    MOV byte ptr [ESI],AL               ; 004511b2
        ;   Label: LAB_004511b2
    ADD EDX,dword ptr [EBP + 0xfffffff0] ; 004511b4
        ;   Label: LAB_004511b4
    ADD EBX,dword ptr [EBP + 0xffffffe8] ; 004511ba
    INC ESI                             ; 004511c0
    SUB ECX,0x4                         ; 004511c1
    JG 0x00451180                       ; 004511c4
        ;   XREF to: 00451180 (CONDITIONAL_JUMP)  ; LAB_00451180
    MOV dword ptr [0x013238d0],EDI      ; 004511c6 | DAT_013238d0
    MOV dword ptr [0x013238cc],0x1      ; 004511cc | DAT_013238cc
    MOV ESP,EBP                         ; 004511d6
        ;   Label: LAB_004511d6
    POP EBP                             ; 004511d8
    POP EDI                             ; 004511d9
    POP ESI                             ; 004511da
    POP EBX                             ; 004511db
    RET                                 ; 004511dc

