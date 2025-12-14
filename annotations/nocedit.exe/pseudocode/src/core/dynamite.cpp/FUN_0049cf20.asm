; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dynamite.cpp_FUN_0049cf20()
;
; Local Variables:
; undefined1       Stack[-0x68]:1  local_68
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c5813
;
; Referenced Globals:
;   TerminatedCString s_fuse_wav_00622e93
;   undefined4 DAT_0065d30c
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cf20
        ;   Label: core_dynamite.cpp_FUN_0049cf20
    SUB ESP,0x64                        ; 0049cf21
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0049cf24
    PUSH 0x622e93                       ; 0049cf28 | = "fuse.wav"
    LEA EAX,[ESP + 0x4]                 ; 0049cf2d
    FLD float ptr [0x0065d30c]          ; 0049cf31 | DAT_0065d30c
    PUSH EAX                            ; 0049cf37
    FSTP float ptr [EBX + 0x578]        ; 0049cf38
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0049cf3e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 0049cf43
    MOV EAX,ESP                         ; 0049cf46
    PUSH EAX                            ; 0049cf48
    MOV EDX,dword ptr [EBX + 0x154]     ; 0049cf49
    PUSH EBX                            ; 0049cf4f
    CALL dword ptr [EDX + 0x24]         ; 0049cf50
    ADD ESP,0x8                         ; 0049cf53
    MOV dword ptr [EBX + 0x588],EAX     ; 0049cf56
    ADD ESP,0x64                        ; 0049cf5c
    POP EBX                             ; 0049cf5f
    RET                                 ; 0049cf60

