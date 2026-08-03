; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_process_FUN_004fe5b0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004a6010 at 004a6102
;
; Referenced Globals:
;   TerminatedCString s_Error_processing_script_0058e1d6
;   TerminatedCString s_WARNING_Infinite_loop_de_0058e213
;   CEditorTools* g_CEditorTools_PTR_005b6d50 = 01bcd074
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   CGame g_CGame_01c775ec
;   undefined4 g_CGame_01c775ec.cutscene_skippable
;   undefined4 DAT_01e56418
;   undefined4 DAT_01e56420
;   undefined4 DAT_01e56c24
;   undefined4 DAT_01e56c28
;
; Called Functions:
;   core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0
;   core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0
;   core_script.cpp_CScript_step_FUN_004ff2c0
;   shape_edittool.cpp_FUN_0046fcd0
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe5b0
        ;   Label: core_script.cpp_CScript_process_FUN_004fe5b0
    PUSH ESI                            ; 004fe5b1
    PUSH EDI                            ; 004fe5b2
    PUSH EBP                            ; 004fe5b3
    MOV EBP,ESP                         ; 004fe5b4
    SUB ESP,0x8                         ; 004fe5b6
    AND ESP,0xfffffff8                  ; 004fe5b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fe5bc
    XOR EDX,EDX                         ; 004fe5bf
    MOV ECX,dword ptr [EBX + 0x28]      ; 004fe5c1
    MOV dword ptr [0x01e56418],EDX      ; 004fe5c4 | DAT_01e56418
    CMP ECX,0x1                         ; 004fe5ca
    JL 0x004fe64e                       ; 004fe5cd
        ;   XREF to: 004fe64e (CONDITIONAL_JUMP)  ; LAB_004fe64e
    CMP dword ptr [EBX + 0x2c],0x0      ; 004fe5d3
    JZ 0x004fe64e                       ; 004fe5d7
        ;   XREF to: 004fe64e (CONDITIONAL_JUMP)  ; LAB_004fe64e
    MOV EAX,[0x005b9354]                ; 004fe5dd | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0xcc],0x0      ; 004fe5e2 | g_CGame_01c775ec.cutscene_skippable
    JZ 0x004fe5ee                       ; 004fe5e9
        ;   XREF to: 004fe5ee (CONDITIONAL_JUMP)  ; LAB_004fe5ee
    MOV dword ptr [EBX + 0x18],EDX      ; 004fe5eb
    MOV EAX,[0x005b9354]                ; 004fe5ee | g_CGame_PTR_005b9354
        ;   Label: LAB_004fe5ee
    PUSH EAX                            ; 004fe5f3 | g_CGame_01c775ec
    XOR ESI,ESI                         ; 004fe5f4
    CALL core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0 ; 004fe5f6
        ;   XREF to: 0042b5c0 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_getGameDeltaTime_FUN_0042b5c0(CGame * game_ptr)
    MOV dword ptr [ESP + 0x8],EAX       ; 004fe5fb
    XOR EDX,EDX                         ; 004fe5ff
    FLD float ptr [ESP + 0x8]           ; 004fe601
    ADD ESP,0x4                         ; 004fe605
    MOV dword ptr [0x01e56c24],EDX      ; 004fe608 | DAT_01e56c24
    FSTP float ptr [ESP]                ; 004fe60e
    FLD float ptr [ESP]                 ; 004fe611
        ;   Label: LAB_004fe611
    FLDZ                                ; 004fe614
    FCOMPP                              ; 004fe616
    FNSTSW AX                           ; 004fe618
    SAHF                                ; 004fe61a
    JNC 0x004fe623                      ; 004fe61b
        ;   XREF to: 004fe623 (CONDITIONAL_JUMP)  ; LAB_004fe623
    CMP dword ptr [EBX + 0x18],0x2      ; 004fe61d
    JNZ 0x004fe655                      ; 004fe621
        ;   XREF to: 004fe655 (CONDITIONAL_JUMP)  ; LAB_004fe655
    CMP dword ptr [0x01e56c24],0x0      ; 004fe623 | DAT_01e56c24
        ;   Label: LAB_004fe623
    JZ 0x004fe643                       ; 004fe62a
        ;   XREF to: 004fe643 (CONDITIONAL_JUMP)  ; LAB_004fe643
    MOV EDX,dword ptr [0x005b9354]      ; 004fe62c | g_CGame_PTR_005b9354
    PUSH EDX                            ; 004fe632 | g_CGame_01c775ec
    CALL core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0 ; 004fe633
        ;   XREF to: 0049f8c0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInputAndCenterCursor_FUN_0049f8c0(CGame * this_ptr)
    XOR ECX,ECX                         ; 004fe638
    ADD ESP,0x4                         ; 004fe63a
    MOV dword ptr [0x01e56c24],ECX      ; 004fe63d | DAT_01e56c24
    MOV ESI,dword ptr [EBX + 0x4]       ; 004fe643
        ;   Label: LAB_004fe643
    TEST ESI,ESI                        ; 004fe646
    JNZ 0x004fe6df                      ; 004fe648
        ;   XREF to: 004fe6df (CONDITIONAL_JUMP)  ; LAB_004fe6df
    MOV ESP,EBP                         ; 004fe64e
        ;   Label: LAB_004fe64e
    POP EBP                             ; 004fe650
    POP EDI                             ; 004fe651
    POP ESI                             ; 004fe652
    POP EBX                             ; 004fe653
    RET                                 ; 004fe654
    CMP dword ptr [EBX],0x0             ; 004fe655
        ;   Label: LAB_004fe655
    JNZ 0x004fe623                      ; 004fe658
        ;   XREF to: 004fe623 (CONDITIONAL_JUMP)  ; LAB_004fe623
    MOV EAX,ESP                         ; 004fe65a
    PUSH EAX                            ; 004fe65c
    PUSH EBX                            ; 004fe65d
    MOV EDI,dword ptr [EBX + 0x40]      ; 004fe65e
    CALL core_script.cpp_CScript_step_FUN_004ff2c0 ; 004fe661
        ;   XREF to: 004ff2c0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_step_FUN_004ff2c0(CScript * this_ptr, float * time_remaining)
    ADD ESP,0x8                         ; 004fe666
    TEST EAX,EAX                        ; 004fe669
    JZ 0x004fe623                       ; 004fe66b
        ;   XREF to: 004fe623 (CONDITIONAL_JUMP)  ; LAB_004fe623
    JL 0x004fe6b9                       ; 004fe66d
        ;   XREF to: 004fe6b9 (CONDITIONAL_JUMP)  ; LAB_004fe6b9
    CMP dword ptr [EBX + 0x18],0x1      ; 004fe66f
    JNZ 0x004fe67c                      ; 004fe673
        ;   XREF to: 004fe67c (CONDITIONAL_JUMP)  ; LAB_004fe67c
    MOV dword ptr [EBX + 0x18],0x2      ; 004fe675
        ;   Label: LAB_004fe675
    INC ESI                             ; 004fe67c
        ;   Label: LAB_004fe67c
    CMP ESI,0xc8                        ; 004fe67d
    JLE 0x004fe611                      ; 004fe683
        ;   XREF to: 004fe611 (CONDITIONAL_JUMP)  ; LAB_004fe611
    CMP dword ptr [0x01e56c28],0x0      ; 004fe685 | DAT_01e56c28
    JNZ 0x004fe623                      ; 004fe68c
        ;   XREF to: 004fe623 (CONDITIONAL_JUMP)  ; LAB_004fe623
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004fe68e
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 004fe691
    PUSH ECX                            ; 004fe694
    PUSH 0x58e213                       ; 004fe695 | = "!WARNING!  Infinite loop detected in ..."
    MOV ESI,dword ptr [0x005b6d50]      ; 004fe69a | g_CEditorTools_PTR_005b6d50
    PUSH ESI                            ; 004fe6a0
    MOV EDI,0x1                         ; 004fe6a1
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004fe6a6
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0xc                         ; 004fe6ab
    MOV dword ptr [0x01e56c28],EDI      ; 004fe6ae | DAT_01e56c28
    JMP 0x004fe623                      ; 004fe6b4
        ;   XREF to: 004fe623 (UNCONDITIONAL_JUMP)  ; LAB_004fe623
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004fe6b9
        ;   Label: LAB_004fe6b9
    PUSH 0x1e56420                      ; 004fe6bc | DAT_01e56420
    MOV EDX,dword ptr [EAX + EDI*0x8 + 0x4] ; 004fe6c1
    PUSH EDX                            ; 004fe6c5
    MOV ECX,dword ptr [EAX + EDI*0x8]   ; 004fe6c6
    PUSH ECX                            ; 004fe6c9
    PUSH 0x58e1d6                       ; 004fe6ca | = "Error processing script.\nLine: %d\nT..."
    MOV EAX,[0x005b6d50]                ; 004fe6cf | g_CEditorTools_PTR_005b6d50
    PUSH EAX                            ; 004fe6d4
    CALL shape_edittool.cpp_FUN_0046fcd0 ; 004fe6d5
        ;   XREF to: 0046fcd0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0046fcd0()
    ADD ESP,0x14                        ; 004fe6da
    JMP 0x004fe675                      ; 004fe6dd
        ;   XREF to: 004fe675 (UNCONDITIONAL_JUMP)  ; LAB_004fe675
    PUSH ESI                            ; 004fe6df
        ;   Label: LAB_004fe6df
    MOV EDX,dword ptr [ESI + 0x14c]     ; 004fe6e0
    CALL dword ptr [EDX + 0x104]        ; 004fe6e6
    ADD ESP,0x4                         ; 004fe6ec
    TEST EAX,EAX                        ; 004fe6ef
    JLE 0x004fe64e                      ; 004fe6f1
        ;   XREF to: 004fe64e (CONDITIONAL_JUMP)  ; LAB_004fe64e
    MOV EDI,dword ptr [EBX + 0x24]      ; 004fe6f7
    PUSH EDI                            ; 004fe6fa
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004fe6fb
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 004fe700
    MOV ESP,EBP                         ; 004fe703
    POP EBP                             ; 004fe705
    POP EDI                             ; 004fe706
    POP ESI                             ; 004fe707
    POP EBX                             ; 004fe708
    RET                                 ; 004fe709

