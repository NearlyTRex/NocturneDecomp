; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040aff0(char *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004dc560 at 004dc6a3
;   FUN_004f6410 at 004f66f1
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b584d
;   TerminatedCString s_CDemonActor_save_tried_t_005b585f
;   TerminatedCString s_s_s_s_005b58a0
;   TerminatedCString s_s_s_s_005b58ad
;   TerminatedCString s_core_actor_cpp_005b58ba
;   TerminatedCString s_IO_Error_after_writing_a_005b58cc
;   undefined1 DAT_005f0990
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;   undefined4 DAT_007df9bc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00408870
;   FUN_0040afa0
;   FUN_0040c870
;   FUN_004e4330
;   FUN_005a3140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040aff0
        ;   Label: FUN_0040aff0
    PUSH ESI                            ; 0040aff1
    PUSH EDI                            ; 0040aff2
    PUSH EBP                            ; 0040aff3
    SUB ESP,0x8                         ; 0040aff4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0040aff7
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040affb
    CALL FUN_0040c870                   ; 0040afff
        ;   XREF to: 0040c870 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c870()
    PUSH EBX                            ; 0040b004
    CALL FUN_00408870                   ; 0040b005
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; undefined FUN_00408870()
    ADD ESP,0x4                         ; 0040b00a
    MOV DL,byte ptr [EBX]               ; 0040b00d
    MOV ESI,EAX                         ; 0040b00f
    TEST DL,DL                          ; 0040b011
    JNZ 0x0040b039                      ; 0040b013
        ;   XREF to: 0040b039 (CONDITIONAL_JUMP)  ; LAB_0040b039
    PUSH EAX                            ; 0040b015
    MOV EDX,0x5b584d                    ; 0040b016 | = "..\\core\\actor.cpp"
    MOV ECX,0x7e9                       ; 0040b01b
    PUSH 0x5b585f                       ; 0040b020 | = "CDemonActor::save - tried to save act..."
    MOV dword ptr [0x01d71de0],EDX      ; 0040b025 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0040b02b | DAT_01d71de4
    CALL FUN_004e4330                   ; 0040b031
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 0040b036
    PUSH EBX                            ; 0040b039
        ;   Label: LAB_0040b039
    PUSH ESI                            ; 0040b03a
    PUSH 0x5f0990                       ; 0040b03b | DAT_005f0990
    PUSH 0x5b58a0                       ; 0040b040 | = "%s{ %s \"%s\"\n"
    PUSH EDI                            ; 0040b045
    CALL FUN_005a3140                   ; 0040b046
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x14                        ; 0040b04b
    MOV EAX,[0x007df9b4]                ; 0040b04e | DAT_007df9b4
    MOV EBP,dword ptr [0x007df9bc]      ; 0040b053 | DAT_007df9bc
    PUSH 0x1                            ; 0040b059
    MOV dword ptr [ESP + 0x8],EAX       ; 0040b05b
    MOV EAX,[0x007df9b8]                ; 0040b05f | DAT_007df9b8
    MOV dword ptr [0x007df9b4],EDI      ; 0040b064 | DAT_007df9b4
    MOV dword ptr [ESP + 0x4],EAX       ; 0040b06a
    MOV EAX,0x2                         ; 0040b06e
    MOV dword ptr [0x007df9bc],EBX      ; 0040b073 | DAT_007df9bc
    MOV [0x007df9b8],EAX                ; 0040b079 | DAT_007df9b8
    CALL FUN_0040afa0                   ; 0040b07e
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040afa0()
    ADD ESP,0x4                         ; 0040b083
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040b086
    PUSH EBX                            ; 0040b08c
    CALL dword ptr [EAX + 0xd4]         ; 0040b08d
    ADD ESP,0x4                         ; 0040b093
    PUSH -0x1                           ; 0040b096
    CALL FUN_0040afa0                   ; 0040b098
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040afa0()
    ADD ESP,0x4                         ; 0040b09d
    PUSH EBX                            ; 0040b0a0
    PUSH ESI                            ; 0040b0a1
    PUSH 0x5f0990                       ; 0040b0a2 | DAT_005f0990
    PUSH 0x5b58ad                       ; 0040b0a7 | = "%s} %s \"%s\"\n"
    PUSH EDI                            ; 0040b0ac
    CALL FUN_005a3140                   ; 0040b0ad
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    MOV DH,byte ptr [EDI + 0xc]         ; 0040b0b2
    ADD ESP,0x14                        ; 0040b0b5
    TEST DH,0x20                        ; 0040b0b8
    JNZ 0x0040b0dc                      ; 0040b0bb
        ;   XREF to: 0040b0dc (CONDITIONAL_JUMP)  ; LAB_0040b0dc
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040b0bd
        ;   Label: LAB_0040b0bd
    MOV [0x007df9b4],EAX                ; 0040b0c1 | DAT_007df9b4
    MOV EAX,dword ptr [ESP]             ; 0040b0c6
    MOV dword ptr [0x007df9bc],EBP      ; 0040b0c9 | DAT_007df9bc
    MOV [0x007df9b8],EAX                ; 0040b0cf | DAT_007df9b8
    ADD ESP,0x8                         ; 0040b0d4
    POP EBP                             ; 0040b0d7
    POP EDI                             ; 0040b0d8
    POP ESI                             ; 0040b0d9
    POP EBX                             ; 0040b0da
    RET                                 ; 0040b0db
    PUSH ESI                            ; 0040b0dc
        ;   Label: LAB_0040b0dc
    MOV EDX,0x5b58ba                    ; 0040b0dd | = "..\\core\\actor.cpp"
    MOV ECX,0x80b                       ; 0040b0e2
    PUSH 0x5b58cc                       ; 0040b0e7 | = "IO Error after writing actor of type %s"
    MOV dword ptr [0x01d71de0],EDX      ; 0040b0ec | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0040b0f2 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0040b0f8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x8                         ; 0040b0fd
    JMP 0x0040b0bd                      ; 0040b100
        ;   XREF to: 0040b0bd (UNCONDITIONAL_JUMP)  ; LAB_0040b0bd

