; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410bb0(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00410bf0 at 00410ca4
;   FUN_004114a0 at 00411521
;
; Called Functions:
;   FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410bb0
        ;   Label: FUN_00410bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410bb1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00410bb5
    MOV EDX,dword ptr [EBX + 0x1fb14]   ; 00410bb9
    CMP EAX,EDX                         ; 00410bbf
    JNZ 0x00410bc7                      ; 00410bc1
        ;   XREF to: 00410bc7 (CONDITIONAL_JUMP)  ; LAB_00410bc7
    TEST EDX,EDX                        ; 00410bc3
    JNZ 0x00410bc9                      ; 00410bc5
        ;   XREF to: 00410bc9 (CONDITIONAL_JUMP)  ; LAB_00410bc9
    POP EBX                             ; 00410bc7
        ;   Label: LAB_00410bc7
    RET                                 ; 00410bc8
    PUSH 0x1                            ; 00410bc9
        ;   Label: LAB_00410bc9
    PUSH 0x7                            ; 00410bcb
    LEA EAX,[EBX + 0x150]               ; 00410bcd
    PUSH EAX                            ; 00410bd3
    CALL FUN_004e16b0                   ; 00410bd4
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 00410bd9
    MOV dword ptr [EBX + 0x1fb14],0x0   ; 00410bdc
    POP EBX                             ; 00410be6
    RET                                 ; 00410be7

