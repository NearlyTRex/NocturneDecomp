; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_0047c760(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_004b6170 at 004b6bc4
;   FUN_004b82e0 at 004b8be4
;
; Referenced Globals:
;   TerminatedCString s_Yes_I_know_what_I_m_doin_005d1fdd
;   TerminatedCString s_No_please_I_didn_t_mean_005d201c
;
; Called Functions:
;   FUN_0047c0f0
;   FUN_00480d20
;   FUN_00480d40
;   FUN_00480e70
;   FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c760
        ;   Label: FUN_0047c760
    SUB ESP,0x14                        ; 0047c761
    LEA EAX,[ESP + 0x24]                ; 0047c764
    MOV dword ptr [ESP + 0x10],EAX      ; 0047c768
    LEA EAX,[ESP + 0x10]                ; 0047c76c
    PUSH EAX                            ; 0047c770
    MOV EDX,dword ptr [ESP + 0x24]      ; 0047c771
    PUSH EDX                            ; 0047c775
    PUSH 0x1c239f0                      ; 0047c776
    CALL FUN_005b7768                   ; 0047c77b
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7768()
    ADD ESP,0xc                         ; 0047c780
    MOV EAX,ESP                         ; 0047c783
    XOR ECX,ECX                         ; 0047c785
    PUSH EAX                            ; 0047c787
    MOV dword ptr [ESP + 0x14],ECX      ; 0047c788
    CALL FUN_00480d20                   ; 0047c78c
        ;   XREF to: 00480d20 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d20()
    ADD ESP,0x4                         ; 0047c791
    PUSH 0x5d1fdd                       ; 0047c794 | = "^Yes, I know what I'm doing and I hat..."
    LEA EAX,[ESP + 0x4]                 ; 0047c799
    PUSH EAX                            ; 0047c79d
    CALL FUN_00480e70                   ; 0047c79e
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 0047c7a3
    PUSH 0x5d201c                       ; 0047c7a6 | = "^No, please, I didn't mean to do it!"
    LEA EAX,[ESP + 0x4]                 ; 0047c7ab
    PUSH EAX                            ; 0047c7af
    CALL FUN_00480e70                   ; 0047c7b0
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e70()
    ADD ESP,0x8                         ; 0047c7b5
    PUSH 0x1                            ; 0047c7b8
    LEA EAX,[ESP + 0x4]                 ; 0047c7ba
    PUSH EAX                            ; 0047c7be
    PUSH 0x1c239f0                      ; 0047c7bf
    CALL FUN_0047c0f0                   ; 0047c7c4
        ;   XREF to: 0047c0f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047c0f0()
    ADD ESP,0xc                         ; 0047c7c9
    XOR EBX,EBX                         ; 0047c7cc
    TEST EAX,EAX                        ; 0047c7ce
    SETZ AL                             ; 0047c7d0
    PUSH 0x0                            ; 0047c7d3
    MOV BL,AL                           ; 0047c7d5
    LEA EAX,[ESP + 0x4]                 ; 0047c7d7
    PUSH EAX                            ; 0047c7db
    CALL FUN_00480d40                   ; 0047c7dc
        ;   XREF to: 00480d40 (UNCONDITIONAL_CALL)  ; undefined FUN_00480d40()
    ADD ESP,0x8                         ; 0047c7e1
    MOV EAX,EBX                         ; 0047c7e4
    ADD ESP,0x14                        ; 0047c7e6
    POP EBX                             ; 0047c7e9
    RET                                 ; 0047c7ea

