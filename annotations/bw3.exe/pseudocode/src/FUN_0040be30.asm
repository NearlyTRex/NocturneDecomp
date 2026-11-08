; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040be30(undefined4 param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00414fd0 at 00415155
;   FUN_0041fb90 at 0041fcc0
;
; Referenced Globals:
;   TerminatedCString s_sim_box_state_info_openi_005b5bfb
;   TerminatedCString s_sim_box_state_info_closi_005b5c1c
;   TerminatedCString s_s_s_005b5c3d
;   undefined4 DAT_005b5c48
;   undefined1 DAT_005f0990
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   FUN_0040afa0
;   FUN_0040b2d0
;   FUN_0041d480
;   FUN_0041d630
;   FUN_005a3140
;   FUN_005a32b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040be30
        ;   Label: FUN_0040be30
    PUSH ESI                            ; 0040be31
    PUSH EBP                            ; 0040be32
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040be33
    CMP dword ptr [0x007df9b8],0x1      ; 0040be37 | DAT_007df9b8
    JNZ 0x0040beb6                      ; 0040be3e
        ;   XREF to: 0040beb6 (CONDITIONAL_JUMP)  ; LAB_0040beb6
    MOV EBP,dword ptr [0x007df9b4]      ; 0040be44 | DAT_007df9b4
        ;   Label: LAB_0040be44
    PUSH EBP                            ; 0040be4a
    CALL FUN_005a32b0                   ; 0040be4b
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0040be50
    MOV ESI,EAX                         ; 0040be53
    TEST EAX,EAX                        ; 0040be55
    JL 0x0040be8f                       ; 0040be57
        ;   XREF to: 0040be8f (CONDITIONAL_JUMP)  ; LAB_0040be8f
    CMP ESI,0xa                         ; 0040be59
        ;   Label: LAB_0040be59
    JNZ 0x0040be44                      ; 0040be5c
        ;   XREF to: 0040be44 (CONDITIONAL_JUMP)  ; LAB_0040be44
    MOV EAX,[0x007df9b4]                ; 0040be5e | DAT_007df9b4
    PUSH EAX                            ; 0040be63
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040be64
    PUSH EDX                            ; 0040be68
    CALL FUN_0041d480                   ; 0040be69
        ;   XREF to: 0041d480 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d480()
    ADD ESP,0x8                         ; 0040be6e
    MOV ECX,dword ptr [0x007df9b4]      ; 0040be71 | DAT_007df9b4
        ;   Label: LAB_0040be71
    PUSH ECX                            ; 0040be77
    CALL FUN_005a32b0                   ; 0040be78
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0040be7d
    MOV ESI,EAX                         ; 0040be80
    TEST EAX,EAX                        ; 0040be82
    JL 0x0040be9f                       ; 0040be84
        ;   XREF to: 0040be9f (CONDITIONAL_JUMP)  ; LAB_0040be9f
    CMP ESI,0xa                         ; 0040be86
    JNZ 0x0040be71                      ; 0040be89
        ;   XREF to: 0040be71 (CONDITIONAL_JUMP)  ; LAB_0040be71
    POP EBP                             ; 0040be8b
    POP ESI                             ; 0040be8c
    POP EBX                             ; 0040be8d
    RET                                 ; 0040be8e
    PUSH EBX                            ; 0040be8f
        ;   Label: LAB_0040be8f
    PUSH 0x5b5bfb                       ; 0040be90 | = "sim box state info opening brace"
    CALL FUN_0040b2d0                   ; 0040be95
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b2d0()
    ADD ESP,0x8                         ; 0040be9a
    JMP 0x0040be59                      ; 0040be9d
        ;   XREF to: 0040be59 (UNCONDITIONAL_JUMP)  ; LAB_0040be59
    PUSH EBX                            ; 0040be9f
        ;   Label: LAB_0040be9f
    PUSH 0x5b5c1c                       ; 0040bea0 | = "sim box state info closing brace"
    CALL FUN_0040b2d0                   ; 0040bea5
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b2d0()
    ADD ESP,0x8                         ; 0040beaa
    CMP ESI,0xa                         ; 0040bead
    JNZ 0x0040be71                      ; 0040beb0
        ;   XREF to: 0040be71 (CONDITIONAL_JUMP)  ; LAB_0040be71
    POP EBP                             ; 0040beb2
    POP ESI                             ; 0040beb3
    POP EBX                             ; 0040beb4
    RET                                 ; 0040beb5
    PUSH EDI                            ; 0040beb6
        ;   Label: LAB_0040beb6
    PUSH EBX                            ; 0040beb7
    PUSH 0x5f0990                       ; 0040beb8 | DAT_005f0990
    PUSH 0x5b5c3d                       ; 0040bebd | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040bec2 | DAT_007df9b4
    PUSH ECX                            ; 0040bec8
    CALL FUN_005a3140                   ; 0040bec9
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x10                        ; 0040bece
    PUSH 0x1                            ; 0040bed1
    CALL FUN_0040afa0                   ; 0040bed3
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040afa0()
    ADD ESP,0x4                         ; 0040bed8
    PUSH 0x5f0990                       ; 0040bedb | DAT_005f0990
    MOV EBX,dword ptr [0x007df9b4]      ; 0040bee0 | DAT_007df9b4
    PUSH EBX                            ; 0040bee6
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040bee7
    PUSH ESI                            ; 0040beeb
    CALL FUN_0041d630                   ; 0040beec
        ;   XREF to: 0041d630 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d630()
    ADD ESP,0xc                         ; 0040bef1
    PUSH -0x1                           ; 0040bef4
    CALL FUN_0040afa0                   ; 0040bef6
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040afa0()
    ADD ESP,0x4                         ; 0040befb
    PUSH 0x5f0990                       ; 0040befe | DAT_005f0990
    PUSH 0x5b5c48                       ; 0040bf03 | DAT_005b5c48
    MOV EDI,dword ptr [0x007df9b4]      ; 0040bf08 | DAT_007df9b4
    PUSH EDI                            ; 0040bf0e
    CALL FUN_005a3140                   ; 0040bf0f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0xc                         ; 0040bf14
    POP EDI                             ; 0040bf17
    POP EBP                             ; 0040bf18
    POP ESI                             ; 0040bf19
    POP EBX                             ; 0040bf1a
    RET                                 ; 0040bf1b

