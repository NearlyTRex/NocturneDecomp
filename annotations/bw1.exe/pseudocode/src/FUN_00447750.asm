; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00447750(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00539400
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00447750
        ;   Label: FUN_00447750
    PUSH EDI                            ; 00447751
    MOV EDX,dword ptr [ESP + 0xc]       ; 00447752
    PUSH EDX                            ; 00447756
    CALL FUN_00539400                   ; 00447757
        ;   XREF to: 00539400 (UNCONDITIONAL_CALL)  ; undefined FUN_00539400()
    MOV dword ptr [EAX + 0x154],0x5fdf64 ; 0044775c
    MOV ESI,0x5d70f8                    ; 00447766
    MOV dword ptr [EAX + 0x728],0x3f800000 ; 0044776b
    MOV EDX,EAX                         ; 00447775
    MOV dword ptr [EAX + 0x730],0x3f800000 ; 00447777
    ADD ESP,0x4                         ; 00447781
    MOV dword ptr [EAX + 0x72c],0x3dcccccd ; 00447784
    LEA EDI,[EAX + 0x740]               ; 0044778e
    MOV dword ptr [EAX + 0x808],0x0     ; 00447794
    PUSH EDI                            ; 0044779e
    MOV AL,byte ptr [ESI]               ; 0044779f
        ;   Label: LAB_0044779f
    MOV byte ptr [EDI],AL               ; 004477a1
    CMP AL,0x0                          ; 004477a3
    JZ 0x004477b7                       ; 004477a5
        ;   XREF to: 004477b7 (CONDITIONAL_JUMP)  ; LAB_004477b7
    MOV AL,byte ptr [ESI + 0x1]         ; 004477a7
    ADD ESI,0x2                         ; 004477aa
    MOV byte ptr [EDI + 0x1],AL         ; 004477ad
    ADD EDI,0x2                         ; 004477b0
    CMP AL,0x0                          ; 004477b3
    JNZ 0x0044779f                      ; 004477b5
        ;   XREF to: 0044779f (CONDITIONAL_JUMP)  ; LAB_0044779f
    POP EDI                             ; 004477b7
        ;   Label: LAB_004477b7
    MOV ESI,0x5d70fd                    ; 004477b8
    LEA EDI,[EDX + 0x7a4]               ; 004477bd
    PUSH EDI                            ; 004477c3
    MOV AL,byte ptr [ESI]               ; 004477c4
        ;   Label: LAB_004477c4
    MOV byte ptr [EDI],AL               ; 004477c6
    CMP AL,0x0                          ; 004477c8
    JZ 0x004477dc                       ; 004477ca
        ;   XREF to: 004477dc (CONDITIONAL_JUMP)  ; LAB_004477dc
    MOV AL,byte ptr [ESI + 0x1]         ; 004477cc
    ADD ESI,0x2                         ; 004477cf
    MOV byte ptr [EDI + 0x1],AL         ; 004477d2
    ADD EDI,0x2                         ; 004477d5
    CMP AL,0x0                          ; 004477d8
    JNZ 0x004477c4                      ; 004477da
        ;   XREF to: 004477c4 (CONDITIONAL_JUMP)  ; LAB_004477c4
    POP EDI                             ; 004477dc
        ;   Label: LAB_004477dc
    MOV dword ptr [EDX + 0x734],0x0     ; 004477dd
    MOV dword ptr [EDX + 0x738],0x0     ; 004477e7
    MOV dword ptr [EDX + 0x73c],0x3f800000 ; 004477f1
    MOV EAX,EDX                         ; 004477fb
    MOV byte ptr [EDX + 0x80c],0x0      ; 004477fd
    POP EDI                             ; 00447804
    POP ESI                             ; 00447805
    RET                                 ; 00447806

