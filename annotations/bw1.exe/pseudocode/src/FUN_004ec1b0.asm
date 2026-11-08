; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004ec1b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005e4935
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec1b0
        ;   Label: FUN_004ec1b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ec1b1
    PUSH EBX                            ; 004ec1b5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ec1b6
    CALL dword ptr [EAX + 0x10c]        ; 004ec1bc
    ADD ESP,0x4                         ; 004ec1c2
    CMP EAX,0x1                         ; 004ec1c5
    JG 0x004ec26e                       ; 004ec1c8
        ;   XREF to: 004ec26e (CONDITIONAL_JUMP)  ; LAB_004ec26e
    JZ 0x004ec270                       ; 004ec1ce
        ;   XREF to: 004ec270 (CONDITIONAL_JUMP)  ; LAB_004ec270
    CMP dword ptr [EBX + 0xc1d8],0x0    ; 004ec1d4
    JNZ 0x004ec272                      ; 004ec1db
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    CMP dword ptr [EBX + 0xc1dc],0x0    ; 004ec1e1
    JNZ 0x004ec272                      ; 004ec1e8
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    CMP dword ptr [EBX + 0xc1e4],0x0    ; 004ec1ee
    JNZ 0x004ec272                      ; 004ec1f5
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 004ec1fb
    JNZ 0x004ec272                      ; 004ec202
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    CMP dword ptr [EBX + 0xc1ec],0x0    ; 004ec208
    JNZ 0x004ec272                      ; 004ec20f
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    CMP dword ptr [EBX + 0xc1f0],0x0    ; 004ec211
    JNZ 0x004ec272                      ; 004ec218
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    CMP dword ptr [EBX + 0xc1f4],0x0    ; 004ec21a
    JNZ 0x004ec272                      ; 004ec221
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    CMP dword ptr [EBX + 0xc1f8],0x0    ; 004ec223
    JNZ 0x004ec272                      ; 004ec22a
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    FLD float ptr [EBX + 0xc1fc]        ; 004ec22c
    FABS                                ; 004ec232
    FCOMP double ptr [0x005e4935]       ; 004ec234 | DAT_005e4935
    FNSTSW AX                           ; 004ec23a
    SAHF                                ; 004ec23c
    JA 0x004ec272                       ; 004ec23d
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    FLD float ptr [EBX + 0xc200]        ; 004ec23f
    FABS                                ; 004ec245
    FCOMP double ptr [0x005e4935]       ; 004ec247 | DAT_005e4935
    FNSTSW AX                           ; 004ec24d
    SAHF                                ; 004ec24f
    JA 0x004ec272                       ; 004ec250
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    FLD float ptr [EBX + 0xc204]        ; 004ec252
    FABS                                ; 004ec258
    FCOMP double ptr [0x005e4935]       ; 004ec25a | DAT_005e4935
    FNSTSW AX                           ; 004ec260
    SAHF                                ; 004ec262
    JA 0x004ec272                       ; 004ec263
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    CMP dword ptr [EBX + 0x2500],0x0    ; 004ec265
    JZ 0x004ec272                       ; 004ec26c
        ;   XREF to: 004ec272 (CONDITIONAL_JUMP)  ; LAB_004ec272
    XOR EAX,EAX                         ; 004ec26e
        ;   Label: LAB_004ec26e
    POP EBX                             ; 004ec270
        ;   Label: LAB_004ec270
    RET                                 ; 004ec271
    MOV EAX,0x1                         ; 004ec272
        ;   Label: LAB_004ec272
    POP EBX                             ; 004ec277
    RET                                 ; 004ec278

