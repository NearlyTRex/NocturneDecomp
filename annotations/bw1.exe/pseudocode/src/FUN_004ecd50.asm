; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ecd50(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_index_005e4bd5
;   TerminatedCString s_heroName_005e4bdb
;   undefined4 DAT_0061ef24
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b670
;   FUN_0040c040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ecd50
        ;   Label: FUN_004ecd50
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ecd51
    PUSH EBX                            ; 004ecd55
    CALL FUN_0040c040                   ; 004ecd56
        ;   XREF to: 0040c040 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c040()
    ADD ESP,0x4                         ; 004ecd5b
    PUSH 0x5e4bd5                       ; 004ecd5e | = "index"
    LEA EAX,[EBX + 0x158]               ; 004ecd63
    PUSH EAX                            ; 004ecd69
    CALL FUN_0040b670                   ; 004ecd6a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV EDX,dword ptr [0x0061ef24]      ; 004ecd6f | DAT_0061ef24
    ADD ESP,0x8                         ; 004ecd75
    CMP EDX,0x2                         ; 004ecd78
    JGE 0x004ecd7f                      ; 004ecd7b
        ;   XREF to: 004ecd7f (CONDITIONAL_JUMP)  ; LAB_004ecd7f
    POP EBX                             ; 004ecd7d
    RET                                 ; 004ecd7e
    PUSH 0x5e4bdb                       ; 004ecd7f | = "heroName"
        ;   Label: LAB_004ecd7f
    LEA EAX,[EBX + 0x15c]               ; 004ecd84
    PUSH EAX                            ; 004ecd8a
    CALL FUN_0040b440                   ; 004ecd8b
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004ecd90
    POP EBX                             ; 004ecd93
    RET                                 ; 004ecd94

