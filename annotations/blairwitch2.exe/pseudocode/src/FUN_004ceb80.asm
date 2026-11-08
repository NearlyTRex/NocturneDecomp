; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ceb80(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_stopGettingGrabbed_005d9c26
;   TerminatedCString s_GETGRABBED_005d9c50
;   TerminatedCString s_STAND_005d9c5b
;   void* PTR_DAT_00609ed0 = 007c158c
;   undefined4 DAT_0078a123
;   undefined4 DAT_007c158c
;
; Called Functions:
;   FUN_00427a10
;   FUN_00436710
;   FUN_00502fa0
;   FUN_005036b0
;   FUN_00503860
;   FUN_005038a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ceb80
        ;   Label: FUN_004ceb80
    PUSH ESI                            ; 004ceb81
    SUB ESP,0x4                         ; 004ceb82
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ceb85
    MOV EDX,dword ptr [EBX + 0x276c]    ; 004ceb89
    TEST EDX,EDX                        ; 004ceb8f
    JNZ 0x004cec0c                      ; 004ceb91
        ;   XREF to: 004cec0c (CONDITIONAL_JUMP)  ; LAB_004cec0c
    CMP dword ptr [EBX + 0x68],0x78a123 ; 004ceb97 | DAT_0078a123
        ;   Label: LAB_004ceb97
    JNZ 0x004cebfd                      ; 004ceb9e
        ;   XREF to: 004cebfd (CONDITIONAL_JUMP)  ; LAB_004cebfd
    LEA EAX,[EBX + 0x2b4]               ; 004ceba0
    CMP dword ptr [EAX + 0x22b0],0x0    ; 004ceba6
    JZ 0x004cebfd                       ; 004cebad
        ;   XREF to: 004cebfd (CONDITIONAL_JUMP)  ; LAB_004cebfd
    PUSH 0x0                            ; 004cebaf
    PUSH 0x5d9c50                       ; 004cebb1 | = "GETGRABBED"
    LEA ESI,[EBX + 0x2b4]               ; 004cebb6
    PUSH ESI                            ; 004cebbc
    CALL FUN_00503860                   ; 004cebbd
        ;   XREF to: 00503860 (UNCONDITIONAL_CALL)  ; undefined FUN_00503860()
    ADD ESP,0x4                         ; 004cebc2
    PUSH EAX                            ; 004cebc5
    CALL FUN_00502fa0                   ; 004cebc6
        ;   XREF to: 00502fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00502fa0()
    ADD ESP,0xc                         ; 004cebcb
    TEST EAX,EAX                        ; 004cebce
    JL 0x004cebfd                       ; 004cebd0
        ;   XREF to: 004cebfd (CONDITIONAL_JUMP)  ; LAB_004cebfd
    PUSH EAX                            ; 004cebd2
    PUSH ESI                            ; 004cebd3
    CALL FUN_005038a0                   ; 004cebd4
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x8],EAX       ; 004cebd9
    FLD float ptr [ESP + 0x8]           ; 004cebdd
    FLDZ                                ; 004cebe1
    ADD ESP,0x8                         ; 004cebe3
    FCOMPP                              ; 004cebe6
    FNSTSW AX                           ; 004cebe8
    SAHF                                ; 004cebea
    JNC 0x004cebfd                      ; 004cebeb
        ;   XREF to: 004cebfd (CONDITIONAL_JUMP)  ; LAB_004cebfd
    PUSH 0x1                            ; 004cebed
    PUSH 0x5d9c5b                       ; 004cebef | = "STAND"
    PUSH ESI                            ; 004cebf4
    CALL FUN_005036b0                   ; 004cebf5
        ;   XREF to: 005036b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005036b0()
    ADD ESP,0xc                         ; 004cebfa
    PUSH EBX                            ; 004cebfd
        ;   Label: LAB_004cebfd
    CALL FUN_00427a10                   ; 004cebfe
        ;   XREF to: 00427a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00427a10()
    ADD ESP,0x4                         ; 004cec03
    ADD ESP,0x4                         ; 004cec06
    POP ESI                             ; 004cec09
    POP EBX                             ; 004cec0a
    RET                                 ; 004cec0b
    PUSH EDI                            ; 004cec0c
        ;   Label: LAB_004cec0c
    MOV ECX,dword ptr [EBX + 0x2770]    ; 004cec0d
    PUSH ECX                            ; 004cec13
    PUSH EDX                            ; 004cec14
    PUSH 0x5d9c26                       ; 004cec15 | = "CHero::stopGettingGrabbed by %s, type..."
    MOV EDI,dword ptr [0x00609ed0]      ; 004cec1a | PTR_DAT_00609ed0
    PUSH EDI                            ; 004cec20 | DAT_007c158c
    CALL FUN_00436710                   ; 004cec21
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0x10                        ; 004cec26
    POP EDI                             ; 004cec29
    JMP 0x004ceb97                      ; 004cec2a
        ;   XREF to: 004ceb97 (UNCONDITIONAL_JUMP)  ; LAB_004ceb97

