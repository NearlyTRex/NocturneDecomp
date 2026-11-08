; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050e6c0(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0050c280 at 0050cad0
;   FUN_0050e020 at 0050e213
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005e0d24
;   TerminatedCString s_CNetGame_removePlayer_in_005e0d38
;   TerminatedCString s_core_netgame_cpp_005e0d66
;   TerminatedCString s_CNetGame_removePlayer_tr_005e0d7a
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d51050
;
; Called Functions:
;   FUN_004e4500
;   FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050e6c0
        ;   Label: FUN_0050e6c0
    PUSH ESI                            ; 0050e6c1
    PUSH EDI                            ; 0050e6c2
    PUSH EBP                            ; 0050e6c3
    SUB ESP,0x4                         ; 0050e6c4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050e6c7
    TEST EDX,EDX                        ; 0050e6cb
    JL 0x0050e6d8                       ; 0050e6cd
        ;   XREF to: 0050e6d8 (CONDITIONAL_JUMP)  ; LAB_0050e6d8
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050e6cf
    CMP EDX,dword ptr [EBX + 0x1c]      ; 0050e6d3
    JL 0x0050e6fb                       ; 0050e6d6
        ;   XREF to: 0050e6fb (CONDITIONAL_JUMP)  ; LAB_0050e6fb
    MOV EBX,0x5e0d24                    ; 0050e6d8 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_0050e6d8
    MOV ESI,0x862                       ; 0050e6dd
    PUSH 0x5e0d38                       ; 0050e6e2 | = "CNetGame::removePlayer - invalid play..."
    MOV dword ptr [0x01d046a0],EBX      ; 0050e6e7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0050e6ed | DAT_01d046a4
    CALL FUN_004e4500                   ; 0050e6f3
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0050e6f8
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050e6fb
        ;   Label: LAB_0050e6fb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050e6ff
    CMP EAX,dword ptr [EBX + 0x124]     ; 0050e703
    JNZ 0x0050e72d                      ; 0050e709
        ;   XREF to: 0050e72d (CONDITIONAL_JUMP)  ; LAB_0050e72d
    MOV EBP,0x5e0d66                    ; 0050e70b | = "..\\core\\netgame.cpp"
    MOV EAX,0x869                       ; 0050e710
    PUSH 0x5e0d7a                       ; 0050e715 | = "CNetGame::removePlayer - tried to rem..."
    MOV dword ptr [0x01d046a0],EBP      ; 0050e71a | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0050e720 | DAT_01d046a4
    CALL FUN_004e4500                   ; 0050e725
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0050e72a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050e72d
        ;   Label: LAB_0050e72d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050e731
    CMP EAX,dword ptr [EBX + 0x120]     ; 0050e735
    JNZ 0x0050e747                      ; 0050e73b
        ;   XREF to: 0050e747 (CONDITIONAL_JUMP)  ; LAB_0050e747
    MOV dword ptr [EBX + 0x120],0xffffffff ; 0050e73d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050e747
        ;   Label: LAB_0050e747
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050e74b
    CMP EAX,dword ptr [EBX + 0x124]     ; 0050e74f
    JNZ 0x0050e761                      ; 0050e755
        ;   XREF to: 0050e761 (CONDITIONAL_JUMP)  ; LAB_0050e761
    MOV dword ptr [EBX + 0x124],0xffffffff ; 0050e757
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050e761
        ;   Label: LAB_0050e761
    MOV EBX,dword ptr [EAX + 0x1c]      ; 0050e765
    DEC EBX                             ; 0050e768
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050e769
    MOV dword ptr [EAX + 0x1c],EBX      ; 0050e76d
    MOV EAX,EBX                         ; 0050e770
    SUB EAX,ESI                         ; 0050e772
    SHL EAX,0x7                         ; 0050e774
    PUSH EAX                            ; 0050e777
    MOV EAX,ESI                         ; 0050e778
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050e77a
    SHL EAX,0x7                         ; 0050e77e
    ADD EBX,0x20                        ; 0050e781
    LEA ESI,[EAX + 0x80]                ; 0050e784
    ADD ESI,EBX                         ; 0050e78a
    PUSH ESI                            ; 0050e78c
    ADD EAX,EBX                         ; 0050e78d
    PUSH EAX                            ; 0050e78f
    XOR EDI,EDI                         ; 0050e790
    CALL FUN_005ba1f0                   ; 0050e792
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    MOV EBP,dword ptr [0x01d51050]      ; 0050e797 | DAT_01d51050
    ADD ESP,0xc                         ; 0050e79d
    TEST EBP,EBP                        ; 0050e7a0
    JLE 0x0050e840                      ; 0050e7a2
        ;   XREF to: 0050e840 (CONDITIONAL_JUMP)  ; LAB_0050e840
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0050e7a8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0050e7ac
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050e7b0
    SHL EBP,0x2                         ; 0050e7b4
    ADD ESI,0x8                         ; 0050e7b7
    ADD EBX,0x9                         ; 0050e7ba
    LEA EAX,[EBP + 0xc]                 ; 0050e7bd
    ADD ESI,0x1d51054                   ; 0050e7c0
    ADD EBX,0x1d51054                   ; 0050e7c6
    ADD EAX,0x1d51054                   ; 0050e7cc
    ADD EBP,0x10                        ; 0050e7d1
    MOV dword ptr [ESP],EAX             ; 0050e7d4
    ADD EBP,0x1d51054                   ; 0050e7d7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050e7dd
        ;   Label: LAB_0050e7dd
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0050e7e1
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0050e7e5
    SUB EAX,EDX                         ; 0050e7e8
    PUSH EAX                            ; 0050e7ea
    PUSH EBX                            ; 0050e7eb
    PUSH ESI                            ; 0050e7ec
    CALL FUN_005ba1f0                   ; 0050e7ed
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 0050e7f2
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050e7f5
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0050e7f9
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0050e7fd
    SUB EAX,ECX                         ; 0050e800
    SHL EAX,0x2                         ; 0050e802
    PUSH EAX                            ; 0050e805
    PUSH EBP                            ; 0050e806
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050e807
    PUSH EAX                            ; 0050e80b
    INC EDI                             ; 0050e80c
    ADD EBX,0x114                       ; 0050e80d
    CALL FUN_005ba1f0                   ; 0050e813
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1f0()
    ADD ESP,0xc                         ; 0050e818
    ADD ESI,0x114                       ; 0050e81b
    MOV EDX,dword ptr [ESP]             ; 0050e821
    ADD EBP,0x114                       ; 0050e824
    ADD EDX,0x114                       ; 0050e82a
    MOV ECX,dword ptr [0x01d51050]      ; 0050e830 | DAT_01d51050
    MOV dword ptr [ESP],EDX             ; 0050e836
    CMP EDI,ECX                         ; 0050e839
    JL 0x0050e7dd                       ; 0050e83b
        ;   XREF to: 0050e7dd (CONDITIONAL_JUMP)  ; LAB_0050e7dd
    LEA EAX,[EAX]                       ; 0050e83d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050e840
        ;   Label: LAB_0050e840
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050e844
    MOV ESI,dword ptr [EBX + 0x120]     ; 0050e848
    CMP EAX,ESI                         ; 0050e84e
    JGE 0x0050e85b                      ; 0050e850
        ;   XREF to: 0050e85b (CONDITIONAL_JUMP)  ; LAB_0050e85b
    LEA EDI,[ESI + -0x1]                ; 0050e852
    MOV dword ptr [EBX + 0x120],EDI     ; 0050e855
    MOV EBX,dword ptr [ESP + 0x18]      ; 0050e85b
        ;   Label: LAB_0050e85b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050e85f
    MOV EBP,dword ptr [EBX + 0x124]     ; 0050e863
    CMP EAX,EBP                         ; 0050e869
    JL 0x0050e875                       ; 0050e86b
        ;   XREF to: 0050e875 (CONDITIONAL_JUMP)  ; LAB_0050e875
    ADD ESP,0x4                         ; 0050e86d
    POP EBP                             ; 0050e870
    POP EDI                             ; 0050e871
    POP ESI                             ; 0050e872
    POP EBX                             ; 0050e873
    RET                                 ; 0050e874
    LEA EDX,[EBP + -0x1]                ; 0050e875
        ;   Label: LAB_0050e875
    MOV dword ptr [EBX + 0x124],EDX     ; 0050e878
    ADD ESP,0x4                         ; 0050e87e
    POP EBP                             ; 0050e881
    POP EDI                             ; 0050e882
    POP ESI                             ; 0050e883
    POP EBX                             ; 0050e884
    RET                                 ; 0050e885

