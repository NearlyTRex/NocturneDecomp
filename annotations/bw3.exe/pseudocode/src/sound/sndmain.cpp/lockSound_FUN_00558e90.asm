; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_lockSound_FUN_00558e90(void)
;
;
; XREF[27]:
;   core_tommygun.cpp_CTommyGun_process_FUN_0056bd40 at 0056be4d
;   sound_sndmain.cpp_FUN_00552f10 at 00552f62
;   sound_sndmain.cpp_FUN_00556240 at 005562e6
;   sound_sndmain.cpp_FUN_00556fb0 at 00556fb0
;   sound_sndmain.cpp_FUN_00557010 at 00557010
;   sound_sndmain.cpp_FUN_00557020 at 00557020
;   sound_sndmain.cpp_FUN_00557080 at 00557080
;   sound_sndmain.cpp_FUN_00557100 at 00557100
;   sound_sndmain.cpp_FUN_00557260 at 0055726e
;   sound_sndmain.cpp_FUN_00557390 at 00557398
;   ... and 17 more
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d3cb5
;   TerminatedCString s_lockSound_unable_to_crea_005d3cca
;   TerminatedCString s_sound_sndmain_cpp_005d3cf4
;   TerminatedCString s_lockSound_lock_imbalance_005d3d09
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf3418
;   undefined4 DAT_02cf341c
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   wincore_winrun.cpp_createMutex_FUN_00581920
;   wincore_winrun.cpp_waitForMutex_FUN_00581930
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00558e90
        ;   Label: sound_sndmain.cpp_lockSound_FUN_00558e90
    PUSH EDI                            ; 00558e91
    CMP dword ptr [0x02cf3418],0x0      ; 00558e92 | DAT_02cf3418
    JNZ 0x00558ece                      ; 00558e99
        ;   XREF to: 00558ece (CONDITIONAL_JUMP)  ; LAB_00558ece
    CALL wincore_winrun.cpp_createMutex_FUN_00581920 ; 00558e9b
        ;   XREF to: 00581920 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createMutex_FUN_00581920()
    MOV [0x02cf3418],EAX                ; 00558ea0 | DAT_02cf3418
    TEST EAX,EAX                        ; 00558ea5
    JNZ 0x00558ece                      ; 00558ea7
        ;   XREF to: 00558ece (CONDITIONAL_JUMP)  ; LAB_00558ece
    PUSH EBX                            ; 00558ea9
    MOV ECX,0x5d3cb5                    ; 00558eaa | = "..\\sound\\sndmain.cpp"
    MOV EBX,0x17e7                      ; 00558eaf
    PUSH 0x5d3cca                       ; 00558eb4 | = "lockSound - unable to create mutex ob..."
    MOV dword ptr [0x01d71de0],ECX      ; 00558eb9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00558ebf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00558ec5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00558eca
    POP EBX                             ; 00558ecd
    MOV ESI,dword ptr [0x02cf3418]      ; 00558ece | DAT_02cf3418
        ;   Label: LAB_00558ece
    PUSH ESI                            ; 00558ed4
    CALL wincore_winrun.cpp_waitForMutex_FUN_00581930 ; 00558ed5
        ;   XREF to: 00581930 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_waitForMutex_FUN_00581930(HANDLE mutex_handle)
    MOV EDI,dword ptr [0x02cf341c]      ; 00558eda | DAT_02cf341c
    INC EDI                             ; 00558ee0
    ADD ESP,0x4                         ; 00558ee1
    MOV dword ptr [0x02cf341c],EDI      ; 00558ee4 | DAT_02cf341c
    CMP EDI,0x63                        ; 00558eea
    JG 0x00558ef2                       ; 00558eed
        ;   XREF to: 00558ef2 (CONDITIONAL_JUMP)  ; LAB_00558ef2
    POP EDI                             ; 00558eef
    POP ESI                             ; 00558ef0
    RET                                 ; 00558ef1
    MOV EAX,0x5d3cf4                    ; 00558ef2 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00558ef2
    MOV EDX,0x17f2                      ; 00558ef7
    PUSH 0x5d3d09                       ; 00558efc | = "lockSound - lock imbalance?"
    MOV [0x01d71de0],EAX                ; 00558f01 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00558f06 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00558f0c
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00558f11
    POP EDI                             ; 00558f14
    POP ESI                             ; 00558f15
    RET                                 ; 00558f16

