; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00533060(int param_1)
;
;
; XREF[9]:
;   FUN_004159f0 at 00415a05
;   FUN_004ea980 at 004ea9ba
;   FUN_004ed1f0 at 004ed20f
;   FUN_004ed400 at 004ed415
;   FUN_004ef910 at 004ef925
;   FUN_004f0a90 at 004f0aa5
;   FUN_00532850 at 005328a3
;   FUN_00594cb0 at 00594cc5
;   FUN_00594d50 at 00594d65
;
; Referenced Globals:
;   undefined4 DAT_01e6be48
;
; Called Functions:
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533060
        ;   Label: FUN_00533060
    PUSH ESI                            ; 00533061
    PUSH EDI                            ; 00533062
    PUSH EBP                            ; 00533063
    MOV EDI,dword ptr [0x01e6be48]      ; 00533064 | DAT_01e6be48
    MOV ESI,dword ptr [ESP + 0x14]      ; 0053306a
    XOR ECX,ECX                         ; 0053306e
    TEST EDI,EDI                        ; 00533070
    JLE 0x00533091                      ; 00533072
        ;   XREF to: 00533091 (CONDITIONAL_JUMP)  ; LAB_00533091
    LEA EBX,[EDI*0x4 + 0x0]             ; 00533074
    XOR EAX,EAX                         ; 0053307b
    MOV EBP,dword ptr [EAX + 0x1e6be4c] ; 0053307d
        ;   Label: LAB_0053307d
    LEA EDX,[EAX + 0x4]                 ; 00533083
    CMP ESI,EBP                         ; 00533086
    JZ 0x0053309e                       ; 00533088
        ;   XREF to: 0053309e (CONDITIONAL_JUMP)  ; LAB_0053309e
    MOV EAX,EDX                         ; 0053308a
    INC ECX                             ; 0053308c
    CMP EDX,EBX                         ; 0053308d
    JL 0x0053307d                       ; 0053308f
        ;   XREF to: 0053307d (CONDITIONAL_JUMP)  ; LAB_0053307d
    MOV EAX,ESI                         ; 00533091
        ;   Label: LAB_00533091
    MOV dword ptr [0x01e6be48],EDI      ; 00533093 | DAT_01e6be48
    POP EBP                             ; 00533099
    POP EDI                             ; 0053309a
    POP ESI                             ; 0053309b
    POP EBX                             ; 0053309c
    RET                                 ; 0053309d
    DEC EDI                             ; 0053309e
        ;   Label: LAB_0053309e
    MOV EBX,EDI                         ; 0053309f
    SUB EBX,ECX                         ; 005330a1
    LEA ECX,[EBX*0x4 + 0x0]             ; 005330a3
    PUSH ECX                            ; 005330aa
    ADD EDX,0x1e6be4c                   ; 005330ab
    PUSH EDX                            ; 005330b1
    ADD EAX,0x1e6be4c                   ; 005330b2
    PUSH EAX                            ; 005330b7
    MOV dword ptr [0x01e6be48],EDI      ; 005330b8 | DAT_01e6be48
    CALL FUN_005c25d0                   ; 005330be
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    MOV EDI,dword ptr [0x01e6be48]      ; 005330c3 | DAT_01e6be48
    XOR EAX,EAX                         ; 005330c9
    ADD ESP,0xc                         ; 005330cb
    MOV dword ptr [EDI*0x4 + 0x1e6be4c],EAX ; 005330ce
    MOV EAX,ESI                         ; 005330d5
    MOV dword ptr [0x01e6be48],EDI      ; 005330d7 | DAT_01e6be48
    POP EBP                             ; 005330dd
    POP EDI                             ; 005330de
    POP ESI                             ; 005330df
    POP EBX                             ; 005330e0
    RET                                 ; 005330e1

