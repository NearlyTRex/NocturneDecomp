; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_00438260(void)
;
;
; Called Functions:
;   FUN_00437290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438260
        ;   Label: cockpit_ckptutil.c_FUN_00438260
    PUSH ESI                            ; 00438261
    PUSH EDI                            ; 00438262
    PUSH EBP                            ; 00438263
    SUB ESP,0x4                         ; 00438264
    MOV EBX,dword ptr [ESP + 0x18]      ; 00438267
    MOV EDI,dword ptr [ESP + 0x24]      ; 0043826b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0043826f
    TEST EDI,EDI                        ; 00438273
    JZ 0x00438280                       ; 00438275
        ;   XREF to: 00438280 (CONDITIONAL_JUMP)  ; LAB_00438280
    TEST EBX,EBX                        ; 00438277
    JNZ 0x00438288                      ; 00438279
        ;   XREF to: 00438288 (CONDITIONAL_JUMP)  ; LAB_00438288
    LEA EAX,[EAX]                       ; 0043827b
    MOV ECX,ECX                         ; 0043827e
    ADD ESP,0x4                         ; 00438280
        ;   Label: LAB_00438280
    POP EBP                             ; 00438283
    POP EDI                             ; 00438284
    POP ESI                             ; 00438285
    POP EBX                             ; 00438286
    RET                                 ; 00438287
    CALL FUN_00437290                   ; 00438288
        ;   XREF to: 00437290 (UNCONDITIONAL_CALL)  ; undefined FUN_00437290()
        ;   Label: LAB_00438288
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043828d
    MOV dword ptr [ESP],EAX             ; 00438291
    MOV EAX,dword ptr [ESP + 0x34]      ; 00438294
    IMUL EAX,EDX                        ; 00438298
    ADD EAX,dword ptr [ESP + 0x30]      ; 0043829b
    ADD EBX,EAX                         ; 0043829f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004382a1
    XOR ESI,ESI                         ; 004382a5
    TEST EAX,EAX                        ; 004382a7
    JLE 0x00438280                      ; 004382a9
        ;   XREF to: 00438280 (CONDITIONAL_JUMP)  ; LAB_00438280
    PUSH EBP                            ; 004382ab
        ;   Label: LAB_004382ab
    PUSH EDI                            ; 004382ac
    PUSH EBX                            ; 004382ad
    INC ESI                             ; 004382ae
    CALL dword ptr [ESP + 0xc]          ; 004382af
    ADD ESP,0xc                         ; 004382b3
    ADD EDI,EBP                         ; 004382b6
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004382b8
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004382bc
    ADD EBX,EDX                         ; 004382c0
    CMP ESI,ECX                         ; 004382c2
    JL 0x004382ab                       ; 004382c4
        ;   XREF to: 004382ab (CONDITIONAL_JUMP)  ; LAB_004382ab
    ADD ESP,0x4                         ; 004382c6
    POP EBP                             ; 004382c9
    POP EDI                             ; 004382ca
    POP ESI                             ; 004382cb
    POP EBX                             ; 004382cc
    RET                                 ; 004382cd

