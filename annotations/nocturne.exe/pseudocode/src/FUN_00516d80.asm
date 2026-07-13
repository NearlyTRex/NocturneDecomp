; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00516d80(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; Referenced Globals:
;   undefined4 DAT_00591119
;   undefined4 DAT_0059111d
;   undefined4 DAT_00591125
;   undefined4 DAT_0059112d
;   undefined4 DAT_005b7650
;   undefined4 DAT_005bac64
;   undefined4 DAT_01cc30e4
;
; Called Functions:
;   FUN_0041acb0
;   FUN_0044da40
;   FUN_0047dc30
;   FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516d80
        ;   Label: FUN_00516d80
    PUSH ESI                            ; 00516d81
    SUB ESP,0x10                        ; 00516d82
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00516d85
    CMP dword ptr [EBX + 0x2cc],0x1     ; 00516d89
    JNZ 0x00516e40                      ; 00516d90
        ;   XREF to: 00516e40 (CONDITIONAL_JUMP)  ; LAB_00516e40
    CMP dword ptr [EBX + 0x5a4],0x0     ; 00516d96
    JNZ 0x00516e40                      ; 00516d9d
        ;   XREF to: 00516e40 (CONDITIONAL_JUMP)  ; LAB_00516e40
    LEA EAX,[EBX + 0x2d4]               ; 00516da3
    PUSH EAX                            ; 00516da9
    MOV ESI,dword ptr [0x005b7650]      ; 00516daa | DAT_005b7650
    PUSH ESI                            ; 00516db0
    CALL FUN_0047dc30                   ; 00516db1
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0047dc30()
    ADD ESP,0x8                         ; 00516db6
    TEST EAX,EAX                        ; 00516db9
    JZ 0x00516e40                       ; 00516dbb
        ;   XREF to: 00516e40 (CONDITIONAL_JUMP)  ; LAB_00516e40
    LEA EAX,[EBX + 0x39c]               ; 00516dc1
    LEA ESI,[EBX + 0x338]               ; 00516dc7
    MOV dword ptr [EBX + 0x5a4],0x1     ; 00516dcd
    CMP EAX,ESI                         ; 00516dd7
    JZ 0x00516deb                       ; 00516dd9
        ;   XREF to: 00516deb (CONDITIONAL_JUMP)  ; LAB_00516deb
    MOV EDX,dword ptr [ESI]             ; 00516ddb
    MOV dword ptr [EAX],EDX             ; 00516ddd
    MOV EDX,dword ptr [ESI + 0x4]       ; 00516ddf
    MOV dword ptr [EAX + 0x4],EDX       ; 00516de2
    MOV EDX,dword ptr [ESI + 0x8]       ; 00516de5
    MOV dword ptr [EAX + 0x8],EDX       ; 00516de8
    LEA EAX,[EBX + 0x3c0]               ; 00516deb
        ;   Label: LAB_00516deb
    LEA ESI,[EBX + 0x344]               ; 00516df1
    CMP EAX,ESI                         ; 00516df7
    JZ 0x00516e0b                       ; 00516df9
        ;   XREF to: 00516e0b (CONDITIONAL_JUMP)  ; LAB_00516e0b
    MOV EDX,dword ptr [ESI]             ; 00516dfb
    MOV dword ptr [EAX],EDX             ; 00516dfd
    MOV EDX,dword ptr [ESI + 0x4]       ; 00516dff
    MOV dword ptr [EAX + 0x4],EDX       ; 00516e02
    MOV EDX,dword ptr [ESI + 0x8]       ; 00516e05
    MOV dword ptr [EAX + 0x8],EDX       ; 00516e08
    LEA EAX,[EBX + 0x39c]               ; 00516e0b
        ;   Label: LAB_00516e0b
    PUSH EAX                            ; 00516e11
    LEA EAX,[ESP + 0x4]                 ; 00516e12
    PUSH EAX                            ; 00516e16
    LEA EAX,[EBX + 0x368]               ; 00516e17
    PUSH EAX                            ; 00516e1d
    CALL FUN_0044da40                   ; 00516e1e
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined FUN_0044da40()
    LEA ESI,[EBX + 0x390]               ; 00516e23
    ADD ESP,0xc                         ; 00516e29
    CMP ESI,EAX                         ; 00516e2c
    JZ 0x00516e40                       ; 00516e2e
        ;   XREF to: 00516e40 (CONDITIONAL_JUMP)  ; LAB_00516e40
    MOV EDX,dword ptr [EAX]             ; 00516e30
    MOV dword ptr [ESI],EDX             ; 00516e32
    MOV EDX,dword ptr [EAX + 0x4]       ; 00516e34
    MOV dword ptr [ESI + 0x4],EDX       ; 00516e37
    MOV EDX,dword ptr [EAX + 0x8]       ; 00516e3a
    MOV dword ptr [ESI + 0x8],EDX       ; 00516e3d
    CMP dword ptr [EBX + 0x2cc],0x0     ; 00516e40
        ;   Label: LAB_00516e40
    JNZ 0x00516eef                      ; 00516e47
        ;   XREF to: 00516eef (CONDITIONAL_JUMP)  ; LAB_00516eef
    PUSH 0x13                           ; 00516e4d
    MOV EAX,[0x005bac64]                ; 00516e4f | DAT_005bac64
    PUSH EAX                            ; 00516e54 | DAT_01cc30e4
    MOV ESI,dword ptr [EAX]             ; 00516e55 | DAT_01cc30e4
    CALL dword ptr [ESI]                ; 00516e57
    ADD ESP,0x8                         ; 00516e59
    TEST EAX,EAX                        ; 00516e5c
    JZ 0x00516eef                       ; 00516e5e
        ;   XREF to: 00516eef (CONDITIONAL_JUMP)  ; LAB_00516eef
    LEA ESI,[EBX + 0x20]                ; 00516e64
    LEA EAX,[EBX + 0x5ac]               ; 00516e67
    MOV EDX,dword ptr [EAX]             ; 00516e6d
    MOV dword ptr [ESI],EDX             ; 00516e6f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00516e71
    MOV dword ptr [ESI + 0x4],EDX       ; 00516e74
    MOV EDX,dword ptr [EAX + 0x8]       ; 00516e77
    MOV dword ptr [ESI + 0x8],EDX       ; 00516e7a
    CALL FUN_0056488c                   ; 00516e7d
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
    MOV dword ptr [ESP + 0xc],EAX       ; 00516e82
    FILD dword ptr [ESP + 0xc]          ; 00516e86
    FMUL float ptr [0x00591119]         ; 00516e8a | DAT_00591119
    FADD double ptr [0x0059111d]        ; 00516e90 | DAT_0059111d
    FMUL double ptr [0x00591125]        ; 00516e96 | DAT_00591125
    FSTP float ptr [EBX + 0x30]         ; 00516e9c
    CALL FUN_0056488c                   ; 00516e9f
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
    MOV dword ptr [ESP + 0xc],EAX       ; 00516ea4
    FILD dword ptr [ESP + 0xc]          ; 00516ea8
    FMUL float ptr [0x00591119]         ; 00516eac | DAT_00591119
    FMUL double ptr [0x00591125]        ; 00516eb2 | DAT_00591125
    FMUL double ptr [0x0059112d]        ; 00516eb8 | DAT_0059112d
    FSTP float ptr [EBX + 0x38]         ; 00516ebe
    CALL FUN_0056488c                   ; 00516ec1
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; undefined FUN_0056488c()
    MOV dword ptr [ESP + 0xc],EAX       ; 00516ec6
    FILD dword ptr [ESP + 0xc]          ; 00516eca
    FMUL float ptr [0x00591119]         ; 00516ece | DAT_00591119
    FMUL double ptr [0x00591125]        ; 00516ed4 | DAT_00591125
    FMUL double ptr [0x0059112d]        ; 00516eda | DAT_0059112d
    PUSH EBX                            ; 00516ee0
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00516ee1
    FSTP float ptr [EBX + 0x34]         ; 00516ee7
    CALL dword ptr [EAX]                ; 00516eea
    ADD ESP,0x4                         ; 00516eec
    CMP dword ptr [EBX + 0x5a4],0x0     ; 00516eef
        ;   Label: LAB_00516eef
    JNZ 0x00516efe                      ; 00516ef6
        ;   XREF to: 00516efe (CONDITIONAL_JUMP)  ; LAB_00516efe
    ADD ESP,0x10                        ; 00516ef8
        ;   Label: LAB_00516ef8
    POP ESI                             ; 00516efb
    POP EBX                             ; 00516efc
    RET                                 ; 00516efd
    LEA ESI,[EBX + 0x350]               ; 00516efe
        ;   Label: LAB_00516efe
    PUSH dword ptr [ESP + 0x20]         ; 00516f04
    PUSH ESI                            ; 00516f08
    CALL FUN_0041acb0                   ; 00516f09
        ;   XREF to: 0041acb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041acb0()
    LEA EAX,[EBX + 0x20]                ; 00516f0e
    MOV EDX,dword ptr [ESI]             ; 00516f11
    MOV dword ptr [EAX],EDX             ; 00516f13
    MOV EDX,dword ptr [ESI + 0x4]       ; 00516f15
    MOV dword ptr [EAX + 0x4],EDX       ; 00516f18
    MOV EDX,dword ptr [ESI + 0x8]       ; 00516f1b
    MOV dword ptr [EAX + 0x8],EDX       ; 00516f1e
    LEA EAX,[EBX + 0x30]                ; 00516f21
    ADD EBX,0x35c                       ; 00516f24
    ADD ESP,0x8                         ; 00516f2a
    CMP EAX,EBX                         ; 00516f2d
    JZ 0x00516ef8                       ; 00516f2f
        ;   XREF to: 00516ef8 (CONDITIONAL_JUMP)  ; LAB_00516ef8
    MOV EDX,dword ptr [EBX]             ; 00516f31
    MOV dword ptr [EAX],EDX             ; 00516f33
    MOV EDX,dword ptr [EBX + 0x4]       ; 00516f35
    MOV dword ptr [EAX + 0x4],EDX       ; 00516f38
    MOV EDX,dword ptr [EBX + 0x8]       ; 00516f3b
    MOV dword ptr [EAX + 0x8],EDX       ; 00516f3e
    ADD ESP,0x10                        ; 00516f41
    POP ESI                             ; 00516f44
    POP EBX                             ; 00516f45
    RET                                 ; 00516f46

