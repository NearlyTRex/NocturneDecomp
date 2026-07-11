; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0052c6c0(UINT_PTR param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x34]:1  local_34
; undefined1       Stack[-0x33]:1  local_33
;
; XREF[1]:
;   FUN_00528230 at 00528267
;
; Referenced Globals:
;   void* PTR_waveOutGetDevCapsA_005753f4 = 00175868
;   string s_WavOutWrite:_005949a0
;
; Called Functions:
;   FUN_004ee370
;   waveOutGetDevCapsA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c6c0
        ;   Label: FUN_0052c6c0
    PUSH ESI                            ; 0052c6c1
    SUB ESP,0x34                        ; 0052c6c2
    MOV ESI,dword ptr [ESP + 0x40]      ; 0052c6c5
    MOV EBX,dword ptr [ESP + 0x44]      ; 0052c6c9
    PUSH 0x34                           ; 0052c6cd
    LEA EAX,[ESP + 0x4]                 ; 0052c6cf
    PUSH EAX                            ; 0052c6d3
    PUSH ESI                            ; 0052c6d4
    CALL dword ptr CS:[0x5753f4]        ; 0052c6d5 | PTR_waveOutGetDevCapsA_005753f4
    TEST EAX,EAX                        ; 0052c6dc
    JZ 0x0052c6e8                       ; 0052c6de
        ;   XREF to: 0052c6e8 (CONDITIONAL_JUMP)  ; LAB_0052c6e8
    XOR EAX,EAX                         ; 0052c6e0
    ADD ESP,0x34                        ; 0052c6e2
    POP ESI                             ; 0052c6e5
    POP EBX                             ; 0052c6e6
    RET                                 ; 0052c6e7
    PUSH EDI                            ; 0052c6e8
        ;   Label: LAB_0052c6e8
    MOV dword ptr [EBX + 0x100],EAX     ; 0052c6e9
    MOV dword ptr [EBX + 0x104],ESI     ; 0052c6ef
    MOV dword ptr [EBX + 0x108],EAX     ; 0052c6f5
    PUSH 0x5949a0                       ; 0052c6fb | = "WavOutWrite: "
    MOV dword ptr [EBX + 0x10c],EAX     ; 0052c700
    CALL FUN_004ee370                   ; 0052c706
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined FUN_004ee370()
    ADD ESP,0x4                         ; 0052c70b
    MOV EDI,EBX                         ; 0052c70e
    MOV ESI,EAX                         ; 0052c710
    PUSH EDI                            ; 0052c712
    MOV AL,byte ptr [ESI]               ; 0052c713
        ;   Label: LAB_0052c713
    MOV byte ptr [EDI],AL               ; 0052c715
    CMP AL,0x0                          ; 0052c717
    JZ 0x0052c72b                       ; 0052c719
        ;   XREF to: 0052c72b (CONDITIONAL_JUMP)  ; LAB_0052c72b
    MOV AL,byte ptr [ESI + 0x1]         ; 0052c71b
    ADD ESI,0x2                         ; 0052c71e
    MOV byte ptr [EDI + 0x1],AL         ; 0052c721
    ADD EDI,0x2                         ; 0052c724
    CMP AL,0x0                          ; 0052c727
    JNZ 0x0052c713                      ; 0052c729
        ;   XREF to: 0052c713 (CONDITIONAL_JUMP)  ; LAB_0052c713
    POP EDI                             ; 0052c72b
        ;   Label: LAB_0052c72b
    LEA ESI,[ESP + 0xc]                 ; 0052c72c
    PUSH EDI                            ; 0052c730
    SUB ECX,ECX                         ; 0052c731
    DEC ECX                             ; 0052c733
    MOV AL,0x0                          ; 0052c734
    SCASB.REPNE ES:EDI                  ; 0052c736
    DEC EDI                             ; 0052c738
    MOV AL,byte ptr [ESI]               ; 0052c739
        ;   Label: LAB_0052c739
    MOV byte ptr [EDI],AL               ; 0052c73b
    CMP AL,0x0                          ; 0052c73d
    JZ 0x0052c751                       ; 0052c73f
        ;   XREF to: 0052c751 (CONDITIONAL_JUMP)  ; LAB_0052c751
    MOV AL,byte ptr [ESI + 0x1]         ; 0052c741
    ADD ESI,0x2                         ; 0052c744
    MOV byte ptr [EDI + 0x1],AL         ; 0052c747
    ADD EDI,0x2                         ; 0052c74a
    CMP AL,0x0                          ; 0052c74d
    JNZ 0x0052c739                      ; 0052c74f
        ;   XREF to: 0052c739 (CONDITIONAL_JUMP)  ; LAB_0052c739
    POP EDI                             ; 0052c751
        ;   Label: LAB_0052c751
    MOV EAX,0x1                         ; 0052c752
    POP EDI                             ; 0052c757
    ADD ESP,0x34                        ; 0052c758
    POP ESI                             ; 0052c75b
    POP EBX                             ; 0052c75c
    RET                                 ; 0052c75d

