; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00523ea0 at 00523f23
;   sound_sndmain.cpp_FUN_00527570 at 005275aa
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00526d10 at 00526d40
;
; Referenced Globals:
;   TerminatedCString s_Error_polling_hw_playbac_00593120
;   undefined4 DAT_02dc8318
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870
;   sound_sndmain.cpp_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005257e0
        ;   Label: sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005257e0
    PUSH EDI                            ; 005257e1
    PUSH EBP                            ; 005257e2
    MOV EBP,ESP                         ; 005257e3
    SUB ESP,0x10                        ; 005257e5
    AND ESP,0xfffffff8                  ; 005257e8
    MOV EBX,dword ptr [EBP + 0x10]      ; 005257eb
    CMP dword ptr [EBX + 0x6c],0x0      ; 005257ee
    JZ 0x00525804                       ; 005257f2
        ;   XREF to: 00525804 (CONDITIONAL_JUMP)  ; LAB_00525804
    MOV ECX,dword ptr [0x02dc8318]      ; 005257f4 | DAT_02dc8318
    TEST ECX,ECX                        ; 005257fa
    JZ 0x00525804                       ; 005257fc
        ;   XREF to: 00525804 (CONDITIONAL_JUMP)  ; LAB_00525804
    CMP dword ptr [EBX + 0x74],0x0      ; 005257fe
    JNZ 0x0052580c                      ; 00525802
        ;   XREF to: 0052580c (CONDITIONAL_JUMP)  ; LAB_0052580c
    XOR EAX,EAX                         ; 00525804
        ;   Label: LAB_00525804
    MOV ESP,EBP                         ; 00525806
    POP EBP                             ; 00525808
    POP EDI                             ; 00525809
    POP EBX                             ; 0052580a
    RET                                 ; 0052580b
    PUSH EBX                            ; 0052580c
        ;   Label: LAB_0052580c
    MOV EDX,dword ptr [ECX]             ; 0052580d
    PUSH ECX                            ; 0052580f
    CALL dword ptr [EDX + 0x44]         ; 00525810
    MOV dword ptr [ESP + 0x10],EAX      ; 00525813
    MOV dword ptr [ESP + 0x14],EDX      ; 00525817
    FLD double ptr [ESP + 0x10]         ; 0052581b
    ADD ESP,0x8                         ; 0052581f
    FLDZ                                ; 00525822
    FXCH                                ; 00525824
    FSTP double ptr [ESP]               ; 00525826
    FCOMP double ptr [ESP]              ; 00525829
    FNSTSW AX                           ; 0052582c
    SAHF                                ; 0052582e
    JBE 0x0052584a                      ; 0052582f
        ;   XREF to: 0052584a (CONDITIONAL_JUMP)  ; LAB_0052584a
    MOV EDX,dword ptr [EBX + 0x74]      ; 00525831
    PUSH EDX                            ; 00525834
    PUSH 0x593120                       ; 00525835 | = "Error polling hw playback pos %s\n"
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052583a
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x8                         ; 0052583f
    XOR EAX,EAX                         ; 00525842
    MOV ESP,EBP                         ; 00525844
    POP EBP                             ; 00525846
    POP EDI                             ; 00525847
    POP EBX                             ; 00525848
    RET                                 ; 00525849
    MOV EDI,dword ptr [ESP + 0x4]       ; 0052584a
        ;   Label: LAB_0052584a
    PUSH EDI                            ; 0052584e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052584f
    PUSH EAX                            ; 00525853
    PUSH EBX                            ; 00525854
    CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870 ; 00525855
        ;   XREF to: 00525870 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870()
    MOV EAX,0x1                         ; 0052585a
    ADD ESP,0xc                         ; 0052585f
    MOV ESP,EBP                         ; 00525862
    POP EBP                             ; 00525864
    POP EDI                             ; 00525865
    POP EBX                             ; 00525866
    RET                                 ; 00525867

