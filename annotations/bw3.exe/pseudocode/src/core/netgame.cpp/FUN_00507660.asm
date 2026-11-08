; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00507660(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined4       Stack[-0x37]:4  local_37
; undefined        Stack[-0x33]:1  local_33
; undefined1       Stack[-0x32]:1  local_32
; undefined4       Stack[-0x1f]:4  local_1f
; undefined4       Stack[-0x1b]:4  local_1b
; undefined4       Stack[-0x17]:4  local_17
;
; XREF[2]:
;   FUN_00505a30 at 00505a98
;   FUN_00506b00 at 00507076
;
; Referenced Globals:
;   TerminatedCString s_core_netgame_cpp_005caf0c
;   TerminatedCString s_CNetGame_sendMyStateChan_005caf20
;   undefined4 DAT_00603454
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01da6474
;   undefined4 DAT_01da6478
;
; Called Functions:
;   FUN_004e4330
;   FUN_00505870
;   FUN_005806a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00507660
        ;   Label: FUN_00507660
    PUSH ESI                            ; 00507661
    PUSH EDI                            ; 00507662
    PUSH EBP                            ; 00507663
    SUB ESP,0x2c                        ; 00507664
    MOV EBX,dword ptr [ESP + 0x40]      ; 00507667
    CMP dword ptr [EBX],0x2             ; 0050766b
    JNZ 0x00507676                      ; 0050766e
        ;   XREF to: 00507676 (CONDITIONAL_JUMP)  ; LAB_00507676
    CMP dword ptr [EBX + 0x4],0x1       ; 00507670
    JZ 0x00507699                       ; 00507674
        ;   XREF to: 00507699 (CONDITIONAL_JUMP)  ; LAB_00507699
    MOV ESI,0x5caf0c                    ; 00507676 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_00507676
    MOV EDI,0x8d0                       ; 0050767b
    PUSH 0x5caf20                       ; 00507680 | = "CNetGame::sendMyStateChanged - should..."
    MOV dword ptr [0x01d71de0],ESI      ; 00507685 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0050768b | DAT_01d71de4
    CALL FUN_004e4330                   ; 00507691
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00507696
    CALL FUN_005806a0                   ; 00507699
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
        ;   Label: LAB_00507699
    MOV EDX,EAX                         ; 0050769e
    MOV ESI,0x12                        ; 005076a0
    SAR EDX,0x1f                        ; 005076a5
    IDIV ESI                            ; 005076a8
    MOV EBP,dword ptr [0x01da6474]      ; 005076aa | DAT_01da6474
    MOV EDX,EAX                         ; 005076b0
    SUB EAX,EBP                         ; 005076b2
    MOV dword ptr [0x01da6474],EDX      ; 005076b4 | DAT_01da6474
    TEST EAX,EAX                        ; 005076ba
    JL 0x00507786                       ; 005076bc
        ;   XREF to: 00507786 (CONDITIONAL_JUMP)  ; LAB_00507786
    CMP EAX,0x20000                     ; 005076c2
    JLE 0x005076ce                      ; 005076c7
        ;   XREF to: 005076ce (CONDITIONAL_JUMP)  ; LAB_005076ce
    MOV EAX,0x20000                     ; 005076c9
    MOV EDX,dword ptr [0x01da6478]      ; 005076ce | DAT_01da6478
        ;   Label: LAB_005076ce
    MOV ECX,0x29                        ; 005076d4
    ADD EDX,EAX                         ; 005076d9
    MOV AH,0xa                          ; 005076db
    MOV dword ptr [ESP],ECX             ; 005076dd
    MOV byte ptr [ESP + 0x4],AH         ; 005076e0
    MOV EAX,dword ptr [EBX + 0x124]     ; 005076e4
    SHL EAX,0x7                         ; 005076ea
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x64] ; 005076ed
    MOV dword ptr [ESP + 0x1d],EAX      ; 005076f1
    MOV dword ptr [ESP + 0x5],EDX       ; 005076f5
    MOV EAX,dword ptr [EBX + 0x124]     ; 005076f9
    SHL EAX,0x7                         ; 005076ff
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x34] ; 00507702
    MOV dword ptr [ESP + 0x21],EAX      ; 00507706
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050770a
    SHL EAX,0x7                         ; 00507710
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x38] ; 00507713
    MOV dword ptr [ESP + 0x25],EAX      ; 00507717
    MOV ESI,dword ptr [EBX + 0x124]     ; 0050771b
    LEA EAX,[EBX + 0x20]                ; 00507721
    SHL ESI,0x7                         ; 00507724
    LEA EDI,[ESP + 0x9]                 ; 00507727
    ADD ESI,EAX                         ; 0050772b
    MOV dword ptr [0x01da6478],EDX      ; 0050772d | DAT_01da6478
    PUSH EDI                            ; 00507733
    MOV AL,byte ptr [ESI]               ; 00507734
        ;   Label: LAB_00507734
    MOV byte ptr [EDI],AL               ; 00507736
    CMP AL,0x0                          ; 00507738
    JZ 0x0050774c                       ; 0050773a
        ;   XREF to: 0050774c (CONDITIONAL_JUMP)  ; LAB_0050774c
    MOV AL,byte ptr [ESI + 0x1]         ; 0050773c
    ADD ESI,0x2                         ; 0050773f
    MOV byte ptr [EDI + 0x1],AL         ; 00507742
    ADD EDI,0x2                         ; 00507745
    CMP AL,0x0                          ; 00507748
    JNZ 0x00507734                      ; 0050774a
        ;   XREF to: 00507734 (CONDITIONAL_JUMP)  ; LAB_00507734
    POP EDI                             ; 0050774c
        ;   Label: LAB_0050774c
    MOV EAX,ESP                         ; 0050774d
    PUSH EAX                            ; 0050774f
    MOV ESI,dword ptr [EBX + 0x120]     ; 00507750
    PUSH ESI                            ; 00507756
    PUSH EBX                            ; 00507757
    CALL FUN_00505870                   ; 00507758
        ;   XREF to: 00505870 (UNCONDITIONAL_CALL)  ; undefined FUN_00505870()
    MOV EAX,dword ptr [EBX + 0x124]     ; 0050775d
    MOV EDI,0x1                         ; 00507763
    SHL EAX,0x7                         ; 00507768
    ADD ESP,0xc                         ; 0050776b
    ADD EBX,EAX                         ; 0050776e
    MOV EAX,[0x01da6478]                ; 00507770 | DAT_01da6478
    MOV dword ptr [0x00603454],EDI      ; 00507775 | DAT_00603454
    MOV dword ptr [EBX + 0x60],EAX      ; 0050777b
    ADD ESP,0x2c                        ; 0050777e
    POP EBP                             ; 00507781
    POP EDI                             ; 00507782
    POP ESI                             ; 00507783
    POP EBX                             ; 00507784
    RET                                 ; 00507785
    XOR EAX,EAX                         ; 00507786
        ;   Label: LAB_00507786
    JMP 0x005076ce                      ; 00507788
        ;   XREF to: 005076ce (UNCONDITIONAL_JUMP)  ; LAB_005076ce

