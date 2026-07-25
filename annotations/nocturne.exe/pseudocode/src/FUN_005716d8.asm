; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005716d8(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0056ed08 at 0056ee20
;   FUN_005717d8 at 005717fe
;
; Called Functions:
;   FUN_00571510
;   FUN_00571564
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005716d8
        ;   Label: FUN_005716d8
    PUSH 0x2                            ; 005716d9
    CALL FUN_00571564                   ; 005716db
        ;   XREF to: 00571564 (UNCONDITIONAL_CALL)  ; undefined FUN_00571564()
    ADD ESP,0x4                         ; 005716e0
    MOV EBX,EAX                         ; 005716e3
    CMP EAX,0x1                         ; 005716e5
    JZ 0x00571710                       ; 005716e8
        ;   XREF to: 00571710 (CONDITIONAL_JUMP)  ; LAB_00571710
    CMP EAX,0x2                         ; 005716ea
    JZ 0x00571710                       ; 005716ed
        ;   XREF to: 00571710 (CONDITIONAL_JUMP)  ; LAB_00571710
    CMP EAX,0x3                         ; 005716ef
    JZ 0x00571710                       ; 005716f2
        ;   XREF to: 00571710 (CONDITIONAL_JUMP)  ; LAB_00571710
    PUSH 0x2                            ; 005716f4
    PUSH 0x2                            ; 005716f6
    CALL FUN_00571510                   ; 005716f8
        ;   XREF to: 00571510 (UNCONDITIONAL_CALL)  ; undefined FUN_00571510()
    ADD ESP,0x8                         ; 005716fd
    MOV EDX,dword ptr [ESP + 0x8]       ; 00571700
    PUSH EDX                            ; 00571704
    PUSH 0x2                            ; 00571705
    CALL EBX                            ; 00571707
    ADD ESP,0x8                         ; 00571709
    XOR EAX,EAX                         ; 0057170c
    POP EBX                             ; 0057170e
    RET                                 ; 0057170f
    MOV EAX,0xffffffff                  ; 00571710
        ;   Label: LAB_00571710
    POP EBX                             ; 00571715
    RET                                 ; 00571716

