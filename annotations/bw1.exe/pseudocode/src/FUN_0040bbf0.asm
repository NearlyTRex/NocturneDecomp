; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040bbf0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004193c0 at 00419545
;   FUN_00422760 at 00422890
;
; Referenced Globals:
;   TerminatedCString s_sim_box_state_info_openi_005d2baf
;   TerminatedCString s_sim_box_state_info_closi_005d2bd0
;   TerminatedCString s_s_s_005d2bf1
;   undefined4 DAT_005d2bfc
;   undefined1 DAT_006106c0
;   undefined4 DAT_007c3034
;   undefined4 DAT_007c3038
;
; Called Functions:
;   FUN_0040ad60
;   FUN_0040b090
;   FUN_00420140
;   FUN_004202f0
;   FUN_005c03c0
;   FUN_005c0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bbf0
        ;   Label: FUN_0040bbf0
    PUSH ESI                            ; 0040bbf1
    PUSH EBP                            ; 0040bbf2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040bbf3
    CMP dword ptr [0x007c3038],0x1      ; 0040bbf7 | DAT_007c3038
    JNZ 0x0040bc76                      ; 0040bbfe
        ;   XREF to: 0040bc76 (CONDITIONAL_JUMP)  ; LAB_0040bc76
    MOV EBP,dword ptr [0x007c3034]      ; 0040bc04 | DAT_007c3034
        ;   Label: LAB_0040bc04
    PUSH EBP                            ; 0040bc0a
    CALL FUN_005c0530                   ; 0040bc0b
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0040bc10
    MOV ESI,EAX                         ; 0040bc13
    TEST EAX,EAX                        ; 0040bc15
    JL 0x0040bc4f                       ; 0040bc17
        ;   XREF to: 0040bc4f (CONDITIONAL_JUMP)  ; LAB_0040bc4f
    CMP ESI,0xa                         ; 0040bc19
        ;   Label: LAB_0040bc19
    JNZ 0x0040bc04                      ; 0040bc1c
        ;   XREF to: 0040bc04 (CONDITIONAL_JUMP)  ; LAB_0040bc04
    MOV EAX,[0x007c3034]                ; 0040bc1e | DAT_007c3034
    PUSH EAX                            ; 0040bc23
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040bc24
    PUSH EDX                            ; 0040bc28
    CALL FUN_00420140                   ; 0040bc29
        ;   XREF to: 00420140 (UNCONDITIONAL_CALL)  ; undefined FUN_00420140()
    ADD ESP,0x8                         ; 0040bc2e
    MOV ECX,dword ptr [0x007c3034]      ; 0040bc31 | DAT_007c3034
        ;   Label: LAB_0040bc31
    PUSH ECX                            ; 0040bc37
    CALL FUN_005c0530                   ; 0040bc38
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0530()
    ADD ESP,0x4                         ; 0040bc3d
    MOV ESI,EAX                         ; 0040bc40
    TEST EAX,EAX                        ; 0040bc42
    JL 0x0040bc5f                       ; 0040bc44
        ;   XREF to: 0040bc5f (CONDITIONAL_JUMP)  ; LAB_0040bc5f
    CMP ESI,0xa                         ; 0040bc46
    JNZ 0x0040bc31                      ; 0040bc49
        ;   XREF to: 0040bc31 (CONDITIONAL_JUMP)  ; LAB_0040bc31
    POP EBP                             ; 0040bc4b
    POP ESI                             ; 0040bc4c
    POP EBX                             ; 0040bc4d
    RET                                 ; 0040bc4e
    PUSH EBX                            ; 0040bc4f
        ;   Label: LAB_0040bc4f
    PUSH 0x5d2baf                       ; 0040bc50 | = "sim box state info opening brace"
    CALL FUN_0040b090                   ; 0040bc55
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b090()
    ADD ESP,0x8                         ; 0040bc5a
    JMP 0x0040bc19                      ; 0040bc5d
        ;   XREF to: 0040bc19 (UNCONDITIONAL_JUMP)  ; LAB_0040bc19
    PUSH EBX                            ; 0040bc5f
        ;   Label: LAB_0040bc5f
    PUSH 0x5d2bd0                       ; 0040bc60 | = "sim box state info closing brace"
    CALL FUN_0040b090                   ; 0040bc65
        ;   XREF to: 0040b090 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b090()
    ADD ESP,0x8                         ; 0040bc6a
    CMP ESI,0xa                         ; 0040bc6d
    JNZ 0x0040bc31                      ; 0040bc70
        ;   XREF to: 0040bc31 (CONDITIONAL_JUMP)  ; LAB_0040bc31
    POP EBP                             ; 0040bc72
    POP ESI                             ; 0040bc73
    POP EBX                             ; 0040bc74
    RET                                 ; 0040bc75
    PUSH EDI                            ; 0040bc76
        ;   Label: LAB_0040bc76
    PUSH EBX                            ; 0040bc77
    PUSH 0x6106c0                       ; 0040bc78 | DAT_006106c0
    PUSH 0x5d2bf1                       ; 0040bc7d | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007c3034]      ; 0040bc82 | DAT_007c3034
    PUSH ECX                            ; 0040bc88
    CALL FUN_005c03c0                   ; 0040bc89
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x10                        ; 0040bc8e
    PUSH 0x1                            ; 0040bc91
    CALL FUN_0040ad60                   ; 0040bc93
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ad60()
    ADD ESP,0x4                         ; 0040bc98
    PUSH 0x6106c0                       ; 0040bc9b | DAT_006106c0
    MOV EBX,dword ptr [0x007c3034]      ; 0040bca0 | DAT_007c3034
    PUSH EBX                            ; 0040bca6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040bca7
    PUSH ESI                            ; 0040bcab
    CALL FUN_004202f0                   ; 0040bcac
        ;   XREF to: 004202f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004202f0()
    ADD ESP,0xc                         ; 0040bcb1
    PUSH -0x1                           ; 0040bcb4
    CALL FUN_0040ad60                   ; 0040bcb6
        ;   XREF to: 0040ad60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ad60()
    ADD ESP,0x4                         ; 0040bcbb
    PUSH 0x6106c0                       ; 0040bcbe | DAT_006106c0
    PUSH 0x5d2bfc                       ; 0040bcc3 | DAT_005d2bfc
    MOV EDI,dword ptr [0x007c3034]      ; 0040bcc8 | DAT_007c3034
    PUSH EDI                            ; 0040bcce
    CALL FUN_005c03c0                   ; 0040bccf
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0xc                         ; 0040bcd4
    POP EDI                             ; 0040bcd7
    POP EBP                             ; 0040bcd8
    POP ESI                             ; 0040bcd9
    POP EBX                             ; 0040bcda
    RET                                 ; 0040bcdb

