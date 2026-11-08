; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005360a0(int param_1)
;
;
; Called Functions:
;   FUN_00536490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005360a0
        ;   Label: FUN_005360a0
    PUSH EBP                            ; 005360a1
    SUB ESP,0x50                        ; 005360a2
    MOV EBX,dword ptr [ESP + 0x5c]      ; 005360a5
    FLD float ptr [EBX + 0x15f6d8]      ; 005360a9
    FCOMP float ptr [EBX + 0x15f6dc]    ; 005360af
    FNSTSW AX                           ; 005360b5
    SAHF                                ; 005360b7
    JNC 0x005361fb                      ; 005360b8
        ;   XREF to: 005361fb (CONDITIONAL_JUMP)  ; LAB_005361fb
    LEA EAX,[EBX + 0x14d128]            ; 005360be
    LEA EBP,[EBX + 0x15f6e0]            ; 005360c4
    CMP EAX,EBP                         ; 005360ca
    JZ 0x005360df                       ; 005360cc
        ;   XREF to: 005360df (CONDITIONAL_JUMP)  ; LAB_005360df
    MOV EDX,dword ptr [EBP]             ; 005360ce
    MOV dword ptr [EAX],EDX             ; 005360d1
    MOV EDX,dword ptr [EBP + 0x4]       ; 005360d3
    MOV dword ptr [EAX + 0x4],EDX       ; 005360d6
    MOV EDX,dword ptr [EBP + 0x8]       ; 005360d9
    MOV dword ptr [EAX + 0x8],EDX       ; 005360dc
    PUSH EDI                            ; 005360df
        ;   Label: LAB_005360df
    PUSH ESI                            ; 005360e0
    LEA ESI,[EBX + 0x14d11c]            ; 005360e1
    PUSH dword ptr [EBX + 0x15f6dc]     ; 005360e7
    PUSH ESI                            ; 005360ed
    LEA EBP,[EBX + 0x14d110]            ; 005360ee
    PUSH EBP                            ; 005360f4
    PUSH dword ptr [EBX + 0x15f6d8]     ; 005360f5
    MOV EAX,dword ptr [EBX + 0x15f6ec]  ; 005360fb
    PUSH EBX                            ; 00536101
    MOV dword ptr [EBX + 0x14d134],EAX  ; 00536102
    CALL FUN_00536490                   ; 00536108
        ;   XREF to: 00536490 (UNCONDITIONAL_CALL)  ; undefined FUN_00536490()
    MOV dword ptr [ESP + 0x68],EAX      ; 0053610d
    MOV EAX,dword ptr [ESP + 0x68]      ; 00536111
    MOV dword ptr [EBX + 0x15f6d8],EAX  ; 00536115
    ADD ESP,0x14                        ; 0053611b
    FLD float ptr [EBX + 0x15f6d8]      ; 0053611e
    FLD1                                ; 00536124
    FCOMPP                              ; 00536126
    FNSTSW AX                           ; 00536128
    SAHF                                ; 0053612a
    JC 0x005361e5                       ; 0053612b
        ;   XREF to: 005361e5 (CONDITIONAL_JUMP)  ; LAB_005361e5
    FLD float ptr [ESI + 0x4]           ; 00536131
    FLD float ptr [ESI + 0x8]           ; 00536134
    FLD float ptr [ESI]                 ; 00536137
    LEA EDI,[ESP + 0x44]                ; 00536139
    LEA ESI,[ESP + 0x20]                ; 0053613d
    FSUB float ptr [EBP]                ; 00536141
    FXCH ST2                            ; 00536144
    FSUB float ptr [EBP + 0x4]          ; 00536146
    FXCH                                ; 00536149
    FSUB float ptr [EBP + 0x8]          ; 0053614b
    FXCH ST2                            ; 0053614e
    FSTP float ptr [ESP + 0x20]         ; 00536150
    FSTP float ptr [ESP + 0x24]         ; 00536154
    FSTP float ptr [ESP + 0x28]         ; 00536158
    MOVSD ES:EDI,ESI                    ; 0053615c
    MOVSD ES:EDI,ESI                    ; 0053615d
    MOVSD ES:EDI,ESI                    ; 0053615e
    LEA EAX,[EBX + 0x15f6d8]            ; 0053615f
    FLD float ptr [ESP + 0x44]          ; 00536165
    FMUL float ptr [EAX]                ; 00536169
    FLD float ptr [ESP + 0x48]          ; 0053616b
    FMUL float ptr [EAX]                ; 0053616f
    FLD float ptr [ESP + 0x4c]          ; 00536171
    FMUL float ptr [EAX]                ; 00536175
    LEA EDI,[ESP + 0x2c]                ; 00536177
    LEA ESI,[ESP + 0x38]                ; 0053617b
    FXCH ST2                            ; 0053617f
    FSTP float ptr [ESP + 0x38]         ; 00536181
    FSTP float ptr [ESP + 0x3c]         ; 00536185
    FSTP float ptr [ESP + 0x40]         ; 00536189
    MOVSD ES:EDI,ESI                    ; 0053618d
    MOVSD ES:EDI,ESI                    ; 0053618e
    MOVSD ES:EDI,ESI                    ; 0053618f
    LEA EAX,[ESP + 0x14]                ; 00536190
    FLD float ptr [EBP + 0x4]           ; 00536194
    FLD float ptr [EBP + 0x8]           ; 00536197
    FLD float ptr [EBP]                 ; 0053619a
    LEA EDI,[ESP + 0x14]                ; 0053619d
    LEA ESI,[ESP + 0x8]                 ; 005361a1
    LEA EBP,[EBX + 0x14d138]            ; 005361a5
    FADD float ptr [ESP + 0x2c]         ; 005361ab
    FXCH ST2                            ; 005361af
    FADD float ptr [ESP + 0x30]         ; 005361b1
    FXCH                                ; 005361b5
    FADD float ptr [ESP + 0x34]         ; 005361b7
    FXCH ST2                            ; 005361bb
    FSTP float ptr [ESP + 0x8]          ; 005361bd
    FSTP float ptr [ESP + 0xc]          ; 005361c1
    FSTP float ptr [ESP + 0x10]         ; 005361c5
    MOVSD ES:EDI,ESI                    ; 005361c9
    MOVSD ES:EDI,ESI                    ; 005361ca
    MOVSD ES:EDI,ESI                    ; 005361cb
    CMP EBP,EAX                         ; 005361cc
    JZ 0x005361e5                       ; 005361ce
        ;   XREF to: 005361e5 (CONDITIONAL_JUMP)  ; LAB_005361e5
    MOV EAX,dword ptr [ESP + 0x14]      ; 005361d0
    MOV dword ptr [EBP],EAX             ; 005361d4
    MOV EAX,dword ptr [ESP + 0x18]      ; 005361d7
    MOV dword ptr [EBP + 0x4],EAX       ; 005361db
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005361de
    MOV dword ptr [EBP + 0x8],EAX       ; 005361e2
    MOV EAX,dword ptr [EBX + 0x15f6d8]  ; 005361e5
        ;   Label: LAB_005361e5
    MOV dword ptr [ESP + 0x50],EAX      ; 005361eb
    POP ESI                             ; 005361ef
    POP EDI                             ; 005361f0
    MOV EAX,dword ptr [ESP + 0x48]      ; 005361f1
    ADD ESP,0x50                        ; 005361f5
    POP EBP                             ; 005361f8
    POP EBX                             ; 005361f9
    RET                                 ; 005361fa
    MOV dword ptr [ESP + 0x48],0x40000000 ; 005361fb
        ;   Label: LAB_005361fb
    MOV EAX,dword ptr [ESP + 0x48]      ; 00536203
    ADD ESP,0x50                        ; 00536207
    POP EBP                             ; 0053620a
    POP EBX                             ; 0053620b
    RET                                 ; 0053620c

