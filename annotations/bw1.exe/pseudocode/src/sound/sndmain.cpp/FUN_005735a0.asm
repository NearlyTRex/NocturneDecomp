; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_005735a0(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[78]:
;   core_bat.cpp_FUN_00410d80 at 00410ef4
;   core_batcreat.cpp_FUN_004115b0 at 00411ccb
;   core_batcreat.cpp_FUN_004123d0 at 004124f9
;   core_batman.cpp_FUN_00412ba0 at 00413391
;   core_batman.cpp_FUN_00413f90 at 004140b9
;   core_boneguy.cpp_FUN_0041bb40 at 0041c1b5
;   core_bride.cpp_FUN_00423b70 at 00423c32
;   core_bride.cpp_FUN_00424b10 at 00424d1f
;   core_carved.cpp_FUN_00428ae0 at 00429c85
;   core_carved.cpp_FUN_0042b850 at 0042b9f1
;   ... and 68 more
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0056fa10
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_FUN_00575560
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_00575560 ; 005735a0
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00575560(int enable)
        ;   Label: sound_sndmain.cpp_FUN_005735a0
    CMP EAX,0x1                         ; 005735a5
    JL 0x005735c9                       ; 005735a8
        ;   XREF to: 005735c9 (CONDITIONAL_JUMP)  ; LAB_005735c9
    PUSH 0x1                            ; 005735aa
    MOV ECX,dword ptr [ESP + 0x8]       ; 005735ac
    PUSH ECX                            ; 005735b0
    CALL sound_sndmain.cpp_FUN_0056fa10 ; 005735b1
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0056fa10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005735b6
    TEST EAX,EAX                        ; 005735b9
    JNZ 0x005735be                      ; 005735bb
        ;   XREF to: 005735be (CONDITIONAL_JUMP)  ; LAB_005735be
    RET                                 ; 005735bd
    CALL sound_sndmain.cpp_FUN_00573e70 ; 005735be
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
        ;   Label: LAB_005735be
    MOV EAX,0x1                         ; 005735c3
    RET                                 ; 005735c8
    PUSH 0x0                            ; 005735c9
        ;   Label: LAB_005735c9
    MOV EDX,dword ptr [ESP + 0x8]       ; 005735cb
    PUSH EDX                            ; 005735cf
    CALL sound_sndmain.cpp_FUN_0056fa10 ; 005735d0
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0056fa10(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 005735d5
    TEST EAX,EAX                        ; 005735d8
    SETNZ AL                            ; 005735da
    AND EAX,0xff                        ; 005735dd
    RET                                 ; 005735e2

