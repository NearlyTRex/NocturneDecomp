; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_updateGem_FUN_004e6c40 at 004e6f0d
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570
;   core_manpuz.cpp_FUN_004e6240
;   sound_sndmain.cpp_FUN_005506b0
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7220
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004e7220
    PUSH ESI                            ; 004e7221
    PUSH EDI                            ; 004e7222
    PUSH EBP                            ; 004e7223
    SUB ESP,0x4                         ; 004e7224
    MOV EBP,dword ptr [ESP + 0x18]      ; 004e7227
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e722b
    PUSH EBX                            ; 004e722f
    PUSH EBP                            ; 004e7230
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570 ; 004e7231
        ;   XREF to: 004e7570 (UNCONDITIONAL_CALL)  ; int core_manpuz.cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004e7570(CMansionPuzzleCircle * this_ptr, int panel_index)
    ADD ESP,0x8                         ; 004e7236
    MOV EDX,EAX                         ; 004e7239
    MOV dword ptr [ESP],EAX             ; 004e723b
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e723e
    SUB EAX,EBX                         ; 004e7245
    SHL EAX,0x3                         ; 004e7247
    ADD EAX,EBX                         ; 004e724a
    LEA ESI,[EBP + 0x74c]               ; 004e724c
    SHL EAX,0x2                         ; 004e7252
    LEA EBX,[ESI + EAX*0x1]             ; 004e7255
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7258
    SUB EAX,EDX                         ; 004e725f
    SHL EAX,0x3                         ; 004e7261
    ADD EAX,EDX                         ; 004e7264
    SHL EAX,0x2                         ; 004e7266
    MOV EDX,dword ptr [EBX]             ; 004e7269
    ADD ESI,EAX                         ; 004e726b
    TEST EDX,EDX                        ; 004e726d
    JZ 0x004e727a                       ; 004e726f
        ;   XREF to: 004e727a (CONDITIONAL_JUMP)  ; LAB_004e727a
    CMP dword ptr [ESI],0x0             ; 004e7271
    JZ 0x004e7399                       ; 004e7274
        ;   XREF to: 004e7399 (CONDITIONAL_JUMP)  ; LAB_004e7399
    MOV EDX,0x5dc5f5                    ; 004e727a
        ;   Label: LAB_004e727a
    MOV ECX,0x554                       ; 004e727f
    PUSH 0x5dc608                       ; 004e7284
    MOV dword ptr [0x01d046a0],EDX      ; 004e7289 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004e728f | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004e7295
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004e729a
    MOV EAX,ESI                         ; 004e729d
        ;   Label: LAB_004e729d
    MOV ECX,dword ptr [EBX]             ; 004e729f
    MOV EDX,EBX                         ; 004e72a1
    MOV dword ptr [ESI],ECX             ; 004e72a3
    LEA EDI,[EBX + 0xc]                 ; 004e72a5
    FLD float ptr [EBX + 0x4]           ; 004e72a8
    LEA ECX,[ESI + 0xc]                 ; 004e72ab
    FSTP float ptr [ESI + 0x4]          ; 004e72ae
    FLD float ptr [EBX + 0x8]           ; 004e72b1
    FSTP float ptr [ESI + 0x8]          ; 004e72b4
    CMP ECX,EDI                         ; 004e72b7
    JZ 0x004e72cb                       ; 004e72b9
        ;   XREF to: 004e72cb (CONDITIONAL_JUMP)  ; LAB_004e72cb
    FLD float ptr [EDI]                 ; 004e72bb
    FSTP float ptr [ECX]                ; 004e72bd
    FLD float ptr [EDI + 0x4]           ; 004e72bf
    FSTP float ptr [ECX + 0x4]          ; 004e72c2
    FLD float ptr [EDI + 0x8]           ; 004e72c5
    FSTP float ptr [ECX + 0x8]          ; 004e72c8
    LEA EDI,[EDX + 0x18]                ; 004e72cb
        ;   Label: LAB_004e72cb
    LEA ECX,[EAX + 0x18]                ; 004e72ce
    CMP ECX,EDI                         ; 004e72d1
    JZ 0x004e72e5                       ; 004e72d3
        ;   XREF to: 004e72e5 (CONDITIONAL_JUMP)  ; LAB_004e72e5
    FLD float ptr [EDI]                 ; 004e72d5
    FSTP float ptr [ECX]                ; 004e72d7
    FLD float ptr [EDI + 0x4]           ; 004e72d9
    FSTP float ptr [ECX + 0x4]          ; 004e72dc
    FLD float ptr [EDI + 0x8]           ; 004e72df
    FSTP float ptr [ECX + 0x8]          ; 004e72e2
    MOV ECX,dword ptr [EDX + 0x24]      ; 004e72e5
        ;   Label: LAB_004e72e5
    MOV dword ptr [EAX + 0x24],ECX      ; 004e72e8
    MOV ECX,dword ptr [EDX + 0x28]      ; 004e72eb
    MOV dword ptr [EAX + 0x28],ECX      ; 004e72ee
    MOV ECX,dword ptr [EDX + 0x2c]      ; 004e72f1
    MOV dword ptr [EAX + 0x2c],ECX      ; 004e72f4
    MOV ECX,dword ptr [EDX + 0x30]      ; 004e72f7
    MOV dword ptr [EAX + 0x30],ECX      ; 004e72fa
    MOV ECX,dword ptr [EDX + 0x34]      ; 004e72fd
    MOV dword ptr [EAX + 0x34],ECX      ; 004e7300
    MOV ECX,dword ptr [EDX + 0x38]      ; 004e7303
    MOV dword ptr [EAX + 0x38],ECX      ; 004e7306
    MOV ECX,dword ptr [EDX + 0x3c]      ; 004e7309
    MOV dword ptr [EAX + 0x3c],ECX      ; 004e730c
    MOV ECX,dword ptr [EDX + 0x40]      ; 004e730f
    MOV dword ptr [EAX + 0x40],ECX      ; 004e7312
    MOV ECX,dword ptr [EDX + 0x44]      ; 004e7315
    MOV dword ptr [EAX + 0x44],ECX      ; 004e7318
    MOV ECX,dword ptr [EDX + 0x48]      ; 004e731b
    MOV dword ptr [EAX + 0x48],ECX      ; 004e731e
    MOV ECX,dword ptr [EDX + 0x4c]      ; 004e7321
    MOV dword ptr [EAX + 0x4c],ECX      ; 004e7324
    MOV ECX,dword ptr [EDX + 0x50]      ; 004e7327
    MOV dword ptr [EAX + 0x50],ECX      ; 004e732a
    ADD EAX,0x58                        ; 004e732d
    MOV ECX,dword ptr [EDX + 0x54]      ; 004e7330
    ADD EDX,0x58                        ; 004e7333
    MOV dword ptr [EAX + -0x4],ECX      ; 004e7336
    CMP EAX,EDX                         ; 004e7339
    JZ 0x004e734d                       ; 004e733b
        ;   XREF to: 004e734d (CONDITIONAL_JUMP)  ; LAB_004e734d
    MOV ECX,dword ptr [EDX]             ; 004e733d
    MOV dword ptr [EAX],ECX             ; 004e733f
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e7341
    MOV dword ptr [EAX + 0x4],ECX       ; 004e7344
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e7347
    MOV dword ptr [EAX + 0x8],ECX       ; 004e734a
    MOV dword ptr [EBX],0x0             ; 004e734d
        ;   Label: LAB_004e734d
    MOV EBX,dword ptr [ESP]             ; 004e7353
    PUSH EBX                            ; 004e7356
    MOV dword ptr [ESI + 0x4],0x3f800000 ; 004e7357
    PUSH EBP                            ; 004e735e
    MOV dword ptr [ESI + 0x8],0xbf800000 ; 004e735f
    CALL core_manpuz.cpp_FUN_004e6240   ; 004e7366
        ;   XREF to: 004e6240 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_004e6240()
    ADD ESP,0x8                         ; 004e736b
    ADD ESI,0x58                        ; 004e736e
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 004e7371
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH ESI                            ; 004e7376
    CALL sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170 ; 004e7377
        ;   XREF to: 00550170 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTrackedFloatPosition_FUN_00550170(CVector3f * position_source_ptr)
    ADD ESP,0x4                         ; 004e737c
    PUSH 0x5dc638                       ; 004e737f
    CALL sound_sndmain.cpp_FUN_005506b0 ; 004e7384
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005506b0()
    ADD ESP,0x4                         ; 004e7389
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 004e738c
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    ADD ESP,0x4                         ; 004e7391
    POP EBP                             ; 004e7394
    POP EDI                             ; 004e7395
    POP ESI                             ; 004e7396
    POP EBX                             ; 004e7397
    RET                                 ; 004e7398
    TEST dword ptr [EBX + 0x4],0x7fffffff ; 004e7399
        ;   Label: LAB_004e7399
    JNZ 0x004e727a                      ; 004e73a0
        ;   XREF to: 004e727a (CONDITIONAL_JUMP)  ; LAB_004e727a
    TEST dword ptr [EBX + 0x8],0x7fffffff ; 004e73a6
    JNZ 0x004e727a                      ; 004e73ad
        ;   XREF to: 004e727a (CONDITIONAL_JUMP)  ; LAB_004e727a
    JMP 0x004e729d                      ; 004e73b3
        ;   XREF to: 004e729d (UNCONDITIONAL_JUMP)  ; LAB_004e729d

