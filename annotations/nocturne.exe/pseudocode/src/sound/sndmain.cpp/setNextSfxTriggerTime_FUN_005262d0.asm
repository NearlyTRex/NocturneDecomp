; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[6]:
;   FUN_00418a00 at 00419020
;   FUN_005464a0 at 005466b0
;   core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0 at 0041e81e
;   core_drone.cpp_CDrone_process_FUN_00462a60 at 0046309d
;   core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0 at 00480ef6
;   core_flame.cpp_CFlame_process_FUN_0048d0c0 at 0048d42e
;
; Referenced Globals:
;   undefined4 DAT_02dc1b74
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x02dc1b74]      ; 005262d0 | DAT_02dc1b74
        ;   Label: sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005262d0
    LEA EAX,[EDX*0x4 + 0x0]             ; 005262d6
    SUB EAX,EDX                         ; 005262dd
    SHL EAX,0x2                         ; 005262df
    MOV EDX,EAX                         ; 005262e2
    SHL EAX,0x3                         ; 005262e4
    ADD EAX,EDX                         ; 005262e7
    MOV EDX,dword ptr [ESP + 0x4]       ; 005262e9
    MOV dword ptr [EAX + 0x2dc1bd8],EDX ; 005262ed
    MOV EDX,dword ptr [ESP + 0x8]       ; 005262f3
    MOV dword ptr [EAX + 0x2dc1bdc],EDX ; 005262f7
    MOV EDX,dword ptr [ESP + 0xc]       ; 005262fd
    MOV dword ptr [EAX + 0x2dc1be0],EDX ; 00526301
    RET                                 ; 00526307

