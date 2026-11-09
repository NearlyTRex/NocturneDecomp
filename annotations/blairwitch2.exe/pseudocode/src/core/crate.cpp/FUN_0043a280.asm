; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_crate_cpp_FUN_0043a280(int param_1,float *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ce1f3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a280
        ;   Label: core_crate.cpp_FUN_0043a280
    PUSH ESI                            ; 0043a281
    PUSH EDI                            ; 0043a282
    SUB ESP,0x60                        ; 0043a283
    MOV ESI,dword ptr [ESP + 0x70]      ; 0043a286
    MOV EBX,dword ptr [ESP + 0x74]      ; 0043a28a
    PUSH ESI                            ; 0043a28e
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0043a28f
    LEA ESI,[ESP + 0x1c]                ; 0043a295
    LEA EDI,[ESP + 0x4]                 ; 0043a299
    CALL dword ptr [EAX + 0x24]         ; 0043a29d
    MOV ECX,0x6                         ; 0043a2a0
    LEA ESI,[ESP + 0x1c]                ; 0043a2a5
    ADD ESP,0x4                         ; 0043a2a9
    MOVSD.REP ES:EDI,ESI                ; 0043a2ac
    MOV EAX,ESP                         ; 0043a2ae
    FLD float ptr [ESP]                 ; 0043a2b0
    FLD float ptr [ESP + 0x4]           ; 0043a2b3
    FLD float ptr [ESP + 0x8]           ; 0043a2b7
    LEA EDI,[ESP + 0x48]                ; 0043a2bb
    LEA ESI,[ESP + 0x3c]                ; 0043a2bf
    FXCH ST2                            ; 0043a2c3
    FADD float ptr [EAX + 0xc]          ; 0043a2c5
    FXCH                                ; 0043a2c8
    FADD float ptr [EAX + 0x10]         ; 0043a2ca
    FXCH ST2                            ; 0043a2cd
    FADD float ptr [EAX + 0x14]         ; 0043a2cf
    FXCH                                ; 0043a2d2
    FSTP float ptr [ESP + 0x3c]         ; 0043a2d4
    FXCH                                ; 0043a2d8
    FSTP float ptr [ESP + 0x40]         ; 0043a2da
    FSTP float ptr [ESP + 0x44]         ; 0043a2de
    MOVSD ES:EDI,ESI                    ; 0043a2e2
    MOVSD ES:EDI,ESI                    ; 0043a2e3
    MOVSD ES:EDI,ESI                    ; 0043a2e4
    FLD float ptr [0x005ce1f3]          ; 0043a2e5 | DAT_005ce1f3
    FLD float ptr [ESP + 0x48]          ; 0043a2eb
    FMUL ST1                            ; 0043a2ef
    FLD float ptr [ESP + 0x4c]          ; 0043a2f1
    FMUL ST2                            ; 0043a2f5
    FLD float ptr [ESP + 0x50]          ; 0043a2f7
    FMULP ST3                           ; 0043a2fb
    LEA EAX,[ESP + 0x30]                ; 0043a2fd
    LEA EDI,[ESP + 0x30]                ; 0043a301
    LEA ESI,[ESP + 0x54]                ; 0043a305
    FXCH                                ; 0043a309
    FSTP float ptr [ESP + 0x54]         ; 0043a30b
    FSTP float ptr [ESP + 0x58]         ; 0043a30f
    FSTP float ptr [ESP + 0x5c]         ; 0043a313
    MOVSD ES:EDI,ESI                    ; 0043a317
    MOVSD ES:EDI,ESI                    ; 0043a318
    MOVSD ES:EDI,ESI                    ; 0043a319
    CMP EBX,EAX                         ; 0043a31a
    JNZ 0x0043a32a                      ; 0043a31c
        ;   XREF to: 0043a32a (CONDITIONAL_JUMP)  ; LAB_0043a32a
    MOV EAX,0x1                         ; 0043a31e
    ADD ESP,0x60                        ; 0043a323
    POP EDI                             ; 0043a326
    POP ESI                             ; 0043a327
    POP EBX                             ; 0043a328
    RET                                 ; 0043a329
    MOV EAX,dword ptr [ESP + 0x30]      ; 0043a32a
        ;   Label: LAB_0043a32a
    MOV dword ptr [EBX],EAX             ; 0043a32e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043a330
    MOV dword ptr [EBX + 0x4],EAX       ; 0043a334
    MOV EAX,dword ptr [ESP + 0x38]      ; 0043a337
    MOV dword ptr [EBX + 0x8],EAX       ; 0043a33b
    MOV EAX,0x1                         ; 0043a33e
    ADD ESP,0x60                        ; 0043a343
    POP EDI                             ; 0043a346
    POP ESI                             ; 0043a347
    POP EBX                             ; 0043a348
    RET                                 ; 0043a349

