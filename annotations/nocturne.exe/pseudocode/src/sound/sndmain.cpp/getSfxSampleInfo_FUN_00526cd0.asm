; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl sound_sndmain_cpp_getSfxSampleInfo_FUN_00526cd0(undefined4 param_1,undefined4 *param_2)
;
;
; XREF[3]:
;   core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60 at 00480e3e
;   core_game.cpp_FUN_0049cc10 at 0049d3ed
;   core_tommygun.cpp_FUN_005464a0 at 00546648
;
; Called Functions:
;   sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0
;   sound_sndmain.cpp_unlockSound_FUN_00528890
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 00526cd0
        ;   Label: sound_sndmain.cpp_getSfxSampleInfo_FUN_00526cd0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00526cd2
    PUSH EDX                            ; 00526cd6
    CALL sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0 ; 00526cd7
        ;   XREF to: 005234b0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getSfxSlotFromHandle_FUN_005234b0()
    ADD ESP,0x8                         ; 00526cdc
    TEST EAX,EAX                        ; 00526cdf
    JNZ 0x00526ce4                      ; 00526ce1
        ;   XREF to: 00526ce4 (CONDITIONAL_JUMP)  ; LAB_00526ce4
    RET                                 ; 00526ce3
    PUSH EDI                            ; 00526ce4
        ;   Label: LAB_00526ce4
    PUSH ESI                            ; 00526ce5
    MOV ECX,0x4a                        ; 00526ce6
    MOV EDI,dword ptr [ESP + 0x10]      ; 00526ceb
    MOV ESI,dword ptr [EAX + 0x74]      ; 00526cef
    MOVSD.REP ES:EDI,ESI                ; 00526cf2
    CALL sound_sndmain.cpp_unlockSound_FUN_00528890 ; 00526cf4
        ;   XREF to: 00528890 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_unlockSound_FUN_00528890()
    MOV EAX,0x1                         ; 00526cf9
    POP ESI                             ; 00526cfe
    POP EDI                             ; 00526cff
    RET                                 ; 00526d00

