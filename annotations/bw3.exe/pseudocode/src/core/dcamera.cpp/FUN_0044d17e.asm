; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0044d17e(int param_1,int param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0134017c
;   undefined4 DAT_01340180
;   undefined4 DAT_013405b0
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0044d17e
        ;   Label: core_dcamera.cpp_FUN_0044d17e
    PUSH EBX                            ; 0044d180
        ;   Label: LAB_0044d180
    PUSH ESI                            ; 0044d181
    PUSH EDI                            ; 0044d182
    PUSH EBP                            ; 0044d183
    MOV EBP,ESP                         ; 0044d184
    SUB ESP,0x1c                        ; 0044d186
    MOV EDI,dword ptr [EBP + 0x18]      ; 0044d189
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044d18c
    SUB EDX,dword ptr [0x01c6b5ac]      ; 0044d18f | DAT_01c6b5ac
    MOV ECX,dword ptr [0x013405b0]      ; 0044d195 | DAT_013405b0
    MOV dword ptr [EBP + 0x14],EDX      ; 0044d19b
    CMP ECX,0x1                         ; 0044d19e
    JNZ 0x0044d1ad                      ; 0044d1a1
        ;   XREF to: 0044d1ad (CONDITIONAL_JUMP)  ; LAB_0044d1ad
    TEST byte ptr [EBP + 0x14],0x1      ; 0044d1a3
    JNZ 0x0044d316                      ; 0044d1a7
        ;   XREF to: 0044d316 (CONDITIONAL_JUMP)  ; LAB_0044d316
    CMP dword ptr [0x013405b0],0x2      ; 0044d1ad | DAT_013405b0
        ;   Label: LAB_0044d1ad
    JNZ 0x0044d1c0                      ; 0044d1b4
        ;   XREF to: 0044d1c0 (CONDITIONAL_JUMP)  ; LAB_0044d1c0
    TEST byte ptr [EBP + 0x14],0x3      ; 0044d1b6
    JNZ 0x0044d316                      ; 0044d1ba
        ;   XREF to: 0044d316 (CONDITIONAL_JUMP)  ; LAB_0044d316
    MOV ESI,dword ptr [EBP + 0x14]      ; 0044d1c0
        ;   Label: LAB_0044d1c0
    MOV CL,byte ptr [0x013405b0]        ; 0044d1c3 | DAT_013405b0
    SAR ESI,CL                          ; 0044d1c9
    MOV dword ptr [EBP + 0x14],ESI      ; 0044d1cb
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0044d1ce
    MOV EAX,[0x01c6b5a8]                ; 0044d1d1 | DAT_01c6b5a8
    MOV EBX,dword ptr [EDI + 0x8]       ; 0044d1d6
    MOV ESI,dword ptr [ESI + 0x8]       ; 0044d1d9
    SAR EBX,0x10                        ; 0044d1dc
    SAR ESI,0x10                        ; 0044d1df
    SUB EBX,EAX                         ; 0044d1e2
    SUB ESI,EAX                         ; 0044d1e4
    SAR EBX,CL                          ; 0044d1e6
    SAR ESI,CL                          ; 0044d1e8
    CMP EBX,ESI                         ; 0044d1ea
    JLE 0x0044d1fc                      ; 0044d1ec
        ;   XREF to: 0044d1fc (CONDITIONAL_JUMP)  ; LAB_0044d1fc
    MOV EAX,EBX                         ; 0044d1ee
    MOV EBX,ESI                         ; 0044d1f0
    MOV ESI,EAX                         ; 0044d1f2
    MOV EAX,EDI                         ; 0044d1f4
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0044d1f6
    MOV dword ptr [EBP + 0x1c],EAX      ; 0044d1f9
    MOV EAX,dword ptr [EDI + 0x28]      ; 0044d1fc
        ;   Label: LAB_0044d1fc
    MOV EDX,EAX                         ; 0044d1ff
    SAR EDX,0x1f                        ; 0044d201
    SHL EDX,0x8                         ; 0044d204
    SBB EAX,EDX                         ; 0044d207
    SAR EAX,0x8                         ; 0044d209
    MOV dword ptr [EBP + -0x1c],EAX     ; 0044d20c
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0044d20f
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0044d212
    MOV EDX,dword ptr [EDX + 0x28]      ; 0044d215
    MOV EAX,dword ptr [EAX + 0x28]      ; 0044d218
    SAR EDX,0x1f                        ; 0044d21b
    SHL EDX,0x8                         ; 0044d21e
    SBB EAX,EDX                         ; 0044d221
    SAR EAX,0x8                         ; 0044d223
    MOV ECX,EAX                         ; 0044d226
    MOV EAX,dword ptr [EDI + 0x28]      ; 0044d228
    MOV EDX,EAX                         ; 0044d22b
    SAR EDX,0x1f                        ; 0044d22d
    SHL EDX,0x8                         ; 0044d230
    SBB EAX,EDX                         ; 0044d233
    SAR EAX,0x8                         ; 0044d235
    MOV EDX,ECX                         ; 0044d238
    MOV ECX,ESI                         ; 0044d23a
    SUB EDX,EAX                         ; 0044d23c
    SUB ECX,EBX                         ; 0044d23e
    MOV EAX,EDX                         ; 0044d240
    INC ECX                             ; 0044d242
    SAR EDX,0x1f                        ; 0044d243
    IDIV ECX                            ; 0044d246
    MOV dword ptr [EBP + -0x18],EAX     ; 0044d248
    MOV EAX,dword ptr [EDI + 0x10]      ; 0044d24b
    MOV dword ptr [EBP + -0x14],EAX     ; 0044d24e
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0044d251
    MOV EDX,dword ptr [EDX + 0x10]      ; 0044d254
    SUB EDX,EAX                         ; 0044d257
    MOV EAX,EDX                         ; 0044d259
    SAR EDX,0x1f                        ; 0044d25b
    IDIV ECX                            ; 0044d25e
    MOV dword ptr [EBP + -0x10],EAX     ; 0044d260
    MOV CL,byte ptr [0x013405b0]        ; 0044d263 | DAT_013405b0
    MOV EDX,EBX                         ; 0044d269
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044d26b
    SHL EDX,CL                          ; 0044d26e
    SHL EAX,CL                          ; 0044d270
    SHL EDX,0x2                         ; 0044d272
    MOV EAX,dword ptr [EAX*0x4 + 0x1c60dac] ; 0044d275 | DAT_01c60dac
    ADD EAX,EDX                         ; 0044d27c
    MOV dword ptr [EBP + -0xc],EAX      ; 0044d27e
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044d281
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044d284
    ADD EAX,EDX                         ; 0044d28b
    SHL EAX,0x6                         ; 0044d28d
    ADD EAX,0x135ead0                   ; 0044d290
    ADD EAX,EBX                         ; 0044d295
    MOV dword ptr [EBP + -0x8],EAX      ; 0044d297
    SUB ESI,EBX                         ; 0044d29a
    MOV dword ptr [EBP + -0x4],ESI      ; 0044d29c
    MOV ECX,dword ptr [EBP + 0xfffffffc] ; 0044d29f
    SHL ECX,0x2                         ; 0044d2a5
    MOV ESI,dword ptr [EBP + 0xfffffff8] ; 0044d2a8
    MOV EDI,dword ptr [0x01340180]      ; 0044d2ae | DAT_01340180
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 0044d2b4
    MOV EDX,dword ptr [EBP + 0xffffffec] ; 0044d2ba
    MOV EAX,ECX                         ; 0044d2c0
        ;   Label: LAB_0044d2c0
    ADD EAX,dword ptr [EBP + 0xfffffff4] ; 0044d2c2
    CMP EBX,dword ptr [EAX]             ; 0044d2c8
    JLE 0x0044d2f4                      ; 0044d2ca
        ;   XREF to: 0044d2f4 (CONDITIONAL_JUMP)  ; LAB_0044d2f4
    MOVZX EAX,byte ptr [ESI]            ; 0044d2cc
    SHL EAX,0x8                         ; 0044d2cf
    ADD EAX,EDX                         ; 0044d2d2
    ADD EAX,dword ptr [EDI + 0x1340184] ; 0044d2d4
    ADD EDI,0x4                         ; 0044d2da
    AND EDI,0x3fc                       ; 0044d2dd
    SHR EAX,0x8                         ; 0044d2e3
    CMP EAX,0xff                        ; 0044d2e6
    JC 0x0044d2f2                       ; 0044d2eb
        ;   XREF to: 0044d2f2 (CONDITIONAL_JUMP)  ; LAB_0044d2f2
    MOV EAX,0xff                        ; 0044d2ed
    MOV byte ptr [ESI],AL               ; 0044d2f2
        ;   Label: LAB_0044d2f2
    ADD EDX,dword ptr [EBP + 0xfffffff0] ; 0044d2f4
        ;   Label: LAB_0044d2f4
    ADD EBX,dword ptr [EBP + 0xffffffe8] ; 0044d2fa
    INC ESI                             ; 0044d300
    SUB ECX,0x4                         ; 0044d301
    JG 0x0044d2c0                       ; 0044d304
        ;   XREF to: 0044d2c0 (CONDITIONAL_JUMP)  ; LAB_0044d2c0
    MOV dword ptr [0x01340180],EDI      ; 0044d306 | DAT_01340180
    MOV dword ptr [0x0134017c],0x1      ; 0044d30c | DAT_0134017c
    MOV ESP,EBP                         ; 0044d316
        ;   Label: LAB_0044d316
    POP EBP                             ; 0044d318
    POP EDI                             ; 0044d319
    POP ESI                             ; 0044d31a
    POP EBX                             ; 0044d31b
    RET                                 ; 0044d31c

