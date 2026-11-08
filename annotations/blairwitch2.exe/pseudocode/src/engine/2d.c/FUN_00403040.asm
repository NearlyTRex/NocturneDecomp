; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_00403040(int param_1,int param_2,int param_3)
;
;
; XREF[5]:
;   FUN_00403170 at 0040319d
;   FUN_0047dc40 at 0047e198
;   FUN_0047e870 at 0047ef8a
;   FUN_00483ea0 at 00484059
;   FUN_004840f0 at 00484224
;
; Referenced Globals:
;   TerminatedCString s_engine_2d_c_005ca182
;   TerminatedCString s_vLine_invalid_bitsPerPix_005ca191
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403040
        ;   Label: FUN_00403040
    PUSH ESI                            ; 00403041
    PUSH EDI                            ; 00403042
    PUSH EBP                            ; 00403043
    MOV ESI,dword ptr [ESP + 0x14]      ; 00403044
    MOV EAX,dword ptr [ESP + 0x18]      ; 00403048
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040304c
    CMP ESI,dword ptr [0x01c35e48]      ; 00403050 | DAT_01c35e48
    JL 0x00403100                       ; 00403056
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    CMP ESI,dword ptr [0x01c35e50]      ; 0040305c | DAT_01c35e50
    JG 0x00403100                       ; 00403062
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    MOV EDI,dword ptr [0x01c35e4c]      ; 00403068 | DAT_01c35e4c
    CMP EAX,EDI                         ; 0040306e
    JGE 0x00403074                      ; 00403070
        ;   XREF to: 00403074 (CONDITIONAL_JUMP)  ; LAB_00403074
    MOV EAX,EDI                         ; 00403072
    MOV EBP,dword ptr [0x01c35e54]      ; 00403074 | DAT_01c35e54
        ;   Label: LAB_00403074
    CMP EDX,EBP                         ; 0040307a
    JLE 0x00403080                      ; 0040307c
        ;   XREF to: 00403080 (CONDITIONAL_JUMP)  ; LAB_00403080
    MOV EDX,EBP                         ; 0040307e
    CMP EAX,EDX                         ; 00403080
        ;   Label: LAB_00403080
    JG 0x00403100                       ; 00403082
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    MOV EBX,dword ptr [0x006141c0]      ; 00403088 | DAT_006141c0
    LEA ECX,[EDX*0x4 + 0x0]             ; 0040308e
    LEA EBP,[EAX*0x4 + 0x0]             ; 00403095
    CMP EBX,0x10                        ; 0040309c
    JNC 0x00403137                      ; 0040309f
        ;   XREF to: 00403137 (CONDITIONAL_JUMP)  ; LAB_00403137
    CMP EBX,0x8                         ; 004030a5
    JNZ 0x0040313e                      ; 004030a8
        ;   XREF to: 0040313e (CONDITIONAL_JUMP)  ; LAB_0040313e
    MOV EDI,ECX                         ; 004030ae
    MOV EDX,EBP                         ; 004030b0
    CMP EDX,EDI                         ; 004030b2
        ;   Label: LAB_004030b2
    JG 0x00403100                       ; 004030b4
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    MOV BL,byte ptr [0x01c35e60]        ; 004030b6 | DAT_01c35e60
    MOV ECX,dword ptr [EDX + 0x1c2a38c] ; 004030bc | DAT_01c2a38c | DAT_01c2a390
    ADD EDX,0x4                         ; 004030c2
    INC EAX                             ; 004030c5
    MOV byte ptr [ECX + ESI*0x1],BL     ; 004030c6
    JMP 0x004030b2                      ; 004030c9
        ;   XREF to: 004030b2 (UNCONDITIONAL_JUMP)  ; LAB_004030b2
    MOV EBX,dword ptr [0x01c35e60]      ; 004030cb | DAT_01c35e60
        ;   Label: LAB_004030cb
    MOV BX,word ptr [EBX*0x2 + 0x1c34910] ; 004030d1
    CMP EAX,EDX                         ; 004030d9
    JG 0x00403100                       ; 004030db
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    LEA EDI,[ESI + ESI*0x1]             ; 004030dd
    MOV EDX,EBP                         ; 004030e0
    MOV ESI,ECX                         ; 004030e2
    MOV ECX,dword ptr [EDX + 0x1c2a38c] ; 004030e4 | DAT_01c2a38c | DAT_01c2a390
        ;   Label: LAB_004030e4
    ADD EDX,0x4                         ; 004030ea
    INC EAX                             ; 004030ed
    MOV word ptr [ECX + EDI*0x1],BX     ; 004030ee
    CMP EDX,ESI                         ; 004030f2
    JLE 0x004030e4                      ; 004030f4
        ;   XREF to: 004030e4 (CONDITIONAL_JUMP)  ; LAB_004030e4
    LEA EAX,[EAX]                       ; 004030f6
    LEA EDX,[EDX]                       ; 004030fc
    POP EBP                             ; 00403100
        ;   Label: LAB_00403100
    POP EDI                             ; 00403101
    POP ESI                             ; 00403102
    POP EBX                             ; 00403103
    RET                                 ; 00403104
    MOV EDI,dword ptr [0x01c35e60]      ; 00403105 | DAT_01c35e60
        ;   Label: LAB_00403105
    MOV EDI,dword ptr [EDI*0x4 + 0x1c34b10] ; 0040310b
    CMP EAX,EDX                         ; 00403112
    JG 0x00403100                       ; 00403114
        ;   XREF to: 00403100 (CONDITIONAL_JUMP)  ; LAB_00403100
    LEA EBX,[ESI*0x4 + 0x0]             ; 00403116
    MOV EDX,EBP                         ; 0040311d
    MOV ESI,ECX                         ; 0040311f
    MOV ECX,dword ptr [EDX + 0x1c2a38c] ; 00403121 | DAT_01c2a38c | DAT_01c2a390
        ;   Label: LAB_00403121
    ADD EDX,0x4                         ; 00403127
    INC EAX                             ; 0040312a
    MOV dword ptr [ECX + EBX*0x1],EDI   ; 0040312b
    CMP EDX,ESI                         ; 0040312e
    JLE 0x00403121                      ; 00403130
        ;   XREF to: 00403121 (CONDITIONAL_JUMP)  ; LAB_00403121
    POP EBP                             ; 00403132
    POP EDI                             ; 00403133
    POP ESI                             ; 00403134
    POP EBX                             ; 00403135
    RET                                 ; 00403136
    JBE 0x004030cb                      ; 00403137
        ;   XREF to: 004030cb (CONDITIONAL_JUMP)  ; LAB_004030cb
        ;   Label: LAB_00403137
    CMP EBX,0x20                        ; 00403139
    JZ 0x00403105                       ; 0040313c
        ;   XREF to: 00403105 (CONDITIONAL_JUMP)  ; LAB_00403105
    MOV EAX,0x5ca182                    ; 0040313e | = "..\\engine\\2d.c"
        ;   Label: LAB_0040313e
    MOV EDX,0x8b9                       ; 00403143
    PUSH 0x5ca191                       ; 00403148 | = "vLine - invalid bitsPerPixel"
    MOV [0x01d046a0],EAX                ; 0040314d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00403152 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00403158
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0040315d
    POP EBP                             ; 00403160
    POP EDI                             ; 00403161
    POP ESI                             ; 00403162
    POP EBX                             ; 00403163
    RET                                 ; 00403164

