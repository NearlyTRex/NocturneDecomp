; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005320b0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d00b2
;   undefined4 DAT_005d00b6
;   undefined4 DAT_005d00ba
;   undefined4 DAT_01ed7860
;   undefined4 DAT_01ed7864
;   undefined4 DAT_02cfd900
;
; Called Functions:
;   FUN_00408b80
;   FUN_00583260
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005320b0
        ;   Label: FUN_005320b0
    SUB ESP,0x78                        ; 005320b1
    MOV EBP,dword ptr [ESP + 0x84]      ; 005320b4
    TEST EBP,EBP                        ; 005320bb
    JNZ 0x005320c6                      ; 005320bd
        ;   XREF to: 005320c6 (CONDITIONAL_JUMP)  ; LAB_005320c6
    XOR EAX,EAX                         ; 005320bf
    ADD ESP,0x78                        ; 005320c1
    POP EBP                             ; 005320c4
    RET                                 ; 005320c5
    PUSH EDI                            ; 005320c6
        ;   Label: LAB_005320c6
    PUSH ESI                            ; 005320c7
    PUSH EBX                            ; 005320c8
    MOV ESI,dword ptr [0x01ed7860]      ; 005320c9 | DAT_01ed7860
    LEA EAX,[ESI*0x4 + 0x0]             ; 005320cf
    MOV EBX,dword ptr [ESP + 0x8c]      ; 005320d6
    SUB EAX,ESI                         ; 005320dd
    ADD EBX,0xfd8                       ; 005320df
    SHL EAX,0x4                         ; 005320e5
    ADD EAX,EBX                         ; 005320e8
    PUSH EAX                            ; 005320ea
    PUSH 0x2cfd900                      ; 005320eb | DAT_02cfd900
    LEA ESI,[ESP + 0x74]                ; 005320f0
    LEA EDI,[ESP + 0x5c]                ; 005320f4
    CALL FUN_00583260                   ; 005320f8
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    LEA ESI,[ESP + 0x74]                ; 005320fd
    ADD ESP,0x8                         ; 00532101
    MOVSD ES:EDI,ESI                    ; 00532104
    MOVSD ES:EDI,ESI                    ; 00532105
    MOVSD ES:EDI,ESI                    ; 00532106
    MOV ESI,dword ptr [0x01ed7864]      ; 00532107 | DAT_01ed7864
    LEA EAX,[ESI*0x4 + 0x0]             ; 0053210d
    SUB EAX,ESI                         ; 00532114
    SHL EAX,0x4                         ; 00532116
    ADD EAX,EBX                         ; 00532119
    PUSH EAX                            ; 0053211b
    PUSH 0x2cfd900                      ; 0053211c | DAT_02cfd900
    LEA ESI,[ESP + 0x68]                ; 00532121
    LEA EDI,[ESP + 0x80]                ; 00532125
    CALL FUN_00583260                   ; 0053212c
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined FUN_00583260()
    LEA ESI,[ESP + 0x68]                ; 00532131
    ADD ESP,0x8                         ; 00532135
    MOVSD ES:EDI,ESI                    ; 00532138
    MOVSD ES:EDI,ESI                    ; 00532139
    MOVSD ES:EDI,ESI                    ; 0053213a
    FLD float ptr [ESP + 0x78]          ; 0053213b
    FLD float ptr [ESP + 0x7c]          ; 0053213f
    FLD float ptr [ESP + 0x80]          ; 00532143
    LEA EDI,[ESP + 0x18]                ; 0053214a
    LEA ESI,[ESP + 0x3c]                ; 0053214e
    FXCH ST2                            ; 00532152
    FADD float ptr [ESP + 0x54]         ; 00532154
    FXCH                                ; 00532158
    FADD float ptr [ESP + 0x58]         ; 0053215a
    FXCH ST2                            ; 0053215e
    FADD float ptr [ESP + 0x5c]         ; 00532160
    FXCH                                ; 00532164
    FSTP float ptr [ESP + 0x3c]         ; 00532166
    FXCH                                ; 0053216a
    FSTP float ptr [ESP + 0x40]         ; 0053216c
    FSTP float ptr [ESP + 0x44]         ; 00532170
    MOVSD ES:EDI,ESI                    ; 00532174
    MOVSD ES:EDI,ESI                    ; 00532175
    MOVSD ES:EDI,ESI                    ; 00532176
    FLD float ptr [0x005d00b2]          ; 00532177 | DAT_005d00b2
    FLD float ptr [ESP + 0x18]          ; 0053217d
    FMUL ST1                            ; 00532181
    FLD float ptr [ESP + 0x1c]          ; 00532183
    FMUL ST2                            ; 00532187
    FLD float ptr [ESP + 0x20]          ; 00532189
    FMULP ST3                           ; 0053218d
    LEA EAX,[ESP + 0x30]                ; 0053218f
    MOV EDX,dword ptr [ESP + 0x8c]      ; 00532193
    PUSH EAX                            ; 0053219a
    LEA EDI,[ESP + 0x34]                ; 0053219b
    LEA ESI,[ESP + 0x28]                ; 0053219f
    FXCH                                ; 005321a3
    FSTP float ptr [ESP + 0x28]         ; 005321a5
    FSTP float ptr [ESP + 0x2c]         ; 005321a9
    FSTP float ptr [ESP + 0x30]         ; 005321ad
    MOVSD ES:EDI,ESI                    ; 005321b1
    MOVSD ES:EDI,ESI                    ; 005321b2
    MOVSD ES:EDI,ESI                    ; 005321b3
    PUSH EDX                            ; 005321b4
    FLD float ptr [ESP + 0x40]          ; 005321b5
    LEA ESI,[ESP + 0x14]                ; 005321b9
    FADD float ptr [0x005d00b6]         ; 005321bd | DAT_005d00b6
    LEA EDI,[ESP + 0x50]                ; 005321c3
    FSTP float ptr [ESP + 0x40]         ; 005321c7
    CALL FUN_00408b80                   ; 005321cb
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 005321d0
    LEA EAX,[EBP + 0x30]                ; 005321d3
    LEA ESI,[ESP + 0xc]                 ; 005321d6
    PUSH EAX                            ; 005321da
    MOVSD ES:EDI,ESI                    ; 005321db
    MOVSD ES:EDI,ESI                    ; 005321dc
    MOVSD ES:EDI,ESI                    ; 005321dd
    LEA EAX,[ESP + 0x4c]                ; 005321de
    FLD float ptr [ESP + 0x50]          ; 005321e2
    PUSH EAX                            ; 005321e6
    FADD float ptr [0x005d00ba]         ; 005321e7 | DAT_005d00ba
    PUSH EBP                            ; 005321ed
    FSTP float ptr [ESP + 0x58]         ; 005321ee
    MOV EBX,dword ptr [EBP + 0x154]     ; 005321f2
    CALL dword ptr [EBX + 0x68]         ; 005321f8
    MOV EAX,0x1                         ; 005321fb
    ADD ESP,0xc                         ; 00532200
    POP EBX                             ; 00532203
    POP ESI                             ; 00532204
    POP EDI                             ; 00532205
    ADD ESP,0x78                        ; 00532206
    POP EBP                             ; 00532209
    RET                                 ; 0053220a

