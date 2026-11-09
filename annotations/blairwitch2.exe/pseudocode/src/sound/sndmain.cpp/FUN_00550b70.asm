; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_FUN_00550b70(uint sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   sfx_handle
;
; XREF[65]:
;   core_bat.cpp_FUN_00411200 at 00411374
;   core_batcreat.cpp_FUN_00411a10 at 00412064
;   core_batcreat.cpp_FUN_00412760 at 00412889
;   core_batman.cpp_FUN_00412f40 at 00413697
;   core_batman.cpp_FUN_00414290 at 004143b9
;   core_boneguy.cpp_FUN_004186c0 at 00418d35
;   core_bride.cpp_FUN_0041dbe0 at 0041dca2
;   core_bride.cpp_FUN_0041ead0 at 0041ecdf
;   core_chain.cpp_FUN_005b4d30 at 005b55a9
;   core_doc.cpp_FUN_00450c60 at 00451b3f
;   ... and 55 more
;
; Called Functions:
;   sound_sndmain.cpp_FUN_0054d3a0
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_FUN_00552b30
;
; *****************************************************************************

section .text

    CALL sound_sndmain.cpp_FUN_00552b30 ; 00550b70
        ;   XREF to: 00552b30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00552b30(int enable)
        ;   Label: sound_sndmain.cpp_FUN_00550b70
    CMP EAX,0x1                         ; 00550b75
    JL 0x00550b99                       ; 00550b78
        ;   XREF to: 00550b99 (CONDITIONAL_JUMP)  ; LAB_00550b99
    PUSH 0x1                            ; 00550b7a
    MOV ECX,dword ptr [ESP + 0x8]       ; 00550b7c
    PUSH ECX                            ; 00550b80
    CALL sound_sndmain.cpp_FUN_0054d3a0 ; 00550b81
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00550b86
    TEST EAX,EAX                        ; 00550b89
    JNZ 0x00550b8e                      ; 00550b8b
        ;   XREF to: 00550b8e (CONDITIONAL_JUMP)  ; LAB_00550b8e
    RET                                 ; 00550b8d
    CALL sound_sndmain.cpp_FUN_00551440 ; 00550b8e
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_00550b8e
    MOV EAX,0x1                         ; 00550b93
    RET                                 ; 00550b98
    PUSH 0x0                            ; 00550b99
        ;   Label: LAB_00550b99
    MOV EDX,dword ptr [ESP + 0x8]       ; 00550b9b
    PUSH EDX                            ; 00550b9f
    CALL sound_sndmain.cpp_FUN_0054d3a0 ; 00550ba0
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; CSfxSlot * sound_sndmain.cpp_FUN_0054d3a0(uint sfx_handle, int check_hardware_playback)
    ADD ESP,0x8                         ; 00550ba5
    TEST EAX,EAX                        ; 00550ba8
    SETNZ AL                            ; 00550baa
    AND EAX,0xff                        ; 00550bad
    RET                                 ; 00550bb2

