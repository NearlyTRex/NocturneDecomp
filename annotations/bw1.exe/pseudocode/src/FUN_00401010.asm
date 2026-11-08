; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00401010(void)
;
; Local Variables:
; undefined        Stack[-0x30]:1  local_30
;
; XREF[1]:
;   FUN_005032a0 at 0050338c
;
; Referenced Globals:
;   TerminatedCString s_vga_act_005d2004
;   TerminatedCString s_vga_lte_005d200c
;   TerminatedCString s_vga_map_005d2014
;   TerminatedCString s_vga_act_005d201c
;   TerminatedCString s_default_act_005d2024
;   undefined4 DAT_005d2030
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f030
;   undefined4 DAT_01c4f034
;   undefined4 DAT_01c4f038
;
; Called Functions:
;   FUN_00401590
;   FUN_00402940
;   FUN_005a08d0
;   FUN_005a0a50
;   FUN_005a0c10
;   FUN_005a0dc0
;   FUN_005a0fd0
;   FUN_005ac040
;   FUN_005ac300
;   FUN_005acec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401010
        ;   Label: FUN_00401010
    SUB ESP,0x2c                        ; 00401011
    PUSH 0x1e0                          ; 00401014
    MOV EDX,0x20                        ; 00401019
    PUSH 0x280                          ; 0040101e
    MOV dword ptr [0x0061b4a0],EDX      ; 00401023 | DAT_0061b4a0
    CALL FUN_005ac040                   ; 00401029
        ;   XREF to: 005ac040 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac040()
    ADD ESP,0x8                         ; 0040102e
    PUSH 0x20                           ; 00401031
    PUSH 0x1e0                          ; 00401033
    PUSH 0x280                          ; 00401038
    CALL FUN_005ac300                   ; 0040103d
        ;   XREF to: 005ac300 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac300()
    ADD ESP,0xc                         ; 00401042
    PUSH 0x5d2004                       ; 00401045 | = "vga.act"
    CALL FUN_00401590                   ; 0040104a
        ;   XREF to: 00401590 (UNCONDITIONAL_CALL)  ; undefined FUN_00401590()
    ADD ESP,0x4                         ; 0040104f
    PUSH 0x5d200c                       ; 00401052 | = "vga.lte"
    ADD ESP,0x4                         ; 00401057
    PUSH 0x5d2014                       ; 0040105a | = "vga.map"
    CALL FUN_00402940                   ; 0040105f
        ;   XREF to: 00402940 (UNCONDITIONAL_CALL)  ; undefined FUN_00402940()
    ADD ESP,0x4                         ; 00401064
    PUSH 0x5d201c                       ; 00401067 | = "vga.act"
    ADD ESP,0x4                         ; 0040106c
    CALL FUN_005acec0                   ; 0040106f
        ;   XREF to: 005acec0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acec0()
    MOV ECX,0xffffffff                  ; 00401074
    MOV EBX,0x4                         ; 00401079
    MOV dword ptr [0x01c4f030],ECX      ; 0040107e | DAT_01c4f030
    MOV ECX,0x1                         ; 00401084
    MOV EAX,0xffffffff                  ; 00401089
        ;   Label: LAB_00401089
    XOR EDX,EDX                         ; 0040108e
    DIV ECX                             ; 00401090
    ADD EBX,0x4                         ; 00401092
    INC ECX                             ; 00401095
    MOV dword ptr [EBX + 0x1c4f02c],EAX ; 00401096 | DAT_01c4f034 | DAT_01c4f038
    CMP ECX,0x640                       ; 0040109c
    JC 0x00401089                       ; 004010a2
        ;   XREF to: 00401089 (CONDITIONAL_JUMP)  ; LAB_00401089
    MOV EAX,ESP                         ; 004010a4
    PUSH EAX                            ; 004010a6
    CALL FUN_005a08d0                   ; 004010a7
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a08d0()
    ADD ESP,0x4                         ; 004010ac
    PUSH 0x1                            ; 004010af
    PUSH 0x5d2024                       ; 004010b1 | = "default.act"
    PUSH 0x5d2030                       ; 004010b6 | DAT_005d2030
    LEA EAX,[ESP + 0xc]                 ; 004010bb
    PUSH EAX                            ; 004010bf
    CALL FUN_005a0fd0                   ; 004010c0
        ;   XREF to: 005a0fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0fd0()
    ADD ESP,0x10                        ; 004010c5
    TEST EAX,EAX                        ; 004010c8
    JNZ 0x004010e0                      ; 004010ca
        ;   XREF to: 004010e0 (CONDITIONAL_JUMP)  ; LAB_004010e0
    PUSH 0x0                            ; 004010cc
    LEA EAX,[ESP + 0x4]                 ; 004010ce
    PUSH EAX                            ; 004010d2
    CALL FUN_005a0a50                   ; 004010d3
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0a50()
    ADD ESP,0x8                         ; 004010d8
    ADD ESP,0x2c                        ; 004010db
    POP EBX                             ; 004010de
    RET                                 ; 004010df
    PUSH 0x300                          ; 004010e0
        ;   Label: LAB_004010e0
    PUSH 0x1c4ecf8                      ; 004010e5
    LEA EAX,[ESP + 0x8]                 ; 004010ea
    PUSH EAX                            ; 004010ee
    CALL FUN_005a0c10                   ; 004010ef
        ;   XREF to: 005a0c10 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0c10()
    ADD ESP,0xc                         ; 004010f4
    MOV EAX,ESP                         ; 004010f7
    PUSH EAX                            ; 004010f9
    CALL FUN_005a0dc0                   ; 004010fa
        ;   XREF to: 005a0dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0dc0()
    ADD ESP,0x4                         ; 004010ff
    PUSH 0x0                            ; 00401102
    LEA EAX,[ESP + 0x4]                 ; 00401104
    PUSH EAX                            ; 00401108
    CALL FUN_005a0a50                   ; 00401109
        ;   XREF to: 005a0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_005a0a50()
    ADD ESP,0x8                         ; 0040110e
    ADD ESP,0x2c                        ; 00401111
    POP EBX                             ; 00401114
    RET                                 ; 00401115

