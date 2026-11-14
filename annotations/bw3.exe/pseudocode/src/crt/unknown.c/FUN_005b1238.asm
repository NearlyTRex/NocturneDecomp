; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b1238(byte param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b1090 at 005b114b
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005a35a0
;
; *****************************************************************************

section .text

    MOV AL,byte ptr [ESP + 0x4]         ; 005b1238
        ;   Label: crt_unknown.c_FUN_005b1238
    CMP AL,0x30                         ; 005b123c
    JC 0x005b124d                       ; 005b123e
        ;   XREF to: 005b124d (CONDITIONAL_JUMP)  ; LAB_005b124d
    CMP AL,0x39                         ; 005b1240
    JA 0x005b124d                       ; 005b1242
        ;   XREF to: 005b124d (CONDITIONAL_JUMP)  ; LAB_005b124d
    AND EAX,0xff                        ; 005b1244
    SUB EAX,0x30                        ; 005b1249
    RET                                 ; 005b124c
    AND EAX,0xff                        ; 005b124d
        ;   Label: LAB_005b124d
    PUSH EAX                            ; 005b1252
    CALL crt_ctype.c_tolower_FUN_005a35a0 ; 005b1253
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005a35a0(int character)
    MOV EDX,EAX                         ; 005b1258
    ADD ESP,0x4                         ; 005b125a
    CMP AL,0x61                         ; 005b125d
    JC 0x005b126d                       ; 005b125f
        ;   XREF to: 005b126d (CONDITIONAL_JUMP)  ; LAB_005b126d
    CMP AL,0x69                         ; 005b1261
    JA 0x005b126d                       ; 005b1263
        ;   XREF to: 005b126d (CONDITIONAL_JUMP)  ; LAB_005b126d
    XOR EAX,EAX                         ; 005b1265
    MOV AL,DL                           ; 005b1267
    SUB EAX,0x57                        ; 005b1269
    RET                                 ; 005b126c
    CMP AL,0x6a                         ; 005b126d
        ;   Label: LAB_005b126d
    JC 0x005b127e                       ; 005b126f
        ;   XREF to: 005b127e (CONDITIONAL_JUMP)  ; LAB_005b127e
    CMP AL,0x72                         ; 005b1271
    JA 0x005b127e                       ; 005b1273
        ;   XREF to: 005b127e (CONDITIONAL_JUMP)  ; LAB_005b127e
    AND EAX,0xff                        ; 005b1275
    SUB EAX,0x57                        ; 005b127a
    RET                                 ; 005b127d
    CMP AL,0x73                         ; 005b127e
        ;   Label: LAB_005b127e
    JC 0x005b128f                       ; 005b1280
        ;   XREF to: 005b128f (CONDITIONAL_JUMP)  ; LAB_005b128f
    CMP AL,0x7a                         ; 005b1282
    JA 0x005b128f                       ; 005b1284
        ;   XREF to: 005b128f (CONDITIONAL_JUMP)  ; LAB_005b128f
    AND EAX,0xff                        ; 005b1286
    SUB EAX,0x57                        ; 005b128b
    RET                                 ; 005b128e
    MOV EAX,0x25                        ; 005b128f
        ;   Label: LAB_005b128f
    RET                                 ; 005b1294

