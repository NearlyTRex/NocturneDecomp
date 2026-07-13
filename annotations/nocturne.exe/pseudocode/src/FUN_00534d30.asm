; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00534d30(int param_1)
;
;
; Referenced Globals:
;   string s_destActor_005951b7
;
; Called Functions:
;   FUN_0040c980
;   FUN_0041ec60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00534d30
        ;   Label: FUN_00534d30
    PUSH EDX                            ; 00534d34
    CALL FUN_0041ec60                   ; 00534d35
        ;   XREF to: 0041ec60 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ec60()
    ADD ESP,0x4                         ; 00534d3a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00534d3d
    PUSH 0x5951b7                       ; 00534d41 | = "destActor"
    ADD EAX,0x664                       ; 00534d46
    PUSH EAX                            ; 00534d4b
    CALL FUN_0040c980                   ; 00534d4c
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c980()
    ADD ESP,0x8                         ; 00534d51
    RET                                 ; 00534d54

