; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005348c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00595182
;   undefined4 DAT_00595187
;   string s_width_0059518b
;   string s_count_00595191
;   string s_groundType_00595197
;
; Called Functions:
;   FUN_0040c880
;   FUN_0040c900
;   FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005348c0
        ;   Label: FUN_005348c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005348c1
    PUSH EBX                            ; 005348c5
    CALL FUN_0040d2d0                   ; 005348c6
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d2d0()
    ADD ESP,0x4                         ; 005348cb
    PUSH 0x595182                       ; 005348ce | DAT_00595182
    LEA EAX,[EBX + 0x150]               ; 005348d3
    PUSH EAX                            ; 005348d9
    CALL FUN_0040c880                   ; 005348da
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 005348df
    PUSH 0x595187                       ; 005348e2 | DAT_00595187
    LEA EAX,[EBX + 0x154]               ; 005348e7
    PUSH EAX                            ; 005348ed
    CALL FUN_0040c880                   ; 005348ee
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 005348f3
    PUSH 0x59518b                       ; 005348f6 | = "width"
    LEA EAX,[EBX + 0x158]               ; 005348fb
    PUSH EAX                            ; 00534901
    CALL FUN_0040c880                   ; 00534902
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c880()
    ADD ESP,0x8                         ; 00534907
    PUSH 0x595191                       ; 0053490a | = "count"
    LEA EAX,[EBX + 0x164]               ; 0053490f
    PUSH EAX                            ; 00534915
    CALL FUN_0040c900                   ; 00534916
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0053491b
    PUSH 0x595197                       ; 0053491e | = "groundType"
    ADD EBX,0xa28                       ; 00534923
    PUSH EBX                            ; 00534929
    CALL FUN_0040c900                   ; 0053492a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c900()
    ADD ESP,0x8                         ; 0053492f
    POP EBX                             ; 00534932
    RET                                 ; 00534933

