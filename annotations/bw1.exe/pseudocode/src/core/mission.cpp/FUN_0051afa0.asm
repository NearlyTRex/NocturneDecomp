; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051afa0(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)
;
; Local Variables:
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0040b6f0 at 0040b716
;
; Referenced Globals:
;   TerminatedCString s_unknown_005e95d7
;   TerminatedCString s_unknown_005e95e1
;   TerminatedCString s_core_mission_cpp_005e95eb
;   TerminatedCString s_Error_reading_actor_poin_005e95ff
;   TerminatedCString s_anon_005e9637
;   TerminatedCString s_WARNING_Can_t_find_actor_005e963d
;   undefined4 DAT_005e9697
;   undefined4 DAT_0061abc0
;   TerminatedCString s_none_0061f790
;   undefined4 DAT_00626114
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_004943a0
;   FUN_005030e0
;   FUN_0051b6c0
;   FUN_005c04b0
;   FUN_005c04e0
;   FUN_005c0530
;   FUN_005c0700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051afa0
        ;   Label: FUN_0051afa0
    PUSH ESI                            ; 0051afa1
    PUSH EDI                            ; 0051afa2
    PUSH EBP                            ; 0051afa3
    SUB ESP,0xcc                        ; 0051afa4
    MOV EBX,dword ptr [ESP + 0xe4]      ; 0051afaa
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0051afb1
    MOV EBP,dword ptr [ESP + 0xec]      ; 0051afb8
    TEST EDI,EDI                        ; 0051afbf
    JNZ 0x0051afc8                      ; 0051afc1
        ;   XREF to: 0051afc8 (CONDITIONAL_JUMP)  ; LAB_0051afc8
    MOV EDI,0x5e95d7                    ; 0051afc3 | = "(unknown)"
    TEST EBP,EBP                        ; 0051afc8
        ;   Label: LAB_0051afc8
    JNZ 0x0051afd1                      ; 0051afca
        ;   XREF to: 0051afd1 (CONDITIONAL_JUMP)  ; LAB_0051afd1
    MOV EBP,0x5e95e1                    ; 0051afcc | = "(unknown)"
    PUSH EBX                            ; 0051afd1
        ;   Label: LAB_0051afd1
    CALL FUN_005c0530                   ; 0051afd2
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    MOV EDX,EAX                         ; 0051afd7
    ADD ESP,0x4                         ; 0051afd9
    INC DL                              ; 0051afdc
    AND EDX,0xff                        ; 0051afde
    TEST byte ptr [EDX + 0x626114],0x2  ; 0051afe4 | DAT_00626114
    JNZ 0x0051afd1                      ; 0051afeb
        ;   XREF to: 0051afd1 (CONDITIONAL_JUMP)  ; LAB_0051afd1
    CMP EAX,0x22                        ; 0051afed
    JNZ 0x0051b0ca                      ; 0051aff0
        ;   XREF to: 0051b0ca (CONDITIONAL_JUMP)  ; LAB_0051b0ca
    PUSH EBX                            ; 0051aff6
    CALL FUN_005c0530                   ; 0051aff7
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051affc
    CMP EAX,0x22                        ; 0051afff
    JNZ 0x0051b048                      ; 0051b002
        ;   XREF to: 0051b048 (CONDITIONAL_JUMP)  ; LAB_0051b048
    PUSH EBP                            ; 0051b004 | = "(unknown)"
        ;   Label: LAB_0051b004
    PUSH EDI                            ; 0051b005 | = "(unknown)"
    MOV EAX,0x5e95eb                    ; 0051b006 | = "..\\core\\mission.cpp"
    MOV EDX,0x234                       ; 0051b00b
    PUSH 0x5e95ff                       ; 0051b010 | = "Error reading actor pointer.\nOwner: ..."
    MOV [0x01d1d400],EAX                ; 0051b015 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 0051b01a | DAT_01d1d404
    CALL FUN_005030e0                   ; 0051b020
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 0051b025
    PUSH EBX                            ; 0051b028
        ;   Label: LAB_0051b028
    CALL FUN_005c0530                   ; 0051b029
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051b02e
    CMP EAX,-0x1                        ; 0051b031
    JZ 0x0051b004                       ; 0051b034
        ;   XREF to: 0051b004 (CONDITIONAL_JUMP)  ; LAB_0051b004
    CMP EAX,0xa                         ; 0051b036
    JNZ 0x0051b028                      ; 0051b039
        ;   XREF to: 0051b028 (CONDITIONAL_JUMP)  ; LAB_0051b028
    MOV EAX,ESI                         ; 0051b03b
    ADD ESP,0xcc                        ; 0051b03d
    POP EBP                             ; 0051b043
    POP EDI                             ; 0051b044
    POP ESI                             ; 0051b045
    POP EBX                             ; 0051b046
    RET                                 ; 0051b047
    PUSH EBX                            ; 0051b048
        ;   Label: LAB_0051b048
    PUSH EAX                            ; 0051b049
    CALL FUN_005c0700                   ; 0051b04a
        ;   XREF to: 005c0700 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0700()
    ADD ESP,0x8                         ; 0051b04f
    MOV EAX,ESP                         ; 0051b052
    PUSH EAX                            ; 0051b054
    PUSH 0x5e9637                       ; 0051b055 | = "%[^\"]"
    PUSH EBX                            ; 0051b05a
    CALL FUN_005c04b0                   ; 0051b05b
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 0051b060
    CMP EAX,0x1                         ; 0051b063
    JNZ 0x0051b004                      ; 0051b066
        ;   XREF to: 0051b004 (CONDITIONAL_JUMP)  ; LAB_0051b004
    PUSH 0x61f790                       ; 0051b068 | = "(none)"
    LEA EAX,[ESP + 0x4]                 ; 0051b06d
    PUSH EAX                            ; 0051b071
    CALL FUN_005c04e0                   ; 0051b072
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 0051b077
    TEST EAX,EAX                        ; 0051b07a
    JNZ 0x0051b094                      ; 0051b07c
        ;   XREF to: 0051b094 (CONDITIONAL_JUMP)  ; LAB_0051b094
    XOR ESI,ESI                         ; 0051b07e
    PUSH EBX                            ; 0051b080
        ;   Label: LAB_0051b080
    CALL FUN_005c0530                   ; 0051b081
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0051b086
    CMP EAX,0x22                        ; 0051b089
    JNZ 0x0051b004                      ; 0051b08c
        ;   XREF to: 0051b004 (CONDITIONAL_JUMP)  ; LAB_0051b004
    JMP 0x0051b028                      ; 0051b092
        ;   XREF to: 0051b028 (UNCONDITIONAL_JUMP)  ; LAB_0051b028
    MOV EAX,ESP                         ; 0051b094
        ;   Label: LAB_0051b094
    PUSH EAX                            ; 0051b096
    MOV EDX,dword ptr [ESP + 0xe4]      ; 0051b097
    PUSH EDX                            ; 0051b09e
    CALL FUN_0051b6c0                   ; 0051b09f
        ;   XREF to: 0051b6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6c0()
    ADD ESP,0x8                         ; 0051b0a4
    MOV ESI,EAX                         ; 0051b0a7
    TEST EAX,EAX                        ; 0051b0a9
    JNZ 0x0051b080                      ; 0051b0ab
        ;   XREF to: 0051b080 (CONDITIONAL_JUMP)  ; LAB_0051b080
    PUSH EBP                            ; 0051b0ad | = "(unknown)"
    PUSH EDI                            ; 0051b0ae | = "(unknown)"
    LEA EAX,[ESP + 0x8]                 ; 0051b0af
    PUSH EAX                            ; 0051b0b3
    PUSH 0x5e963d                       ; 0051b0b4 | = "WARNING.  Can't find actor '%s' in %s..."
    MOV ECX,dword ptr [0x0061abc0]      ; 0051b0b9 | DAT_0061abc0
    PUSH ECX                            ; 0051b0bf
    CALL FUN_004943a0                   ; 0051b0c0
        ;   XREF to: 004943a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004943a0()
    ADD ESP,0x14                        ; 0051b0c5
    JMP 0x0051b080                      ; 0051b0c8
        ;   XREF to: 0051b080 (UNCONDITIONAL_JUMP)  ; LAB_0051b080
    PUSH EBX                            ; 0051b0ca
        ;   Label: LAB_0051b0ca
    PUSH EAX                            ; 0051b0cb
    CALL FUN_005c0700                   ; 0051b0cc
        ;   XREF to: 005c0700 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0700()
    ADD ESP,0x8                         ; 0051b0d1
    LEA EAX,[ESP + 0xc8]                ; 0051b0d4
    PUSH EAX                            ; 0051b0db
    PUSH 0x5e9697                       ; 0051b0dc | DAT_005e9697
    PUSH EBX                            ; 0051b0e1
    CALL FUN_005c04b0                   ; 0051b0e2
        ;   XREF to: 005c04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04b0()
    ADD ESP,0xc                         ; 0051b0e7
    CMP EAX,0x1                         ; 0051b0ea
    JNZ 0x0051b004                      ; 0051b0ed
        ;   XREF to: 0051b004 (CONDITIONAL_JUMP)  ; LAB_0051b004
    MOV ESI,dword ptr [ESP + 0xc8]      ; 0051b0f3
    JMP 0x0051b028                      ; 0051b0fa
        ;   XREF to: 0051b028 (UNCONDITIONAL_JUMP)  ; LAB_0051b028

