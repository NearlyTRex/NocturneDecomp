; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00543610(int param_1,int param_2,undefined4 *param_3)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_00544460 at 00546afe
;
; Referenced Globals:
;   TerminatedCString s_n_005ee107
;   TerminatedCString s_Character_s_model_s_does_005ee113
;   undefined4 DAT_01e810b0
;
; Called Functions:
;   FUN_0054b9a0
;   FUN_00565780
;   FUN_00569eb0
;   FUN_005bfb40
;   FUN_005c2cac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543610
        ;   Label: FUN_00543610
    PUSH ESI                            ; 00543611
    PUSH EDI                            ; 00543612
    SUB ESP,0x68                        ; 00543613
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00543616
    MOV EDI,dword ptr [ESP + 0x80]      ; 0054361a
    MOV EAX,EDI                         ; 00543621
    LEA ESI,[EDI + 0xf0]                ; 00543623
    MOV dword ptr [EAX],0x0             ; 00543629
        ;   Label: LAB_00543629
    ADD EAX,0x4                         ; 0054362f
    CMP EAX,ESI                         ; 00543632
    JNZ 0x00543629                      ; 00543634
        ;   XREF to: 00543629 (CONDITIONAL_JUMP)  ; LAB_00543629
    MOV EAX,dword ptr [ESP + 0x78]      ; 00543636
    ADD EAX,0x158                       ; 0054363a
    PUSH EAX                            ; 0054363f
    CALL FUN_00569eb0                   ; 00543640
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00543645
    MOV ESI,EAX                         ; 00543648
    LEA EAX,[ESP + 0x64]                ; 0054364a
        ;   Label: LAB_0054364a
    PUSH EAX                            ; 0054364e
    LEA EAX,[ESP + 0x4]                 ; 0054364f
    PUSH EAX                            ; 00543653
    PUSH 0x5ee107                       ; 00543654 | = " %[^ \t),]%n"
    MOV EDX,0xffffffff                  ; 00543659
    PUSH EBX                            ; 0054365e
    MOV dword ptr [ESP + 0x74],EDX      ; 0054365f
    CALL FUN_005c2cac                   ; 00543663
        ;   XREF to: 005c2cac (UNCONDITIONAL_CALL)  ; undefined FUN_005c2cac()
    ADD ESP,0x10                        ; 00543668
    MOV ECX,dword ptr [ESP + 0x64]      ; 0054366b
    CMP ECX,0x1                         ; 0054366f
    JGE 0x00543680                      ; 00543672
        ;   XREF to: 00543680 (CONDITIONAL_JUMP)  ; LAB_00543680
    MOV EAX,0x1                         ; 00543674
    ADD ESP,0x68                        ; 00543679
    POP EDI                             ; 0054367c
    POP ESI                             ; 0054367d
    POP EBX                             ; 0054367e
    RET                                 ; 0054367f
    PUSH 0x0                            ; 00543680
        ;   Label: LAB_00543680
    LEA EAX,[ESP + 0x4]                 ; 00543682
    PUSH EAX                            ; 00543686
    PUSH ESI                            ; 00543687
    ADD EBX,ECX                         ; 00543688
    CALL FUN_00565780                   ; 0054368a
        ;   XREF to: 00565780 (UNCONDITIONAL_CALL)  ; undefined FUN_00565780()
    ADD ESP,0xc                         ; 0054368f
    TEST EAX,EAX                        ; 00543692
    JL 0x0054369f                       ; 00543694
        ;   XREF to: 0054369f (CONDITIONAL_JUMP)  ; LAB_0054369f
    MOV dword ptr [EDI + EAX*0x4],0x1   ; 00543696
    JMP 0x0054364a                      ; 0054369d
        ;   XREF to: 0054364a (UNCONDITIONAL_JUMP)  ; LAB_0054364a
    MOV EAX,ESP                         ; 0054369f
        ;   Label: LAB_0054369f
    PUSH EAX                            ; 005436a1
    PUSH ESI                            ; 005436a2
    CALL FUN_0054b9a0                   ; 005436a3
        ;   XREF to: 0054b9a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054b9a0()
    ADD ESP,0x4                         ; 005436a8
    PUSH EAX                            ; 005436ab
    MOV EAX,dword ptr [ESP + 0x80]      ; 005436ac
    PUSH EAX                            ; 005436b3
    PUSH 0x5ee113                       ; 005436b4 | = "Character %s model %s does not have a..."
    PUSH 0x1e810b0                      ; 005436b9 | DAT_01e810b0
    CALL FUN_005bfb40                   ; 005436be
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x14                        ; 005436c3
    XOR EAX,EAX                         ; 005436c6
    ADD ESP,0x68                        ; 005436c8
    POP EDI                             ; 005436cb
    POP ESI                             ; 005436cc
    POP EBX                             ; 005436cd
    RET                                 ; 005436ce

