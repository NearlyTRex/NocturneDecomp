; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c50fc(int param_1,undefined4 param_2,HMODULE param_3)
;
;
; XREF[1]:
;   FUN_005c5348 at 005c535a
;
; Referenced Globals:
;   void* PTR_ExitProcess_005d0544 = 001d0d10
;   void* PTR_GetCommandLineA_005d0574 = 001d0dde
;   void* PTR_GetCommandLineW_005d0578 = 001d0df0
;   void* PTR_GetEnvironmentStrings_005d0598 = 001d0e94
;   void* PTR_GetModuleFileNameA_005d05b8 = 001d0f20
;   void* PTR_GetVersion_005d05d8 = 001d0fbc
;   undefined4 DAT_005fab8c
;   undefined4 DAT_00626114
;   undefined4 DAT_0062659c
;   undefined4 DAT_006265a0
;   undefined4 DAT_006265a4
;   undefined4 DAT_006265a8
;   undefined4 DAT_006265ac
;   undefined4 DAT_006265b0
;   undefined4 DAT_006265d9
;   ... and 14 more
;
; Called Functions:
;   ExitProcess
;   FUN_005c8d50
;   FUN_005cac3c
;   FUN_005caf60
;   FUN_005cb010
;   FUN_005cb060
;   GetCommandLineA
;   GetCommandLineW
;   GetEnvironmentStrings
;   GetModuleFileNameA
;   GetVersion
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c50fc
        ;   Label: FUN_005c50fc
    PUSH ESI                            ; 005c50fd
    PUSH EDI                            ; 005c50fe
    PUSH EBP                            ; 005c50ff
    MOV ESI,dword ptr [ESP + 0x14]      ; 005c5100
    MOV EDX,dword ptr [ESP + 0x18]      ; 005c5104
    PUSH EDX                            ; 005c5108
    MOV dword ptr [0x02c9f060],ESI      ; 005c5109 | DAT_02c9f060
    CALL FUN_005cac3c                   ; 005c510f
        ;   XREF to: 005cac3c (UNCONDITIONAL_CALL)  ; undefined FUN_005cac3c()
    ADD ESP,0x4                         ; 005c5114
    MOV [0x02c9f06c],EAX                ; 005c5117 | DAT_02c9f06c
    TEST EAX,EAX                        ; 005c511c
    JNZ 0x005c5131                      ; 005c511e
        ;   XREF to: 005c5131 (CONDITIONAL_JUMP)  ; LAB_005c5131
    TEST ESI,ESI                        ; 005c5120
    JNZ 0x005c5341                      ; 005c5122
        ;   XREF to: 005c5341 (CONDITIONAL_JUMP)  ; LAB_005c5341
    PUSH 0x1                            ; 005c5128
    CALL dword ptr CS:[0x5d0544]        ; 005c512a | PTR_ExitProcess_005d0544
    CALL FUN_005c8d50                   ; 005c5131
        ;   XREF to: 005c8d50 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8d50()
        ;   Label: LAB_005c5131
    CALL dword ptr CS:[0x5d0598]        ; 005c5136 | PTR_GetEnvironmentStrings_005d0598
    XOR EBX,EBX                         ; 005c513d
    MOV [0x006265d9],EAX                ; 005c513f | DAT_006265d9
    MOV dword ptr [0x02c9f6d4],EBX      ; 005c5144 | DAT_02c9f6d4
    CALL dword ptr CS:[0x5d05d8]        ; 005c514a | PTR_GetVersion_005d05d8
    MOV EDX,EAX                         ; 005c5151
    MOV EBX,EAX                         ; 005c5153
    MOV [0x006265df],AL                 ; 005c5155 | DAT_006265df
    SHR EAX,0x10                        ; 005c515a
    AND EAX,0xffff                      ; 005c515d
    MOV [0x006265e1],AX                 ; 005c5162 | DAT_006265e1
    XOR EAX,EAX                         ; 005c5168
    MOV AX,[0x006265e1]                 ; 005c516a | DAT_006265e1
    AND EDX,0xffff                      ; 005c5170
    MOV [0x006265e3],EAX                ; 005c5176 | DAT_006265e3
    XOR EAX,EAX                         ; 005c517b
    SAR EDX,0x8                         ; 005c517d
    MOV AL,BL                           ; 005c5180
    AND EDX,0xff                        ; 005c5182
    MOV [0x006265e7],EAX                ; 005c5188 | DAT_006265e7
    XOR EAX,EAX                         ; 005c518d
    PUSH 0x104                          ; 005c518f
    MOV AL,DL                           ; 005c5194
    MOV byte ptr [0x006265e0],DL        ; 005c5196 | DAT_006265e0
    MOV [0x006265eb],EAX                ; 005c519c | DAT_006265eb
    MOV EAX,[0x006265e7]                ; 005c51a1 | DAT_006265e7
    MOV EDX,dword ptr [0x006265eb]      ; 005c51a6 | DAT_006265eb
    SHL EAX,0x8                         ; 005c51ac
    PUSH 0x2c9f070                      ; 005c51af | DAT_02c9f070
    OR EAX,EDX                          ; 005c51b4
    PUSH 0x0                            ; 005c51b6
    MOV [0x006265ef],EAX                ; 005c51b8 | DAT_006265ef
    CALL dword ptr CS:[0x5d05b8]        ; 005c51bd | PTR_GetModuleFileNameA_005d05b8
    PUSH 0x208                          ; 005c51c4
    PUSH 0x2c9f174                      ; 005c51c9
    MOV ECX,0x2c9f070                   ; 005c51ce
    PUSH 0x0                            ; 005c51d3
    MOV EDI,0x2c9f174                   ; 005c51d5
    MOV dword ptr [0x006265a0],ECX      ; 005c51da | DAT_006265a0
    CALL FUN_005caf60                   ; 005c51e0
        ;   XREF to: 005caf60 (UNCONDITIONAL_CALL)  ; undefined FUN_005caf60()
    ADD ESP,0xc                         ; 005c51e5
    MOV dword ptr [0x006265ac],EDI      ; 005c51e8 | DAT_006265ac
    CALL dword ptr CS:[0x5d0574]        ; 005c51ee | PTR_GetCommandLineA_005d0574
    PUSH EAX                            ; 005c51f5
    CALL FUN_005cb010                   ; 005c51f6
        ;   XREF to: 005cb010 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb010()
    MOV EDX,EAX                         ; 005c51fb
    ADD ESP,0x4                         ; 005c51fd
    MOV BL,byte ptr [EAX]               ; 005c5200
    MOV [0x02c9f064],EAX                ; 005c5202 | DAT_02c9f064
    CMP BL,0x22                         ; 005c5207
    JNZ 0x005c522a                      ; 005c520a
        ;   XREF to: 005c522a (CONDITIONAL_JUMP)  ; LAB_005c522a
    MOV BH,byte ptr [EAX + 0x1]         ; 005c520c
    INC EAX                             ; 005c520f
    CMP BH,BL                           ; 005c5210
    JZ 0x005c5222                       ; 005c5212
        ;   XREF to: 005c5222 (CONDITIONAL_JUMP)  ; LAB_005c5222
    CMP byte ptr [EAX],0x0              ; 005c5214
        ;   Label: LAB_005c5214
    JZ 0x005c5222                       ; 005c5217
        ;   XREF to: 005c5222 (CONDITIONAL_JUMP)  ; LAB_005c5222
    MOV DL,byte ptr [EAX + 0x1]         ; 005c5219
    INC EAX                             ; 005c521c
    CMP DL,0x22                         ; 005c521d
    JNZ 0x005c5214                      ; 005c5220
        ;   XREF to: 005c5214 (CONDITIONAL_JUMP)  ; LAB_005c5214
    CMP byte ptr [EAX],0x0              ; 005c5222
        ;   Label: LAB_005c5222
    JZ 0x005c5245                       ; 005c5225
        ;   XREF to: 005c5245 (CONDITIONAL_JUMP)  ; LAB_005c5245
    INC EAX                             ; 005c5227
    JMP 0x005c5245                      ; 005c5228
        ;   XREF to: 005c5245 (UNCONDITIONAL_JUMP)  ; LAB_005c5245
    MOV DL,byte ptr [EAX]               ; 005c522a
        ;   Label: LAB_005c522a
    INC DL                              ; 005c522c
    AND EDX,0xff                        ; 005c522e
    TEST byte ptr [EDX + 0x626114],0x2  ; 005c5234 | DAT_00626114
    JNZ 0x005c5245                      ; 005c523b
        ;   XREF to: 005c5245 (CONDITIONAL_JUMP)  ; LAB_005c5245
    CMP byte ptr [EAX],0x0              ; 005c523d
    JZ 0x005c5245                       ; 005c5240
        ;   XREF to: 005c5245 (CONDITIONAL_JUMP)  ; LAB_005c5245
    INC EAX                             ; 005c5242
    JMP 0x005c522a                      ; 005c5243
        ;   XREF to: 005c522a (UNCONDITIONAL_JUMP)  ; LAB_005c522a
    MOV DL,byte ptr [EAX]               ; 005c5245
        ;   Label: LAB_005c5245
    INC DL                              ; 005c5247
    AND EDX,0xff                        ; 005c5249
    TEST byte ptr [EDX + 0x626114],0x2  ; 005c524f | DAT_00626114
    JZ 0x005c525b                       ; 005c5256
        ;   XREF to: 005c525b (CONDITIONAL_JUMP)  ; LAB_005c525b
    INC EAX                             ; 005c5258
    JMP 0x005c5245                      ; 005c5259
        ;   XREF to: 005c5245 (UNCONDITIONAL_JUMP)  ; LAB_005c5245
    MOV [0x0062659c],EAX                ; 005c525b | DAT_0062659c
        ;   Label: LAB_005c525b
    CALL dword ptr CS:[0x5d0578]        ; 005c5260 | PTR_GetCommandLineW_005d0578
    TEST EAX,EAX                        ; 005c5267
    JZ 0x005c52f0                       ; 005c5269
        ;   XREF to: 005c52f0 (CONDITIONAL_JUMP)  ; LAB_005c52f0
    PUSH EAX                            ; 005c526f
    CALL FUN_005cb060                   ; 005c5270
        ;   XREF to: 005cb060 (UNCONDITIONAL_CALL)  ; undefined FUN_005cb060()
    MOV EDX,EAX                         ; 005c5275
    ADD ESP,0x4                         ; 005c5277
    MOV BX,word ptr [EAX]               ; 005c527a
    MOV [0x02c9f068],EAX                ; 005c527d | DAT_02c9f068
    CMP BX,0x22                         ; 005c5282
    JNZ 0x005c52b2                      ; 005c5286
        ;   XREF to: 005c52b2 (CONDITIONAL_JUMP)  ; LAB_005c52b2
    MOV CX,word ptr [EAX + 0x2]         ; 005c5288
    ADD EAX,0x2                         ; 005c528c
    CMP CX,BX                           ; 005c528f
    JZ 0x005c52a7                       ; 005c5292
        ;   XREF to: 005c52a7 (CONDITIONAL_JUMP)  ; LAB_005c52a7
    CMP word ptr [EAX],0x0              ; 005c5294
        ;   Label: LAB_005c5294
    JZ 0x005c52a7                       ; 005c5298
        ;   XREF to: 005c52a7 (CONDITIONAL_JUMP)  ; LAB_005c52a7
    MOV DX,word ptr [EAX + 0x2]         ; 005c529a
    ADD EAX,0x2                         ; 005c529e
    CMP DX,0x22                         ; 005c52a1
    JNZ 0x005c5294                      ; 005c52a5
        ;   XREF to: 005c5294 (CONDITIONAL_JUMP)  ; LAB_005c5294
    CMP word ptr [EAX],0x0              ; 005c52a7
        ;   Label: LAB_005c52a7
    JZ 0x005c52d4                       ; 005c52ab
        ;   XREF to: 005c52d4 (CONDITIONAL_JUMP)  ; LAB_005c52d4
    ADD EAX,0x2                         ; 005c52ad
    JMP 0x005c52d4                      ; 005c52b0
        ;   XREF to: 005c52d4 (UNCONDITIONAL_JUMP)  ; LAB_005c52d4
    MOV EBX,0x2                         ; 005c52b2
        ;   Label: LAB_005c52b2
    MOV DL,byte ptr [EAX]               ; 005c52b7
        ;   Label: LAB_005c52b7
    INC DL                              ; 005c52b9
    AND EDX,0xff                        ; 005c52bb
    TEST byte ptr [EDX + 0x626114],BL   ; 005c52c1 | DAT_00626114
    JNZ 0x005c52d4                      ; 005c52c7
        ;   XREF to: 005c52d4 (CONDITIONAL_JUMP)  ; LAB_005c52d4
    CMP word ptr [EAX],0x0              ; 005c52c9
    JZ 0x005c52d4                       ; 005c52cd
        ;   XREF to: 005c52d4 (CONDITIONAL_JUMP)  ; LAB_005c52d4
    ADD EAX,0x2                         ; 005c52cf
    JMP 0x005c52b7                      ; 005c52d2
        ;   XREF to: 005c52b7 (UNCONDITIONAL_JUMP)  ; LAB_005c52b7
    MOV EBX,0x2                         ; 005c52d4
        ;   Label: LAB_005c52d4
    MOV DL,byte ptr [EAX]               ; 005c52d9
        ;   Label: LAB_005c52d9
    INC DL                              ; 005c52db
    AND EDX,0xff                        ; 005c52dd
    TEST byte ptr [EDX + 0x626114],BL   ; 005c52e3 | DAT_00626114
    JZ 0x005c52f5                       ; 005c52e9
        ;   XREF to: 005c52f5 (CONDITIONAL_JUMP)  ; LAB_005c52f5
    ADD EAX,0x2                         ; 005c52eb
    JMP 0x005c52d9                      ; 005c52ee
        ;   XREF to: 005c52d9 (UNCONDITIONAL_JUMP)  ; LAB_005c52d9
    MOV EAX,0x5fab8c                    ; 005c52f0 | DAT_005fab8c
        ;   Label: LAB_005c52f0
    MOV [0x006265a8],EAX                ; 005c52f5 | DAT_006265a8
        ;   Label: LAB_005c52f5
    TEST ESI,ESI                        ; 005c52fa
    JZ 0x005c533c                       ; 005c52fc
        ;   XREF to: 005c533c (CONDITIONAL_JUMP)  ; LAB_005c533c
    PUSH 0x104                          ; 005c52fe
    PUSH 0x2c9f37c                      ; 005c5303 | DAT_02c9f37c
    MOV EBP,dword ptr [ESP + 0x24]      ; 005c5308
    PUSH EBP                            ; 005c530c
    CALL dword ptr CS:[0x5d05b8]        ; 005c530d | PTR_GetModuleFileNameA_005d05b8
    PUSH 0x208                          ; 005c5314
    PUSH 0x2c9f480                      ; 005c5319
    MOV EAX,0x2c9f37c                   ; 005c531e
    PUSH EBP                            ; 005c5323
    MOV EBX,0x2c9f480                   ; 005c5324
    MOV [0x006265a4],EAX                ; 005c5329 | DAT_006265a4
    CALL FUN_005caf60                   ; 005c532e
        ;   XREF to: 005caf60 (UNCONDITIONAL_CALL)  ; undefined FUN_005caf60()
    ADD ESP,0xc                         ; 005c5333
    MOV dword ptr [0x006265b0],EBX      ; 005c5336 | DAT_006265b0
    MOV EAX,0x1                         ; 005c533c
        ;   Label: LAB_005c533c
    POP EBP                             ; 005c5341
        ;   Label: LAB_005c5341
    POP EDI                             ; 005c5342
    POP ESI                             ; 005c5343
    POP EBX                             ; 005c5344
    RET                                 ; 005c5345

