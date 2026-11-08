; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d2da0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_ScatDazzle_005da3ad+1
;
; Called Functions:
;   FUN_005108d0
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2da0
        ;   Label: FUN_004d2da0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d2da1
    PUSH EBX                            ; 004d2da5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d2da6
    CALL dword ptr [EAX + 0x114]        ; 004d2dac
    ADD ESP,0x4                         ; 004d2db2
    CMP EAX,0x1                         ; 004d2db5
    JGE 0x004d2dbc                      ; 004d2db8
        ;   XREF to: 004d2dbc (CONDITIONAL_JUMP)  ; LAB_004d2dbc
    POP EBX                             ; 004d2dba
        ;   Label: LAB_004d2dba
    RET                                 ; 004d2dbb
    PUSH 0x5da3ae                       ; 004d2dbc | s_ScatDazzle_005da3ad+1
        ;   Label: LAB_004d2dbc
    PUSH EBX                            ; 004d2dc1
    CALL FUN_005b8130                   ; 004d2dc2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004d2dc7
    TEST EAX,EAX                        ; 004d2dca
    JZ 0x004d2dba                       ; 004d2dcc
        ;   XREF to: 004d2dba (CONDITIONAL_JUMP)  ; LAB_004d2dba
    CMP dword ptr [ESP + 0xc],0x0       ; 004d2dce
    JZ 0x004d2ddf                       ; 004d2dd3
        ;   XREF to: 004d2ddf (CONDITIONAL_JUMP)  ; LAB_004d2ddf
    MOV dword ptr [EBX + 0x2568],0x1    ; 004d2dd5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d2ddf
        ;   Label: LAB_004d2ddf
    PUSH ECX                            ; 004d2de3
    PUSH EBX                            ; 004d2de4
    CALL FUN_005108d0                   ; 004d2de5
        ;   XREF to: 005108d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005108d0()
    ADD ESP,0x8                         ; 004d2dea
    POP EBX                             ; 004d2ded
    RET                                 ; 004d2dee

