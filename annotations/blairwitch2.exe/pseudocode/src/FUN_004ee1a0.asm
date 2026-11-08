; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ee1a0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[2]:
;   FUN_004b6170 at 004b6b21
;   FUN_004ee3f0 at 004ee8a8
;
; Referenced Globals:
;   void* switchdataD_004ee184 = 004ee312
;   undefined4 s_Graphic_options_005dd22c+1
;   TerminatedCString s_Sound_options_005dd23d
;   TerminatedCString s_Control_options_005dd24b
;   TerminatedCString s_Credits_005dd25b
;   TerminatedCString s_Option_Menu_005dd263
;   undefined4 DAT_00616494
;   undefined4 DAT_00617dd4
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_0061c068
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb69d0
;   undefined4 DAT_01cb69d4
;   undefined4 DAT_01cb6b84
;   undefined4 DAT_01d02f84
;   ... and 2 more
;
; Called Functions:
;   FUN_004b3000
;   FUN_004b3010
;   FUN_004be430
;   FUN_004d94d0
;   FUN_004eb0e0
;   FUN_004ebf10
;   FUN_004ecc70
;   FUN_004ed260
;   FUN_004eed60
;   FUN_005023e0
;   FUN_00502450
;   FUN_005024a0
;   FUN_00502510
;   FUN_0050fe80
;   FUN_005344c0
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee1a0
        ;   Label: FUN_004ee1a0
    PUSH EDI                            ; 004ee1a1
    PUSH EBP                            ; 004ee1a2
    SUB ESP,0x4                         ; 004ee1a3
    XOR EDX,EDX                         ; 004ee1a6
    MOV ECX,dword ptr [ESP + 0x14]      ; 004ee1a8
    MOV dword ptr [ESP],EDX             ; 004ee1ac
    TEST ECX,ECX                        ; 004ee1af
    JNZ 0x004ee346                      ; 004ee1b1
        ;   XREF to: 004ee346 (CONDITIONAL_JUMP)  ; LAB_004ee346
    PUSH ESI                            ; 004ee1b7
        ;   Label: LAB_004ee1b7
    MOV ESI,dword ptr [0x00616494]      ; 004ee1b8 | DAT_00616494
    PUSH ESI                            ; 004ee1be | DAT_01cb6900
    MOV EBX,0x1d07ed0                   ; 004ee1bf
    CALL FUN_004b3000                   ; 004ee1c4
        ;   XREF to: 004b3000 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3000()
    ADD ESP,0x4                         ; 004ee1c9
    XOR EAX,EAX                         ; 004ee1cc
    POP ESI                             ; 004ee1ce
    MOV dword ptr [EAX + 0x1d082d0],EBX ; 004ee1cf
        ;   Label: LAB_004ee1cf
    ADD EAX,0x4                         ; 004ee1d5
    ADD EBX,0x100                       ; 004ee1d8
    CMP EAX,0x10                        ; 004ee1de
    JNZ 0x004ee1cf                      ; 004ee1e1
        ;   XREF to: 004ee1cf (CONDITIONAL_JUMP)  ; LAB_004ee1cf
    MOV EDI,dword ptr [0x00616494]      ; 004ee1e3 | DAT_00616494
        ;   Label: LAB_004ee1e3
    PUSH EDI                            ; 004ee1e9 | DAT_01cb6900
    CALL FUN_004b3010                   ; 004ee1ea
        ;   XREF to: 004b3010 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3010()
    ADD ESP,0x4                         ; 004ee1ef
    PUSH 0x10000                        ; 004ee1f2
    PUSH 0xc350                         ; 004ee1f7
    PUSH 0xc350                         ; 004ee1fc
    MOV EAX,[0x0061b5a8]                ; 004ee201 | DAT_0061b5a8
    PUSH EAX                            ; 004ee206
    MOV dword ptr [EAX + 0x15ae84],0x1  ; 004ee207 | DAT_01fc103c
    CALL FUN_005344c0                   ; 004ee211
        ;   XREF to: 005344c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005344c0()
    MOV EAX,[0x0061b5a8]                ; 004ee216 | DAT_0061b5a8
    MOV dword ptr [EAX + 0x15ae94],0xdac ; 004ee21b | DAT_01fc104c
    MOV EAX,[0x00616494]                ; 004ee225 | DAT_00616494
    ADD ESP,0x10                        ; 004ee22a
    MOV EAX,dword ptr [EAX + 0x284]     ; 004ee22d | DAT_01cb6b84
    PUSH EAX                            ; 004ee233
    PUSH 0x1d05620                      ; 004ee234
    CALL FUN_005024a0                   ; 004ee239
        ;   XREF to: 005024a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005024a0()
    ADD ESP,0x8                         ; 004ee23e
    PUSH 0x1d05620                      ; 004ee241
    CALL FUN_00502510                   ; 004ee246
        ;   XREF to: 00502510 (UNCONDITIONAL_CALL)  ; undefined FUN_00502510()
    ADD ESP,0x4                         ; 004ee24b
    MOV EAX,[0x0061b5a8]                ; 004ee24e | DAT_0061b5a8
    PUSH 0x5dd22d                       ; 004ee253 | s_Graphic_options_005dd22c+1
    MOV dword ptr [EAX + 0x15ae84],0x0  ; 004ee258 | DAT_01fc103c
    CALL FUN_0050fe80                   ; 004ee262
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ee267
    PUSH EAX                            ; 004ee26a
    PUSH 0x1d07ed0                      ; 004ee26b
    CALL FUN_005b7790                   ; 004ee270
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 004ee275
    PUSH 0x5dd23d                       ; 004ee278 | = "Sound options"
    CALL FUN_0050fe80                   ; 004ee27d
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ee282
    PUSH EAX                            ; 004ee285
    PUSH 0x1d07fd0                      ; 004ee286
    CALL FUN_005b7790                   ; 004ee28b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 004ee290
    PUSH 0x5dd24b                       ; 004ee293 | = "Control options"
    CALL FUN_0050fe80                   ; 004ee298
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ee29d
    PUSH EAX                            ; 004ee2a0
    PUSH 0x1d080d0                      ; 004ee2a1
    CALL FUN_005b7790                   ; 004ee2a6
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 004ee2ab
    PUSH 0x5dd25b                       ; 004ee2ae | = "Credits"
    CALL FUN_0050fe80                   ; 004ee2b3
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ee2b8
    PUSH EAX                            ; 004ee2bb
    PUSH 0x1d081d0                      ; 004ee2bc
    CALL FUN_005b7790                   ; 004ee2c1
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x8                         ; 004ee2c6
    MOV EAX,[0x00616494]                ; 004ee2c9 | DAT_00616494
    PUSH 0x5dd263                       ; 004ee2ce | = "Option Menu"
    MOV dword ptr [EAX + 0xd4],0x9      ; 004ee2d3 | DAT_01cb69d4
    CALL FUN_0050fe80                   ; 004ee2dd
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004ee2e2
    PUSH EAX                            ; 004ee2e5
    PUSH 0x122                          ; 004ee2e6
    LEA EAX,[ESP + 0x8]                 ; 004ee2eb
    PUSH EAX                            ; 004ee2ef
    PUSH 0x4                            ; 004ee2f0
    PUSH 0x1d082d0                      ; 004ee2f2
    CALL FUN_004eb0e0                   ; 004ee2f7
        ;   XREF to: 004eb0e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb0e0()
    ADD ESP,0x14                        ; 004ee2fc
    MOV EBX,EAX                         ; 004ee2ff
    CALL FUN_00589560                   ; 004ee301
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    CMP EBX,0x3                         ; 004ee306
    JA 0x004ee317                       ; 004ee309
        ;   XREF to: 004ee317 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EBX*0x4 + 0x4ee184]  ; 004ee30b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    CALL FUN_004ebf10                   ; 004ee312
        ;   XREF to: 004ebf10 (UNCONDITIONAL_CALL)  ; undefined FUN_004ebf10()
        ;   Label: caseD_0
    PUSH 0x1                            ; 004ee317
        ;   Label: default
    MOV EAX,[0x00617dd4]                ; 004ee319 | DAT_00617dd4
    PUSH EAX                            ; 004ee31e | DAT_01d02f84
    MOV EBX,dword ptr [EAX]             ; 004ee31f | DAT_01d02f84
    CALL dword ptr [EBX + 0x4]          ; 004ee321
    ADD ESP,0x8                         ; 004ee324
    TEST EAX,EAX                        ; 004ee327
    JZ 0x004ee1e3                       ; 004ee329
        ;   XREF to: 004ee1e3 (CONDITIONAL_JUMP)  ; LAB_004ee1e3
    CMP dword ptr [ESP + 0x14],0x0      ; 004ee32f
    JNZ 0x004ee3b5                      ; 004ee334
        ;   XREF to: 004ee3b5 (CONDITIONAL_JUMP)  ; LAB_004ee3b5
    CALL FUN_004d94d0                   ; 004ee33a
        ;   XREF to: 004d94d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d94d0()
    ADD ESP,0x4                         ; 004ee33f
    POP EBP                             ; 004ee342
    POP EDI                             ; 004ee343
    POP EBX                             ; 004ee344
    RET                                 ; 004ee345
    MOV EBX,dword ptr [0x0061c068]      ; 004ee346 | DAT_0061c068
        ;   Label: LAB_004ee346
    PUSH EBX                            ; 004ee34c
    CALL FUN_0055ac50                   ; 004ee34d
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ac50()
    ADD ESP,0x4                         ; 004ee352
    PUSH 0x1d05620                      ; 004ee355
    CALL FUN_005023e0                   ; 004ee35a
        ;   XREF to: 005023e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005023e0()
    ADD ESP,0x4                         ; 004ee35f
    JMP 0x004ee1b7                      ; 004ee362
        ;   XREF to: 004ee1b7 (UNCONDITIONAL_JUMP)  ; LAB_004ee1b7
    CALL FUN_004ed260                   ; 004ee367
        ;   XREF to: 004ed260 (UNCONDITIONAL_CALL)  ; undefined FUN_004ed260()
        ;   Label: caseD_1
    JMP 0x004ee317                      ; 004ee36c
        ;   XREF to: 004ee317 (UNCONDITIONAL_JUMP)  ; default
    MOV EBX,dword ptr [0x00616494]      ; 004ee36e | DAT_00616494
        ;   Label: caseD_2
    MOV EBX,dword ptr [EBX + 0xd0]      ; 004ee374 | DAT_01cb69d0
    CALL FUN_004ecc70                   ; 004ee37a
        ;   XREF to: 004ecc70 (UNCONDITIONAL_CALL)  ; undefined FUN_004ecc70()
    MOV EAX,[0x00616494]                ; 004ee37f | DAT_00616494
    CMP EBX,dword ptr [EAX + 0xd0]      ; 004ee384 | DAT_01cb69d0
    JZ 0x004ee317                       ; 004ee38a
        ;   XREF to: 004ee317 (CONDITIONAL_JUMP)  ; default
    CALL FUN_004eed60                   ; 004ee38c
        ;   XREF to: 004eed60 (UNCONDITIONAL_CALL)  ; undefined FUN_004eed60()
    JMP 0x004ee317                      ; 004ee391
        ;   XREF to: 004ee317 (UNCONDITIONAL_JUMP)  ; default
    MOV EBP,dword ptr [0x00616494]      ; 004ee393 | DAT_00616494
        ;   Label: caseD_3
    PUSH EBP                            ; 004ee399 | DAT_01cb6900
    CALL FUN_004be430                   ; 004ee39a
        ;   XREF to: 004be430 (UNCONDITIONAL_CALL)  ; undefined FUN_004be430()
    ADD ESP,0x4                         ; 004ee39f
    MOV EAX,[0x0061c068]                ; 004ee3a2 | DAT_0061c068
    PUSH EAX                            ; 004ee3a7
    CALL FUN_0055ac50                   ; 004ee3a8
        ;   XREF to: 0055ac50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ac50()
    ADD ESP,0x4                         ; 004ee3ad
    JMP 0x004ee317                      ; 004ee3b0
        ;   XREF to: 004ee317 (UNCONDITIONAL_JUMP)  ; default
    PUSH 0x1d05620                      ; 004ee3b5
        ;   Label: LAB_004ee3b5
    CALL FUN_00502450                   ; 004ee3ba
        ;   XREF to: 00502450 (UNCONDITIONAL_CALL)  ; undefined FUN_00502450()
    ADD ESP,0x4                         ; 004ee3bf
    MOV EBX,dword ptr [0x0061c068]      ; 004ee3c2 | DAT_0061c068
    PUSH EBX                            ; 004ee3c8
    CALL FUN_0055adb0                   ; 004ee3c9
        ;   XREF to: 0055adb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055adb0()
    ADD ESP,0x4                         ; 004ee3ce
    CALL FUN_004d94d0                   ; 004ee3d1
        ;   XREF to: 004d94d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d94d0()
    ADD ESP,0x4                         ; 004ee3d6
    POP EBP                             ; 004ee3d9
    POP EDI                             ; 004ee3da
    POP EBX                             ; 004ee3db
    RET                                 ; 004ee3dc

