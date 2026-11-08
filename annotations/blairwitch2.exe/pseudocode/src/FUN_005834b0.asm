; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005834b0(int param_1)
;
;
; XREF[1]:
;   FUN_00581910 at 0058274f
;
; Referenced Globals:
;   undefined4 s_voicusummon_wav_005edb7f+1
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01e661b8
;   undefined4 DAT_01fb331c
;   undefined4 DAT_01fb3320
;   undefined4 DAT_026536cc
;
; Called Functions:
;   FUN_0040c8f0
;   FUN_00581260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005834b0
        ;   Label: FUN_005834b0
    PUSH ESI                            ; 005834b1
    PUSH EDI                            ; 005834b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005834b3
    PUSH 0x5edb80                       ; 005834b7 | s_voicusummon_wav_005edb7f+1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005834bc
    PUSH EBX                            ; 005834c2
    XOR ESI,ESI                         ; 005834c3
    CALL dword ptr [EAX + 0x34]         ; 005834c5
    ADD ESP,0x8                         ; 005834c8
    XOR EBX,EBX                         ; 005834cb
    MOV EAX,[0x0061b5a8]                ; 005834cd | DAT_0061b5a8 | DAT_01e661b8
        ;   Label: LAB_005834cd
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 005834d2 | DAT_01fb331c
    JL 0x005834de                       ; 005834d8
        ;   XREF to: 005834de (CONDITIONAL_JUMP)  ; LAB_005834de
    POP EDI                             ; 005834da
    POP ESI                             ; 005834db
    POP EBX                             ; 005834dc
    RET                                 ; 005834dd
    MOV ECX,dword ptr [0x026536cc]      ; 005834de | DAT_026536cc
        ;   Label: LAB_005834de
    PUSH ECX                            ; 005834e4
    MOV EDI,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 005834e5 | DAT_01fb3320
    PUSH EDI                            ; 005834ec
    CALL FUN_0040c8f0                   ; 005834ed
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 005834f2
    TEST EAX,EAX                        ; 005834f5
    JZ 0x0058350b                       ; 005834f7
        ;   XREF to: 0058350b (CONDITIONAL_JUMP)  ; LAB_0058350b
    CMP dword ptr [EAX + 0x10ca0],0x0   ; 005834f9
    JZ 0x0058350b                       ; 00583500
        ;   XREF to: 0058350b (CONDITIONAL_JUMP)  ; LAB_0058350b
    PUSH EAX                            ; 00583502
    CALL FUN_00581260                   ; 00583503
        ;   XREF to: 00581260 (UNCONDITIONAL_CALL)  ; undefined FUN_00581260()
    ADD ESP,0x4                         ; 00583508
    INC EBX                             ; 0058350b
        ;   Label: LAB_0058350b
    ADD ESI,0x4                         ; 0058350c
    JMP 0x005834cd                      ; 0058350f
        ;   XREF to: 005834cd (UNCONDITIONAL_JUMP)  ; LAB_005834cd

