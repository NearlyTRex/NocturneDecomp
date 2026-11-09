; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_00572250(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   sound_sndmain.cpp_startSfx_FUN_00572d20 at 00572ea1
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3bd8
;   TerminatedCString s_SfxSlot_seek_no_sample_005f3bed
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_math.c_round_FUN_005c03a0
;   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0
;   sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572250
        ;   Label: sound_sndmain.cpp_CSfxSlot_seek_FUN_00572250
    PUSH ESI                            ; 00572251
    PUSH EDI                            ; 00572252
    PUSH EBP                            ; 00572253
    SUB ESP,0xc                         ; 00572254
    MOV EBX,dword ptr [ESP + 0x20]      ; 00572257
    CMP dword ptr [EBX + 0x68],0x0      ; 0057225b
    JNZ 0x00572284                      ; 0057225f
        ;   XREF to: 00572284 (CONDITIONAL_JUMP)  ; LAB_00572284
    MOV ECX,0x5f3bd8                    ; 00572261 | = "..\\sound\\sndmain.cpp"
    MOV ESI,0xd75                       ; 00572266
    PUSH 0x5f3bed                       ; 0057226b | = "SfxSlot::seek - no sample?!"
    MOV dword ptr [0x01d1d400],ECX      ; 00572270 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00572276 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0057227c
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00572281
    PUSH 0x0                            ; 00572284
        ;   Label: LAB_00572284
    MOV EDI,dword ptr [EBX + 0x58]      ; 00572286
    PUSH EDI                            ; 00572289
    MOV EBP,dword ptr [EBX + 0x54]      ; 0057228a
    PUSH EBP                            ; 0057228d
    MOV EAX,dword ptr [EBX + 0x50]      ; 0057228e
    PUSH EAX                            ; 00572291
    MOV EDX,dword ptr [EBX + 0x68]      ; 00572292
    PUSH EDX                            ; 00572295
    CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430 ; 00572296
        ;   XREF to: 00572430 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_00572430(CSampleInfo * this_ptr, double position, uint input_type, uint output_type)
    MOV dword ptr [ESP + 0x14],EAX      ; 0057229b
    MOV dword ptr [ESP + 0x18],EDX      ; 0057229f
    MOV dword ptr [EBX + 0x58],0x0      ; 005722a3
    FLD double ptr [ESP + 0x14]         ; 005722aa
    ADD ESP,0x14                        ; 005722ae
    MOV ECX,dword ptr [EBX + 0x58]      ; 005722b1
    PUSH ECX                            ; 005722b4
    FSTP double ptr [EBX + 0x50]        ; 005722b5
    MOV ESI,dword ptr [EBX + 0x54]      ; 005722b8
    PUSH ESI                            ; 005722bb
    MOV EDI,dword ptr [EBX + 0x50]      ; 005722bc
    PUSH EDI                            ; 005722bf
    MOV EBP,dword ptr [EBX + 0x68]      ; 005722c0
    PUSH EBP                            ; 005722c3
    CALL sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0 ; 005722c4
        ;   XREF to: 005725a0 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005725a0(CSfxSample * this_ptr, double position, uint input_type)
    MOV dword ptr [ESP + 0x10],EAX      ; 005722c9
    MOV dword ptr [ESP + 0x14],EDX      ; 005722cd
    FLD double ptr [ESP + 0x10]         ; 005722d1
    MOV EAX,dword ptr [EBX + 0x68]      ; 005722d5
    FSTP double ptr [EBX + 0x50]        ; 005722d8
    MOV EDX,dword ptr [EAX + 0x160]     ; 005722db
    ADD ESP,0x10                        ; 005722e1
    TEST EDX,EDX                        ; 005722e4
    JGE 0x00572302                      ; 005722e6
        ;   XREF to: 00572302 (CONDITIONAL_JUMP)  ; LAB_00572302
    MOV EAX,dword ptr [EBX + 0x50]      ; 005722e8
    MOV dword ptr [EBX + 0x10c],EAX     ; 005722eb
    MOV EAX,dword ptr [EBX + 0x54]      ; 005722f1
    MOV dword ptr [EBX + 0x110],EAX     ; 005722f4
    ADD ESP,0xc                         ; 005722fa
    POP EBP                             ; 005722fd
    POP EDI                             ; 005722fe
    POP ESI                             ; 005722ff
    POP EBX                             ; 00572300
    RET                                 ; 00572301
    FLD double ptr [EBX + 0x50]         ; 00572302
        ;   Label: LAB_00572302
    PUSH 0x0                            ; 00572305
    CALL crt_math.c_round_FUN_005c03a0  ; 00572307
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0xc]         ; 0057230c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00572310
    PUSH ECX                            ; 00572314
    PUSH EAX                            ; 00572315
    CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0 ; 00572316
        ;   XREF to: 005702c0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_seek_FUN_005702c0(CSfxSample * this_ptr, int playback_position, int dest_buffer_offset)
    MOV EAX,dword ptr [EBX + 0x68]      ; 0057231b
    ADD ESP,0xc                         ; 0057231e
    FILD dword ptr [EAX + 0x170]        ; 00572321
    FSTP double ptr [EBX + 0x10c]       ; 00572327
    ADD ESP,0xc                         ; 0057232d
    POP EBP                             ; 00572330
    POP EDI                             ; 00572331
    POP ESI                             ; 00572332
    POP EBX                             ; 00572333
    RET                                 ; 00572334

