; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a33b0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Chasing_005f0121
;
; Called Functions:
;   FUN_005035c0
;   FUN_00503620
;   FUN_0059d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a33b0
        ;   Label: FUN_005a33b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a33b1
    ADD EBX,0x2b4                       ; 005a33b5
    PUSH EBX                            ; 005a33bb
    CALL FUN_005035c0                   ; 005a33bc
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a33c1
    ADD ESP,0x4                         ; 005a33c4
    CMP EAX,0xb                         ; 005a33c7
    JZ 0x005a33db                       ; 005a33ca
        ;   XREF to: 005a33db (CONDITIONAL_JUMP)  ; LAB_005a33db
    PUSH 0x1                            ; 005a33cc
    PUSH 0x5                            ; 005a33ce
    PUSH EBX                            ; 005a33d0
    CALL FUN_00503620                   ; 005a33d1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a33d6
    POP EBX                             ; 005a33d9
    RET                                 ; 005a33da
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a33db
        ;   Label: LAB_005a33db
    PUSH 0x5f0121                       ; 005a33df | = "Chasing"
    ADD EAX,0x10af8                     ; 005a33e4
    PUSH EAX                            ; 005a33e9
    CALL FUN_0059d8e0                   ; 005a33ea
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a33ef
    POP EBX                             ; 005a33f2
    RET                                 ; 005a33f3

