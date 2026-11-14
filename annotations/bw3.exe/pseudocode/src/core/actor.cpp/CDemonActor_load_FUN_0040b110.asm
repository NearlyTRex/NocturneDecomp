; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_load_FUN_0040b110(CDemonActor *this_ptr,_FILE *file_handle)
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
;   core_inv.cpp_CInventory_load_FUN_004dc750 at 004dc91c
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004f5cc0 at 004f6060
;
; Referenced Globals:
;   TerminatedCString s_s_005b58f4
;   TerminatedCString s_core_actor_cpp_005b5903
;   TerminatedCString s_Start_of_actor_file_tag_005b5915
;   TerminatedCString s_s_005b5943
;   TerminatedCString s_core_actor_cpp_005b5952
;   TerminatedCString s_End_of_actor_file_tag_mi_005b5964
;   TerminatedCString s_core_actor_cpp_005b599a
;   TerminatedCString s_IO_Error_after_reading_s_005b59ac
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;   undefined4 DAT_007df9bc
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040b110
        ;   Label: core_actor.cpp_CDemonActor_load_FUN_0040b110
    PUSH ESI                            ; 0040b111
    PUSH EDI                            ; 0040b112
    PUSH EBP                            ; 0040b113
    SUB ESP,0xcc                        ; 0040b114
    MOV EBX,dword ptr [ESP + 0xe0]      ; 0040b11a
    PUSH EBX                            ; 0040b121
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870 ; 0040b122
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408870(CDemonActor * this_ptr)
    MOV ESI,EAX                         ; 0040b127
    ADD ESP,0x4                         ; 0040b129
    MOV EBP,EAX                         ; 0040b12c
    XOR AH,AH                           ; 0040b12e
    MOV byte ptr [ESP],AH               ; 0040b130
    MOV byte ptr [ESP + 0x64],AH        ; 0040b133
    LEA EAX,[ESP + 0x64]                ; 0040b137
    PUSH EAX                            ; 0040b13b
    LEA EAX,[ESP + 0x4]                 ; 0040b13c
    PUSH EAX                            ; 0040b140
    PUSH 0x5b58f4                       ; 0040b141 | = " { %s \"%[^\"]\"\n"
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040b146
    PUSH EDX                            ; 0040b14d
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040b14e
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040b153
    MOV EAX,ESP                         ; 0040b156
    PUSH EAX                            ; 0040b158
    PUSH ESI                            ; 0040b159
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0040b15a
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040b15f
    TEST EAX,EAX                        ; 0040b162
    JNZ 0x0040b25f                      ; 0040b164
        ;   XREF to: 0040b25f (CONDITIONAL_JUMP)  ; LAB_0040b25f
    LEA ESI,[ESP + 0x64]                ; 0040b16a
        ;   Label: LAB_0040b16a
    MOV EDI,EBX                         ; 0040b16e
    PUSH EDI                            ; 0040b170
    MOV AL,byte ptr [ESI]               ; 0040b171
        ;   Label: LAB_0040b171
    MOV byte ptr [EDI],AL               ; 0040b173
    CMP AL,0x0                          ; 0040b175
    JZ 0x0040b189                       ; 0040b177
        ;   XREF to: 0040b189 (CONDITIONAL_JUMP)  ; LAB_0040b189
    MOV AL,byte ptr [ESI + 0x1]         ; 0040b179
    ADD ESI,0x2                         ; 0040b17c
    MOV byte ptr [EDI + 0x1],AL         ; 0040b17f
    ADD EDI,0x2                         ; 0040b182
    CMP AL,0x0                          ; 0040b185
    JNZ 0x0040b171                      ; 0040b187
        ;   XREF to: 0040b171 (CONDITIONAL_JUMP)  ; LAB_0040b171
    POP EDI                             ; 0040b189
        ;   Label: LAB_0040b189
    MOV EAX,[0x007df9b4]                ; 0040b18a | DAT_007df9b4
    MOV dword ptr [ESP + 0xc8],EAX      ; 0040b18f
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040b196
    MOV EDI,dword ptr [0x007df9b8]      ; 0040b19d | DAT_007df9b8
    MOV [0x007df9b4],EAX                ; 0040b1a3 | DAT_007df9b4
    MOV EAX,0x1                         ; 0040b1a8
    PUSH EBX                            ; 0040b1ad
    MOV [0x007df9b8],EAX                ; 0040b1ae | DAT_007df9b8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040b1b3
    MOV ESI,dword ptr [0x007df9bc]      ; 0040b1b9 | DAT_007df9bc
    MOV dword ptr [0x007df9bc],EBX      ; 0040b1bf | DAT_007df9bc
    CALL dword ptr [EAX + 0xd4]         ; 0040b1c5
    ADD ESP,0x4                         ; 0040b1cb
    LEA EAX,[ESP + 0x64]                ; 0040b1ce
    PUSH EAX                            ; 0040b1d2
    LEA EAX,[ESP + 0x4]                 ; 0040b1d3
    XOR DH,DH                           ; 0040b1d7
    PUSH EAX                            ; 0040b1d9
    MOV byte ptr [ESP + 0x8],DH         ; 0040b1da
    PUSH 0x5b5943                       ; 0040b1de | = " } %s \"%[^\"]\"\n"
    MOV byte ptr [ESP + 0x70],DH        ; 0040b1e3
    MOV EDX,dword ptr [ESP + 0xf0]      ; 0040b1e7
    PUSH EDX                            ; 0040b1ee
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 0040b1ef
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005a3230(_FILE * file, char * format)
    ADD ESP,0x10                        ; 0040b1f4
    MOV EAX,ESP                         ; 0040b1f7
    PUSH EAX                            ; 0040b1f9
    PUSH EBP                            ; 0040b1fa
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0040b1fb
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040b200
    TEST EAX,EAX                        ; 0040b203
    JZ 0x0040b288                       ; 0040b205
        ;   XREF to: 0040b288 (CONDITIONAL_JUMP)  ; LAB_0040b288
    PUSH EBX                            ; 0040b20b
        ;   Label: LAB_0040b20b
    PUSH EBP                            ; 0040b20c
    MOV ECX,0x5b5952                    ; 0040b20d | = "..\\core\\actor.cpp"
    MOV EAX,0x845                       ; 0040b212
    PUSH 0x5b5964                       ; 0040b217 | = "End of actor file tag mismatch for cl..."
    MOV dword ptr [0x01d71de0],ECX      ; 0040b21c | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0040b222 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040b227
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 0040b22c
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0040b22f
        ;   Label: LAB_0040b22f
    TEST byte ptr [EAX + 0xc],0x20      ; 0040b236
    JNZ 0x0040b2a0                      ; 0040b23a
        ;   XREF to: 0040b2a0 (CONDITIONAL_JUMP)  ; LAB_0040b2a0
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0040b23c
        ;   Label: LAB_0040b23c
    MOV dword ptr [0x007df9bc],ESI      ; 0040b243 | DAT_007df9bc
    MOV dword ptr [0x007df9b8],EDI      ; 0040b249 | DAT_007df9b8
    MOV [0x007df9b4],EAX                ; 0040b24f | DAT_007df9b4
    ADD ESP,0xcc                        ; 0040b254
    POP EBP                             ; 0040b25a
    POP EDI                             ; 0040b25b
    POP ESI                             ; 0040b25c
    POP EBX                             ; 0040b25d
    RET                                 ; 0040b25e
    PUSH ESI                            ; 0040b25f
        ;   Label: LAB_0040b25f
    MOV ECX,0x5b5903                    ; 0040b260 | = "..\\core\\actor.cpp"
    MOV EDI,0x828                       ; 0040b265
    PUSH 0x5b5915                       ; 0040b26a | = "Start of actor file tag mismatch for ..."
    MOV dword ptr [0x01d71de0],ECX      ; 0040b26f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0040b275 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040b27b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0040b280
    JMP 0x0040b16a                      ; 0040b283
        ;   XREF to: 0040b16a (UNCONDITIONAL_JUMP)  ; LAB_0040b16a
    LEA EAX,[ESP + 0x64]                ; 0040b288
        ;   Label: LAB_0040b288
    PUSH EAX                            ; 0040b28c
    PUSH EBX                            ; 0040b28d
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0040b28e
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0040b293
    TEST EAX,EAX                        ; 0040b296
    JNZ 0x0040b20b                      ; 0040b298
        ;   XREF to: 0040b20b (CONDITIONAL_JUMP)  ; LAB_0040b20b
    JMP 0x0040b22f                      ; 0040b29e
        ;   XREF to: 0040b22f (UNCONDITIONAL_JUMP)  ; LAB_0040b22f
    PUSH EBX                            ; 0040b2a0
        ;   Label: LAB_0040b2a0
    PUSH EBP                            ; 0040b2a1
    MOV EDX,0x5b599a                    ; 0040b2a2 | = "..\\core\\actor.cpp"
    MOV ECX,0x84a                       ; 0040b2a7
    PUSH 0x5b59ac                       ; 0040b2ac | = "IO Error after reading %s \"%s\""
    MOV dword ptr [0x01d71de0],EDX      ; 0040b2b1 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0040b2b7 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040b2bd
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 0040b2c2
    JMP 0x0040b23c                      ; 0040b2c5
        ;   XREF to: 0040b23c (UNCONDITIONAL_JUMP)  ; LAB_0040b23c

