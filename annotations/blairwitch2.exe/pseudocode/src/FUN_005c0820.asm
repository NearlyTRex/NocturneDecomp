; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c0820(uint param_1)
;
;
; XREF[2]:
;   FUN_005bebb0 at 005bebe1
;   FUN_005bfb00 at 005bfb43
;
; Referenced Globals:
;   undefined4 DAT_0061f480
;   undefined4 DAT_0061f484
;   undefined4 DAT_0061f485
;   void* PTR_DAT_0061f4d4 = 0061f484
;
; Called Functions:
;   FUN_005c39c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0820
        ;   Label: FUN_005c0820
    PUSH ESI                            ; 005c0821
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c0822
    CMP EBX,dword ptr [0x0061f480]      ; 005c0826 | DAT_0061f480
    JC 0x005c0833                       ; 005c082c
        ;   XREF to: 005c0833 (CONDITIONAL_JUMP)  ; LAB_005c0833
    XOR EAX,EAX                         ; 005c082e
    POP ESI                             ; 005c0830
    POP EBX                             ; 005c0831
    RET                                 ; 005c0832
    CMP EBX,0x3                         ; 005c0833
        ;   Label: LAB_005c0833
    JGE 0x005c086d                      ; 005c0836
        ;   XREF to: 005c086d (CONDITIONAL_JUMP)  ; LAB_005c086d
    MOV EAX,[0x0061f4d4]                ; 005c0838 | PTR_DAT_0061f4d4
    LEA ESI,[EBX*0x4 + 0x0]             ; 005c083d
    ADD EAX,ESI                         ; 005c0844
    MOV DL,byte ptr [EAX + 0x1]         ; 005c0846 | DAT_0061f485
    TEST DL,0x40                        ; 005c0849
    JNZ 0x005c086d                      ; 005c084c
        ;   XREF to: 005c086d (CONDITIONAL_JUMP)  ; LAB_005c086d
    MOV DH,DL                           ; 005c084e
    OR DH,0x40                          ; 005c0850
    PUSH EBX                            ; 005c0853
    MOV byte ptr [EAX + 0x1],DH         ; 005c0854 | DAT_0061f485
    CALL FUN_005c39c0                   ; 005c0857
        ;   XREF to: 005c39c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c39c0()
    ADD ESP,0x4                         ; 005c085c
    TEST EAX,EAX                        ; 005c085f
    JZ 0x005c086d                       ; 005c0861
        ;   XREF to: 005c086d (CONDITIONAL_JUMP)  ; LAB_005c086d
    MOV EAX,[0x0061f4d4]                ; 005c0863 | PTR_DAT_0061f4d4
    OR byte ptr [ESI + EAX*0x1 + 0x1],0x20 ; 005c0868 | DAT_0061f485
    MOV EAX,[0x0061f4d4]                ; 005c086d | PTR_DAT_0061f4d4
        ;   Label: LAB_005c086d
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005c0872 | DAT_0061f484
    POP ESI                             ; 005c0875
    POP EBX                             ; 005c0876
    RET                                 ; 005c0877

