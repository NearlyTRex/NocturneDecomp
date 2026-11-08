; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a17d0(undefined4 param_1)
;
;
; XREF[3]:
;   FUN_00402940 at 004029f6
;   FUN_004d6420 at 004d66e0
;   FUN_004d6990 at 004d6c05
;
; Referenced Globals:
;   undefined1* PTR_FUN_00607424 = 005a1860
;
; Called Functions:
;   FUN_005a14b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a17d0
        ;   Label: FUN_005a17d0
    PUSH EDX                            ; 005a17d4
    CALL FUN_005a14b0                   ; 005a17d5
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a14b0()
    MOV dword ptr [EAX],0x607424        ; 005a17da | PTR_FUN_00607424
    ADD ESP,0x4                         ; 005a17e0
    MOV dword ptr [EAX + 0x4],0x0       ; 005a17e3
    RET                                 ; 005a17ea

