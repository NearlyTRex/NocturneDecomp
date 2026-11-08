; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc2c0(int *param_1)
;
;
; XREF[1]:
;   FUN_0042b430 at 0042b43a
;
; Called Functions:
;   FUN_004fc070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc2c0
        ;   Label: FUN_004fc2c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fc2c1
    CMP dword ptr [EBX],0x0             ; 004fc2c5
    JZ 0x004fc2d6                       ; 004fc2c8
        ;   XREF to: 004fc2d6 (CONDITIONAL_JUMP)  ; LAB_004fc2d6
    CMP byte ptr [EBX + 0x30],0x0       ; 004fc2ca
    JZ 0x004fc2d8                       ; 004fc2ce
        ;   XREF to: 004fc2d8 (CONDITIONAL_JUMP)  ; LAB_004fc2d8
    MOV dword ptr [EBX],0x0             ; 004fc2d0
    POP EBX                             ; 004fc2d6
        ;   Label: LAB_004fc2d6
    RET                                 ; 004fc2d7
    PUSH EDI                            ; 004fc2d8
        ;   Label: LAB_004fc2d8
    PUSH ESI                            ; 004fc2d9
    PUSH EBX                            ; 004fc2da
    CALL FUN_004fc070                   ; 004fc2db
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 004fc2e0
    LEA EDI,[EBX + 0x30]                ; 004fc2e3
    MOV ESI,EAX                         ; 004fc2e6
    PUSH EDI                            ; 004fc2e8
    MOV AL,byte ptr [ESI]               ; 004fc2e9
        ;   Label: LAB_004fc2e9
    MOV byte ptr [EDI],AL               ; 004fc2eb
    CMP AL,0x0                          ; 004fc2ed
    JZ 0x004fc301                       ; 004fc2ef
        ;   XREF to: 004fc301 (CONDITIONAL_JUMP)  ; LAB_004fc301
    MOV AL,byte ptr [ESI + 0x1]         ; 004fc2f1
    ADD ESI,0x2                         ; 004fc2f4
    MOV byte ptr [EDI + 0x1],AL         ; 004fc2f7
    ADD EDI,0x2                         ; 004fc2fa
    CMP AL,0x0                          ; 004fc2fd
    JNZ 0x004fc2e9                      ; 004fc2ff
        ;   XREF to: 004fc2e9 (CONDITIONAL_JUMP)  ; LAB_004fc2e9
    POP EDI                             ; 004fc301
        ;   Label: LAB_004fc301
    POP ESI                             ; 004fc302
    POP EDI                             ; 004fc303
    MOV dword ptr [EBX],0x0             ; 004fc304
    POP EBX                             ; 004fc30a
    RET                                 ; 004fc30b

