; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b1c0(CDemonActor *this_ptr,_FILE *file_handle)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined1       Stack[-0xdc]:1  local_dc
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x77]:1  local_77
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_inv.cpp_CInventory_load_FUN_004dc4b0 at 004dc67c
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 at 004fb930
;
; Referenced Globals:
;   TerminatedCString s_s_005ca945
;   TerminatedCString s_core_actor_cpp_005ca954
;   TerminatedCString s_Start_of_actor_file_tag_005ca966
;   TerminatedCString s_s_005ca994
;   TerminatedCString s_core_actor_cpp_005ca9a3
;   TerminatedCString s_End_of_actor_file_tag_mi_005ca9b5
;   TerminatedCString s_core_actor_cpp_005ca9eb
;   TerminatedCString s_IO_Error_after_reading_s_005ca9fd
;   undefined4 DAT_007bc034
;   undefined4 DAT_007bc038
;   undefined4 DAT_007bc03c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_FUN_00408a50
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fscanf_FUN_005b8100
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b1c0
        ;   Label: core_actor.cpp_CDemonActor_load_FUN_0040b1c0
    PUSH ESI                            ; 0040b1c1
    PUSH EDI                            ; 0040b1c2
    PUSH EBP                            ; 0040b1c3
    SUB ESP,0xcc                        ; 0040b1c4
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0040b1ca
    PUSH EBX                            ; 0040b1d1
    CALL core_actor.cpp_FUN_00408a50    ; 0040b1d2
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408a50()
    MOV ESI,EAX                         ; 0040b1d7
    ADD ESP,0x4                         ; 0040b1d9
    MOV EBP,EAX                         ; 0040b1dc
    XOR AH,AH                           ; 0040b1de
    MOV byte ptr [ESP],AH               ; 0040b1e0
    MOV byte ptr [ESP + 0x64],AH        ; 0040b1e3
    LEA EAX,[ESP + 0x64]                ; 0040b1e7
    PUSH EAX                            ; 0040b1eb
    LEA EAX,[ESP + 0x4]                 ; 0040b1ec
    PUSH EAX                            ; 0040b1f0
    PUSH 0x5ca945                       ; 0040b1f1 | = " { %s \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040b1f6
    PUSH EDX                            ; 0040b1fd
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040b1fe
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040b203
    MOV EAX,ESP                         ; 0040b206
    PUSH EAX                            ; 0040b208
    PUSH ESI                            ; 0040b209
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0040b20a
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040b20f
    TEST EAX,EAX                        ; 0040b212
    JNZ 0x0040b30f                      ; 0040b214
        ;   XREF to: 0040b30f (CONDITIONAL_JUMP)  ; LAB_0040b30f
    LEA ESI,[ESP + 0x64]                ; 0040b21a
        ;   Label: LAB_0040b21a
    MOV EDI,EBX                         ; 0040b21e
    PUSH EDI                            ; 0040b220
    MOV AL,byte ptr [ESI]               ; 0040b221
        ;   Label: LAB_0040b221
    MOV byte ptr [EDI],AL               ; 0040b223
    CMP AL,0x0                          ; 0040b225
    JZ 0x0040b239                       ; 0040b227
        ;   XREF to: 0040b239 (CONDITIONAL_JUMP)  ; LAB_0040b239
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b229
    ADD ESI,0x2                         ; 0040b22c
    MOV byte ptr [EDI + 0x1],AL         ; 0040b22f
    ADD EDI,0x2                         ; 0040b232
    CMP AL,0x0                          ; 0040b235
    JNZ 0x0040b221                      ; 0040b237
        ;   XREF to: 0040b221 (CONDITIONAL_JUMP)  ; LAB_0040b221
    POP EDI                             ; 0040b239
        ;   Label: LAB_0040b239
    MOV EAX,[0x007bc034]                ; 0040b23a | DAT_007bc034
    MOV dword ptr [ESP + 0xc8],EAX      ; 0040b23f
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040b246
    MOV EDI,dword ptr [0x007bc038]      ; 0040b24d | DAT_007bc038
    MOV [0x007bc034],EAX                ; 0040b253 | DAT_007bc034
    MOV EAX,0x1                         ; 0040b258
    PUSH EBX                            ; 0040b25d
    MOV [0x007bc038],EAX                ; 0040b25e | DAT_007bc038
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040b263
    MOV ESI,dword ptr [0x007bc03c]      ; 0040b269 | DAT_007bc03c
    MOV dword ptr [0x007bc03c],EBX      ; 0040b26f | DAT_007bc03c
    CALL dword ptr [EAX + 0xdc]         ; 0040b275
    ADD ESP,0x4                         ; 0040b27b
    LEA EAX,[ESP + 0x64]                ; 0040b27e
    PUSH EAX                            ; 0040b282
    LEA EAX,[ESP + 0x4]                 ; 0040b283
    XOR DH,DH                           ; 0040b287
    PUSH EAX                            ; 0040b289
    MOV byte ptr [ESP + 0x8],DH         ; 0040b28a
    PUSH 0x5ca994                       ; 0040b28e | = " } %s \"%[^\"]\"\n"
    MOV byte ptr [ESP + 0x70],DH        ; 0040b293
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040b297
    PUSH EDX                            ; 0040b29e
    CALL crt_stdio.c_fscanf_FUN_005b8100 ; 0040b29f
        ;   XREF to: 005b8100 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005b8100(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040b2a4
    MOV EAX,ESP                         ; 0040b2a7
    PUSH EAX                            ; 0040b2a9
    PUSH EBP                            ; 0040b2aa
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0040b2ab
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040b2b0
    TEST EAX,EAX                        ; 0040b2b3
    JZ 0x0040b338                       ; 0040b2b5
        ;   XREF to: 0040b338 (CONDITIONAL_JUMP)  ; LAB_0040b338
    PUSH EBX                            ; 0040b2bb
        ;   Label: LAB_0040b2bb
    PUSH EBP                            ; 0040b2bc
    MOV ECX,0x5ca9a3                    ; 0040b2bd | = "..\\core\\actor.cpp"
    MOV EAX,0x846                       ; 0040b2c2
    PUSH 0x5ca9b5                       ; 0040b2c7 | = "End of actor file tag mismatch for cl..."
    MOV dword ptr [0x01d046a0],ECX      ; 0040b2cc | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0040b2d2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040b2d7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0040b2dc
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040b2df
        ;   Label: LAB_0040b2df
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b2e6
    JNZ 0x0040b350                      ; 0040b2ea
        ;   XREF to: 0040b350 (CONDITIONAL_JUMP)  ; LAB_0040b350
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0040b2ec
        ;   Label: LAB_0040b2ec
    MOV dword ptr [0x007bc03c],ESI      ; 0040b2f3 | DAT_007bc03c
    MOV dword ptr [0x007bc038],EDI      ; 0040b2f9 | DAT_007bc038
    MOV [0x007bc034],EAX                ; 0040b2ff | DAT_007bc034
    ADD ESP,0xcc                        ; 0040b304
    POP EBP                             ; 0040b30a
    POP EDI                             ; 0040b30b
    POP ESI                             ; 0040b30c
    POP EBX                             ; 0040b30d
    RET                                 ; 0040b30e
    PUSH ESI                            ; 0040b30f
        ;   Label: LAB_0040b30f
    MOV ECX,0x5ca954                    ; 0040b310 | = "..\\core\\actor.cpp"
    MOV EDI,0x829                       ; 0040b315
    PUSH 0x5ca966                       ; 0040b31a | = "Start of actor file tag mismatch for ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0040b31f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 0040b325 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040b32b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0040b330
    JMP 0x0040b21a                      ; 0040b333
        ;   XREF to: 0040b21a (UNCONDITIONAL_JUMP)  ; LAB_0040b21a
    LEA EAX,[ESP + 0x64]                ; 0040b338
        ;   Label: LAB_0040b338
    PUSH EAX                            ; 0040b33c
    PUSH EBX                            ; 0040b33d
    CALL crt_string.c__stricmp_FUN_005b8130 ; 0040b33e
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040b343
    TEST EAX,EAX                        ; 0040b346
    JNZ 0x0040b2bb                      ; 0040b348
        ;   XREF to: 0040b2bb (CONDITIONAL_JUMP)  ; LAB_0040b2bb
    JMP 0x0040b2df                      ; 0040b34e
        ;   XREF to: 0040b2df (UNCONDITIONAL_JUMP)  ; LAB_0040b2df
    PUSH EBX                            ; 0040b350
        ;   Label: LAB_0040b350
    PUSH EBP                            ; 0040b351
    MOV EDX,0x5ca9eb                    ; 0040b352 | = "..\\core\\actor.cpp"
    MOV ECX,0x84b                       ; 0040b357
    PUSH 0x5ca9fd                       ; 0040b35c | = "IO Error after reading %s \"%s\""
    MOV dword ptr [0x01d046a0],EDX      ; 0040b361 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0040b367 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040b36d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0040b372
    JMP 0x0040b2ec                      ; 0040b375
        ;   XREF to: 0040b2ec (UNCONDITIONAL_JUMP)  ; LAB_0040b2ec

