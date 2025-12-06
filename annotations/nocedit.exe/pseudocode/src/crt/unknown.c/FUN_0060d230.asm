; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060d230()
;
;
; XREF[1]:
;   crt_unknown.c_staticInit_FUN_0060aef4 at 0060aef6
;
; Referenced Globals:
;   GetACP* PTR_GetACP_00611560 = 00211de2
;   GetCPInfo* PTR_GetCPInfo_00611564 = 00211dec
;   GetOEMCP* PTR_GetOEMCP_006115b8 = 00211f82
;   uint g_CodePage = 0x1
;   int g_MultibyteLocaleActive
;   undefined4 DAT_03f9c030
;   char[256] g_LeadByteTable
;   undefined4 CHAR_ARRAY_03f9c0b2
;   undefined4 CHAR_ARRAY_03f9c0b3
;   undefined4 CHAR_ARRAY_03f9c111
;   undefined4 CHAR_ARRAY_03f9c112
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060d230
        ;   Label: crt_unknown.c_FUN_0060d230
    PUSH ESI                            ; 0060d231
    PUSH EBP                            ; 0060d232
    SUB ESP,0x14                        ; 0060d233
    MOV ESI,dword ptr [ESP + 0x24]      ; 0060d236
    CMP ESI,-0x1                        ; 0060d23a
    JNZ 0x0060d24d                      ; 0060d23d | LAB_0060d24d
        ;   XREF to: 0060d24d (CONDITIONAL_JUMP)
    CALL dword ptr CS:[0x611560]        ; 0060d23f | GetACP * PTR_GetACP_00611560
    MOV ESI,EAX                         ; 0060d246
    JMP 0x0060d2eb                      ; 0060d248 | LAB_0060d2eb
        ;   XREF to: 0060d2eb (UNCONDITIONAL_JUMP)
    CMP ESI,-0x2                        ; 0060d24d
        ;   Label: LAB_0060d24d
    JNZ 0x0060d260                      ; 0060d250 | LAB_0060d260
        ;   XREF to: 0060d260 (CONDITIONAL_JUMP)
    CALL dword ptr CS:[0x6115b8]        ; 0060d252 | GetOEMCP * PTR_GetOEMCP_006115b8
    MOV ESI,EAX                         ; 0060d259
    JMP 0x0060d2eb                      ; 0060d25b | LAB_0060d2eb
        ;   XREF to: 0060d2eb (UNCONDITIONAL_JUMP)
    CMP ESI,-0x3                        ; 0060d260
        ;   Label: LAB_0060d260
    JNZ 0x0060d28e                      ; 0060d263 | LAB_0060d28e
        ;   XREF to: 0060d28e (CONDITIONAL_JUMP)
    PUSH 0x101                          ; 0060d265
    PUSH 0x0                            ; 0060d26a
    PUSH 0x3f9c030                      ; 0060d26c | DAT_03f9c030
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060d271 | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060d276
    XOR EDX,EDX                         ; 0060d279
    XOR EAX,EAX                         ; 0060d27b
    MOV dword ptr [0x03f9c020],EDX      ; 0060d27d | int g_MultibyteLocaleActive
    MOV dword ptr [0x00685570],EDX      ; 0060d283 | uint g_CodePage
    JMP 0x0060d391                      ; 0060d289 | LAB_0060d391
        ;   XREF to: 0060d391 (UNCONDITIONAL_JUMP)
    CMP ESI,-0x4                        ; 0060d28e
        ;   Label: LAB_0060d28e
    JNZ 0x0060d2eb                      ; 0060d291 | LAB_0060d2eb
        ;   XREF to: 0060d2eb (CONDITIONAL_JUMP)
    PUSH 0x101                          ; 0060d293
    PUSH 0x0                            ; 0060d298
    PUSH 0x3f9c030                      ; 0060d29a | DAT_03f9c030
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060d29f | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV EAX,0x81                        ; 0060d2a4
    MOV DL,0x1                          ; 0060d2a9
    ADD ESP,0xc                         ; 0060d2ab
    INC EAX                             ; 0060d2ae
        ;   Label: LAB_0060d2ae
    MOV byte ptr [EAX + 0x3f9c030],DL   ; 0060d2af | CHAR_ARRAY_03f9c0b2
    CMP EAX,0x9f                        ; 0060d2b5
    JLE 0x0060d2ae                      ; 0060d2ba | LAB_0060d2ae
        ;   XREF to: 0060d2ae (CONDITIONAL_JUMP)
    MOV EAX,0xe0                        ; 0060d2bc
    MOV DH,0x1                          ; 0060d2c1
    INC EAX                             ; 0060d2c3
        ;   Label: LAB_0060d2c3
    MOV byte ptr [EAX + 0x3f9c030],DH   ; 0060d2c4 | CHAR_ARRAY_03f9c111
    CMP EAX,0xfc                        ; 0060d2ca
    JLE 0x0060d2c3                      ; 0060d2cf | LAB_0060d2c3
        ;   XREF to: 0060d2c3 (CONDITIONAL_JUMP)
    MOV EBP,0x1                         ; 0060d2d1
    MOV EAX,0x3a4                       ; 0060d2d6
    MOV dword ptr [0x03f9c020],EBP      ; 0060d2db | int g_MultibyteLocaleActive
    MOV [0x00685570],EAX                ; 0060d2e1 | uint g_CodePage
    JMP 0x0060d38f                      ; 0060d2e6 | LAB_0060d38f
        ;   XREF to: 0060d38f (UNCONDITIONAL_JUMP)
    TEST ESI,ESI                        ; 0060d2eb
        ;   Label: LAB_0060d2eb
    JNZ 0x0060d2f4                      ; 0060d2ed | LAB_0060d2f4
        ;   XREF to: 0060d2f4 (CONDITIONAL_JUMP)
    MOV ESI,0x1                         ; 0060d2ef
    MOV EAX,ESP                         ; 0060d2f4
        ;   Label: LAB_0060d2f4
    PUSH EAX                            ; 0060d2f6
    PUSH ESI                            ; 0060d2f7
    CALL dword ptr CS:[0x611564]        ; 0060d2f8 | GetCPInfo * PTR_GetCPInfo_00611564
    TEST EAX,EAX                        ; 0060d2ff
    JNZ 0x0060d30f                      ; 0060d301 | LAB_0060d30f
        ;   XREF to: 0060d30f (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0060d303
    ADD ESP,0x14                        ; 0060d308
    POP EBP                             ; 0060d30b
    POP ESI                             ; 0060d30c
    POP EBX                             ; 0060d30d
    RET                                 ; 0060d30e
    PUSH 0x101                          ; 0060d30f
        ;   Label: LAB_0060d30f
    PUSH 0x0                            ; 0060d314
    PUSH 0x3f9c030                      ; 0060d316 | DAT_03f9c030
    CALL crt_memory.c_memset_FUN_005fde40 ; 0060d31b | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0060d320
    XOR ECX,ECX                         ; 0060d323
    MOV AH,byte ptr [ESP + 0x6]         ; 0060d325
    MOV dword ptr [0x03f9c020],ECX      ; 0060d329 | int g_MultibyteLocaleActive
    TEST AH,AH                          ; 0060d32f
    JZ 0x0060d33d                       ; 0060d331 | LAB_0060d33d
        ;   XREF to: 0060d33d (CONDITIONAL_JUMP)
    MOV dword ptr [0x03f9c020],0x1      ; 0060d333 | int g_MultibyteLocaleActive
    XOR EBX,EBX                         ; 0060d33d
        ;   Label: LAB_0060d33d
    MOV CL,0x1                          ; 0060d33f
    XOR CH,CH                           ; 0060d341
    JMP 0x0060d361                      ; 0060d343 | LAB_0060d361
        ;   XREF to: 0060d361 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0060d345
        ;   Label: LAB_0060d345
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 0060d347
    JMP 0x0060d354                      ; 0060d34b | LAB_0060d354
        ;   XREF to: 0060d354 (UNCONDITIONAL_JUMP)
    INC EAX                             ; 0060d34d
        ;   Label: LAB_0060d34d
    MOV byte ptr [EAX + 0x3f9c030],CL   ; 0060d34e | DAT_03f9c030 | char[256] g_LeadByteTable
    XOR EDX,EDX                         ; 0060d354
        ;   Label: LAB_0060d354
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x7] ; 0060d356
    CMP EAX,EDX                         ; 0060d35a
    JLE 0x0060d34d                      ; 0060d35c | LAB_0060d34d
        ;   XREF to: 0060d34d (CONDITIONAL_JUMP)
    ADD EBX,0x2                         ; 0060d35e
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 0060d361
        ;   Label: LAB_0060d361
    CMP CH,AL                           ; 0060d365
    JNZ 0x0060d345                      ; 0060d367 | LAB_0060d345
        ;   XREF to: 0060d345 (CONDITIONAL_JUMP)
    CMP AL,byte ptr [ESP + EBX*0x1 + 0x7] ; 0060d369
    JNZ 0x0060d345                      ; 0060d36d | LAB_0060d345
        ;   XREF to: 0060d345 (CONDITIONAL_JUMP)
    CMP ESI,0x1                         ; 0060d36f
    JNZ 0x0060d389                      ; 0060d372 | LAB_0060d389
        ;   XREF to: 0060d389 (CONDITIONAL_JUMP)
    CALL dword ptr CS:[0x6115b8]        ; 0060d374 | GetOEMCP * PTR_GetOEMCP_006115b8
    MOV [0x00685570],EAX                ; 0060d37b | uint g_CodePage
    XOR EAX,EAX                         ; 0060d380
    ADD ESP,0x14                        ; 0060d382
    POP EBP                             ; 0060d385
    POP ESI                             ; 0060d386
    POP EBX                             ; 0060d387
    RET                                 ; 0060d388
    MOV dword ptr [0x00685570],ESI      ; 0060d389 | uint g_CodePage
        ;   Label: LAB_0060d389
    XOR EAX,EAX                         ; 0060d38f
        ;   Label: LAB_0060d38f
    ADD ESP,0x14                        ; 0060d391
        ;   Label: LAB_0060d391
    POP EBP                             ; 0060d394
    POP ESI                             ; 0060d395
    POP EBX                             ; 0060d396
    RET                                 ; 0060d397

