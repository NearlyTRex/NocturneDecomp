; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_model_c_FUN_005011a0(char *filename,int model_size)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int              Stack[0x8]:4   model_size
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
;
; XREF[1]:
;   engine_keyframe.c_loadAndInterpolateKeyframes_FUN_004df770 at 004df7c8
;
; Referenced Globals:
;   undefined4 DAT_005df0cd
;   TerminatedCString s_models_005df0d0
;   TerminatedCString s_Unable_to_open_model_s_005df0d7
;   TerminatedCString s_engine_model_c_005df0f0
;   TerminatedCString s_Out_of_partial_model_mem_005df102
;   TerminatedCString s_engine_model_c_005df120
;   TerminatedCString s_engine_model_c_005df132
;   TerminatedCString s_Model_read_hose_005df144
;   TerminatedCString s_engine_model_c_005df154
;   TerminatedCString s_Bad_model_005df166
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005011a0
        ;   Label: engine_model.c_FUN_005011a0
    PUSH ESI                            ; 005011a1
    PUSH EDI                            ; 005011a2
    PUSH EBP                            ; 005011a3
    SUB ESP,0x50                        ; 005011a4
    MOV EBP,dword ptr [ESP + 0x64]      ; 005011a7
    MOV EDI,dword ptr [ESP + 0x68]      ; 005011ab
    PUSH 0x5df0cd                       ; 005011af | DAT_005df0cd
    PUSH EBP                            ; 005011b4
    PUSH 0x5df0d0                       ; 005011b5 | = "models"
    CALL engine_dosio.cpp_FUN_00460c70  ; 005011ba
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005011bf
    MOV ESI,EAX                         ; 005011c2
    TEST EAX,EAX                        ; 005011c4
    JZ 0x0050126d                       ; 005011c6
        ;   XREF to: 0050126d (CONDITIONAL_JUMP)  ; LAB_0050126d
    LEA EAX,[EDI + 0x4]                 ; 005011cc
        ;   Label: LAB_005011cc
    PUSH EAX                            ; 005011cf
    CALL crt_memory.c_malloc_FUN_005b8580 ; 005011d0
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 005011d5
    MOV EBX,EAX                         ; 005011d8
    TEST EAX,EAX                        ; 005011da
    JNZ 0x00501211                      ; 005011dc
        ;   XREF to: 00501211 (CONDITIONAL_JUMP)  ; LAB_00501211
    PUSH EBP                            ; 005011de
    PUSH 0x5df102                       ; 005011df | = "Out of partial model mem : %s"
    LEA EAX,[ESP + 0x8]                 ; 005011e4
    PUSH EAX                            ; 005011e8
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005011e9
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x2ef                       ; 005011ee
    ADD ESP,0xc                         ; 005011f3
    MOV [0x01d046a4],EAX                ; 005011f6 | DAT_01d046a4
    MOV EAX,ESP                         ; 005011fb
    MOV EBP,0x5df120                    ; 005011fd | = "..\\engine\\model.c"
    PUSH EAX                            ; 00501202
    MOV dword ptr [0x01d046a0],EBP      ; 00501203 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 00501209
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050120e
    PUSH ESI                            ; 00501211
        ;   Label: LAB_00501211
    PUSH EDI                            ; 00501212
    PUSH 0x1                            ; 00501213
    PUSH EBX                            ; 00501215
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00501216
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0050121b
    CMP EAX,EDI                         ; 0050121e
    JZ 0x00501245                       ; 00501220
        ;   XREF to: 00501245 (CONDITIONAL_JUMP)  ; LAB_00501245
    MOV EDX,0x5df132                    ; 00501222 | = "..\\engine\\model.c"
    MOV ECX,0x2f4                       ; 00501227
    PUSH 0x5df144                       ; 0050122c | = "Model read hose"
    MOV dword ptr [0x01d046a0],EDX      ; 00501231 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00501237 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050123d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00501242
    PUSH ESI                            ; 00501245
        ;   Label: LAB_00501245
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00501246
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    XOR EAX,EAX                         ; 0050124b
    MOV AL,byte ptr [EBX]               ; 0050124d
    ADD ESP,0x4                         ; 0050124f
    CMP EAX,0x14                        ; 00501252
    JZ 0x0050125c                       ; 00501255
        ;   XREF to: 0050125c (CONDITIONAL_JUMP)  ; LAB_0050125c
    CMP EAX,0x20                        ; 00501257
    JNZ 0x005012a6                      ; 0050125a
        ;   XREF to: 005012a6 (CONDITIONAL_JUMP)  ; LAB_005012a6
    MOV EAX,EBX                         ; 0050125c
        ;   Label: LAB_0050125c
    MOV dword ptr [EDI + EBX*0x1],0x0   ; 0050125e
    ADD ESP,0x50                        ; 00501265
    POP EBP                             ; 00501268
    POP EDI                             ; 00501269
    POP ESI                             ; 0050126a
    POP EBX                             ; 0050126b
    RET                                 ; 0050126c
    PUSH EBP                            ; 0050126d
        ;   Label: LAB_0050126d
    PUSH 0x5df0d7                       ; 0050126e | = "Unable to open model: %s"
    LEA EAX,[ESP + 0x8]                 ; 00501273
    PUSH EAX                            ; 00501277
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00501278
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EDX,0x5df0f0                    ; 0050127d | = "..\\engine\\model.c"
    ADD ESP,0xc                         ; 00501282
    MOV EAX,ESP                         ; 00501285
    MOV ECX,0x2e4                       ; 00501287
    PUSH EAX                            ; 0050128c
    MOV dword ptr [0x01d046a0],EDX      ; 0050128d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00501293 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00501299
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050129e
    JMP 0x005011cc                      ; 005012a1
        ;   XREF to: 005011cc (UNCONDITIONAL_JUMP)  ; LAB_005011cc
    MOV ESI,0x5df154                    ; 005012a6 | = "..\\engine\\model.c"
        ;   Label: LAB_005012a6
    MOV EBP,0x2f8                       ; 005012ab
    PUSH 0x5df166                       ; 005012b0 | = "Bad model!"
    MOV dword ptr [0x01d046a0],ESI      ; 005012b5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 005012bb | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005012c1
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005012c6
    MOV EAX,EBX                         ; 005012c9
    MOV dword ptr [EDI + EBX*0x1],0x0   ; 005012cb
    ADD ESP,0x50                        ; 005012d2
    POP EBP                             ; 005012d5
    POP EDI                             ; 005012d6
    POP ESI                             ; 005012d7
    POP EBX                             ; 005012d8
    RET                                 ; 005012d9

