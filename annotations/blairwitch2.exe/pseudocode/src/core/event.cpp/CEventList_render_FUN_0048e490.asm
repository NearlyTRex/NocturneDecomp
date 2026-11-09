; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_render_FUN_0048e490(CEventList *this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x3b4]:8  local_3b4
; undefined        Stack[-0x3a8]:1  local_3a8
; undefined        Stack[-0x2e0]:1  local_2e0
; undefined        Stack[-0x218]:1  local_218
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0x88]:1  local_88
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b5190 at 004b5acc
;
; Referenced Globals:
;   TerminatedCString s_Game_Flag_s_005d43a6
;   TerminatedCString s_Persistent_s_005d43b4
;   TerminatedCString s_Timer_5_2f_s_005d43c3
;   TerminatedCString s_s_d_005d43d3
;   TerminatedCString s_s_s_005d43d9
;   TerminatedCString s_s_s_1f_005d43df
;
; Called Functions:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90
;   crt_unknown.c_FUN_005b7790
;   engine_2d.c_drawText_FUN_00401fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e490
        ;   Label: core_event.cpp_CEventList_render_FUN_0048e490
    PUSH ESI                            ; 0048e491
    PUSH EDI                            ; 0048e492
    PUSH EBP                            ; 0048e493
    SUB ESP,0x398                       ; 0048e494
    MOV ESI,dword ptr [ESP + 0x3ac]     ; 0048e49a
    MOV EBX,0x2c                        ; 0048e4a1
    MOV EDX,dword ptr [ESI + 0x1908]    ; 0048e4a6
    XOR EDI,EDI                         ; 0048e4ac
    TEST EDX,EDX                        ; 0048e4ae
    JLE 0x0048e500                      ; 0048e4b0
        ;   XREF to: 0048e500 (CONDITIONAL_JUMP)  ; LAB_0048e500
    LEA EBP,[ESI + 0x190c]              ; 0048e4b2
    PUSH EBP                            ; 0048e4b8
        ;   Label: LAB_0048e4b8
    PUSH 0x5d43a6                       ; 0048e4b9 | = "Game Flag: %s"
    LEA EAX,[ESP + 0x198]               ; 0048e4be
    PUSH EAX                            ; 0048e4c5
    CALL crt_unknown.c_FUN_005b7790     ; 0048e4c6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0048e4cb
    PUSH EBX                            ; 0048e4ce
    PUSH 0x0                            ; 0048e4cf
    LEA EAX,[ESP + 0x198]               ; 0048e4d1
    INC EDI                             ; 0048e4d8
    PUSH EAX                            ; 0048e4d9
    ADD EBP,0x20                        ; 0048e4da
    ADD EBX,0xb                         ; 0048e4dd
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0048e4e0
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV ECX,dword ptr [ESI + 0x1908]    ; 0048e4e5
    ADD ESP,0xc                         ; 0048e4eb
    CMP EDI,ECX                         ; 0048e4ee
    JL 0x0048e4b8                       ; 0048e4f0
        ;   XREF to: 0048e4b8 (CONDITIONAL_JUMP)  ; LAB_0048e4b8
    LEA EAX,[EAX]                       ; 0048e4f2
    LEA EDX,[EDX]                       ; 0048e4f8
    MOV EAX,EAX                         ; 0048e4fe
    MOV EDI,dword ptr [ESI + 0x258c]    ; 0048e500
        ;   Label: LAB_0048e500
    XOR EBP,EBP                         ; 0048e506
    TEST EDI,EDI                        ; 0048e508
    JLE 0x0048e550                      ; 0048e50a
        ;   XREF to: 0048e550 (CONDITIONAL_JUMP)  ; LAB_0048e550
    LEA EDI,[ESI + 0x2590]              ; 0048e50c
    PUSH EDI                            ; 0048e512
        ;   Label: LAB_0048e512
    PUSH 0x5d43b4                       ; 0048e513 | = "Persistent: %s"
    LEA EAX,[ESP + 0x8]                 ; 0048e518
    PUSH EAX                            ; 0048e51c
    CALL crt_unknown.c_FUN_005b7790     ; 0048e51d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0048e522
    PUSH EBX                            ; 0048e525
    PUSH 0x0                            ; 0048e526
    LEA EAX,[ESP + 0x8]                 ; 0048e528
    INC EBP                             ; 0048e52c
    PUSH EAX                            ; 0048e52d
    ADD EDI,0x20                        ; 0048e52e
    ADD EBX,0xb                         ; 0048e531
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0048e534
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    MOV EAX,dword ptr [ESI + 0x258c]    ; 0048e539
    ADD ESP,0xc                         ; 0048e53f
    CMP EBP,EAX                         ; 0048e542
    JL 0x0048e512                       ; 0048e544
        ;   XREF to: 0048e512 (CONDITIONAL_JUMP)  ; LAB_0048e512
    LEA EAX,[EAX]                       ; 0048e546
    LEA EDX,[EDX]                       ; 0048e54c
    MOV EDX,dword ptr [ESI + 0x3210]    ; 0048e550
        ;   Label: LAB_0048e550
    XOR EDI,EDI                         ; 0048e556
    TEST EDX,EDX                        ; 0048e558
    JLE 0x0048e5d0                      ; 0048e55a
        ;   XREF to: 0048e5d0 (CONDITIONAL_JUMP)  ; LAB_0048e5d0
    LEA EBP,[ESI + 0x3214]              ; 0048e560
    MOV dword ptr [ESP + 0x384],ESI     ; 0048e566
    PUSH EBP                            ; 0048e56d
        ;   Label: LAB_0048e56d
    MOV EAX,dword ptr [ESP + 0x388]     ; 0048e56e
    SUB ESP,0x8                         ; 0048e575
    FLD float ptr [EAX + 0x3354]        ; 0048e578
    FSTP double ptr [ESP]               ; 0048e57e
    PUSH 0x5d43c3                       ; 0048e581 | = "Timer: %5.2f %s"
    LEA EAX,[ESP + 0xd8]                ; 0048e586
    PUSH EAX                            ; 0048e58d
    CALL crt_unknown.c_FUN_005b7790     ; 0048e58e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x14                        ; 0048e593
    PUSH EBX                            ; 0048e596
    PUSH 0x0                            ; 0048e597
    LEA EAX,[ESP + 0xd0]                ; 0048e599
    PUSH EAX                            ; 0048e5a0
    INC EDI                             ; 0048e5a1
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0048e5a2
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0048e5a7
    ADD EBP,0x20                        ; 0048e5aa
    MOV ECX,dword ptr [ESP + 0x384]     ; 0048e5ad
    ADD EBX,0xb                         ; 0048e5b4
    ADD ECX,0x4                         ; 0048e5b7
    MOV EAX,dword ptr [ESI + 0x3210]    ; 0048e5ba
    MOV dword ptr [ESP + 0x384],ECX     ; 0048e5c0
    CMP EDI,EAX                         ; 0048e5c7
    JL 0x0048e56d                       ; 0048e5c9
        ;   XREF to: 0048e56d (CONDITIONAL_JUMP)  ; LAB_0048e56d
    LEA EAX,[EAX]                       ; 0048e5cb
    MOV ECX,ECX                         ; 0048e5ce
    MOV EDX,dword ptr [ESI + 0xc84]     ; 0048e5d0
        ;   Label: LAB_0048e5d0
    XOR EBP,EBP                         ; 0048e5d6
    TEST EDX,EDX                        ; 0048e5d8
    JLE 0x0048e600                      ; 0048e5da
        ;   XREF to: 0048e600 (CONDITIONAL_JUMP)  ; LAB_0048e600
    LEA EDI,[ESI + 0xc88]               ; 0048e5dc
    PUSH EBX                            ; 0048e5e2
        ;   Label: LAB_0048e5e2
    PUSH 0x0                            ; 0048e5e3
    PUSH EDI                            ; 0048e5e5
    INC EBP                             ; 0048e5e6
    ADD EBX,0xb                         ; 0048e5e7
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0048e5ea
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0048e5ef
    MOV ECX,dword ptr [ESI + 0xc84]     ; 0048e5f2
    ADD EDI,0x20                        ; 0048e5f8
    CMP EBP,ECX                         ; 0048e5fb
    JL 0x0048e5e2                       ; 0048e5fd
        ;   XREF to: 0048e5e2 (CONDITIONAL_JUMP)  ; LAB_0048e5e2
    NOP                                 ; 0048e5ff
    MOV EDI,dword ptr [ESI + 0x337c]    ; 0048e600
        ;   Label: LAB_0048e600
    XOR EBP,EBP                         ; 0048e606
    TEST EDI,EDI                        ; 0048e608
    JLE 0x0048e680                      ; 0048e60a
        ;   XREF to: 0048e680 (CONDITIONAL_JUMP)  ; LAB_0048e680
    LEA EAX,[ESI + 0x3380]              ; 0048e60c
    MOV dword ptr [ESP + 0x38c],EAX     ; 0048e612
    MOV EDI,ESI                         ; 0048e619
    MOV EAX,dword ptr [EDI + 0x34c0]    ; 0048e61b
        ;   Label: LAB_0048e61b
    PUSH EAX                            ; 0048e621
    MOV EDX,dword ptr [ESP + 0x390]     ; 0048e622
    PUSH EDX                            ; 0048e629
    PUSH 0x5d43d3                       ; 0048e62a | = "%s=%d"
    LEA EAX,[ESP + 0x32c]               ; 0048e62f
    PUSH EAX                            ; 0048e636
    CALL crt_unknown.c_FUN_005b7790     ; 0048e637
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 0048e63c
    PUSH EBX                            ; 0048e63f
    PUSH 0x0                            ; 0048e640
    LEA EAX,[ESP + 0x328]               ; 0048e642
    PUSH EAX                            ; 0048e649
    ADD EDI,0x4                         ; 0048e64a
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0048e64d
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0048e652
    INC EBP                             ; 0048e655
    MOV ECX,dword ptr [ESP + 0x38c]     ; 0048e656
    ADD EBX,0xb                         ; 0048e65d
    ADD ECX,0x20                        ; 0048e660
    MOV EAX,dword ptr [ESI + 0x337c]    ; 0048e663
    MOV dword ptr [ESP + 0x38c],ECX     ; 0048e669
    CMP EBP,EAX                         ; 0048e670
    JL 0x0048e61b                       ; 0048e672
        ;   XREF to: 0048e61b (CONDITIONAL_JUMP)  ; LAB_0048e61b
    LEA EAX,[EAX]                       ; 0048e674
    LEA EDX,[EDX]                       ; 0048e67a
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 0048e680
        ;   Label: LAB_0048e680
    XOR EBP,EBP                         ; 0048e686
    TEST EDX,EDX                        ; 0048e688
    JLE 0x0048e700                      ; 0048e68a
        ;   XREF to: 0048e700 (CONDITIONAL_JUMP)  ; LAB_0048e700
    LEA EDI,[ESI + 0x37da]              ; 0048e68c
    LEA EAX,[ESI + 0x34ec]              ; 0048e692
    MOV dword ptr [ESP + 0x390],EAX     ; 0048e698
    PUSH EDI                            ; 0048e69f
        ;   Label: LAB_0048e69f
    MOV ECX,dword ptr [ESP + 0x394]     ; 0048e6a0
    PUSH ECX                            ; 0048e6a7
    PUSH 0x5d43d9                       ; 0048e6a8 | = "%s=%s"
    LEA EAX,[ESP + 0x2c8]               ; 0048e6ad
    PUSH EAX                            ; 0048e6b4
    CALL crt_unknown.c_FUN_005b7790     ; 0048e6b5
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 0048e6ba
    PUSH EBX                            ; 0048e6bd
    PUSH 0x0                            ; 0048e6be
    LEA EAX,[ESP + 0x2c4]               ; 0048e6c0
    PUSH EAX                            ; 0048e6c7
    INC EBP                             ; 0048e6c8
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0048e6c9
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0048e6ce
    ADD EDI,0x1e                        ; 0048e6d1
    MOV EAX,dword ptr [ESP + 0x390]     ; 0048e6d4
    ADD EBX,0xb                         ; 0048e6db
    ADD EAX,0x1e                        ; 0048e6de
    MOV EDX,dword ptr [ESI + 0x34e8]    ; 0048e6e1
    MOV dword ptr [ESP + 0x390],EAX     ; 0048e6e7
    CMP EBP,EDX                         ; 0048e6ee
    JL 0x0048e69f                       ; 0048e6f0
        ;   XREF to: 0048e69f (CONDITIONAL_JUMP)  ; LAB_0048e69f
    LEA EAX,[EAX]                       ; 0048e6f2
    LEA EDX,[EDX]                       ; 0048e6f8
    MOV EAX,EAX                         ; 0048e6fe
    PUSH ESI                            ; 0048e700
        ;   Label: LAB_0048e700
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90 ; 0048e701
        ;   XREF to: 00491a90 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_00491a90(CEventList * this_ptr)
    ADD ESP,0x4                         ; 0048e706
    XOR ECX,ECX                         ; 0048e709
    MOV EDI,dword ptr [ESI + 0x3ac8]    ; 0048e70b
    MOV dword ptr [ESP + 0x394],ECX     ; 0048e711
    TEST EDI,EDI                        ; 0048e718
    JLE 0x0048e7b0                      ; 0048e71a
        ;   XREF to: 0048e7b0 (CONDITIONAL_JUMP)  ; LAB_0048e7b0
    LEA EAX,[ESI + 0x3ad0]              ; 0048e720
    LEA EBP,[ESI + 0x3ae4]              ; 0048e726
    MOV dword ptr [ESP + 0x388],EAX     ; 0048e72c
    MOV EDI,ESI                         ; 0048e733
    MOV EAX,dword ptr [EDI + 0x3be8]    ; 0048e735
        ;   Label: LAB_0048e735
    PUSH EAX                            ; 0048e73b
    MOV EDX,dword ptr [EDI + 0x3be4]    ; 0048e73c
    PUSH EDX                            ; 0048e742
    PUSH EBP                            ; 0048e743
    MOV ECX,dword ptr [ESP + 0x394]     ; 0048e744
    PUSH ECX                            ; 0048e74b
    PUSH 0x5d43df                       ; 0048e74c | = "%s=%s %.1f"
    LEA EAX,[ESP + 0x26c]               ; 0048e751
    PUSH EAX                            ; 0048e758
    CALL crt_unknown.c_FUN_005b7790     ; 0048e759
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x18                        ; 0048e75e
    PUSH EBX                            ; 0048e761
    PUSH 0x0                            ; 0048e762
    LEA EAX,[ESP + 0x260]               ; 0048e764
    ADD EDI,0x120                       ; 0048e76b
    PUSH EAX                            ; 0048e771
    ADD EBP,0x120                       ; 0048e772
    ADD EBX,0xb                         ; 0048e778
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 0048e77b
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0048e780
    MOV ECX,dword ptr [ESI + 0x3ac8]    ; 0048e783
    MOV EAX,dword ptr [ESP + 0x388]     ; 0048e789
    MOV EDX,dword ptr [ESP + 0x394]     ; 0048e790
    ADD EAX,0x120                       ; 0048e797
    INC EDX                             ; 0048e79c
    MOV dword ptr [ESP + 0x388],EAX     ; 0048e79d
    MOV dword ptr [ESP + 0x394],EDX     ; 0048e7a4
    CMP EDX,ECX                         ; 0048e7ab
    JL 0x0048e735                       ; 0048e7ad
        ;   XREF to: 0048e735 (CONDITIONAL_JUMP)  ; LAB_0048e735
    NOP                                 ; 0048e7af
    ADD ESP,0x398                       ; 0048e7b0
        ;   Label: LAB_0048e7b0
    POP EBP                             ; 0048e7b6
    POP EDI                             ; 0048e7b7
    POP ESI                             ; 0048e7b8
    POP EBX                             ; 0048e7b9
    RET                                 ; 0048e7ba

