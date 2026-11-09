; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__strnicmp_FUN_005c1210(char *str1,char *str2,int count)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
; int              Stack[0xc]:4   count
;
; XREF[22]:
;   core_carved.cpp_FUN_0042a4f0 at 0042a54f
;   core_carved.cpp_FUN_0042b290 at 0042b2c6
;   core_charactr.cpp_FUN_0042d750 at 0042dd25
;   core_charactr.cpp_FUN_00431c30 at 00431c58
;   core_charactr.cpp_FUN_00435320 at 00435352
;   core_demnfolk.cpp_FUN_0045b120 at 0045b17f
;   core_emitter.cpp_FUN_0049f310 at 0049f57e
;   core_event.cpp_FUN_004a1d00 at 004a1f58
;   core_fldnotes.cpp_FUN_004bb6f0 at 004bb7c4
;   core_game.cpp_FUN_004d6990 at 004d6dae
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1210
        ;   Label: crt_string.c__strnicmp_FUN_005c1210
    PUSH ESI                            ; 005c1211
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c1212
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c1216
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c121a
    TEST EDX,EDX                        ; 005c121e
    JNZ 0x005c1227                      ; 005c1220
        ;   XREF to: 005c1227 (CONDITIONAL_JUMP)  ; LAB_005c1227
    XOR EAX,EAX                         ; 005c1222
        ;   Label: LAB_005c1222
    POP ESI                             ; 005c1224
    POP EBX                             ; 005c1225
    RET                                 ; 005c1226
    MOV AL,byte ptr [EBX]               ; 005c1227
        ;   Label: LAB_005c1227
    MOV AH,byte ptr [ESI]               ; 005c1229
    CMP AL,0x41                         ; 005c122b
    JC 0x005c1235                       ; 005c122d
        ;   XREF to: 005c1235 (CONDITIONAL_JUMP)  ; LAB_005c1235
    CMP AL,0x5a                         ; 005c122f
    JA 0x005c1235                       ; 005c1231
        ;   XREF to: 005c1235 (CONDITIONAL_JUMP)  ; LAB_005c1235
    ADD AL,0x20                         ; 005c1233
    CMP AH,0x41                         ; 005c1235
        ;   Label: LAB_005c1235
    JC 0x005c1242                       ; 005c1238
        ;   XREF to: 005c1242 (CONDITIONAL_JUMP)  ; LAB_005c1242
    CMP AH,0x5a                         ; 005c123a
    JA 0x005c1242                       ; 005c123d
        ;   XREF to: 005c1242 (CONDITIONAL_JUMP)  ; LAB_005c1242
    ADD AH,0x20                         ; 005c123f
    CMP AL,AH                           ; 005c1242
        ;   Label: LAB_005c1242
    JZ 0x005c1258                       ; 005c1244
        ;   XREF to: 005c1258 (CONDITIONAL_JUMP)  ; LAB_005c1258
    XOR EDX,EDX                         ; 005c1246
    MOV DL,AL                           ; 005c1248
    MOV AL,AH                           ; 005c124a
    AND EAX,0xff                        ; 005c124c
    SUB EDX,EAX                         ; 005c1251
    MOV EAX,EDX                         ; 005c1253
    POP ESI                             ; 005c1255
    POP EBX                             ; 005c1256
    RET                                 ; 005c1257
    TEST AH,AH                          ; 005c1258
        ;   Label: LAB_005c1258
    JNZ 0x005c1261                      ; 005c125a
        ;   XREF to: 005c1261 (CONDITIONAL_JUMP)  ; LAB_005c1261
    XOR EAX,EAX                         ; 005c125c
    POP ESI                             ; 005c125e
    POP EBX                             ; 005c125f
    RET                                 ; 005c1260
    INC EBX                             ; 005c1261
        ;   Label: LAB_005c1261
    INC ESI                             ; 005c1262
    DEC EDX                             ; 005c1263
    JZ 0x005c1222                       ; 005c1264
        ;   XREF to: 005c1222 (CONDITIONAL_JUMP)  ; LAB_005c1222
    JMP 0x005c1227                      ; 005c1266
        ;   XREF to: 005c1227 (UNCONDITIONAL_JUMP)  ; LAB_005c1227

