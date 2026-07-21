; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040c160(char *param_1,int param_2)
;
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x77]:1  local_77
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_inv.cpp_CInventory_load_FUN_004c1190 at 004c1359
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004d7fe0 at 004d8377
;
; Referenced Globals:
;   string s_{_%s_\"%[^\"]\"_00577a80
;   string s_..\\core\\actor.cpp_00577a8f
;   string s_Start_of_actor_file_tag_mismatch_00577aa1
;   string s_}_%s_\"%[^\"]\"_00577acf
;   string s_..\\core\\actor.cpp_00577ade
;   string s_End_of_actor_file_tag_mismatch_f_00577af0
;   string s_..\\core\\actor.cpp_00577b26
;   string s_IO_Error_after_reading_%s_\"%s\"_00577b38
;   undefined4 DAT_00763e84
;   undefined4 DAT_00763e88
;   undefined4 DAT_00763e8c
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   crt_stdio.c_fscanf_FUN_00563350
;   crt_string.c__stricmp_FUN_00564520
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c160
        ;   Label: core_actor.cpp_CDemonActor_load_FUN_0040c160
    PUSH ESI                            ; 0040c161
    PUSH EDI                            ; 0040c162
    PUSH EBP                            ; 0040c163
    SUB ESP,0xcc                        ; 0040c164
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0040c16a
    PUSH EBX                            ; 0040c171
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 0040c172
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0()
    MOV ESI,EAX                         ; 0040c177
    ADD ESP,0x4                         ; 0040c179
    MOV EBP,EAX                         ; 0040c17c
    XOR AH,AH                           ; 0040c17e
    MOV byte ptr [ESP],AH               ; 0040c180
    MOV byte ptr [ESP + 0x64],AH        ; 0040c183
    LEA EAX,[ESP + 0x64]                ; 0040c187
    PUSH EAX                            ; 0040c18b
    LEA EAX,[ESP + 0x4]                 ; 0040c18c
    PUSH EAX                            ; 0040c190
    PUSH 0x577a80                       ; 0040c191 | = " { %s \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040c196
    PUSH EDX                            ; 0040c19d
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c19e
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 0040c1a3
    MOV EAX,ESP                         ; 0040c1a6
    PUSH EAX                            ; 0040c1a8
    PUSH ESI                            ; 0040c1a9
    CALL crt_string.c__stricmp_FUN_00564520 ; 0040c1aa
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0040c1af
    TEST EAX,EAX                        ; 0040c1b2
    JNZ 0x0040c2af                      ; 0040c1b4
        ;   XREF to: 0040c2af (CONDITIONAL_JUMP)  ; LAB_0040c2af
    LEA ESI,[ESP + 0x64]                ; 0040c1ba
        ;   Label: LAB_0040c1ba
    MOV EDI,EBX                         ; 0040c1be
    PUSH EDI                            ; 0040c1c0
    MOV AL,byte ptr [ESI]               ; 0040c1c1
        ;   Label: LAB_0040c1c1
    MOV byte ptr [EDI],AL               ; 0040c1c3
    CMP AL,0x0                          ; 0040c1c5
    JZ 0x0040c1d9                       ; 0040c1c7
        ;   XREF to: 0040c1d9 (CONDITIONAL_JUMP)  ; LAB_0040c1d9
    MOV AL,byte ptr [ESI + 0x1]         ; 0040c1c9
    ADD ESI,0x2                         ; 0040c1cc
    MOV byte ptr [EDI + 0x1],AL         ; 0040c1cf
    ADD EDI,0x2                         ; 0040c1d2
    CMP AL,0x0                          ; 0040c1d5
    JNZ 0x0040c1c1                      ; 0040c1d7
        ;   XREF to: 0040c1c1 (CONDITIONAL_JUMP)  ; LAB_0040c1c1
    POP EDI                             ; 0040c1d9
        ;   Label: LAB_0040c1d9
    MOV EAX,[0x00763e84]                ; 0040c1da | DAT_00763e84
    MOV dword ptr [ESP + 0xc8],EAX      ; 0040c1df
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040c1e6
    MOV EDI,dword ptr [0x00763e88]      ; 0040c1ed | DAT_00763e88
    MOV [0x00763e84],EAX                ; 0040c1f3 | DAT_00763e84
    MOV EAX,0x1                         ; 0040c1f8
    PUSH EBX                            ; 0040c1fd
    MOV [0x00763e88],EAX                ; 0040c1fe | DAT_00763e88
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0040c203
    MOV ESI,dword ptr [0x00763e8c]      ; 0040c209 | DAT_00763e8c
    MOV dword ptr [0x00763e8c],EBX      ; 0040c20f | DAT_00763e8c
    CALL dword ptr [EAX + 0xcc]         ; 0040c215
    ADD ESP,0x4                         ; 0040c21b
    LEA EAX,[ESP + 0x64]                ; 0040c21e
    PUSH EAX                            ; 0040c222
    LEA EAX,[ESP + 0x4]                 ; 0040c223
    XOR DH,DH                           ; 0040c227
    PUSH EAX                            ; 0040c229
    MOV byte ptr [ESP + 0x8],DH         ; 0040c22a
    PUSH 0x577acf                       ; 0040c22e | = " } %s \"%[^\"]\"\n"
    MOV byte ptr [ESP + 0x70],DH        ; 0040c233
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040c237
    PUSH EDX                            ; 0040c23e
    CALL crt_stdio.c_fscanf_FUN_00563350 ; 0040c23f
        ;   XREF to: 00563350 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_00563350()
    ADD ESP,0x10                        ; 0040c244
    MOV EAX,ESP                         ; 0040c247
    PUSH EAX                            ; 0040c249
    PUSH EBP                            ; 0040c24a
    CALL crt_string.c__stricmp_FUN_00564520 ; 0040c24b
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0040c250
    TEST EAX,EAX                        ; 0040c253
    JZ 0x0040c2d8                       ; 0040c255
        ;   XREF to: 0040c2d8 (CONDITIONAL_JUMP)  ; LAB_0040c2d8
    PUSH EBX                            ; 0040c25b
        ;   Label: LAB_0040c25b
    PUSH EBP                            ; 0040c25c
    MOV ECX,0x577ade                    ; 0040c25d | = "..\\core\\actor.cpp"
    MOV EAX,0x7e3                       ; 0040c262
    PUSH 0x577af0                       ; 0040c267 | = "End of actor file tag mismatch for cl..."
    MOV dword ptr [0x01cc4800],ECX      ; 0040c26c | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0040c272 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040c277
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 0040c27c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040c27f
        ;   Label: LAB_0040c27f
    TEST byte ptr [EAX + 0xc],0x20      ; 0040c286
    JNZ 0x0040c2f0                      ; 0040c28a
        ;   XREF to: 0040c2f0 (CONDITIONAL_JUMP)  ; LAB_0040c2f0
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0040c28c
        ;   Label: LAB_0040c28c
    MOV dword ptr [0x00763e8c],ESI      ; 0040c293 | DAT_00763e8c
    MOV dword ptr [0x00763e88],EDI      ; 0040c299 | DAT_00763e88
    MOV [0x00763e84],EAX                ; 0040c29f | DAT_00763e84
    ADD ESP,0xcc                        ; 0040c2a4
    POP EBP                             ; 0040c2aa
    POP EDI                             ; 0040c2ab
    POP ESI                             ; 0040c2ac
    POP EBX                             ; 0040c2ad
    RET                                 ; 0040c2ae
    PUSH ESI                            ; 0040c2af
        ;   Label: LAB_0040c2af
    MOV ECX,0x577a8f                    ; 0040c2b0 | = "..\\core\\actor.cpp"
    MOV EDI,0x7c6                       ; 0040c2b5
    PUSH 0x577aa1                       ; 0040c2ba | = "Start of actor file tag mismatch for ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0040c2bf | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0040c2c5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040c2cb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0040c2d0
    JMP 0x0040c1ba                      ; 0040c2d3
        ;   XREF to: 0040c1ba (UNCONDITIONAL_JUMP)  ; LAB_0040c1ba
    LEA EAX,[ESP + 0x64]                ; 0040c2d8
        ;   Label: LAB_0040c2d8
    PUSH EAX                            ; 0040c2dc
    PUSH EBX                            ; 0040c2dd
    CALL crt_string.c__stricmp_FUN_00564520 ; 0040c2de
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0040c2e3
    TEST EAX,EAX                        ; 0040c2e6
    JNZ 0x0040c25b                      ; 0040c2e8
        ;   XREF to: 0040c25b (CONDITIONAL_JUMP)  ; LAB_0040c25b
    JMP 0x0040c27f                      ; 0040c2ee
        ;   XREF to: 0040c27f (UNCONDITIONAL_JUMP)  ; LAB_0040c27f
    PUSH EBX                            ; 0040c2f0
        ;   Label: LAB_0040c2f0
    PUSH EBP                            ; 0040c2f1
    MOV EDX,0x577b26                    ; 0040c2f2 | = "..\\core\\actor.cpp"
    MOV ECX,0x7e8                       ; 0040c2f7
    PUSH 0x577b38                       ; 0040c2fc | = "IO Error after reading %s \"%s\""
    MOV dword ptr [0x01cc4800],EDX      ; 0040c301 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040c307 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040c30d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 0040c312
    JMP 0x0040c28c                      ; 0040c315
        ;   XREF to: 0040c28c (UNCONDITIONAL_JUMP)  ; LAB_0040c28c

