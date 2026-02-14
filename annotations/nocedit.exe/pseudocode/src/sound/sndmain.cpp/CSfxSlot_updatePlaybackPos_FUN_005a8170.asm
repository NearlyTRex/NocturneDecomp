; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(CSfxSlot *this_ptr,double hardware_playback_pos)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   hardware_playback_pos
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0 at 005a7970
;   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0 at 005a8155
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650563
;   TerminatedCString s_SfxSlot_updatePlaybackPo_00650578
;   TerminatedCString s_sound_sndmain_cpp_006505a2
;   TerminatedCString s_SfxSlot_updatePlaybackPo_006505b7
;   TerminatedCString s_sound_sndmain_cpp_006505ec
;   TerminatedCString s_SfxSlot_updatePlaybackPo_00650601
;   double DOUBLE_0065064f = 0.00100000000000000
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_floor_FUN_005feb90
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8170
        ;   Label: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
    PUSH ESI                            ; 005a8171
    PUSH EDI                            ; 005a8172
    PUSH EBP                            ; 005a8173
    MOV EBP,ESP                         ; 005a8174
    SUB ESP,0x18                        ; 005a8176
    AND ESP,0xfffffff8                  ; 005a8179
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a817c
    CMP dword ptr [EBX + 0x78],0x0      ; 005a817f
    JZ 0x005a82a6                       ; 005a8183
        ;   XREF to: 005a82a6 (CONDITIONAL_JUMP)  ; LAB_005a82a6
    FLDZ                                ; 005a8189
        ;   Label: LAB_005a8189
    FCOMP double ptr [EBP + 0x18]       ; 005a818b
    FNSTSW AX                           ; 005a818e
    SAHF                                ; 005a8190
    JBE 0x005a82ce                      ; 005a8191
        ;   XREF to: 005a82ce (CONDITIONAL_JUMP)  ; LAB_005a82ce
    MOV EDI,0x6505a2                    ; 005a8197 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a8197
    MOV EAX,0xbc2                       ; 005a819c
    PUSH 0x6505b7                       ; 005a81a1 | = "SfxSlot::updatePlaybackPos - invalid ..."
    MOV dword ptr [0x02f0ca48],EDI      ; 005a81a6 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005a81ac | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a81b1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a81b6
    FLD double ptr [EBP + 0x18]         ; 005a81b9
        ;   Label: LAB_005a81b9
    FSUB double ptr [EBX + 0x11c]       ; 005a81bc
    FLDZ                                ; 005a81c2
    FXCH                                ; 005a81c4
    FSTP double ptr [ESP]               ; 005a81c6
    FCOMP double ptr [ESP]              ; 005a81c9
    FNSTSW AX                           ; 005a81cc
    SAHF                                ; 005a81ce
    JBE 0x005a81e0                      ; 005a81cf
        ;   XREF to: 005a81e0 (CONDITIONAL_JUMP)  ; LAB_005a81e0
    MOV EAX,dword ptr [EBX + 0x78]      ; 005a81d1
    FILD dword ptr [EAX + 0x160]        ; 005a81d4
    FADD double ptr [ESP]               ; 005a81da
    FSTP double ptr [ESP]               ; 005a81dd
    FLDZ                                ; 005a81e0
        ;   Label: LAB_005a81e0
    FCOMP double ptr [ESP]              ; 005a81e2
    FNSTSW AX                           ; 005a81e5
    SAHF                                ; 005a81e7
    JBE 0x005a82e8                      ; 005a81e8
        ;   XREF to: 005a82e8 (CONDITIONAL_JUMP)  ; LAB_005a82e8
    MOV ESI,dword ptr [EBX + 0x78]      ; 005a81ee
        ;   Label: LAB_005a81ee
    PUSH ESI                            ; 005a81f1
    MOV EDI,dword ptr [ESI + 0x160]     ; 005a81f2
    MOV EDX,0x6505ec                    ; 005a81f8 | = "..\\sound\\sndmain.cpp"
    PUSH EDI                            ; 005a81fd
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a81fe
    MOV dword ptr [0x02f0ca48],EDX      ; 005a8202 | g_CurrentFilename
    PUSH EAX                            ; 005a8208
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a8209
    MOV ECX,0xbd0                       ; 005a820d
    PUSH EDX                            ; 005a8212
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a8213 | g_CurrentLineNumber
    MOV ECX,dword ptr [EBX + 0x120]     ; 005a8219
    PUSH ECX                            ; 005a821f
    MOV ESI,dword ptr [EBX + 0x11c]     ; 005a8220
    PUSH ESI                            ; 005a8226
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005a8227
    PUSH EDI                            ; 005a822a
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a822b
    PUSH EAX                            ; 005a822e
    PUSH 0x650601                       ; 005a822f | = "SfxSlot::updatePlaybackPos - stepped ..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a8234
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x24                        ; 005a8239
    FLD double ptr [EBX + 0x60]         ; 005a823c
        ;   Label: LAB_005a823c
    FCOMP double ptr [EBX + 0x11c]      ; 005a823f
    FNSTSW AX                           ; 005a8245
    SAHF                                ; 005a8247
    JZ 0x005a8308                       ; 005a8248
        ;   XREF to: 005a8308 (CONDITIONAL_JUMP)  ; LAB_005a8308
    FLD double ptr [EBX + 0x60]         ; 005a824e
        ;   Label: LAB_005a824e
    FADD double ptr [ESP]               ; 005a8251
    FSTP double ptr [EBX + 0x60]        ; 005a8254
    FLDZ                                ; 005a8257
        ;   Label: LAB_005a8257
    FCOMP double ptr [EBX + 0x60]       ; 005a8259
    FNSTSW AX                           ; 005a825c
    SAHF                                ; 005a825e
    JBE 0x005a826f                      ; 005a825f
        ;   XREF to: 005a826f (CONDITIONAL_JUMP)  ; LAB_005a826f
    MOV dword ptr [EBX + 0x60],0x0      ; 005a8261
    MOV dword ptr [EBX + 0x64],0x0      ; 005a8268
    MOV EDX,dword ptr [EBX + 0x78]      ; 005a826f
        ;   Label: LAB_005a826f
    CMP dword ptr [EDX + 0x110],0x0     ; 005a8272
    JL 0x005a828d                       ; 005a8279
        ;   XREF to: 005a828d (CONDITIONAL_JUMP)  ; LAB_005a828d
    FILD dword ptr [EDX + 0x110]        ; 005a827b
    FCOMP double ptr [EBX + 0x60]       ; 005a8281
    FNSTSW AX                           ; 005a8284
    SAHF                                ; 005a8286
    JBE 0x005a8328                      ; 005a8287
        ;   XREF to: 005a8328 (CONDITIONAL_JUMP)  ; LAB_005a8328
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a828d
        ;   Label: LAB_005a828d
    MOV dword ptr [EBX + 0x11c],EAX     ; 005a8290
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a8296
    MOV dword ptr [EBX + 0x120],EAX     ; 005a8299
    MOV ESP,EBP                         ; 005a829f
    POP EBP                             ; 005a82a1
    POP EDI                             ; 005a82a2
    POP ESI                             ; 005a82a3
    POP EBX                             ; 005a82a4
    RET                                 ; 005a82a5
    MOV ECX,0x650563                    ; 005a82a6 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a82a6
    MOV ESI,0xbbc                       ; 005a82ab
    PUSH 0x650578                       ; 005a82b0 | = "SfxSlot::updatePlaybackPos - no sampl..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a82b5 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005a82bb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a82c1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a82c6
    JMP 0x005a8189                      ; 005a82c9
        ;   XREF to: 005a8189 (UNCONDITIONAL_JUMP)  ; LAB_005a8189
    MOV EAX,dword ptr [EBX + 0x78]      ; 005a82ce
        ;   Label: LAB_005a82ce
    FILD dword ptr [EAX + 0x160]        ; 005a82d1
    FCOMP double ptr [EBP + 0x18]       ; 005a82d7
    FNSTSW AX                           ; 005a82da
    SAHF                                ; 005a82dc
    JC 0x005a8197                       ; 005a82dd
        ;   XREF to: 005a8197 (CONDITIONAL_JUMP)  ; LAB_005a8197
    JMP 0x005a81b9                      ; 005a82e3
        ;   XREF to: 005a81b9 (UNCONDITIONAL_JUMP)  ; LAB_005a81b9
    MOV EAX,dword ptr [EBX + 0x78]      ; 005a82e8
        ;   Label: LAB_005a82e8
    FILD dword ptr [EAX + 0x160]        ; 005a82eb
    FADD double ptr [0x0065064f]        ; 005a82f1 | DOUBLE_0065064f
    FCOMP double ptr [ESP]              ; 005a82f7
    FNSTSW AX                           ; 005a82fa
    SAHF                                ; 005a82fc
    JC 0x005a81ee                       ; 005a82fd
        ;   XREF to: 005a81ee (CONDITIONAL_JUMP)  ; LAB_005a81ee
    JMP 0x005a823c                      ; 005a8303
        ;   XREF to: 005a823c (UNCONDITIONAL_JUMP)  ; LAB_005a823c
    FLD double ptr [EBP + 0x18]         ; 005a8308
        ;   Label: LAB_005a8308
    FCOMP double ptr [EBX + 0x60]       ; 005a830b
    FNSTSW AX                           ; 005a830e
    SAHF                                ; 005a8310
    JC 0x005a824e                       ; 005a8311
        ;   XREF to: 005a824e (CONDITIONAL_JUMP)  ; LAB_005a824e
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a8317
    MOV dword ptr [EBX + 0x60],EAX      ; 005a831a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a831d
    MOV dword ptr [EBX + 0x64],EAX      ; 005a8320
    JMP 0x005a8257                      ; 005a8323
        ;   XREF to: 005a8257 (UNCONDITIONAL_JUMP)  ; LAB_005a8257
    PUSH EDX                            ; 005a8328
        ;   Label: LAB_005a8328
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0 ; 005a8329
        ;   XREF to: 005a87d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a832e
    TEST EAX,EAX                        ; 005a8331
    JNZ 0x005a8346                      ; 005a8333
        ;   XREF to: 005a8346 (CONDITIONAL_JUMP)  ; LAB_005a8346
    MOV EAX,dword ptr [EBX + 0x78]      ; 005a8335
    FILD dword ptr [EAX + 0x110]        ; 005a8338
    FSTP double ptr [EBX + 0x60]        ; 005a833e
    JMP 0x005a828d                      ; 005a8341
        ;   XREF to: 005a828d (UNCONDITIONAL_JUMP)  ; LAB_005a828d
    MOV EAX,dword ptr [EBX + 0x78]      ; 005a8346
        ;   Label: LAB_005a8346
    FLD double ptr [EBX + 0x60]         ; 005a8349
    FILD dword ptr [EAX + 0x110]        ; 005a834c
    FSTP double ptr [ESP + 0x10]        ; 005a8352
    FDIV double ptr [ESP + 0x10]        ; 005a8356
    SUB ESP,0x8                         ; 005a835a
    FSTP double ptr [ESP]               ; 005a835d
    CALL crt_math.c_floor_FUN_005feb90  ; 005a8360
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x10],EAX      ; 005a8365
    MOV dword ptr [ESP + 0x14],EDX      ; 005a8369
    FLD double ptr [ESP + 0x10]         ; 005a836d
    ADD ESP,0x8                         ; 005a8371
    FMUL double ptr [ESP + 0x10]        ; 005a8374
    FSUBR double ptr [EBX + 0x60]       ; 005a8378
    FSTP double ptr [EBX + 0x60]        ; 005a837b
    JMP 0x005a828d                      ; 005a837e
        ;   XREF to: 005a828d (UNCONDITIONAL_JUMP)  ; LAB_005a828d

