; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004265a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   FUN_00425c20 at 00425c6c
;   FUN_004d5860 at 004d5a75
;   FUN_0054dac0 at 0054db59
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_007658e4
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_004544d0
;   FUN_00460aa0
;   FUN_0055aa00
;   FUN_0055b180
;   thunk_FUN_004cdbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004265a0
        ;   Label: FUN_004265a0
    PUSH ESI                            ; 004265a1
    PUSH EDI                            ; 004265a2
    PUSH EBP                            ; 004265a3
    SUB ESP,0x7c                        ; 004265a4
    MOV EAX,dword ptr [ESP + 0x90]      ; 004265a7
    MOV EDX,dword ptr [EAX + 0x2dec]    ; 004265ae
    XOR EBP,EBP                         ; 004265b4
    TEST EDX,EDX                        ; 004265b6
    JLE 0x004265fc                      ; 004265b8
        ;   XREF to: 004265fc (CONDITIONAL_JUMP)  ; LAB_004265fc
    ADD EAX,0xfd0                       ; 004265ba
    MOV EBX,dword ptr [ESP + 0x90]      ; 004265bf
    MOV dword ptr [ESP + 0x78],EAX      ; 004265c6
    ADD EBX,0x2df0                      ; 004265ca
    MOV EAX,dword ptr [EBX]             ; 004265d0
        ;   Label: LAB_004265d0
    MOV ESI,dword ptr [ESP + 0x90]      ; 004265d2
    SHL EAX,0x2                         ; 004265d9
    ADD EAX,ESI                         ; 004265dc
    CMP dword ptr [EAX + 0x2290],0x0    ; 004265de
    JNZ 0x00426604                      ; 004265e5
        ;   XREF to: 00426604 (CONDITIONAL_JUMP)  ; LAB_00426604
    MOV EAX,dword ptr [ESP + 0x90]      ; 004265e7
        ;   Label: LAB_004265e7
    INC EBP                             ; 004265ee
    MOV ECX,dword ptr [EAX + 0x2dec]    ; 004265ef
    ADD EBX,0x38                        ; 004265f5
    CMP EBP,ECX                         ; 004265f8
    JL 0x004265d0                       ; 004265fa
        ;   XREF to: 004265d0 (CONDITIONAL_JUMP)  ; LAB_004265d0
    ADD ESP,0x7c                        ; 004265fc
        ;   Label: LAB_004265fc
    POP EBP                             ; 004265ff
    POP EDI                             ; 00426600
    POP ESI                             ; 00426601
    POP EBX                             ; 00426602
    RET                                 ; 00426603
    IMUL EAX,dword ptr [EBX + 0x4],0x30 ; 00426604
        ;   Label: LAB_00426604
    ADD EAX,dword ptr [ESP + 0x78]      ; 00426608
    PUSH EAX                            ; 0042660c
    LEA EAX,[EBX + 0x8]                 ; 0042660d
    PUSH EAX                            ; 00426610
    LEA ESI,[ESP + 0x8]                 ; 00426611
    LEA EDI,[ESP + 0x38]                ; 00426615
    CALL FUN_0055aa00                   ; 00426619
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0055aa00()
    ADD ESP,0x8                         ; 0042661e
    LEA EAX,[ESP + 0x60]                ; 00426621
    MOV ECX,0xc                         ; 00426625
    PUSH EAX                            ; 0042662a
    LEA EAX,[ESP + 0x34]                ; 0042662b
    LEA ESI,[ESP + 0x4]                 ; 0042662f
    PUSH EAX                            ; 00426633
    MOVSD.REP ES:EDI,ESI                ; 00426634
    CALL FUN_0055b180                   ; 00426636
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined FUN_0055b180()
    ADD ESP,0x8                         ; 0042663b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042663e
    MOV dword ptr [ESP + 0x6c],EAX      ; 00426642
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00426646
    MOV dword ptr [ESP + 0x70],EAX      ; 0042664a
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0042664e
    MOV dword ptr [ESP + 0x74],EAX      ; 00426652
    LEA EAX,[ESP + 0x6c]                ; 00426656
    PUSH EAX                            ; 0042665a
    LEA EAX,[ESP + 0x64]                ; 0042665b
    PUSH EAX                            ; 0042665f
    MOV ESI,dword ptr [0x005ae704]      ; 00426660 | DAT_005ae704
    PUSH ESI                            ; 00426666 | DAT_01b4d738
    CALL FUN_00460aa0                   ; 00426667
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460aa0()
    ADD ESP,0xc                         ; 0042666c
    PUSH -0x1                           ; 0042666f
    PUSH 0x0                            ; 00426671
    PUSH 0x7658e4                       ; 00426673 | DAT_007658e4
    CALL FUN_004544d0                   ; 00426678
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544d0()
    ADD ESP,0xc                         ; 0042667d
    MOV EDI,dword ptr [0x005ae704]      ; 00426680 | DAT_005ae704
    PUSH EDI                            ; 00426686 | DAT_01b4d738
    CALL thunk_FUN_004cdbc0             ; 00426687
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004cdbc0()
    ADD ESP,0x4                         ; 0042668c
    JMP 0x004265e7                      ; 0042668f
        ;   XREF to: 004265e7 (UNCONDITIONAL_JUMP)  ; LAB_004265e7

