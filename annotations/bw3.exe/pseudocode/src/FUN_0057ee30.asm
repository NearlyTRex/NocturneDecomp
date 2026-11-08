; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057ee30(int param_1)
;
;
; XREF[2]:
;   FUN_0057d720 at 0057e49f
;   FUN_0057f6f0 at 0057f82e
;
; Referenced Globals:
;   TerminatedCString s_were_wav_005d7b43
;
; Called Functions:
;   FUN_00556700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ee30
        ;   Label: FUN_0057ee30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057ee31
    MOV EDX,dword ptr [EBX + 0xd070]    ; 0057ee35
    PUSH EDX                            ; 0057ee3b
    MOV dword ptr [EBX + 0xd074],0x41200000 ; 0057ee3c
    CALL FUN_00556700                   ; 0057ee46
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0057ee4b
    TEST EAX,EAX                        ; 0057ee4e
    JZ 0x0057ee54                       ; 0057ee50
        ;   XREF to: 0057ee54 (CONDITIONAL_JUMP)  ; LAB_0057ee54
    POP EBX                             ; 0057ee52
    RET                                 ; 0057ee53
    PUSH 0x5d7b43                       ; 0057ee54 | = "were?.wav"
        ;   Label: LAB_0057ee54
    MOV EAX,dword ptr [EBX + 0x154]     ; 0057ee59
    PUSH EBX                            ; 0057ee5f
    CALL dword ptr [EAX + 0x2c]         ; 0057ee60
    MOV dword ptr [EBX + 0xd074],0x41a00000 ; 0057ee63
    ADD ESP,0x8                         ; 0057ee6d
    MOV dword ptr [EBX + 0xd070],EAX    ; 0057ee70
    POP EBX                             ; 0057ee76
    RET                                 ; 0057ee77

