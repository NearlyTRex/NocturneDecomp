; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00435380(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x1f64]:4  local_1f64
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[3]:
;   FUN_00433f10 at 00433fa2
;   FUN_00460230 at 00460688
;   FUN_0055de50 at 0055e47e
;
; Referenced Globals:
;   undefined4 DAT_005d5feb
;   undefined4 DAT_00622c18
;   undefined4 DAT_01fd6fdc
;
; Called Functions:
;   FUN_0040cc60
;   FUN_004354a0
;   FUN_0049dea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435380
        ;   Label: FUN_00435380
    PUSH ESI                            ; 00435381
    PUSH EDI                            ; 00435382
    PUSH EBP                            ; 00435383
    SUB ESP,0x1f54                      ; 00435384
    MOV ESI,dword ptr [ESP + 0x1f68]    ; 0043538a
    XOR EDX,EDX                         ; 00435391
    XOR EDI,EDI                         ; 00435393
    XOR EBP,EBP                         ; 00435395
    MOV dword ptr [ESP + 0x1f48],EDX    ; 00435397
    MOV dword ptr [ESP + 0x1f4c],EDX    ; 0043539e
    ADD ESI,0x20                        ; 004353a5
    MOV EAX,[0x00622c18]                ; 004353a8 | DAT_00622c18
        ;   Label: LAB_004353a8
    MOV EBX,dword ptr [ESP + 0x1f4c]    ; 004353ad
    CMP EBX,dword ptr [EAX + 0x154e74]  ; 004353b4 | DAT_01fd6fdc
    JL 0x004353fd                       ; 004353ba
        ;   XREF to: 004353fd (CONDITIONAL_JUMP)  ; LAB_004353fd
    MOV ECX,dword ptr [ESP + 0x1f48]    ; 004353bc
    TEST ECX,ECX                        ; 004353c3
    JLE 0x004353f0                      ; 004353c5
        ;   XREF to: 004353f0 (CONDITIONAL_JUMP)  ; LAB_004353f0
    LEA EDI,[ECX + -0x1]                ; 004353c7
    XOR ESI,ESI                         ; 004353ca
    XOR EBP,EBP                         ; 004353cc
    PUSH EDI                            ; 004353ce
        ;   Label: LAB_004353ce
    PUSH EBP                            ; 004353cf
    CALL FUN_0040cc60                   ; 004353d0
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    LEA EBX,[EAX*0x4 + 0x0]             ; 004353d5
    ADD ESP,0x8                         ; 004353dc
    MOV EAX,dword ptr [ESP + EBX*0x1]   ; 004353df
    CMP EBP,EAX                         ; 004353e2
    JNZ 0x00435474                      ; 004353e4
        ;   XREF to: 00435474 (CONDITIONAL_JUMP)  ; LAB_00435474
    INC ESI                             ; 004353ea
        ;   Label: LAB_004353ea
    CMP ESI,0xa                         ; 004353eb
    JL 0x004353ce                       ; 004353ee
        ;   XREF to: 004353ce (CONDITIONAL_JUMP)  ; LAB_004353ce
    XOR EAX,EAX                         ; 004353f0
        ;   Label: LAB_004353f0
    ADD ESP,0x1f54                      ; 004353f2
        ;   Label: LAB_004353f2
    POP EBP                             ; 004353f8
    POP EDI                             ; 004353f9
    POP ESI                             ; 004353fa
    POP EBX                             ; 004353fb
    RET                                 ; 004353fc
    PUSH 0x0                            ; 004353fd
        ;   Label: LAB_004353fd
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x154e78] ; 004353ff
    PUSH EBX                            ; 00435406
    MOV EAX,dword ptr [ESP + 0x1f74]    ; 00435407
    PUSH EAX                            ; 0043540e
    CALL FUN_0049dea0                   ; 0043540f
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049dea0()
    ADD ESP,0xc                         ; 00435414
    TEST EAX,EAX                        ; 00435417
    JZ 0x0043545d                       ; 00435419
        ;   XREF to: 0043545d (CONDITIONAL_JUMP)  ; LAB_0043545d
    LEA EAX,[EBX + 0x20]                ; 0043541b
    FLD float ptr [ESI]                 ; 0043541e
    FSUB float ptr [EAX]                ; 00435420
    FMUL ST0                            ; 00435422
    FLD float ptr [ESI + 0x4]           ; 00435424
    FSUB float ptr [EAX + 0x4]          ; 00435427
    FMUL ST0                            ; 0043542a
    FLD float ptr [ESI + 0x8]           ; 0043542c
    FXCH                                ; 0043542f
    FADDP ST2,ST0                       ; 00435431
    FSUB float ptr [EAX + 0x8]          ; 00435433
    FMUL ST0                            ; 00435436
    FADDP                               ; 00435438
    FSQRT                               ; 0043543a
    FCOMP float ptr [0x005d5feb]        ; 0043543c | DAT_005d5feb
    FNSTSW AX                           ; 00435442
    SAHF                                ; 00435444
    JA 0x0043545d                       ; 00435445
        ;   XREF to: 0043545d (CONDITIONAL_JUMP)  ; LAB_0043545d
    MOV EDX,dword ptr [ESP + 0x1f48]    ; 00435447
    ADD EBP,0x4                         ; 0043544e
    INC EDX                             ; 00435451
    MOV dword ptr [ESP + EBP*0x1 + -0x4],EBX ; 00435452
    MOV dword ptr [ESP + 0x1f48],EDX    ; 00435456
    MOV ECX,dword ptr [ESP + 0x1f4c]    ; 0043545d
        ;   Label: LAB_0043545d
    INC ECX                             ; 00435464
    ADD EDI,0x4                         ; 00435465
    MOV dword ptr [ESP + 0x1f4c],ECX    ; 00435468
    JMP 0x004353a8                      ; 0043546f
        ;   XREF to: 004353a8 (UNCONDITIONAL_JUMP)  ; LAB_004353a8
    PUSH EAX                            ; 00435474
        ;   Label: LAB_00435474
    MOV ECX,dword ptr [ESP + 0x1f6c]    ; 00435475
    PUSH ECX                            ; 0043547c
    CALL FUN_004354a0                   ; 0043547d
        ;   XREF to: 004354a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004354a0()
    ADD ESP,0x8                         ; 00435482
    TEST EAX,EAX                        ; 00435485
    JNZ 0x004353f2                      ; 00435487
        ;   XREF to: 004353f2 (CONDITIONAL_JUMP)  ; LAB_004353f2
    MOV dword ptr [ESP + EBX*0x1],EBP   ; 0043548d
    JMP 0x004353ea                      ; 00435490
        ;   XREF to: 004353ea (UNCONDITIONAL_JUMP)  ; LAB_004353ea

