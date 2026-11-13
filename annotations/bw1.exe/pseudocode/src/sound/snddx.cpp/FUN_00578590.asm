; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00578590(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_Querry_DirectSound_capab_005f4dd1
;   undefined4 DAT_02c81d94
;   undefined4 DAT_02c81da0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578590
        ;   Label: sound_snddx.cpp_FUN_00578590
    SUB ESP,0x1f0                       ; 00578591
    CMP dword ptr [0x02c81d94],0x0      ; 00578597 | DAT_02c81d94
    JZ 0x005785b7                       ; 0057859e
        ;   XREF to: 005785b7 (CONDITIONAL_JUMP)  ; LAB_005785b7
    MOV ECX,dword ptr [0x02c81da0]      ; 005785a0 | DAT_02c81da0
    TEST ECX,ECX                        ; 005785a6
    JZ 0x005785bb                       ; 005785a8
        ;   XREF to: 005785bb (CONDITIONAL_JUMP)  ; LAB_005785bb
    MOV EAX,0x2                         ; 005785aa
    ADD ESP,0x1f0                       ; 005785af
        ;   Label: LAB_005785af
    POP EBX                             ; 005785b5
    RET                                 ; 005785b6
    XOR EAX,EAX                         ; 005785b7
        ;   Label: LAB_005785b7
    JMP 0x005785af                      ; 005785b9
        ;   XREF to: 005785af (UNCONDITIONAL_JUMP)  ; LAB_005785af
    PUSH 0x60                           ; 005785bb
        ;   Label: LAB_005785bb
    PUSH ECX                            ; 005785bd
    LEA EAX,[ESP + 0x198]               ; 005785be
    PUSH EAX                            ; 005785c5
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005785c6
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005785cb
    LEA ECX,[ESP + 0x190]               ; 005785ce
    MOV EBX,0x60                        ; 005785d5
    PUSH ECX                            ; 005785da
    MOV EAX,[0x02c81d94]                ; 005785db | DAT_02c81d94
    MOV dword ptr [ESP + 0x194],EBX     ; 005785e0
    PUSH EAX                            ; 005785e7
    MOV EDX,dword ptr [EAX]             ; 005785e8
    CALL dword ptr [EDX + 0x10]         ; 005785ea
    TEST EAX,EAX                        ; 005785ed
    JNZ 0x00578608                      ; 005785ef
        ;   XREF to: 00578608 (CONDITIONAL_JUMP)  ; LAB_00578608
    CMP dword ptr [ESP + 0x1a8],0x0     ; 005785f1
    JBE 0x005785af                      ; 005785f9
        ;   XREF to: 005785af (CONDITIONAL_JUMP)  ; LAB_005785af
    MOV EAX,0x1                         ; 005785fb
    ADD ESP,0x1f0                       ; 00578600
    POP EBX                             ; 00578606
    RET                                 ; 00578607
    PUSH EAX                            ; 00578608
        ;   Label: LAB_00578608
    CALL sound_snddx.cpp_FUN_00577500   ; 00578609
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 0057860e
    PUSH EAX                            ; 00578611
    PUSH 0x5f4dd1                       ; 00578612 | = "Querry DirectSound capabilities"
    PUSH 0x5f4c35                       ; 00578617 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0057861c
    PUSH EAX                            ; 00578620
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00578621
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00578626
    MOV EAX,ESP                         ; 00578629
    PUSH EAX                            ; 0057862b
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 0057862c
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 00578631
    XOR EAX,EAX                         ; 00578634
    ADD ESP,0x1f0                       ; 00578636
    POP EBX                             ; 0057863c
    RET                                 ; 0057863d

