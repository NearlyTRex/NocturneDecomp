; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_carved_cpp_FUN_0042b290(int param_1,uint param_2)
;
;
; XREF[3]:
;   core_carved.cpp_FUN_00428ae0 at 0042996b
;   core_carved.cpp_FUN_0042a930 at 0042ab0e
;   core_carved.cpp_FUN_0042b330 at 0042b33b
;
; Referenced Globals:
;   TerminatedCString s_jeff_dfm_005d55e1
;   undefined4 DAT_005d55ea
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005c04e0
;   crt_string.c__strnicmp_FUN_005c1210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b290
        ;   Label: core_carved.cpp_FUN_0042b290
    PUSH EBP                            ; 0042b291
    MOV EBP,ESP                         ; 0042b292
    MOV EBX,dword ptr [EBP + 0x10]      ; 0042b294
    CMP EBX,0x2                         ; 0042b297
    JZ 0x0042b2b6                       ; 0042b29a
        ;   XREF to: 0042b2b6 (CONDITIONAL_JUMP)  ; LAB_0042b2b6
    MOV EAX,dword ptr [EBP + 0xc]       ; 0042b29c
    PUSH 0x5d55e1                       ; 0042b29f | = "jeff.dfm"
    ADD EAX,0x24a8                      ; 0042b2a4
    PUSH EAX                            ; 0042b2a9
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 0042b2aa
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 0042b2af
    TEST EAX,EAX                        ; 0042b2b2
    JZ 0x0042b2e6                       ; 0042b2b4
        ;   XREF to: 0042b2e6 (CONDITIONAL_JUMP)  ; LAB_0042b2e6
    PUSH 0x3                            ; 0042b2b6
        ;   Label: LAB_0042b2b6
    MOV EAX,dword ptr [EBP + 0xc]       ; 0042b2b8
    PUSH 0x5d55ea                       ; 0042b2bb | DAT_005d55ea
    ADD EAX,0x24a8                      ; 0042b2c0
    PUSH EAX                            ; 0042b2c5
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 0042b2c6
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 0042b2cb
    TEST EAX,EAX                        ; 0042b2ce
    JNZ 0x0042b308                      ; 0042b2d0
        ;   XREF to: 0042b308 (CONDITIONAL_JUMP)  ; LAB_0042b308
    CMP EBX,0x2                         ; 0042b2d2
    JNC 0x0042b2f0                      ; 0042b2d5
        ;   XREF to: 0042b2f0 (CONDITIONAL_JUMP)  ; LAB_0042b2f0
    CMP EBX,0x1                         ; 0042b2d7
    JNZ 0x0042b2f7                      ; 0042b2da
        ;   XREF to: 0042b2f7 (CONDITIONAL_JUMP)  ; LAB_0042b2f7
    MOV EBX,0x1                         ; 0042b2dc
        ;   Label: LAB_0042b2dc
    MOV EAX,EBX                         ; 0042b2e1
    POP EBP                             ; 0042b2e3
    POP EBX                             ; 0042b2e4
    RET                                 ; 0042b2e5
    MOV EBX,0xffffffff                  ; 0042b2e6
        ;   Label: LAB_0042b2e6
    MOV EAX,EBX                         ; 0042b2eb
    POP EBP                             ; 0042b2ed
    POP EBX                             ; 0042b2ee
    RET                                 ; 0042b2ef
    JBE 0x0042b2dc                      ; 0042b2f0
        ;   XREF to: 0042b2dc (CONDITIONAL_JUMP)  ; LAB_0042b2dc
        ;   Label: LAB_0042b2f0
    CMP EBX,0x3                         ; 0042b2f2
    JZ 0x0042b2dc                       ; 0042b2f5
        ;   XREF to: 0042b2dc (CONDITIONAL_JUMP)  ; LAB_0042b2dc
    MOV EBX,0xffffffff                  ; 0042b2f7
        ;   Label: LAB_0042b2f7
    MOV EAX,EBX                         ; 0042b2fc
    POP EBP                             ; 0042b2fe
    POP EBX                             ; 0042b2ff
    RET                                 ; 0042b300
    XOR EBX,EBX                         ; 0042b301
        ;   Label: LAB_0042b301
    MOV EAX,EBX                         ; 0042b303
    POP EBP                             ; 0042b305
    POP EBX                             ; 0042b306
    RET                                 ; 0042b307
    CMP EBX,0x2                         ; 0042b308
        ;   Label: LAB_0042b308
    JNC 0x0042b31c                      ; 0042b30b
        ;   XREF to: 0042b31c (CONDITIONAL_JUMP)  ; LAB_0042b31c
    CMP EBX,0x1                         ; 0042b30d
    JZ 0x0042b2dc                       ; 0042b310
        ;   XREF to: 0042b2dc (CONDITIONAL_JUMP)  ; LAB_0042b2dc
    MOV EBX,0xffffffff                  ; 0042b312
    MOV EAX,EBX                         ; 0042b317
    POP EBP                             ; 0042b319
    POP EBX                             ; 0042b31a
    RET                                 ; 0042b31b
    JBE 0x0042b301                      ; 0042b31c
        ;   XREF to: 0042b301 (CONDITIONAL_JUMP)  ; LAB_0042b301
        ;   Label: LAB_0042b31c
    CMP EBX,0x3                         ; 0042b31e
    JZ 0x0042b2dc                       ; 0042b321
        ;   XREF to: 0042b2dc (CONDITIONAL_JUMP)  ; LAB_0042b2dc
    MOV EBX,0xffffffff                  ; 0042b323
    MOV EAX,EBX                         ; 0042b328
    POP EBP                             ; 0042b32a
    POP EBX                             ; 0042b32b
    RET                                 ; 0042b32c

