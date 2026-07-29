; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl sound_snddx_cpp_CDirectSoundDevice_reset_FUN_0052a0d0(CDirectSoundDevice *this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_Stop_hardware_sfx_second_00594104
;   TerminatedCString s_Stop_secondary_sound_buf_0059416f
;   TerminatedCString s_Stop_primary_sound_buffe_0059418b
;   undefined4 DAT_02dc9218
;   undefined4 DAT_02dc921c
;   undefined4 DAT_02dc92ac
;   undefined4 DAT_02dc9328
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_FUN_00529980
;   sound_sndmain.cpp_killSoundThread_FUN_00528780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052a0d0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_reset_FUN_0052a0d0
    PUSH ESI                            ; 0052a0d1
    PUSH EDI                            ; 0052a0d2
    PUSH EBP                            ; 0052a0d3
    SUB ESP,0x4b4                       ; 0052a0d4
    MOV EDX,0x1                         ; 0052a0da
    MOV ECX,dword ptr [0x02dc921c]      ; 0052a0df | DAT_02dc921c
    MOV dword ptr [ESP + 0x4b0],EDX     ; 0052a0e5
    TEST ECX,ECX                        ; 0052a0ec
    JNZ 0x0052a187                      ; 0052a0ee
        ;   XREF to: 0052a187 (CONDITIONAL_JUMP)  ; LAB_0052a187
    MOV ESI,dword ptr [0x02dc9218]      ; 0052a0f4 | DAT_02dc9218
        ;   Label: LAB_0052a0f4
    TEST ESI,ESI                        ; 0052a0fa
    JNZ 0x0052a1d7                      ; 0052a0fc
        ;   XREF to: 0052a1d7 (CONDITIONAL_JUMP)  ; LAB_0052a1d7
    XOR ESI,ESI                         ; 0052a102
        ;   Label: LAB_0052a102
    XOR EBX,EBX                         ; 0052a104
    MOV EAX,dword ptr [ESI + 0x2dc92a8] ; 0052a106 | DAT_02dc92ac
        ;   Label: LAB_0052a106
    MOV EBP,EBX                         ; 0052a10c
    TEST EAX,EAX                        ; 0052a10e
    JZ 0x0052a120                       ; 0052a110
        ;   XREF to: 0052a120 (CONDITIONAL_JUMP)  ; LAB_0052a120
    PUSH EAX                            ; 0052a112
    MOV EDX,dword ptr [EAX]             ; 0052a113
    CALL dword ptr [EDX + 0x48]         ; 0052a115
    TEST EAX,EAX                        ; 0052a118
    JNZ 0x0052a227                      ; 0052a11a
        ;   XREF to: 0052a227 (CONDITIONAL_JUMP)  ; LAB_0052a227
    LEA EDI,[EBP*0x4 + 0x0]             ; 0052a120
        ;   Label: LAB_0052a120
    ADD EDI,0x2dc9324                   ; 0052a127
    MOV ECX,dword ptr [EDI]             ; 0052a12d | DAT_02dc9328
    TEST ECX,ECX                        ; 0052a12f
    JZ 0x0052a13f                       ; 0052a131
        ;   XREF to: 0052a13f (CONDITIONAL_JUMP)  ; LAB_0052a13f
    PUSH ECX                            ; 0052a133
    MOV EDX,dword ptr [ECX]             ; 0052a134
    CALL dword ptr [EDX + 0x8]          ; 0052a136
    MOV dword ptr [EDI],0x0             ; 0052a139
    LEA EDI,[EBP*0x4 + 0x0]             ; 0052a13f
        ;   Label: LAB_0052a13f
    ADD EDI,0x2dc92a8                   ; 0052a146
    MOV EBP,dword ptr [EDI]             ; 0052a14c | DAT_02dc92ac
    TEST EBP,EBP                        ; 0052a14e
    JZ 0x0052a15f                       ; 0052a150
        ;   XREF to: 0052a15f (CONDITIONAL_JUMP)  ; LAB_0052a15f
    PUSH EBP                            ; 0052a152
    MOV EDX,dword ptr [EBP]             ; 0052a153
    CALL dword ptr [EDX + 0x8]          ; 0052a156
    MOV dword ptr [EDI],0x0             ; 0052a159
    INC EBX                             ; 0052a15f
        ;   Label: LAB_0052a15f
    ADD ESI,0x4                         ; 0052a160
    CMP EBX,0x1f                        ; 0052a163
    JL 0x0052a106                       ; 0052a166
        ;   XREF to: 0052a106 (CONDITIONAL_JUMP)  ; LAB_0052a106
    CALL sound_sndmain.cpp_killSoundThread_FUN_00528780 ; 0052a168
        ;   XREF to: 00528780 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSoundThread_FUN_00528780()
    TEST EAX,EAX                        ; 0052a16d
    JZ 0x0052a261                       ; 0052a16f
        ;   XREF to: 0052a261 (CONDITIONAL_JUMP)  ; LAB_0052a261
    MOV EAX,dword ptr [ESP + 0x4b0]     ; 0052a175
    ADD ESP,0x4b4                       ; 0052a17c
    POP EBP                             ; 0052a182
    POP EDI                             ; 0052a183
    POP ESI                             ; 0052a184
    POP EBX                             ; 0052a185
    RET                                 ; 0052a186
    PUSH ECX                            ; 0052a187
        ;   Label: LAB_0052a187
    MOV EDX,dword ptr [ECX]             ; 0052a188
    CALL dword ptr [EDX + 0x48]         ; 0052a18a
    TEST EAX,EAX                        ; 0052a18d
    JZ 0x0052a0f4                       ; 0052a18f
        ;   XREF to: 0052a0f4 (CONDITIONAL_JUMP)  ; LAB_0052a0f4
    PUSH EAX                            ; 0052a195
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a196
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a19b
    PUSH EAX                            ; 0052a19e
    PUSH 0x59416f                       ; 0052a19f | = "Stop secondary sound buffer"
    PUSH 0x5940b7                       ; 0052a1a4 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0052a1a9
    PUSH EAX                            ; 0052a1b0
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a1b1
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052a1b6
    LEA EAX,[ESP + 0x320]               ; 0052a1b9
    PUSH EAX                            ; 0052a1c0
    XOR EBX,EBX                         ; 0052a1c1
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052a1c3
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052a1c8
    MOV dword ptr [ESP + 0x4b0],EBX     ; 0052a1cb
    JMP 0x0052a0f4                      ; 0052a1d2
        ;   XREF to: 0052a0f4 (UNCONDITIONAL_JUMP)  ; LAB_0052a0f4
    PUSH ESI                            ; 0052a1d7
        ;   Label: LAB_0052a1d7
    MOV EDX,dword ptr [ESI]             ; 0052a1d8
    CALL dword ptr [EDX + 0x48]         ; 0052a1da
    TEST EAX,EAX                        ; 0052a1dd
    JZ 0x0052a102                       ; 0052a1df
        ;   XREF to: 0052a102 (CONDITIONAL_JUMP)  ; LAB_0052a102
    PUSH EAX                            ; 0052a1e5
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a1e6
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a1eb
    PUSH EAX                            ; 0052a1ee
    PUSH 0x59418b                       ; 0052a1ef | = "Stop primary sound buffer"
    PUSH 0x5940b7                       ; 0052a1f4 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0052a1f9
    PUSH EAX                            ; 0052a200
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a201
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052a206
    LEA EAX,[ESP + 0x190]               ; 0052a209
    PUSH EAX                            ; 0052a210
    XOR EDI,EDI                         ; 0052a211
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052a213
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052a218
    MOV dword ptr [ESP + 0x4b0],EDI     ; 0052a21b
    JMP 0x0052a102                      ; 0052a222
        ;   XREF to: 0052a102 (UNCONDITIONAL_JUMP)  ; LAB_0052a102
    PUSH EAX                            ; 0052a227
        ;   Label: LAB_0052a227
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052a228
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90(uint error_code)
    ADD ESP,0x4                         ; 0052a22d
    PUSH EAX                            ; 0052a230
    PUSH 0x594104                       ; 0052a231 | = "Stop hardware sfx secondary buffer"
    PUSH 0x5940b7                       ; 0052a236 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0052a23b
    PUSH EAX                            ; 0052a23f
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052a240
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052a245
    MOV EAX,ESP                         ; 0052a248
    PUSH EAX                            ; 0052a24a
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052a24b
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052a250
    XOR EDX,EDX                         ; 0052a253
    MOV dword ptr [ESP + 0x4b0],EDX     ; 0052a255
    JMP 0x0052a15f                      ; 0052a25c
        ;   XREF to: 0052a15f (UNCONDITIONAL_JUMP)  ; LAB_0052a15f
    MOV dword ptr [ESP + 0x4b0],EAX     ; 0052a261
        ;   Label: LAB_0052a261
    MOV EAX,dword ptr [ESP + 0x4b0]     ; 0052a268
    ADD ESP,0x4b4                       ; 0052a26f
    POP EBP                             ; 0052a275
    POP EDI                             ; 0052a276
    POP ESI                             ; 0052a277
    POP EBX                             ; 0052a278
    RET                                 ; 0052a279

