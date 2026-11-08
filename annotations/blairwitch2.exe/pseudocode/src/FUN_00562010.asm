; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00562010(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005eb150
;   undefined4 DAT_005eb155
;   TerminatedCString s_width_005eb159
;   TerminatedCString s_count_005eb15f
;   TerminatedCString s_groundType_005eb165
;
; Called Functions:
;   FUN_0040b8e0
;   FUN_0040b960
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562010
        ;   Label: FUN_00562010
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562011
    PUSH EBX                            ; 00562015
    CALL FUN_0040c330                   ; 00562016
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 0056201b
    PUSH 0x5eb150                       ; 0056201e | DAT_005eb150
    LEA EAX,[EBX + 0x2b4]               ; 00562023
    PUSH EAX                            ; 00562029
    CALL FUN_0040b8e0                   ; 0056202a
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0056202f
    PUSH 0x5eb155                       ; 00562032 | DAT_005eb155
    LEA EAX,[EBX + 0x2b8]               ; 00562037
    PUSH EAX                            ; 0056203d
    CALL FUN_0040b8e0                   ; 0056203e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00562043
    PUSH 0x5eb159                       ; 00562046 | = "width"
    LEA EAX,[EBX + 0x2bc]               ; 0056204b
    PUSH EAX                            ; 00562051
    CALL FUN_0040b8e0                   ; 00562052
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 00562057
    PUSH 0x5eb15f                       ; 0056205a | = "count"
    LEA EAX,[EBX + 0x2c8]               ; 0056205f
    PUSH EAX                            ; 00562065
    CALL FUN_0040b960                   ; 00562066
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0056206b
    PUSH 0x5eb165                       ; 0056206e | = "groundType"
    ADD EBX,0xb8c                       ; 00562073
    PUSH EBX                            ; 00562079
    CALL FUN_0040b960                   ; 0056207a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0056207f
    POP EBX                             ; 00562082
    RET                                 ; 00562083

