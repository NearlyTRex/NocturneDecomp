; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005031c0(void)
;
;
; XREF[1]:
;   FUN_0050cc90 at 0050d01e
;
; Referenced Globals:
;   TerminatedCString s_Nocturne_R_Debug_editor_005e7085
;   TerminatedCString s_s_1_Play_a_mission_005e70a3
;   TerminatedCString s_Z_Display_memory_usage_i_005e70b5
;   undefined4 DAT_0061abc0
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf390
;
; Called Functions:
;   FUN_00401fe0
;   FUN_004032b0
;   FUN_004942e0
;   FUN_00498e40
;   FUN_004d7250
;   FUN_0057dc40
;   FUN_005acff0
;   FUN_005b2510
;   FUN_005c12b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005031c0
        ;   Label: FUN_005031c0
    PUSH ESI                            ; 005031c1
    PUSH EDI                            ; 005031c2
    SUB ESP,0x100                       ; 005031c3
    CALL FUN_004032b0                   ; 005031c9
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    XOR ESI,ESI                         ; 005031ce
    CALL FUN_0057dc40                   ; 005031d0
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dc40()
        ;   Label: LAB_005031d0
    PUSH ESI                            ; 005031d5
    PUSH ESI                            ; 005031d6
    PUSH 0x5e7085                       ; 005031d7 | = "Nocturne(R) Debug/editor Menu"
    CALL FUN_00401fe0                   ; 005031dc
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 005031e1
    PUSH 0x16                           ; 005031e4
    PUSH ESI                            ; 005031e6
    PUSH 0x5e70a3                       ; 005031e7 | = "1. Play a mission"
    CALL FUN_00401fe0                   ; 005031ec
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 005031f1
    PUSH 0xbb                           ; 005031f4
    PUSH ESI                            ; 005031f9
    PUSH 0x5e70b5                       ; 005031fa | = "Z. Display memory usage info"
    CALL FUN_00401fe0                   ; 005031ff
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_00401fe0()
    ADD ESP,0xc                         ; 00503204
    CALL FUN_005acff0                   ; 00503207
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acff0()
    CALL FUN_004032b0                   ; 0050320c
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    CALL FUN_005b2510                   ; 00503211
        ;   XREF to: 005b2510 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2510()
    AND EAX,0xff                        ; 00503216
    PUSH EAX                            ; 0050321b
    CALL FUN_005c12b0                   ; 0050321c
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c12b0()
    ADD ESP,0x4                         ; 00503221
    MOV EBX,EAX                         ; 00503224
    CMP EAX,0x34                        ; 00503226
    JNC 0x0050327c                      ; 00503229
        ;   XREF to: 0050327c (CONDITIONAL_JUMP)  ; LAB_0050327c
    CMP EAX,0x31                        ; 0050322b
    JNC 0x0050328c                      ; 0050322e
        ;   XREF to: 0050328c (CONDITIONAL_JUMP)  ; LAB_0050328c
    CMP EBX,0x1b                        ; 00503230
        ;   Label: LAB_00503230
    JNZ 0x005031d0                      ; 00503233
        ;   XREF to: 005031d0 (CONDITIONAL_JUMP)  ; LAB_005031d0
    CALL FUN_004032b0                   ; 00503235
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    ADD ESP,0x100                       ; 0050323a
    POP EDI                             ; 00503240
    POP ESI                             ; 00503241
    POP EBX                             ; 00503242
    RET                                 ; 00503243
    PUSH ESI                            ; 00503244
        ;   Label: LAB_00503244
    MOV EDI,dword ptr [0x0061d95c]      ; 00503245 | DAT_0061d95c
    PUSH EDI                            ; 0050324b | DAT_01ccf390
    CALL FUN_004d7250                   ; 0050324c
        ;   XREF to: 004d7250 (UNCONDITIONAL_CALL)  ; undefined FUN_004d7250()
    ADD ESP,0x8                         ; 00503251
    JMP 0x00503230                      ; 00503254
        ;   XREF to: 00503230 (UNCONDITIONAL_JUMP)  ; LAB_00503230
    MOV EAX,ESP                         ; 00503256
        ;   Label: LAB_00503256
    PUSH EAX                            ; 00503258
    MOV EDX,dword ptr [0x0061abc0]      ; 00503259 | DAT_0061abc0
    PUSH EDX                            ; 0050325f
    CALL FUN_00498e40                   ; 00503260
        ;   XREF to: 00498e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00498e40()
    ADD ESP,0x8                         ; 00503265
    MOV EAX,ESP                         ; 00503268
    PUSH EAX                            ; 0050326a
    MOV ECX,dword ptr [0x0061abc0]      ; 0050326b | DAT_0061abc0
    PUSH ECX                            ; 00503271
    CALL FUN_004942e0                   ; 00503272
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004942e0()
    ADD ESP,0x8                         ; 00503277
    JMP 0x00503230                      ; 0050327a
        ;   XREF to: 00503230 (UNCONDITIONAL_JUMP)  ; LAB_00503230
    JBE 0x00503230                      ; 0050327c
        ;   XREF to: 00503230 (CONDITIONAL_JUMP)  ; LAB_00503230
        ;   Label: LAB_0050327c
    CMP EAX,0x41                        ; 0050327e
    JC 0x00503230                       ; 00503281
        ;   XREF to: 00503230 (CONDITIONAL_JUMP)  ; LAB_00503230
    JBE 0x00503230                      ; 00503283
        ;   XREF to: 00503230 (CONDITIONAL_JUMP)  ; LAB_00503230
    CMP EAX,0x5a                        ; 00503285
    JZ 0x00503256                       ; 00503288
        ;   XREF to: 00503256 (CONDITIONAL_JUMP)  ; LAB_00503256
    JMP 0x00503230                      ; 0050328a
        ;   XREF to: 00503230 (UNCONDITIONAL_JUMP)  ; LAB_00503230
    JBE 0x00503244                      ; 0050328c
        ;   XREF to: 00503244 (CONDITIONAL_JUMP)  ; LAB_00503244
        ;   Label: LAB_0050328c
    JMP 0x00503230                      ; 0050328e
        ;   XREF to: 00503230 (UNCONDITIONAL_JUMP)  ; LAB_00503230

