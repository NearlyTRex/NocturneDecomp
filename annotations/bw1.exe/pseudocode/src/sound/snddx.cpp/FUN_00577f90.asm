; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_00577f90(undefined4 *param_1,int param_2,ushort param_3,int param_4,uint *param_5)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_Create_temp_secondary_bu_005f4d29
;   TerminatedCString s_Set_Primary_buffer_forma_005f4d60
;   TerminatedCString s_Get_Primary_buffer_forma_005f4d7a
;   TerminatedCString s_Create_the_secondary_buf_005f4d94
;   undefined4 DAT_006235a0
;   undefined4 DAT_006235b0
;   undefined4 DAT_00627870
;   undefined4 DAT_02c81d94
;   undefined4 DAT_02c81d98
;   undefined4 DAT_02c81d9c
;   undefined4 DAT_02c81da4
;   undefined4 DAT_02c81da8
;   undefined4 DAT_02c81dac
;   undefined4 DAT_02c81db0
;   ... and 3 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005bfb40
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_FUN_00575560
;   sound_sndmain.cpp_FUN_005773f0
;   sound_sndmain.cpp_getMaxSwLatency_FUN_00576030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577f90
        ;   Label: sound_snddx.cpp_FUN_00577f90
    PUSH ESI                            ; 00577f91
    PUSH EDI                            ; 00577f92
    PUSH EBP                            ; 00577f93
    SUB ESP,0x6c0                       ; 00577f94
    MOV EBX,dword ptr [ESP + 0x6d8]     ; 00577f9a
    MOV EDX,dword ptr [0x02c81da4]      ; 00577fa1 | DAT_02c81da4
    TEST EDX,EDX                        ; 00577fa7
    JNZ 0x00577fd8                      ; 00577fa9
        ;   XREF to: 00577fd8 (CONDITIONAL_JUMP)  ; LAB_00577fd8
    CMP dword ptr [0x02c81d98],0x0      ; 00577fab | DAT_02c81d98
        ;   Label: LAB_00577fab
    JNZ 0x00577fea                      ; 00577fb2
        ;   XREF to: 00577fea (CONDITIONAL_JUMP)  ; LAB_00577fea
    MOV EAX,[0x02c81d9c]                ; 00577fb4 | DAT_02c81d9c
        ;   Label: LAB_00577fb4
    TEST EAX,EAX                        ; 00577fb9
    JZ 0x00577fcb                       ; 00577fbb
        ;   XREF to: 00577fcb (CONDITIONAL_JUMP)  ; LAB_00577fcb
    PUSH EAX                            ; 00577fbd
    MOV EBX,dword ptr [EAX]             ; 00577fbe
    CALL dword ptr [EBX + 0x8]          ; 00577fc0
    XOR EDX,EDX                         ; 00577fc3
    MOV dword ptr [0x02c81d9c],EDX      ; 00577fc5 | DAT_02c81d9c
    XOR EAX,EAX                         ; 00577fcb
        ;   Label: LAB_00577fcb
    ADD ESP,0x6c0                       ; 00577fcd
    POP EBP                             ; 00577fd3
    POP EDI                             ; 00577fd4
    POP ESI                             ; 00577fd5
    POP EBX                             ; 00577fd6
    RET                                 ; 00577fd7
    MOV EAX,EDX                         ; 00577fd8
        ;   Label: LAB_00577fd8
    PUSH EAX                            ; 00577fda
    MOV EDX,dword ptr [EDX]             ; 00577fdb
    CALL dword ptr [EDX + 0x8]          ; 00577fdd
    XOR ECX,ECX                         ; 00577fe0
    MOV dword ptr [0x02c81da4],ECX      ; 00577fe2 | DAT_02c81da4
    JMP 0x00577fab                      ; 00577fe8
        ;   XREF to: 00577fab (UNCONDITIONAL_JUMP)  ; LAB_00577fab
    PUSH 0x12                           ; 00577fea
        ;   Label: LAB_00577fea
    PUSH 0x0                            ; 00577fec
    LEA EAX,[ESP + 0x690]               ; 00577fee
    PUSH EAX                            ; 00577ff5
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00577ff6
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00577ffb
    MOV EDX,0x1                         ; 00577ffe
    MOV EAX,dword ptr [ESP + 0x6dc]     ; 00578003
    MOV word ptr [ESP + 0x688],DX       ; 0057800a
    MOV word ptr [ESP + 0x68a],AX       ; 00578012
    MOV EDX,EBX                         ; 0057801a
    MOV EAX,dword ptr [ESP + 0x6e0]     ; 0057801c
    SAR EDX,0x1f                        ; 00578023
    MOV dword ptr [ESP + 0x68c],EAX     ; 00578026
    MOV EAX,EBX                         ; 0057802d
    SHL EDX,0x3                         ; 0057802f
    SBB EAX,EDX                         ; 00578032
    SAR EAX,0x3                         ; 00578034
    XOR ECX,ECX                         ; 00578037
    MOV CX,word ptr [ESP + 0x6dc]       ; 00578039
    IMUL EAX,ECX                        ; 00578041
    MOV word ptr [ESP + 0x694],AX       ; 00578044
    XOR EAX,EAX                         ; 0057804c
    MOV EDX,dword ptr [ESP + 0x6e0]     ; 0057804e
    MOV AX,word ptr [ESP + 0x694]       ; 00578055
    IMUL EDX,EAX                        ; 0057805d
    MOV EAX,[0x02c81d98]                ; 00578060 | DAT_02c81d98
    MOV dword ptr [ESP + 0x690],EDX     ; 00578065
    LEA EDX,[ESP + 0x688]               ; 0057806c
    MOV word ptr [ESP + 0x696],BX       ; 00578073
    PUSH EDX                            ; 0057807b
    MOV ECX,dword ptr [EAX]             ; 0057807c
    PUSH EAX                            ; 0057807e
    CALL dword ptr [ECX + 0x38]         ; 0057807f
    TEST EAX,EAX                        ; 00578082
    JNZ 0x00578359                      ; 00578084
        ;   XREF to: 00578359 (CONDITIONAL_JUMP)  ; LAB_00578359
    PUSH 0x0                            ; 0057808a
    PUSH 0x12                           ; 0057808c
    LEA EDX,[ESP + 0x690]               ; 0057808e
    MOV EAX,[0x02c81d98]                ; 00578095 | DAT_02c81d98
    PUSH EDX                            ; 0057809a
    MOV EBX,dword ptr [EAX]             ; 0057809b
    PUSH EAX                            ; 0057809d
    CALL dword ptr [EBX + 0x14]         ; 0057809e
    TEST EAX,EAX                        ; 005780a1
    JNZ 0x00578392                      ; 005780a3
        ;   XREF to: 00578392 (CONDITIONAL_JUMP)  ; LAB_00578392
    MOV AX,word ptr [ESP + 0x696]       ; 005780a9
    MOV [0x02c81da8],EAX                ; 005780b1 | DAT_02c81da8
    MOV EAX,dword ptr [ESP + 0x68c]     ; 005780b6
    MOV [0x02c81dac],EAX                ; 005780bd | DAT_02c81dac
    XOR EAX,EAX                         ; 005780c2
    MOV AX,word ptr [ESP + 0x68a]       ; 005780c4
    MOV EDI,dword ptr [0x02c81da4]      ; 005780cc | DAT_02c81da4
    MOV [0x02c81db0],EAX                ; 005780d2 | DAT_02c81db0
    TEST EDI,EDI                        ; 005780d7
    JZ 0x005780e9                       ; 005780d9
        ;   XREF to: 005780e9 (CONDITIONAL_JUMP)  ; LAB_005780e9
    PUSH EDI                            ; 005780db
    MOV EDX,dword ptr [EDI]             ; 005780dc
    XOR EBP,EBP                         ; 005780de
    CALL dword ptr [EDX + 0x8]          ; 005780e0
    MOV dword ptr [0x02c81da4],EBP      ; 005780e3 | DAT_02c81da4
    PUSH 0x12                           ; 005780e9
        ;   Label: LAB_005780e9
    XOR EAX,EAX                         ; 005780eb
    MOV EBX,0x1                         ; 005780ed
    MOV dword ptr [ESP + 0x6b4],EAX     ; 005780f2
    MOV dword ptr [ESP + 0x6b8],EAX     ; 005780f9
    PUSH EAX                            ; 00578100
    LEA EAX,[ESP + 0x6a4]               ; 00578101
    MOV ESI,0x10                        ; 00578108
    PUSH EAX                            ; 0057810d
    MOV EDI,0x2                         ; 0057810e
    MOV EBP,0x400                       ; 00578113
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00578118
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057811d
    MOV ECX,0x5622                      ; 00578120
    LEA EAX,[ESP + 0x664]               ; 00578125
    PUSH 0x24                           ; 0057812c
    MOV word ptr [ESP + 0x6a0],BX       ; 0057812e
    MOV word ptr [ESP + 0x6a2],BX       ; 00578136
    MOV dword ptr [ESP + 0x6a4],ECX     ; 0057813e
    MOV word ptr [ESP + 0x6ae],SI       ; 00578145
    MOV word ptr [ESP + 0x6ac],DI       ; 0057814d
    PUSH 0x0                            ; 00578155
    MOV EBX,0xac44                      ; 00578157
    MOV ESI,0x24                        ; 0057815c
    PUSH EAX                            ; 00578161
    MOV EDI,0x12                        ; 00578162
    MOV dword ptr [ESP + 0x6b0],EBX     ; 00578167
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0057816e
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00578173
    LEA EAX,[ESP + 0x69c]               ; 00578176
    LEA EDX,[ESP + 0x6b0]               ; 0057817d
    PUSH 0x0                            ; 00578184
    MOV dword ptr [ESP + 0x668],ESI     ; 00578186
    MOV dword ptr [ESP + 0x66c],EDI     ; 0057818d
    MOV dword ptr [ESP + 0x678],EAX     ; 00578194
    MOV EAX,[0x02c81d94]                ; 0057819b | DAT_02c81d94
    PUSH EDX                            ; 005781a0
    LEA EDX,[ESP + 0x66c]               ; 005781a1
    MOV dword ptr [ESP + 0x674],EBP     ; 005781a8
    PUSH EDX                            ; 005781af
    MOV ECX,dword ptr [EAX]             ; 005781b0
    PUSH EAX                            ; 005781b2
    CALL dword ptr [ECX + 0xc]          ; 005781b3
    TEST EAX,EAX                        ; 005781b6
    JNZ 0x005783cb                      ; 005781b8
        ;   XREF to: 005783cb (CONDITIONAL_JUMP)  ; LAB_005783cb
    LEA EDX,[ESP + 0x6b4]               ; 005781be
    PUSH EDX                            ; 005781c5
    MOV EAX,dword ptr [ESP + 0x6b4]     ; 005781c6
    PUSH 0x627870                       ; 005781cd | DAT_00627870
    MOV EDX,dword ptr [ESP + 0x6b8]     ; 005781d2
    MOV EAX,dword ptr [EAX]             ; 005781d9
    PUSH EDX                            ; 005781db
    CALL dword ptr [EAX]                ; 005781dc
    MOV ECX,dword ptr [ESP + 0x6b4]     ; 005781de
    TEST ECX,ECX                        ; 005781e5
    JNZ 0x00578404                      ; 005781e7
        ;   XREF to: 00578404 (CONDITIONAL_JUMP)  ; LAB_00578404
    MOV EBX,dword ptr [ESP + 0x6b0]     ; 005781ed
    TEST EBX,EBX                        ; 005781f4
    JZ 0x00578207                       ; 005781f6
        ;   XREF to: 00578207 (CONDITIONAL_JUMP)  ; LAB_00578207
    PUSH EBX                            ; 005781f8
    MOV EAX,dword ptr [EBX]             ; 005781f9
    XOR EDI,EDI                         ; 005781fb
    CALL dword ptr [EAX + 0x8]          ; 005781fd
    MOV dword ptr [ESP + 0x6b0],EDI     ; 00578200
    MOV EBP,dword ptr [0x02c81da4]      ; 00578207 | DAT_02c81da4
        ;   Label: LAB_00578207
    TEST EBP,EBP                        ; 0057820d
    JZ 0x00578239                       ; 0057820f
        ;   XREF to: 00578239 (CONDITIONAL_JUMP)  ; LAB_00578239
    PUSH 0x4                            ; 00578211
    LEA EBX,[ESP + 0x6bc]               ; 00578213
    PUSH EBX                            ; 0057821a
    PUSH 0x0                            ; 0057821b
    PUSH 0x0                            ; 0057821d
    MOV EAX,0x1                         ; 0057821f
    PUSH 0x0                            ; 00578224
    MOV dword ptr [ESP + 0x6cc],EAX     ; 00578226
    PUSH 0x6235b0                       ; 0057822d | DAT_006235b0
    MOV EDX,dword ptr [EBP]             ; 00578232
    PUSH EBP                            ; 00578235
    CALL dword ptr [EDX + 0x10]         ; 00578236
    CALL sound_sndmain.cpp_FUN_00575560 ; 00578239
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00575560(int enable)
        ;   Label: LAB_00578239
    CMP EAX,0x1                         ; 0057823e
    JGE 0x00578457                      ; 00578241
        ;   XREF to: 00578457 (CONDITIONAL_JUMP)  ; LAB_00578457
    MOV dword ptr [0x02c81dbc],0x8      ; 00578247 | DAT_02c81dbc
    CALL sound_sndmain.cpp_getMaxSwLatency_FUN_00576030 ; 00578251
        ;   XREF to: 00576030 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_getMaxSwLatency_FUN_00576030()
    MOV dword ptr [ESP + 0x6bc],EAX     ; 00578256
    FLD float ptr [ESP + 0x6bc]         ; 0057825d
    FILD dword ptr [0x02c81dac]         ; 00578264 | DAT_02c81dac
    FMULP                               ; 0057826a
    FILD dword ptr [0x02c81dbc]         ; 0057826c | DAT_02c81dbc
    FDIVP                               ; 00578272
    CALL crt_math.c_round_FUN_005c03a0  ; 00578274
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [0x02c81db4]        ; 00578279 | DAT_02c81db4
    MOV EAX,[0x02c81db4]                ; 0057827f | DAT_02c81db4
    ADD EAX,0xf                         ; 00578284
    AND AL,0xf0                         ; 00578287
    MOV [0x02c81db4],EAX                ; 00578289 | DAT_02c81db4
    MOV EAX,[0x02c81da8]                ; 0057828e | DAT_02c81da8
    MOV EDX,EAX                         ; 00578293
    SAR EDX,0x1f                        ; 00578295
    SHL EDX,0x3                         ; 00578298
    SBB EAX,EDX                         ; 0057829b
    SAR EAX,0x3                         ; 0057829d
    MOV EBX,dword ptr [0x02c81db4]      ; 005782a0 | DAT_02c81db4
    IMUL EBX,EAX                        ; 005782a6
    MOV EAX,[0x02c81db0]                ; 005782a9 | DAT_02c81db0
    IMUL EBX,EAX                        ; 005782ae
    PUSH 0x24                           ; 005782b1
    PUSH 0x0                            ; 005782b3
    LEA EAX,[ESP + 0x648]               ; 005782b5
    PUSH EAX                            ; 005782bc
    MOV dword ptr [0x02c81db8],EBX      ; 005782bd | DAT_02c81db8
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005782c3
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    LEA EAX,[ESP + 0x694]               ; 005782c8
    ADD ESP,0xc                         ; 005782cf
    MOV ESI,dword ptr [0x02c81dbc]      ; 005782d2 | DAT_02c81dbc
    MOV dword ptr [ESP + 0x650],EAX     ; 005782d8
    MOV EAX,[0x02c81db8]                ; 005782df | DAT_02c81db8
    IMUL EAX,ESI                        ; 005782e4
    XOR EBX,EBX                         ; 005782e7
    MOV ECX,0x24                        ; 005782e9
    MOV EDI,dword ptr [0x02c81d9c]      ; 005782ee | DAT_02c81d9c
    MOV dword ptr [ESP + 0x640],ECX     ; 005782f4
    MOV dword ptr [ESP + 0x644],EBX     ; 005782fb
    MOV dword ptr [ESP + 0x648],EAX     ; 00578302
    TEST EDI,EDI                        ; 00578309
    JZ 0x00578319                       ; 0057830b
        ;   XREF to: 00578319 (CONDITIONAL_JUMP)  ; LAB_00578319
    PUSH EDI                            ; 0057830d
    MOV EDX,dword ptr [EDI]             ; 0057830e
    CALL dword ptr [EDX + 0x8]          ; 00578310
    MOV dword ptr [0x02c81d9c],EBX      ; 00578313 | DAT_02c81d9c
    PUSH 0x0                            ; 00578319
        ;   Label: LAB_00578319
    PUSH 0x2c81d9c                      ; 0057831b | DAT_02c81d9c
    LEA EDX,[ESP + 0x648]               ; 00578320
    MOV EAX,[0x02c81d94]                ; 00578327 | DAT_02c81d94
    PUSH EDX                            ; 0057832c
    MOV EBX,dword ptr [EAX]             ; 0057832d
    PUSH EAX                            ; 0057832f
    CALL dword ptr [EBX + 0xc]          ; 00578330
    TEST EAX,EAX                        ; 00578333
    JNZ 0x00578474                      ; 00578335
        ;   XREF to: 00578474 (CONDITIONAL_JUMP)  ; LAB_00578474
    MOV EDX,dword ptr [ESP + 0x6e4]     ; 0057833b
    MOV EAX,[0x02c81db4]                ; 00578342 | DAT_02c81db4
    MOV dword ptr [EDX],EAX             ; 00578347
    MOV EAX,0x1                         ; 00578349
    ADD ESP,0x6c0                       ; 0057834e
    POP EBP                             ; 00578354
    POP EDI                             ; 00578355
    POP ESI                             ; 00578356
    POP EBX                             ; 00578357
    RET                                 ; 00578358
    PUSH EAX                            ; 00578359
        ;   Label: LAB_00578359
    CALL sound_snddx.cpp_FUN_00577500   ; 0057835a
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 0057835f
    PUSH EAX                            ; 00578362
    PUSH 0x5f4d60                       ; 00578363 | = "Set Primary buffer format"
    PUSH 0x5f4c35                       ; 00578368 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 0057836d
    PUSH EAX                            ; 00578374
    CALL crt_unknown.c_FUN_005bfb40     ; 00578375
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 0057837a
    LEA EAX,[ESP + 0x320]               ; 0057837d
    PUSH EAX                            ; 00578384
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00578385
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057838a
    JMP 0x00577fb4                      ; 0057838d
        ;   XREF to: 00577fb4 (UNCONDITIONAL_JUMP)  ; LAB_00577fb4
    PUSH EAX                            ; 00578392
        ;   Label: LAB_00578392
    CALL sound_snddx.cpp_FUN_00577500   ; 00578393
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 00578398
    PUSH EAX                            ; 0057839b
    PUSH 0x5f4d7a                       ; 0057839c | = "Get Primary buffer format"
    PUSH 0x5f4c35                       ; 005783a1 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 005783a6
    PUSH EAX                            ; 005783ad
    CALL crt_unknown.c_FUN_005bfb40     ; 005783ae
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 005783b3
    LEA EAX,[ESP + 0x4b0]               ; 005783b6
    PUSH EAX                            ; 005783bd
    CALL sound_sndmain.cpp_FUN_005773f0 ; 005783be
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 005783c3
    JMP 0x00577fb4                      ; 005783c6
        ;   XREF to: 00577fb4 (UNCONDITIONAL_JUMP)  ; LAB_00577fb4
    PUSH EAX                            ; 005783cb
        ;   Label: LAB_005783cb
    CALL sound_snddx.cpp_FUN_00577500   ; 005783cc
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 005783d1
    PUSH EAX                            ; 005783d4
    PUSH 0x5f4d29                       ; 005783d5 | = "Create temp secondary buffer for prop..."
    PUSH 0x5f4c35                       ; 005783da | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 005783df
    PUSH EAX                            ; 005783e6
    CALL crt_unknown.c_FUN_005bfb40     ; 005783e7
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 005783ec
    LEA EAX,[ESP + 0x190]               ; 005783ef
    PUSH EAX                            ; 005783f6
    CALL sound_sndmain.cpp_FUN_005773f0 ; 005783f7
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 005783fc
    JMP 0x00578207                      ; 005783ff
        ;   XREF to: 00578207 (UNCONDITIONAL_JUMP)  ; LAB_00578207
    PUSH 0x2c81da4                      ; 00578404 | DAT_02c81da4
        ;   Label: LAB_00578404
    PUSH 0x6235a0                       ; 00578409 | DAT_006235a0
    MOV EAX,dword ptr [ECX]             ; 0057840e
    PUSH ECX                            ; 00578410
    CALL dword ptr [EAX]                ; 00578411
    MOV ESI,dword ptr [ESP + 0x6b0]     ; 00578413
    TEST ESI,ESI                        ; 0057841a
    JZ 0x0057842d                       ; 0057841c
        ;   XREF to: 0057842d (CONDITIONAL_JUMP)  ; LAB_0057842d
    PUSH ESI                            ; 0057841e
    MOV EAX,dword ptr [ESI]             ; 0057841f
    XOR EBP,EBP                         ; 00578421
    CALL dword ptr [EAX + 0x8]          ; 00578423
    MOV dword ptr [ESP + 0x6b0],EBP     ; 00578426
    MOV EAX,dword ptr [ESP + 0x6b4]     ; 0057842d
        ;   Label: LAB_0057842d
    TEST EAX,EAX                        ; 00578434
    JZ 0x00578207                       ; 00578436
        ;   XREF to: 00578207 (CONDITIONAL_JUMP)  ; LAB_00578207
    MOV EDX,dword ptr [ESP + 0x6b4]     ; 0057843c
    MOV EAX,dword ptr [EAX]             ; 00578443
    PUSH EDX                            ; 00578445
    CALL dword ptr [EAX + 0x8]          ; 00578446
    XOR ECX,ECX                         ; 00578449
    MOV dword ptr [ESP + 0x6b4],ECX     ; 0057844b
    JMP 0x00578207                      ; 00578452
        ;   XREF to: 00578207 (UNCONDITIONAL_JUMP)  ; LAB_00578207
    MOV EAX,dword ptr [ESP + 0x6e4]     ; 00578457
        ;   Label: LAB_00578457
    MOV dword ptr [EAX],0x0             ; 0057845e
    MOV EAX,0x1                         ; 00578464
    ADD ESP,0x6c0                       ; 00578469
    POP EBP                             ; 0057846f
    POP EDI                             ; 00578470
    POP ESI                             ; 00578471
    POP EBX                             ; 00578472
    RET                                 ; 00578473
    PUSH EAX                            ; 00578474
        ;   Label: LAB_00578474
    CALL sound_snddx.cpp_FUN_00577500   ; 00578475
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 0057847a
    PUSH EAX                            ; 0057847d
    PUSH 0x5f4d94                       ; 0057847e | = "Create the secondary buffer"
    PUSH 0x5f4c35                       ; 00578483 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00578488
    PUSH EAX                            ; 0057848c
    CALL crt_unknown.c_FUN_005bfb40     ; 0057848d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 00578492
    MOV EAX,ESP                         ; 00578495
    PUSH EAX                            ; 00578497
    CALL sound_sndmain.cpp_FUN_005773f0 ; 00578498
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005773f0()
    ADD ESP,0x4                         ; 0057849d
    JMP 0x00577fb4                      ; 005784a0
        ;   XREF to: 00577fb4 (UNCONDITIONAL_JUMP)  ; LAB_00577fb4

