; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004105b0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_core_baron_cpp_005d351c
;   TerminatedCString s_CBaronWeapon_setWeaponSt_005d352e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_0040fa70
;   FUN_0040fbc0
;   FUN_00410640
;   FUN_005030e0
;   FUN_005add50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004105b0
        ;   Label: FUN_004105b0
    PUSH ESI                            ; 004105b1
    PUSH EBP                            ; 004105b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004105b3
    MOV EDX,dword ptr [ESP + 0x14]      ; 004105b7
    PUSH EDX                            ; 004105bb
    PUSH EBX                            ; 004105bc
    CALL FUN_005add50                   ; 004105bd
        ;   XREF to: 005add50 (UNCONDITIONAL_CALL)  ; undefined FUN_005add50()
    ADD ESP,0x8                         ; 004105c2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004105c5
    PUSH EBX                            ; 004105cb
    CALL dword ptr [EAX + 0x94]         ; 004105cc
    ADD ESP,0x4                         ; 004105d2
    MOV ECX,dword ptr [EBX + 0x2d4]     ; 004105d5
    MOV ESI,EAX                         ; 004105db
    CMP ECX,0x2                         ; 004105dd
    JNZ 0x00410625                      ; 004105e0
        ;   XREF to: 00410625 (CONDITIONAL_JUMP)  ; LAB_00410625
    TEST EAX,EAX                        ; 004105e2
    JNZ 0x00410608                      ; 004105e4
        ;   XREF to: 00410608 (CONDITIONAL_JUMP)  ; LAB_00410608
    MOV EBP,0x5d351c                    ; 004105e6 | = "..\\core\\baron.cpp"
    MOV EAX,0x320                       ; 004105eb
    PUSH 0x5d352e                       ; 004105f0 | = "CBaronWeapon::setWeaponState - I'm dr..."
    MOV dword ptr [0x01d1d400],EBP      ; 004105f5 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004105fb | DAT_01d1d404
    CALL FUN_005030e0                   ; 00410600
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00410605
    PUSH EBX                            ; 00410608
        ;   Label: LAB_00410608
    CALL FUN_00410640                   ; 00410609
        ;   XREF to: 00410640 (UNCONDITIONAL_CALL)  ; undefined FUN_00410640()
    ADD ESP,0x4                         ; 0041060e
    PUSH ESI                            ; 00410611
    MOV EDX,dword ptr [EBX + 0x578]     ; 00410612
    PUSH EDX                            ; 00410618
    CALL FUN_0040fa70                   ; 00410619
        ;   XREF to: 0040fa70 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fa70()
    ADD ESP,0x8                         ; 0041061e
    POP EBP                             ; 00410621
        ;   Label: LAB_00410621
    POP ESI                             ; 00410622
    POP EBX                             ; 00410623
    RET                                 ; 00410624
    MOV ESI,dword ptr [EBX + 0x578]     ; 00410625
        ;   Label: LAB_00410625
    TEST ESI,ESI                        ; 0041062b
    JZ 0x00410621                       ; 0041062d
        ;   XREF to: 00410621 (CONDITIONAL_JUMP)  ; LAB_00410621
    PUSH EAX                            ; 0041062f
    PUSH ESI                            ; 00410630
    CALL FUN_0040fbc0                   ; 00410631
        ;   XREF to: 0040fbc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fbc0()
    ADD ESP,0x8                         ; 00410636
    POP EBP                             ; 00410639
    POP ESI                             ; 0041063a
    POP EBX                             ; 0041063b
    RET                                 ; 0041063c

