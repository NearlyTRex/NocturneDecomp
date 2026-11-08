; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3860(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_004a37c0 at 004a3806
;   FUN_004a3820 at 004a3826
;   FUN_004a50b0 at 004a50e5
;
; Called Functions:
;   FUN_0040d540
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3860
        ;   Label: FUN_004a3860
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a3861
    LEA EAX,[EBX + 0x70]                ; 004a3865
    MOV dword ptr [EBX],0x0             ; 004a3868
    PUSH EAX                            ; 004a386e
    MOV dword ptr [EBX + 0x9c],0x0      ; 004a386f
    CALL FUN_0040d540                   ; 004a3879
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    ADD ESP,0x4                         ; 004a387e
    LEA EAX,[EBX + 0x88]                ; 004a3881
    PUSH EAX                            ; 004a3887
    CALL FUN_0040d540                   ; 004a3888
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d540()
    MOV dword ptr [EBX + 0x964],0xffffffff ; 004a388d
    MOV dword ptr [EBX + 0x968],0xffffffff ; 004a3897
    MOV dword ptr [EBX + 0x96c],0x1     ; 004a38a1
    ADD ESP,0x4                         ; 004a38ab
    MOV EDX,dword ptr [EBX + 0x84]      ; 004a38ae
    MOV byte ptr [EBX + 0x4],0x0        ; 004a38b4
    TEST EDX,EDX                        ; 004a38b8
    JNZ 0x004a38be                      ; 004a38ba
        ;   XREF to: 004a38be (CONDITIONAL_JUMP)  ; LAB_004a38be
    POP EBX                             ; 004a38bc
    RET                                 ; 004a38bd
    PUSH EDX                            ; 004a38be
        ;   Label: LAB_004a38be
    CALL FUN_005b86a0                   ; 004a38bf
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 004a38c4
    MOV dword ptr [EBX + 0x84],0x0      ; 004a38c7
    POP EBX                             ; 004a38d1
    RET                                 ; 004a38d2

