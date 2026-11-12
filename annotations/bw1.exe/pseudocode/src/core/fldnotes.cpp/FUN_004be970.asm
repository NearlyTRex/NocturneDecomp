; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004be970(int param_1)
;
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d8446
;
; Referenced Globals:
;   undefined4 DAT_0061d2e0
;   undefined4 DAT_0061d2f8
;   undefined4 DAT_0061d2fc
;   undefined4 DAT_0061d310
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_0061f2a4
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;   undefined4 DAT_01c43544
;   undefined4 DAT_01cc55cc
;   undefined4 DAT_01cc7b90
;   undefined4 CAlphaBitmap_01cc7cac.width
;   undefined4 CAlphaBitmap_01cc7cac.height
;   undefined4 g_STextViewInstance.pages
;   undefined4 DAT_01cc7f1c
;   ... and 4 more
;
; Called Functions:
;   core_flashlit.cpp_FUN_004ba490
;   core_flashlit.cpp_FUN_004ba540
;   core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004bc450
;   core_fldnotes.cpp_STextPage_findResourceAt_FUN_004bb110
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be970
        ;   Label: core_fldnotes.cpp_FUN_004be970
    PUSH ESI                            ; 004be971
    PUSH EBP                            ; 004be972
    MOV EDX,dword ptr [0x01cc55cc]      ; 004be973 | DAT_01cc55cc
    XOR EBX,EBX                         ; 004be979
    TEST EDX,EDX                        ; 004be97b
    JLE 0x004be9a0                      ; 004be97d
        ;   XREF to: 004be9a0 (CONDITIONAL_JUMP)  ; LAB_004be9a0
    MOV ESI,0x1cc55d0                   ; 004be97f
    PUSH ESI                            ; 004be984
        ;   Label: LAB_004be984
    CALL core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004bc450 ; 004be985
        ;   XREF to: 004bc450 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_revealAtHero_FUN_004bc450(SNotesMap * this_ptr)
    INC EBX                             ; 004be98a
    MOV ECX,dword ptr [0x01cc55cc]      ; 004be98b | DAT_01cc55cc
    ADD ESP,0x4                         ; 004be991
    ADD ESI,0x970                       ; 004be994
    CMP EBX,ECX                         ; 004be99a
    JL 0x004be984                       ; 004be99c
        ;   XREF to: 004be984 (CONDITIONAL_JUMP)  ; LAB_004be984
    MOV EAX,EAX                         ; 004be99e
    MOV EAX,dword ptr [ESP + 0x10]      ; 004be9a0
        ;   Label: LAB_004be9a0
    CMP dword ptr [EAX + 0x40],0x0      ; 004be9a4
    JZ 0x004be9c0                       ; 004be9a8
        ;   XREF to: 004be9c0 (CONDITIONAL_JUMP)  ; LAB_004be9c0
    MOV EAX,[0x0061d95c]                ; 004be9aa | g_CGamePtr
    CMP dword ptr [EAX + 0x244],0x0     ; 004be9af | g_CGameInstance.letterbox_mode
    JZ 0x004bea7e                       ; 004be9b6
        ;   XREF to: 004bea7e (CONDITIONAL_JUMP)  ; LAB_004bea7e
    POP EBP                             ; 004be9bc
        ;   Label: LAB_004be9bc
    POP ESI                             ; 004be9bd
    POP EBX                             ; 004be9be
    RET                                 ; 004be9bf
    PUSH 0x1cc7b94                      ; 004be9c0
        ;   Label: LAB_004be9c0
    MOV EBX,0x1cc7ba8                   ; 004be9c5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be9ca
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be9cf
    LEA ESI,[EBX + 0x78]                ; 004be9d2
    PUSH EBX                            ; 004be9d5
        ;   Label: LAB_004be9d5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be9d6
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004be9db
    ADD ESP,0x4                         ; 004be9de
    CMP EBX,ESI                         ; 004be9e1
    JNZ 0x004be9d5                      ; 004be9e3
        ;   XREF to: 004be9d5 (CONDITIONAL_JUMP)  ; LAB_004be9d5
    PUSH 0x1cc7c20                      ; 004be9e5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be9ea
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be9ef
    PUSH 0x1cc7c34                      ; 004be9f2
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004be9f7
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004be9fc
    PUSH 0x1cc7c48                      ; 004be9ff
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004bea04
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bea09
    PUSH 0x1cc7c5c                      ; 004bea0c
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004bea11
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bea16
    PUSH 0x1cc7c84                      ; 004bea19
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004bea1e
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bea23
    PUSH 0x1cc7c98                      ; 004bea26
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004bea2b
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bea30
    PUSH 0x1cc7cac                      ; 004bea33
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004bea38
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bea3d
    PUSH 0x1cc7cc0                      ; 004bea40
    XOR EBX,ESI                         ; 004bea45
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0 ; 004bea47
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    MOV EAX,0x1                         ; 004bea4c
    MOV ECX,0xffffffff                  ; 004bea51
    ADD ESP,0x4                         ; 004bea56
    MOV dword ptr [0x01cc8000],EBX      ; 004bea59 | DAT_01cc8000
    XOR EDX,EDX                         ; 004bea5f
    MOV [0x0061d2e0],EAX                ; 004bea61 | DAT_0061d2e0
    MOV dword ptr [0x01cc7f1c],EDX      ; 004bea66 | DAT_01cc7f1c
    XOR DH,DH                           ; 004bea6c
    MOV dword ptr [0x0061d310],ECX      ; 004bea6e | DAT_0061d310
    MOV byte ptr [0x01cc7f38],DH        ; 004bea74 | DAT_01cc7f38
    POP EBP                             ; 004bea7a
    POP ESI                             ; 004bea7b
    POP EBX                             ; 004bea7c
    RET                                 ; 004bea7d
    PUSH 0x200                          ; 004bea7e
        ;   Label: LAB_004bea7e
    MOV EAX,[0x0061f2a4]                ; 004bea83 | DAT_0061f2a4
    PUSH EAX                            ; 004bea88
    MOV EDX,dword ptr [EAX]             ; 004bea89 | DAT_01d1bca0
    CALL dword ptr [EDX + 0x4]          ; 004bea8b
    MOV AH,byte ptr [0x01c43544]        ; 004bea8e | DAT_01c43544
    ADD ESP,0x8                         ; 004bea94
    TEST AH,0x1                         ; 004bea97
    JZ 0x004be9bc                       ; 004bea9a
        ;   XREF to: 004be9bc (CONDITIONAL_JUMP)  ; LAB_004be9bc
    PUSH EDI                            ; 004beaa0
    MOV EDI,dword ptr [0x01c43540]      ; 004beaa1 | DAT_01c43540
    PUSH EDI                            ; 004beaa7
    MOV EBP,dword ptr [0x01c4353c]      ; 004beaa8 | DAT_01c4353c
    PUSH EBP                            ; 004beaae
    CALL core_flashlit.cpp_FUN_004ba490 ; 004beaaf
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004ba490()
    ADD ESP,0x8                         ; 004beab4
    TEST EAX,EAX                        ; 004beab7
    JL 0x004beada                       ; 004beab9
        ;   XREF to: 004beada (CONDITIONAL_JUMP)  ; LAB_004beada
    LEA EBX,[EAX*0x8 + 0x0]             ; 004beabb
    ADD EBX,EAX                         ; 004beac2
    SHL EBX,0x2                         ; 004beac4
    ADD EBX,EAX                         ; 004beac7
    SHL EBX,0x2                         ; 004beac9
    MOV EAX,EBX                         ; 004beacc
    MOV EAX,dword ptr [EAX + EBX*0x4 + 0x1cc45b4] ; 004beace
    MOV [0x01cc7b90],EAX                ; 004bead5 | DAT_01cc7b90
    MOV EAX,[0x01c43540]                ; 004beada | DAT_01c43540
        ;   Label: LAB_004beada
    PUSH EAX                            ; 004beadf
    MOV EDX,dword ptr [0x01c4353c]      ; 004beae0 | DAT_01c4353c
    PUSH EDX                            ; 004beae6
    CALL core_flashlit.cpp_FUN_004ba540 ; 004beae7
        ;   XREF to: 004ba540 (UNCONDITIONAL_CALL)  ; undefined core_flashlit.cpp_FUN_004ba540()
    MOV ECX,dword ptr [0x01cc7b90]      ; 004beaec | DAT_01cc7b90
    MOV EBX,dword ptr [0x01c4353c]      ; 004beaf2 | DAT_01c4353c
    MOV ESI,dword ptr [0x01c43540]      ; 004beaf8 | DAT_01c43540
    MOV EDI,dword ptr [0x0061d2f8]      ; 004beafe | DAT_0061d2f8
    ADD ECX,EAX                         ; 004beb04
    ADD ESP,0x8                         ; 004beb06
    MOV dword ptr [0x01cc7b90],ECX      ; 004beb09 | DAT_01cc7b90
    CMP EBX,EDI                         ; 004beb0f
    JGE 0x004beb7a                      ; 004beb11
        ;   XREF to: 004beb7a (CONDITIONAL_JUMP)  ; LAB_004beb7a
    MOV EBX,dword ptr [0x01c43540]      ; 004beb13 | DAT_01c43540
        ;   Label: LAB_004beb13
    MOV EAX,[0x01cc7b90]                ; 004beb19 | DAT_01cc7b90
    PUSH EBX                            ; 004beb1e
    LEA EBX,[EAX*0x4 + 0x0]             ; 004beb1f
    ADD EBX,EAX                         ; 004beb26
    SHL EBX,0x4                         ; 004beb28
    MOV ESI,dword ptr [0x01c4353c]      ; 004beb2b | DAT_01c4353c
    ADD EBX,EAX                         ; 004beb31
    MOV EAX,[0x01cc7d10]                ; 004beb33 | g_STextViewInstance.pages
    SHL EBX,0x2                         ; 004beb38
    PUSH ESI                            ; 004beb3b
    ADD EAX,EBX                         ; 004beb3c
    PUSH EAX                            ; 004beb3e
    CALL core_fldnotes.cpp_STextPage_findResourceAt_FUN_004bb110 ; 004beb3f
        ;   XREF to: 004bb110 (UNCONDITIONAL_CALL)  ; int * core_fldnotes.cpp_STextPage_findResourceAt_FUN_004bb110(STextPage * this_ptr, int param_2, int param_3)
    ADD ESP,0xc                         ; 004beb44
    TEST EAX,EAX                        ; 004beb47
    JZ 0x004beb6e                       ; 004beb49
        ;   XREF to: 004beb6e (CONDITIONAL_JUMP)  ; LAB_004beb6e
    MOV EBX,dword ptr [0x01c43540]      ; 004beb4b | DAT_01c43540
    MOV EBP,dword ptr [EAX + 0x4]       ; 004beb51
    MOV EDX,dword ptr [0x01c4353c]      ; 004beb54 | DAT_01c4353c
    SUB EBX,EBP                         ; 004beb5a
    MOV EDI,dword ptr [EAX]             ; 004beb5c
    PUSH EBX                            ; 004beb5e
    SUB EDX,EDI                         ; 004beb5f
    PUSH EDX                            ; 004beb61
    PUSH 0x1                            ; 004beb62
    MOV ESI,dword ptr [EAX + 0x14]      ; 004beb64
    PUSH EAX                            ; 004beb67
    CALL dword ptr [ESI + 0x8]          ; 004beb68
    ADD ESP,0x10                        ; 004beb6b
    AND byte ptr [0x01c43544],0xfe      ; 004beb6e | DAT_01c43544
        ;   Label: LAB_004beb6e
    POP EDI                             ; 004beb75
    POP EBP                             ; 004beb76
    POP ESI                             ; 004beb77
    POP EBX                             ; 004beb78
    RET                                 ; 004beb79
    MOV EBP,dword ptr [0x0061d2fc]      ; 004beb7a | DAT_0061d2fc
        ;   Label: LAB_004beb7a
    CMP ESI,EBP                         ; 004beb80
    JL 0x004beb13                       ; 004beb82
        ;   XREF to: 004beb13 (CONDITIONAL_JUMP)  ; LAB_004beb13
    MOV EDX,dword ptr [0x01cc7cb8]      ; 004beb84 | CAlphaBitmap_01cc7cac.width
    LEA EAX,[EDI + EDX*0x1]             ; 004beb8a
    CMP EBX,EAX                         ; 004beb8d
    JGE 0x004beb13                      ; 004beb8f
        ;   XREF to: 004beb13 (CONDITIONAL_JUMP)  ; LAB_004beb13
    MOV ECX,dword ptr [0x01cc7cbc]      ; 004beb91 | CAlphaBitmap_01cc7cac.height
    LEA EAX,[ECX + EBP*0x1]             ; 004beb97
    CMP ESI,EAX                         ; 004beb9a
    JGE 0x004beb13                      ; 004beb9c
        ;   XREF to: 004beb13 (CONDITIONAL_JUMP)  ; LAB_004beb13
    MOV EAX,dword ptr [ESP + 0x14]      ; 004beba2
    MOV dword ptr [EAX + 0x40],0x0      ; 004beba6
    JMP 0x004beb13                      ; 004bebad
        ;   XREF to: 004beb13 (UNCONDITIONAL_JUMP)  ; LAB_004beb13

