; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dc560(float *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d27b0 at 004d2a66
;
; Referenced Globals:
;   TerminatedCString s_s_Inventory_005c63d3
;   TerminatedCString s_s_fileVersion_005c63e5
;   TerminatedCString s_s_d_005c63f7
;   TerminatedCString s_s_itemCount_005c63fd
;   TerminatedCString s_s_d_005c640d
;   TerminatedCString s_s_currentWeapon_005c6413
;   TerminatedCString s_s_d_005c6427
;   TerminatedCString s_s_battery_strength_005c642d
;   TerminatedCString s_s_f_005c6444
;   TerminatedCString s_s_actor_name_list_005c644a
;   TerminatedCString s_s_actor_data_list_005c6460
;   TerminatedCString s_s_End_inventory_005c6476
;   undefined1 DAT_005f0990
;
; Called Functions:
;   FUN_0040afa0
;   FUN_0040aff0
;   FUN_004dc700
;   FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc560
        ;   Label: FUN_004dc560
    PUSH ESI                            ; 004dc561
    PUSH EDI                            ; 004dc562
    PUSH EBP                            ; 004dc563
    SUB ESP,0x8                         ; 004dc564
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004dc567
    MOV EBP,dword ptr [ESP + 0x20]      ; 004dc56b
    MOV EDX,0x5f0990                    ; 004dc56f | DAT_005f0990
    PUSH EDX                            ; 004dc574 | DAT_005f0990
    PUSH 0x5c63d3                       ; 004dc575 | = "%s{ // Inventory\n"
    PUSH EBP                            ; 004dc57a
    MOV dword ptr [ESP + 0x10],EDX      ; 004dc57b | DAT_005f0990
    CALL FUN_005a3140                   ; 004dc57f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0xc                         ; 004dc584
    PUSH 0x1                            ; 004dc587
    CALL FUN_0040afa0                   ; 004dc589
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040afa0()
    ADD ESP,0x4                         ; 004dc58e
    PUSH 0x5f0990                       ; 004dc591 | DAT_005f0990
    PUSH 0x5c63e5                       ; 004dc596 | = "%s// fileVersion\n"
    PUSH EBP                            ; 004dc59b
    MOV dword ptr [EBX + 0x334],0x2     ; 004dc59c
    CALL FUN_005a3140                   ; 004dc5a6
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0xc                         ; 004dc5ab
    MOV ECX,dword ptr [EBX + 0x334]     ; 004dc5ae
    PUSH ECX                            ; 004dc5b4
    PUSH 0x5f0990                       ; 004dc5b5 | DAT_005f0990
    PUSH 0x5c63f7                       ; 004dc5ba | = "%s%d\n"
    PUSH EBP                            ; 004dc5bf
    CALL FUN_005a3140                   ; 004dc5c0
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x10                        ; 004dc5c5
    PUSH 0x5f0990                       ; 004dc5c8 | DAT_005f0990
    PUSH 0x5c63fd                       ; 004dc5cd | = "%s// itemCount\n"
    PUSH EBP                            ; 004dc5d2
    CALL FUN_005a3140                   ; 004dc5d3
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0xc                         ; 004dc5d8
    MOV ESI,dword ptr [EBX + 0x10]      ; 004dc5db
    PUSH ESI                            ; 004dc5de
    PUSH 0x5f0990                       ; 004dc5df | DAT_005f0990
    PUSH 0x5c640d                       ; 004dc5e4 | = "%s%d\n"
    PUSH EBP                            ; 004dc5e9
    MOV EDI,0xffffffff                  ; 004dc5ea
    CALL FUN_005a3140                   ; 004dc5ef
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x10                        ; 004dc5f4
    MOV EDX,dword ptr [EBX + 0x10]      ; 004dc5f7
    XOR EAX,EAX                         ; 004dc5fa
    MOV dword ptr [ESP],EDI             ; 004dc5fc
    TEST EDX,EDX                        ; 004dc5ff
    JLE 0x004dc617                      ; 004dc601
        ;   XREF to: 004dc617 (CONDITIONAL_JUMP)  ; LAB_004dc617
    MOV ESI,EBX                         ; 004dc603
    MOV EDX,dword ptr [EBX + 0x338]     ; 004dc605
        ;   Label: LAB_004dc605
    CMP EDX,dword ptr [ESI + 0x14]      ; 004dc60b
    JNZ 0x004dc6e5                      ; 004dc60e
        ;   XREF to: 004dc6e5 (CONDITIONAL_JUMP)  ; LAB_004dc6e5
    MOV dword ptr [ESP],EAX             ; 004dc614
    MOV ECX,dword ptr [ESP + 0x4]       ; 004dc617
        ;   Label: LAB_004dc617
    PUSH ECX                            ; 004dc61b | DAT_005f0990
    PUSH 0x5c6413                       ; 004dc61c | = "%s// currentWeapon\n"
    PUSH EBP                            ; 004dc621
    CALL FUN_005a3140                   ; 004dc622
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0xc                         ; 004dc627
    MOV ESI,dword ptr [ESP]             ; 004dc62a
    PUSH ESI                            ; 004dc62d
    MOV EDI,dword ptr [ESP + 0x8]       ; 004dc62e
    PUSH EDI                            ; 004dc632 | DAT_005f0990
    PUSH 0x5c6427                       ; 004dc633 | = "%s%d\n"
    PUSH EBP                            ; 004dc638
    CALL FUN_005a3140                   ; 004dc639
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x10                        ; 004dc63e
    PUSH EDI                            ; 004dc641 | DAT_005f0990
    PUSH 0x5c642d                       ; 004dc642 | = "%s// battery strength\n"
    PUSH EBP                            ; 004dc647
    CALL FUN_005a3140                   ; 004dc648
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0xc                         ; 004dc64d
    SUB ESP,0x8                         ; 004dc650
    FLD float ptr [EBX]                 ; 004dc653
    FSTP double ptr [ESP]               ; 004dc655
    PUSH EDI                            ; 004dc658 | DAT_005f0990
    PUSH 0x5c6444                       ; 004dc659 | = "%s%f\n"
    PUSH EBP                            ; 004dc65e
    CALL FUN_005a3140                   ; 004dc65f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x14                        ; 004dc664
    PUSH EDI                            ; 004dc667 | DAT_005f0990
    PUSH 0x5c644a                       ; 004dc668 | = "%s// actor name list\n"
    PUSH EBP                            ; 004dc66d
    CALL FUN_005a3140                   ; 004dc66e
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0xc                         ; 004dc673
    PUSH EBP                            ; 004dc676
    PUSH EBX                            ; 004dc677
    CALL FUN_004dc700                   ; 004dc678
        ;   XREF to: 004dc700 (UNCONDITIONAL_CALL)  ; undefined FUN_004dc700()
    ADD ESP,0x8                         ; 004dc67d
    PUSH EDI                            ; 004dc680 | DAT_005f0990
    PUSH 0x5c6460                       ; 004dc681 | = "%s// actor data list\n"
    PUSH EBP                            ; 004dc686
    XOR EDI,EDI                         ; 004dc687
    CALL FUN_005a3140                   ; 004dc689
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    MOV EAX,dword ptr [EBX + 0x10]      ; 004dc68e
    ADD ESP,0xc                         ; 004dc691
    TEST EAX,EAX                        ; 004dc694
    JLE 0x004dc6c0                      ; 004dc696
        ;   XREF to: 004dc6c0 (CONDITIONAL_JUMP)  ; LAB_004dc6c0
    MOV ESI,EBX                         ; 004dc698
    PUSH EBP                            ; 004dc69a
        ;   Label: LAB_004dc69a
    MOV EDX,dword ptr [ESI + 0x14]      ; 004dc69b
    PUSH EDX                            ; 004dc69e
    ADD ESI,0x4                         ; 004dc69f
    INC EDI                             ; 004dc6a2
    CALL FUN_0040aff0                   ; 004dc6a3
        ;   XREF to: 0040aff0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040aff0()
    MOV ECX,dword ptr [EBX + 0x10]      ; 004dc6a8
    ADD ESP,0x8                         ; 004dc6ab
    CMP EDI,ECX                         ; 004dc6ae
    JL 0x004dc69a                       ; 004dc6b0
        ;   XREF to: 004dc69a (CONDITIONAL_JUMP)  ; LAB_004dc69a
    LEA EAX,[EAX]                       ; 004dc6b2
    LEA EDX,[EDX]                       ; 004dc6b8
    MOV EAX,EAX                         ; 004dc6be
    PUSH -0x1                           ; 004dc6c0
        ;   Label: LAB_004dc6c0
    CALL FUN_0040afa0                   ; 004dc6c2
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040afa0()
    ADD ESP,0x4                         ; 004dc6c7
    MOV EBX,dword ptr [ESP + 0x4]       ; 004dc6ca
    PUSH EBX                            ; 004dc6ce | DAT_005f0990
    PUSH 0x5c6476                       ; 004dc6cf | = "%s} // End inventory\n"
    PUSH EBP                            ; 004dc6d4
    CALL FUN_005a3140                   ; 004dc6d5
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0xc                         ; 004dc6da
    ADD ESP,0x8                         ; 004dc6dd
    POP EBP                             ; 004dc6e0
    POP EDI                             ; 004dc6e1
    POP ESI                             ; 004dc6e2
    POP EBX                             ; 004dc6e3
    RET                                 ; 004dc6e4
    INC EAX                             ; 004dc6e5
        ;   Label: LAB_004dc6e5
    MOV ECX,dword ptr [EBX + 0x10]      ; 004dc6e6
    ADD ESI,0x4                         ; 004dc6e9
    CMP EAX,ECX                         ; 004dc6ec
    JL 0x004dc605                       ; 004dc6ee
        ;   XREF to: 004dc605 (CONDITIONAL_JUMP)  ; LAB_004dc605
    JMP 0x004dc617                      ; 004dc6f4
        ;   XREF to: 004dc617 (UNCONDITIONAL_JUMP)  ; LAB_004dc617

