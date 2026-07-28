; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_countActiveSfx_FUN_005275e0(void)
;
;
; XREF[1]:
;   core_game.cpp_CGame_processFrame_FUN_0049cc10 at 0049d318
;
; Referenced Globals:
;   undefined4 DAT_02dbd3e4
;   undefined4 DAT_02dbd3e8
;   undefined4 DAT_02dbd504
;   undefined4 DAT_02dbd508
;
; *****************************************************************************

section .text

    MOV EAX,0x2dbd374                   ; 005275e0
        ;   Label: sound_sndmain.cpp_countActiveSfx_FUN_005275e0
    XOR EDX,EDX                         ; 005275e5
    LEA ECX,[EAX + 0x4800]              ; 005275e7
    CMP dword ptr [EAX + 0x74],0x0      ; 005275ed | DAT_02dbd3e8 | DAT_02dbd508
        ;   Label: LAB_005275ed
    JZ 0x005275fa                       ; 005275f1
        ;   XREF to: 005275fa (CONDITIONAL_JUMP)  ; LAB_005275fa
    CMP dword ptr [EAX + 0x70],0x0      ; 005275f3 | DAT_02dbd3e4 | DAT_02dbd504
    JZ 0x005275fa                       ; 005275f7
        ;   XREF to: 005275fa (CONDITIONAL_JUMP)  ; LAB_005275fa
    INC EDX                             ; 005275f9
    ADD EAX,0x120                       ; 005275fa
        ;   Label: LAB_005275fa
    CMP EAX,ECX                         ; 005275ff
    JNZ 0x005275ed                      ; 00527601
        ;   XREF to: 005275ed (CONDITIONAL_JUMP)  ; LAB_005275ed
    MOV EAX,EDX                         ; 00527603
    RET                                 ; 00527605

