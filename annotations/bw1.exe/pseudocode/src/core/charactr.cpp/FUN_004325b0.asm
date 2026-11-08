; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004325b0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[12]:
;   FUN_0041bb40 at 0041bf47
;   FUN_00428ae0 at 00429051
;   FUN_00459100 at 004596e2
;   FUN_00474400 at 004746d3
;   FUN_004a1d00 at 004a2915
;   FUN_004ec280 at 004ec2a0
;   FUN_004f2340 at 004f23fe
;   FUN_0051ce40 at 0051d104
;   FUN_005907a0 at 005909b8
;   FUN_005a6da0 at 005a6fa9
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005d5bad
;   TerminatedCString s_CCharacter_pickupObjectN_005d5bc2
;   TerminatedCString s_core_charactr_cpp_005d5bf3
;   TerminatedCString s_CCharacter_pickupObjectN_005d5c08
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00432690
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004325b0
        ;   Label: FUN_004325b0
    PUSH ESI                            ; 004325b1
    PUSH EDI                            ; 004325b2
    PUSH EBP                            ; 004325b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004325b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004325b8
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004325bc
    TEST EDI,EDI                        ; 004325c0
    JL 0x004325c9                       ; 004325c2
        ;   XREF to: 004325c9 (CONDITIONAL_JUMP)  ; LAB_004325c9
    CMP EDI,0x2                         ; 004325c4
    JL 0x004325ec                       ; 004325c7
        ;   XREF to: 004325ec (CONDITIONAL_JUMP)  ; LAB_004325ec
    MOV EDX,0x5d5bad                    ; 004325c9 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_004325c9
    MOV ECX,0xdba                       ; 004325ce
    PUSH 0x5d5bc2                       ; 004325d3 | = "CCharacter::pickupObjectNow - invalid..."
    MOV dword ptr [0x01d1d400],EDX      ; 004325d8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004325de | DAT_01d1d404
    CALL FUN_005030e0                   ; 004325e4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004325e9
    TEST EBP,EBP                        ; 004325ec
        ;   Label: LAB_004325ec
    JNZ 0x004325f5                      ; 004325ee
        ;   XREF to: 004325f5 (CONDITIONAL_JUMP)  ; LAB_004325f5
    POP EBP                             ; 004325f0
        ;   Label: LAB_004325f0
    POP EDI                             ; 004325f1
    POP ESI                             ; 004325f2
    POP EBX                             ; 004325f3
    RET                                 ; 004325f4
    PUSH 0x0                            ; 004325f5
        ;   Label: LAB_004325f5
    PUSH EDI                            ; 004325f7
    MOV EAX,dword ptr [ESI + 0x154]     ; 004325f8
    PUSH ESI                            ; 004325fe
    CALL dword ptr [EAX + 0x128]        ; 004325ff
    LEA EAX,[EDI*0x8 + 0x0]             ; 00432605
    MOV EBX,EAX                         ; 0043260c
    SHL EAX,0x4                         ; 0043260e
    SUB EAX,EBX                         ; 00432611
    LEA EBX,[ESI + 0x25a8]              ; 00432613
    ADD EBX,EAX                         ; 00432619
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043261b
    ADD ESP,0xc                         ; 0043261e
    TEST EAX,EAX                        ; 00432621
    JL 0x0043262f                       ; 00432623
        ;   XREF to: 0043262f (CONDITIONAL_JUMP)  ; LAB_0043262f
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 00432625
    JZ 0x004325f0                       ; 0043262d
        ;   XREF to: 004325f0 (CONDITIONAL_JUMP)  ; LAB_004325f0
    CMP dword ptr [EBX],0x0             ; 0043262f
        ;   Label: LAB_0043262f
    JGE 0x00432656                      ; 00432632
        ;   XREF to: 00432656 (CONDITIONAL_JUMP)  ; LAB_00432656
    MOV EAX,0x5d5bf3                    ; 00432634 | = "..\\core\\charactr.cpp"
    MOV EDX,0xdd2                       ; 00432639
    PUSH 0x5d5c08                       ; 0043263e | = "CCharacter::pickupObjectNow - invalid..."
    MOV [0x01d1d400],EAX                ; 00432643 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 00432648 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0043264e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00432653
    PUSH ESI                            ; 00432656
        ;   Label: LAB_00432656
    MOV EAX,dword ptr [EBP + 0x154]     ; 00432657
    PUSH EBP                            ; 0043265d
    CALL dword ptr [EAX + 0x88]         ; 0043265e
    ADD ESP,0x8                         ; 00432664
    MOV ECX,dword ptr [ESP + 0x24]      ; 00432667
    PUSH ECX                            ; 0043266b
    PUSH dword ptr [ESP + 0x24]         ; 0043266c
    PUSH EDI                            ; 00432670
    PUSH ESI                            ; 00432671
    MOV dword ptr [EBX + 0x8],EBP       ; 00432672
    CALL FUN_00432690                   ; 00432675
        ;   XREF to: 00432690 (UNCONDITIONAL_CALL)  ; undefined FUN_00432690()
    ADD ESP,0x10                        ; 0043267a
    POP EBP                             ; 0043267d
    POP EDI                             ; 0043267e
    POP ESI                             ; 0043267f
    POP EBX                             ; 00432680
    RET                                 ; 00432681

