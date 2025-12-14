; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0(CFireEffect * this_ptr, int render_mode, int render_completeness)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_mode
; int              Stack[0xc]:4   render_completeness
;
; XREF[4]:
;   core_set.cpp_CDemonSet_FUN_0056c1a0 at 0056c5dc
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b737
;   core_set.cpp_FUN_00571380 at 005713a6
;   core_set.cpp_FUN_005713c0 at 005713fe
;
; Referenced Globals:
;   int g_BulletHoleActiveCount
;   CBulletHole[256] g_BulletHolePool
;   undefined4 DAT_02d2a200
;   undefined4 DAT_02d2a204
;   undefined4 DAT_02d2a230
;   undefined4 DAT_02d2a23c
;   undefined4 DAT_02d2a240
;   int g_StakeActiveCount
;   CStake[256] g_StakePool
;   undefined4 DAT_02d2e054
;   undefined4 DAT_02d2e05c
;   undefined4 DAT_02d2e2b4
;   CCrater[20] g_CraterPool
;   undefined4 DAT_02d6c6a8
;   undefined4 DAT_02d6c714
;   ... and 2 more
;
; Called Functions:
;   core_fire.cpp_CBulletHole_initRender_FUN_004bfa40
;   core_fire.cpp_CBulletHole_render_FUN_004bfac0
;   core_fire.cpp_CCrater_render_FUN_004c4620
;   core_fire.cpp_CStake_render_FUN_004c0140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c74a0
        ;   Label: core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0
    PUSH ESI                            ; 004c74a1
    PUSH EDI                            ; 004c74a2
    PUSH EBP                            ; 004c74a3
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004c74a4
    PUSH 0x2d2a1f4                      ; 004c74a8 | g_BulletHolePool
    CALL core_fire.cpp_CBulletHole_initRender_FUN_004bfa40 ; 004c74ad
        ;   XREF to: 004bfa40 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_initRender_FUN_004bfa40(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004c74b2
    CMP dword ptr [ESP + 0x18],0x0      ; 004c74b5
    JZ 0x004c7585                       ; 004c74ba
        ;   XREF to: 004c7585 (CONDITIONAL_JUMP)  ; LAB_004c7585
    MOV EBX,dword ptr [0x02d2a1ec]      ; 004c74c0 | g_BulletHoleActiveCount
    XOR ESI,ESI                         ; 004c74c6
    TEST EBX,EBX                        ; 004c74c8
    JLE 0x004c74f4                      ; 004c74ca
        ;   XREF to: 004c74f4 (CONDITIONAL_JUMP)  ; LAB_004c74f4
    XOR EBX,EBX                         ; 004c74cc
    CMP dword ptr [EBX + 0x2d2a204],0x0 ; 004c74ce | DAT_02d2a204 | DAT_02d2a240
        ;   Label: LAB_004c74ce
    JNZ 0x004c74e7                      ; 004c74d5
        ;   XREF to: 004c74e7 (CONDITIONAL_JUMP)  ; LAB_004c74e7
    MOV EAX,0x2d2a1f4                   ; 004c74d7 | g_BulletHolePool
    ADD EAX,EBX                         ; 004c74dc | g_BulletHolePool | DAT_02d2a230
    PUSH EAX                            ; 004c74de | g_BulletHolePool | DAT_02d2a230
    CALL core_fire.cpp_CBulletHole_render_FUN_004bfac0 ; 004c74df
        ;   XREF to: 004bfac0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_004bfac0(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004c74e4
    MOV EAX,[0x02d2a1ec]                ; 004c74e7 | g_BulletHoleActiveCount
        ;   Label: LAB_004c74e7
    INC ESI                             ; 004c74ec
    ADD EBX,0x3c                        ; 004c74ed
    CMP ESI,EAX                         ; 004c74f0
    JL 0x004c74ce                       ; 004c74f2
        ;   XREF to: 004c74ce (CONDITIONAL_JUMP)  ; LAB_004c74ce
    CMP dword ptr [ESP + 0x18],0x0      ; 004c74f4
        ;   Label: LAB_004c74f4
    JZ 0x004c754c                       ; 004c74f9
        ;   XREF to: 004c754c (CONDITIONAL_JUMP)  ; LAB_004c754c
    MOV ECX,dword ptr [0x02d2ddf4]      ; 004c74fb | g_StakeActiveCount
    XOR ESI,ESI                         ; 004c7501
    TEST ECX,ECX                        ; 004c7503
    JLE 0x004c754c                      ; 004c7505
        ;   XREF to: 004c754c (CONDITIONAL_JUMP)  ; LAB_004c754c
    MOV EDI,0x2d2ddfc                   ; 004c7507 | g_StakePool
    XOR EBX,EBX                         ; 004c750c
    MOV EAX,dword ptr [EDI + 0x258]     ; 004c750e | DAT_02d2e054 | DAT_02d2e2b4
        ;   Label: LAB_004c750e
    TEST EAX,EAX                        ; 004c7514
    JZ 0x004c75d7                       ; 004c7516
        ;   XREF to: 004c75d7 (CONDITIONAL_JUMP)  ; LAB_004c75d7
    CMP dword ptr [EBX + 0x2d2ddfc],0x0 ; 004c751c | g_StakePool | DAT_02d2e05c
    JZ 0x004c7535                       ; 004c7523
        ;   XREF to: 004c7535 (CONDITIONAL_JUMP)  ; LAB_004c7535
    MOV EAX,0x2d2ddfc                   ; 004c7525 | g_StakePool
        ;   Label: LAB_004c7525
    ADD EAX,EBX                         ; 004c752a | g_StakePool | DAT_02d2e05c
    PUSH EAX                            ; 004c752c | g_StakePool | DAT_02d2e05c
    CALL core_fire.cpp_CStake_render_FUN_004c0140 ; 004c752d
        ;   XREF to: 004c0140 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CStake_render_FUN_004c0140(CStake * this_ptr)
    ADD ESP,0x4                         ; 004c7532
    MOV ECX,dword ptr [0x02d2ddf4]      ; 004c7535 | g_StakeActiveCount
        ;   Label: LAB_004c7535
    ADD EBX,0x260                       ; 004c753b
    INC ESI                             ; 004c7541
    ADD EDI,0x260                       ; 004c7542
    CMP ESI,ECX                         ; 004c7548
    JL 0x004c750e                       ; 004c754a
        ;   XREF to: 004c750e (CONDITIONAL_JUMP)  ; LAB_004c750e
    MOV EBX,dword ptr [ESP + 0x18]      ; 004c754c
        ;   Label: LAB_004c754c
    TEST EBX,EBX                        ; 004c7550
    JZ 0x004c75e6                       ; 004c7552
        ;   XREF to: 004c75e6 (CONDITIONAL_JUMP)  ; LAB_004c75e6
    MOV EBX,0x2d6c6a4                   ; 004c7558 | g_CraterPool
    LEA ESI,[EBX + 0x8c0]               ; 004c755d | g_CraterActiveListHead
    PUSH EBX                            ; 004c7563 | g_CraterPool | DAT_02d6c714
        ;   Label: LAB_004c7563
    CALL core_fire.cpp_CCrater_render_FUN_004c4620 ; 004c7564
        ;   XREF to: 004c4620 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_004c4620(CCrater * this_ptr)
    ADD EBX,0x70                        ; 004c7569 | DAT_02d6c714
    ADD ESP,0x4                         ; 004c756c
    CMP EBX,ESI                         ; 004c756f
    JNZ 0x004c7563                      ; 004c7571
        ;   XREF to: 004c7563 (CONDITIONAL_JUMP)  ; LAB_004c7563
    LEA EAX,[EAX]                       ; 004c7573
    LEA EDX,[EDX]                       ; 004c7579
    NOP                                 ; 004c757f
    POP EBP                             ; 004c7580
        ;   Label: LAB_004c7580
    POP EDI                             ; 004c7581
    POP ESI                             ; 004c7582
    POP EBX                             ; 004c7583
    RET                                 ; 004c7584
    MOV ECX,dword ptr [0x02d2a1ec]      ; 004c7585 | g_BulletHoleActiveCount
        ;   Label: LAB_004c7585
    XOR ESI,ESI                         ; 004c758b
    TEST ECX,ECX                        ; 004c758d
    JLE 0x004c74f4                      ; 004c758f
        ;   XREF to: 004c74f4 (CONDITIONAL_JUMP)  ; LAB_004c74f4
    XOR EBX,EBX                         ; 004c7595
    XOR EDI,EDI                         ; 004c7597
    CMP EDI,dword ptr [EBX + 0x2d2a200] ; 004c7599 | DAT_02d2a200 | DAT_02d2a23c
        ;   Label: LAB_004c7599
    JZ 0x004c75c3                       ; 004c759f
        ;   XREF to: 004c75c3 (CONDITIONAL_JUMP)  ; LAB_004c75c3
    CMP EDI,dword ptr [EBX + 0x2d2a204] ; 004c75a1 | DAT_02d2a204 | DAT_02d2a240
    JNZ 0x004c75c3                      ; 004c75a7
        ;   XREF to: 004c75c3 (CONDITIONAL_JUMP)  ; LAB_004c75c3
    MOV EAX,0x2d2a1f4                   ; 004c75a9 | g_BulletHolePool
    ADD EAX,EBX                         ; 004c75ae | g_BulletHolePool | DAT_02d2a230
    PUSH EAX                            ; 004c75b0 | g_BulletHolePool | DAT_02d2a230
    CALL core_fire.cpp_CBulletHole_render_FUN_004bfac0 ; 004c75b1
        ;   XREF to: 004bfac0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_004bfac0(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004c75b6
    TEST EBP,EBP                        ; 004c75b9
    JZ 0x004c75c3                       ; 004c75bb
        ;   XREF to: 004c75c3 (CONDITIONAL_JUMP)  ; LAB_004c75c3
    MOV dword ptr [EBX + 0x2d2a200],EDI ; 004c75bd | DAT_02d2a200
    MOV ECX,dword ptr [0x02d2a1ec]      ; 004c75c3 | g_BulletHoleActiveCount
        ;   Label: LAB_004c75c3
    INC ESI                             ; 004c75c9
    ADD EBX,0x3c                        ; 004c75ca
    CMP ESI,ECX                         ; 004c75cd
    JGE 0x004c74f4                      ; 004c75cf
        ;   XREF to: 004c74f4 (CONDITIONAL_JUMP)  ; LAB_004c74f4
    JMP 0x004c7599                      ; 004c75d5
        ;   XREF to: 004c7599 (UNCONDITIONAL_JUMP)  ; LAB_004c7599
    MOV dword ptr [EBX + 0x2d2ddfc],0x1 ; 004c75d7 | DAT_02d2e05c
        ;   Label: LAB_004c75d7
    JMP 0x004c7525                      ; 004c75e1
        ;   XREF to: 004c7525 (UNCONDITIONAL_JUMP)  ; LAB_004c7525
    XOR EDI,EDI                         ; 004c75e6
        ;   Label: LAB_004c75e6
    CMP EDI,dword ptr [EBX + 0x2d6c6a8] ; 004c75e8 | DAT_02d6c6a8 | DAT_02d6c718
        ;   Label: LAB_004c75e8
    JZ 0x004c760a                       ; 004c75ee
        ;   XREF to: 004c760a (CONDITIONAL_JUMP)  ; LAB_004c760a
    MOV ESI,0x2d6c6a4                   ; 004c75f0 | g_CraterPool
    ADD ESI,EBX                         ; 004c75f5
    PUSH ESI                            ; 004c75f7
    CALL core_fire.cpp_CCrater_render_FUN_004c4620 ; 004c75f8
        ;   XREF to: 004c4620 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_004c4620(CCrater * this_ptr)
    ADD ESP,0x4                         ; 004c75fd
    TEST EBP,EBP                        ; 004c7600
    JZ 0x004c760a                       ; 004c7602
        ;   XREF to: 004c760a (CONDITIONAL_JUMP)  ; LAB_004c760a
    MOV dword ptr [EBX + 0x2d6c6a8],EDI ; 004c7604 | DAT_02d6c6a8
    ADD EBX,0x70                        ; 004c760a
        ;   Label: LAB_004c760a
    CMP EBX,0x8c0                       ; 004c760d
    JZ 0x004c7580                       ; 004c7613
        ;   XREF to: 004c7580 (CONDITIONAL_JUMP)  ; LAB_004c7580
    JMP 0x004c75e8                      ; 004c7619
        ;   XREF to: 004c75e8 (UNCONDITIONAL_JUMP)  ; LAB_004c75e8

