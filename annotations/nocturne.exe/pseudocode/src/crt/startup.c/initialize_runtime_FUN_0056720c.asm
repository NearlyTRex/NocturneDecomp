; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c_initialize_runtime_FUN_0056720c(HMODULE hModule,void *pThreadParam,int unused)
;
; Parameters:
; HMODULE          Stack[0x4]:4   hModule
; void *           Stack[0x8]:4   pThreadParam
; int              Stack[0xc]:4   unused
;
; XREF[1]:
;   crt_startup.cpp_InitializeWinAppRuntime_FUN_00567458 at 0056746a
;
; Referenced Globals:
;   void* PTR_ExitProcess_005754b4 = 00175b8a
;   void* PTR_GetCommandLineA_005754e8 = 00175c70
;   void* PTR_GetCommandLineW_005754ec = 00175c82
;   void* PTR_GetEnvironmentStrings_00575508 = 00175d12
;   void* PTR_GetModuleFileNameA_00575524 = 00175d90
;   void* PTR_GetVersion_00575540 = 00175e18
;   undefined4 DAT_00598b2c
;   undefined4 DAT_005c168c
;   undefined4 DAT_005c1ccc
;   undefined4 DAT_005c1cd0
;   undefined4 DAT_005c1cd4
;   undefined4 DAT_005c1cd8
;   undefined4 DAT_005c1cdc
;   undefined4 DAT_005c1ce0
;   undefined4 DAT_005c1d09
;   ... and 14 more
;
; Called Functions:
;   ExitProcess
;   FUN_0056e1a0
;   FUN_0056e56c
;   FUN_0056e890
;   FUN_0056e940
;   FUN_0056e990
;   GetCommandLineA
;   GetCommandLineW
;   GetEnvironmentStrings
;   GetModuleFileNameA
;   GetVersion
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056720c
        ;   Label: crt_startup.c_initialize_runtime_FUN_0056720c
    PUSH ESI                            ; 0056720d
    PUSH EDI                            ; 0056720e
    PUSH EBP                            ; 0056720f
    MOV ESI,dword ptr [ESP + 0x14]      ; 00567210
    MOV EDX,dword ptr [ESP + 0x18]      ; 00567214
    PUSH EDX                            ; 00567218
    MOV dword ptr [0x02de4e30],ESI      ; 00567219 | DAT_02de4e30
    CALL FUN_0056e56c                   ; 0056721f
        ;   XREF to: 0056e56c (UNCONDITIONAL_CALL)  ; undefined FUN_0056e56c()
    ADD ESP,0x4                         ; 00567224
    MOV [0x02de4e3c],EAX                ; 00567227 | DAT_02de4e3c
    TEST EAX,EAX                        ; 0056722c
    JNZ 0x00567241                      ; 0056722e
        ;   XREF to: 00567241 (CONDITIONAL_JUMP)  ; LAB_00567241
    TEST ESI,ESI                        ; 00567230
    JNZ 0x00567451                      ; 00567232
        ;   XREF to: 00567451 (CONDITIONAL_JUMP)  ; LAB_00567451
    PUSH 0x1                            ; 00567238
    CALL dword ptr CS:[0x5754b4]        ; 0056723a | PTR_ExitProcess_005754b4
    CALL FUN_0056e1a0                   ; 00567241
        ;   XREF to: 0056e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e1a0()
        ;   Label: LAB_00567241
    CALL dword ptr CS:[0x575508]        ; 00567246 | PTR_GetEnvironmentStrings_00575508
    XOR EBX,EBX                         ; 0056724d
    MOV [0x005c1d09],EAX                ; 0056724f | DAT_005c1d09
    MOV dword ptr [0x02de54a4],EBX      ; 00567254 | DAT_02de54a4
    CALL dword ptr CS:[0x575540]        ; 0056725a | PTR_GetVersion_00575540
    MOV EDX,EAX                         ; 00567261
    MOV EBX,EAX                         ; 00567263
    MOV [0x005c1d0f],AL                 ; 00567265 | DAT_005c1d0f
    SHR EAX,0x10                        ; 0056726a
    AND EAX,0xffff                      ; 0056726d
    MOV [0x005c1d11],AX                 ; 00567272 | DAT_005c1d11
    XOR EAX,EAX                         ; 00567278
    MOV AX,[0x005c1d11]                 ; 0056727a | DAT_005c1d11
    AND EDX,0xffff                      ; 00567280
    MOV [0x005c1d13],EAX                ; 00567286 | DAT_005c1d13
    XOR EAX,EAX                         ; 0056728b
    SAR EDX,0x8                         ; 0056728d
    MOV AL,BL                           ; 00567290
    AND EDX,0xff                        ; 00567292
    MOV [0x005c1d17],EAX                ; 00567298 | DAT_005c1d17
    XOR EAX,EAX                         ; 0056729d
    PUSH 0x104                          ; 0056729f
    MOV AL,DL                           ; 005672a4
    MOV byte ptr [0x005c1d10],DL        ; 005672a6 | DAT_005c1d10
    MOV [0x005c1d1b],EAX                ; 005672ac | DAT_005c1d1b
    MOV EAX,[0x005c1d17]                ; 005672b1 | DAT_005c1d17
    MOV EDX,dword ptr [0x005c1d1b]      ; 005672b6 | DAT_005c1d1b
    SHL EAX,0x8                         ; 005672bc
    PUSH 0x2de4e40                      ; 005672bf | DAT_02de4e40
    OR EAX,EDX                          ; 005672c4
    PUSH 0x0                            ; 005672c6
    MOV [0x005c1d1f],EAX                ; 005672c8 | DAT_005c1d1f
    CALL dword ptr CS:[0x575524]        ; 005672cd | PTR_GetModuleFileNameA_00575524
    PUSH 0x208                          ; 005672d4
    PUSH 0x2de4f44                      ; 005672d9
    MOV ECX,0x2de4e40                   ; 005672de
    PUSH 0x0                            ; 005672e3
    MOV EDI,0x2de4f44                   ; 005672e5
    MOV dword ptr [0x005c1cd0],ECX      ; 005672ea | DAT_005c1cd0
    CALL FUN_0056e890                   ; 005672f0
        ;   XREF to: 0056e890 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e890()
    ADD ESP,0xc                         ; 005672f5
    MOV dword ptr [0x005c1cdc],EDI      ; 005672f8 | DAT_005c1cdc
    CALL dword ptr CS:[0x5754e8]        ; 005672fe | PTR_GetCommandLineA_005754e8
    PUSH EAX                            ; 00567305
    CALL FUN_0056e940                   ; 00567306
        ;   XREF to: 0056e940 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e940()
    MOV EDX,EAX                         ; 0056730b
    ADD ESP,0x4                         ; 0056730d
    MOV BL,byte ptr [EAX]               ; 00567310
    MOV [0x02de4e34],EAX                ; 00567312 | DAT_02de4e34
    CMP BL,0x22                         ; 00567317
    JNZ 0x0056733a                      ; 0056731a
        ;   XREF to: 0056733a (CONDITIONAL_JUMP)  ; LAB_0056733a
    MOV BH,byte ptr [EAX + 0x1]         ; 0056731c
    INC EAX                             ; 0056731f
    CMP BH,BL                           ; 00567320
    JZ 0x00567332                       ; 00567322
        ;   XREF to: 00567332 (CONDITIONAL_JUMP)  ; LAB_00567332
    CMP byte ptr [EAX],0x0              ; 00567324
        ;   Label: LAB_00567324
    JZ 0x00567332                       ; 00567327
        ;   XREF to: 00567332 (CONDITIONAL_JUMP)  ; LAB_00567332
    MOV DL,byte ptr [EAX + 0x1]         ; 00567329
    INC EAX                             ; 0056732c
    CMP DL,0x22                         ; 0056732d
    JNZ 0x00567324                      ; 00567330
        ;   XREF to: 00567324 (CONDITIONAL_JUMP)  ; LAB_00567324
    CMP byte ptr [EAX],0x0              ; 00567332
        ;   Label: LAB_00567332
    JZ 0x00567355                       ; 00567335
        ;   XREF to: 00567355 (CONDITIONAL_JUMP)  ; LAB_00567355
    INC EAX                             ; 00567337
    JMP 0x00567355                      ; 00567338
        ;   XREF to: 00567355 (UNCONDITIONAL_JUMP)  ; LAB_00567355
    MOV DL,byte ptr [EAX]               ; 0056733a
        ;   Label: LAB_0056733a
    INC DL                              ; 0056733c
    AND EDX,0xff                        ; 0056733e
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 00567344 | DAT_005c168c
    JNZ 0x00567355                      ; 0056734b
        ;   XREF to: 00567355 (CONDITIONAL_JUMP)  ; LAB_00567355
    CMP byte ptr [EAX],0x0              ; 0056734d
    JZ 0x00567355                       ; 00567350
        ;   XREF to: 00567355 (CONDITIONAL_JUMP)  ; LAB_00567355
    INC EAX                             ; 00567352
    JMP 0x0056733a                      ; 00567353
        ;   XREF to: 0056733a (UNCONDITIONAL_JUMP)  ; LAB_0056733a
    MOV DL,byte ptr [EAX]               ; 00567355
        ;   Label: LAB_00567355
    INC DL                              ; 00567357
    AND EDX,0xff                        ; 00567359
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0056735f | DAT_005c168c
    JZ 0x0056736b                       ; 00567366
        ;   XREF to: 0056736b (CONDITIONAL_JUMP)  ; LAB_0056736b
    INC EAX                             ; 00567368
    JMP 0x00567355                      ; 00567369
        ;   XREF to: 00567355 (UNCONDITIONAL_JUMP)  ; LAB_00567355
    MOV [0x005c1ccc],EAX                ; 0056736b | DAT_005c1ccc
        ;   Label: LAB_0056736b
    CALL dword ptr CS:[0x5754ec]        ; 00567370 | PTR_GetCommandLineW_005754ec
    TEST EAX,EAX                        ; 00567377
    JZ 0x00567400                       ; 00567379
        ;   XREF to: 00567400 (CONDITIONAL_JUMP)  ; LAB_00567400
    PUSH EAX                            ; 0056737f
    CALL FUN_0056e990                   ; 00567380
        ;   XREF to: 0056e990 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e990()
    MOV EDX,EAX                         ; 00567385
    ADD ESP,0x4                         ; 00567387
    MOV BX,word ptr [EAX]               ; 0056738a
    MOV [0x02de4e38],EAX                ; 0056738d | DAT_02de4e38
    CMP BX,0x22                         ; 00567392
    JNZ 0x005673c2                      ; 00567396
        ;   XREF to: 005673c2 (CONDITIONAL_JUMP)  ; LAB_005673c2
    MOV CX,word ptr [EAX + 0x2]         ; 00567398
    ADD EAX,0x2                         ; 0056739c
    CMP CX,BX                           ; 0056739f
    JZ 0x005673b7                       ; 005673a2
        ;   XREF to: 005673b7 (CONDITIONAL_JUMP)  ; LAB_005673b7
    CMP word ptr [EAX],0x0              ; 005673a4
        ;   Label: LAB_005673a4
    JZ 0x005673b7                       ; 005673a8
        ;   XREF to: 005673b7 (CONDITIONAL_JUMP)  ; LAB_005673b7
    MOV DX,word ptr [EAX + 0x2]         ; 005673aa
    ADD EAX,0x2                         ; 005673ae
    CMP DX,0x22                         ; 005673b1
    JNZ 0x005673a4                      ; 005673b5
        ;   XREF to: 005673a4 (CONDITIONAL_JUMP)  ; LAB_005673a4
    CMP word ptr [EAX],0x0              ; 005673b7
        ;   Label: LAB_005673b7
    JZ 0x005673e4                       ; 005673bb
        ;   XREF to: 005673e4 (CONDITIONAL_JUMP)  ; LAB_005673e4
    ADD EAX,0x2                         ; 005673bd
    JMP 0x005673e4                      ; 005673c0
        ;   XREF to: 005673e4 (UNCONDITIONAL_JUMP)  ; LAB_005673e4
    MOV EBX,0x2                         ; 005673c2
        ;   Label: LAB_005673c2
    MOV DL,byte ptr [EAX]               ; 005673c7
        ;   Label: LAB_005673c7
    INC DL                              ; 005673c9
    AND EDX,0xff                        ; 005673cb
    TEST byte ptr [EDX + 0x5c168c],BL   ; 005673d1 | DAT_005c168c
    JNZ 0x005673e4                      ; 005673d7
        ;   XREF to: 005673e4 (CONDITIONAL_JUMP)  ; LAB_005673e4
    CMP word ptr [EAX],0x0              ; 005673d9
    JZ 0x005673e4                       ; 005673dd
        ;   XREF to: 005673e4 (CONDITIONAL_JUMP)  ; LAB_005673e4
    ADD EAX,0x2                         ; 005673df
    JMP 0x005673c7                      ; 005673e2
        ;   XREF to: 005673c7 (UNCONDITIONAL_JUMP)  ; LAB_005673c7
    MOV EBX,0x2                         ; 005673e4
        ;   Label: LAB_005673e4
    MOV DL,byte ptr [EAX]               ; 005673e9
        ;   Label: LAB_005673e9
    INC DL                              ; 005673eb
    AND EDX,0xff                        ; 005673ed
    TEST byte ptr [EDX + 0x5c168c],BL   ; 005673f3 | DAT_005c168c
    JZ 0x00567405                       ; 005673f9
        ;   XREF to: 00567405 (CONDITIONAL_JUMP)  ; LAB_00567405
    ADD EAX,0x2                         ; 005673fb
    JMP 0x005673e9                      ; 005673fe
        ;   XREF to: 005673e9 (UNCONDITIONAL_JUMP)  ; LAB_005673e9
    MOV EAX,0x598b2c                    ; 00567400 | DAT_00598b2c
        ;   Label: LAB_00567400
    MOV [0x005c1cd8],EAX                ; 00567405 | DAT_005c1cd8
        ;   Label: LAB_00567405
    TEST ESI,ESI                        ; 0056740a
    JZ 0x0056744c                       ; 0056740c
        ;   XREF to: 0056744c (CONDITIONAL_JUMP)  ; LAB_0056744c
    PUSH 0x104                          ; 0056740e
    PUSH 0x2de514c                      ; 00567413 | DAT_02de514c
    MOV EBP,dword ptr [ESP + 0x24]      ; 00567418
    PUSH EBP                            ; 0056741c
    CALL dword ptr CS:[0x575524]        ; 0056741d | PTR_GetModuleFileNameA_00575524
    PUSH 0x208                          ; 00567424
    PUSH 0x2de5250                      ; 00567429
    MOV EAX,0x2de514c                   ; 0056742e
    PUSH EBP                            ; 00567433
    MOV EBX,0x2de5250                   ; 00567434
    MOV [0x005c1cd4],EAX                ; 00567439 | DAT_005c1cd4
    CALL FUN_0056e890                   ; 0056743e
        ;   XREF to: 0056e890 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e890()
    ADD ESP,0xc                         ; 00567443
    MOV dword ptr [0x005c1ce0],EBX      ; 00567446 | DAT_005c1ce0
    MOV EAX,0x1                         ; 0056744c
        ;   Label: LAB_0056744c
    POP EBP                             ; 00567451
        ;   Label: LAB_00567451
    POP EDI                             ; 00567452
    POP ESI                             ; 00567453
    POP EBX                             ; 00567454
    RET                                 ; 00567455

