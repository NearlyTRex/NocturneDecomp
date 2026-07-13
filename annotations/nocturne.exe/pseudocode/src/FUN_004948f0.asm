; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004948f0(int param_1)
;
;
; Referenced Globals:
;   string s_whichPart_00581be0
;   string s_masterFrame_00581bea
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040c900
;   FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004948f0
        ;   Label: FUN_004948f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004948f1
    PUSH EBX                            ; 004948f5
    CALL FUN_0040d2d0                   ; 004948f6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 004948fb
    PUSH 0x581be0                       ; 004948fe | = "whichPart"
    LEA EAX,[EBX + 0x150]               ; 00494903
    PUSH EAX                            ; 00494909
    CALL FUN_0040c900                   ; 0049490a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0049490f
    PUSH 0x581bea                       ; 00494912 | = "masterFrame"
    LEA EAX,[EBX + 0x154]               ; 00494917
    PUSH EAX                            ; 0049491d
    CALL FUN_0040c880                   ; 0049491e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00494923
    POP EBX                             ; 00494926
    RET                                 ; 00494927

