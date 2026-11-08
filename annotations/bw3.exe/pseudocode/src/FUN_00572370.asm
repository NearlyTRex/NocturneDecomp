; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00572370(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_00532b80 at 00532fe7
;
; Referenced Globals:
;   TerminatedCString s_junk_jnk_005d6e04
;   undefined4 DAT_005fff4c
;   undefined4 DAT_02cfd8bc
;
; Called Functions:
;   FUN_004cfbd0
;   FUN_004cfcd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572370
        ;   Label: FUN_00572370
    MOV EDX,dword ptr [0x005fff4c]      ; 00572371 | DAT_005fff4c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00572377
    PUSH EDX                            ; 0057237b
    MOV dword ptr [EAX],0x0             ; 0057237c
    CALL FUN_004cfbd0                   ; 00572382
        ;   XREF to: 004cfbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfbd0()
    ADD ESP,0x4                         ; 00572387
    PUSH 0x5d6e04                       ; 0057238a | = "junk.jnk"
    MOV ECX,dword ptr [0x005fff4c]      ; 0057238f | DAT_005fff4c
    PUSH ECX                            ; 00572395
    MOV EBX,0x1                         ; 00572396
    CALL FUN_004cfcd0                   ; 0057239b
        ;   XREF to: 004cfcd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cfcd0()
    ADD ESP,0x8                         ; 005723a0
    MOV dword ptr [0x02cfd8bc],EBX      ; 005723a3 | DAT_02cfd8bc
    POP EBX                             ; 005723a9
    RET                                 ; 005723aa

