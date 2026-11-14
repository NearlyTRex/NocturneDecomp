; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_CIni_getProfileString_FUN_004f4370(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)
;
; Parameters:
; CIni *           Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   section
; char *           Stack[0xc]:4   key
; char *           Stack[0x10]:4   default_value
; char *           Stack[0x14]:4   output_buffer
; int              Stack[0x18]:4   buffer_size
; char *           Stack[0x1c]:4   filename
; Local Variables:
; undefined        Stack[-0x214]:1  local_214
; undefined1       Stack[-0x213]:1  local_213
; undefined1       Stack[-0x211]:1  local_211
; undefined        Stack[-0x114]:1  local_114
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_ini.cpp_getProfileInteger_FUN_004f4a30 at 004f4a85
;   engine_ini.cpp_getProfileString_FUN_004f49f0 at 004f4a17
;
; Referenced Globals:
;   TerminatedCString s_rt_005e56e2
;   TerminatedCString s_s_005e56e5
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_stdio.c_fgets_FUN_005c1180
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_string.c__strcmp_FUN_005c0f80
;   crt_string.c__strncpy_FUN_005c20d0
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f4370
        ;   Label: engine_ini.cpp_CIni_getProfileString_FUN_004f4370
    PUSH ESI                            ; 004f4371
    PUSH EDI                            ; 004f4372
    PUSH EBP                            ; 004f4373
    SUB ESP,0x204                       ; 004f4374
    MOV EDI,dword ptr [ESP + 0x220]     ; 004f437a
    PUSH 0x5e56e2                       ; 004f4381 | = "rt"
    MOV ECX,dword ptr [ESP + 0x234]     ; 004f4386
    XOR EDX,EDX                         ; 004f438d
    PUSH ECX                            ; 004f438f
    MOV dword ptr [ESP + 0x208],EDX     ; 004f4390
    CALL crt_stdio.c_fopen_FUN_005c157c ; 004f4397
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005c157c(char * filename, char * mode)
    ADD ESP,0x8                         ; 004f439c
    MOV EBX,EAX                         ; 004f439f
    TEST EAX,EAX                        ; 004f43a1
    JNZ 0x004f43e0                      ; 004f43a3
        ;   XREF to: 004f43e0 (CONDITIONAL_JUMP)  ; LAB_004f43e0
    CMP dword ptr [ESP + 0x200],0x0     ; 004f43a5
        ;   Label: LAB_004f43a5
    JNZ 0x004f44fc                      ; 004f43ad
        ;   XREF to: 004f44fc (CONDITIONAL_JUMP)  ; LAB_004f44fc
    MOV EDI,dword ptr [ESP + 0x224]     ; 004f43b3
    MOV ESI,dword ptr [ESP + 0x22c]     ; 004f43ba
    SUB ECX,ECX                         ; 004f43c1
    DEC ECX                             ; 004f43c3
    XOR EAX,EAX                         ; 004f43c4
    SCASB.REPNE ES:EDI                  ; 004f43c6
    NOT ECX                             ; 004f43c8
    DEC ECX                             ; 004f43ca
    CMP ECX,ESI                         ; 004f43cb
    JL 0x004f44c4                       ; 004f43cd
        ;   XREF to: 004f44c4 (CONDITIONAL_JUMP)  ; LAB_004f44c4
    XOR EAX,EAX                         ; 004f43d3
    ADD ESP,0x204                       ; 004f43d5
    POP EBP                             ; 004f43db
    POP EDI                             ; 004f43dc
    POP ESI                             ; 004f43dd
    POP EBX                             ; 004f43de
    RET                                 ; 004f43df
    MOV ESI,dword ptr [ESP + 0x21c]     ; 004f43e0
        ;   Label: LAB_004f43e0
    PUSH ESI                            ; 004f43e7
    PUSH 0x5e56e5                       ; 004f43e8 | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004f43ed
    PUSH EAX                            ; 004f43f4
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004f43f5
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 004f43fa
    TEST byte ptr [EBX + 0xc],0x10      ; 004f43fd
        ;   Label: LAB_004f43fd
    JZ 0x004f4487                       ; 004f4401
        ;   XREF to: 004f4487 (CONDITIONAL_JUMP)  ; LAB_004f4487
    CMP dword ptr [ESP + 0x200],0x0     ; 004f4407
        ;   Label: LAB_004f4407
    JZ 0x004f4479                       ; 004f440f
        ;   XREF to: 004f4479 (CONDITIONAL_JUMP)  ; LAB_004f4479
    XOR EDX,EDX                         ; 004f4411
        ;   Label: LAB_004f4411
    MOV dword ptr [ESP + 0x200],EDX     ; 004f4413
    TEST byte ptr [EBX + 0xc],0x10      ; 004f441a
        ;   Label: LAB_004f441a
    JNZ 0x004f4479                      ; 004f441e
        ;   XREF to: 004f4479 (CONDITIONAL_JUMP)  ; LAB_004f4479
    PUSH EBX                            ; 004f4420
    PUSH 0xff                           ; 004f4421
    LEA EAX,[ESP + 0x8]                 ; 004f4426
    PUSH EAX                            ; 004f442a
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004f442b
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004f4430
    TEST EAX,EAX                        ; 004f4433
    JZ 0x004f4479                       ; 004f4435
        ;   XREF to: 004f4479 (CONDITIONAL_JUMP)  ; LAB_004f4479
    MOV DL,0x3d                         ; 004f4437
    MOV ESI,ESP                         ; 004f4439
    MOV AL,byte ptr [ESI]               ; 004f443b
        ;   Label: LAB_004f443b
    CMP AL,DL                           ; 004f443d
    JZ 0x004f4453                       ; 004f443f
        ;   XREF to: 004f4453 (CONDITIONAL_JUMP)  ; LAB_004f4453
    CMP AL,0x0                          ; 004f4441
    JZ 0x004f4451                       ; 004f4443
        ;   XREF to: 004f4451 (CONDITIONAL_JUMP)  ; LAB_004f4451
    INC ESI                             ; 004f4445
    MOV AL,byte ptr [ESI]               ; 004f4446
    CMP AL,DL                           ; 004f4448
    JZ 0x004f4453                       ; 004f444a
        ;   XREF to: 004f4453 (CONDITIONAL_JUMP)  ; LAB_004f4453
    INC ESI                             ; 004f444c
    CMP AL,0x0                          ; 004f444d
    JNZ 0x004f443b                      ; 004f444f
        ;   XREF to: 004f443b (CONDITIONAL_JUMP)  ; LAB_004f443b
    SUB ESI,ESI                         ; 004f4451
        ;   Label: LAB_004f4451
    MOV EBP,ESI                         ; 004f4453
        ;   Label: LAB_004f4453
    TEST ESI,ESI                        ; 004f4455
    JZ 0x004f445c                       ; 004f4457
        ;   XREF to: 004f445c (CONDITIONAL_JUMP)  ; LAB_004f445c
    MOV byte ptr [ESI],0x0              ; 004f4459
    PUSH EDI                            ; 004f445c
        ;   Label: LAB_004f445c
    LEA EAX,[ESP + 0x4]                 ; 004f445d
    PUSH EAX                            ; 004f4461
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004f4462
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f4467
    TEST EAX,EAX                        ; 004f446a
    JNZ 0x004f441a                      ; 004f446c
        ;   XREF to: 004f441a (CONDITIONAL_JUMP)  ; LAB_004f441a
    MOV dword ptr [ESP + 0x200],0x1     ; 004f446e
    PUSH EBX                            ; 004f4479
        ;   Label: LAB_004f4479
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 004f447a
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 004f447f
    JMP 0x004f43a5                      ; 004f4482
        ;   XREF to: 004f43a5 (UNCONDITIONAL_JUMP)  ; LAB_004f43a5
    PUSH EBX                            ; 004f4487
        ;   Label: LAB_004f4487
    PUSH 0xff                           ; 004f4488
    LEA EAX,[ESP + 0x8]                 ; 004f448d
    PUSH EAX                            ; 004f4491
    CALL crt_stdio.c_fgets_FUN_005c1180 ; 004f4492
        ;   XREF to: 005c1180 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_005c1180(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 004f4497
    TEST EAX,EAX                        ; 004f449a
    JZ 0x004f4407                       ; 004f449c
        ;   XREF to: 004f4407 (CONDITIONAL_JUMP)  ; LAB_004f4407
    LEA EAX,[ESP + 0x100]               ; 004f44a2
    PUSH EAX                            ; 004f44a9
    LEA EAX,[ESP + 0x4]                 ; 004f44aa
    PUSH EAX                            ; 004f44ae
    CALL crt_string.c__strcmp_FUN_005c0f80 ; 004f44af
        ;   XREF to: 005c0f80 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005c0f80(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f44b4
    TEST EAX,EAX                        ; 004f44b7
    JNZ 0x004f43fd                      ; 004f44b9
        ;   XREF to: 004f43fd (CONDITIONAL_JUMP)  ; LAB_004f43fd
    JMP 0x004f4411                      ; 004f44bf
        ;   XREF to: 004f4411 (UNCONDITIONAL_JUMP)  ; LAB_004f4411
    MOV ESI,dword ptr [ESP + 0x224]     ; 004f44c4
        ;   Label: LAB_004f44c4
    MOV EDI,dword ptr [ESP + 0x228]     ; 004f44cb
    PUSH EDI                            ; 004f44d2
    MOV AL,byte ptr [ESI]               ; 004f44d3
        ;   Label: LAB_004f44d3
    MOV byte ptr [EDI],AL               ; 004f44d5
    CMP AL,0x0                          ; 004f44d7
    JZ 0x004f44eb                       ; 004f44d9
        ;   XREF to: 004f44eb (CONDITIONAL_JUMP)  ; LAB_004f44eb
    MOV AL,byte ptr [ESI + 0x1]         ; 004f44db
    ADD ESI,0x2                         ; 004f44de
    MOV byte ptr [EDI + 0x1],AL         ; 004f44e1
    ADD EDI,0x2                         ; 004f44e4
    CMP AL,0x0                          ; 004f44e7
    JNZ 0x004f44d3                      ; 004f44e9
        ;   XREF to: 004f44d3 (CONDITIONAL_JUMP)  ; LAB_004f44d3
    POP EDI                             ; 004f44eb
        ;   Label: LAB_004f44eb
    MOV EAX,0x1                         ; 004f44ec
    ADD ESP,0x204                       ; 004f44f1
    POP EBP                             ; 004f44f7
    POP EDI                             ; 004f44f8
    POP ESI                             ; 004f44f9
    POP EBX                             ; 004f44fa
    RET                                 ; 004f44fb
    INC EBP                             ; 004f44fc
        ;   Label: LAB_004f44fc
    MOV EDI,EBP                         ; 004f44fd
    SUB ECX,ECX                         ; 004f44ff
    DEC ECX                             ; 004f4501
    XOR EAX,EAX                         ; 004f4502
    SCASB.REPNE ES:EDI                  ; 004f4504
    NOT ECX                             ; 004f4506
    DEC ECX                             ; 004f4508
    MOV EDI,dword ptr [ESP + 0x22c]     ; 004f4509
    PUSH EDI                            ; 004f4510
    LEA EAX,[ECX + -0x1]                ; 004f4511
    PUSH 0x0                            ; 004f4514
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 004f4516
    MOV EAX,dword ptr [ESP + 0x230]     ; 004f451a
    PUSH EAX                            ; 004f4521
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004f4522
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004f4527
    LEA EAX,[EDI + -0x1]                ; 004f452a
    PUSH EAX                            ; 004f452d
    PUSH EBP                            ; 004f452e
    MOV EDX,dword ptr [ESP + 0x230]     ; 004f452f
    PUSH EDX                            ; 004f4536
    CALL crt_string.c__strncpy_FUN_005c20d0 ; 004f4537
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005c20d0(char * dest, char * src, SIZE_T count)
    MOV EAX,0x1                         ; 004f453c
    ADD ESP,0xc                         ; 004f4541
    ADD ESP,0x204                       ; 004f4544
    POP EBP                             ; 004f454a
    POP EDI                             ; 004f454b
    POP ESI                             ; 004f454c
    POP EBX                             ; 004f454d
    RET                                 ; 004f454e

