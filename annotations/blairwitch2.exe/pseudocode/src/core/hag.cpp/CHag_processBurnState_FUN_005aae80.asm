; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hag_cpp_CHag_processBurnState_FUN_005aae80(CHag *this_ptr,float delta_time)
;
; Parameters:
; CHag *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_Bip01_005f0c2a
;   TerminatedCString s_BurnComplete_005f0c30
;   undefined4 DAT_005f0c3e
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 DAT_01cedef4
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850
;   core_xform.cpp_FUN_00591530
;   crt_string.c_strstr_FUN_005ba9e0
;   unkaddr_0059d350.cpp_FUN_0059d880
;   unkaddr_005a7eb0.cpp_FUN_005a7ed0
;   unkafter_superopt.cpp_FUN_005a8300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aae80
        ;   Label: core_hag.cpp_CHag_processBurnState_FUN_005aae80
    PUSH ESI                            ; 005aae81
    PUSH EDI                            ; 005aae82
    PUSH EBP                            ; 005aae83
    SUB ESP,0xfc                        ; 005aae84
    MOV EAX,dword ptr [ESP + 0x110]     ; 005aae8a
    FLD float ptr [EAX + 0x11430]       ; 005aae91
    FLDZ                                ; 005aae97
    FCOMPP                              ; 005aae99
    FNSTSW AX                           ; 005aae9b
    SAHF                                ; 005aae9d
    JNC 0x005ab222                      ; 005aae9e
        ;   XREF to: 005ab222 (CONDITIONAL_JUMP)  ; LAB_005ab222
    MOV EAX,dword ptr [ESP + 0x110]     ; 005aaea4
    FLD float ptr [EAX + 0x11430]       ; 005aaeab
    FSUB float ptr [ESP + 0x114]        ; 005aaeb1
    FSTP float ptr [EAX + 0x11430]      ; 005aaeb8
    MOV EAX,ESP                         ; 005aaebe
    PUSH EAX                            ; 005aaec0
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 005aaec1
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005aaec6
    MOV EAX,dword ptr [ESP + 0x110]     ; 005aaec9
    FLD float ptr [EAX + 0x11440]       ; 005aaed0
    FMUL float ptr [ESP + 0x114]        ; 005aaed6
    XOR EDX,EDX                         ; 005aaedd
    MOV EBP,dword ptr [ESP + 0x110]     ; 005aaedf
    MOV EBX,dword ptr [ESP + 0x110]     ; 005aaee6
    MOV ESI,dword ptr [ESP + 0x110]     ; 005aaeed
    MOV dword ptr [ESP + 0xec],EDX      ; 005aaef4
    MOV dword ptr [ESP + 0xf0],EDX      ; 005aaefb
    MOV EAX,[0x01cedef4]                ; 005aaf02 | DAT_01cedef4
    ADD EBP,0x11434                     ; 005aaf07
    ADD EBX,0x11430                     ; 005aaf0d
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 005aaf13
    ADD ESI,0x264                       ; 005aaf1a
    MOV dword ptr [ESP + 0x34],EAX      ; 005aaf20
    MOV dword ptr [ESP + 0x38],EAX      ; 005aaf24
    MOV EAX,dword ptr [ESP + 0x110]     ; 005aaf28
    MOV dword ptr [ESP + 0xf4],ESI      ; 005aaf2f
    ADD EAX,0x1134                      ; 005aaf36
    FSTP float ptr [ESP + 0x4]          ; 005aaf3b
    MOV dword ptr [EAX + 0x1029c],0x0   ; 005aaf3f
    MOV dword ptr [ESP + 0xe8],EAX      ; 005aaf49
    MOV EAX,dword ptr [ESP + 0x110]     ; 005aaf50
        ;   Label: LAB_005aaf50
    MOV EAX,dword ptr [EAX + 0x113b0]   ; 005aaf57
    MOV ESI,dword ptr [ESP + 0xec]      ; 005aaf5d
    CMP ESI,dword ptr [EAX + 0x1d1f8]   ; 005aaf64
    JL 0x005aaf77                       ; 005aaf6a
        ;   XREF to: 005aaf77 (CONDITIONAL_JUMP)  ; LAB_005aaf77
    ADD ESP,0xfc                        ; 005aaf6c
    POP EBP                             ; 005aaf72
    POP EDI                             ; 005aaf73
    POP ESI                             ; 005aaf74
    POP EBX                             ; 005aaf75
    RET                                 ; 005aaf76
    CALL unkaddr_005a7eb0.cpp_FUN_005a7ed0 ; 005aaf77
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a7ed0()
        ;   Label: LAB_005aaf77
    TEST EAX,EAX                        ; 005aaf7c
    JZ 0x005ab1ec                       ; 005aaf7e
        ;   XREF to: 005ab1ec (CONDITIONAL_JUMP)  ; LAB_005ab1ec
    MOV EAX,dword ptr [ESP + 0x110]     ; 005aaf84
    MOV EAX,dword ptr [EAX + 0x113b0]   ; 005aaf8b
    MOV EDX,dword ptr [ESP + 0xf0]      ; 005aaf91
    ADD EAX,0x1d1fc                     ; 005aaf98
    PUSH 0x5f0c2a                       ; 005aaf9d | = "Bip01"
    ADD EAX,EDX                         ; 005aafa2
    PUSH EAX                            ; 005aafa4
    CALL crt_string.c_strstr_FUN_005ba9e0 ; 005aafa5
        ;   XREF to: 005ba9e0 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strstr_FUN_005ba9e0(char * haystack_str, char * needle_str)
    ADD ESP,0x8                         ; 005aafaa
    TEST EAX,EAX                        ; 005aafad
    JZ 0x005ab1ec                       ; 005aafaf
        ;   XREF to: 005ab1ec (CONDITIONAL_JUMP)  ; LAB_005ab1ec
    MOV ECX,dword ptr [ESP + 0xe8]      ; 005aafb5
    PUSH ECX                            ; 005aafbc
    PUSH 0x265370c                      ; 005aafbd | DAT_0265370c
    LEA ESI,[ESP + 0x80]                ; 005aafc2
    LEA EDI,[ESP + 0xb0]                ; 005aafc9
    CALL core_xform.cpp_FUN_00591530    ; 005aafd0
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[ESP + 0x80]                ; 005aafd5
    ADD ESP,0x8                         ; 005aafdc
    LEA EAX,[ESP + 0xa8]                ; 005aafdf
    MOVSD ES:EDI,ESI                    ; 005aafe6
    MOVSD ES:EDI,ESI                    ; 005aafe7
    MOVSD ES:EDI,ESI                    ; 005aafe8
    PUSH EAX                            ; 005aafe9
    MOV ESI,dword ptr [ESP + 0x114]     ; 005aafea
    PUSH ESI                            ; 005aaff1
    LEA ESI,[ESP + 0xbc]                ; 005aaff2
    LEA EDI,[ESP + 0xa4]                ; 005aaff9
    CALL core_actor.cpp_FUN_00408cf0    ; 005ab000
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0xbc]                ; 005ab005
    ADD ESP,0x8                         ; 005ab00c
    MOVSD ES:EDI,ESI                    ; 005ab00f
    MOVSD ES:EDI,ESI                    ; 005ab010
    MOVSD ES:EDI,ESI                    ; 005ab011
    FLD float ptr [EBP]                 ; 005ab012
    FMUL float ptr [EBX]                ; 005ab015
    FLD float ptr [EBP + 0x4]           ; 005ab017
    FMUL float ptr [EBX]                ; 005ab01a
    FLD float ptr [EBP + 0x8]           ; 005ab01c
    FMUL float ptr [EBX]                ; 005ab01f
    LEA EDI,[ESP + 0x54]                ; 005ab021
    LEA ESI,[ESP + 0x48]                ; 005ab025
    FXCH ST2                            ; 005ab029
    FSTP float ptr [ESP + 0x48]         ; 005ab02b
    FSTP float ptr [ESP + 0x4c]         ; 005ab02f
    FSTP float ptr [ESP + 0x50]         ; 005ab033
    MOVSD ES:EDI,ESI                    ; 005ab037
    MOVSD ES:EDI,ESI                    ; 005ab038
    MOVSD ES:EDI,ESI                    ; 005ab039
    FLD float ptr [0x005f0c3e]          ; 005ab03a | DAT_005f0c3e
    FLD float ptr [ESP + 0x54]          ; 005ab040
    FMUL ST1                            ; 005ab044
    FLD float ptr [ESP + 0x58]          ; 005ab046
    FMUL ST2                            ; 005ab04a
    FLD float ptr [ESP + 0x5c]          ; 005ab04c
    FMULP ST3                           ; 005ab050
    PUSH 0x3fc00000                     ; 005ab052
    PUSH 0x3f4ccccd                     ; 005ab057
    LEA EDI,[ESP + 0xc8]                ; 005ab05c
    LEA ESI,[ESP + 0x68]                ; 005ab063
    FXCH                                ; 005ab067
    FSTP float ptr [ESP + 0x68]         ; 005ab069
    FSTP float ptr [ESP + 0x6c]         ; 005ab06d
    FSTP float ptr [ESP + 0x70]         ; 005ab071
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab075
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x100],EAX     ; 005ab07a
    MOVSD ES:EDI,ESI                    ; 005ab081
    MOVSD ES:EDI,ESI                    ; 005ab082
    MOVSD ES:EDI,ESI                    ; 005ab083
    FLD float ptr [ESP + 0x100]         ; 005ab084
    ADD ESP,0x8                         ; 005ab08b
    MOV EAX,dword ptr [ESP + 0xc0]      ; 005ab08e
    PUSH 0x2                            ; 005ab095
    MOV dword ptr [ESP + 0xdc],EAX      ; 005ab097
    MOV EAX,dword ptr [ESP + 0xcc]      ; 005ab09e
    PUSH 0x265370c                      ; 005ab0a5 | DAT_0265370c
    MOV dword ptr [ESP + 0xe8],EAX      ; 005ab0aa
    LEA EAX,[ESP + 0x98]                ; 005ab0b1
    PUSH EAX                            ; 005ab0b8
    LEA EAX,[ESP + 0xa8]                ; 005ab0b9
    PUSH EAX                            ; 005ab0c0
    PUSH 0x3f800000                     ; 005ab0c1
    PUSH 0x3f800000                     ; 005ab0c6
    LEA EDI,[ESP + 0xa8]                ; 005ab0cb
    PUSH 0x3f800000                     ; 005ab0d2
    LEA ESI,[ESP + 0xf4]                ; 005ab0d7
    PUSH 0x0                            ; 005ab0de
    FADD float ptr [ESP + 0xe4]         ; 005ab0e0
    PUSH 0x3f800000                     ; 005ab0e7
    FSTP float ptr [ESP + 0x100]        ; 005ab0ec
    PUSH 0x3f000000                     ; 005ab0f3
    MOVSD ES:EDI,ESI                    ; 005ab0f8
    MOVSD ES:EDI,ESI                    ; 005ab0f9
    MOVSD ES:EDI,ESI                    ; 005ab0fa
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab0fb
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x120],EAX     ; 005ab100
    FLD float ptr [ESP + 0x120]         ; 005ab107
    ADD ESP,0x8                         ; 005ab10e
    SUB ESP,0x4                         ; 005ab111
    FSTP float ptr [ESP]                ; 005ab114
    PUSH 0x0                            ; 005ab117
    PUSH 0x3f000000                     ; 005ab119
    PUSH 0x3fc00000                     ; 005ab11e
    PUSH 0x3f800000                     ; 005ab123
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab128
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x12c],EAX     ; 005ab12d
    FLD float ptr [ESP + 0x12c]         ; 005ab134
    ADD ESP,0x8                         ; 005ab13b
    SUB ESP,0x4                         ; 005ab13e
    MOV EDI,dword ptr [ESP + 0x124]     ; 005ab141
    FSTP float ptr [ESP]                ; 005ab148
    PUSH EDI                            ; 005ab14b
    CALL unkafter_superopt.cpp_FUN_005a8300 ; 005ab14c
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8300()
    ADD ESP,0x34                        ; 005ab151
    PUSH 0x32                           ; 005ab154
    PUSH 0x0                            ; 005ab156
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 005ab158
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005ab15d
    TEST EAX,EAX                        ; 005ab160
    JNZ 0x005ab1ec                      ; 005ab162
        ;   XREF to: 005ab1ec (CONDITIONAL_JUMP)  ; LAB_005ab1ec
    FLD float ptr [EBP]                 ; 005ab168
    FMUL float ptr [EBX]                ; 005ab16b
    FLD float ptr [EBP + 0x4]           ; 005ab16d
    FMUL float ptr [EBX]                ; 005ab170
    FLD float ptr [EBP + 0x8]           ; 005ab172
    FMUL float ptr [EBX]                ; 005ab175
    LEA EDI,[ESP + 0x6c]                ; 005ab177
    LEA EAX,[ESP + 0x9c]                ; 005ab17b
    LEA ESI,[ESP + 0x3c]                ; 005ab182
    PUSH EAX                            ; 005ab186
    FXCH ST2                            ; 005ab187
    FSTP float ptr [ESP + 0x40]         ; 005ab189
    FSTP float ptr [ESP + 0x44]         ; 005ab18d
    FSTP float ptr [ESP + 0x48]         ; 005ab191
    MOV EAX,dword ptr [ESP + 0x114]     ; 005ab195
    MOVSD ES:EDI,ESI                    ; 005ab19c
    MOVSD ES:EDI,ESI                    ; 005ab19d
    MOVSD ES:EDI,ESI                    ; 005ab19e
    PUSH EAX                            ; 005ab19f
    LEA ESI,[ESP + 0x8c]                ; 005ab1a0
    LEA EDI,[ESP + 0xd4]                ; 005ab1a7
    CALL core_actor.cpp_FUN_00408d70    ; 005ab1ae
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 005ab1b3
    LEA ESI,[ESP + 0x84]                ; 005ab1b6
    MOV EAX,dword ptr [ESP + 0x110]     ; 005ab1bd
    MOVSD ES:EDI,ESI                    ; 005ab1c4
    MOVSD ES:EDI,ESI                    ; 005ab1c5
    MOVSD ES:EDI,ESI                    ; 005ab1c6
    MOV EDX,dword ptr [EAX + 0x280c]    ; 005ab1c7
    PUSH EDX                            ; 005ab1cd
    PUSH 0x1                            ; 005ab1ce
    LEA EAX,[ESP + 0x74]                ; 005ab1d0
    PUSH EAX                            ; 005ab1d4
    LEA EAX,[ESP + 0xd8]                ; 005ab1d5
    PUSH EAX                            ; 005ab1dc
    MOV ECX,dword ptr [0x006167e0]      ; 005ab1dd | g_CGorePtr
    PUSH ECX                            ; 005ab1e3
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850 ; 005ab1e4
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004c9850(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 005ab1e9
    MOV EDI,dword ptr [ESP + 0xe8]      ; 005ab1ec
        ;   Label: LAB_005ab1ec
    MOV EAX,dword ptr [ESP + 0xec]      ; 005ab1f3
    MOV ESI,dword ptr [ESP + 0xf0]      ; 005ab1fa
    ADD EDI,0x30                        ; 005ab201
    INC EAX                             ; 005ab204
    ADD ESI,0x24                        ; 005ab205
    MOV dword ptr [ESP + 0xe8],EDI      ; 005ab208
    MOV dword ptr [ESP + 0xec],EAX      ; 005ab20f
    MOV dword ptr [ESP + 0xf0],ESI      ; 005ab216
    JMP 0x005aaf50                      ; 005ab21d
        ;   XREF to: 005aaf50 (UNCONDITIONAL_JUMP)  ; LAB_005aaf50
    MOV EAX,dword ptr [ESP + 0x110]     ; 005ab222
        ;   Label: LAB_005ab222
    PUSH 0x5f0c30                       ; 005ab229 | = "BurnComplete"
    ADD EAX,0x10af8                     ; 005ab22e
    PUSH EAX                            ; 005ab233
    MOV dword ptr [EAX + 0x938],0x0     ; 005ab234
    CALL unkaddr_0059d350.cpp_FUN_0059d880 ; 005ab23e
        ;   XREF to: 0059d880 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d880()
    ADD ESP,0x8                         ; 005ab243
    ADD ESP,0xfc                        ; 005ab246
    POP EBP                             ; 005ab24c
    POP EDI                             ; 005ab24d
    POP ESI                             ; 005ab24e
    POP EBX                             ; 005ab24f
    RET                                 ; 005ab250

