; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005531d0(double latency_seconds)
;
; Parameters:
; double           Stack[0x4]:8   latency_seconds
;
; XREF[2]:
;   sound_snddx.cpp_FUN_00555130 at 005551b9
;   sound_sndwav.cpp_CWavOutDevice_start_FUN_00557dc0 at 00557e5b
;
; Referenced Globals:
;   undefined4 DAT_005e919e
;   undefined4 DAT_0264900c
;   undefined4 DAT_02649010
;   undefined4 DAT_02649014
;
; Called Functions:
;   sound_sndmain.cpp_killSoundThread_FUN_00553270
;   wincore_winrun.cpp_createThread_FUN_0058fd20
;   wincore_winrun.cpp_setThreadPriority_FUN_0058fd50
;   wincore_winrun.cpp_sleep_FUN_0058fd90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005531d0
        ;   Label: sound_sndmain.cpp_startSoundThread_FUN_005531d0
    PUSH ESI                            ; 005531d1
    PUSH EBP                            ; 005531d2
    MOV EBP,ESP                         ; 005531d3
    AND ESP,0xfffffff8                  ; 005531d5
    CALL sound_sndmain.cpp_killSoundThread_FUN_00553270 ; 005531d8
        ;   XREF to: 00553270 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_00553270()
    TEST EAX,EAX                        ; 005531dd
    JZ 0x00553221                       ; 005531df
        ;   XREF to: 00553221 (CONDITIONAL_JUMP)  ; LAB_00553221
    MOV EAX,dword ptr [EBP + 0x10]      ; 005531e1
    FLD float ptr [EBP + 0x10]          ; 005531e4
    MOV [0x0264900c],EAX                ; 005531e7 | DAT_0264900c
    FCOMP double ptr [0x005e919e]       ; 005531ec | DAT_005e919e
    FNSTSW AX                           ; 005531f2
    SAHF                                ; 005531f4
    JNC 0x00553201                      ; 005531f5
        ;   XREF to: 00553201 (CONDITIONAL_JUMP)  ; LAB_00553201
    MOV dword ptr [0x0264900c],0x3b03126f ; 005531f7 | DAT_0264900c
    XOR ECX,ECX                         ; 00553201
        ;   Label: LAB_00553201
    PUSH ECX                            ; 00553203
    PUSH 0x553180                       ; 00553204
    MOV dword ptr [0x02649010],ECX      ; 00553209 | DAT_02649010
    MOV dword ptr [0x02649014],ECX      ; 0055320f | DAT_02649014
    CALL wincore_winrun.cpp_createThread_FUN_0058fd20 ; 00553215
        ;   XREF to: 0058fd20 (UNCONDITIONAL_CALL)  ; HANDLE wincore_winrun.cpp_createThread_FUN_0058fd20(LPTHREAD_START_ROUTINE thread_func, LPVOID thread_param)
    ADD ESP,0x8                         ; 0055321a
    TEST EAX,EAX                        ; 0055321d
    JNZ 0x00553227                      ; 0055321f
        ;   XREF to: 00553227 (CONDITIONAL_JUMP)  ; LAB_00553227
    MOV ESP,EBP                         ; 00553221
        ;   Label: LAB_00553221
    POP EBP                             ; 00553223
    POP ESI                             ; 00553224
    POP EBX                             ; 00553225
    RET                                 ; 00553226
    PUSH 0x3                            ; 00553227
        ;   Label: LAB_00553227
    PUSH EAX                            ; 00553229
    CALL wincore_winrun.cpp_setThreadPriority_FUN_0058fd50 ; 0055322a
        ;   XREF to: 0058fd50 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_setThreadPriority_FUN_0058fd50(HANDLE hThread, int priority_level)
    ADD ESP,0x8                         ; 0055322f
    TEST EAX,EAX                        ; 00553232
    JZ 0x00553221                       ; 00553234
        ;   XREF to: 00553221 (CONDITIONAL_JUMP)  ; LAB_00553221
    MOV ESI,dword ptr [0x02649010]      ; 00553236 | DAT_02649010
    XOR EBX,EBX                         ; 0055323c
    TEST ESI,ESI                        ; 0055323e
    JNZ 0x00553263                      ; 00553240
        ;   XREF to: 00553263 (CONDITIONAL_JUMP)  ; LAB_00553263
    PUSH 0x3f847ae1                     ; 00553242
        ;   Label: LAB_00553242
    PUSH 0x47ae147b                     ; 00553247
    INC EBX                             ; 0055324c
    CALL wincore_winrun.cpp_sleep_FUN_0058fd90 ; 0055324d
        ;   XREF to: 0058fd90 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_sleep_FUN_0058fd90(double seconds)
    ADD ESP,0x8                         ; 00553252
    CMP EBX,0x64                        ; 00553255
    JGE 0x00553263                      ; 00553258
        ;   XREF to: 00553263 (CONDITIONAL_JUMP)  ; LAB_00553263
    CMP dword ptr [0x02649010],0x0      ; 0055325a | DAT_02649010
    JZ 0x00553242                       ; 00553261
        ;   XREF to: 00553242 (CONDITIONAL_JUMP)  ; LAB_00553242
    MOV EAX,[0x02649010]                ; 00553263 | DAT_02649010
        ;   Label: LAB_00553263
    MOV ESP,EBP                         ; 00553268
    POP EBP                             ; 0055326a
    POP ESI                             ; 0055326b
    POP EBX                             ; 0055326c
    RET                                 ; 0055326d

