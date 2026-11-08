; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005289b0(char *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00529a70 at 0052b382
;   FUN_00530150 at 0053018e
;
; Referenced Globals:
;   TerminatedCString s_Must_specify_actor_name_005cdc2e
;   undefined4 s_ust_specify_actor_name_005cdc2e+1
;   undefined4 s_st_specify_actor_name_005cdc2e+2
;   undefined4 s_t_specify_actor_name_005cdc2e+3
;   TerminatedCString s_Actor_variable_s_not_def_005cdc46
;   undefined4 DAT_005cdc8c
;   TerminatedCString s_Can_t_use_actor_specifie_005cdc8e
;   TerminatedCString s_Hero_doesn_t_exist_005cdcbc
;   TerminatedCString s_Actor_s_does_not_exist_005cdcd3
;   TerminatedCString s_Actor_s_is_of_type_s_thi_005cdcee
;   undefined4 DAT_005fba60
;   undefined4 DAT_00600530
;   undefined4 DAT_00603450
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01da62f0
;   ... and 5 more
;
; Called Functions:
;   FUN_00408870
;   FUN_0040c810
;   FUN_00495050
;   FUN_004f6e90
;   FUN_005286f0
;   FUN_005a28c0
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005289b0
        ;   Label: FUN_005289b0
    PUSH ESI                            ; 005289b1
    PUSH EDI                            ; 005289b2
    PUSH EBP                            ; 005289b3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005289b4
    XOR EDX,EDX                         ; 005289b8
    MOV dword ptr [0x01ed701c],EDX      ; 005289ba | DAT_01ed701c
    TEST EBX,EBX                        ; 005289c0
    JZ 0x005289e5                       ; 005289c2
        ;   XREF to: 005289e5 (CONDITIONAL_JUMP)  ; LAB_005289e5
    MOV AH,byte ptr [EBX]               ; 005289c4
    TEST AH,AH                          ; 005289c6
    JZ 0x005289e5                       ; 005289c8
        ;   XREF to: 005289e5 (CONDITIONAL_JUMP)  ; LAB_005289e5
    CMP AH,0x40                         ; 005289ca
    JNZ 0x00528a67                      ; 005289cd
        ;   XREF to: 00528a67 (CONDITIONAL_JUMP)  ; LAB_00528a67
    PUSH EBX                            ; 005289d3
    CALL FUN_005286f0                   ; 005289d4
        ;   XREF to: 005286f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005286f0()
    ADD ESP,0x4                         ; 005289d9
    TEST EAX,EAX                        ; 005289dc
    JNZ 0x00528a10                      ; 005289de
        ;   XREF to: 00528a10 (CONDITIONAL_JUMP)  ; LAB_00528a10
    POP EBP                             ; 005289e0
    POP EDI                             ; 005289e1
    POP ESI                             ; 005289e2
    POP EBX                             ; 005289e3
    RET                                 ; 005289e4
    MOV ESI,0x5cdc2e                    ; 005289e5 | = "Must specify actor name"
        ;   Label: LAB_005289e5
    MOV EDI,0x1ed6810                   ; 005289ea
    PUSH EDI                            ; 005289ef | DAT_01ed6810
    MOV AL,byte ptr [ESI]               ; 005289f0 | = "Must specify actor name" | s_st_specify_actor_name_005cdc2e+2
        ;   Label: LAB_005289f0
    MOV byte ptr [EDI],AL               ; 005289f2 | DAT_01ed6810 | DAT_01ed6812
    CMP AL,0x0                          ; 005289f4
    JZ 0x00528a08                       ; 005289f6
        ;   XREF to: 00528a08 (CONDITIONAL_JUMP)  ; LAB_00528a08
    MOV AL,byte ptr [ESI + 0x1]         ; 005289f8 | s_ust_specify_actor_name_005cdc2e+1 | s_t_specify_actor_name_005cdc2e+3
    ADD ESI,0x2                         ; 005289fb
    MOV byte ptr [EDI + 0x1],AL         ; 005289fe | DAT_01ed6811 | DAT_01ed6813
    ADD EDI,0x2                         ; 00528a01
    CMP AL,0x0                          ; 00528a04
    JNZ 0x005289f0                      ; 00528a06
        ;   XREF to: 005289f0 (CONDITIONAL_JUMP)  ; LAB_005289f0
    POP EDI                             ; 00528a08
        ;   Label: LAB_00528a08
    XOR EAX,EAX                         ; 00528a09
    POP EBP                             ; 00528a0b
    POP EDI                             ; 00528a0c
    POP ESI                             ; 00528a0d
    POP EBX                             ; 00528a0e
    RET                                 ; 00528a0f
    PUSH EBX                            ; 00528a10
        ;   Label: LAB_00528a10
    MOV EAX,[0x005fba60]                ; 00528a11 | DAT_005fba60
    MOV EBP,0x1                         ; 00528a16
    PUSH EAX                            ; 00528a1b
    MOV dword ptr [0x01ed701c],EBP      ; 00528a1c | DAT_01ed701c
    CALL FUN_00495050                   ; 00528a22
        ;   XREF to: 00495050 (UNCONDITIONAL_CALL)  ; undefined FUN_00495050()
    ADD ESP,0x8                         ; 00528a27
    MOV ESI,EAX                         ; 00528a2a
    TEST EAX,EAX                        ; 00528a2c
    JZ 0x00528a4d                       ; 00528a2e
        ;   XREF to: 00528a4d (CONDITIONAL_JUMP)  ; LAB_00528a4d
    MOV EDX,dword ptr [ESP + 0x18]      ; 00528a30
        ;   Label: LAB_00528a30
    PUSH EDX                            ; 00528a34
    PUSH ESI                            ; 00528a35
    CALL FUN_0040c810                   ; 00528a36
        ;   XREF to: 0040c810 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c810()
    ADD ESP,0x8                         ; 00528a3b
    TEST EAX,EAX                        ; 00528a3e
    JZ 0x00528b05                       ; 00528a40
        ;   XREF to: 00528b05 (CONDITIONAL_JUMP)  ; LAB_00528b05
    MOV EAX,ESI                         ; 00528a46
    POP EBP                             ; 00528a48
    POP EDI                             ; 00528a49
    POP ESI                             ; 00528a4a
    POP EBX                             ; 00528a4b
    RET                                 ; 00528a4c
    PUSH EBX                            ; 00528a4d
        ;   Label: LAB_00528a4d
    PUSH 0x5cdc46                       ; 00528a4e | = "Actor variable %s not defined, or doe..."
    PUSH 0x1ed6810                      ; 00528a53
    CALL FUN_005a28c0                   ; 00528a58
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 00528a5d
    XOR EAX,EAX                         ; 00528a60
    POP EBP                             ; 00528a62
    POP EDI                             ; 00528a63
    POP ESI                             ; 00528a64
    POP EBX                             ; 00528a65
    RET                                 ; 00528a66
    PUSH 0x5cdc8c                       ; 00528a67 | DAT_005cdc8c
        ;   Label: LAB_00528a67
    PUSH EBX                            ; 00528a6c
    CALL FUN_005a3260                   ; 00528a6d
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 00528a72
    TEST EAX,EAX                        ; 00528a75
    JNZ 0x00528ad1                      ; 00528a77
        ;   XREF to: 00528ad1 (CONDITIONAL_JUMP)  ; LAB_00528ad1
    MOV EAX,[0x00603450]                ; 00528a79 | DAT_00603450
    CMP dword ptr [EAX],0x0             ; 00528a7e | DAT_01da62f0
    JNZ 0x00528ab8                      ; 00528a81
        ;   XREF to: 00528ab8 (CONDITIONAL_JUMP)  ; LAB_00528ab8
    MOV ESI,dword ptr [0x01d5ba14]      ; 00528a83 | DAT_01d5ba14
    MOV ESI,dword ptr [ESI*0x4 + 0x1d5ba04] ; 00528a89
    TEST ESI,ESI                        ; 00528a90
    JNZ 0x00528a30                      ; 00528a92
        ;   XREF to: 00528a30 (CONDITIONAL_JUMP)  ; LAB_00528a30
    PUSH 0x5cdcbc                       ; 00528a94 | = "Hero doesn't exist!!?!"
    MOV EDI,0x1                         ; 00528a99
    PUSH 0x1ed6810                      ; 00528a9e
    MOV dword ptr [0x01ed701c],EDI      ; 00528aa3 | DAT_01ed701c
    CALL FUN_005a28c0                   ; 00528aa9
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x8                         ; 00528aae
    XOR EAX,EAX                         ; 00528ab1
    POP EBP                             ; 00528ab3
    POP EDI                             ; 00528ab4
    POP ESI                             ; 00528ab5
    POP EBX                             ; 00528ab6
    RET                                 ; 00528ab7
    PUSH 0x5cdc8e                       ; 00528ab8 | = "Can't use '$' actor specifier in mult..."
        ;   Label: LAB_00528ab8
    PUSH 0x1ed6810                      ; 00528abd
    CALL FUN_005a28c0                   ; 00528ac2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x8                         ; 00528ac7
    XOR EAX,EAX                         ; 00528aca
    POP EBP                             ; 00528acc
    POP EDI                             ; 00528acd
    POP ESI                             ; 00528ace
    POP EBX                             ; 00528acf
    RET                                 ; 00528ad0
    PUSH EBX                            ; 00528ad1
        ;   Label: LAB_00528ad1
    MOV ECX,dword ptr [0x00600530]      ; 00528ad2 | DAT_00600530
    PUSH ECX                            ; 00528ad8
    CALL FUN_004f6e90                   ; 00528ad9
        ;   XREF to: 004f6e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6e90()
    ADD ESP,0x8                         ; 00528ade
    MOV ESI,EAX                         ; 00528ae1
    TEST EAX,EAX                        ; 00528ae3
    JNZ 0x00528a30                      ; 00528ae5
        ;   XREF to: 00528a30 (CONDITIONAL_JUMP)  ; LAB_00528a30
    PUSH EBX                            ; 00528aeb
    PUSH 0x5cdcd3                       ; 00528aec | = "Actor \"%s\" does not exist."
    PUSH 0x1ed6810                      ; 00528af1
    CALL FUN_005a28c0                   ; 00528af6
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 00528afb
    XOR EAX,EAX                         ; 00528afe
    POP EBP                             ; 00528b00
    POP EDI                             ; 00528b01
    POP ESI                             ; 00528b02
    POP EBX                             ; 00528b03
    RET                                 ; 00528b04
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00528b05
        ;   Label: LAB_00528b05
    PUSH ECX                            ; 00528b09
    PUSH ESI                            ; 00528b0a
    CALL FUN_00408870                   ; 00528b0b
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; undefined FUN_00408870()
    ADD ESP,0x4                         ; 00528b10
    PUSH EAX                            ; 00528b13
    PUSH EBX                            ; 00528b14
    PUSH 0x5cdcee                       ; 00528b15 | = "Actor \"%s\" is of type %s, this comm..."
    PUSH 0x1ed6810                      ; 00528b1a
    CALL FUN_005a28c0                   ; 00528b1f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x14                        ; 00528b24
    XOR EAX,EAX                         ; 00528b27
    POP EBP                             ; 00528b29
    POP EDI                             ; 00528b2a
    POP ESI                             ; 00528b2b
    POP EBX                             ; 00528b2c
    RET                                 ; 00528b2d

