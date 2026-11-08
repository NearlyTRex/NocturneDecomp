; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00442710(int param_1,int param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004406d0 at 00440736
;
; Referenced Globals:
;   undefined4 DAT_01326d20
;   undefined4 DAT_01326e60
;   undefined4 DAT_01339a60
;
; Called Functions:
;   FUN_0047108a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442710
        ;   Label: FUN_00442710
    PUSH ESI                            ; 00442711
    PUSH EDI                            ; 00442712
    PUSH EBP                            ; 00442713
    SUB ESP,0x4                         ; 00442714
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00442717
    LEA ESI,[EBX + 0x1]                 ; 0044271b
    CMP ESI,0x10                        ; 0044271e
    JL 0x00442725                       ; 00442721
        ;   XREF to: 00442725 (CONDITIONAL_JUMP)  ; LAB_00442725
    XOR ESI,ESI                         ; 00442723
    MOV EDX,dword ptr [ESP + 0x20]      ; 00442725
        ;   Label: LAB_00442725
    CMP EDX,0xffff                      ; 00442729
    JLE 0x00442808                      ; 0044272f
        ;   XREF to: 00442808 (CONDITIONAL_JUMP)  ; LAB_00442808
    MOV dword ptr [ESP + 0x20],0xffff   ; 00442735
    MOV EAX,0xffff                      ; 0044273d
        ;   Label: LAB_0044273d
    MOV EDX,dword ptr [ESP + 0x20]      ; 00442742
    SUB EAX,EDX                         ; 00442746
    MOV dword ptr [ESP],EAX             ; 00442748
    MOV EAX,EDX                         ; 0044274b
    MOV ECX,EDX                         ; 0044274d
    SHL EAX,0x10                        ; 0044274f
    OR ECX,EAX                          ; 00442752
    MOV EAX,dword ptr [ESP]             ; 00442754
    MOV EDI,dword ptr [ESP]             ; 00442757
    SHL EAX,0x10                        ; 0044275a
    OR EDI,EAX                          ; 0044275d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044275f
    MOV dword ptr [ESP + 0x20],ECX      ; 00442763
    MOV dword ptr [ESP],EDI             ; 00442767
    MOV EBP,dword ptr [EAX + 0x154]     ; 0044276a
    XOR EDI,EDI                         ; 00442770
    TEST EBP,EBP                        ; 00442772
    JLE 0x00442800                      ; 00442774
        ;   XREF to: 00442800 (CONDITIONAL_JUMP)  ; LAB_00442800
    LEA EAX,[EBX*0x4 + 0x0]             ; 0044277a
    ADD EAX,EBX                         ; 00442781
    SHL EAX,0xa                         ; 00442783
    MOV EBX,EAX                         ; 00442786
    SHL EAX,0x4                         ; 00442788
    MOV EBP,0x1339920                   ; 0044278b
    SUB EAX,EBX                         ; 00442790
    ADD EBP,EAX                         ; 00442792
    LEA EAX,[ESI*0x4 + 0x0]             ; 00442794
    ADD EAX,ESI                         ; 0044279b
    SHL EAX,0xa                         ; 0044279d
    MOV EBX,EAX                         ; 004427a0
    SHL EAX,0x4                         ; 004427a2
    SUB EAX,EBX                         ; 004427a5
    MOV EBX,0x1339920                   ; 004427a7
    MOV ESI,0x1326d20                   ; 004427ac
    ADD EBX,EAX                         ; 004427b1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004427b3
        ;   Label: LAB_004427b3
    MOV EAX,dword ptr [EAX + 0x150]     ; 004427b7
    PUSH EAX                            ; 004427bd
    MOV EAX,dword ptr [ESP + 0x4]       ; 004427be
    PUSH EAX                            ; 004427c2
    MOV EDX,dword ptr [ESP + 0x28]      ; 004427c3
    PUSH EDX                            ; 004427c7
    PUSH EBX                            ; 004427c8 | DAT_01339a60
    PUSH EBP                            ; 004427c9
    PUSH ESI                            ; 004427ca | DAT_01326d20 | DAT_01326e60
    CALL FUN_0047108a                   ; 004427cb
        ;   XREF to: 0047108a (UNCONDITIONAL_CALL)  ; undefined FUN_0047108a()
    ADD ESP,0x18                        ; 004427d0
    INC EDI                             ; 004427d3
    MOV EAX,dword ptr [ESP + 0x18]      ; 004427d4
    ADD EBX,0x140                       ; 004427d8
    ADD EBP,0x140                       ; 004427de
    MOV ECX,dword ptr [EAX + 0x154]     ; 004427e4
    ADD ESI,0x140                       ; 004427ea
    CMP EDI,ECX                         ; 004427f0
    JL 0x004427b3                       ; 004427f2
        ;   XREF to: 004427b3 (CONDITIONAL_JUMP)  ; LAB_004427b3
    LEA EAX,[EAX]                       ; 004427f4
    LEA EDX,[EDX]                       ; 004427fa
    ADD ESP,0x4                         ; 00442800
        ;   Label: LAB_00442800
    POP EBP                             ; 00442803
    POP EDI                             ; 00442804
    POP ESI                             ; 00442805
    POP EBX                             ; 00442806
    RET                                 ; 00442807
    TEST EDX,EDX                        ; 00442808
        ;   Label: LAB_00442808
    JGE 0x0044273d                      ; 0044280a
        ;   XREF to: 0044273d (CONDITIONAL_JUMP)  ; LAB_0044273d
    XOR EDI,EDI                         ; 00442810
    MOV dword ptr [ESP + 0x20],EDI      ; 00442812
    JMP 0x0044273d                      ; 00442816
        ;   XREF to: 0044273d (UNCONDITIONAL_JUMP)  ; LAB_0044273d

