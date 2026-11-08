; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f7590(int param_1)
;
;
; XREF[4]:
;   FUN_004bdfb0 at 004be676
;   FUN_004be8d0 at 004beae3
;   FUN_004f72a0 at 004f740a
;   FUN_00505a30 at 0050606b
;
; Referenced Globals:
;   TerminatedCString s_Can_t_run_mission_no_her_005c8c42
;   TerminatedCString s_Can_t_run_mission_no_loc_005c8c5f
;   TerminatedCString s_Loading_script_005c8c81
;   undefined4 DAT_005fb140
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_006002ac
;   undefined4 DAT_006039e0
;   undefined4 DAT_00603b28
;   undefined4 DAT_01d21558
;   undefined4 DAT_01d215a0
;   undefined4 DAT_01d5ba00
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01ed73e0
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_0047cf40
;   FUN_0048bfd0
;   FUN_004e0000
;   FUN_004f63c0
;   FUN_004f6a80
;   FUN_004f6de0
;   FUN_00508960
;   FUN_005297a0
;   FUN_00529920
;   FUN_00540bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7590
        ;   Label: FUN_004f7590
    PUSH ESI                            ; 004f7591
    PUSH EBP                            ; 004f7592
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f7593
    CMP dword ptr [0x01d5ba00],0x1      ; 004f7597 | DAT_01d5ba00
    JL 0x004f75c9                       ; 004f759e
        ;   XREF to: 004f75c9 (CONDITIONAL_JUMP)  ; LAB_004f75c9
    MOV EAX,[0x01d5ba14]                ; 004f75a0 | DAT_01d5ba14
    CMP dword ptr [EAX*0x4 + 0x1d5ba04],0x0 ; 004f75a5
    JNZ 0x004f75d7                      ; 004f75ad
        ;   XREF to: 004f75d7 (CONDITIONAL_JUMP)  ; LAB_004f75d7
    PUSH 0x5c8c5f                       ; 004f75af | = "Can't run mission - no local hero"
    MOV EBX,dword ptr [0x005fb140]      ; 004f75b4 | DAT_005fb140
    PUSH EBX                            ; 004f75ba
    CALL FUN_0047cf40                   ; 004f75bb
        ;   XREF to: 0047cf40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047cf40()
        ;   Label: LAB_004f75bb
    ADD ESP,0x8                         ; 004f75c0
    XOR EAX,EAX                         ; 004f75c3
    POP EBP                             ; 004f75c5
    POP ESI                             ; 004f75c6
    POP EBX                             ; 004f75c7
    RET                                 ; 004f75c8
    PUSH 0x5c8c42                       ; 004f75c9 | = "Can't run mission - no heros"
        ;   Label: LAB_004f75c9
    MOV ESI,dword ptr [0x005fb140]      ; 004f75ce | DAT_005fb140
    PUSH ESI                            ; 004f75d4
    JMP 0x004f75bb                      ; 004f75d5
        ;   XREF to: 004f75bb (UNCONDITIONAL_JUMP)  ; LAB_004f75bb
    PUSH EDI                            ; 004f75d7
        ;   Label: LAB_004f75d7
    PUSH EBX                            ; 004f75d8
    CALL FUN_004f6a80                   ; 004f75d9
        ;   XREF to: 004f6a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6a80()
    ADD ESP,0x4                         ; 004f75de
    LEA EAX,[EBX + 0x1444]              ; 004f75e1
    MOV dword ptr [EBX + 0x1450],0xffffffff ; 004f75e7
    MOV ESI,dword ptr [0x005fba60]      ; 004f75f1 | DAT_005fba60
    MOV dword ptr [EAX + 0x8],0x0       ; 004f75f7
    PUSH ESI                            ; 004f75fe
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f75ff
    MOV dword ptr [EAX + 0x4],EDX       ; 004f7602
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f7605
    MOV dword ptr [EAX],EDX             ; 004f7608
    CALL FUN_0048bfd0                   ; 004f760a
        ;   XREF to: 0048bfd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048bfd0()
    MOV EAX,[0x005fe9dc]                ; 004f760f | DAT_005fe9dc
    MOV dword ptr [EAX + 0x24c],0x0     ; 004f7614 | DAT_01d21558
    MOV dword ptr [EAX + 0x294],0xbf800000 ; 004f761e | DAT_01d215a0
    MOV EAX,[0x01d5ba14]                ; 004f7628 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004f762d
    ADD ESP,0x4                         ; 004f7634
    MOV EDI,dword ptr [EAX + 0x2c]      ; 004f7637
    PUSH EDI                            ; 004f763a
    PUSH EBX                            ; 004f763b
    CALL FUN_004f6de0                   ; 004f763c
        ;   XREF to: 004f6de0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6de0()
    ADD ESP,0x8                         ; 004f7641
    PUSH 0x0                            ; 004f7644
    PUSH 0x5c8c81                       ; 004f7646 | = "Loading script"
    CALL FUN_00508960                   ; 004f764b
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; undefined FUN_00508960()
    ADD ESP,0x4                         ; 004f7650
    PUSH EAX                            ; 004f7653
    MOV EBP,dword ptr [0x006002ac]      ; 004f7654 | DAT_006002ac
    PUSH EBP                            ; 004f765a
    CALL FUN_004e0000                   ; 004f765b
        ;   XREF to: 004e0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004e0000()
    ADD ESP,0xc                         ; 004f7660
    PUSH EBX                            ; 004f7663
    CALL FUN_004f63c0                   ; 004f7664
        ;   XREF to: 004f63c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f63c0()
    ADD ESP,0x4                         ; 004f7669
    MOV EAX,[0x006039e0]                ; 004f766c | DAT_006039e0
    PUSH EAX                            ; 004f7671 | DAT_01ed73e0
    CALL FUN_005297a0                   ; 004f7672
        ;   XREF to: 005297a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005297a0()
    ADD ESP,0x4                         ; 004f7677
    MOV EDX,dword ptr [0x006039e0]      ; 004f767a | DAT_006039e0
    PUSH EDX                            ; 004f7680 | DAT_01ed73e0
    CALL FUN_00529920                   ; 004f7681
        ;   XREF to: 00529920 (UNCONDITIONAL_CALL)  ; undefined FUN_00529920()
    ADD ESP,0x4                         ; 004f7686
    MOV ECX,dword ptr [0x00603b28]      ; 004f7689 | DAT_00603b28
    PUSH ECX                            ; 004f768f | DAT_01ed78c8
    CALL FUN_00540bc0                   ; 004f7690
        ;   XREF to: 00540bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00540bc0()
    MOV EAX,0x1                         ; 004f7695
    ADD ESP,0x4                         ; 004f769a
    POP EDI                             ; 004f769d
    POP EBP                             ; 004f769e
    POP ESI                             ; 004f769f
    POP EBX                             ; 004f76a0
    RET                                 ; 004f76a1

