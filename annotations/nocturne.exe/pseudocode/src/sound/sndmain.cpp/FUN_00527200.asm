; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_00527200(void)
;
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00527200
        ;   Label: sound_sndmain.cpp_FUN_00527200
    MOV EDX,dword ptr [ESP + 0x8]       ; 00527202
    PUSH EDX                            ; 00527206
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00527207
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0()
    ADD ESP,0x8                         ; 0052720c
    TEST EAX,EAX                        ; 0052720f
    JNZ 0x00527214                      ; 00527211
        ;   XREF to: 00527214 (CONDITIONAL_JUMP)  ; LAB_00527214
    RET                                 ; 00527213
    MOV EDX,dword ptr [ESP + 0x8]       ; 00527214
        ;   Label: LAB_00527214
    MOV dword ptr [EAX + 0x114],EDX     ; 00527218
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 0052721e
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,0x1                         ; 00527223
    RET                                 ; 00527228

