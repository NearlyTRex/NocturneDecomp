; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004794b0(int param_1,byte *param_2)
;
;
; XREF[2]:
;   FUN_00479360 at 004793af
;   FUN_004793e0 at 00479436
;
; Referenced Globals:
;   TerminatedCString s_engine_dosio_c_005daa8e
;   TerminatedCString s_CFileFinder_convertStruc_005daaa0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005bfb70
;   FUN_005c20d0
;   FUN_005c2106
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004794b0
        ;   Label: FUN_004794b0
    PUSH ESI                            ; 004794b1
    PUSH EDI                            ; 004794b2
    PUSH EBP                            ; 004794b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004794b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004794b8
    PUSH 0x100                          ; 004794bc
    PUSH 0x0                            ; 004794c1
    PUSH ESI                            ; 004794c3
    CALL FUN_005bfb70                   ; 004794c4
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 004794c9
    PUSH 0xff                           ; 004794cc
    MOV EBX,EDI                         ; 004794d1
    LEA EAX,[EDI + 0x2c]                ; 004794d3
    PUSH EAX                            ; 004794d6
    PUSH ESI                            ; 004794d7
    CALL FUN_005c20d0                   ; 004794d8
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c20d0()
    MOV dword ptr [ESI + 0x100],0x0     ; 004794dd
    MOV AH,byte ptr [EDI]               ; 004794e7
    ADD ESP,0xc                         ; 004794e9
    TEST AH,0x20                        ; 004794ec
    JNZ 0x0047954f                      ; 004794ef
        ;   XREF to: 0047954f (CONDITIONAL_JUMP)  ; LAB_0047954f
    TEST byte ptr [EBX],0x2             ; 004794f1
        ;   Label: LAB_004794f1
    JZ 0x004794fd                       ; 004794f4
        ;   XREF to: 004794fd (CONDITIONAL_JUMP)  ; LAB_004794fd
    OR byte ptr [ESI + 0x100],0x2       ; 004794f6
    TEST byte ptr [EBX],0x10            ; 004794fd
        ;   Label: LAB_004794fd
    JZ 0x00479509                       ; 00479500
        ;   XREF to: 00479509 (CONDITIONAL_JUMP)  ; LAB_00479509
    OR byte ptr [ESI + 0x100],0x4       ; 00479502
    TEST byte ptr [EBX],0x1             ; 00479509
        ;   Label: LAB_00479509
    JZ 0x00479515                       ; 0047950c
        ;   XREF to: 00479515 (CONDITIONAL_JUMP)  ; LAB_00479515
    OR byte ptr [ESI + 0x100],0x8       ; 0047950e
    CMP dword ptr [EBX + 0x1c],0x0      ; 00479515
        ;   Label: LAB_00479515
    JNZ 0x00479558                      ; 00479519
        ;   XREF to: 00479558 (CONDITIONAL_JUMP)  ; LAB_00479558
    CMP dword ptr [EBX + 0x20],0x7fffffff ; 0047951b
    JA 0x00479558                       ; 00479522
        ;   XREF to: 00479558 (CONDITIONAL_JUMP)  ; LAB_00479558
    MOV EAX,dword ptr [EBX + 0x20]      ; 00479524
        ;   Label: LAB_00479524
    MOV dword ptr [ESI + 0x104],EAX     ; 00479527
    XOR ECX,ECX                         ; 0047952d
    MOV EAX,dword ptr [EBX + 0x14]      ; 0047952f
    MOV EDX,dword ptr [EBX + 0x18]      ; 00479532
    MOV EBX,0x989680                    ; 00479535
    CALL FUN_005c2106                   ; 0047953a
        ;   XREF to: 005c2106 (UNCONDITIONAL_CALL)  ; undefined FUN_005c2106()
    SUB EAX,0xb61082f0                  ; 0047953f
    MOV dword ptr [ESI + 0x108],EAX     ; 00479544
    POP EBP                             ; 0047954a
    POP EDI                             ; 0047954b
    POP ESI                             ; 0047954c
    POP EBX                             ; 0047954d
    RET                                 ; 0047954e
    OR byte ptr [ESI + 0x100],0x1       ; 0047954f
        ;   Label: LAB_0047954f
    JMP 0x004794f1                      ; 00479556
        ;   XREF to: 004794f1 (UNCONDITIONAL_JUMP)  ; LAB_004794f1
    MOV EDI,0x5daa8e                    ; 00479558 | = "..\\engine\\dosio.c"
        ;   Label: LAB_00479558
    MOV EBP,0x2ff                       ; 0047955d
    PUSH 0x5daaa0                       ; 00479562 | = "CFileFinder::convertStruct - file too..."
    MOV dword ptr [0x01d1d400],EDI      ; 00479567 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 0047956d | DAT_01d1d404
    CALL FUN_005030e0                   ; 00479573
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00479578
    JMP 0x00479524                      ; 0047957b
        ;   XREF to: 00479524 (UNCONDITIONAL_JUMP)  ; LAB_00479524

