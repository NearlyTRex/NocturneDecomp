; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00468780(undefined4 param_1)
;
;
; XREF[7]:
;   FUN_004688e0 at 004688e8
;   FUN_0049e9c0 at 0049eaa4
;   FUN_004b1f80 at 004b1f85
;   FUN_004e8630 at 004e8a10
;   FUN_005407e0 at 005408df
;   FUN_00561f80 at 0056207f
;   FUN_00598420 at 00598833
;
; Referenced Globals:
;   TerminatedCString s_core_dmodel_cpp_005d97a7
;   TerminatedCString s_Can_t_load_s_because_key_005d97ba
;   undefined4 DAT_01b2efdc
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004668a0
;   FUN_00467bc0
;   FUN_005030e0
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468780
        ;   Label: FUN_00468780
    PUSH ESI                            ; 00468781
    PUSH EDI                            ; 00468782
    PUSH EBP                            ; 00468783
    MOV EBP,ESP                         ; 00468784
    MOV EDI,dword ptr [EBP + 0x14]      ; 00468786
    MOV EDX,dword ptr [0x01b2efdc]      ; 00468789 | DAT_01b2efdc
    XOR ESI,ESI                         ; 0046878f
    TEST EDX,EDX                        ; 00468791
    JLE 0x004687b9                      ; 00468793
        ;   XREF to: 004687b9 (CONDITIONAL_JUMP)  ; LAB_004687b9
    MOV EBX,0x1b2efe0                   ; 00468795
    PUSH EDI                            ; 0046879a
        ;   Label: LAB_0046879a
    PUSH EBX                            ; 0046879b
    CALL FUN_005c04e0                   ; 0046879c
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 004687a1
    TEST EAX,EAX                        ; 004687a4
    JZ 0x0046881b                       ; 004687a6
        ;   XREF to: 0046881b (CONDITIONAL_JUMP)  ; LAB_0046881b
    MOV ECX,dword ptr [0x01b2efdc]      ; 004687a8 | DAT_01b2efdc
    INC ESI                             ; 004687ae
    ADD EBX,0x398                       ; 004687af
    CMP ESI,ECX                         ; 004687b5
    JL 0x0046879a                       ; 004687b7
        ;   XREF to: 0046879a (CONDITIONAL_JUMP)  ; LAB_0046879a
    CMP dword ptr [0x01b2efdc],0x100    ; 004687b9 | DAT_01b2efdc
        ;   Label: LAB_004687b9
    JL 0x004687ed                       ; 004687c3
        ;   XREF to: 004687ed (CONDITIONAL_JUMP)  ; LAB_004687ed
    PUSH 0x100                          ; 004687c5
    PUSH EDI                            ; 004687ca
    MOV ESI,0x5d97a7                    ; 004687cb | = "..\\core\\dmodel.cpp"
    MOV EAX,0x4cd                       ; 004687d0
    PUSH 0x5d97ba                       ; 004687d5 | = "Can't load %s because keyFrame model ..."
    MOV dword ptr [0x01d1d400],ESI      ; 004687da | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004687e0 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004687e5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 004687ea
    MOV EDX,dword ptr [0x01b2efdc]      ; 004687ed | DAT_01b2efdc
        ;   Label: LAB_004687ed
    IMUL EBX,EDX,0x398                  ; 004687f3
    PUSH EDI                            ; 004687f9
    ADD EBX,0x1b2efe0                   ; 004687fa
    LEA ECX,[EDX + 0x1]                 ; 00468800
    PUSH EBX                            ; 00468803
    MOV dword ptr [0x01b2efdc],ECX      ; 00468804 | DAT_01b2efdc
    CALL FUN_004668a0                   ; 0046880a
        ;   XREF to: 004668a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004668a0()
    ADD ESP,0x8                         ; 0046880f
    PUSH EBX                            ; 00468812
    CALL FUN_00467bc0                   ; 00468813
        ;   XREF to: 00467bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00467bc0()
    ADD ESP,0x4                         ; 00468818
    MOV EAX,EBX                         ; 0046881b
        ;   Label: LAB_0046881b
    POP EBP                             ; 0046881d
    POP EDI                             ; 0046881e
    POP ESI                             ; 0046881f
    POP EBX                             ; 00468820
    RET                                 ; 00468821

