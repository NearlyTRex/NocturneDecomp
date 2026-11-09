; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_pod_cpp_FUN_00512fb0(CPodFile *param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined        Stack[-0x8cc]:1  local_8cc
; undefined        Stack[-0x7cc]:1  local_7cc
; undefined1       Stack[-0x7cb]:1  local_7cb
; undefined4       Stack[-0x6c8]:4  local_6c8
; undefined4       Stack[-0x6c0]:4  local_6c0
; undefined        Stack[-0x6b8]:1  local_6b8
; undefined1       Stack[-0x6b7]:1  local_6b7
; undefined        Stack[-0x4b8]:1  local_4b8
; undefined        Stack[-0x4b0]:1  local_4b0
; undefined1       Stack[-0x4af]:1  local_4af
; undefined4       Stack[-0x460]:4  local_460
; undefined4       Stack[-0x45c]:4  local_45c
; undefined4       Stack[-0x454]:4  local_454
; undefined        Stack[-0x450]:1  local_450
; undefined1       Stack[-0x44f]:1  local_44f
; undefined        Stack[-0x400]:1  local_400
; undefined1       Stack[-0x3ff]:1  local_3ff
; undefined4       Stack[-0x3b0]:4  local_3b0
; undefined4       Stack[-0x3a8]:4  local_3a8
; undefined4       Stack[-0x3a4]:4  local_3a4
; undefined        Stack[-0x398]:1  local_398
; undefined        Stack[-0x394]:1  local_394
; undefined1       Stack[-0x393]:1  local_393
; undefined4       Stack[-0x294]:4  local_294
; undefined        Stack[-0x288]:1  local_288
; undefined        Stack[-0x188]:1  local_188
; undefined        Stack[-0x180]:1  local_180
; undefined1       Stack[-0x17f]:1  local_17f
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined        Stack[-0x124]:1  local_124
; undefined1       Stack[-0x123]:1  local_123
; undefined        Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xd3]:1  local_d3
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined        Stack[-0x58]:1  local_58
; undefined1       Stack[-0x57]:1  local_57
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined1       Stack[-0x2f]:1  local_2f
; undefined1       Stack[-0x2e]:1  local_2e
; undefined1       Stack[-0x2d]:1  local_2d
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_pod.cpp_FUN_005143b0 at 005143da
;   engine_pod.cpp_FUN_005144b0 at 00514501
;   engine_pod.cpp_FUN_005149bc at 00514a00
;
; Referenced Globals:
;   TerminatedCString s_File_not_found_005cc4ca
;   TerminatedCString s_Unable_to_open_file_s_005cc4d9
;   undefined4 DAT_005cc4f2
;   undefined4 DAT_005cc4f6
;   TerminatedCString s_I_O_Error_accessing_file_005cc4fb
;   TerminatedCString s_File_is_corrupt_005cc528
;   TerminatedCString s_Out_of_memory_005cc538
;   TerminatedCString s_engine_pod_cpp_005cc546
;   TerminatedCString s_realloc_returns_NULL_shr_005cc558
;   TerminatedCString s_Unknown_error_00603730
;   undefined4 s_Unknown_error_00603730+4
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_stdlib.c__qsort_FUN_005a29e8
;   crt_string.c__stricmp_FUN_005a3260
;   crt_unknown.c_FUN_005a28c0
;   crt_unknown.c_FUN_005a3650
;   engine_dosio.cpp_findFileNormally_FUN_00465730
;   engine_dosio.cpp_FUN_00465660
;   engine_dosio.cpp_FUN_00465e50
;   engine_pod.cpp_CPodFile_cleanup_FUN_00513b90
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;   support_trstream.cpp_FUN_00573f50
;   unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0
;   unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40
;   unkafter_turret.cpp_FUN_00573c00
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00512fb0
        ;   Label: engine_pod.cpp_FUN_00512fb0
    PUSH ESI                            ; 00512fb1
    PUSH EDI                            ; 00512fb2
    PUSH EBP                            ; 00512fb3
    SUB ESP,0x8bc                       ; 00512fb4
    MOV EBX,dword ptr [ESP + 0x8d0]     ; 00512fba
    MOV ECX,0x80                        ; 00512fc1
    LEA EDI,[ESP + 0x214]               ; 00512fc6
    LEA EAX,[ESP + 0x848]               ; 00512fcd
    XOR EDX,EDX                         ; 00512fd4
    MOV ESI,0x603730                    ; 00512fd6 | = "(Unknown error)"
    MOV dword ptr [ESP + 0x8b0],EDX     ; 00512fdb
    PUSH EAX                            ; 00512fe2
    MOVSD.REP ES:EDI,ESI                ; 00512fe3 | = "(Unknown error)" | s_Unknown_error_00603730+4
    CALL unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0 ; 00512fe5
        ;   XREF to: 005738c0 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 00512fea
    PUSH EBX                            ; 00512fed
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_00513b90 ; 00512fee
        ;   XREF to: 00513b90 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_00513b90(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 00512ff3
    MOV ECX,dword ptr [ESP + 0x8d4]     ; 00512ff6
    PUSH ECX                            ; 00512ffd
    PUSH 0x0                            ; 00512ffe
    LEA EAX,[ESP + 0x8]                 ; 00513000
    PUSH EAX                            ; 00513004
    CALL engine_dosio.cpp_FUN_00465660  ; 00513005
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00465660()
    ADD ESP,0xc                         ; 0051300a
    MOV EAX,ESP                         ; 0051300d
    PUSH EAX                            ; 0051300f
    CALL engine_dosio.cpp_findFileNormally_FUN_00465730 ; 00513010
        ;   XREF to: 00465730 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFileNormally_FUN_00465730()
    ADD ESP,0x4                         ; 00513015
    TEST EAX,EAX                        ; 00513018
    JNZ 0x005130a5                      ; 0051301a
        ;   XREF to: 005130a5 (CONDITIONAL_JUMP)  ; LAB_005130a5
    PUSH 0x5cc4ca                       ; 00513020 | = "File not found"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 00513025
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 0051302a
    PUSH EAX                            ; 0051302d
    LEA EAX,[ESP + 0x218]               ; 0051302e
    PUSH EAX                            ; 00513035
    CALL crt_unknown.c_FUN_005a28c0     ; 00513036
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0x8                         ; 0051303b
    LEA EAX,[ESP + 0x848]               ; 0051303e
        ;   Label: LAB_0051303e
    PUSH EAX                            ; 00513045
    CALL unkafter_turret.cpp_FUN_00573db0 ; 00513046
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573db0()
    ADD ESP,0x4                         ; 0051304b
    PUSH EBX                            ; 0051304e
    CALL engine_pod.cpp_CPodFile_cleanup_FUN_00513b90 ; 0051304f
        ;   XREF to: 00513b90 (UNCONDITIONAL_CALL)  ; void engine_pod.cpp_CPodFile_cleanup_FUN_00513b90(CPodFile * this_ptr)
    ADD ESP,0x4                         ; 00513054
    MOV EBP,dword ptr [ESP + 0x8d8]     ; 00513057
    TEST EBP,EBP                        ; 0051305e
    JZ 0x00513085                       ; 00513060
        ;   XREF to: 00513085 (CONDITIONAL_JUMP)  ; LAB_00513085
    LEA ESI,[ESP + 0x214]               ; 00513062
    MOV EDI,EBP                         ; 00513069
    PUSH EDI                            ; 0051306b
    MOV AL,byte ptr [ESI]               ; 0051306c
        ;   Label: LAB_0051306c
    MOV byte ptr [EDI],AL               ; 0051306e
    CMP AL,0x0                          ; 00513070
    JZ 0x00513084                       ; 00513072
        ;   XREF to: 00513084 (CONDITIONAL_JUMP)  ; LAB_00513084
    MOV AL,byte ptr [ESI + 0x1]         ; 00513074
    ADD ESI,0x2                         ; 00513077
    MOV byte ptr [EDI + 0x1],AL         ; 0051307a
    ADD EDI,0x2                         ; 0051307d
    CMP AL,0x0                          ; 00513080
    JNZ 0x0051306c                      ; 00513082
        ;   XREF to: 0051306c (CONDITIONAL_JUMP)  ; LAB_0051306c
    POP EDI                             ; 00513084
        ;   Label: LAB_00513084
    XOR ESI,ESI                         ; 00513085
        ;   Label: LAB_00513085
    PUSH ESI                            ; 00513087
    LEA EAX,[ESP + 0x84c]               ; 00513088
    PUSH EAX                            ; 0051308f
    CALL unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40 ; 00513090
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; CInStreamFile * unkafter_turret.cpp_CInStreamFile_dtor_FUN_00573a40(CInStreamFile * this_ptr, uint flags)
        ;   Label: LAB_00513090
    ADD ESP,0x8                         ; 00513095
    MOV EAX,ESI                         ; 00513098
    ADD ESP,0x8bc                       ; 0051309a
    POP EBP                             ; 005130a0
    POP EDI                             ; 005130a1
    POP ESI                             ; 005130a2
    POP EBX                             ; 005130a3
    RET                                 ; 005130a4
    LEA EBP,[EBX + 0x4]                 ; 005130a5
        ;   Label: LAB_005130a5
    LEA ESI,[ESP + 0x100]               ; 005130a8
    MOV EDI,EBP                         ; 005130af
    PUSH EDI                            ; 005130b1
    MOV AL,byte ptr [ESI]               ; 005130b2
        ;   Label: LAB_005130b2
    MOV byte ptr [EDI],AL               ; 005130b4
    CMP AL,0x0                          ; 005130b6
    JZ 0x005130ca                       ; 005130b8
        ;   XREF to: 005130ca (CONDITIONAL_JUMP)  ; LAB_005130ca
    MOV AL,byte ptr [ESI + 0x1]         ; 005130ba
    ADD ESI,0x2                         ; 005130bd
    MOV byte ptr [EDI + 0x1],AL         ; 005130c0
    ADD EDI,0x2                         ; 005130c3
    CMP AL,0x0                          ; 005130c6
    JNZ 0x005130b2                      ; 005130c8
        ;   XREF to: 005130b2 (CONDITIONAL_JUMP)  ; LAB_005130b2
    POP EDI                             ; 005130ca
        ;   Label: LAB_005130ca
    PUSH 0x1                            ; 005130cb
    MOV EAX,dword ptr [ESP + 0x210]     ; 005130cd
    PUSH EBP                            ; 005130d4
    MOV dword ptr [EBX + 0x104],EAX     ; 005130d5
    LEA EAX,[ESP + 0x850]               ; 005130db
    PUSH EAX                            ; 005130e2
    CALL support_trstream.cpp_FUN_00573f50 ; 005130e3
        ;   XREF to: 00573f50 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573f50()
    ADD ESP,0xc                         ; 005130e8
    TEST EAX,EAX                        ; 005130eb
    JZ 0x005131a0                       ; 005130ed
        ;   XREF to: 005131a0 (CONDITIONAL_JUMP)  ; LAB_005131a0
    LEA EAX,[ESP + 0x644]               ; 005130f3
    PUSH EAX                            ; 005130fa
    PUSH 0x0                            ; 005130fb
    PUSH 0x0                            ; 005130fd
    PUSH 0x0                            ; 005130ff
    MOV ESI,dword ptr [ESP + 0x8e4]     ; 00513101
    PUSH ESI                            ; 00513108
    CALL engine_dosio.cpp_FUN_00465e50  ; 00513109
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0051310e
    PUSH 0x5cc4f2                       ; 00513111 | DAT_005cc4f2
    LEA EAX,[ESP + 0x648]               ; 00513116
    PUSH EAX                            ; 0051311d
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0051311e
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00513123
    TEST EAX,EAX                        ; 00513126
    JZ 0x00513147                       ; 00513128
        ;   XREF to: 00513147 (CONDITIONAL_JUMP)  ; LAB_00513147
    PUSH 0x5cc4f6                       ; 0051312a | DAT_005cc4f6
    LEA EAX,[ESP + 0x648]               ; 0051312f
    PUSH EAX                            ; 00513136
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00513137
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051313c
    TEST EAX,EAX                        ; 0051313f
    JNZ 0x005134c8                      ; 00513141
        ;   XREF to: 005134c8 (CONDITIONAL_JUMP)  ; LAB_005134c8
    PUSH 0x110                          ; 00513147
        ;   Label: LAB_00513147
    LEA EAX,[ESP + 0x538]               ; 0051314c
    PUSH EAX                            ; 00513153
    LEA EAX,[ESP + 0x850]               ; 00513154
    PUSH EAX                            ; 0051315b
    CALL unkafter_turret.cpp_FUN_00573c00 ; 0051315c
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 00513161
    CMP EAX,0x110                       ; 00513164
    JZ 0x005131c4                       ; 00513169
        ;   XREF to: 005131c4 (CONDITIONAL_JUMP)  ; LAB_005131c4
    PUSH 0x5cc4fb                       ; 0051316b | = "I/O Error accessing file, or file is ..."
        ;   Label: LAB_0051316b
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 00513170
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 00513175
    LEA EDI,[ESP + 0x214]               ; 00513178
    MOV ESI,EAX                         ; 0051317f
    PUSH EDI                            ; 00513181
    MOV AL,byte ptr [ESI]               ; 00513182
        ;   Label: LAB_00513182
    MOV byte ptr [EDI],AL               ; 00513184
    CMP AL,0x0                          ; 00513186
    JZ 0x0051319a                       ; 00513188
        ;   XREF to: 0051319a (CONDITIONAL_JUMP)  ; LAB_0051319a
    MOV AL,byte ptr [ESI + 0x1]         ; 0051318a
    ADD ESI,0x2                         ; 0051318d
    MOV byte ptr [EDI + 0x1],AL         ; 00513190
    ADD EDI,0x2                         ; 00513193
    CMP AL,0x0                          ; 00513196
    JNZ 0x00513182                      ; 00513198
        ;   XREF to: 00513182 (CONDITIONAL_JUMP)  ; LAB_00513182
    POP EDI                             ; 0051319a
        ;   Label: LAB_0051319a
    JMP 0x0051303e                      ; 0051319b
        ;   XREF to: 0051303e (UNCONDITIONAL_JUMP)  ; LAB_0051303e
    PUSH EBP                            ; 005131a0
        ;   Label: LAB_005131a0
    PUSH 0x5cc4d9                       ; 005131a1 | = "Unable to open file '%s'"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 005131a6
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 005131ab
    PUSH EAX                            ; 005131ae
    LEA EAX,[ESP + 0x21c]               ; 005131af
    PUSH EAX                            ; 005131b6
    CALL crt_unknown.c_FUN_005a28c0     ; 005131b7
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 005131bc
    JMP 0x0051303e                      ; 005131bf
        ;   XREF to: 0051303e (UNCONDITIONAL_JUMP)  ; LAB_0051303e
    MOV EAX,dword ptr [ESP + 0x638]     ; 005131c4
        ;   Label: LAB_005131c4
    LEA ESI,[ESP + 0x538]               ; 005131cb
    LEA EDI,[EBX + 0x108]               ; 005131d2
    MOV dword ptr [EBX + 0x410],EAX     ; 005131d8
    PUSH EDI                            ; 005131de
    MOV AL,byte ptr [ESI]               ; 005131df
        ;   Label: LAB_005131df
    MOV byte ptr [EDI],AL               ; 005131e1
    CMP AL,0x0                          ; 005131e3
    JZ 0x005131f7                       ; 005131e5
        ;   XREF to: 005131f7 (CONDITIONAL_JUMP)  ; LAB_005131f7
    MOV AL,byte ptr [ESI + 0x1]         ; 005131e7
    ADD ESI,0x2                         ; 005131ea
    MOV byte ptr [EDI + 0x1],AL         ; 005131ed
    ADD EDI,0x2                         ; 005131f0
    CMP AL,0x0                          ; 005131f3
    JNZ 0x005131df                      ; 005131f5
        ;   XREF to: 005131df (CONDITIONAL_JUMP)  ; LAB_005131df
    POP EDI                             ; 005131f7
        ;   Label: LAB_005131f7
    MOV ESI,dword ptr [EBX + 0x410]     ; 005131f8
    TEST ESI,ESI                        ; 005131fe
    JL 0x0051345e                       ; 00513200
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    CMP ESI,0x98967f                    ; 00513206
    JG 0x0051345e                       ; 0051320c
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    LEA EAX,[ESI*0x4 + 0x0]             ; 00513212
    ADD EAX,ESI                         ; 00513219
    SHL EAX,0x2                         ; 0051321b
    PUSH EAX                            ; 0051321e
    CALL crt_unknown.c_FUN_005a3650     ; 0051321f
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00513224
    MOV dword ptr [EBX + 0x414],EAX     ; 00513227
    TEST EAX,EAX                        ; 0051322d
    JZ 0x00513493                       ; 0051322f
        ;   XREF to: 00513493 (CONDITIONAL_JUMP)  ; LAB_00513493
    XOR EBP,EBP                         ; 00513235
    MOV ECX,dword ptr [EBX + 0x410]     ; 00513237
    MOV dword ptr [ESP + 0x8a4],EBP     ; 0051323d
    MOV dword ptr [ESP + 0x8ac],EBP     ; 00513244
    TEST ECX,ECX                        ; 0051324b
    JLE 0x005133a9                      ; 0051324d
        ;   XREF to: 005133a9 (CONDITIONAL_JUMP)  ; LAB_005133a9
    MOV dword ptr [ESP + 0x8a0],EBP     ; 00513253
    PUSH 0x50                           ; 0051325a
        ;   Label: LAB_0051325a
    LEA EAX,[ESP + 0x7fc]               ; 0051325c
    PUSH EAX                            ; 00513263
    LEA EAX,[ESP + 0x850]               ; 00513264
    PUSH EAX                            ; 0051326b
    CALL unkafter_turret.cpp_FUN_00573c00 ; 0051326c
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 00513271
    CMP EAX,0x50                        ; 00513274
    JNZ 0x0051316b                      ; 00513277
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 0051327d
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513284
    ADD EAX,EDX                         ; 0051328a
    LEA EDI,[ESP + 0x7f8]               ; 0051328c
    MOV dword ptr [EAX],EBP             ; 00513293
    SUB ECX,ECX                         ; 00513295
    DEC ECX                             ; 00513297
    XOR EAX,EAX                         ; 00513298
    SCASB.REPNE ES:EDI                  ; 0051329a
    NOT ECX                             ; 0051329c
    DEC ECX                             ; 0051329e
    INC ECX                             ; 0051329f
    ADD EBP,ECX                         ; 005132a0
    CMP EBP,dword ptr [ESP + 0x8a4]     ; 005132a2
    JLE 0x005132e5                      ; 005132a9
        ;   XREF to: 005132e5 (CONDITIONAL_JUMP)  ; LAB_005132e5
    MOV ESI,dword ptr [ESP + 0x8ac]     ; 005132ab
    MOV EAX,dword ptr [EBX + 0x410]     ; 005132b2
    SUB EAX,ESI                         ; 005132b8
    IMUL EAX,EAX,0x30                   ; 005132ba
    LEA EDX,[EAX + EBP*0x1]             ; 005132bd
    PUSH EDX                            ; 005132c0
    MOV EAX,dword ptr [EBX + 0x418]     ; 005132c1
    PUSH EAX                            ; 005132c7
    MOV dword ptr [ESP + 0x8ac],EDX     ; 005132c8
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 005132cf
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005132d4
    TEST EAX,EAX                        ; 005132d7
    JZ 0x00513493                       ; 005132d9
        ;   XREF to: 00513493 (CONDITIONAL_JUMP)  ; LAB_00513493
    MOV dword ptr [EBX + 0x418],EAX     ; 005132df
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 005132e5
        ;   Label: LAB_005132e5
    MOV EAX,dword ptr [EBX + 0x414]     ; 005132ec
    ADD EAX,EDX                         ; 005132f2
    MOV EDI,dword ptr [EBX + 0x418]     ; 005132f4
    MOV ECX,dword ptr [EAX]             ; 005132fa
    LEA ESI,[ESP + 0x7f8]               ; 005132fc
    ADD EDI,ECX                         ; 00513303
    PUSH EDI                            ; 00513305
    MOV AL,byte ptr [ESI]               ; 00513306
        ;   Label: LAB_00513306
    MOV byte ptr [EDI],AL               ; 00513308
    CMP AL,0x0                          ; 0051330a
    JZ 0x0051331e                       ; 0051330c
        ;   XREF to: 0051331e (CONDITIONAL_JUMP)  ; LAB_0051331e
    MOV AL,byte ptr [ESI + 0x1]         ; 0051330e
    ADD ESI,0x2                         ; 00513311
    MOV byte ptr [EDI + 0x1],AL         ; 00513314
    ADD EDI,0x2                         ; 00513317
    CMP AL,0x0                          ; 0051331a
    JNZ 0x00513306                      ; 0051331c
        ;   XREF to: 00513306 (CONDITIONAL_JUMP)  ; LAB_00513306
    POP EDI                             ; 0051331e
        ;   Label: LAB_0051331e
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051331f
    ADD EDX,EAX                         ; 00513325
    MOV EAX,dword ptr [ESP + 0x838]     ; 00513327
    MOV dword ptr [EDX + 0x4],EAX       ; 0051332e
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 00513331
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513338
    ADD EDX,EAX                         ; 0051333e
    MOV EAX,dword ptr [ESP + 0x83c]     ; 00513340
    MOV dword ptr [EDX + 0x8],EAX       ; 00513347
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 0051334a
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513351
    MOV ESI,dword ptr [ESP + 0x8a0]     ; 00513357
    ADD EDX,EAX                         ; 0051335e
    MOV EAX,dword ptr [ESP + 0x844]     ; 00513360
    MOV EDI,dword ptr [ESP + 0x8ac]     ; 00513367
    MOV dword ptr [EDX + 0x10],EAX      ; 0051336e
    MOV EDX,dword ptr [ESP + 0x8a0]     ; 00513371
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513378
    ADD ESI,0x14                        ; 0051337e
    ADD EDX,EAX                         ; 00513381
    MOV EAX,dword ptr [EBX + 0x104]     ; 00513383
    INC EDI                             ; 00513389
    MOV dword ptr [EDX + 0xc],EAX       ; 0051338a
    MOV dword ptr [ESP + 0x8ac],EDI     ; 0051338d
    MOV EDX,dword ptr [EBX + 0x410]     ; 00513394
    MOV dword ptr [ESP + 0x8a0],ESI     ; 0051339a
    CMP EDI,EDX                         ; 005133a1
    JL 0x0051325a                       ; 005133a3
        ;   XREF to: 0051325a (CONDITIONAL_JUMP)  ; LAB_0051325a
    CMP EBP,dword ptr [ESP + 0x8a4]     ; 005133a9
        ;   Label: LAB_005133a9
    JGE 0x005133bd                      ; 005133b0
        ;   XREF to: 005133bd (CONDITIONAL_JUMP)  ; LAB_005133bd
        ;   Label: LAB_005133b0
    MOV dword ptr [ESP + 0x8b0],0x1     ; 005133b2
    LEA EAX,[ESP + 0x848]               ; 005133bd
        ;   Label: LAB_005133bd
    PUSH EAX                            ; 005133c4
    CALL unkafter_turret.cpp_FUN_00573d60 ; 005133c5
        ;   XREF to: 00573d60 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573d60()
    ADD ESP,0x4                         ; 005133ca
    TEST EAX,EAX                        ; 005133cd
    JZ 0x0051316b                       ; 005133cf
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    LEA EAX,[ESP + 0x848]               ; 005133d5
    PUSH EAX                            ; 005133dc
    CALL unkafter_turret.cpp_FUN_00573db0 ; 005133dd
        ;   XREF to: 00573db0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573db0()
    ADD ESP,0x4                         ; 005133e2
    CMP dword ptr [ESP + 0x8b0],0x0     ; 005133e5
    JNZ 0x00513b45                      ; 005133ed
        ;   XREF to: 00513b45 (CONDITIONAL_JUMP)  ; LAB_00513b45
    MOV ECX,dword ptr [EBX + 0x410]     ; 005133f3
        ;   Label: LAB_005133f3
    XOR EDX,EDX                         ; 005133f9
    TEST ECX,ECX                        ; 005133fb
    JLE 0x0051342d                      ; 005133fd
        ;   XREF to: 0051342d (CONDITIONAL_JUMP)  ; LAB_0051342d
    XOR ECX,ECX                         ; 005133ff
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513401
        ;   Label: LAB_00513401
    ADD EAX,ECX                         ; 00513407
    MOV ESI,dword ptr [EAX]             ; 00513409
    TEST ESI,ESI                        ; 0051340b
    JL 0x0051345e                       ; 0051340d
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    CMP EBP,ESI                         ; 0051340f
    JLE 0x0051345e                      ; 00513411
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    MOV ESI,dword ptr [EBX + 0x418]     ; 00513413
    MOV EDI,dword ptr [EAX]             ; 00513419
    ADD ESI,EDI                         ; 0051341b
    MOV dword ptr [EAX],ESI             ; 0051341d
    INC EDX                             ; 0051341f
    MOV EAX,dword ptr [EBX + 0x410]     ; 00513420
    ADD ECX,0x14                        ; 00513426
    CMP EDX,EAX                         ; 00513429
    JL 0x00513401                       ; 0051342b
        ;   XREF to: 00513401 (CONDITIONAL_JUMP)  ; LAB_00513401
    PUSH 0x512f90                       ; 0051342d
        ;   Label: LAB_0051342d
    PUSH 0x14                           ; 00513432
    MOV EDX,dword ptr [EBX + 0x410]     ; 00513434
    PUSH EDX                            ; 0051343a
    MOV ECX,dword ptr [EBX + 0x414]     ; 0051343b
    PUSH ECX                            ; 00513441
    CALL crt_stdlib.c__qsort_FUN_005a29e8 ; 00513442
        ;   XREF to: 005a29e8 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__qsort_FUN_005a29e8()
    ADD ESP,0x10                        ; 00513447
    PUSH 0x0                            ; 0051344a
    LEA EAX,[ESP + 0x84c]               ; 0051344c
    PUSH EAX                            ; 00513453
    MOV ESI,0x1                         ; 00513454
    JMP 0x00513090                      ; 00513459
        ;   XREF to: 00513090 (UNCONDITIONAL_JUMP)  ; LAB_00513090
    PUSH 0x5cc528                       ; 0051345e | = "File is corrupt"
        ;   Label: LAB_0051345e
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 00513463
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 00513468
    LEA EDI,[ESP + 0x214]               ; 0051346b
    MOV ESI,EAX                         ; 00513472
    PUSH EDI                            ; 00513474
    MOV AL,byte ptr [ESI]               ; 00513475
        ;   Label: LAB_00513475
    MOV byte ptr [EDI],AL               ; 00513477
    CMP AL,0x0                          ; 00513479
    JZ 0x0051348d                       ; 0051347b
        ;   XREF to: 0051348d (CONDITIONAL_JUMP)  ; LAB_0051348d
    MOV AL,byte ptr [ESI + 0x1]         ; 0051347d
    ADD ESI,0x2                         ; 00513480
    MOV byte ptr [EDI + 0x1],AL         ; 00513483
    ADD EDI,0x2                         ; 00513486
    CMP AL,0x0                          ; 00513489
    JNZ 0x00513475                      ; 0051348b
        ;   XREF to: 00513475 (CONDITIONAL_JUMP)  ; LAB_00513475
    POP EDI                             ; 0051348d
        ;   Label: LAB_0051348d
    JMP 0x0051303e                      ; 0051348e
        ;   XREF to: 0051303e (UNCONDITIONAL_JUMP)  ; LAB_0051303e
    PUSH 0x5cc538                       ; 00513493 | = "Out of memory"
        ;   Label: LAB_00513493
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 00513498
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 0051349d
    LEA EDI,[ESP + 0x214]               ; 005134a0
    MOV ESI,EAX                         ; 005134a7
    PUSH EDI                            ; 005134a9
    MOV AL,byte ptr [ESI]               ; 005134aa
        ;   Label: LAB_005134aa
    MOV byte ptr [EDI],AL               ; 005134ac
    CMP AL,0x0                          ; 005134ae
    JZ 0x005134c2                       ; 005134b0
        ;   XREF to: 005134c2 (CONDITIONAL_JUMP)  ; LAB_005134c2
    MOV AL,byte ptr [ESI + 0x1]         ; 005134b2
    ADD ESI,0x2                         ; 005134b5
    MOV byte ptr [EDI + 0x1],AL         ; 005134b8
    ADD EDI,0x2                         ; 005134bb
    CMP AL,0x0                          ; 005134be
    JNZ 0x005134aa                      ; 005134c0
        ;   XREF to: 005134aa (CONDITIONAL_JUMP)  ; LAB_005134aa
    POP EDI                             ; 005134c2
        ;   Label: LAB_005134c2
    JMP 0x0051303e                      ; 005134c3
        ;   XREF to: 0051303e (UNCONDITIONAL_JUMP)  ; LAB_0051303e
    PUSH 0x4                            ; 005134c8
        ;   Label: LAB_005134c8
    LEA EAX,[ESP + 0x8a0]               ; 005134ca
    PUSH EAX                            ; 005134d1
    LEA EAX,[ESP + 0x850]               ; 005134d2
    PUSH EAX                            ; 005134d9
    CALL unkafter_turret.cpp_FUN_00573c00 ; 005134da
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 005134df
    CMP EAX,0x4                         ; 005134e2
    JNZ 0x0051316b                      ; 005134e5
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    PUSH 0x0                            ; 005134eb
    PUSH 0x0                            ; 005134ed
    LEA EAX,[ESP + 0x850]               ; 005134ef
    PUSH EAX                            ; 005134f6
    CALL unkafter_turret.cpp_FUN_00573cf0 ; 005134f7
        ;   XREF to: 00573cf0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573cf0()
    ADD ESP,0xc                         ; 005134fc
    CMP byte ptr [ESP + 0x89c],0x50     ; 005134ff
    JNZ 0x0051352b                      ; 00513507
        ;   XREF to: 0051352b (CONDITIONAL_JUMP)  ; LAB_0051352b
    CMP byte ptr [ESP + 0x89d],0x4f     ; 00513509
    JNZ 0x0051352b                      ; 00513511
        ;   XREF to: 0051352b (CONDITIONAL_JUMP)  ; LAB_0051352b
    CMP byte ptr [ESP + 0x89e],0x44     ; 00513513
    JNZ 0x0051352b                      ; 0051351b
        ;   XREF to: 0051352b (CONDITIONAL_JUMP)  ; LAB_0051352b
    CMP byte ptr [ESP + 0x89f],0x33     ; 0051351d
    JZ 0x005136e6                       ; 00513525
        ;   XREF to: 005136e6 (CONDITIONAL_JUMP)  ; LAB_005136e6
    CMP byte ptr [ESP + 0x89c],0x50     ; 0051352b
        ;   Label: LAB_0051352b
    JNZ 0x005138ec                      ; 00513533
        ;   XREF to: 005138ec (CONDITIONAL_JUMP)  ; LAB_005138ec
    CMP byte ptr [ESP + 0x89d],0x4f     ; 00513539
    JNZ 0x005138ec                      ; 00513541
        ;   XREF to: 005138ec (CONDITIONAL_JUMP)  ; LAB_005138ec
    CMP byte ptr [ESP + 0x89e],0x44     ; 00513547
    JNZ 0x005138ec                      ; 0051354f
        ;   XREF to: 005138ec (CONDITIONAL_JUMP)  ; LAB_005138ec
    CMP byte ptr [ESP + 0x89f],0x32     ; 00513555
    JNZ 0x005138ec                      ; 0051355d
        ;   XREF to: 005138ec (CONDITIONAL_JUMP)  ; LAB_005138ec
    PUSH 0x60                           ; 00513563
    LEA EAX,[ESP + 0x748]               ; 00513565
    PUSH EAX                            ; 0051356c
    LEA EAX,[ESP + 0x850]               ; 0051356d
    PUSH EAX                            ; 00513574
    CALL unkafter_turret.cpp_FUN_00573c00 ; 00513575
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 0051357a
    CMP EAX,0x60                        ; 0051357d
    JNZ 0x0051316b                      ; 00513580
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    LEA ESI,[ESP + 0x74c]               ; 00513586
    LEA EDI,[EBX + 0x108]               ; 0051358d
    MOV dword ptr [EBX],0xc8            ; 00513593
    PUSH EDI                            ; 00513599
    MOV AL,byte ptr [ESI]               ; 0051359a
        ;   Label: LAB_0051359a
    MOV byte ptr [EDI],AL               ; 0051359c
    CMP AL,0x0                          ; 0051359e
    JZ 0x005135b2                       ; 005135a0
        ;   XREF to: 005135b2 (CONDITIONAL_JUMP)  ; LAB_005135b2
    MOV AL,byte ptr [ESI + 0x1]         ; 005135a2
    ADD ESI,0x2                         ; 005135a5
    MOV byte ptr [EDI + 0x1],AL         ; 005135a8
    ADD EDI,0x2                         ; 005135ab
    CMP AL,0x0                          ; 005135ae
    JNZ 0x0051359a                      ; 005135b0
        ;   XREF to: 0051359a (CONDITIONAL_JUMP)  ; LAB_0051359a
    POP EDI                             ; 005135b2
        ;   Label: LAB_005135b2
    MOV EAX,dword ptr [ESP + 0x79c]     ; 005135b3
    MOV dword ptr [EBX + 0x410],EAX     ; 005135ba
    MOV EAX,dword ptr [ESP + 0x7a0]     ; 005135c0
    MOV EDI,dword ptr [EBX + 0x410]     ; 005135c7
    MOV dword ptr [EBX + 0x41c],EAX     ; 005135cd
    TEST EDI,EDI                        ; 005135d3
    JL 0x0051345e                       ; 005135d5
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    CMP EDI,0x98967f                    ; 005135db
    JG 0x0051345e                       ; 005135e1
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    LEA EAX,[EDI*0x4 + 0x0]             ; 005135e7
    ADD EAX,EDI                         ; 005135ee
    SHL EAX,0x2                         ; 005135f0
    PUSH EAX                            ; 005135f3
    CALL crt_unknown.c_FUN_005a3650     ; 005135f4
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005135f9
    MOV dword ptr [EBX + 0x414],EAX     ; 005135fc
    TEST EAX,EAX                        ; 00513602
    JZ 0x00513493                       ; 00513604
        ;   XREF to: 00513493 (CONDITIONAL_JUMP)  ; LAB_00513493
    MOV EDX,dword ptr [EBX + 0x410]     ; 0051360a
    LEA ESI,[EDX*0x4 + 0x0]             ; 00513610
    ADD ESI,EDX                         ; 00513617
    SHL ESI,0x2                         ; 00513619
    PUSH ESI                            ; 0051361c
    PUSH EAX                            ; 0051361d
    LEA EAX,[ESP + 0x850]               ; 0051361e
    PUSH EAX                            ; 00513625
    CALL unkafter_turret.cpp_FUN_00573c00 ; 00513626
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 0051362b
    CMP EAX,ESI                         ; 0051362e
    JNZ 0x0051316b                      ; 00513630
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    MOV ECX,dword ptr [EBX + 0x410]     ; 00513636
    XOR EAX,ESI                         ; 0051363c
    TEST ECX,ECX                        ; 0051363e
    JLE 0x00513650                      ; 00513640
        ;   XREF to: 00513650 (CONDITIONAL_JUMP)  ; LAB_00513650
    INC EAX                             ; 00513642
        ;   Label: LAB_00513642
    CMP EAX,dword ptr [EBX + 0x410]     ; 00513643
    JL 0x00513642                       ; 00513649
        ;   XREF to: 00513642 (CONDITIONAL_JUMP)  ; LAB_00513642
    LEA EAX,[EAX]                       ; 0051364b
    MOV ECX,ECX                         ; 0051364e
    MOV EDX,dword ptr [EBX + 0x410]     ; 00513650
        ;   Label: LAB_00513650
    MOV EBP,dword ptr [EBX + 0x414]     ; 00513656
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051365c
    MOV EBP,dword ptr [EBP + 0x8]       ; 00513663
    ADD EAX,EDX                         ; 00513666
    SUB EBP,0x60                        ; 00513668
    SHL EAX,0x2                         ; 0051366b
    SUB EBP,EAX                         ; 0051366e
    CMP EBP,EDX                         ; 00513670
    JL 0x0051345e                       ; 00513672
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    MOV EAX,EDX                         ; 00513678
    SHL EAX,0x8                         ; 0051367a
    CMP EBP,EAX                         ; 0051367d
    JG 0x0051345e                       ; 0051367f
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    PUSH EBP                            ; 00513685
    CALL crt_unknown.c_FUN_005a3650     ; 00513686
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0051368b
    MOV dword ptr [EBX + 0x418],EAX     ; 0051368e
    TEST EAX,EAX                        ; 00513694
    JZ 0x00513493                       ; 00513696
        ;   XREF to: 00513493 (CONDITIONAL_JUMP)  ; LAB_00513493
    PUSH EBP                            ; 0051369c
    PUSH EAX                            ; 0051369d
    LEA EAX,[ESP + 0x850]               ; 0051369e
    PUSH EAX                            ; 005136a5
    CALL unkafter_turret.cpp_FUN_00573c00 ; 005136a6
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 005136ab
    CMP EAX,EBP                         ; 005136ae
    JNZ 0x0051316b                      ; 005136b0
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    MOV EAX,dword ptr [EBX + 0x410]     ; 005136b6
    LEA EDX,[EAX + -0x1]                ; 005136bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 005136bf
    ADD EAX,EDX                         ; 005136c6
    SHL EAX,0x2                         ; 005136c8
    MOV EDX,dword ptr [EBX + 0x414]     ; 005136cb
    ADD EDX,EAX                         ; 005136d1
    MOV EAX,dword ptr [EDX + 0x8]       ; 005136d3
    MOV ECX,dword ptr [EDX + 0x4]       ; 005136d6
    ADD EAX,ECX                         ; 005136d9
    MOV dword ptr [EBX + 0x420],EAX     ; 005136db
    JMP 0x005133bd                      ; 005136e1
        ;   XREF to: 005133bd (UNCONDITIONAL_JUMP)  ; LAB_005133bd
    PUSH 0x120                          ; 005136e6
        ;   Label: LAB_005136e6
    LEA EAX,[ESP + 0x418]               ; 005136eb
    PUSH EAX                            ; 005136f2
    LEA EAX,[ESP + 0x850]               ; 005136f3
    PUSH EAX                            ; 005136fa
    CALL unkafter_turret.cpp_FUN_00573c00 ; 005136fb
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 00513700
    CMP EAX,0x120                       ; 00513703
    JNZ 0x0051316b                      ; 00513708
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    LEA ESI,[ESP + 0x41c]               ; 0051370e
    LEA EDI,[EBX + 0x108]               ; 00513715
    MOV dword ptr [EBX],0x12c           ; 0051371b
    PUSH EDI                            ; 00513721
    MOV AL,byte ptr [ESI]               ; 00513722
        ;   Label: LAB_00513722
    MOV byte ptr [EDI],AL               ; 00513724
    CMP AL,0x0                          ; 00513726
    JZ 0x0051373a                       ; 00513728
        ;   XREF to: 0051373a (CONDITIONAL_JUMP)  ; LAB_0051373a
    MOV AL,byte ptr [ESI + 0x1]         ; 0051372a
    ADD ESI,0x2                         ; 0051372d
    MOV byte ptr [EDI + 0x1],AL         ; 00513730
    ADD EDI,0x2                         ; 00513733
    CMP AL,0x0                          ; 00513736
    JNZ 0x00513722                      ; 00513738
        ;   XREF to: 00513722 (CONDITIONAL_JUMP)  ; LAB_00513722
    POP EDI                             ; 0051373a
        ;   Label: LAB_0051373a
    LEA ESI,[ESP + 0x47c]               ; 0051373b
    LEA EDI,[EBX + 0x208]               ; 00513742
    PUSH EDI                            ; 00513748
    MOV AL,byte ptr [ESI]               ; 00513749
        ;   Label: LAB_00513749
    MOV byte ptr [EDI],AL               ; 0051374b
    CMP AL,0x0                          ; 0051374d
    JZ 0x00513761                       ; 0051374f
        ;   XREF to: 00513761 (CONDITIONAL_JUMP)  ; LAB_00513761
    MOV AL,byte ptr [ESI + 0x1]         ; 00513751
    ADD ESI,0x2                         ; 00513754
    MOV byte ptr [EDI + 0x1],AL         ; 00513757
    ADD EDI,0x2                         ; 0051375a
    CMP AL,0x0                          ; 0051375d
    JNZ 0x00513749                      ; 0051375f
        ;   XREF to: 00513749 (CONDITIONAL_JUMP)  ; LAB_00513749
    POP EDI                             ; 00513761
        ;   Label: LAB_00513761
    LEA ESI,[ESP + 0x4cc]               ; 00513762
    LEA EDI,[EBX + 0x308]               ; 00513769
    PUSH EDI                            ; 0051376f
    MOV AL,byte ptr [ESI]               ; 00513770
        ;   Label: LAB_00513770
    MOV byte ptr [EDI],AL               ; 00513772
    CMP AL,0x0                          ; 00513774
    JZ 0x00513788                       ; 00513776
        ;   XREF to: 00513788 (CONDITIONAL_JUMP)  ; LAB_00513788
    MOV AL,byte ptr [ESI + 0x1]         ; 00513778
    ADD ESI,0x2                         ; 0051377b
    MOV byte ptr [EDI + 0x1],AL         ; 0051377e
    ADD EDI,0x2                         ; 00513781
    CMP AL,0x0                          ; 00513784
    JNZ 0x00513770                      ; 00513786
        ;   XREF to: 00513770 (CONDITIONAL_JUMP)  ; LAB_00513770
    POP EDI                             ; 00513788
        ;   Label: LAB_00513788
    MOV EAX,dword ptr [ESP + 0x46c]     ; 00513789
    MOV dword ptr [EBX + 0x410],EAX     ; 00513790
    MOV EAX,dword ptr [ESP + 0x470]     ; 00513796
    MOV dword ptr [EBX + 0x41c],EAX     ; 0051379d
    MOV EAX,dword ptr [ESP + 0x528]     ; 005137a3
    MOV dword ptr [EBX + 0x424],EAX     ; 005137aa
    MOV EAX,dword ptr [ESP + 0x478]     ; 005137b0
    MOV ESI,dword ptr [EBX + 0x410]     ; 005137b7
    MOV dword ptr [EBX + 0x408],EAX     ; 005137bd
    TEST ESI,ESI                        ; 005137c3
    JL 0x0051345e                       ; 005137c5
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    CMP ESI,0x98967f                    ; 005137cb
    JG 0x0051345e                       ; 005137d1
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    LEA EAX,[ESI*0x4 + 0x0]             ; 005137d7
    ADD EAX,ESI                         ; 005137de
    SHL EAX,0x2                         ; 005137e0
    PUSH EAX                            ; 005137e3
    CALL crt_unknown.c_FUN_005a3650     ; 005137e4
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 005137e9
    MOV dword ptr [EBX + 0x414],EAX     ; 005137ec
    TEST EAX,EAX                        ; 005137f2
    JZ 0x00513493                       ; 005137f4
        ;   XREF to: 00513493 (CONDITIONAL_JUMP)  ; LAB_00513493
    PUSH 0x0                            ; 005137fa
    MOV EAX,dword ptr [ESP + 0x520]     ; 005137fc
    PUSH EAX                            ; 00513803
    LEA EAX,[ESP + 0x850]               ; 00513804
    PUSH EAX                            ; 0051380b
    CALL unkafter_turret.cpp_FUN_00573cf0 ; 0051380c
        ;   XREF to: 00573cf0 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573cf0()
    MOV EDX,dword ptr [EBX + 0x410]     ; 00513811
    LEA ESI,[EDX*0x4 + 0x0]             ; 00513817
    ADD ESI,EDX                         ; 0051381e
    ADD ESP,0xc                         ; 00513820
    SHL ESI,0x2                         ; 00513823
    PUSH ESI                            ; 00513826
    MOV EDX,dword ptr [EBX + 0x414]     ; 00513827
    PUSH EDX                            ; 0051382d
    LEA EAX,[ESP + 0x850]               ; 0051382e
    PUSH EAX                            ; 00513835
    CALL unkafter_turret.cpp_FUN_00573c00 ; 00513836
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 0051383b
    CMP EAX,ESI                         ; 0051383e
    JNZ 0x0051316b                      ; 00513840
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    MOV ECX,dword ptr [EBX + 0x410]     ; 00513846
    XOR EAX,ESI                         ; 0051384c
    TEST ECX,ECX                        ; 0051384e
    JLE 0x00513860                      ; 00513850
        ;   XREF to: 00513860 (CONDITIONAL_JUMP)  ; LAB_00513860
    INC EAX                             ; 00513852
        ;   Label: LAB_00513852
    CMP EAX,dword ptr [EBX + 0x410]     ; 00513853
    JL 0x00513852                       ; 00513859
        ;   XREF to: 00513852 (CONDITIONAL_JUMP)  ; LAB_00513852
    LEA EAX,[EAX]                       ; 0051385b
    MOV ECX,ECX                         ; 0051385e
    MOV EBP,dword ptr [ESP + 0x524]     ; 00513860
        ;   Label: LAB_00513860
    MOV EDI,dword ptr [EBX + 0x410]     ; 00513867
    CMP EBP,EDI                         ; 0051386d
    JL 0x0051345e                       ; 0051386f
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    MOV EAX,EDI                         ; 00513875
    SHL EAX,0x8                         ; 00513877
    CMP EAX,EBP                         ; 0051387a
    JL 0x0051345e                       ; 0051387c
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    PUSH EBP                            ; 00513882
    CALL crt_unknown.c_FUN_005a3650     ; 00513883
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00513888
    MOV dword ptr [EBX + 0x418],EAX     ; 0051388b
    TEST EAX,EAX                        ; 00513891
    JZ 0x00513493                       ; 00513893
        ;   XREF to: 00513493 (CONDITIONAL_JUMP)  ; LAB_00513493
    PUSH EBP                            ; 00513899
    PUSH EAX                            ; 0051389a
    LEA EAX,[ESP + 0x850]               ; 0051389b
    PUSH EAX                            ; 005138a2
    CALL unkafter_turret.cpp_FUN_00573c00 ; 005138a3
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 005138a8
    CMP EAX,EBP                         ; 005138ab
    JNZ 0x0051316b                      ; 005138ad
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    LEA EAX,[ESP + 0x848]               ; 005138b3
    PUSH EAX                            ; 005138ba
    CALL unkafter_turret.cpp_FUN_00573d40 ; 005138bb
        ;   XREF to: 00573d40 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573d40()
    MOV EDX,dword ptr [EBX + 0x424]     ; 005138c0
    MOV dword ptr [EBX + 0x428],EAX     ; 005138c6
    MOV EAX,EDX                         ; 005138cc
    SHL EAX,0x5                         ; 005138ce
    ADD EDX,EAX                         ; 005138d1
    SHL EDX,0x3                         ; 005138d3
    MOV EAX,dword ptr [EBX + 0x428]     ; 005138d6
    ADD EAX,EDX                         ; 005138dc
    ADD ESP,0x4                         ; 005138de
    MOV dword ptr [EBX + 0x420],EAX     ; 005138e1
    JMP 0x005133bd                      ; 005138e7
        ;   XREF to: 005133bd (UNCONDITIONAL_JUMP)  ; LAB_005133bd
    PUSH 0x54                           ; 005138ec
        ;   Label: LAB_005138ec
    LEA EAX,[ESP + 0x7a8]               ; 005138ee
    PUSH EAX                            ; 005138f5
    LEA EAX,[ESP + 0x850]               ; 005138f6
    PUSH EAX                            ; 005138fd
    MOV dword ptr [EBX],0x1             ; 005138fe
    CALL unkafter_turret.cpp_FUN_00573c00 ; 00513904
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 00513909
    CMP EAX,0x4                         ; 0051390c
    JNZ 0x0051316b                      ; 0051390f
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    MOV EAX,dword ptr [ESP + 0x7a4]     ; 00513915
    LEA ESI,[ESP + 0x7a8]               ; 0051391c
    LEA EDI,[EBX + 0x108]               ; 00513923
    MOV dword ptr [EBX + 0x410],EAX     ; 00513929
    PUSH EDI                            ; 0051392f
    MOV AL,byte ptr [ESI]               ; 00513930
        ;   Label: LAB_00513930
    MOV byte ptr [EDI],AL               ; 00513932
    CMP AL,0x0                          ; 00513934
    JZ 0x00513948                       ; 00513936
        ;   XREF to: 00513948 (CONDITIONAL_JUMP)  ; LAB_00513948
    MOV AL,byte ptr [ESI + 0x1]         ; 00513938
    ADD ESI,0x2                         ; 0051393b
    MOV byte ptr [EDI + 0x1],AL         ; 0051393e
    ADD EDI,0x2                         ; 00513941
    CMP AL,0x0                          ; 00513944
    JNZ 0x00513930                      ; 00513946
        ;   XREF to: 00513930 (CONDITIONAL_JUMP)  ; LAB_00513930
    POP EDI                             ; 00513948
        ;   Label: LAB_00513948
    MOV EDI,dword ptr [EBX + 0x410]     ; 00513949
    TEST EDI,EDI                        ; 0051394f
    JL 0x0051345e                       ; 00513951
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    CMP EDI,0x98967f                    ; 00513957
    JG 0x0051345e                       ; 0051395d
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    LEA EAX,[EDI*0x4 + 0x0]             ; 00513963
    ADD EAX,EDI                         ; 0051396a
    SHL EAX,0x2                         ; 0051396c
    PUSH EAX                            ; 0051396f
    CALL crt_unknown.c_FUN_005a3650     ; 00513970
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00513975
    MOV dword ptr [EBX + 0x414],EAX     ; 00513978
    TEST EAX,EAX                        ; 0051397e
    JZ 0x00513493                       ; 00513980
        ;   XREF to: 00513493 (CONDITIONAL_JUMP)  ; LAB_00513493
    XOR EBP,EBP                         ; 00513986
    MOV ESI,dword ptr [EBX + 0x410]     ; 00513988
    MOV dword ptr [ESP + 0x8a8],EBP     ; 0051398e
    MOV dword ptr [ESP + 0x8b4],EBP     ; 00513995
    TEST ESI,ESI                        ; 0051399c
    JLE 0x00513afa                      ; 0051399e
        ;   XREF to: 00513afa (CONDITIONAL_JUMP)  ; LAB_00513afa
    MOV dword ptr [ESP + 0x8b8],EBP     ; 005139a4
    PUSH 0x28                           ; 005139ab
        ;   Label: LAB_005139ab
    LEA EAX,[ESP + 0x878]               ; 005139ad
    PUSH EAX                            ; 005139b4
    LEA EAX,[ESP + 0x850]               ; 005139b5
    PUSH EAX                            ; 005139bc
    CALL unkafter_turret.cpp_FUN_00573c00 ; 005139bd
        ;   XREF to: 00573c00 (UNCONDITIONAL_CALL)  ; undefined unkafter_turret.cpp_FUN_00573c00()
    ADD ESP,0xc                         ; 005139c2
    CMP EAX,0x28                        ; 005139c5
    JNZ 0x0051316b                      ; 005139c8
        ;   XREF to: 0051316b (CONDITIONAL_JUMP)  ; LAB_0051316b
    MOV EDX,dword ptr [ESP + 0x8b8]     ; 005139ce
    MOV EAX,dword ptr [EBX + 0x414]     ; 005139d5
    ADD EAX,EDX                         ; 005139db
    LEA EDI,[ESP + 0x874]               ; 005139dd
    MOV dword ptr [EAX],EBP             ; 005139e4
    SUB ECX,ECX                         ; 005139e6
    DEC ECX                             ; 005139e8
    XOR EAX,EAX                         ; 005139e9
    SCASB.REPNE ES:EDI                  ; 005139eb
    NOT ECX                             ; 005139ed
    DEC ECX                             ; 005139ef
    INC ECX                             ; 005139f0
    ADD EBP,ECX                         ; 005139f1
    CMP EBP,dword ptr [ESP + 0x8a8]     ; 005139f3
    JG 0x00513b06                       ; 005139fa
        ;   XREF to: 00513b06 (CONDITIONAL_JUMP)  ; LAB_00513b06
    MOV EDX,dword ptr [ESP + 0x894]     ; 00513a00
        ;   Label: LAB_00513a00
    TEST EDX,EDX                        ; 00513a07
    JL 0x0051345e                       ; 00513a09
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    CMP EDX,0x3b9ac9ff                  ; 00513a0f
    JG 0x0051345e                       ; 00513a15
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    MOV ESI,dword ptr [ESP + 0x204]     ; 00513a1b
    CMP EDX,ESI                         ; 00513a22
    JG 0x0051345e                       ; 00513a24
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    MOV EDI,dword ptr [ESP + 0x898]     ; 00513a2a
    CMP EDI,0x54                        ; 00513a31
    JC 0x0051345e                       ; 00513a34
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    MOV EAX,ESI                         ; 00513a3a
    SUB EAX,EDX                         ; 00513a3c
    CMP EAX,EDI                         ; 00513a3e
    JL 0x0051345e                       ; 00513a40
        ;   XREF to: 0051345e (CONDITIONAL_JUMP)  ; LAB_0051345e
    MOV ESI,dword ptr [ESP + 0x8b8]     ; 00513a46
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513a4d
    ADD EAX,ESI                         ; 00513a53
    MOV EDI,dword ptr [EBX + 0x418]     ; 00513a55
    MOV EDX,dword ptr [EAX]             ; 00513a5b
    LEA ESI,[ESP + 0x874]               ; 00513a5d
    ADD EDI,EDX                         ; 00513a64
    PUSH EDI                            ; 00513a66
    MOV AL,byte ptr [ESI]               ; 00513a67
        ;   Label: LAB_00513a67
    MOV byte ptr [EDI],AL               ; 00513a69
    CMP AL,0x0                          ; 00513a6b
    JZ 0x00513a7f                       ; 00513a6d
        ;   XREF to: 00513a7f (CONDITIONAL_JUMP)  ; LAB_00513a7f
    MOV AL,byte ptr [ESI + 0x1]         ; 00513a6f
    ADD ESI,0x2                         ; 00513a72
    MOV byte ptr [EDI + 0x1],AL         ; 00513a75
    ADD EDI,0x2                         ; 00513a78
    CMP AL,0x0                          ; 00513a7b
    JNZ 0x00513a67                      ; 00513a7d
        ;   XREF to: 00513a67 (CONDITIONAL_JUMP)  ; LAB_00513a67
    POP EDI                             ; 00513a7f
        ;   Label: LAB_00513a7f
    MOV EDX,dword ptr [ESP + 0x8b8]     ; 00513a80
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513a87
    ADD EDX,EAX                         ; 00513a8d
    MOV EAX,dword ptr [ESP + 0x894]     ; 00513a8f
    MOV dword ptr [EDX + 0x4],EAX       ; 00513a96
    MOV ECX,dword ptr [ESP + 0x8b8]     ; 00513a99
    MOV EDX,dword ptr [EBX + 0x414]     ; 00513aa0
    ADD EDX,ECX                         ; 00513aa6
    MOV EAX,dword ptr [ESP + 0x898]     ; 00513aa8
    MOV dword ptr [EDX + 0x8],EAX       ; 00513aaf
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513ab2
    ADD EAX,ECX                         ; 00513ab8
    MOV dword ptr [EAX + 0x10],0x0      ; 00513aba
    MOV EAX,dword ptr [EBX + 0x414]     ; 00513ac1
    LEA EDX,[ECX + EAX*0x1]             ; 00513ac7
    MOV EAX,dword ptr [EBX + 0x104]     ; 00513aca
    LEA EDI,[ECX + 0x14]                ; 00513ad0
    MOV dword ptr [EDX + 0xc],EAX       ; 00513ad3
    MOV EAX,dword ptr [ESP + 0x8b4]     ; 00513ad6
    MOV dword ptr [ESP + 0x8b8],EDI     ; 00513add
    INC EAX                             ; 00513ae4
    MOV EDX,dword ptr [EBX + 0x410]     ; 00513ae5
    MOV dword ptr [ESP + 0x8b4],EAX     ; 00513aeb
    CMP EAX,EDX                         ; 00513af2
    JL 0x005139ab                       ; 00513af4
        ;   XREF to: 005139ab (CONDITIONAL_JUMP)  ; LAB_005139ab
    CMP EBP,dword ptr [ESP + 0x8a8]     ; 00513afa
        ;   Label: LAB_00513afa
    JMP 0x005133b0                      ; 00513b01
        ;   XREF to: 005133b0 (UNCONDITIONAL_JUMP)  ; LAB_005133b0
    MOV ESI,dword ptr [ESP + 0x8b4]     ; 00513b06
        ;   Label: LAB_00513b06
    MOV EAX,dword ptr [EBX + 0x410]     ; 00513b0d
    SUB EAX,ESI                         ; 00513b13
    IMUL EAX,EAX,0x30                   ; 00513b15
    LEA EDX,[EAX + EBP*0x1]             ; 00513b18
    PUSH EDX                            ; 00513b1b
    MOV EAX,dword ptr [EBX + 0x418]     ; 00513b1c
    PUSH EAX                            ; 00513b22
    MOV dword ptr [ESP + 0x8b0],EDX     ; 00513b23
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00513b2a
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00513b2f
    TEST EAX,EAX                        ; 00513b32
    JZ 0x00513493                       ; 00513b34
        ;   XREF to: 00513493 (CONDITIONAL_JUMP)  ; LAB_00513493
    MOV dword ptr [EBX + 0x418],EAX     ; 00513b3a
    JMP 0x00513a00                      ; 00513b40
        ;   XREF to: 00513a00 (UNCONDITIONAL_JUMP)  ; LAB_00513a00
    PUSH EBP                            ; 00513b45
        ;   Label: LAB_00513b45
    MOV ECX,dword ptr [EBX + 0x418]     ; 00513b46
    PUSH ECX                            ; 00513b4c
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 00513b4d
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 00513b52
    MOV dword ptr [EBX + 0x418],EAX     ; 00513b55
    TEST EAX,EAX                        ; 00513b5b
    JNZ 0x005133f3                      ; 00513b5d
        ;   XREF to: 005133f3 (CONDITIONAL_JUMP)  ; LAB_005133f3
    MOV EDI,0x5cc546                    ; 00513b63 | = "..\\engine\\pod.cpp"
    MOV EAX,0x2d5                       ; 00513b68
    PUSH 0x5cc558                       ; 00513b6d | = "realloc returns NULL shrinking filena..."
    MOV dword ptr [0x01d71de0],EDI      ; 00513b72 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00513b78 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00513b7d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00513b82
    JMP 0x005133f3                      ; 00513b85
        ;   XREF to: 005133f3 (UNCONDITIONAL_JUMP)  ; LAB_005133f3

