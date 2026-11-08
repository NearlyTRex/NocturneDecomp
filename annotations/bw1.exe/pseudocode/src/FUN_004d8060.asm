; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8060(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004ce580 at 004ce5ec
;
; Referenced Globals:
;   undefined4 s_G_s_3_2f_ms_005e33ab+1
;   TerminatedCString s_gFilterFX_process_005e33d4
;   TerminatedCString s_gScript_process_005e33e9
;   TerminatedCString s_gSet_process_005e33fc
;   TerminatedCString s_gGore_process_005e340c
;   TerminatedCString s_gFire_process_005e341d
;   TerminatedCString s_gEventList_process_005e342e
;   TerminatedCString s_gSit_process_005e3444
;   TerminatedCString s_simulate_3_2f_ms_005e3454
;   undefined4 DAT_005e346c
;   undefined4 DAT_005e3474
;   undefined4 DAT_005e347c
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_0061135c
;   undefined4 DAT_0061b4d0
;   ... and 25 more
;
; Called Functions:
;   FUN_004032b0
;   FUN_0040cb80
;   FUN_00415cd0
;   FUN_00445430
;   FUN_0045df40
;   FUN_004a1a40
;   FUN_004b4dd0
;   FUN_004be970
;   FUN_004cbf10
;   FUN_004d27b0
;   FUN_004d60e0
;   FUN_004e5e80
;   FUN_0051b8d0
;   FUN_005437f0
;   FUN_0054fc20
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8060
        ;   Label: FUN_004d8060
    PUSH ESI                            ; 004d8061
    PUSH EDI                            ; 004d8062
    PUSH EBP                            ; 004d8063
    SUB ESP,0xc                         ; 004d8064
    MOV EBX,dword ptr [ESP + 0x20]      ; 004d8067
    CMP dword ptr [EBX + 0x228],0x0     ; 004d806b
    JNZ 0x004d8523                      ; 004d8072
        ;   XREF to: 004d8523 (CONDITIONAL_JUMP)  ; LAB_004d8523
    MOV EAX,[0x00622580]                ; 004d8078 | DAT_00622580
        ;   Label: LAB_004d8078
    MOV dword ptr [EBX + 0x258],0x1     ; 004d807d
    CMP dword ptr [EAX],0x0             ; 004d8087 | DAT_01d51c20
    JNZ 0x004d852f                      ; 004d808a
        ;   XREF to: 004d852f (CONDITIONAL_JUMP)  ; LAB_004d852f
    CALL FUN_005c084c                   ; 004d8090
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; undefined FUN_005c084c()
    PUSH EAX                            ; 004d8095
    CALL FUN_0040cb80                   ; 004d8096
        ;   XREF to: 0040cb80 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb80()
        ;   Label: LAB_004d8096
    ADD ESP,0x4                         ; 004d809b
    PUSH EBX                            ; 004d809e
    CALL FUN_004d60e0                   ; 004d809f
        ;   XREF to: 004d60e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d60e0()
    MOV EAX,[0x0061d95c]                ; 004d80a4 | DAT_0061d95c
    MOV EBP,dword ptr [EAX + 0x228]     ; 004d80a9 | DAT_01ccf5b8
    ADD ESP,0x4                         ; 004d80af
    CMP EBP,0x1                         ; 004d80b2
    JNZ 0x004d80c1                      ; 004d80b5
        ;   XREF to: 004d80c1 (CONDITIONAL_JUMP)  ; LAB_004d80c1
    CALL FUN_005b2420                   ; 004d80b7
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d80bc | DAT_01cd0c90
    MOV EAX,[0x0061135c]                ; 004d80c1 | DAT_0061135c
        ;   Label: LAB_004d80c1
    PUSH EAX                            ; 004d80c6
    CALL FUN_0045df40                   ; 004d80c7
        ;   XREF to: 0045df40 (UNCONDITIONAL_CALL)  ; undefined FUN_0045df40()
    MOV EAX,[0x0061d95c]                ; 004d80cc | DAT_0061d95c
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d80d1 | DAT_01ccf5b8
    ADD ESP,0x4                         ; 004d80d7
    CMP EDX,0x1                         ; 004d80da
    JNZ 0x004d8134                      ; 004d80dd
        ;   XREF to: 004d8134 (CONDITIONAL_JUMP)  ; LAB_004d8134
    CALL FUN_005b2420                   ; 004d80df
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV ECX,dword ptr [0x01cd0c90]      ; 004d80e4 | DAT_01cd0c90
    SUB EAX,ECX                         ; 004d80ea
    MOV dword ptr [ESP + 0x8],EAX       ; 004d80ec
    FILD dword ptr [ESP + 0x8]          ; 004d80f0
    FMUL double ptr [0x005e346c]        ; 004d80f4 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d80fa | DAT_0061d95c
    FMUL double ptr [0x005e3474]        ; 004d80ff | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d8105 | DAT_01ccf624
    FXCH                                ; 004d810b
    FMUL double ptr [0x005e347c]        ; 004d810d | DAT_005e347c
    FDIVRP                              ; 004d8113
    SUB ESP,0x8                         ; 004d8115
    FSTP double ptr [ESP]               ; 004d8118
    PUSH 0x5e33d4                       ; 004d811b | = "gFilterFX->process()"
    PUSH 0x5e33ac                       ; 004d8120 | s_G_s_3_2f_ms_005e33ab+1
    MOV EDI,dword ptr [0x00611100]      ; 004d8125 | PTR_DAT_00611100
    PUSH EDI                            ; 004d812b | DAT_007db5f0
    CALL FUN_00445430                   ; 004d812c
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x14                        ; 004d8131
    MOV EAX,[0x0061d95c]                ; 004d8134 | DAT_0061d95c
        ;   Label: LAB_004d8134
    CMP dword ptr [EAX + 0x228],0x1     ; 004d8139 | DAT_01ccf5b8
    JNZ 0x004d814c                      ; 004d8140
        ;   XREF to: 004d814c (CONDITIONAL_JUMP)  ; LAB_004d814c
    CALL FUN_005b2420                   ; 004d8142
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d8147 | DAT_01cd0c90
    MOV EAX,[0x00622ad0]                ; 004d814c | DAT_00622ad0
        ;   Label: LAB_004d814c
    PUSH EAX                            ; 004d8151
    CALL FUN_005437f0                   ; 004d8152
        ;   XREF to: 005437f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005437f0()
    MOV EAX,[0x0061d95c]                ; 004d8157 | DAT_0061d95c
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d815c | DAT_01ccf5b8
    ADD ESP,0x4                         ; 004d8162
    CMP EDX,0x1                         ; 004d8165
    JNZ 0x004d81bf                      ; 004d8168
        ;   XREF to: 004d81bf (CONDITIONAL_JUMP)  ; LAB_004d81bf
    CALL FUN_005b2420                   ; 004d816a
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV ECX,dword ptr [0x01cd0c90]      ; 004d816f | DAT_01cd0c90
    SUB EAX,ECX                         ; 004d8175
    MOV dword ptr [ESP + 0x8],EAX       ; 004d8177
    FILD dword ptr [ESP + 0x8]          ; 004d817b
    FMUL double ptr [0x005e346c]        ; 004d817f | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d8185 | DAT_0061d95c
    FMUL double ptr [0x005e3474]        ; 004d818a | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d8190 | DAT_01ccf624
    FXCH                                ; 004d8196
    FMUL double ptr [0x005e347c]        ; 004d8198 | DAT_005e347c
    FDIVRP                              ; 004d819e
    SUB ESP,0x8                         ; 004d81a0
    FSTP double ptr [ESP]               ; 004d81a3
    PUSH 0x5e33e9                       ; 004d81a6 | = "gScript->process()"
    PUSH 0x5e33ac                       ; 004d81ab | s_G_s_3_2f_ms_005e33ab+1
    MOV EDI,dword ptr [0x00611100]      ; 004d81b0 | PTR_DAT_00611100
    PUSH EDI                            ; 004d81b6 | DAT_007db5f0
    CALL FUN_00445430                   ; 004d81b7
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x14                        ; 004d81bc
    CMP dword ptr [EBX + 0xe0],0x0      ; 004d81bf
        ;   Label: LAB_004d81bf
    JZ 0x004d81db                       ; 004d81c6
        ;   XREF to: 004d81db (CONDITIONAL_JUMP)  ; LAB_004d81db
    MOV EAX,dword ptr [EBX + 0x244]     ; 004d81c8
    TEST EAX,EAX                        ; 004d81ce
    JZ 0x004d853b                       ; 004d81d0
        ;   XREF to: 004d853b (CONDITIONAL_JUMP)  ; LAB_004d853b
    CALL FUN_004032b0                   ; 004d81d6
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    MOV EAX,[0x0061d95c]                ; 004d81db | DAT_0061d95c
        ;   Label: LAB_004d81db
    CMP dword ptr [EAX + 0x228],0x1     ; 004d81e0 | DAT_01ccf5b8
    JNZ 0x004d81f3                      ; 004d81e7
        ;   XREF to: 004d81f3 (CONDITIONAL_JUMP)  ; LAB_004d81f3
    CALL FUN_005b2420                   ; 004d81e9
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d81ee | DAT_01cd0c90
    MOV EAX,[0x00622c18]                ; 004d81f3 | DAT_00622c18
        ;   Label: LAB_004d81f3
    PUSH EAX                            ; 004d81f8 | DAT_01e82168
    CALL FUN_005542c0                   ; 004d81f9
        ;   XREF to: 005542c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005542c0()
    MOV EAX,[0x0061d95c]                ; 004d81fe | DAT_0061d95c
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d8203 | DAT_01ccf5b8
    ADD ESP,0x4                         ; 004d8209
    CMP EDX,0x1                         ; 004d820c
    JNZ 0x004d8266                      ; 004d820f
        ;   XREF to: 004d8266 (CONDITIONAL_JUMP)  ; LAB_004d8266
    CALL FUN_005b2420                   ; 004d8211
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV ECX,dword ptr [0x01cd0c90]      ; 004d8216 | DAT_01cd0c90
    SUB EAX,ECX                         ; 004d821c
    MOV dword ptr [ESP + 0x8],EAX       ; 004d821e
    FILD dword ptr [ESP + 0x8]          ; 004d8222
    FMUL double ptr [0x005e346c]        ; 004d8226 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d822c | DAT_0061d95c
    FMUL double ptr [0x005e3474]        ; 004d8231 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d8237 | DAT_01ccf624
    FXCH                                ; 004d823d
    FMUL double ptr [0x005e347c]        ; 004d823f | DAT_005e347c
    FDIVRP                              ; 004d8245
    SUB ESP,0x8                         ; 004d8247
    FSTP double ptr [ESP]               ; 004d824a
    PUSH 0x5e33fc                       ; 004d824d | = "gSet->process()"
    PUSH 0x5e33ac                       ; 004d8252 | s_G_s_3_2f_ms_005e33ab+1
    MOV EDI,dword ptr [0x00611100]      ; 004d8257 | PTR_DAT_00611100
    PUSH EDI                            ; 004d825d | DAT_007db5f0
    CALL FUN_00445430                   ; 004d825e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x14                        ; 004d8263
    MOV EAX,[0x0061d95c]                ; 004d8266 | DAT_0061d95c
        ;   Label: LAB_004d8266
    CMP dword ptr [EAX + 0x228],0x1     ; 004d826b | DAT_01ccf5b8
    JNZ 0x004d827e                      ; 004d8272
        ;   XREF to: 004d827e (CONDITIONAL_JUMP)  ; LAB_004d827e
    CALL FUN_005b2420                   ; 004d8274
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d8279 | DAT_01cd0c90
    MOV EAX,[0x0061dca4]                ; 004d827e | DAT_0061dca4
        ;   Label: LAB_004d827e
    PUSH EAX                            ; 004d8283
    CALL FUN_004e5e80                   ; 004d8284
        ;   XREF to: 004e5e80 (UNCONDITIONAL_CALL)  ; undefined FUN_004e5e80()
    MOV EAX,[0x0061d95c]                ; 004d8289 | DAT_0061d95c
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d828e | DAT_01ccf5b8
    ADD ESP,0x4                         ; 004d8294
    CMP EDX,0x1                         ; 004d8297
    JNZ 0x004d82f1                      ; 004d829a
        ;   XREF to: 004d82f1 (CONDITIONAL_JUMP)  ; LAB_004d82f1
    CALL FUN_005b2420                   ; 004d829c
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV ECX,dword ptr [0x01cd0c90]      ; 004d82a1 | DAT_01cd0c90
    SUB EAX,ECX                         ; 004d82a7
    MOV dword ptr [ESP + 0x8],EAX       ; 004d82a9
    FILD dword ptr [ESP + 0x8]          ; 004d82ad
    FMUL double ptr [0x005e346c]        ; 004d82b1 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d82b7 | DAT_0061d95c
    FMUL double ptr [0x005e3474]        ; 004d82bc | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d82c2 | DAT_01ccf624
    FXCH                                ; 004d82c8
    FMUL double ptr [0x005e347c]        ; 004d82ca | DAT_005e347c
    FDIVRP                              ; 004d82d0
    SUB ESP,0x8                         ; 004d82d2
    FSTP double ptr [ESP]               ; 004d82d5
    PUSH 0x5e340c                       ; 004d82d8 | = "gGore->process()"
    PUSH 0x5e33ac                       ; 004d82dd | s_G_s_3_2f_ms_005e33ab+1
    MOV EDI,dword ptr [0x00611100]      ; 004d82e2 | PTR_DAT_00611100
    PUSH EDI                            ; 004d82e8 | DAT_007db5f0
    CALL FUN_00445430                   ; 004d82e9
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x14                        ; 004d82ee
    MOV EBP,dword ptr [0x00625c90]      ; 004d82f1 | DAT_00625c90
        ;   Label: LAB_004d82f1
    PUSH EBP                            ; 004d82f7
    CALL FUN_005a9a90                   ; 004d82f8
        ;   XREF to: 005a9a90 (UNCONDITIONAL_CALL)  ; undefined FUN_005a9a90()
    MOV EAX,[0x0061d95c]                ; 004d82fd | DAT_0061d95c
    MOV EDX,dword ptr [EAX + 0x228]     ; 004d8302 | DAT_01ccf5b8
    ADD ESP,0x4                         ; 004d8308
    CMP EDX,0x1                         ; 004d830b
    JNZ 0x004d831a                      ; 004d830e
        ;   XREF to: 004d831a (CONDITIONAL_JUMP)  ; LAB_004d831a
    CALL FUN_005b2420                   ; 004d8310
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d8315 | DAT_01cd0c90
    MOV ECX,dword ptr [0x0061c010]      ; 004d831a | DAT_0061c010
        ;   Label: LAB_004d831a
    PUSH ECX                            ; 004d8320
    CALL FUN_004b4dd0                   ; 004d8321
        ;   XREF to: 004b4dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b4dd0()
    MOV EAX,[0x0061d95c]                ; 004d8326 | DAT_0061d95c
    MOV EDI,dword ptr [EAX + 0x228]     ; 004d832b | DAT_01ccf5b8
    ADD ESP,0x4                         ; 004d8331
    CMP EDI,0x1                         ; 004d8334
    JNZ 0x004d838d                      ; 004d8337
        ;   XREF to: 004d838d (CONDITIONAL_JUMP)  ; LAB_004d838d
    CALL FUN_005b2420                   ; 004d8339
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EBP,dword ptr [0x01cd0c90]      ; 004d833e | DAT_01cd0c90
    SUB EAX,EBP                         ; 004d8344
    MOV dword ptr [ESP + 0x8],EAX       ; 004d8346
    FILD dword ptr [ESP + 0x8]          ; 004d834a
    FMUL double ptr [0x005e346c]        ; 004d834e | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d8354 | DAT_0061d95c
    FMUL double ptr [0x005e3474]        ; 004d8359 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d835f | DAT_01ccf624
    FXCH                                ; 004d8365
    FMUL double ptr [0x005e347c]        ; 004d8367 | DAT_005e347c
    FDIVRP                              ; 004d836d
    SUB ESP,0x8                         ; 004d836f
    FSTP double ptr [ESP]               ; 004d8372
    PUSH 0x5e341d                       ; 004d8375 | = "gFire->process()"
    PUSH 0x5e33ac                       ; 004d837a | s_G_s_3_2f_ms_005e33ab+1
    MOV EAX,[0x00611100]                ; 004d837f | PTR_DAT_00611100
    PUSH EAX                            ; 004d8384 | DAT_007db5f0
    CALL FUN_00445430                   ; 004d8385
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x14                        ; 004d838a
    MOV EAX,[0x0061d95c]                ; 004d838d | DAT_0061d95c
        ;   Label: LAB_004d838d
    CMP dword ptr [EAX + 0x228],0x1     ; 004d8392 | DAT_01ccf5b8
    JNZ 0x004d83a5                      ; 004d8399
        ;   XREF to: 004d83a5 (CONDITIONAL_JUMP)  ; LAB_004d83a5
    CALL FUN_005b2420                   ; 004d839b
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d83a0 | DAT_01cd0c90
    MOV ECX,dword ptr [0x0061b4d0]      ; 004d83a5 | DAT_0061b4d0
        ;   Label: LAB_004d83a5
    PUSH ECX                            ; 004d83ab
    CALL FUN_004a1a40                   ; 004d83ac
        ;   XREF to: 004a1a40 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1a40()
    MOV EAX,[0x0061d95c]                ; 004d83b1 | DAT_0061d95c
    MOV EDI,dword ptr [EAX + 0x228]     ; 004d83b6 | DAT_01ccf5b8
    ADD ESP,0x4                         ; 004d83bc
    CMP EDI,0x1                         ; 004d83bf
    JNZ 0x004d8418                      ; 004d83c2
        ;   XREF to: 004d8418 (CONDITIONAL_JUMP)  ; LAB_004d8418
    CALL FUN_005b2420                   ; 004d83c4
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EBP,dword ptr [0x01cd0c90]      ; 004d83c9 | DAT_01cd0c90
    SUB EAX,EBP                         ; 004d83cf
    MOV dword ptr [ESP + 0x8],EAX       ; 004d83d1
    FILD dword ptr [ESP + 0x8]          ; 004d83d5
    FMUL double ptr [0x005e346c]        ; 004d83d9 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d83df | DAT_0061d95c
    FMUL double ptr [0x005e3474]        ; 004d83e4 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d83ea | DAT_01ccf624
    FXCH                                ; 004d83f0
    FMUL double ptr [0x005e347c]        ; 004d83f2 | DAT_005e347c
    FDIVRP                              ; 004d83f8
    SUB ESP,0x8                         ; 004d83fa
    FSTP double ptr [ESP]               ; 004d83fd
    PUSH 0x5e342e                       ; 004d8400 | = "gEventList->process()"
    PUSH 0x5e33ac                       ; 004d8405 | s_G_s_3_2f_ms_005e33ab+1
    MOV EAX,[0x00611100]                ; 004d840a | PTR_DAT_00611100
    PUSH EAX                            ; 004d840f | DAT_007db5f0
    CALL FUN_00445430                   ; 004d8410
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x14                        ; 004d8415
    MOV EDX,dword ptr [0x00625bc0]      ; 004d8418 | DAT_00625bc0
        ;   Label: LAB_004d8418
    PUSH EDX                            ; 004d841e
    CALL FUN_0059f4f0                   ; 004d841f
        ;   XREF to: 0059f4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f4f0()
    ADD ESP,0x4                         ; 004d8424
    MOV ECX,dword ptr [0x0062604c]      ; 004d8427 | DAT_0062604c
    PUSH ECX                            ; 004d842d
    CALL FUN_005ae190                   ; 004d842e
        ;   XREF to: 005ae190 (UNCONDITIONAL_CALL)  ; undefined FUN_005ae190()
    ADD ESP,0x4                         ; 004d8433
    PUSH EBX                            ; 004d8436
    CALL FUN_004d27b0                   ; 004d8437
        ;   XREF to: 004d27b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d27b0()
    ADD ESP,0x4                         ; 004d843c
    MOV EDI,dword ptr [0x0061d418]      ; 004d843f | DAT_0061d418
    PUSH EDI                            ; 004d8445 | DAT_01cc8004
    CALL FUN_004be970                   ; 004d8446
        ;   XREF to: 004be970 (UNCONDITIONAL_CALL)  ; undefined FUN_004be970()
    ADD ESP,0x4                         ; 004d844b
    CALL FUN_00415cd0                   ; 004d844e
        ;   XREF to: 00415cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00415cd0()
    MOV EAX,[0x0061d418]                ; 004d8453 | DAT_0061d418
    CMP dword ptr [EAX + 0x40],0x0      ; 004d8458 | DAT_01cc8044
    JZ 0x004d8584                       ; 004d845c
        ;   XREF to: 004d8584 (CONDITIONAL_JUMP)  ; LAB_004d8584
    MOV EAX,[0x0061d95c]                ; 004d8462 | DAT_0061d95c
        ;   Label: LAB_004d8462
    CMP dword ptr [EAX + 0x228],0x1     ; 004d8467 | DAT_01ccf5b8
    JNZ 0x004d847a                      ; 004d846e
        ;   XREF to: 004d847a (CONDITIONAL_JUMP)  ; LAB_004d847a
    CALL FUN_005b2420                   ; 004d8470
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV [0x01cd0c90],EAX                ; 004d8475 | DAT_01cd0c90
    MOV ECX,dword ptr [0x0061f650]      ; 004d847a | DAT_0061f650
        ;   Label: LAB_004d847a
    PUSH ECX                            ; 004d8480 | DAT_01d2c900
    CALL FUN_0051b8d0                   ; 004d8481
        ;   XREF to: 0051b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b8d0()
    MOV EAX,[0x0061d95c]                ; 004d8486 | DAT_0061d95c
    MOV EDI,dword ptr [EAX + 0x228]     ; 004d848b | DAT_01ccf5b8
    ADD ESP,0x4                         ; 004d8491
    CMP EDI,0x1                         ; 004d8494
    JNZ 0x004d84ed                      ; 004d8497
        ;   XREF to: 004d84ed (CONDITIONAL_JUMP)  ; LAB_004d84ed
    CALL FUN_005b2420                   ; 004d8499
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
    MOV EBP,dword ptr [0x01cd0c90]      ; 004d849e | DAT_01cd0c90
    SUB EAX,EBP                         ; 004d84a4
    MOV dword ptr [ESP + 0x8],EAX       ; 004d84a6
    FILD dword ptr [ESP + 0x8]          ; 004d84aa
    FMUL double ptr [0x005e346c]        ; 004d84ae | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d84b4 | DAT_0061d95c
    FMUL double ptr [0x005e3474]        ; 004d84b9 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d84bf | DAT_01ccf624
    FXCH                                ; 004d84c5
    FMUL double ptr [0x005e347c]        ; 004d84c7 | DAT_005e347c
    FDIVRP                              ; 004d84cd
    SUB ESP,0x8                         ; 004d84cf
    FSTP double ptr [ESP]               ; 004d84d2
    PUSH 0x5e3444                       ; 004d84d5 | = "gSit->process()"
    PUSH 0x5e33ac                       ; 004d84da | s_G_s_3_2f_ms_005e33ab+1
    MOV EAX,[0x00611100]                ; 004d84df | PTR_DAT_00611100
    PUSH EAX                            ; 004d84e4 | DAT_007db5f0
    CALL FUN_00445430                   ; 004d84e5
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x14                        ; 004d84ea
    MOV EAX,[0x0061d95c]                ; 004d84ed | DAT_0061d95c | DAT_01ccf390
        ;   Label: LAB_004d84ed
    MOV dword ptr [EBX + 0x258],0x0     ; 004d84f2
    CMP dword ptr [EAX + 0x228],0x0     ; 004d84fc | DAT_01ccf5b8
    JNZ 0x004d8597                      ; 004d8503
        ;   XREF to: 004d8597 (CONDITIONAL_JUMP)  ; LAB_004d8597
    FLD float ptr [EBX + 0x294]         ; 004d8509
        ;   Label: LAB_004d8509
    FADD float ptr [EBX + 0x270]        ; 004d850f
    FSTP float ptr [EBX + 0x270]        ; 004d8515
    ADD ESP,0xc                         ; 004d851b
    POP EBP                             ; 004d851e
    POP EDI                             ; 004d851f
    POP ESI                             ; 004d8520
    POP EBX                             ; 004d8521
    RET                                 ; 004d8522
    CALL FUN_005b2420                   ; 004d8523
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
        ;   Label: LAB_004d8523
    MOV ESI,EAX                         ; 004d8528
    JMP 0x004d8078                      ; 004d852a
        ;   XREF to: 004d8078 (UNCONDITIONAL_JUMP)  ; LAB_004d8078
    MOV EDI,dword ptr [EAX + 0x174]     ; 004d852f | DAT_01d51d94
        ;   Label: LAB_004d852f
    PUSH EDI                            ; 004d8535
    JMP 0x004d8096                      ; 004d8536
        ;   XREF to: 004d8096 (UNCONDITIONAL_JUMP)  ; LAB_004d8096
    MOV EDX,dword ptr [0x006236b8]      ; 004d853b | DAT_006236b8
        ;   Label: LAB_004d853b
    PUSH EDX                            ; 004d8541
    MOV dword ptr [EBX + 0xe0],EAX      ; 004d8542
    CALL FUN_0057cc00                   ; 004d8548
        ;   XREF to: 0057cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0057cc00()
    ADD ESP,0x4                         ; 004d854d
    MOV EAX,[0x00622ad0]                ; 004d8550 | DAT_00622ad0
    PUSH 0x2                            ; 004d8555
    MOV ECX,dword ptr [EAX + 0xc]       ; 004d8557 | DAT_01e81c8c
    PUSH ECX                            ; 004d855a
    MOV EDI,dword ptr [0x00622c18]      ; 004d855b | DAT_00622c18
    PUSH EDI                            ; 004d8561 | DAT_01e82168
    CALL FUN_00559f80                   ; 004d8562
        ;   XREF to: 00559f80 (UNCONDITIONAL_CALL)  ; undefined FUN_00559f80()
    ADD ESP,0xc                         ; 004d8567
    PUSH EBX                            ; 004d856a
    CALL FUN_004cbf10                   ; 004d856b
        ;   XREF to: 004cbf10 (UNCONDITIONAL_CALL)  ; undefined FUN_004cbf10()
    MOV EAX,[0x00622ad0]                ; 004d8570 | DAT_00622ad0
    ADD ESP,0x4                         ; 004d8575
    MOV dword ptr [EAX + 0x10],0x0      ; 004d8578 | DAT_01e81c90
    JMP 0x004d81db                      ; 004d857f
        ;   XREF to: 004d81db (UNCONDITIONAL_JUMP)  ; LAB_004d81db
    MOV EAX,[0x00622c18]                ; 004d8584 | DAT_00622c18
        ;   Label: LAB_004d8584
    PUSH EAX                            ; 004d8589 | DAT_01e82168
    CALL FUN_0054fc20                   ; 004d858a
        ;   XREF to: 0054fc20 (UNCONDITIONAL_CALL)  ; undefined FUN_0054fc20()
    ADD ESP,0x4                         ; 004d858f
    JMP 0x004d8462                      ; 004d8592
        ;   XREF to: 004d8462 (UNCONDITIONAL_JUMP)  ; LAB_004d8462
    CALL FUN_005b2420                   ; 004d8597
        ;   XREF to: 005b2420 (UNCONDITIONAL_CALL)  ; undefined FUN_005b2420()
        ;   Label: LAB_004d8597
    SUB EAX,ESI                         ; 004d859c
    MOV dword ptr [ESP + 0x8],EAX       ; 004d859e
    FILD dword ptr [ESP + 0x8]          ; 004d85a2
    FMUL double ptr [0x005e346c]        ; 004d85a6 | DAT_005e346c
    MOV EAX,[0x0061d95c]                ; 004d85ac | DAT_0061d95c
    FMUL double ptr [0x005e3474]        ; 004d85b1 | DAT_005e3474
    FLD float ptr [EAX + 0x294]         ; 004d85b7 | DAT_01ccf624
    FXCH                                ; 004d85bd
    FMUL double ptr [0x005e347c]        ; 004d85bf | DAT_005e347c
    FDIVRP                              ; 004d85c5
    SUB ESP,0x8                         ; 004d85c7
    FSTP double ptr [ESP]               ; 004d85ca
    PUSH 0x5e3454                       ; 004d85cd | = "simulate : %3.2f ms\n"
    MOV ECX,dword ptr [0x00611100]      ; 004d85d2 | PTR_DAT_00611100
    PUSH ECX                            ; 004d85d8 | DAT_007db5f0
    CALL FUN_00445430                   ; 004d85d9
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0x10                        ; 004d85de
    JMP 0x004d8509                      ; 004d85e1
        ;   XREF to: 004d8509 (UNCONDITIONAL_JUMP)  ; LAB_004d8509

