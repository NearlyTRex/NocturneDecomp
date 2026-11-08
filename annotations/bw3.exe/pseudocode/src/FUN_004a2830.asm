; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2830(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00499eb0 at 00499ede
;
; Referenced Globals:
;   undefined4 DAT_01cefe7c
;   undefined4 DAT_01cefebc
;
; Called Functions:
;   FUN_0040cea0
;   FUN_00556930
;   FUN_00556a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2830
        ;   Label: FUN_004a2830
    PUSH EDI                            ; 004a2831
    PUSH EBP                            ; 004a2832
    MOV EAX,[0x01cefe7c]                ; 004a2833 | DAT_01cefe7c
    LEA EBX,[EAX*0x4 + 0x0]             ; 004a2838
    ADD EBX,EAX                         ; 004a283f
    SHL EBX,0x3                         ; 004a2841
    ADD EBX,EAX                         ; 004a2844
    SHL EBX,0x2                         ; 004a2846
    LEA EDX,[EAX + 0x1]                 ; 004a2849
    ADD EBX,0x1cefe80                   ; 004a284c
    MOV dword ptr [0x01cefe7c],EDX      ; 004a2852 | DAT_01cefe7c
    CMP EDX,0x40                        ; 004a2858
    JL 0x004a2867                       ; 004a285b
        ;   XREF to: 004a2867 (CONDITIONAL_JUMP)  ; LAB_004a2867
    PUSH ESI                            ; 004a285d
    XOR ESI,ESI                         ; 004a285e
    MOV dword ptr [0x01cefe7c],ESI      ; 004a2860 | DAT_01cefe7c
    POP ESI                             ; 004a2866
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a2867
        ;   Label: LAB_004a2867
    PUSH EDI                            ; 004a286b
    MOV EBP,dword ptr [ESP + 0x18]      ; 004a286c
    PUSH EBP                            ; 004a2870
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004a2871 | DAT_01cefebc
    PUSH EBX                            ; 004a2874
    CALL dword ptr [EAX]                ; 004a2875
    ADD ESP,0xc                         ; 004a2877
    PUSH 0xffff                         ; 004a287a
    PUSH 0xc000                         ; 004a287f
    CALL FUN_0040cea0                   ; 004a2884
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 004a2889
    MOV dword ptr [EBX + 0x40],EAX      ; 004a288c
    CMP dword ptr [ESP + 0x1c],0x0      ; 004a288f
    JNZ 0x004a28d0                      ; 004a2894
        ;   XREF to: 004a28d0 (CONDITIONAL_JUMP)  ; LAB_004a28d0
    MOV dword ptr [EBX + 0x44],0x2000   ; 004a2896
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004a289d
        ;   Label: LAB_004a289d
    PUSH EBX                            ; 004a28a1
    MOV dword ptr [EBX + 0x4c],EAX      ; 004a28a2
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a28a5
    MOV dword ptr [EBX + 0x48],0x0      ; 004a28a9
    PUSH EAX                            ; 004a28b0
    MOV dword ptr [EBX + 0x60],EAX      ; 004a28b1
    CALL FUN_00556930                   ; 004a28b4
        ;   XREF to: 00556930 (UNCONDITIONAL_CALL)  ; undefined FUN_00556930()
    ADD ESP,0x8                         ; 004a28b9
    LEA EAX,[EBX + 0xc]                 ; 004a28bc
    PUSH EAX                            ; 004a28bf
    MOV ECX,dword ptr [EBX + 0x60]      ; 004a28c0
    PUSH ECX                            ; 004a28c3
    CALL FUN_00556a30                   ; 004a28c4
        ;   XREF to: 00556a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00556a30()
    ADD ESP,0x8                         ; 004a28c9
    POP EBP                             ; 004a28cc
    POP EDI                             ; 004a28cd
    POP EBX                             ; 004a28ce
    RET                                 ; 004a28cf
    MOV dword ptr [EBX + 0x44],0x8000   ; 004a28d0
        ;   Label: LAB_004a28d0
    JMP 0x004a289d                      ; 004a28d7
        ;   XREF to: 004a289d (UNCONDITIONAL_JUMP)  ; LAB_004a289d

