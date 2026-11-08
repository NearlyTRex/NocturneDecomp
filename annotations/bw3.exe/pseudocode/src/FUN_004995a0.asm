; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004995a0(void)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_004a1ad0 at 004a1b87
;
; Referenced Globals:
;   undefined4 DAT_005c0578
;   undefined4 DAT_005f2afc
;   undefined4 DAT_007e2a54
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c73658
;   undefined4 DAT_01c7365c
;   undefined4 DAT_01c73660
;   undefined4 DAT_01c73664
;   undefined4 DAT_01c73668
;   undefined4 DAT_01c7366c
;   undefined4 DAT_01c73674
;   undefined4 DAT_01c73678
;   undefined4 DAT_01c7367c
;   undefined4 DAT_01c73680
;   undefined4 DAT_01c73684
;   ... and 4 more
;
; Called Functions:
;   FUN_0046d230
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004995a0
        ;   Label: FUN_004995a0
    PUSH ESI                            ; 004995a1
    PUSH EDI                            ; 004995a2
    SUB ESP,0x5c                        ; 004995a3
    MOV EDX,0x4                         ; 004995a6
    MOV EAX,0x1                         ; 004995ab
    LEA ESI,[ESP + 0x50]                ; 004995b0
    MOV EBX,dword ptr [0x005f2afc]      ; 004995b4 | DAT_005f2afc
    MOV EDI,0x1c73658                   ; 004995ba
    XOR ECX,ECX                         ; 004995bf
    MOV dword ptr [0x01c73674],EDX      ; 004995c1 | DAT_01c73674
    MOV dword ptr [0x01c73678],ECX      ; 004995c7 | DAT_01c73678
    MOV dword ptr [0x01c7367c],ECX      ; 004995cd | DAT_01c7367c
    MOV dword ptr [0x01c73680],ECX      ; 004995d3 | DAT_01c73680
    MOV dword ptr [0x01c73684],ECX      ; 004995d9 | DAT_01c73684
    MOV dword ptr [0x01c73688],ECX      ; 004995df | DAT_01c73688
    MOV [0x01c7368c],EAX                ; 004995e5 | DAT_01c7368c
    PUSH EBX                            ; 004995ea | DAT_01bdd7e4
    MOV EDX,0x2                         ; 004995eb
    MOV ECX,0x3                         ; 004995f0
    MOV dword ptr [0x01c73690],EDX      ; 004995f5 | DAT_01c73690
    MOV dword ptr [0x01c73694],ECX      ; 004995fb | DAT_01c73694
    CALL FUN_0046d230                   ; 00499601
        ;   XREF to: 0046d230 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d230()
    LEA ESI,[ESP + 0x54]                ; 00499606
    ADD ESP,0x4                         ; 0049960a
    MOVSD ES:EDI,ESI                    ; 0049960d | DAT_01c73658
    MOVSD ES:EDI,ESI                    ; 0049960e | DAT_01c7365c
    MOVSD ES:EDI,ESI                    ; 0049960f | DAT_01c73660
    XOR ESI,ESI                         ; 00499610
    MOV dword ptr [0x01c7365c],ESI      ; 00499612 | DAT_01c7365c
    MOV ESI,dword ptr [0x007e2a54]      ; 00499618 | DAT_007e2a54
    MOV ECX,0xa                         ; 0049961e
    LEA EDI,[ESP + 0x28]                ; 00499623
    LEA ESI,[ESI + 0x10]                ; 00499627
    MOVSD.REP ES:EDI,ESI                ; 0049962a
    MOV ECX,0xa                         ; 0049962c
    MOV EDI,ESP                         ; 00499631
    LEA ESI,[ESP + 0x28]                ; 00499633
    MOVSD.REP ES:EDI,ESI                ; 00499637
    FLD double ptr [0x005c0578]         ; 00499639 | DAT_005c0578
    FLD float ptr [ESP + 0x8]           ; 0049963f
    FMUL ST1                            ; 00499643
    FLD float ptr [ESP + 0x14]          ; 00499645
    FMUL ST2                            ; 00499649
    FLD float ptr [ESP + 0x20]          ; 0049964b
    FMULP ST3                           ; 0049964f
    FXCH                                ; 00499651
    CALL FUN_005a3120                   ; 00499653
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00499658
    CALL FUN_005a3120                   ; 0049965a
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH ST2                            ; 0049965f
    CALL FUN_005a3120                   ; 00499661
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 00499666
    FISTP dword ptr [0x01c73664]        ; 00499668 | DAT_01c73664
    FXCH                                ; 0049966e
    FISTP dword ptr [0x01c73668]        ; 00499670 | DAT_01c73668
    FISTP dword ptr [0x01c7366c]        ; 00499676 | DAT_01c7366c
    ADD ESP,0x5c                        ; 0049967c
    POP EDI                             ; 0049967f
    POP ESI                             ; 00499680
    POP EBX                             ; 00499681
    RET                                 ; 00499682

