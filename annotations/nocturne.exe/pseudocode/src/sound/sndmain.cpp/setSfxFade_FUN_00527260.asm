; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndmain_cpp_setSfxFade_FUN_00527260(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047b63b
;   core_stranger.cpp_FUN_00535900 at 00537cbf
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00527260
        ;   Label: sound_sndmain.cpp_setSfxFade_FUN_00527260
    PUSH 0x1                            ; 00527263
    MOV EDX,dword ptr [ESP + 0xc]       ; 00527265
    PUSH EDX                            ; 00527269
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 0052726a
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0()
    ADD ESP,0x8                         ; 0052726f
    TEST EAX,EAX                        ; 00527272
    JNZ 0x0052727a                      ; 00527274
        ;   XREF to: 0052727a (CONDITIONAL_JUMP)  ; LAB_0052727a
    ADD ESP,0x4                         ; 00527276
    RET                                 ; 00527279
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052727a
        ;   Label: LAB_0052727a
    MOV dword ptr [EAX + 0x108],EDX     ; 0052727e
    MOV EDX,dword ptr [ESP + 0x10]      ; 00527284
    MOV dword ptr [EAX + 0x10c],EDX     ; 00527288
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052728e
    MOV dword ptr [ESP],EDX             ; 00527292
    FILD dword ptr [ESP]                ; 00527295
    FSTP float ptr [EAX + 0x110]        ; 00527298
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052729e
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,0x1                         ; 005272a3
    ADD ESP,0x4                         ; 005272a8
    RET                                 ; 005272ab

