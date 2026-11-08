; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0054c9c0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f0421
;   undefined4 DAT_005f0425
;   undefined4 DAT_005f0429
;   undefined4 DAT_01e82100
;   undefined4 DAT_01e82104
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_00408b40
;   FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0054c9c0
        ;   Label: FUN_0054c9c0
    SUB ESP,0x78                        ; 0054c9c1
    MOV EBP,dword ptr [ESP + 0x84]      ; 0054c9c4
    TEST EBP,EBP                        ; 0054c9cb
    JNZ 0x0054c9d6                      ; 0054c9cd
        ;   XREF to: 0054c9d6 (CONDITIONAL_JUMP)  ; LAB_0054c9d6
    XOR EAX,EAX                         ; 0054c9cf
    ADD ESP,0x78                        ; 0054c9d1
    POP EBP                             ; 0054c9d4
    RET                                 ; 0054c9d5
    PUSH EDI                            ; 0054c9d6
        ;   Label: LAB_0054c9d6
    PUSH ESI                            ; 0054c9d7
    PUSH EBX                            ; 0054c9d8
    MOV ESI,dword ptr [0x01e82100]      ; 0054c9d9 | DAT_01e82100
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054c9df
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0054c9e6
    SUB EAX,ESI                         ; 0054c9ed
    ADD EBX,0xfd8                       ; 0054c9ef
    SHL EAX,0x4                         ; 0054c9f5
    ADD EAX,EBX                         ; 0054c9f8
    PUSH EAX                            ; 0054c9fa
    PUSH 0x2c8af28                      ; 0054c9fb | DAT_02c8af28
    LEA ESI,[ESP + 0x74]                ; 0054ca00
    LEA EDI,[ESP + 0x5c]                ; 0054ca04
    CALL FUN_005b5080                   ; 0054ca08
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    LEA ESI,[ESP + 0x74]                ; 0054ca0d
    ADD ESP,0x8                         ; 0054ca11
    MOVSD ES:EDI,ESI                    ; 0054ca14
    MOVSD ES:EDI,ESI                    ; 0054ca15
    MOVSD ES:EDI,ESI                    ; 0054ca16
    MOV ESI,dword ptr [0x01e82104]      ; 0054ca17 | DAT_01e82104
    LEA EAX,[ESI*0x4 + 0x0]             ; 0054ca1d
    SUB EAX,ESI                         ; 0054ca24
    SHL EAX,0x4                         ; 0054ca26
    ADD EAX,EBX                         ; 0054ca29
    PUSH EAX                            ; 0054ca2b
    PUSH 0x2c8af28                      ; 0054ca2c | DAT_02c8af28
    LEA ESI,[ESP + 0x68]                ; 0054ca31
    LEA EDI,[ESP + 0x80]                ; 0054ca35
    CALL FUN_005b5080                   ; 0054ca3c
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    LEA ESI,[ESP + 0x68]                ; 0054ca41
    ADD ESP,0x8                         ; 0054ca45
    MOVSD ES:EDI,ESI                    ; 0054ca48
    MOVSD ES:EDI,ESI                    ; 0054ca49
    MOVSD ES:EDI,ESI                    ; 0054ca4a
    FLD float ptr [ESP + 0x78]          ; 0054ca4b
    FLD float ptr [ESP + 0x7c]          ; 0054ca4f
    FLD float ptr [ESP + 0x80]          ; 0054ca53
    LEA EDI,[ESP + 0x18]                ; 0054ca5a
    LEA ESI,[ESP + 0x3c]                ; 0054ca5e
    FXCH ST2                            ; 0054ca62
    FADD float ptr [ESP + 0x54]         ; 0054ca64
    FXCH                                ; 0054ca68
    FADD float ptr [ESP + 0x58]         ; 0054ca6a
    FXCH ST2                            ; 0054ca6e
    FADD float ptr [ESP + 0x5c]         ; 0054ca70
    FXCH                                ; 0054ca74
    FSTP float ptr [ESP + 0x3c]         ; 0054ca76
    FXCH                                ; 0054ca7a
    FSTP float ptr [ESP + 0x40]         ; 0054ca7c
    FSTP float ptr [ESP + 0x44]         ; 0054ca80
    MOVSD ES:EDI,ESI                    ; 0054ca84
    MOVSD ES:EDI,ESI                    ; 0054ca85
    MOVSD ES:EDI,ESI                    ; 0054ca86
    FLD float ptr [0x005f0421]          ; 0054ca87 | DAT_005f0421
    FLD float ptr [ESP + 0x18]          ; 0054ca8d
    FMUL ST1                            ; 0054ca91
    FLD float ptr [ESP + 0x1c]          ; 0054ca93
    FMUL ST2                            ; 0054ca97
    FLD float ptr [ESP + 0x20]          ; 0054ca99
    FMULP ST3                           ; 0054ca9d
    LEA EAX,[ESP + 0x30]                ; 0054ca9f
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0054caa3
    PUSH EAX                            ; 0054caaa
    LEA EDI,[ESP + 0x34]                ; 0054caab
    LEA ESI,[ESP + 0x28]                ; 0054caaf
    FXCH                                ; 0054cab3
    FSTP float ptr [ESP + 0x28]         ; 0054cab5
    FSTP float ptr [ESP + 0x2c]         ; 0054cab9
    FSTP float ptr [ESP + 0x30]         ; 0054cabd
    MOVSD ES:EDI,ESI                    ; 0054cac1
    MOVSD ES:EDI,ESI                    ; 0054cac2
    MOVSD ES:EDI,ESI                    ; 0054cac3
    PUSH EDX                            ; 0054cac4
    FLD float ptr [ESP + 0x40]          ; 0054cac5
    LEA ESI,[ESP + 0x14]                ; 0054cac9
    FADD float ptr [0x005f0425]         ; 0054cacd | DAT_005f0425
    LEA EDI,[ESP + 0x50]                ; 0054cad3
    FSTP float ptr [ESP + 0x40]         ; 0054cad7
    CALL FUN_00408b40                   ; 0054cadb
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 0054cae0
    LEA EAX,[EBP + 0x30]                ; 0054cae3
    LEA ESI,[ESP + 0xc]                 ; 0054cae6
    PUSH EAX                            ; 0054caea
    MOVSD ES:EDI,ESI                    ; 0054caeb
    MOVSD ES:EDI,ESI                    ; 0054caec
    MOVSD ES:EDI,ESI                    ; 0054caed
    LEA EAX,[ESP + 0x4c]                ; 0054caee
    FLD float ptr [ESP + 0x50]          ; 0054caf2
    PUSH EAX                            ; 0054caf6
    FADD float ptr [0x005f0429]         ; 0054caf7 | DAT_005f0429
    PUSH EBP                            ; 0054cafd
    FSTP float ptr [ESP + 0x58]         ; 0054cafe
    MOV EBX,dword ptr [EBP + 0x154]     ; 0054cb02
    CALL dword ptr [EBX + 0x68]         ; 0054cb08
    MOV EAX,0x1                         ; 0054cb0b
    ADD ESP,0xc                         ; 0054cb10
    POP EBX                             ; 0054cb13
    POP ESI                             ; 0054cb14
    POP EDI                             ; 0054cb15
    ADD ESP,0x78                        ; 0054cb16
    POP EBP                             ; 0054cb19
    RET                                 ; 0054cb1a

