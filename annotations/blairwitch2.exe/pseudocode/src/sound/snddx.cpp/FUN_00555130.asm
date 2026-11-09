; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00555130(int *param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   undefined4 s_Position_secondary_buffe_005e9ab8+1
;   TerminatedCString s_Play_the_secondary_buffe_005e9ad8
;   undefined4 DAT_005e9af5
;   undefined4 DAT_0264a5cc
;   undefined4 DAT_0264a5d8
;   undefined4 DAT_0264a5dc
;   undefined4 DAT_0264a5e0
;   undefined4 DAT_0264a5e4
;   undefined4 DAT_0264a5e8
;   undefined4 DAT_0264a5ec
;   undefined4 DAT_0264a5f0
;
; Called Functions:
;   crt_unknown.c_FUN_005b7790
;   sound_snddx.cpp_fillStreamBuffer_FUN_00554c80
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_FUN_005531d0
;   sound_sndmain.cpp_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555130
        ;   Label: sound_snddx.cpp_FUN_00555130
    PUSH ESI                            ; 00555131
    PUSH EBP                            ; 00555132
    SUB ESP,0x324                       ; 00555133
    CMP dword ptr [0x0264a5cc],0x0      ; 00555139 | DAT_0264a5cc
    JZ 0x00555252                       ; 00555140
        ;   XREF to: 00555252 (CONDITIONAL_JUMP)  ; LAB_00555252
    FILD dword ptr [0x0264a5e4]         ; 00555146 | DAT_0264a5e4
    FILD dword ptr [0x0264a5dc]         ; 0055514c | DAT_0264a5dc
    FDIVP                               ; 00555152
    MOV EAX,[0x0264a5d8]                ; 00555154 | DAT_0264a5d8
    MOV EDX,EAX                         ; 00555159
    SAR EDX,0x1f                        ; 0055515b
    SHL EDX,0x3                         ; 0055515e
    SBB EAX,EDX                         ; 00555161
    SAR EAX,0x3                         ; 00555163
    IMUL EAX,dword ptr [0x0264a5e4]     ; 00555166 | DAT_0264a5e4
    MOV EBX,dword ptr [0x0264a5e0]      ; 0055516d | DAT_0264a5e0
    IMUL EAX,EBX                        ; 00555173
    FMUL float ptr [0x005e9af5]         ; 00555176 | DAT_005e9af5
    MOV ESI,dword ptr [0x0264a5ec]      ; 0055517c | DAT_0264a5ec
    FSTP float ptr [ESP + 0x320]        ; 00555182
    XOR EBX,EBX                         ; 00555189
    MOV [0x0264a5e8],EAX                ; 0055518b | DAT_0264a5e8
    MOV dword ptr [0x0264a5f0],EBX      ; 00555190 | DAT_0264a5f0
    TEST ESI,ESI                        ; 00555196
    JLE 0x005551b2                      ; 00555198
        ;   XREF to: 005551b2 (CONDITIONAL_JUMP)  ; LAB_005551b2
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_00554c80 ; 0055519a
        ;   XREF to: 00554c80 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_fillStreamBuffer_FUN_00554c80()
        ;   Label: LAB_0055519a
    TEST EAX,EAX                        ; 0055519f
    JZ 0x0055522f                       ; 005551a1
        ;   XREF to: 0055522f (CONDITIONAL_JUMP)  ; LAB_0055522f
    MOV EBP,dword ptr [0x0264a5ec]      ; 005551a7 | DAT_0264a5ec
    INC EBX                             ; 005551ad
    CMP EBX,EBP                         ; 005551ae
    JL 0x0055519a                       ; 005551b0
        ;   XREF to: 0055519a (CONDITIONAL_JUMP)  ; LAB_0055519a
    PUSH dword ptr [ESP + 0x320]        ; 005551b2
        ;   Label: LAB_005551b2
    CALL sound_sndmain.cpp_FUN_005531d0 ; 005551b9
        ;   XREF to: 005531d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005531d0()
    ADD ESP,0x4                         ; 005551be
    TEST EAX,EAX                        ; 005551c1
    JZ 0x0055522f                       ; 005551c3
        ;   XREF to: 0055522f (CONDITIONAL_JUMP)  ; LAB_0055522f
    MOV EAX,[0x0264a5cc]                ; 005551c5 | DAT_0264a5cc
    TEST EAX,EAX                        ; 005551ca
    JZ 0x00555287                       ; 005551cc
        ;   XREF to: 00555287 (CONDITIONAL_JUMP)  ; LAB_00555287
    PUSH 0x0                            ; 005551d2
    MOV EBX,dword ptr [EAX]             ; 005551d4
    PUSH EAX                            ; 005551d6
    CALL dword ptr [EBX + 0x34]         ; 005551d7
    TEST EAX,EAX                        ; 005551da
    JNZ 0x00555262                      ; 005551dc
        ;   XREF to: 00555262 (CONDITIONAL_JUMP)  ; LAB_00555262
    PUSH 0x1                            ; 005551e2
    PUSH 0x0                            ; 005551e4
    MOV EAX,[0x0264a5cc]                ; 005551e6 | DAT_0264a5cc
    PUSH 0x0                            ; 005551eb
    MOV EBX,dword ptr [EAX]             ; 005551ed
    PUSH EAX                            ; 005551ef
    CALL dword ptr [EBX + 0x30]         ; 005551f0
    TEST EAX,EAX                        ; 005551f3
    JZ 0x00555287                       ; 005551f5
        ;   XREF to: 00555287 (CONDITIONAL_JUMP)  ; LAB_00555287
    PUSH EAX                            ; 005551fb
    CALL sound_snddx.cpp_FUN_00554ad0   ; 005551fc
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00555201
    PUSH EAX                            ; 00555204
    PUSH 0x5e9ad8                       ; 00555205 | = "Play the secondary buffer"
    PUSH 0x5e9a3b                       ; 0055520a | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 0055520f
    PUSH EAX                            ; 00555216
    CALL crt_unknown.c_FUN_005b7790     ; 00555217
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 0055521c
    LEA EAX,[ESP + 0x190]               ; 0055521f
    PUSH EAX                            ; 00555226
        ;   Label: LAB_00555226
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00555227
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 0055522c
    MOV EDX,dword ptr [ESP + 0x334]     ; 0055522f
        ;   Label: LAB_0055522f
    MOV EAX,dword ptr [ESP + 0x334]     ; 00555236
    PUSH EDX                            ; 0055523d
    MOV EAX,dword ptr [EAX]             ; 0055523e
    CALL dword ptr [EAX + 0x8]          ; 00555240
    ADD ESP,0x4                         ; 00555243
    XOR EAX,EAX                         ; 00555246
    ADD ESP,0x324                       ; 00555248
    POP EBP                             ; 0055524e
    POP ESI                             ; 0055524f
    POP EBX                             ; 00555250
    RET                                 ; 00555251
    MOV dword ptr [ESP + 0x320],0x3dcccccd ; 00555252
        ;   Label: LAB_00555252
    JMP 0x005551b2                      ; 0055525d
        ;   XREF to: 005551b2 (UNCONDITIONAL_JUMP)  ; LAB_005551b2
    PUSH EAX                            ; 00555262
        ;   Label: LAB_00555262
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00555263
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00555268
    PUSH EAX                            ; 0055526b
    PUSH 0x5e9ab9                       ; 0055526c | s_Position_secondary_buffe_005e9ab8+1
    PUSH 0x5e9a3b                       ; 00555271 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00555276
    PUSH EAX                            ; 0055527a
    CALL crt_unknown.c_FUN_005b7790     ; 0055527b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00555280
    MOV EAX,ESP                         ; 00555283
    JMP 0x00555226                      ; 00555285
        ;   XREF to: 00555226 (UNCONDITIONAL_JUMP)  ; LAB_00555226
    MOV EAX,0x1                         ; 00555287
        ;   Label: LAB_00555287
    ADD ESP,0x324                       ; 0055528c
    POP EBP                             ; 00555292
    POP ESI                             ; 00555293
    POP EBX                             ; 00555294
    RET                                 ; 00555295

