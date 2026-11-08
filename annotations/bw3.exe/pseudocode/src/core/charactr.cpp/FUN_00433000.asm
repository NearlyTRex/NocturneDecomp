; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00433000(int param_1)
;
; Local Variables:
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x24]:1  local_24
; undefined        Stack[-0x14]:1  local_14
;
; XREF[1]:
;   FUN_00433350 at 0043335f
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005b86e2
;   TerminatedCString s_CCharacter_applyLookAt_n_005b86f7
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_0054d880
;   FUN_00585990
;   FUN_00585b20
;   FUN_00585cd0
;   FUN_00585d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433000
        ;   Label: FUN_00433000
    SUB ESP,0x80                        ; 00433001
    MOV EBX,dword ptr [ESP + 0x88]      ; 00433007
    FLD float ptr [EBX + 0x2770]        ; 0043300e
    FLDZ                                ; 00433014
    FCOMPP                              ; 00433016
    FNSTSW AX                           ; 00433018
    SAHF                                ; 0043301a
    JNC 0x004330e2                      ; 0043301b
        ;   XREF to: 004330e2 (CONDITIONAL_JUMP)  ; LAB_004330e2
    PUSH EDI                            ; 00433021
    PUSH ESI                            ; 00433022
    CMP dword ptr [EBX + 0x2774],0x0    ; 00433023
    JL 0x004330ea                       ; 0043302a
        ;   XREF to: 004330ea (CONDITIONAL_JUMP)  ; LAB_004330ea
    PUSH dword ptr [EBX + 0x276c]       ; 00433030
        ;   Label: LAB_00433030
    LEA ESI,[ESP + 0x6c]                ; 00433036
    LEA EDI,[ESP + 0x3c]                ; 0043303a
    CALL FUN_00585cd0                   ; 0043303e
        ;   XREF to: 00585cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00585cd0()
    LEA ESI,[ESP + 0x6c]                ; 00433043
    ADD ESP,0x4                         ; 00433047
    MOVSD ES:EDI,ESI                    ; 0043304a
    MOVSD ES:EDI,ESI                    ; 0043304b
    MOVSD ES:EDI,ESI                    ; 0043304c
    MOVSD ES:EDI,ESI                    ; 0043304d
    LEA ESI,[ESP + 0x38]                ; 0043304e
    PUSH ESI                            ; 00433052
    PUSH dword ptr [EBX + 0x2768]       ; 00433053
    LEA ESI,[ESP + 0x10]                ; 00433059
    LEA EDI,[ESP + 0x30]                ; 0043305d
    CALL FUN_00585d10                   ; 00433061
        ;   XREF to: 00585d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00585d10()
    LEA ESI,[ESP + 0x10]                ; 00433066
    ADD ESP,0x4                         ; 0043306a
    MOVSD ES:EDI,ESI                    ; 0043306d
    MOVSD ES:EDI,ESI                    ; 0043306e
    MOVSD ES:EDI,ESI                    ; 0043306f
    MOVSD ES:EDI,ESI                    ; 00433070
    LEA ESI,[ESP + 0x2c]                ; 00433071
    PUSH ESI                            ; 00433075
    LEA ESI,[ESP + 0x60]                ; 00433076
    LEA EDI,[ESP + 0x20]                ; 0043307a
    CALL FUN_00585990                   ; 0043307e
        ;   XREF to: 00585990 (UNCONDITIONAL_CALL)  ; undefined FUN_00585990()
    LEA ESI,[ESP + 0x60]                ; 00433083
    ADD ESP,0x8                         ; 00433087
    MOVSD ES:EDI,ESI                    ; 0043308a
    MOVSD ES:EDI,ESI                    ; 0043308b
    MOVSD ES:EDI,ESI                    ; 0043308c
    MOVSD ES:EDI,ESI                    ; 0043308d
    MOV EDI,dword ptr [EBX + 0x2774]    ; 0043308e
    PUSH EDI                            ; 00433094
    LEA ESI,[ESP + 0x1c]                ; 00433095
    PUSH dword ptr [EBX + 0x2770]       ; 00433099
    PUSH ESI                            ; 0043309f
    MOV ESI,EDI                         ; 004330a0
    LEA EAX,[EBX + 0x808]               ; 004330a2
    SHL ESI,0x4                         ; 004330a8
    ADD ESI,EAX                         ; 004330ab
    PUSH ESI                            ; 004330ad
    LEA ESI,[ESP + 0x88]                ; 004330ae
    LEA EDI,[ESP + 0x58]                ; 004330b5
    CALL FUN_00585b20                   ; 004330b9
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00585b20()
    LEA ESI,[ESP + 0x88]                ; 004330be
    ADD ESP,0xc                         ; 004330c5
    MOVSD ES:EDI,ESI                    ; 004330c8
    MOVSD ES:EDI,ESI                    ; 004330c9
    MOVSD ES:EDI,ESI                    ; 004330ca
    MOVSD ES:EDI,ESI                    ; 004330cb
    LEA ESI,[ESP + 0x4c]                ; 004330cc
    PUSH ESI                            ; 004330d0
    ADD EBX,0x158                       ; 004330d1
    PUSH EBX                            ; 004330d7
    CALL FUN_0054d880                   ; 004330d8
        ;   XREF to: 0054d880 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d880()
    ADD ESP,0xc                         ; 004330dd
    POP ESI                             ; 004330e0
    POP EDI                             ; 004330e1
    ADD ESP,0x80                        ; 004330e2
        ;   Label: LAB_004330e2
    POP EBX                             ; 004330e8
    RET                                 ; 004330e9
    PUSH EBX                            ; 004330ea
        ;   Label: LAB_004330ea
    MOV ECX,0x5b86e2                    ; 004330eb | = "..\\core\\charactr.cpp"
    MOV ESI,0x117b                      ; 004330f0
    PUSH 0x5b86f7                       ; 004330f5 | = "CCharacter::applyLookAt - never set l..."
    MOV dword ptr [0x01d71de0],ECX      ; 004330fa | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00433100 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00433106
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 0043310b
    JMP 0x00433030                      ; 0043310e
        ;   XREF to: 00433030 (UNCONDITIONAL_JUMP)  ; LAB_00433030

