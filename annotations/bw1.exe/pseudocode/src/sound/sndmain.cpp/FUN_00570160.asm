; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_sndmain_cpp_FUN_00570160(int param_1,int param_2,int param_3)
;
;
; XREF[3]:
;   sound_sndmain.cpp_FUN_0056e830 at 0056ea6f
;   sound_sndmain.cpp_FUN_00570460 at 005706f3
;   sound_sndmain.cpp_FUN_00574230 at 0057426c
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3318
;   TerminatedCString s_SfxSample_lock_already_l_005f332d
;   TerminatedCString s_sound_sndmain_cpp_005f334f
;   TerminatedCString s_SfxSample_lock_invalid_r_005f3364
;   TerminatedCString s_sound_sndmain_cpp_005f3385
;   TerminatedCString s_SfxSample_lock_nothing_a_005f339a
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c80650
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   sound_sndmain.cpp_FUN_00572400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570160
        ;   Label: sound_sndmain.cpp_FUN_00570160
    PUSH ESI                            ; 00570161
    PUSH EDI                            ; 00570162
    PUSH EBP                            ; 00570163
    MOV EBX,dword ptr [ESP + 0x14]      ; 00570164
    MOV ESI,dword ptr [ESP + 0x18]      ; 00570168
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0057016c
    CMP dword ptr [EBX + 0x1ac],0x0     ; 00570170
    JNZ 0x00570210                      ; 00570177
        ;   XREF to: 00570210 (CONDITIONAL_JUMP)  ; LAB_00570210
    TEST ESI,ESI                        ; 0057017d
        ;   Label: LAB_0057017d
    JL 0x0057018e                       ; 0057017f
        ;   XREF to: 0057018e (CONDITIONAL_JUMP)  ; LAB_0057018e
    MOV EDX,dword ptr [EBX + 0x164]     ; 00570181
    LEA EAX,[ESI + EDI*0x1]             ; 00570187
    CMP EAX,EDX                         ; 0057018a
    JLE 0x005701b1                      ; 0057018c
        ;   XREF to: 005701b1 (CONDITIONAL_JUMP)  ; LAB_005701b1
    MOV ECX,0x5f334f                    ; 0057018e | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0057018e
    MOV EBP,0x89f                       ; 00570193
    PUSH 0x5f3364                       ; 00570198 | = "SfxSample::lock - invalid region"
    MOV dword ptr [0x01d1d400],ECX      ; 0057019d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005701a3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005701a9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005701ae
    CMP dword ptr [EBX + 0x158],0x0     ; 005701b1
        ;   Label: LAB_005701b1
    JNZ 0x00570238                      ; 005701b8
        ;   XREF to: 00570238 (CONDITIONAL_JUMP)  ; LAB_00570238
    CMP dword ptr [EBX + 0x120],0x0     ; 005701be
    JNZ 0x005701e9                      ; 005701c5
        ;   XREF to: 005701e9 (CONDITIONAL_JUMP)  ; LAB_005701e9
    MOV EAX,0x5f3385                    ; 005701c7 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x8a6                       ; 005701cc
    PUSH 0x5f339a                       ; 005701d1 | = "SfxSample::lock - nothing allocated!"
    MOV [0x01d1d400],EAX                ; 005701d6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005701db | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005701e1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005701e6
    PUSH ESI                            ; 005701e9
        ;   Label: LAB_005701e9
    PUSH EBX                            ; 005701ea
    CALL sound_sndmain.cpp_FUN_00572400 ; 005701eb
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00572400()
    MOV EDX,dword ptr [EBX + 0x120]     ; 005701f0
    ADD ESP,0x8                         ; 005701f6
    ADD EAX,EDX                         ; 005701f9
    TEST EAX,EAX                        ; 005701fb
        ;   Label: LAB_005701fb
    JZ 0x0057020b                       ; 005701fd
        ;   XREF to: 0057020b (CONDITIONAL_JUMP)  ; LAB_0057020b
    MOV dword ptr [EBX + 0x1ac],EDI     ; 005701ff
    MOV dword ptr [EBX + 0x1a8],ESI     ; 00570205
    POP EBP                             ; 0057020b
        ;   Label: LAB_0057020b
    POP EDI                             ; 0057020c
    POP ESI                             ; 0057020d
    POP EBX                             ; 0057020e
    RET                                 ; 0057020f
    MOV ECX,0x5f3318                    ; 00570210 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00570210
    MOV EBP,0x89a                       ; 00570215
    PUSH 0x5f332d                       ; 0057021a | = "SfxSample::lock - already locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 0057021f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00570225 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0057022b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00570230
    JMP 0x0057017d                      ; 00570233
        ;   XREF to: 0057017d (UNCONDITIONAL_JUMP)  ; LAB_0057017d
    MOV EDX,dword ptr [0x02c80650]      ; 00570238 | DAT_02c80650
        ;   Label: LAB_00570238
    TEST EDX,EDX                        ; 0057023e
    JNZ 0x00570249                      ; 00570240
        ;   XREF to: 00570249 (CONDITIONAL_JUMP)  ; LAB_00570249
    XOR EAX,EAX                         ; 00570242
    POP EBP                             ; 00570244
    POP EDI                             ; 00570245
    POP ESI                             ; 00570246
    POP EBX                             ; 00570247
    RET                                 ; 00570248
    PUSH EDI                            ; 00570249
        ;   Label: LAB_00570249
    PUSH ESI                            ; 0057024a
    MOV ECX,dword ptr [EBX + 0x158]     ; 0057024b
    PUSH ECX                            ; 00570251
    MOV EAX,EDX                         ; 00570252
    MOV EDX,dword ptr [EDX]             ; 00570254
    PUSH EAX                            ; 00570256
    CALL dword ptr [EDX + 0x38]         ; 00570257
    ADD ESP,0x10                        ; 0057025a
    JMP 0x005701fb                      ; 0057025d
        ;   XREF to: 005701fb (UNCONDITIONAL_JUMP)  ; LAB_005701fb

