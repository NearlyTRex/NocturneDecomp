; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0af0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_index_005da074
;   TerminatedCString s_heroName_005da07a
;   undefined4 DAT_00617a60
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b960
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0af0
        ;   Label: FUN_004d0af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d0af1
    PUSH EBX                            ; 004d0af5
    CALL FUN_0040c330                   ; 004d0af6
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 004d0afb
    PUSH 0x5da074                       ; 004d0afe | = "index"
    LEA EAX,[EBX + 0x2b4]               ; 004d0b03
    PUSH EAX                            ; 004d0b09
    CALL FUN_0040b960                   ; 004d0b0a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV EDX,dword ptr [0x00617a60]      ; 004d0b0f | DAT_00617a60
    ADD ESP,0x8                         ; 004d0b15
    CMP EDX,0x2                         ; 004d0b18
    JGE 0x004d0b1f                      ; 004d0b1b
        ;   XREF to: 004d0b1f (CONDITIONAL_JUMP)  ; LAB_004d0b1f
    POP EBX                             ; 004d0b1d
    RET                                 ; 004d0b1e
    PUSH 0x5da07a                       ; 004d0b1f | = "heroName"
        ;   Label: LAB_004d0b1f
    LEA EAX,[EBX + 0x2b8]               ; 004d0b24
    PUSH EAX                            ; 004d0b2a
    CALL FUN_0040b730                   ; 004d0b2b
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004d0b30
    POP EBX                             ; 004d0b33
    RET                                 ; 004d0b34

