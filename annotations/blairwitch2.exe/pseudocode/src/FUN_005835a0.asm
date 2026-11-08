; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005835a0(int param_1)
;
;
; XREF[1]:
;   FUN_00581910 at 00582744
;
; Referenced Globals:
;   TerminatedCString s_voicusummon_wav_005edba0
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01c264a4
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_00486a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005835a0
        ;   Label: FUN_005835a0
    PUSH ESI                            ; 005835a1
    PUSH EDI                            ; 005835a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005835a3
    PUSH 0x5edba0                       ; 005835a7 | = "voicusummon.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005835ac
    PUSH EBX                            ; 005835b2
    XOR ESI,ESI                         ; 005835b3
    CALL dword ptr [EAX + 0x34]         ; 005835b5
    ADD ESP,0x8                         ; 005835b8
    XOR EBX,EBX                         ; 005835bb
    MOV EAX,[0x0061b5a8]                ; 005835bd | DAT_0061b5a8 | DAT_01e661b8
        ;   Label: LAB_005835bd
    CMP ESI,dword ptr [EAX + 0x14d164]  ; 005835c2 | DAT_01fb331c
    JL 0x005835ce                       ; 005835c8
        ;   XREF to: 005835ce (CONDITIONAL_JUMP)  ; LAB_005835ce
    POP EDI                             ; 005835ca
    POP ESI                             ; 005835cb
    POP EBX                             ; 005835cc
    RET                                 ; 005835cd
    MOV ECX,dword ptr [0x01c264a4]      ; 005835ce | DAT_01c264a4
        ;   Label: LAB_005835ce
    PUSH ECX                            ; 005835d4
    MOV EDI,dword ptr [EBX + EAX*0x1 + 0x14d168] ; 005835d5 | DAT_01fb3320
    PUSH EDI                            ; 005835dc
    CALL FUN_0040c8f0                   ; 005835dd
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 005835e2
    TEST EAX,EAX                        ; 005835e5
    JZ 0x005835fb                       ; 005835e7
        ;   XREF to: 005835fb (CONDITIONAL_JUMP)  ; LAB_005835fb
    CMP dword ptr [EAX + 0x2b4],0x2     ; 005835e9
    JNZ 0x005835fb                      ; 005835f0
        ;   XREF to: 005835fb (CONDITIONAL_JUMP)  ; LAB_005835fb
    PUSH EAX                            ; 005835f2
    CALL FUN_00486a80                   ; 005835f3
        ;   XREF to: 00486a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00486a80()
    ADD ESP,0x4                         ; 005835f8
    INC ESI                             ; 005835fb
        ;   Label: LAB_005835fb
    ADD EBX,0x4                         ; 005835fc
    JMP 0x005835bd                      ; 005835ff
        ;   XREF to: 005835bd (UNCONDITIONAL_JUMP)  ; LAB_005835bd

