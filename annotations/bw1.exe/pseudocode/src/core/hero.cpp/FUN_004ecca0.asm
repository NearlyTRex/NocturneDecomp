; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ecca0(int param_1)
;
;
; XREF[1]:
;   FUN_0051bf30 at 0051c073
;
; Referenced Globals:
;   TerminatedCString s_core_hero_cpp_005e4b9d
;   TerminatedCString s_CHeroPlaceholder_createH_005e4bae
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d06b10
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   FUN_004088b0
;   FUN_0040c2b0
;   FUN_0040c600
;   FUN_005030e0
;   FUN_0051bd60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecca0
        ;   Label: FUN_004ecca0
    PUSH ESI                            ; 004ecca1
    PUSH EBP                            ; 004ecca2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ecca3
    MOV EDX,dword ptr [0x01d06b10]      ; 004ecca7 | DAT_01d06b10
    PUSH EDX                            ; 004eccad
    LEA EAX,[ESI + 0x15c]               ; 004eccae
    PUSH EAX                            ; 004eccb4
    CALL FUN_0040c2b0                   ; 004eccb5
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c2b0()
    ADD ESP,0x4                         ; 004eccba
    PUSH EAX                            ; 004eccbd
    CALL FUN_0040c600                   ; 004eccbe
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004eccc3
    MOV EBX,EAX                         ; 004eccc6
    TEST EAX,EAX                        ; 004eccc8
    JNZ 0x004eccf1                      ; 004eccca
        ;   XREF to: 004eccf1 (CONDITIONAL_JUMP)  ; LAB_004eccf1
    PUSH EDI                            ; 004ecccc
    MOV ECX,0x5e4b9d                    ; 004ecccd | = "..\\core\\hero.cpp"
    MOV EDI,0x6cf                       ; 004eccd2
    PUSH 0x5e4bae                       ; 004eccd7 | = "CHeroPlaceholder::createHero - failed."
    MOV dword ptr [0x01d1d400],ECX      ; 004eccdc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004ecce2 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004ecce8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004ecced
    POP EDI                             ; 004eccf0
    PUSH EBX                            ; 004eccf1
        ;   Label: LAB_004eccf1
    MOV EBP,dword ptr [0x0061f650]      ; 004eccf2 | DAT_0061f650
    PUSH EBP                            ; 004eccf8 | DAT_01d2c900
    CALL FUN_0051bd60                   ; 004eccf9
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0051bd60()
    LEA EAX,[ESI + 0x20]                ; 004eccfe
    LEA EDX,[EBX + 0x20]                ; 004ecd01
    MOV ECX,dword ptr [EAX]             ; 004ecd04
    MOV dword ptr [EDX],ECX             ; 004ecd06
    MOV ECX,dword ptr [EAX + 0x4]       ; 004ecd08
    MOV dword ptr [EDX + 0x4],ECX       ; 004ecd0b
    MOV ECX,dword ptr [EAX + 0x8]       ; 004ecd0e
    MOV dword ptr [EDX + 0x8],ECX       ; 004ecd11
    MOV EAX,dword ptr [EAX + 0xc]       ; 004ecd14
    MOV dword ptr [EDX + 0xc],EAX       ; 004ecd17
    LEA EDX,[EBX + 0x30]                ; 004ecd1a
    LEA EAX,[ESI + 0x30]                ; 004ecd1d
    ADD ESP,0x8                         ; 004ecd20
    CMP EDX,EAX                         ; 004ecd23
    JZ 0x004ecd37                       ; 004ecd25
        ;   XREF to: 004ecd37 (CONDITIONAL_JUMP)  ; LAB_004ecd37
    MOV ECX,dword ptr [EAX]             ; 004ecd27
    MOV dword ptr [EDX],ECX             ; 004ecd29
    MOV ECX,dword ptr [EAX + 0x4]       ; 004ecd2b
    MOV dword ptr [EDX + 0x4],ECX       ; 004ecd2e
    MOV ECX,dword ptr [EAX + 0x8]       ; 004ecd31
    MOV dword ptr [EDX + 0x8],ECX       ; 004ecd34
    PUSH EBX                            ; 004ecd37
        ;   Label: LAB_004ecd37
    CALL FUN_004088b0                   ; 004ecd38
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004088b0()
    ADD ESP,0x4                         ; 004ecd3d
    MOV EAX,EBX                         ; 004ecd40
    POP EBP                             ; 004ecd42
    POP ESI                             ; 004ecd43
    POP EBX                             ; 004ecd44
    RET                                 ; 004ecd45

