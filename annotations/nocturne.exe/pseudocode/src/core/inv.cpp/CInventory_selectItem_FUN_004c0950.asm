; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_selectItem_FUN_004c0950(int param_1,int param_2)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processKeyboardControls_FUN_0049ee30 at 0049f179
;
; Referenced Globals:
;   string s_CWeapon_00587191
;   string s_CAmmo_00587199
;   string s_CWeapon_0058719f
;   string s_CAmmo_005871a7
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0950
        ;   Label: core_inv.cpp_CInventory_selectItem_FUN_004c0950
    PUSH ESI                            ; 004c0951
    PUSH EDI                            ; 004c0952
    PUSH EBP                            ; 004c0953
    MOV ESI,dword ptr [ESP + 0x14]      ; 004c0954
    PUSH ESI                            ; 004c0958
    CALL core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70 ; 004c0959
        ;   XREF to: 004c1d70 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70()
    MOV EDX,dword ptr [ESI + 0x334]     ; 004c095e
    ADD ESP,0x4                         ; 004c0964
    TEST EDX,EDX                        ; 004c0967
    JNZ 0x004c09be                      ; 004c0969
        ;   XREF to: 004c09be (CONDITIONAL_JUMP)  ; LAB_004c09be
    MOV EBX,dword ptr [ESI + 0x8]       ; 004c096b
    XOR EDI,EDI                         ; 004c096e
    TEST EBX,EBX                        ; 004c0970
    JLE 0x004c0996                      ; 004c0972
        ;   XREF to: 004c0996 (CONDITIONAL_JUMP)  ; LAB_004c0996
    MOV EBX,ESI                         ; 004c0974
    PUSH 0x587191                       ; 004c0976 | = "CWeapon"
        ;   Label: LAB_004c0976
    MOV EBP,dword ptr [EBX + 0xc]       ; 004c097b
    PUSH EBP                            ; 004c097e
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c097f
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c0984
    TEST EAX,EAX                        ; 004c0987
    JZ 0x004c099b                       ; 004c0989
        ;   XREF to: 004c099b (CONDITIONAL_JUMP)  ; LAB_004c099b
    INC EDI                             ; 004c098b
        ;   Label: LAB_004c098b
    MOV ECX,dword ptr [ESI + 0x8]       ; 004c098c
    ADD EBX,0x4                         ; 004c098f
    CMP EDI,ECX                         ; 004c0992
    JL 0x004c0976                       ; 004c0994
        ;   XREF to: 004c0976 (CONDITIONAL_JUMP)  ; LAB_004c0976
    POP EBP                             ; 004c0996
        ;   Label: LAB_004c0996
    POP EDI                             ; 004c0997
    POP ESI                             ; 004c0998
    POP EBX                             ; 004c0999
    RET                                 ; 004c099a
    PUSH 0x587199                       ; 004c099b | = "CAmmo"
        ;   Label: LAB_004c099b
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c09a0
    PUSH EAX                            ; 004c09a3
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c09a4
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c09a9
    TEST EAX,EAX                        ; 004c09ac
    JNZ 0x004c098b                      ; 004c09ae
        ;   XREF to: 004c098b (CONDITIONAL_JUMP)  ; LAB_004c098b
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c09b0
    MOV dword ptr [ESI + 0x334],EAX     ; 004c09b3
    POP EBP                             ; 004c09b9
    POP EDI                             ; 004c09ba
    POP ESI                             ; 004c09bb
    POP EBX                             ; 004c09bc
    RET                                 ; 004c09bd
    MOV ECX,dword ptr [ESI + 0x8]       ; 004c09be
        ;   Label: LAB_004c09be
    XOR EDI,EDI                         ; 004c09c1
    TEST ECX,ECX                        ; 004c09c3
    JLE 0x004c09d4                      ; 004c09c5
        ;   XREF to: 004c09d4 (CONDITIONAL_JUMP)  ; LAB_004c09d4
    MOV EBX,ESI                         ; 004c09c7
    MOV EDX,dword ptr [ESI + 0x334]     ; 004c09c9
        ;   Label: LAB_004c09c9
    CMP EDX,dword ptr [EBX + 0xc]       ; 004c09cf
    JNZ 0x004c0a0c                      ; 004c09d2
        ;   XREF to: 004c0a0c (CONDITIONAL_JUMP)  ; LAB_004c0a0c
    MOV EBX,EDI                         ; 004c09d4
        ;   Label: LAB_004c09d4
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c09d6
        ;   Label: LAB_004c09d6
    MOV EBP,dword ptr [ESI + 0x8]       ; 004c09da
    ADD EBX,ECX                         ; 004c09dd
    CMP EBX,EBP                         ; 004c09df
    JL 0x004c0a19                       ; 004c09e1
        ;   XREF to: 004c0a19 (CONDITIONAL_JUMP)  ; LAB_004c0a19
    XOR EBX,EBX                         ; 004c09e3
    LEA EBP,[EBX*0x4 + 0x0]             ; 004c09e5
        ;   Label: LAB_004c09e5
    ADD EBP,ESI                         ; 004c09ec
    PUSH 0x58719f                       ; 004c09ee | = "CWeapon"
    MOV EAX,dword ptr [EBP + 0xc]       ; 004c09f3
    PUSH EAX                            ; 004c09f6
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c09f7
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c09fc
    TEST EAX,EAX                        ; 004c09ff
    JZ 0x004c0a22                       ; 004c0a01
        ;   XREF to: 004c0a22 (CONDITIONAL_JUMP)  ; LAB_004c0a22
    CMP EBX,EDI                         ; 004c0a03
        ;   Label: LAB_004c0a03
    JNZ 0x004c09d6                      ; 004c0a05
        ;   XREF to: 004c09d6 (CONDITIONAL_JUMP)  ; LAB_004c09d6
    POP EBP                             ; 004c0a07
    POP EDI                             ; 004c0a08
    POP ESI                             ; 004c0a09
    POP EBX                             ; 004c0a0a
    RET                                 ; 004c0a0b
    INC EDI                             ; 004c0a0c
        ;   Label: LAB_004c0a0c
    MOV EBP,dword ptr [ESI + 0x8]       ; 004c0a0d
    ADD EBX,0x4                         ; 004c0a10
    CMP EDI,EBP                         ; 004c0a13
    JL 0x004c09c9                       ; 004c0a15
        ;   XREF to: 004c09c9 (CONDITIONAL_JUMP)  ; LAB_004c09c9
    JMP 0x004c09d4                      ; 004c0a17
        ;   XREF to: 004c09d4 (UNCONDITIONAL_JUMP)  ; LAB_004c09d4
    TEST EBX,EBX                        ; 004c0a19
        ;   Label: LAB_004c0a19
    JGE 0x004c09e5                      ; 004c0a1b
        ;   XREF to: 004c09e5 (CONDITIONAL_JUMP)  ; LAB_004c09e5
    LEA EBX,[EBP + -0x1]                ; 004c0a1d
    JMP 0x004c09e5                      ; 004c0a20
        ;   XREF to: 004c09e5 (UNCONDITIONAL_JUMP)  ; LAB_004c09e5
    PUSH 0x5871a7                       ; 004c0a22 | = "CAmmo"
        ;   Label: LAB_004c0a22
    MOV EDX,dword ptr [EBP + 0xc]       ; 004c0a27
    PUSH EDX                            ; 004c0a2a
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 004c0a2b
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 004c0a30
    TEST EAX,EAX                        ; 004c0a33
    JNZ 0x004c0a03                      ; 004c0a35
        ;   XREF to: 004c0a03 (CONDITIONAL_JUMP)  ; LAB_004c0a03
    MOV EAX,dword ptr [EBP + 0xc]       ; 004c0a37
    MOV dword ptr [ESI + 0x334],EAX     ; 004c0a3a
    POP EBP                             ; 004c0a40
    POP EDI                             ; 004c0a41
    POP ESI                             ; 004c0a42
    POP EBX                             ; 004c0a43
    RET                                 ; 004c0a44

