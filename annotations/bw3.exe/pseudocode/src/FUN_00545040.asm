; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00545040(int param_1)
;
;
; XREF[1]:
;   FUN_005438d0 at 005447a6
;
; Referenced Globals:
;   TerminatedCString s_shb_alert_wav_005d1322
;
; Called Functions:
;   FUN_00556700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00545040
        ;   Label: FUN_00545040
    MOV EBX,dword ptr [ESP + 0x8]       ; 00545041
    MOV EDX,dword ptr [EBX + 0xd078]    ; 00545045
    PUSH EDX                            ; 0054504b
    CALL FUN_00556700                   ; 0054504c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 00545051
    TEST EAX,EAX                        ; 00545054
    JZ 0x0054505a                       ; 00545056
        ;   XREF to: 0054505a (CONDITIONAL_JUMP)  ; LAB_0054505a
    POP EBX                             ; 00545058
    RET                                 ; 00545059
    PUSH 0x5d1322                       ; 0054505a | = "shb_alert??.wav"
        ;   Label: LAB_0054505a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054505f
    PUSH EBX                            ; 00545065
    CALL dword ptr [EAX + 0x2c]         ; 00545066
    MOV dword ptr [EBX + 0xd07c],0x41700000 ; 00545069
    ADD ESP,0x8                         ; 00545073
    MOV dword ptr [EBX + 0xd078],EAX    ; 00545076
    POP EBX                             ; 0054507c
    RET                                 ; 0054507d

