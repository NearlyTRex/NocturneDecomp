; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004af120(void)
;
; Local Variables:
; undefined        Stack[-0x6c]:1  local_6c
;
; XREF[1]:
;   FUN_004b5ac0 at 004b5b0c
;
; Referenced Globals:
;   TerminatedCString s_leaf_d_kfm_005df26c
;
; Called Functions:
;   FUN_004688e0
;   FUN_00468950
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004af120
        ;   Label: FUN_004af120
    PUSH ESI                            ; 004af121
    SUB ESP,0x64                        ; 004af122
    MOV EBX,0x1c576a8                   ; 004af125
    XOR ESI,ESI                         ; 004af12a
    INC ESI                             ; 004af12c
        ;   Label: LAB_004af12c
    PUSH ESI                            ; 004af12d
    PUSH 0x5df26c                       ; 004af12e | = "leaf%d.kfm"
    LEA EAX,[ESP + 0x8]                 ; 004af133
    PUSH EAX                            ; 004af137
    CALL FUN_005bfb40                   ; 004af138
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0xc                         ; 004af13d
    MOV EAX,ESP                         ; 004af140
    PUSH EAX                            ; 004af142
    PUSH EBX                            ; 004af143
    CALL FUN_00468950                   ; 004af144
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004af149
    PUSH EBX                            ; 004af14c
    CALL FUN_004688e0                   ; 004af14d
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004af152
    ADD EBX,0x17c                       ; 004af155
    CMP ESI,0x4                         ; 004af15b
    JL 0x004af12c                       ; 004af15e
        ;   XREF to: 004af12c (CONDITIONAL_JUMP)  ; LAB_004af12c
    ADD ESP,0x64                        ; 004af160
    POP ESI                             ; 004af163
    POP EBX                             ; 004af164
    RET                                 ; 004af165

