; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_loadState_FUN_004b0fc0(CEventList *this_ptr,_FILE *file_handle)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; char[256]        Stack[-0x120]:256  local_120
; int              Stack[-0x20]:4  local_20
; char[30] *       Stack[-0x1c]:4  local_1c
; char[32] *       Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1a26
;
; Referenced Globals:
;   TerminatedCString s_d_00625d43
;   TerminatedCString s_core_event_cpp_00625d47
;   TerminatedCString s_CEventList_loadState_fil_00625d59
;   TerminatedCString s_d_00625dbc
;   TerminatedCString s_anon_00625dc0
;   TerminatedCString s_d_00625dc7
;   TerminatedCString s_anon_00625dcb
;   TerminatedCString s_d_00625dd2
;   TerminatedCString s_anon_00625dd6
;   TerminatedCString s_d_00625ddd
;   TerminatedCString s_f_00625de1
;   TerminatedCString s_d_00625dec
;   TerminatedCString s_d_00625df0
;   TerminatedCString s_d_00625dfb
;   TerminatedCString s_anon_00625dff
;   ... and 4 more
;
; Called Functions:
;   core_event.cpp_CEventList_reset_FUN_004aaa70
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fgets_FUN_005fefd0
;   crt_stdio.c_fscanf_FUN_005fe7c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0fc0
        ;   Label: core_event.cpp_CEventList_loadState_FUN_004b0fc0
    PUSH ESI                            ; 004b0fc1
    PUSH EDI                            ; 004b0fc2
    PUSH EBP                            ; 004b0fc3
    SUB ESP,0x110                       ; 004b0fc4
    MOV EBX,dword ptr [ESP + 0x124]     ; 004b0fca
    MOV ESI,dword ptr [ESP + 0x128]     ; 004b0fd1
    PUSH EBX                            ; 004b0fd8
    CALL core_event.cpp_CEventList_reset_FUN_004aaa70 ; 004b0fd9
        ;   XREF to: 004aaa70 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_reset_FUN_004aaa70(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004b0fde
    PUSH ESI                            ; 004b0fe1
    PUSH 0xff                           ; 004b0fe2
    LEA EAX,[ESP + 0x8]                 ; 004b0fe7
    PUSH EAX                            ; 004b0feb
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004b0fec
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004b0ff1
    LEA EAX,[ESP + 0x100]               ; 004b0ff4
    PUSH EAX                            ; 004b0ffb
    PUSH 0x625d43                       ; 004b0ffc | = "%d\n"
    PUSH ESI                            ; 004b1001
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b1002
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004b1007
    MOV EDX,dword ptr [ESP + 0x100]     ; 004b100a
    CMP EDX,0x5                         ; 004b1011
    JG 0x004b12eb                       ; 004b1014
        ;   XREF to: 004b12eb (CONDITIONAL_JUMP)  ; LAB_004b12eb
    PUSH ESI                            ; 004b101a
        ;   Label: LAB_004b101a
    PUSH 0xff                           ; 004b101b
    LEA EAX,[ESP + 0x8]                 ; 004b1020
    PUSH EAX                            ; 004b1024
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004b1025
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004b102a
    PUSH EBX                            ; 004b102d
    PUSH 0x625dbc                       ; 004b102e | = "%d\n"
    PUSH ESI                            ; 004b1033
    XOR EBP,EBP                         ; 004b1034
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b1036
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX]             ; 004b103b
    ADD ESP,0xc                         ; 004b103d
    TEST EAX,EAX                        ; 004b1040
    JLE 0x004b1060                      ; 004b1042
        ;   XREF to: 004b1060 (CONDITIONAL_JUMP)  ; LAB_004b1060
    LEA EDI,[EBX + 0x4]                 ; 004b1044
    PUSH EDI                            ; 004b1047
        ;   Label: LAB_004b1047
    PUSH 0x625dc0                       ; 004b1048 | = "%[^\n]\n"
    PUSH ESI                            ; 004b104d
    INC EBP                             ; 004b104e
    ADD EDI,0x20                        ; 004b104f
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b1052
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EDX,dword ptr [EBX]             ; 004b1057
    ADD ESP,0xc                         ; 004b1059
    CMP EBP,EDX                         ; 004b105c
    JL 0x004b1047                       ; 004b105e
        ;   XREF to: 004b1047 (CONDITIONAL_JUMP)  ; LAB_004b1047
    PUSH ESI                            ; 004b1060
        ;   Label: LAB_004b1060
    PUSH 0xff                           ; 004b1061
    LEA EDI,[ESP + 0x8]                 ; 004b1066
    PUSH EDI                            ; 004b106a
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004b106b
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004b1070
    LEA EDI,[EBX + 0xc84]               ; 004b1073
    PUSH EDI                            ; 004b1079
    PUSH 0x625dc7                       ; 004b107a | = "%d\n"
    PUSH ESI                            ; 004b107f
    XOR EBP,EBP                         ; 004b1080
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b1082
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0xc84]     ; 004b1087
    ADD ESP,0xc                         ; 004b108d
    TEST ECX,ECX                        ; 004b1090
    JLE 0x004b10c0                      ; 004b1092
        ;   XREF to: 004b10c0 (CONDITIONAL_JUMP)  ; LAB_004b10c0
    LEA EDI,[EBX + 0xc88]               ; 004b1094
    PUSH EDI                            ; 004b109a
        ;   Label: LAB_004b109a
    PUSH 0x625dcb                       ; 004b109b | = "%[^\n]\n"
    PUSH ESI                            ; 004b10a0
    INC EBP                             ; 004b10a1
    ADD EDI,0x20                        ; 004b10a2
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b10a5
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0xc84]     ; 004b10aa
    ADD ESP,0xc                         ; 004b10b0
    CMP EBP,EAX                         ; 004b10b3
    JL 0x004b109a                       ; 004b10b5
        ;   XREF to: 004b109a (CONDITIONAL_JUMP)  ; LAB_004b109a
    LEA EAX,[EAX]                       ; 004b10b7
    LEA EDX,[EDX]                       ; 004b10bd
    PUSH ESI                            ; 004b10c0
        ;   Label: LAB_004b10c0
    PUSH 0xff                           ; 004b10c1
    LEA EDI,[ESP + 0x8]                 ; 004b10c6
    PUSH EDI                            ; 004b10ca
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004b10cb
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004b10d0
    LEA EDI,[EBX + 0x258c]              ; 004b10d3
    PUSH EDI                            ; 004b10d9
    PUSH 0x625dd2                       ; 004b10da | = "%d\n"
    PUSH ESI                            ; 004b10df
    XOR EBP,EBP                         ; 004b10e0
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b10e2
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EDX,dword ptr [EBX + 0x258c]    ; 004b10e7
    ADD ESP,0xc                         ; 004b10ed
    TEST EDX,EDX                        ; 004b10f0
    JLE 0x004b1120                      ; 004b10f2
        ;   XREF to: 004b1120 (CONDITIONAL_JUMP)  ; LAB_004b1120
    LEA EDI,[EBX + 0x2590]              ; 004b10f4
    PUSH EDI                            ; 004b10fa
        ;   Label: LAB_004b10fa
    PUSH 0x625dd6                       ; 004b10fb | = "%[^\n]\n"
    PUSH ESI                            ; 004b1100
    INC EBP                             ; 004b1101
    ADD EDI,0x20                        ; 004b1102
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b1105
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x258c]    ; 004b110a
    ADD ESP,0xc                         ; 004b1110
    CMP EBP,ECX                         ; 004b1113
    JL 0x004b10fa                       ; 004b1115
        ;   XREF to: 004b10fa (CONDITIONAL_JUMP)  ; LAB_004b10fa
    LEA EAX,[EAX]                       ; 004b1117
    LEA EDX,[EDX]                       ; 004b111d
    CMP dword ptr [ESP + 0x100],0x2     ; 004b1120
        ;   Label: LAB_004b1120
    JL 0x004b11b0                       ; 004b1128
        ;   XREF to: 004b11b0 (CONDITIONAL_JUMP)  ; LAB_004b11b0
    PUSH ESI                            ; 004b112e
    PUSH 0xff                           ; 004b112f
    LEA EDI,[ESP + 0x8]                 ; 004b1134
    PUSH EDI                            ; 004b1138
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004b1139
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004b113e
    LEA EDI,[EBX + 0x3210]              ; 004b1141
    PUSH EDI                            ; 004b1147
    PUSH 0x625ddd                       ; 004b1148 | = "%d\n"
    PUSH ESI                            ; 004b114d
    XOR EBP,EBP                         ; 004b114e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b1150
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004b1155
    MOV EAX,dword ptr [EBX + 0x3210]    ; 004b1158
    MOV dword ptr [ESP + 0x10c],EBP     ; 004b115e
    TEST EAX,EAX                        ; 004b1165
    JLE 0x004b11b0                      ; 004b1167
        ;   XREF to: 004b11b0 (CONDITIONAL_JUMP)  ; LAB_004b11b0
    LEA EDI,[EBX + 0x3214]              ; 004b1169
    LEA EBP,[EBX + 0x3354]              ; 004b116f
    PUSH EDI                            ; 004b1175
        ;   Label: LAB_004b1175
    PUSH EBP                            ; 004b1176
    PUSH 0x625de1                       ; 004b1177 | = "%f, %[^\n]\n"
    PUSH ESI                            ; 004b117c
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b117d
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004b1182
    ADD EDI,0x20                        ; 004b1185
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004b1188
    ADD EBP,0x4                         ; 004b118f
    INC EDX                             ; 004b1192
    MOV ECX,dword ptr [EBX + 0x3210]    ; 004b1193
    MOV dword ptr [ESP + 0x10c],EDX     ; 004b1199
    CMP EDX,ECX                         ; 004b11a0
    JL 0x004b1175                       ; 004b11a2
        ;   XREF to: 004b1175 (CONDITIONAL_JUMP)  ; LAB_004b1175
    LEA EAX,[EAX]                       ; 004b11a4
    LEA EDX,[EDX]                       ; 004b11aa
    CMP dword ptr [ESP + 0x100],0x3     ; 004b11b0
        ;   Label: LAB_004b11b0
    JL 0x004b1240                       ; 004b11b8
        ;   XREF to: 004b1240 (CONDITIONAL_JUMP)  ; LAB_004b1240
    PUSH ESI                            ; 004b11be
    PUSH 0xff                           ; 004b11bf
    LEA EDI,[ESP + 0x8]                 ; 004b11c4
    PUSH EDI                            ; 004b11c8
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004b11c9
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004b11ce
    LEA EDI,[EBX + 0x337c]              ; 004b11d1
    PUSH EDI                            ; 004b11d7
    PUSH 0x625dec                       ; 004b11d8 | = "%d\n"
    PUSH ESI                            ; 004b11dd
    XOR EBP,EBP                         ; 004b11de
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b11e0
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004b11e5
    ADD ESP,0xc                         ; 004b11eb
    TEST EAX,EAX                        ; 004b11ee
    JLE 0x004b1240                      ; 004b11f0
        ;   XREF to: 004b1240 (CONDITIONAL_JUMP)  ; LAB_004b1240
    LEA EAX,[EBX + 0x3380]              ; 004b11f2
    LEA EDI,[EBX + 0x34c0]              ; 004b11f8
    MOV dword ptr [ESP + 0x108],EAX     ; 004b11fe
    MOV EDX,dword ptr [ESP + 0x108]     ; 004b1205
        ;   Label: LAB_004b1205
    PUSH EDX                            ; 004b120c
    PUSH EDI                            ; 004b120d
    PUSH 0x625df0                       ; 004b120e | = "%d, %[^\n]\n"
    PUSH ESI                            ; 004b1213
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b1214
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004b1219
    INC EBP                             ; 004b121c
    MOV ECX,dword ptr [ESP + 0x108]     ; 004b121d
    ADD EDI,0x4                         ; 004b1224
    ADD ECX,0x20                        ; 004b1227
    MOV EAX,dword ptr [EBX + 0x337c]    ; 004b122a
    MOV dword ptr [ESP + 0x108],ECX     ; 004b1230
    CMP EBP,EAX                         ; 004b1237
    JL 0x004b1205                       ; 004b1239
        ;   XREF to: 004b1205 (CONDITIONAL_JUMP)  ; LAB_004b1205
    LEA EAX,[EAX]                       ; 004b123b
    MOV ECX,ECX                         ; 004b123e
    CMP dword ptr [ESP + 0x100],0x4     ; 004b1240
        ;   Label: LAB_004b1240
    JL 0x004b12d0                       ; 004b1248
        ;   XREF to: 004b12d0 (CONDITIONAL_JUMP)  ; LAB_004b12d0
    PUSH ESI                            ; 004b124e
    PUSH 0xff                           ; 004b124f
    LEA EDI,[ESP + 0x8]                 ; 004b1254
    PUSH EDI                            ; 004b1258
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004b1259
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004b125e
    LEA EDI,[EBX + 0x34e8]              ; 004b1261
    PUSH EDI                            ; 004b1267
    PUSH 0x625dfb                       ; 004b1268 | = "%d\n"
    PUSH ESI                            ; 004b126d
    XOR EBP,EBP                         ; 004b126e
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b1270
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 004b1275
    ADD ESP,0xc                         ; 004b127b
    TEST ECX,ECX                        ; 004b127e
    JLE 0x004b12d0                      ; 004b1280
        ;   XREF to: 004b12d0 (CONDITIONAL_JUMP)  ; LAB_004b12d0
    LEA EAX,[EBX + 0x37da]              ; 004b1282
    LEA EDI,[EBX + 0x34ec]              ; 004b1288
    MOV dword ptr [ESP + 0x104],EAX     ; 004b128e
    MOV EAX,dword ptr [ESP + 0x104]     ; 004b1295
        ;   Label: LAB_004b1295
    PUSH EAX                            ; 004b129c
    PUSH EDI                            ; 004b129d
    PUSH 0x625dff                       ; 004b129e | = "\"%[^\"]\" , \"%[^\"]\"\n"
    PUSH ESI                            ; 004b12a3
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b12a4
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    ADD ESP,0x10                        ; 004b12a9
    INC EBP                             ; 004b12ac
    MOV EDX,dword ptr [ESP + 0x104]     ; 004b12ad
    ADD EDI,0x1e                        ; 004b12b4
    ADD EDX,0x1e                        ; 004b12b7
    MOV ECX,dword ptr [EBX + 0x34e8]    ; 004b12ba
    MOV dword ptr [ESP + 0x104],EDX     ; 004b12c0
    CMP EBP,ECX                         ; 004b12c7
    JL 0x004b1295                       ; 004b12c9
        ;   XREF to: 004b1295 (CONDITIONAL_JUMP)  ; LAB_004b1295
    LEA EAX,[EAX]                       ; 004b12cb
    MOV ECX,ECX                         ; 004b12ce
    CMP dword ptr [ESP + 0x100],0x5     ; 004b12d0
        ;   Label: LAB_004b12d0
    JGE 0x004b1316                      ; 004b12d8
        ;   XREF to: 004b1316 (CONDITIONAL_JUMP)  ; LAB_004b1316
    LEA EAX,[EAX]                       ; 004b12da
    ADD ESP,0x110                       ; 004b12e0
        ;   Label: LAB_004b12e0
    POP EBP                             ; 004b12e6
    POP EDI                             ; 004b12e7
    POP ESI                             ; 004b12e8
    POP EBX                             ; 004b12e9
    RET                                 ; 004b12ea
    PUSH 0x5                            ; 004b12eb
        ;   Label: LAB_004b12eb
    PUSH EDX                            ; 004b12ed
    MOV ECX,0x625d47                    ; 004b12ee | = "..\\core\\event.cpp"
    MOV EDI,0xc2c                       ; 004b12f3
    PUSH 0x625d59                       ; 004b12f8 | = "CEventList::loadState - file version ..."
    MOV dword ptr [0x02f0ca48],ECX      ; 004b12fd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004b1303 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b1309
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 004b130e
    JMP 0x004b101a                      ; 004b1311
        ;   XREF to: 004b101a (UNCONDITIONAL_JUMP)  ; LAB_004b101a
    PUSH ESI                            ; 004b1316
        ;   Label: LAB_004b1316
    PUSH 0xff                           ; 004b1317
    LEA EDI,[ESP + 0x8]                 ; 004b131c
    PUSH EDI                            ; 004b1320
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 004b1321
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004b1326
    LEA EDI,[EBX + 0x1908]              ; 004b1329
    PUSH EDI                            ; 004b132f
    PUSH 0x625e12                       ; 004b1330 | = "%d\n"
    PUSH ESI                            ; 004b1335
    XOR EDI,EDI                         ; 004b1336
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b1338
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EBP,dword ptr [EBX + 0x1908]    ; 004b133d
    ADD ESP,0xc                         ; 004b1343
    TEST EBP,EBP                        ; 004b1346
    JLE 0x004b12e0                      ; 004b1348
        ;   XREF to: 004b12e0 (CONDITIONAL_JUMP)  ; LAB_004b12e0
    LEA EBP,[EBX + 0x190c]              ; 004b134a
    PUSH EBP                            ; 004b1350
        ;   Label: LAB_004b1350
    PUSH 0x625e16                       ; 004b1351 | = "%[^\n]\n"
    PUSH ESI                            ; 004b1356
    INC EDI                             ; 004b1357
    ADD EBP,0x20                        ; 004b1358
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 004b135b
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(_FILE * file, char * format)
    MOV EAX,dword ptr [EBX + 0x1908]    ; 004b1360
    ADD ESP,0xc                         ; 004b1366
    CMP EDI,EAX                         ; 004b1369
    JL 0x004b1350                       ; 004b136b
        ;   XREF to: 004b1350 (CONDITIONAL_JUMP)  ; LAB_004b1350
    ADD ESP,0x110                       ; 004b136d
    POP EBP                             ; 004b1373
    POP EDI                             ; 004b1374
    POP ESI                             ; 004b1375
    POP EBX                             ; 004b1376
    RET                                 ; 004b1377

