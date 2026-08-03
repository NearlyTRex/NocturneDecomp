; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_CDirectSoundDevice_start_FUN_00529f60(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x338]:8  local_338
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_Position_secondary_buffe_00594127
;   TerminatedCString s_Play_the_secondary_buffe_00594146
;   double DOUBLE_00594167 = 0.5
;   undefined4 DAT_02dc921c
;   undefined4 DAT_02dc9228
;   undefined4 DAT_02dc922c
;   undefined4 DAT_02dc9230
;   undefined4 DAT_02dc9234
;   undefined4 DAT_02dc9238
;   undefined4 DAT_02dc923c
;   undefined4 DAT_02dc9240
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_fillStreamBuffer_FUN_00529c10
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;   sound_sndmain.cpp_startSoundThread_FUN_005286d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529f60
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_start_FUN_00529f60
    PUSH ESI                            ; 00529f61
    PUSH EDI                            ; 00529f62
    PUSH EBP                            ; 00529f63
    MOV EBP,ESP                         ; 00529f64
    SUB ESP,0x328                       ; 00529f66
    AND ESP,0xfffffff8                  ; 00529f6c
    CMP dword ptr [0x02dc921c],0x0      ; 00529f6f | DAT_02dc921c
    JZ 0x0052a073                       ; 00529f76
        ;   XREF to: 0052a073 (CONDITIONAL_JUMP)  ; LAB_0052a073
    FILD dword ptr [0x02dc9234]         ; 00529f7c | DAT_02dc9234
    FILD dword ptr [0x02dc922c]         ; 00529f82 | DAT_02dc922c
    FDIVP                               ; 00529f88
    MOV EAX,[0x02dc9228]                ; 00529f8a | DAT_02dc9228
    MOV EDX,EAX                         ; 00529f8f
    SAR EDX,0x1f                        ; 00529f91
    SHL EDX,0x3                         ; 00529f94
    SBB EAX,EDX                         ; 00529f97
    SAR EAX,0x3                         ; 00529f99
    IMUL EAX,dword ptr [0x02dc9234]     ; 00529f9c | DAT_02dc9234
    MOV EBX,dword ptr [0x02dc9230]      ; 00529fa3 | DAT_02dc9230
    IMUL EAX,EBX                        ; 00529fa9
    FMUL double ptr [0x00594167]        ; 00529fac | DOUBLE_00594167
    MOV ESI,dword ptr [0x02dc923c]      ; 00529fb2 | DAT_02dc923c
    FSTP double ptr [ESP]               ; 00529fb8
    XOR EBX,EBX                         ; 00529fbb
    MOV [0x02dc9238],EAX                ; 00529fbd | DAT_02dc9238
    MOV dword ptr [0x02dc9240],EBX      ; 00529fc2 | DAT_02dc9240
    TEST ESI,ESI                        ; 00529fc8
    JLE 0x00529fe4                      ; 00529fca
        ;   XREF to: 00529fe4 (CONDITIONAL_JUMP)  ; LAB_00529fe4
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_00529c10 ; 00529fcc
        ;   XREF to: 00529c10 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_fillStreamBuffer_FUN_00529c10()
        ;   Label: LAB_00529fcc
    TEST EAX,EAX                        ; 00529fd1
    JZ 0x0052a05b                       ; 00529fd3
        ;   XREF to: 0052a05b (CONDITIONAL_JUMP)  ; LAB_0052a05b
    MOV EDX,dword ptr [0x02dc923c]      ; 00529fd9 | DAT_02dc923c
    INC EBX                             ; 00529fdf
    CMP EBX,EDX                         ; 00529fe0
    JL 0x00529fcc                       ; 00529fe2
        ;   XREF to: 00529fcc (CONDITIONAL_JUMP)  ; LAB_00529fcc
    MOV ECX,dword ptr [ESP + 0x4]       ; 00529fe4
        ;   Label: LAB_00529fe4
    PUSH ECX                            ; 00529fe8
    MOV EBX,dword ptr [ESP + 0x4]       ; 00529fe9
    PUSH EBX                            ; 00529fed
    CALL sound_sndmain.cpp_startSoundThread_FUN_005286d0 ; 00529fee
        ;   XREF to: 005286d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_startSoundThread_FUN_005286d0(double latency_seconds)
    ADD ESP,0x8                         ; 00529ff3
    TEST EAX,EAX                        ; 00529ff6
    JZ 0x0052a05b                       ; 00529ff8
        ;   XREF to: 0052a05b (CONDITIONAL_JUMP)  ; LAB_0052a05b
    MOV ESI,dword ptr [0x02dc921c]      ; 00529ffa | DAT_02dc921c
    TEST ESI,ESI                        ; 0052a000
    JZ 0x0052a0b6                       ; 0052a002
        ;   XREF to: 0052a0b6 (CONDITIONAL_JUMP)  ; LAB_0052a0b6
    PUSH 0x0                            ; 0052a008
    MOV EBX,dword ptr [ESI]             ; 0052a00a
    PUSH ESI                            ; 0052a00c
    CALL dword ptr [EBX + 0x34]         ; 0052a00d
    TEST EAX,EAX                        ; 0052a010
    JNZ 0x0052a089                      ; 0052a012
        ;   XREF to: 0052a089 (CONDITIONAL_JUMP)  ; LAB_0052a089
    PUSH 0x1                            ; 0052a014
    PUSH 0x0                            ; 0052a016
    MOV EAX,[0x02dc921c]                ; 0052a018 | DAT_02dc921c
    PUSH 0x0                            ; 0052a01d
    MOV EBX,dword ptr [EAX]             ; 0052a01f
    PUSH EAX                            ; 0052a021
    CALL dword ptr [EBX + 0x30]         ; 0052a022
    TEST EAX,EAX                        ; 0052a025
    JZ 0x0052a0b6                       ; 0052a027
        ;   XREF to: 0052a0b6 (CONDITIONAL_JUMP)  ; LAB_0052a0b6
    PUSH EAX                            ; 0052a02d
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a02e
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a033
    PUSH EAX                            ; 0052a036
    PUSH 0x594146                       ; 0052a037 | = "Play the secondary buffer"
    PUSH 0x5940b7                       ; 0052a03c | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 0052a041
    PUSH EAX                            ; 0052a045
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a046
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052a04b
    LEA EAX,[ESP + 0x8]                 ; 0052a04e
    PUSH EAX                            ; 0052a052
        ;   Label: LAB_0052a052
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052a053
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052a058
    MOV EDI,dword ptr [EBP + 0x14]      ; 0052a05b
        ;   Label: LAB_0052a05b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052a05e
    PUSH EDI                            ; 0052a061
    MOV EAX,dword ptr [EAX]             ; 0052a062
    CALL dword ptr [EAX + 0x8]          ; 0052a064
    ADD ESP,0x4                         ; 0052a067
    XOR EAX,EAX                         ; 0052a06a
    MOV ESP,EBP                         ; 0052a06c
    POP EBP                             ; 0052a06e
    POP EDI                             ; 0052a06f
    POP ESI                             ; 0052a070
    POP EBX                             ; 0052a071
    RET                                 ; 0052a072
    MOV EDI,0x9999999a                  ; 0052a073
        ;   Label: LAB_0052a073
    MOV EAX,0x3fa99999                  ; 0052a078
    MOV dword ptr [ESP],EDI             ; 0052a07d
    MOV dword ptr [ESP + 0x4],EAX       ; 0052a080
    JMP 0x00529fe4                      ; 0052a084
        ;   XREF to: 00529fe4 (UNCONDITIONAL_JUMP)  ; LAB_00529fe4
    PUSH EAX                            ; 0052a089
        ;   Label: LAB_0052a089
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a08a
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a08f
    PUSH EAX                            ; 0052a092
    PUSH 0x594127                       ; 0052a093 | = "Position secondary buffer to 0"
    PUSH 0x5940b7                       ; 0052a098 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1a4]               ; 0052a09d
    PUSH EAX                            ; 0052a0a4
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a0a5
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0052a0aa
    LEA EAX,[ESP + 0x198]               ; 0052a0ad
    JMP 0x0052a052                      ; 0052a0b4
        ;   XREF to: 0052a052 (UNCONDITIONAL_JUMP)  ; LAB_0052a052
    MOV EAX,0x1                         ; 0052a0b6
        ;   Label: LAB_0052a0b6
    MOV ESP,EBP                         ; 0052a0bb
    POP EBP                             ; 0052a0bd
    POP EDI                             ; 0052a0be
    POP ESI                             ; 0052a0bf
    POP EBX                             ; 0052a0c0
    RET                                 ; 0052a0c1

