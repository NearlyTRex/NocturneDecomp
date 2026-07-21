; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_drawTextMultilineColor_FUN_00402570(byte *param_1,int param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_2d.c_drawTextColor_FUN_00402a60 at 00402ab6
;
; Referenced Globals:
;   undefined4 DAT_005a4b80
;
; Called Functions:
;   engine_2d.c_drawCharacterMaskedColor_FUN_00402040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402570
        ;   Label: engine_2d.c_drawTextMultilineColor_FUN_00402570
    PUSH ESI                            ; 00402571
    PUSH EDI                            ; 00402572
    PUSH EBP                            ; 00402573
    SUB ESP,0x4                         ; 00402574
    MOV ESI,dword ptr [ESP + 0x18]      ; 00402577
    MOV EDI,ESI                         ; 0040257b
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0040257d
    SUB ECX,ECX                         ; 00402581
    DEC ECX                             ; 00402583
    XOR EAX,EAX                         ; 00402584
    SCASB.REPNE ES:EDI                  ; 00402586
    NOT ECX                             ; 00402588
    DEC ECX                             ; 0040258a
    MOV dword ptr [ESP],ECX             ; 0040258b
    XOR EDI,EDI                         ; 0040258e
    TEST ECX,ECX                        ; 00402590
    JLE 0x004025df                      ; 00402592
        ;   XREF to: 004025df (CONDITIONAL_JUMP)  ; LAB_004025df
    CMP byte ptr [ESI],0xa              ; 00402594
        ;   Label: LAB_00402594
    JZ 0x004025e7                       ; 00402597
        ;   XREF to: 004025e7 (CONDITIONAL_JUMP)  ; LAB_004025e7
    XOR EBX,EBX                         ; 00402599
        ;   Label: LAB_00402599
    MOV BL,byte ptr [ESI]               ; 0040259b
    CMP EBX,0x20                        ; 0040259d
    JL 0x004025d6                       ; 004025a0
        ;   XREF to: 004025d6 (CONDITIONAL_JUMP)  ; LAB_004025d6
    CMP EBX,0x100                       ; 004025a2
    JGE 0x004025d6                      ; 004025a8
        ;   XREF to: 004025d6 (CONDITIONAL_JUMP)  ; LAB_004025d6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004025aa
    PUSH EAX                            ; 004025ae
    MOV EDX,dword ptr [ESP + 0x24]      ; 004025af
    PUSH EDX                            ; 004025b3
    PUSH EBP                            ; 004025b4
    PUSH EBX                            ; 004025b5
    SUB EBX,0x20                        ; 004025b6
    IMUL EBX,EBX,0x91                   ; 004025b9
    CALL engine_2d.c_drawCharacterMaskedColor_FUN_00402040 ; 004025bf
        ;   XREF to: 00402040 (UNCONDITIONAL_CALL)  ; undefined engine_2d.c_drawCharacterMaskedColor_FUN_00402040()
    ADD ESP,0x10                        ; 004025c4
    MOV BL,byte ptr [EBX + 0x5a4b80]    ; 004025c7 | DAT_005a4b80
    AND EBX,0xff                        ; 004025cd
    INC EBX                             ; 004025d3
    ADD EBP,EBX                         ; 004025d4
    MOV EDX,dword ptr [ESP]             ; 004025d6
        ;   Label: LAB_004025d6
    INC EDI                             ; 004025d9
    INC ESI                             ; 004025da
    CMP EDI,EDX                         ; 004025db
    JL 0x00402594                       ; 004025dd
        ;   XREF to: 00402594 (CONDITIONAL_JUMP)  ; LAB_00402594
    ADD ESP,0x4                         ; 004025df
        ;   Label: LAB_004025df
    POP EBP                             ; 004025e2
    POP EDI                             ; 004025e3
    POP ESI                             ; 004025e4
    POP EBX                             ; 004025e5
    RET                                 ; 004025e6
    MOV ECX,dword ptr [ESP + 0x20]      ; 004025e7
        ;   Label: LAB_004025e7
    MOV EBX,dword ptr [ESP + 0x28]      ; 004025eb
    ADD ECX,0xb                         ; 004025ef
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004025f2
    MOV dword ptr [ESP + 0x20],ECX      ; 004025f6
    CMP ECX,EBX                         ; 004025fa
    JG 0x004025df                       ; 004025fc
        ;   XREF to: 004025df (CONDITIONAL_JUMP)  ; LAB_004025df
    JMP 0x00402599                      ; 004025fe
        ;   XREF to: 00402599 (UNCONDITIONAL_JUMP)  ; LAB_00402599

