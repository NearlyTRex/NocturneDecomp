; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_file_c_makepath_FUN_005a521c(char *path_buffer,char *drive,char *directory,char *filename,char *extension)
;
; Parameters:
; char *           Stack[0x4]:4   path_buffer
; char *           Stack[0x8]:4   drive
; char *           Stack[0xc]:4   directory
; char *           Stack[0x10]:4   filename
; char *           Stack[0x14]:4   extension
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_mission.cpp_FUN_004f63c0 at 004f63e1
;   engine_dosio.cpp_makePath_FUN_00465e80 at 00465e9c
;
; Called Functions:
;   crt_unknown.c_FUN_005a5200
;   crt_unknown.c_FUN_005ac9c0
;   crt_unknown.c_FUN_005aca00
;   crt_unknown.c_FUN_005aca30
;   crt_unknown.c_FUN_005aca50
;   crt_unknown.c_FUN_005aca80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a521c
        ;   Label: crt_file.c_makepath_FUN_005a521c
    PUSH ESI                            ; 005a521d
    PUSH EDI                            ; 005a521e
    PUSH EBP                            ; 005a521f
    SUB ESP,0x8                         ; 005a5220
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005a5223
    MOV EDX,dword ptr [ESP + 0x20]      ; 005a5227
    MOV EBP,dword ptr [ESP + 0x2c]      ; 005a522b
    XOR ECX,ECX                         ; 005a522f
    MOV dword ptr [ESP + 0x4],EBX       ; 005a5231
    MOV dword ptr [ESP],ECX             ; 005a5235
    TEST EDX,EDX                        ; 005a5238
    JZ 0x005a528a                       ; 005a523a
        ;   XREF to: 005a528a (CONDITIONAL_JUMP)  ; LAB_005a528a
    MOV AH,byte ptr [EDX]               ; 005a523c
    TEST AH,AH                          ; 005a523e
    JZ 0x005a528a                       ; 005a5240
        ;   XREF to: 005a528a (CONDITIONAL_JUMP)  ; LAB_005a528a
    CMP AH,0x5c                         ; 005a5242
    JNZ 0x005a5280                      ; 005a5245
        ;   XREF to: 005a5280 (CONDITIONAL_JUMP)  ; LAB_005a5280
    CMP AH,byte ptr [EDX + 0x1]         ; 005a5247
    JNZ 0x005a5280                      ; 005a524a
        ;   XREF to: 005a5280 (CONDITIONAL_JUMP)  ; LAB_005a5280
    MOV ESI,EDX                         ; 005a524c
    MOV EDI,EBX                         ; 005a524e
    PUSH EDI                            ; 005a5250
    MOV AL,byte ptr [ESI]               ; 005a5251
        ;   Label: LAB_005a5251
    MOV byte ptr [EDI],AL               ; 005a5253
    CMP AL,0x0                          ; 005a5255
    JZ 0x005a5269                       ; 005a5257
        ;   XREF to: 005a5269 (CONDITIONAL_JUMP)  ; LAB_005a5269
    MOV AL,byte ptr [ESI + 0x1]         ; 005a5259
    ADD ESI,0x2                         ; 005a525c
    MOV byte ptr [EDI + 0x1],AL         ; 005a525f
    ADD EDI,0x2                         ; 005a5262
    CMP AL,0x0                          ; 005a5265
    JNZ 0x005a5251                      ; 005a5267
        ;   XREF to: 005a5251 (CONDITIONAL_JUMP)  ; LAB_005a5251
    POP EDI                             ; 005a5269
        ;   Label: LAB_005a5269
    MOV EDI,EDX                         ; 005a526a
    PUSH ES                             ; 005a526c
    MOV AX,DS                           ; 005a526d
    MOV ES,AX                           ; 005a526f
    SUB ECX,ECX                         ; 005a5271
    DEC ECX                             ; 005a5273
    XOR EAX,EAX                         ; 005a5274
    SCASB.REPNE ES:EDI                  ; 005a5276
    NOT ECX                             ; 005a5278
    DEC ECX                             ; 005a527a
    POP ES                              ; 005a527b
    ADD EBX,ECX                         ; 005a527c
    JMP 0x005a528a                      ; 005a527e
        ;   XREF to: 005a528a (UNCONDITIONAL_JUMP)  ; LAB_005a528a
    INC EBX                             ; 005a5280
        ;   Label: LAB_005a5280
    MOV AL,byte ptr [EDX]               ; 005a5281
    MOV byte ptr [EBX + -0x1],AL        ; 005a5283
    MOV byte ptr [EBX],0x3a             ; 005a5286
    INC EBX                             ; 005a5289
    MOV ESI,dword ptr [ESP + 0x24]      ; 005a528a
        ;   Label: LAB_005a528a
    MOV byte ptr [EBX],0x0              ; 005a528e
    TEST ESI,ESI                        ; 005a5291
    JZ 0x005a5321                       ; 005a5293
        ;   XREF to: 005a5321 (CONDITIONAL_JUMP)  ; LAB_005a5321
    CMP byte ptr [ESI],0x0              ; 005a5299
    JZ 0x005a5321                       ; 005a529c
        ;   XREF to: 005a5321 (CONDITIONAL_JUMP)  ; LAB_005a5321
    MOV EAX,ESP                         ; 005a52a2
        ;   Label: LAB_005a52a2
    PUSH EAX                            ; 005a52a4
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a52a5
    PUSH EDI                            ; 005a52a9
    CALL crt_unknown.c_FUN_005ac9c0     ; 005a52aa
        ;   XREF to: 005ac9c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac9c0()
    ADD ESP,0x4                         ; 005a52af
    PUSH EAX                            ; 005a52b2
    CALL crt_unknown.c_FUN_005a5200     ; 005a52b3
        ;   XREF to: 005a5200 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5200()
    ADD ESP,0x8                         ; 005a52b8
    PUSH EBX                            ; 005a52bb
    PUSH EAX                            ; 005a52bc
    CALL crt_unknown.c_FUN_005aca30     ; 005a52bd
        ;   XREF to: 005aca30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca30()
    ADD ESP,0x8                         ; 005a52c2
    PUSH EBX                            ; 005a52c5
    CALL crt_unknown.c_FUN_005aca50     ; 005a52c6
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca50()
    ADD ESP,0x4                         ; 005a52cb
    PUSH EBX                            ; 005a52ce
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005a52cf
    CALL crt_unknown.c_FUN_005aca00     ; 005a52d3
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    ADD ESP,0x4                         ; 005a52d8
    PUSH EDI                            ; 005a52db
    MOV EBX,EAX                         ; 005a52dc
    CALL crt_unknown.c_FUN_005aca00     ; 005a52de
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    ADD ESP,0x4                         ; 005a52e3
    MOV DH,byte ptr [EAX]               ; 005a52e6
    MOV dword ptr [ESP + 0x24],EAX      ; 005a52e8
    TEST DH,DH                          ; 005a52ec
    JNZ 0x005a52a2                      ; 005a52ee
        ;   XREF to: 005a52a2 (CONDITIONAL_JUMP)  ; LAB_005a52a2
    CMP dword ptr [ESP],0x0             ; 005a52f0
    JNZ 0x005a52fd                      ; 005a52f4
        ;   XREF to: 005a52fd (CONDITIONAL_JUMP)  ; LAB_005a52fd
    MOV dword ptr [ESP],0x5c            ; 005a52f6
    PUSH EBX                            ; 005a52fd
        ;   Label: LAB_005a52fd
    MOV ESI,dword ptr [ESP + 0x8]       ; 005a52fe
    PUSH ESI                            ; 005a5302
    CALL crt_unknown.c_FUN_005aca80     ; 005a5303
        ;   XREF to: 005aca80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca80()
    ADD ESP,0x8                         ; 005a5308
    MOV AL,byte ptr [EAX]               ; 005a530b
    MOV EDI,dword ptr [ESP]             ; 005a530d
    AND EAX,0xff                        ; 005a5310
    CMP EAX,EDI                         ; 005a5315
    JNZ 0x005a531c                      ; 005a5317
        ;   XREF to: 005a531c (CONDITIONAL_JUMP)  ; LAB_005a531c
    DEC EBX                             ; 005a5319
    JMP 0x005a5321                      ; 005a531a
        ;   XREF to: 005a5321 (UNCONDITIONAL_JUMP)  ; LAB_005a5321
    MOV AL,byte ptr [ESP]               ; 005a531c
        ;   Label: LAB_005a531c
    MOV byte ptr [EBX],AL               ; 005a531f
    CMP dword ptr [ESP],0x0             ; 005a5321
        ;   Label: LAB_005a5321
    JNZ 0x005a532e                      ; 005a5325
        ;   XREF to: 005a532e (CONDITIONAL_JUMP)  ; LAB_005a532e
    MOV dword ptr [ESP],0x5c            ; 005a5327
    MOV ECX,dword ptr [ESP + 0x28]      ; 005a532e
        ;   Label: LAB_005a532e
    LEA ESI,[EBX + 0x1]                 ; 005a5332
    TEST ECX,ECX                        ; 005a5335
    JZ 0x005a53b6                       ; 005a5337
        ;   XREF to: 005a53b6 (CONDITIONAL_JUMP)  ; LAB_005a53b6
    PUSH ECX                            ; 005a533d
    CALL crt_unknown.c_FUN_005ac9c0     ; 005a533e
        ;   XREF to: 005ac9c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac9c0()
    ADD ESP,0x4                         ; 005a5343
    MOV EDX,ESP                         ; 005a5346
    PUSH EDX                            ; 005a5348
    PUSH EAX                            ; 005a5349
    CALL crt_unknown.c_FUN_005a5200     ; 005a534a
        ;   XREF to: 005a5200 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5200()
    ADD ESP,0x8                         ; 005a534f
    MOV EDX,dword ptr [ESP]             ; 005a5352
    CMP EAX,EDX                         ; 005a5355
    JZ 0x005a5363                       ; 005a5357
        ;   XREF to: 005a5363 (CONDITIONAL_JUMP)  ; LAB_005a5363
    XOR EAX,EAX                         ; 005a5359
    MOV AL,byte ptr [EBX]               ; 005a535b
    CMP EAX,EDX                         ; 005a535d
    JNZ 0x005a5363                      ; 005a535f
        ;   XREF to: 005a5363 (CONDITIONAL_JUMP)  ; LAB_005a5363
    MOV EBX,ESI                         ; 005a5361
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a5363
        ;   Label: LAB_005a5363
    CMP byte ptr [EAX],0x0              ; 005a5367
    JZ 0x005a53c3                       ; 005a536a
        ;   XREF to: 005a53c3 (CONDITIONAL_JUMP)  ; LAB_005a53c3
    MOV EAX,ESP                         ; 005a536c
    PUSH EAX                            ; 005a536e
    MOV ESI,dword ptr [ESP + 0x2c]      ; 005a536f
    PUSH ESI                            ; 005a5373
    CALL crt_unknown.c_FUN_005ac9c0     ; 005a5374
        ;   XREF to: 005ac9c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ac9c0()
    ADD ESP,0x4                         ; 005a5379
    PUSH EAX                            ; 005a537c
    CALL crt_unknown.c_FUN_005a5200     ; 005a537d
        ;   XREF to: 005a5200 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a5200()
    ADD ESP,0x8                         ; 005a5382
    PUSH EBX                            ; 005a5385
    PUSH EAX                            ; 005a5386
    CALL crt_unknown.c_FUN_005aca30     ; 005a5387
        ;   XREF to: 005aca30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca30()
    ADD ESP,0x8                         ; 005a538c
    PUSH EBX                            ; 005a538f
    CALL crt_unknown.c_FUN_005aca50     ; 005a5390
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca50()
    ADD ESP,0x4                         ; 005a5395
    PUSH EBX                            ; 005a5398
    MOV byte ptr [EBX + EAX*0x1],0x0    ; 005a5399
    CALL crt_unknown.c_FUN_005aca00     ; 005a539d
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    ADD ESP,0x4                         ; 005a53a2
    PUSH ESI                            ; 005a53a5
    MOV EBX,EAX                         ; 005a53a6
    CALL crt_unknown.c_FUN_005aca00     ; 005a53a8
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    ADD ESP,0x4                         ; 005a53ad
    MOV dword ptr [ESP + 0x28],EAX      ; 005a53b0
    JMP 0x005a5363                      ; 005a53b4
        ;   XREF to: 005a5363 (UNCONDITIONAL_JUMP)  ; LAB_005a5363
    XOR EAX,EAX                         ; 005a53b6
        ;   Label: LAB_005a53b6
    MOV EDI,dword ptr [ESP]             ; 005a53b8
    MOV AL,byte ptr [EBX]               ; 005a53bb
    CMP EAX,EDI                         ; 005a53bd
    JNZ 0x005a53c3                      ; 005a53bf
        ;   XREF to: 005a53c3 (CONDITIONAL_JUMP)  ; LAB_005a53c3
    MOV EBX,ESI                         ; 005a53c1
    TEST EBP,EBP                        ; 005a53c3
        ;   Label: LAB_005a53c3
    JZ 0x005a53e5                       ; 005a53c5
        ;   XREF to: 005a53e5 (CONDITIONAL_JUMP)  ; LAB_005a53e5
    MOV CH,byte ptr [EBP]               ; 005a53c7
    TEST CH,CH                          ; 005a53ca
    JZ 0x005a53e5                       ; 005a53cc
        ;   XREF to: 005a53e5 (CONDITIONAL_JUMP)  ; LAB_005a53e5
    CMP CH,0x2e                         ; 005a53ce
    JZ 0x005a53d7                       ; 005a53d1
        ;   XREF to: 005a53d7 (CONDITIONAL_JUMP)  ; LAB_005a53d7
    MOV byte ptr [EBX],0x2e             ; 005a53d3
    INC EBX                             ; 005a53d6
    MOV AH,byte ptr [EBP]               ; 005a53d7
        ;   Label: LAB_005a53d7
    TEST AH,AH                          ; 005a53da
    JZ 0x005a53e5                       ; 005a53dc
        ;   XREF to: 005a53e5 (CONDITIONAL_JUMP)  ; LAB_005a53e5
    INC EBX                             ; 005a53de
    INC EBP                             ; 005a53df
    MOV byte ptr [EBX + -0x1],AH        ; 005a53e0
    JMP 0x005a53d7                      ; 005a53e3
        ;   XREF to: 005a53d7 (UNCONDITIONAL_JUMP)  ; LAB_005a53d7
    MOV byte ptr [EBX],0x0              ; 005a53e5
        ;   Label: LAB_005a53e5
    ADD ESP,0x8                         ; 005a53e8
    POP EBP                             ; 005a53eb
    POP EDI                             ; 005a53ec
    POP ESI                             ; 005a53ed
    POP EBX                             ; 005a53ee
    RET                                 ; 005a53ef

