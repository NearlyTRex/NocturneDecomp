; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fc040(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)
;
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0040b9e0 at 0040ba06
;
; Referenced Globals:
;   TerminatedCString s_unknown_005de594
;   TerminatedCString s_unknown_005de59e
;   TerminatedCString s_core_mission_cpp_005de5a8
;   TerminatedCString s_Error_reading_actor_poin_005de5bc
;   TerminatedCString s_anon_005de5f4
;   TerminatedCString s_WARNING_Can_t_find_actor_005de5fa
;   undefined4 DAT_005de654
;   undefined4 DAT_006138e0
;   TerminatedCString s_none_006182b0
;   undefined4 DAT_0061ed94
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0047be40
;   FUN_004e4500
;   FUN_004fc740
;   FUN_005b8100
;   FUN_005b8130
;   FUN_005b8180
;   FUN_005b8350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc040
        ;   Label: FUN_004fc040
    PUSH ESI                            ; 004fc041
    PUSH EDI                            ; 004fc042
    PUSH EBP                            ; 004fc043
    SUB ESP,0xcc                        ; 004fc044
    MOV EBX,dword ptr [ESP + 0xe4]      ; 004fc04a
    MOV EDI,dword ptr [ESP + 0xe8]      ; 004fc051
    MOV EBP,dword ptr [ESP + 0xec]      ; 004fc058
    TEST EDI,EDI                        ; 004fc05f
    JNZ 0x004fc068                      ; 004fc061
        ;   XREF to: 004fc068 (CONDITIONAL_JUMP)  ; LAB_004fc068
    MOV EDI,0x5de594                    ; 004fc063 | = "(unknown)"
    TEST EBP,EBP                        ; 004fc068
        ;   Label: LAB_004fc068
    JNZ 0x004fc071                      ; 004fc06a
        ;   XREF to: 004fc071 (CONDITIONAL_JUMP)  ; LAB_004fc071
    MOV EBP,0x5de59e                    ; 004fc06c | = "(unknown)"
    PUSH EBX                            ; 004fc071
        ;   Label: LAB_004fc071
    CALL FUN_005b8180                   ; 004fc072
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    MOV EDX,EAX                         ; 004fc077
    ADD ESP,0x4                         ; 004fc079
    INC DL                              ; 004fc07c
    AND EDX,0xff                        ; 004fc07e
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 004fc084 | DAT_0061ed94
    JNZ 0x004fc071                      ; 004fc08b
        ;   XREF to: 004fc071 (CONDITIONAL_JUMP)  ; LAB_004fc071
    CMP EAX,0x22                        ; 004fc08d
    JNZ 0x004fc16a                      ; 004fc090
        ;   XREF to: 004fc16a (CONDITIONAL_JUMP)  ; LAB_004fc16a
    PUSH EBX                            ; 004fc096
    CALL FUN_005b8180                   ; 004fc097
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fc09c
    CMP EAX,0x22                        ; 004fc09f
    JNZ 0x004fc0e8                      ; 004fc0a2
        ;   XREF to: 004fc0e8 (CONDITIONAL_JUMP)  ; LAB_004fc0e8
    PUSH EBP                            ; 004fc0a4 | = "(unknown)"
        ;   Label: LAB_004fc0a4
    PUSH EDI                            ; 004fc0a5 | = "(unknown)"
    MOV EAX,0x5de5a8                    ; 004fc0a6 | = "..\\core\\mission.cpp"
    MOV EDX,0x231                       ; 004fc0ab
    PUSH 0x5de5bc                       ; 004fc0b0 | = "Error reading actor pointer.\nOwner: ..."
    MOV [0x01d046a0],EAX                ; 004fc0b5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004fc0ba | DAT_01d046a4
    CALL FUN_004e4500                   ; 004fc0c0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 004fc0c5
    PUSH EBX                            ; 004fc0c8
        ;   Label: LAB_004fc0c8
    CALL FUN_005b8180                   ; 004fc0c9
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fc0ce
    CMP EAX,-0x1                        ; 004fc0d1
    JZ 0x004fc0a4                       ; 004fc0d4
        ;   XREF to: 004fc0a4 (CONDITIONAL_JUMP)  ; LAB_004fc0a4
    CMP EAX,0xa                         ; 004fc0d6
    JNZ 0x004fc0c8                      ; 004fc0d9
        ;   XREF to: 004fc0c8 (CONDITIONAL_JUMP)  ; LAB_004fc0c8
    MOV EAX,ESI                         ; 004fc0db
    ADD ESP,0xcc                        ; 004fc0dd
    POP EBP                             ; 004fc0e3
    POP EDI                             ; 004fc0e4
    POP ESI                             ; 004fc0e5
    POP EBX                             ; 004fc0e6
    RET                                 ; 004fc0e7
    PUSH EBX                            ; 004fc0e8
        ;   Label: LAB_004fc0e8
    PUSH EAX                            ; 004fc0e9
    CALL FUN_005b8350                   ; 004fc0ea
        ;   XREF to: 005b8350 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8350()
    ADD ESP,0x8                         ; 004fc0ef
    MOV EAX,ESP                         ; 004fc0f2
    PUSH EAX                            ; 004fc0f4
    PUSH 0x5de5f4                       ; 004fc0f5 | = "%[^\"]"
    PUSH EBX                            ; 004fc0fa
    CALL FUN_005b8100                   ; 004fc0fb
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 004fc100
    CMP EAX,0x1                         ; 004fc103
    JNZ 0x004fc0a4                      ; 004fc106
        ;   XREF to: 004fc0a4 (CONDITIONAL_JUMP)  ; LAB_004fc0a4
    PUSH 0x6182b0                       ; 004fc108 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 004fc10d
    PUSH EAX                            ; 004fc111
    CALL FUN_005b8130                   ; 004fc112
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004fc117
    TEST EAX,EAX                        ; 004fc11a
    JNZ 0x004fc134                      ; 004fc11c
        ;   XREF to: 004fc134 (CONDITIONAL_JUMP)  ; LAB_004fc134
    XOR ESI,ESI                         ; 004fc11e
    PUSH EBX                            ; 004fc120
        ;   Label: LAB_004fc120
    CALL FUN_005b8180                   ; 004fc121
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8180()
    ADD ESP,0x4                         ; 004fc126
    CMP EAX,0x22                        ; 004fc129
    JNZ 0x004fc0a4                      ; 004fc12c
        ;   XREF to: 004fc0a4 (CONDITIONAL_JUMP)  ; LAB_004fc0a4
    JMP 0x004fc0c8                      ; 004fc132
        ;   XREF to: 004fc0c8 (UNCONDITIONAL_JUMP)  ; LAB_004fc0c8
    MOV EAX,ESP                         ; 004fc134
        ;   Label: LAB_004fc134
    PUSH EAX                            ; 004fc136
    MOV EDX,dword ptr [ESP + 0xe4]      ; 004fc137
    PUSH EDX                            ; 004fc13e
    CALL FUN_004fc740                   ; 004fc13f
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc740()
    ADD ESP,0x8                         ; 004fc144
    MOV ESI,EAX                         ; 004fc147
    TEST EAX,EAX                        ; 004fc149
    JNZ 0x004fc120                      ; 004fc14b
        ;   XREF to: 004fc120 (CONDITIONAL_JUMP)  ; LAB_004fc120
    PUSH EBP                            ; 004fc14d | = "(unknown)"
    PUSH EDI                            ; 004fc14e | = "(unknown)"
    LEA EAX,[ESP + 0x8]                 ; 004fc14f
    PUSH EAX                            ; 004fc153
    PUSH 0x5de5fa                       ; 004fc154 | = "WARNING.  Can't find actor '%s' in %s..."
    MOV ECX,dword ptr [0x006138e0]      ; 004fc159 | DAT_006138e0
    PUSH ECX                            ; 004fc15f
    CALL FUN_0047be40                   ; 004fc160
        ;   XREF to: 0047be40 (UNCONDITIONAL_CALL)  ; undefined FUN_0047be40()
    ADD ESP,0x14                        ; 004fc165
    JMP 0x004fc120                      ; 004fc168
        ;   XREF to: 004fc120 (UNCONDITIONAL_JUMP)  ; LAB_004fc120
    PUSH EBX                            ; 004fc16a
        ;   Label: LAB_004fc16a
    PUSH EAX                            ; 004fc16b
    CALL FUN_005b8350                   ; 004fc16c
        ;   XREF to: 005b8350 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8350()
    ADD ESP,0x8                         ; 004fc171
    LEA EAX,[ESP + 0xc8]                ; 004fc174
    PUSH EAX                            ; 004fc17b
    PUSH 0x5de654                       ; 004fc17c | DAT_005de654
    PUSH EBX                            ; 004fc181
    CALL FUN_005b8100                   ; 004fc182
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8100()
    ADD ESP,0xc                         ; 004fc187
    CMP EAX,0x1                         ; 004fc18a
    JNZ 0x004fc0a4                      ; 004fc18d
        ;   XREF to: 004fc0a4 (CONDITIONAL_JUMP)  ; LAB_004fc0a4
    MOV ESI,dword ptr [ESP + 0xc8]      ; 004fc193
    JMP 0x004fc0c8                      ; 004fc19a
        ;   XREF to: 004fc0c8 (UNCONDITIONAL_JUMP)  ; LAB_004fc0c8

