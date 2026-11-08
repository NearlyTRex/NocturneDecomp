; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e170(void)
;
;
; XREF[1]:
;   FUN_004a24a0 at 004a253e
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fd60c
;   undefined4 DAT_005fd624
;   undefined4 DAT_005fd7ec
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e170
        ;   Label: FUN_0049e170
    PUSH ESI                            ; 0049e171
    MOV EBX,0x5fd60c                    ; 0049e172 | DAT_005fd60c
    LEA ESI,[EBX + 0x1e0]               ; 0049e177 | DAT_005fd7ec
    PUSH EBX                            ; 0049e17d | DAT_005fd60c | DAT_005fd624
        ;   Label: LAB_0049e17d
    MOV EDX,dword ptr [0x005f2afc]      ; 0049e17e | DAT_005f2afc
    PUSH EDX                            ; 0049e184 | DAT_01bdd7e4
    CALL FUN_0046e5e0                   ; 0049e185
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD EBX,0x18                        ; 0049e18a
    ADD ESP,0x8                         ; 0049e18d
    CMP EBX,ESI                         ; 0049e190
    JNZ 0x0049e17d                      ; 0049e192
        ;   XREF to: 0049e17d (CONDITIONAL_JUMP)  ; LAB_0049e17d
    POP ESI                             ; 0049e194
    POP EBX                             ; 0049e195
    RET                                 ; 0049e196

