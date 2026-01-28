; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int core_script_cpp_FUN_00567310(void)
;
; Local Variables:
; undefined1       Stack[-0x1ac]:1  local_1ac
; undefined1       Stack[-0x1ab]:1  local_1ab
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_script.cpp_FUN_00561a30 at 00561a60
;   core_script.cpp_FUN_005671a0 at 005671df
;
; Referenced Globals:
;   char[256] g_CharacterClassificationTable
;
; Called Functions:
;   core_event.cpp_FUN_004b0f90
;   shape_edittool.cpp_CStrList_add_FUN_004a2b80
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567310
        ;   Label: core_script.cpp_FUN_00567310
    PUSH ESI                            ; 00567311
    PUSH EDI                            ; 00567312
    PUSH EBP                            ; 00567313
    SUB ESP,0x19c                       ; 00567314
    MOV EDI,dword ptr [ESP + 0x1b4]     ; 0056731a
    MOV EDX,0xffffffff                  ; 00567321
    XOR EBX,EBX                         ; 00567326
    MOV dword ptr [ESP + 0x190],EDX     ; 00567328
    LEA ESI,[EDI + EBX*0x1]             ; 0056732f
        ;   Label: LAB_0056732f
    MOV AL,byte ptr [ESI]               ; 00567332
    INC AL                              ; 00567334
    AND EAX,0xff                        ; 00567336
    MOV DL,byte ptr [EAX + 0x6849c4]    ; 0056733b | g_CharacterClassificationTable
    LEA EBP,[EBX + 0x1]                 ; 00567341
    TEST DL,0x2                         ; 00567344
    JZ 0x0056734d                       ; 00567347
        ;   XREF to: 0056734d (CONDITIONAL_JUMP)  ; LAB_0056734d
    MOV EBX,EBP                         ; 00567349
    JMP 0x0056732f                      ; 0056734b
        ;   XREF to: 0056732f (UNCONDITIONAL_JUMP)  ; LAB_0056732f
    MOV DH,byte ptr [ESI]               ; 0056734d
        ;   Label: LAB_0056734d
    TEST DH,DH                          ; 0056734f
    JZ 0x00567471                       ; 00567351
        ;   XREF to: 00567471 (CONDITIONAL_JUMP)  ; LAB_00567471
    XOR EAX,EAX                         ; 00567357
    MOV AL,DH                           ; 00567359
    PUSH EAX                            ; 0056735b
    CALL core_event.cpp_FUN_004b0f90    ; 0056735c
        ;   XREF to: 004b0f90 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004b0f90()
    ADD ESP,0x4                         ; 00567361
    TEST EAX,EAX                        ; 00567364
    JZ 0x005673b1                       ; 00567366
        ;   XREF to: 005673b1 (CONDITIONAL_JUMP)  ; LAB_005673b1
    LEA EAX,[EDI + EBX*0x1]             ; 00567368
        ;   Label: LAB_00567368
    MOV dword ptr [ESP + 0x194],EBX     ; 0056736b
    MOV CH,byte ptr [EAX]               ; 00567372
    XOR ESI,ESI                         ; 00567374
    CMP CH,0x2e                         ; 00567376
    JZ 0x005673bd                       ; 00567379
        ;   XREF to: 005673bd (CONDITIONAL_JUMP)  ; LAB_005673bd
    LEA EBP,[EBX + EDI*0x1]             ; 0056737b
        ;   Label: LAB_0056737b
    XOR EAX,EAX                         ; 0056737e
        ;   Label: LAB_0056737e
    MOV AL,byte ptr [EBP]               ; 00567380
    PUSH EAX                            ; 00567383
    CALL core_event.cpp_FUN_004b0f90    ; 00567384
        ;   XREF to: 004b0f90 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_004b0f90()
    ADD ESP,0x4                         ; 00567389
    LEA EDX,[ESI + 0x1]                 ; 0056738c
    MOV dword ptr [ESP + 0x198],EDX     ; 0056738f
    LEA EDX,[EBX + 0x1]                 ; 00567396
    TEST EAX,EAX                        ; 00567399
    JZ 0x005673c0                       ; 0056739b
        ;   XREF to: 005673c0 (CONDITIONAL_JUMP)  ; LAB_005673c0
    MOV EAX,EBX                         ; 0056739d
    INC EBP                             ; 0056739f
    MOV AL,byte ptr [EDI + EAX*0x1]     ; 005673a0
    MOV EBX,EDX                         ; 005673a3
    MOV byte ptr [ESP + ESI*0x1],AL     ; 005673a5
    MOV ESI,dword ptr [ESP + 0x198]     ; 005673a8
    JMP 0x0056737e                      ; 005673af
        ;   XREF to: 0056737e (UNCONDITIONAL_JUMP)  ; LAB_0056737e
    CMP byte ptr [ESI],0x2e             ; 005673b1
        ;   Label: LAB_005673b1
    JZ 0x00567368                       ; 005673b4
        ;   XREF to: 00567368 (CONDITIONAL_JUMP)  ; LAB_00567368
    MOV EBX,EBP                         ; 005673b6
    JMP 0x0056732f                      ; 005673b8
        ;   XREF to: 0056732f (UNCONDITIONAL_JUMP)  ; LAB_0056732f
    INC EBX                             ; 005673bd
        ;   Label: LAB_005673bd
    JMP 0x0056737b                      ; 005673be
        ;   XREF to: 0056737b (UNCONDITIONAL_JUMP)  ; LAB_0056737b
    CMP byte ptr [EBP],0x28             ; 005673c0
        ;   Label: LAB_005673c0
    JNZ 0x00567409                      ; 005673c4
        ;   XREF to: 00567409 (CONDITIONAL_JUMP)  ; LAB_00567409
    MOV EBP,EBX                         ; 005673c6
    MOV EAX,0x1                         ; 005673c8
    MOV EBX,EDX                         ; 005673cd
    MOV CL,byte ptr [EDI + EBP*0x1]     ; 005673cf
    LEA EBP,[EDX + EDI*0x1]             ; 005673d2
    MOV byte ptr [ESP + ESI*0x1],CL     ; 005673d5
    MOV ESI,dword ptr [ESP + 0x198]     ; 005673d8
    MOV CL,byte ptr [EBP]               ; 005673df
    MOV EDX,EBP                         ; 005673e2
    TEST CL,CL                          ; 005673e4
    JZ 0x00567409                       ; 005673e6
        ;   XREF to: 00567409 (CONDITIONAL_JUMP)  ; LAB_00567409
    CMP byte ptr [EDX],0x28             ; 005673e8
        ;   Label: LAB_005673e8
    JNZ 0x005673ee                      ; 005673eb
        ;   XREF to: 005673ee (CONDITIONAL_JUMP)  ; LAB_005673ee
    INC EAX                             ; 005673ed
    CMP byte ptr [EDX],0x29             ; 005673ee
        ;   Label: LAB_005673ee
    JNZ 0x005673f4                      ; 005673f1
        ;   XREF to: 005673f4 (CONDITIONAL_JUMP)  ; LAB_005673f4
    DEC EAX                             ; 005673f3
    MOV EBP,EBX                         ; 005673f4
        ;   Label: LAB_005673f4
    INC EDX                             ; 005673f6
    INC ESI                             ; 005673f7
    MOV CL,byte ptr [EDI + EBP*0x1]     ; 005673f8
    INC EBX                             ; 005673fb
    MOV byte ptr [ESP + ESI*0x1 + -0x1],CL ; 005673fc
    TEST EAX,EAX                        ; 00567400
    JLE 0x00567409                      ; 00567402
        ;   XREF to: 00567409 (CONDITIONAL_JUMP)  ; LAB_00567409
    CMP byte ptr [EDX],0x0              ; 00567404
    JNZ 0x005673e8                      ; 00567407
        ;   XREF to: 005673e8 (CONDITIONAL_JUMP)  ; LAB_005673e8
    CMP ESI,0x1                         ; 00567409
        ;   Label: LAB_00567409
    JL 0x0056732f                       ; 0056740c
        ;   XREF to: 0056732f (CONDITIONAL_JUMP)  ; LAB_0056732f
    XOR AL,AL                           ; 00567412
    MOV byte ptr [ESP + ESI*0x1],AL     ; 00567414
    MOV EAX,ESP                         ; 00567417
    PUSH EAX                            ; 00567419
    MOV ECX,dword ptr [ESP + 0x1bc]     ; 0056741a
    PUSH ECX                            ; 00567421
    CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80 ; 00567422
        ;   XREF to: 004a2b80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004a2b80(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00567427
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 0056742a
    TEST ESI,ESI                        ; 00567431
    JZ 0x0056732f                       ; 00567433
        ;   XREF to: 0056732f (CONDITIONAL_JUMP)  ; LAB_0056732f
    MOV EAX,dword ptr [ESP + 0x194]     ; 00567439
    MOV EBP,dword ptr [ESI]             ; 00567440
    CMP EAX,EBP                         ; 00567442
    JG 0x0056732f                       ; 00567444
        ;   XREF to: 0056732f (CONDITIONAL_JUMP)  ; LAB_0056732f
    CMP EBX,EBP                         ; 0056744a
    JL 0x0056732f                       ; 0056744c
        ;   XREF to: 0056732f (CONDITIONAL_JUMP)  ; LAB_0056732f
    MOV ECX,dword ptr [ESP + 0x1b8]     ; 00567452
    PUSH ECX                            ; 00567459
    MOV dword ptr [ESI],EAX             ; 0056745a
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 0056745c
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 00567461
    DEC EAX                             ; 00567464
    MOV dword ptr [ESP + 0x190],EAX     ; 00567465
    JMP 0x0056732f                      ; 0056746c
        ;   XREF to: 0056732f (UNCONDITIONAL_JUMP)  ; LAB_0056732f
    MOV EAX,dword ptr [ESP + 0x190]     ; 00567471
        ;   Label: LAB_00567471
    ADD ESP,0x19c                       ; 00567478
    POP EBP                             ; 0056747e
    POP EDI                             ; 0056747f
    POP ESI                             ; 00567480
    POP EBX                             ; 00567481
    RET                                 ; 00567482

