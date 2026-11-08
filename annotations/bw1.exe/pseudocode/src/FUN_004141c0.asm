; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004141c0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_007c37b8
;   undefined4 DAT_007c37dc
;   undefined4 DAT_007c37e4
;
; Called Functions:
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004141c0
        ;   Label: FUN_004141c0
    PUSH ESI                            ; 004141c1
    PUSH EDI                            ; 004141c2
    PUSH EBP                            ; 004141c3
    SUB ESP,0x48                        ; 004141c4
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004141c7
    MOV EDX,dword ptr [0x007c37b8]      ; 004141cb | DAT_007c37b8
    PUSH EDX                            ; 004141d1
    LEA EAX,[EBP + 0x158]               ; 004141d2
    MOV EBX,0x1                         ; 004141d8
    PUSH EAX                            ; 004141dd
    LEA ESI,[ESP + 0x2c]                ; 004141de
    LEA EDI,[ESP + 0x14]                ; 004141e2
    CALL FUN_00569130                   ; 004141e6
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x2c]                ; 004141eb
    ADD ESP,0x8                         ; 004141ef
    LEA EAX,[ESP + 0xc]                 ; 004141f2
    MOV ECX,dword ptr [ESP + 0x60]      ; 004141f6
    MOVSD ES:EDI,ESI                    ; 004141fa
    MOVSD ES:EDI,ESI                    ; 004141fb
    MOVSD ES:EDI,ESI                    ; 004141fc
    CMP EAX,ECX                         ; 004141fd
    JNZ 0x00414281                      ; 004141ff
        ;   XREF to: 00414281 (CONDITIONAL_JUMP)  ; LAB_00414281
    MOV EAX,dword ptr [EBP + 0xc2e8]    ; 00414205
        ;   Label: LAB_00414205
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 0041420b
    JZ 0x00414267                       ; 00414213
        ;   XREF to: 00414267 (CONDITIONAL_JUMP)  ; LAB_00414267
    MOV EDI,dword ptr [0x007c37dc]      ; 00414215 | DAT_007c37dc
    PUSH EDI                            ; 0041421b
    LEA EAX,[EBP + 0x158]               ; 0041421c
    PUSH EAX                            ; 00414222
    LEA ESI,[ESP + 0x8]                 ; 00414223
    LEA EDI,[ESP + 0x44]                ; 00414227
    CALL FUN_00569130                   ; 0041422b
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA EAX,[EBX*0x4 + 0x0]             ; 00414230
    ADD ESP,0x8                         ; 00414237
    SUB EAX,EBX                         ; 0041423a
    MOV EDX,dword ptr [ESP + 0x60]      ; 0041423c
    SHL EAX,0x2                         ; 00414240
    MOV ESI,ESP                         ; 00414243
    ADD EDX,EAX                         ; 00414245
    LEA EAX,[ESP + 0x3c]                ; 00414247
    MOVSD ES:EDI,ESI                    ; 0041424b
    MOVSD ES:EDI,ESI                    ; 0041424c
    MOVSD ES:EDI,ESI                    ; 0041424d
    CMP EDX,EAX                         ; 0041424e
    JZ 0x00414266                       ; 00414250
        ;   XREF to: 00414266 (CONDITIONAL_JUMP)  ; LAB_00414266
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00414252
    MOV dword ptr [EDX],EAX             ; 00414256
    MOV EAX,dword ptr [ESP + 0x40]      ; 00414258
    MOV dword ptr [EDX + 0x4],EAX       ; 0041425c
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041425f
    MOV dword ptr [EDX + 0x8],EAX       ; 00414263
    INC EBX                             ; 00414266
        ;   Label: LAB_00414266
    MOV EAX,dword ptr [EBP + 0xc2d4]    ; 00414267
        ;   Label: LAB_00414267
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 0041426d
    JNZ 0x0041429a                      ; 00414275
        ;   XREF to: 0041429a (CONDITIONAL_JUMP)  ; LAB_0041429a
    MOV EAX,EBX                         ; 00414277
    ADD ESP,0x48                        ; 00414279
    POP EBP                             ; 0041427c
    POP EDI                             ; 0041427d
    POP ESI                             ; 0041427e
    POP EBX                             ; 0041427f
    RET                                 ; 00414280
    MOV EAX,dword ptr [ESP + 0xc]       ; 00414281
        ;   Label: LAB_00414281
    MOV dword ptr [ECX],EAX             ; 00414285
    MOV EAX,dword ptr [ESP + 0x10]      ; 00414287
    MOV dword ptr [ECX + 0x4],EAX       ; 0041428b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0041428e
    MOV dword ptr [ECX + 0x8],EAX       ; 00414292
    JMP 0x00414205                      ; 00414295
        ;   XREF to: 00414205 (UNCONDITIONAL_JUMP)  ; LAB_00414205
    MOV ECX,dword ptr [0x007c37e4]      ; 0041429a | DAT_007c37e4
        ;   Label: LAB_0041429a
    PUSH ECX                            ; 004142a0
    ADD EBP,0x158                       ; 004142a1
    PUSH EBP                            ; 004142a7
    LEA ESI,[ESP + 0x20]                ; 004142a8
    LEA EDI,[ESP + 0x38]                ; 004142ac
    CALL FUN_00569130                   ; 004142b0
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA EAX,[EBX*0x4 + 0x0]             ; 004142b5
    ADD ESP,0x8                         ; 004142bc
    SUB EAX,EBX                         ; 004142bf
    MOV EDX,dword ptr [ESP + 0x60]      ; 004142c1
    SHL EAX,0x2                         ; 004142c5
    LEA ESI,[ESP + 0x18]                ; 004142c8
    ADD EDX,EAX                         ; 004142cc
    LEA EAX,[ESP + 0x30]                ; 004142ce
    MOVSD ES:EDI,ESI                    ; 004142d2
    MOVSD ES:EDI,ESI                    ; 004142d3
    MOVSD ES:EDI,ESI                    ; 004142d4
    CMP EDX,EAX                         ; 004142d5
    JZ 0x004142ed                       ; 004142d7
        ;   XREF to: 004142ed (CONDITIONAL_JUMP)  ; LAB_004142ed
    MOV EAX,dword ptr [ESP + 0x30]      ; 004142d9
    MOV dword ptr [EDX],EAX             ; 004142dd
    MOV EAX,dword ptr [ESP + 0x34]      ; 004142df
    MOV dword ptr [EDX + 0x4],EAX       ; 004142e3
    MOV EAX,dword ptr [ESP + 0x38]      ; 004142e6
    MOV dword ptr [EDX + 0x8],EAX       ; 004142ea
    INC EBX                             ; 004142ed
        ;   Label: LAB_004142ed
    MOV EAX,EBX                         ; 004142ee
    ADD ESP,0x48                        ; 004142f0
    POP EBP                             ; 004142f3
    POP EDI                             ; 004142f4
    POP ESI                             ; 004142f5
    POP EBX                             ; 004142f6
    RET                                 ; 004142f7

