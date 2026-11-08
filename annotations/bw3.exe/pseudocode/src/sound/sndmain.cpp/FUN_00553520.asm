; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00553520(undefined1 *param_1)
;
;
; XREF[10]:
;   FUN_005514c0 at 0055156a
;   FUN_00551d20 at 00551d97
;   FUN_00552350 at 005526ab
;   FUN_00552850 at 005528ea
;   FUN_00553380 at 00553386
;   FUN_005533b0 at 005534cb
;   FUN_00553960 at 00553c21
;   FUN_00555270 at 00555388
;   FUN_00557800 at 00557818
;   FUN_005587e0 at 005587f7
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d2bbe
;   TerminatedCString s_SfxSample_freeMemory_fre_005d2bd3
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;   FUN_00502790
;   FUN_005535e0
;   FUN_00553630
;   FUN_00553760
;   FUN_00573db0
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553520
        ;   Label: FUN_00553520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553521
    CMP dword ptr [EBX + 0x154],0x0     ; 00553525
    JZ 0x00553553                       ; 0055352c
        ;   XREF to: 00553553 (CONDITIONAL_JUMP)  ; LAB_00553553
    PUSH ESI                            ; 0055352e
    MOV ECX,0x5d2bbe                    ; 0055352f | = "..\\sound\\sndmain.cpp"
    MOV ESI,0x85a                       ; 00553534
    PUSH 0x5d2bd3                       ; 00553539 | = "SfxSample::freeMemory - freeing sampl..."
    MOV dword ptr [0x01d71de0],ECX      ; 0055353e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00553544 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0055354a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 0055354f
    POP ESI                             ; 00553552
    PUSH EBX                            ; 00553553
        ;   Label: LAB_00553553
    CALL FUN_00553760                   ; 00553554
        ;   XREF to: 00553760 (UNCONDITIONAL_CALL)  ; undefined FUN_00553760()
    ADD ESP,0x4                         ; 00553559
    PUSH EBX                            ; 0055355c
    CALL FUN_00553630                   ; 0055355d
        ;   XREF to: 00553630 (UNCONDITIONAL_CALL)  ; undefined FUN_00553630()
    ADD ESP,0x4                         ; 00553562
    PUSH EBX                            ; 00553565
    CALL FUN_005535e0                   ; 00553566
        ;   XREF to: 005535e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005535e0()
    MOV EAX,dword ptr [EBX + 0x174]     ; 0055356b
    ADD ESP,0x4                         ; 00553571
    TEST EAX,EAX                        ; 00553574
    JNZ 0x005535c8                      ; 00553576
        ;   XREF to: 005535c8 (CONDITIONAL_JUMP)  ; LAB_005535c8
    LEA EAX,[EBX + 0x17c]               ; 00553578
        ;   Label: LAB_00553578
    PUSH EAX                            ; 0055357e
    MOV dword ptr [EBX + 0x174],0x0     ; 0055357f
    CALL FUN_00573db0                   ; 00553589
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined FUN_00573db0()
    MOV byte ptr [EBX],0x0              ; 0055358e
    MOV dword ptr [EBX + 0x150],0x0     ; 00553591
    MOV dword ptr [EBX + 0x15c],0x0     ; 0055359b
    MOV dword ptr [EBX + 0x164],0x0     ; 005535a5
    MOV dword ptr [EBX + 0x168],0x0     ; 005535af
    ADD ESP,0x4                         ; 005535b9
    MOV dword ptr [EBX + 0x160],0xffffffff ; 005535bc
    POP EBX                             ; 005535c6
    RET                                 ; 005535c7
    PUSH 0x0                            ; 005535c8
        ;   Label: LAB_005535c8
    PUSH EAX                            ; 005535ca
    CALL FUN_00502790                   ; 005535cb
        ;   XREF to: 00502790 (UNCONDITIONAL_CALL)  ; undefined FUN_00502790()
    ADD ESP,0x8                         ; 005535d0
    PUSH EAX                            ; 005535d3
    CALL FUN_005a30c4                   ; 005535d4
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005535d9
    JMP 0x00553578                      ; 005535dc
        ;   XREF to: 00553578 (UNCONDITIONAL_JUMP)  ; LAB_00553578

