; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_00572680(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0 at 005725d6
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_00570460 at 00570525
;   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_00571f10 at 00571f6b
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00572030 at 005721e9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572680
        ;   Label: sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_00572680
    MOV EAX,dword ptr [ESP + 0x8]       ; 00572681
    CMP dword ptr [EAX + 0x124],0x1     ; 00572685
    JG 0x005726a6                       ; 0057268c
        ;   XREF to: 005726a6 (CONDITIONAL_JUMP)  ; LAB_005726a6
    MOV ECX,dword ptr [EAX + 0x110]     ; 0057268e
    CMP ECX,dword ptr [EAX + 0x128]     ; 00572694
    JNZ 0x005726a6                      ; 0057269a
        ;   XREF to: 005726a6 (CONDITIONAL_JUMP)  ; LAB_005726a6
    MOV EBX,dword ptr [EAX + 0x13c]     ; 0057269c
    TEST EBX,EBX                        ; 005726a2
    JLE 0x005726ad                      ; 005726a4
        ;   XREF to: 005726ad (CONDITIONAL_JUMP)  ; LAB_005726ad
    MOV EAX,0x2                         ; 005726a6
        ;   Label: LAB_005726a6
    POP EBX                             ; 005726ab
    RET                                 ; 005726ac
    JNZ 0x005726b6                      ; 005726ad
        ;   XREF to: 005726b6 (CONDITIONAL_JUMP)  ; LAB_005726b6
        ;   Label: LAB_005726ad
    MOV EAX,0x1                         ; 005726af
    POP EBX                             ; 005726b4
    RET                                 ; 005726b5
    XOR EAX,EAX                         ; 005726b6
        ;   Label: LAB_005726b6
    POP EBX                             ; 005726b8
    RET                                 ; 005726b9

