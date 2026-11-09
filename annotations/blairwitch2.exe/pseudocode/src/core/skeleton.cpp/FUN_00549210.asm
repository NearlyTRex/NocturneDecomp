; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_00549210(char *param_1)
;
;
; XREF[1]:
;   core_charactr.cpp_FUN_00422be0 at 00422c02
;
; Referenced Globals:
;   undefined4 g_DeformableModelPool[0].field10864_0x2a70
;   undefined4 DAT_02177ff4
;   undefined4 DAT_02628554
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549210
        ;   Label: core_skeleton.cpp_FUN_00549210
    PUSH ESI                            ; 00549211
    PUSH EDI                            ; 00549212
    PUSH EBP                            ; 00549213
    MOV EBP,ESP                         ; 00549214
    MOV ESI,0x20ccff4                   ; 00549216
    XOR EBX,EBX                         ; 0054921b
    ADD ESI,0x2a70                      ; 0054921d
    IMUL EAX,EBX,0x2ac0                 ; 00549223
        ;   Label: LAB_00549223
    MOV EDX,dword ptr [EBP + 0x14]      ; 00549229
    PUSH EDX                            ; 0054922c
    MOV EDI,0x20ccff4                   ; 0054922d
    PUSH ESI                            ; 00549232 | g_DeformableModelPool[0].field10864_0x2a70
    ADD EDI,EAX                         ; 00549233
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00549235
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0054923a
    TEST EAX,EAX                        ; 0054923d
    JZ 0x00549252                       ; 0054923f
        ;   XREF to: 00549252 (CONDITIONAL_JUMP)  ; LAB_00549252
    INC EBX                             ; 00549241
    ADD ESI,0x2ac0                      ; 00549242
    CMP EBX,0x40                        ; 00549248
    JL 0x00549223                       ; 0054924b
        ;   XREF to: 00549223 (CONDITIONAL_JUMP)  ; LAB_00549223
    POP EBP                             ; 0054924d
    POP EDI                             ; 0054924e
    POP ESI                             ; 0054924f
    POP EBX                             ; 00549250
    RET                                 ; 00549251
    MOV ECX,0x1                         ; 00549252
        ;   Label: LAB_00549252
    MOV ESI,0x21780f4                   ; 00549257
    ADD EDI,0x2a1c                      ; 0054925c
    ADD ESI,0x1d1a8                     ; 00549262
    MOV dword ptr [EBX*0x4 + 0x2177ff4],ECX ; 00549268 | DAT_02177ff4
    XOR EBX,EBX                         ; 0054926f
    PUSH ESI                            ; 00549271
        ;   Label: LAB_00549271
    PUSH EDI                            ; 00549272
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00549273
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00549278
    TEST EAX,EAX                        ; 0054927b
    JZ 0x00549290                       ; 0054927d
        ;   XREF to: 00549290 (CONDITIONAL_JUMP)  ; LAB_00549290
    INC EBX                             ; 0054927f
    ADD ESI,0x1e01c                     ; 00549280
    CMP EBX,0x28                        ; 00549286
    JL 0x00549271                       ; 00549289
        ;   XREF to: 00549271 (CONDITIONAL_JUMP)  ; LAB_00549271
    POP EBP                             ; 0054928b
    POP EDI                             ; 0054928c
    POP ESI                             ; 0054928d
    POP EBX                             ; 0054928e
    RET                                 ; 0054928f
    MOV dword ptr [EBX*0x4 + 0x2628554],0x1 ; 00549290 | DAT_02628554
        ;   Label: LAB_00549290
    POP EBP                             ; 0054929b
    POP EDI                             ; 0054929c
    POP ESI                             ; 0054929d
    POP EBX                             ; 0054929e
    RET                                 ; 0054929f

