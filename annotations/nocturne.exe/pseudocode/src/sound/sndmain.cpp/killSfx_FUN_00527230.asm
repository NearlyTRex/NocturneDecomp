; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndmain_cpp_killSfx_FUN_00527230(undefined4 param_1)
;
;
; XREF[48]:
;   FUN_00414930 at 00414946
;   FUN_00418a00 at 00418c97
;   FUN_00478790 at 004789f9
;   FUN_004ab450 at 004ab466
;   FUN_004c4970 at 004c5235
;   FUN_004c79a0 at 004c7bbf
;   FUN_004da790 at 004da842
;   FUN_0052d790 at 0052d8ef
;   FUN_0052dff0 at 0052e3e0
;   FUN_00535900 at 00537c08
;   ... and 38 more
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00527230
        ;   Label: sound_sndmain.cpp_killSfx_FUN_00527230
    MOV EDX,dword ptr [ESP + 0x8]       ; 00527232
    PUSH EDX                            ; 00527236
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00527237
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0()
    ADD ESP,0x8                         ; 0052723c
    TEST EAX,EAX                        ; 0052723f
    JNZ 0x00527244                      ; 00527241
        ;   XREF to: 00527244 (CONDITIONAL_JUMP)  ; LAB_00527244
    RET                                 ; 00527243
    PUSH EAX                            ; 00527244
        ;   Label: LAB_00527244
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 ; 00527245
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570()
    ADD ESP,0x4                         ; 0052724a
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052724d
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,0x1                         ; 00527252
    RET                                 ; 00527257

