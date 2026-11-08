; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ca370(void)
;
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   entry at 005c3258
;
; Referenced Globals:
;   void* PTR_GetModuleHandleA_005d05c0 = 001d0f4c
;   undefined4 DAT_0062659c
;   undefined4 DAT_006265c0
;   undefined4 DAT_006265c4
;   undefined4 DAT_00626ad4
;
; Called Functions:
;   FUN_005b2e00
;   FUN_005bfb70
;   FUN_005c31c3
;   FUN_005c5348
;   FUN_005ca454
;   FUN_005cb630
;   FUN_005cc370
;   FUN_005ccb40
;   GetModuleHandleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca370
        ;   Label: FUN_005ca370
    PUSH EBP                            ; 005ca371
    MOV EBP,ESP                         ; 005ca372
    SUB ESP,0x8                         ; 005ca374
    MOV EAX,0x1                         ; 005ca377
    CALL FUN_005cb630                   ; 005ca37c
        ;   XREF to: 005cb630 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb630()
    MOV EAX,[0x00626ad4]                ; 005ca381 | DAT_00626ad4
    ADD EAX,0x3                         ; 005ca386
    AND AL,0xfc                         ; 005ca389
    SUB ESP,EAX                         ; 005ca38b
    MOV EBX,ESP                         ; 005ca38d
    MOV EDX,dword ptr [0x00626ad4]      ; 005ca38f | DAT_00626ad4
    PUSH EDX                            ; 005ca395
    PUSH 0x0                            ; 005ca396
    PUSH EBX                            ; 005ca398
    CALL FUN_005bfb70                   ; 005ca399
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 005ca39e
    MOV EAX,[0x00626ad4]                ; 005ca3a1 | DAT_00626ad4
    PUSH EBX                            ; 005ca3a6
    MOV dword ptr [EBX + 0xf0],EAX      ; 005ca3a7
    LEA EAX,[EBP + -0x8]                ; 005ca3ad
    PUSH EAX                            ; 005ca3b0
    CALL FUN_005c5348                   ; 005ca3b1
        ;   XREF to: 005c5348 (UNCONDITIONAL_CALL)  ; undefined FUN_005c5348()
    MOV EBX,dword ptr [0x006265c0]      ; 005ca3b6 | DAT_006265c0
    ADD EBX,0x3                         ; 005ca3bc
    ADD ESP,0x8                         ; 005ca3bf
    AND BL,0xfc                         ; 005ca3c2
    CALL FUN_005cc370                   ; 005ca3c5
        ;   XREF to: 005cc370 (UNCONDITIONAL_CALL)  ; undefined FUN_005cc370()
    CMP EBX,EAX                         ; 005ca3ca
    JNC 0x005ca3e4                      ; 005ca3cc
        ;   XREF to: 005ca3e4 (CONDITIONAL_JUMP)  ; LAB_005ca3e4
    PUSH EBX                            ; 005ca3ce
    CALL FUN_005c31c3                   ; 005ca3cf
        ;   XREF to: 005c31c3 (UNCONDITIONAL_CALL)  ; undefined FUN_005c31c3()
    MOV EAX,[0x006265c0]                ; 005ca3d4 | DAT_006265c0
    ADD EAX,0x3                         ; 005ca3d9
    AND AL,0xfc                         ; 005ca3dc
    SUB ESP,EAX                         ; 005ca3de
    MOV EAX,ESP                         ; 005ca3e0
    JMP 0x005ca3e6                      ; 005ca3e2
        ;   XREF to: 005ca3e6 (UNCONDITIONAL_JUMP)  ; LAB_005ca3e6
    XOR EAX,EAX                         ; 005ca3e4
        ;   Label: LAB_005ca3e4
    MOV EBX,dword ptr [0x006265c0]      ; 005ca3e6 | DAT_006265c0
        ;   Label: LAB_005ca3e6
    ADD EAX,EBX                         ; 005ca3ec
    MOV [0x006265c4],EAX                ; 005ca3ee | DAT_006265c4
    CALL FUN_005ccb40                   ; 005ca3f3
        ;   XREF to: 005ccb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005ccb40()
    PUSH 0xa                            ; 005ca3f8
    MOV EBX,dword ptr [0x0062659c]      ; 005ca3fa | DAT_0062659c
    PUSH EBX                            ; 005ca400
    PUSH 0x0                            ; 005ca401
    PUSH 0x0                            ; 005ca403
    CALL dword ptr CS:[0x5d05c0]        ; 005ca405 | PTR_GetModuleHandleA_005d05c0
    PUSH EAX                            ; 005ca40c
    CALL FUN_005b2e00                   ; 005ca40d
        ;   XREF to: 005b2e00 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2e00()
    PUSH EAX                            ; 005ca412
    CALL FUN_005ca454                   ; 005ca413
        ;   XREF to: 005ca454 (UNCONDITIONAL_CALL)  ; undefined FUN_005ca454()
    ADD ESP,0x4                         ; 005ca418
    MOV ESP,EBP                         ; 005ca41b
    POP EBP                             ; 005ca41d
    POP EBX                             ; 005ca41e
    RET                                 ; 005ca41f

