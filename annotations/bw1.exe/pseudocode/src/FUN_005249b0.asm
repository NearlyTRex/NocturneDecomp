; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005249b0(int *param_1)
;
;
; XREF[1]:
;   FUN_0042c7d0 at 0042c7da
;
; Called Functions:
;   FUN_00524770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005249b0
        ;   Label: FUN_005249b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005249b1
    CMP dword ptr [EBX],0x0             ; 005249b5
    JZ 0x005249c6                       ; 005249b8
        ;   XREF to: 005249c6 (CONDITIONAL_JUMP)  ; LAB_005249c6
    CMP byte ptr [EBX + 0x30],0x0       ; 005249ba
    JZ 0x005249c8                       ; 005249be
        ;   XREF to: 005249c8 (CONDITIONAL_JUMP)  ; LAB_005249c8
    MOV dword ptr [EBX],0x0             ; 005249c0
    POP EBX                             ; 005249c6
        ;   Label: LAB_005249c6
    RET                                 ; 005249c7
    PUSH EDI                            ; 005249c8
        ;   Label: LAB_005249c8
    PUSH ESI                            ; 005249c9
    PUSH EBX                            ; 005249ca
    CALL FUN_00524770                   ; 005249cb
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 005249d0
    LEA EDI,[EBX + 0x30]                ; 005249d3
    MOV ESI,EAX                         ; 005249d6
    PUSH EDI                            ; 005249d8
    MOV AL,byte ptr [ESI]               ; 005249d9
        ;   Label: LAB_005249d9
    MOV byte ptr [EDI],AL               ; 005249db
    CMP AL,0x0                          ; 005249dd
    JZ 0x005249f1                       ; 005249df
        ;   XREF to: 005249f1 (CONDITIONAL_JUMP)  ; LAB_005249f1
    MOV AL,byte ptr [ESI + 0x1]         ; 005249e1
    ADD ESI,0x2                         ; 005249e4
    MOV byte ptr [EDI + 0x1],AL         ; 005249e7
    ADD EDI,0x2                         ; 005249ea
    CMP AL,0x0                          ; 005249ed
    JNZ 0x005249d9                      ; 005249ef
        ;   XREF to: 005249d9 (CONDITIONAL_JUMP)  ; LAB_005249d9
    POP EDI                             ; 005249f1
        ;   Label: LAB_005249f1
    POP ESI                             ; 005249f2
    POP EDI                             ; 005249f3
    MOV dword ptr [EBX],0x0             ; 005249f4
    POP EBX                             ; 005249fa
    RET                                 ; 005249fb

