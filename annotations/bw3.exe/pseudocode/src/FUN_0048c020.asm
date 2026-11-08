; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048c020(undefined4 *param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004bf4b0 at 004bf7fc
;
; Referenced Globals:
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01d21620
;
; Called Functions:
;   FUN_00495280
;   FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c020
        ;   Label: FUN_0048c020
    PUSH ESI                            ; 0048c021
    PUSH EDI                            ; 0048c022
    PUSH EBP                            ; 0048c023
    MOV EBP,ESP                         ; 0048c024
    SUB ESP,0x10                        ; 0048c026
    AND ESP,0xfffffff8                  ; 0048c029
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048c02c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048c02f
    MOV ECX,0xc80                       ; 0048c032
    LEA ESI,[EBX + 0x4]                 ; 0048c037
    MOV EAX,dword ptr [EAX]             ; 0048c03a
    LEA EDI,[EBX + 0xc88]               ; 0048c03c
    MOV dword ptr [EBX + 0xc84],EAX     ; 0048c042
    PUSH EDI                            ; 0048c048
    MOV EAX,ECX                         ; 0048c049
    SHR ECX,0x2                         ; 0048c04b
    MOVSD.REP ES:EDI,ESI                ; 0048c04e
    MOV CL,AL                           ; 0048c050
    AND CL,0x3                          ; 0048c052
    MOVSB.REP ES:EDI,ESI                ; 0048c055
    POP EDI                             ; 0048c057
    MOV EAX,[0x005fe9dc]                ; 0048c058 | DAT_005fe9dc
    MOV dword ptr [EBX],0x0             ; 0048c05d
    FLD float ptr [EAX + 0x314]         ; 0048c063 | DAT_01d21620
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048c069
    FSTP float ptr [ESP]                ; 0048c06c
    MOV EDX,dword ptr [EAX + 0x3210]    ; 0048c06f
    XOR EBX,EBX                         ; 0048c075
    TEST EDX,EDX                        ; 0048c077
    JLE 0x0048c122                      ; 0048c079
        ;   XREF to: 0048c122 (CONDITIONAL_JUMP)  ; LAB_0048c122
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048c07f
    ADD EAX,0x3214                      ; 0048c082
    ADD ESI,0x3354                      ; 0048c087
    MOV EDI,EAX                         ; 0048c08d
    MOV dword ptr [ESP + 0x4],ESI       ; 0048c08f
    ADD EAX,0x20                        ; 0048c093
    MOV ESI,dword ptr [EBP + 0x14]      ; 0048c096
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c099
    FLD float ptr [ESI + 0x3354]        ; 0048c09d
        ;   Label: LAB_0048c09d
    LEA EAX,[EBX*0x4 + 0x0]             ; 0048c0a3
    FSUB float ptr [ESP]                ; 0048c0aa
    MOV dword ptr [ESP + 0x8],EAX       ; 0048c0ad
    FST float ptr [ESI + 0x3354]        ; 0048c0b1
    FLDZ                                ; 0048c0b7
    FCOMPP                              ; 0048c0b9
    FNSTSW AX                           ; 0048c0bb
    SAHF                                ; 0048c0bd
    JC 0x0048c135                       ; 0048c0be
        ;   XREF to: 0048c135 (CONDITIONAL_JUMP)  ; LAB_0048c135
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048c0c0
    MOV EDX,dword ptr [EAX + 0x3210]    ; 0048c0c3
    DEC EDX                             ; 0048c0c9
    MOV dword ptr [EAX + 0x3210],EDX    ; 0048c0ca
    MOV EAX,EDX                         ; 0048c0d0
    SUB EAX,EBX                         ; 0048c0d2
    SHL EAX,0x5                         ; 0048c0d4
    PUSH EAX                            ; 0048c0d7
    MOV ECX,dword ptr [ESP + 0x10]      ; 0048c0d8
    PUSH ECX                            ; 0048c0dc
    PUSH EDI                            ; 0048c0dd
    CALL FUN_005a54c0                   ; 0048c0de
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    ADD ESP,0xc                         ; 0048c0e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048c0e6
    MOV EAX,dword ptr [EAX + 0x3210]    ; 0048c0e9
    SUB EAX,EBX                         ; 0048c0ef
    SHL EAX,0x2                         ; 0048c0f1
    PUSH EAX                            ; 0048c0f4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048c0f5
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048c0f9
    ADD EAX,0x4                         ; 0048c0fd
    ADD EAX,EDX                         ; 0048c100
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048c102
    PUSH EAX                            ; 0048c106
    LEA EAX,[EDX + ECX*0x1]             ; 0048c107
    PUSH EAX                            ; 0048c10a
    CALL FUN_005a54c0                   ; 0048c10b
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a54c0()
    ADD ESP,0xc                         ; 0048c110
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048c113
        ;   Label: LAB_0048c113
    CMP EBX,dword ptr [EAX + 0x3210]    ; 0048c116
    JL 0x0048c09d                       ; 0048c11c
        ;   XREF to: 0048c09d (CONDITIONAL_JUMP)  ; LAB_0048c09d
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048c122
        ;   Label: LAB_0048c122
    PUSH EBX                            ; 0048c125
    CALL FUN_00495280                   ; 0048c126
        ;   XREF to: 00495280 (UNCONDITIONAL_CALL)  ; undefined FUN_00495280()
    ADD ESP,0x4                         ; 0048c12b
    MOV ESP,EBP                         ; 0048c12e
    POP EBP                             ; 0048c130
    POP EDI                             ; 0048c131
    POP ESI                             ; 0048c132
    POP EBX                             ; 0048c133
    RET                                 ; 0048c134
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048c135
        ;   Label: LAB_0048c135
    ADD EDI,0x20                        ; 0048c139
    INC EBX                             ; 0048c13c
    ADD EAX,0x20                        ; 0048c13d
    ADD ESI,0x4                         ; 0048c140
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c143
    JMP 0x0048c113                      ; 0048c147
        ;   XREF to: 0048c113 (UNCONDITIONAL_JUMP)  ; LAB_0048c113

