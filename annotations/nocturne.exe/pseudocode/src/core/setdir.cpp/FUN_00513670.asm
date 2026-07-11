; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00513670(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00513610 at 00513642
;
; Referenced Globals:
;   undefined4 DAT_00590c0d
;   undefined4 DAT_00590c10
;   string s_..\\core\\setdir.cpp_00590c15
;   string s_Can't_create_%s_00590c28
;   string s_..\\core\\setdir.cpp_00590c38
;   string s_Error_writing_%s_00590c4b
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_00456a60
;   FUN_004c8440
;   FUN_00563380
;   FUN_00563a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00513670
        ;   Label: FUN_00513670
    PUSH ESI                            ; 00513671
    PUSH EDI                            ; 00513672
    PUSH EBP                            ; 00513673
    MOV ESI,dword ptr [ESP + 0x18]      ; 00513674
    PUSH 0x590c0d                       ; 00513678 | DAT_00590c0d
    PUSH ESI                            ; 0051367d
    PUSH 0x590c10                       ; 0051367e | DAT_00590c10
    CALL FUN_00456a60                   ; 00513683
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 00513688
    MOV EBX,EAX                         ; 0051368b
    TEST EAX,EAX                        ; 0051368d
    JNZ 0x005136b5                      ; 0051368f
        ;   XREF to: 005136b5 (CONDITIONAL_JUMP)  ; LAB_005136b5
    PUSH ESI                            ; 00513691
    MOV EDX,0x590c15                    ; 00513692 | = "..\\core\\setdir.cpp"
    MOV ECX,0x2a2                       ; 00513697
    PUSH 0x590c28                       ; 0051369c | = "Can't create %s"
    MOV dword ptr [0x01cc4800],EDX      ; 005136a1 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 005136a7 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005136ad
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 005136b2
    MOV EAX,dword ptr [ESP + 0x14]      ; 005136b5
        ;   Label: LAB_005136b5
    PUSH EBX                            ; 005136b9
    MOV EDI,dword ptr [EAX]             ; 005136ba
    PUSH EDI                            ; 005136bc
    PUSH 0x3000                         ; 005136bd
    PUSH 0x20875f8                      ; 005136c2
    CALL FUN_00563a50                   ; 005136c7
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a50()
    MOV AH,byte ptr [EBX + 0xc]         ; 005136cc
    ADD ESP,0x10                        ; 005136cf
    TEST AH,0x20                        ; 005136d2
    JNZ 0x005136e5                      ; 005136d5
        ;   XREF to: 005136e5 (CONDITIONAL_JUMP)  ; LAB_005136e5
    PUSH EBX                            ; 005136d7
    CALL FUN_00563380                   ; 005136d8
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 005136dd
    POP EBP                             ; 005136e0
    POP EDI                             ; 005136e1
    POP ESI                             ; 005136e2
    POP EBX                             ; 005136e3
    RET                                 ; 005136e4
    PUSH ESI                            ; 005136e5
        ;   Label: LAB_005136e5
    MOV EBP,0x590c38                    ; 005136e6 | = "..\\core\\setdir.cpp"
    MOV EAX,0x2a4                       ; 005136eb
    PUSH 0x590c4b                       ; 005136f0 | = "Error writing %s"
    MOV dword ptr [0x01cc4800],EBP      ; 005136f5 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 005136fb | DAT_01cc4804
    CALL FUN_004c8440                   ; 00513700
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00513705
    PUSH EBX                            ; 00513708
    CALL FUN_00563380                   ; 00513709
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 0051370e
    POP EBP                             ; 00513711
    POP EDI                             ; 00513712
    POP ESI                             ; 00513713
    POP EBX                             ; 00513714
    RET                                 ; 00513715

