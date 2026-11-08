; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040de60(undefined4 param_1)
;
;
; XREF[4]:
;   FUN_0040e0f0 at 0040e0f6
;   FUN_0040e260 at 0040e266
;   FUN_0040e3d0 at 0040e3d6
;   FUN_0040e720 at 0040e775
;
; Referenced Globals:
;   TerminatedCString s_bullet_kfm_005b60b7
;   undefined1 DAT_005b60c2
;   undefined1 DAT_005b60c3
;   undefined1 DAT_005b60c4
;   undefined1 DAT_005b60c5
;   void* PTR_FUN_005db134 = 0040def0
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040de60
        ;   Label: FUN_0040de60
    PUSH ESI                            ; 0040de61
    PUSH EDI                            ; 0040de62
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040de63
    PUSH EBX                            ; 0040de67
    CALL FUN_00408600                   ; 0040de68
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 0040de6d
    ADD EAX,0x158                       ; 0040de70
    PUSH EAX                            ; 0040de75
    CALL FUN_00462500                   ; 0040de76
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 0040de7b
    LEA EBX,[EAX + 0xfffffea8]          ; 0040de7e
    PUSH 0x5b60b7                       ; 0040de84 | = "bullet.kfm"
    LEA EAX,[EBX + 0x158]               ; 0040de89
    PUSH EAX                            ; 0040de8f
    MOV dword ptr [EBX + 0x154],0x5db134 ; 0040de90 | PTR_FUN_005db134
    CALL FUN_004625f0                   ; 0040de9a
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0040de9f
    MOV ESI,0x5b60c2                    ; 0040dea2 | DAT_005b60c2
    LEA EDI,[EBX + 0x2d4]               ; 0040dea7
    PUSH EDI                            ; 0040dead
    MOV AL,byte ptr [ESI]               ; 0040deae | DAT_005b60c2 | DAT_005b60c4
        ;   Label: LAB_0040deae
    MOV byte ptr [EDI],AL               ; 0040deb0
    CMP AL,0x0                          ; 0040deb2
    JZ 0x0040dec6                       ; 0040deb4
        ;   XREF to: 0040dec6 (CONDITIONAL_JUMP)  ; LAB_0040dec6
    MOV AL,byte ptr [ESI + 0x1]         ; 0040deb6 | DAT_005b60c3 | DAT_005b60c5
    ADD ESI,0x2                         ; 0040deb9
    MOV byte ptr [EDI + 0x1],AL         ; 0040debc
    ADD EDI,0x2                         ; 0040debf
    CMP AL,0x0                          ; 0040dec2
    JNZ 0x0040deae                      ; 0040dec4
        ;   XREF to: 0040deae (CONDITIONAL_JUMP)  ; LAB_0040deae
    POP EDI                             ; 0040dec6
        ;   Label: LAB_0040dec6
    MOV dword ptr [EBX + 0x314],0x14    ; 0040dec7
    MOV dword ptr [EBX + 0x318],0x0     ; 0040ded1
    MOV EAX,EBX                         ; 0040dedb
    MOV dword ptr [EBX + 0x31c],0x0     ; 0040dedd
    POP EDI                             ; 0040dee7
    POP ESI                             ; 0040dee8
    POP EBX                             ; 0040dee9
    RET                                 ; 0040deea

