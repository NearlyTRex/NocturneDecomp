; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c85c0(uint param_1)
;
;
; XREF[2]:
;   FUN_005c862c at 005c8634
;   FUN_005ce510 at 005ce68c
;
; Referenced Globals:
;   undefined4 DAT_006267c9
;   undefined4 DAT_006267dc
;
; Called Functions:
;   FUN_005c6450
;   FUN_005c6488
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c85c0
        ;   Label: FUN_005c85c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c85c1
    PUSH EBX                            ; 005c85c5
    CALL FUN_005c6488                   ; 005c85c6
        ;   XREF to: 005c6488 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6488()
    ADD ESP,0x4                         ; 005c85cb
    CMP EBX,0x7b                        ; 005c85ce
    JNZ 0x005c85d7                      ; 005c85d1
        ;   XREF to: 005c85d7 (CONDITIONAL_JUMP)  ; LAB_005c85d7
    PUSH 0x1                            ; 005c85d3
    JMP 0x005c861d                      ; 005c85d5
        ;   XREF to: 005c861d (UNCONDITIONAL_JUMP)  ; LAB_005c861d
    CMP EBX,0xce                        ; 005c85d7
        ;   Label: LAB_005c85d7
    JNZ 0x005c85f0                      ; 005c85dd
        ;   XREF to: 005c85f0 (CONDITIONAL_JUMP)  ; LAB_005c85f0
    PUSH 0x9                            ; 005c85df
    CALL FUN_005c6450                   ; 005c85e1
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    ADD ESP,0x4                         ; 005c85e6
    MOV EAX,0xffffffff                  ; 005c85e9
    POP EBX                             ; 005c85ee
    RET                                 ; 005c85ef
    CMP EBX,0xb7                        ; 005c85f0
        ;   Label: LAB_005c85f0
    JNZ 0x005c8609                      ; 005c85f6
        ;   XREF to: 005c8609 (CONDITIONAL_JUMP)  ; LAB_005c8609
    PUSH 0x7                            ; 005c85f8
    CALL FUN_005c6450                   ; 005c85fa
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    ADD ESP,0x4                         ; 005c85ff
    MOV EAX,0xffffffff                  ; 005c8602
    POP EBX                             ; 005c8607
    RET                                 ; 005c8608
    CMP EBX,0x13                        ; 005c8609
        ;   Label: LAB_005c8609
    JBE 0x005c8613                      ; 005c860c
        ;   XREF to: 005c8613 (CONDITIONAL_JUMP)  ; LAB_005c8613
    MOV EBX,0x13                        ; 005c860e
    MOV EBX,dword ptr [EBX + 0x6267c9]  ; 005c8613 | DAT_006267dc | DAT_006267c9
        ;   Label: LAB_005c8613
    SAR EBX,0x18                        ; 005c8619
    PUSH EBX                            ; 005c861c
    CALL FUN_005c6450                   ; 005c861d
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
        ;   Label: LAB_005c861d
    ADD ESP,0x4                         ; 005c8622
    MOV EAX,0xffffffff                  ; 005c8625
    POP EBX                             ; 005c862a
    RET                                 ; 005c862b

