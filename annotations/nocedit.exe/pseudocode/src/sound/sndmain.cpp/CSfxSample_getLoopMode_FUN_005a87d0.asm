; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample *this_ptr)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
;
; XREF[5]:
;   sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0 at 005a8726
;   sound_sndmain.cpp_CSfxSample_hasAdvancedLoopMode_FUN_005a8810 at 005a8815
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 at 005a67f5
;   sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0 at 005a8055
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170 at 005a8329
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a87d0
        ;   Label: sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a87d1
    CMP dword ptr [EAX + 0x124],0x1     ; 005a87d5
    JG 0x005a87f6                       ; 005a87dc
        ;   XREF to: 005a87f6 (CONDITIONAL_JUMP)  ; LAB_005a87f6
    MOV ECX,dword ptr [EAX + 0x110]     ; 005a87de
    CMP ECX,dword ptr [EAX + 0x128]     ; 005a87e4
    JNZ 0x005a87f6                      ; 005a87ea
        ;   XREF to: 005a87f6 (CONDITIONAL_JUMP)  ; LAB_005a87f6
    MOV EBX,dword ptr [EAX + 0x13c]     ; 005a87ec
    TEST EBX,EBX                        ; 005a87f2
    JLE 0x005a87fd                      ; 005a87f4
        ;   XREF to: 005a87fd (CONDITIONAL_JUMP)  ; LAB_005a87fd
    MOV EAX,0x2                         ; 005a87f6
        ;   Label: LAB_005a87f6
    POP EBX                             ; 005a87fb
    RET                                 ; 005a87fc
    JNZ 0x005a8806                      ; 005a87fd
        ;   XREF to: 005a8806 (CONDITIONAL_JUMP)  ; LAB_005a8806
        ;   Label: LAB_005a87fd
    MOV EAX,0x1                         ; 005a87ff
    POP EBX                             ; 005a8804
    RET                                 ; 005a8805
    XOR EAX,EAX                         ; 005a8806
        ;   Label: LAB_005a8806
    POP EBX                             ; 005a8808
    RET                                 ; 005a8809

