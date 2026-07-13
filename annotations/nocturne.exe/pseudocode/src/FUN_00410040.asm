; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410040(int param_1)
;
;
; Referenced Globals:
;   string s_modelName_005784d5
;   string s_collideWithMe_005784df
;   string s_groundType_005784ed
;   undefined4 DAT_005acf20
;
; Called Functions:
;   FUN_0040c900
;   FUN_0040ca00
;   FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410040
        ;   Label: FUN_00410040
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410041
    PUSH EBX                            ; 00410045
    CALL FUN_0040d2d0                   ; 00410046
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 0041004b
    PUSH 0x5784d5                       ; 0041004e | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00410053
    PUSH EAX                            ; 00410059
    CALL FUN_0040ca00                   ; 0041005a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ca00()
    ADD ESP,0x8                         ; 0041005f
    PUSH 0x5784df                       ; 00410062 | = "collideWithMe"
    LEA EAX,[EBX + 0x2cc]               ; 00410067
    PUSH EAX                            ; 0041006d
    CALL FUN_0040c900                   ; 0041006e
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    MOV EDX,dword ptr [0x005acf20]      ; 00410073 | DAT_005acf20
    ADD ESP,0x8                         ; 00410079
    CMP EDX,0x2                         ; 0041007c
    JGE 0x00410083                      ; 0041007f
        ;   XREF to: 00410083 (CONDITIONAL_JUMP)  ; LAB_00410083
    POP EBX                             ; 00410081
    RET                                 ; 00410082
    PUSH 0x5784ed                       ; 00410083 | = "groundType"
        ;   Label: LAB_00410083
    ADD EBX,0x2d0                       ; 00410088
    PUSH EBX                            ; 0041008e
    CALL FUN_0040c900                   ; 0041008f
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 00410094
    POP EBX                             ; 00410097
    RET                                 ; 00410098

