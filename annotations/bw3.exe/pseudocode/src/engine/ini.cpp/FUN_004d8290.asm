; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_FUN_004d8290(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)
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
;   engine_ini.cpp_getProfileInteger_FUN_004d8950 at 004d89a5
;   engine_ini.cpp_getProfileString_FUN_004d8910 at 004d8937
;
; Referenced Globals:
;   undefined4 DAT_005c56a8
;   TerminatedCString s_s_005c56ab
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_string.c__strcmp_FUN_005a3d00
;   crt_string.c__strncpy_FUN_005a4ee0
;   crt_unknown.c_sprintf_FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8290
        ;   Label: engine_ini.cpp_FUN_004d8290
    PUSH ESI                            ; 004d8291
    PUSH EDI                            ; 004d8292
    PUSH EBP                            ; 004d8293
    SUB ESP,0x204                       ; 004d8294
    MOV EDI,dword ptr [ESP + 0x220]     ; 004d829a
    PUSH 0x5c56a8                       ; 004d82a1 | DAT_005c56a8
    MOV ECX,dword ptr [ESP + 0x234]     ; 004d82a6
    XOR EDX,EDX                         ; 004d82ad
    PUSH ECX                            ; 004d82af
    MOV dword ptr [ESP + 0x208],EDX     ; 004d82b0
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 004d82b7
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 004d82bc
    MOV EBX,EAX                         ; 004d82bf
    TEST EAX,EAX                        ; 004d82c1
    JNZ 0x004d8300                      ; 004d82c3
        ;   XREF to: 004d8300 (CONDITIONAL_JUMP)  ; LAB_004d8300
    CMP dword ptr [ESP + 0x200],0x0     ; 004d82c5
        ;   Label: LAB_004d82c5
    JNZ 0x004d841c                      ; 004d82cd
        ;   XREF to: 004d841c (CONDITIONAL_JUMP)  ; LAB_004d841c
    MOV EDI,dword ptr [ESP + 0x224]     ; 004d82d3
    MOV ESI,dword ptr [ESP + 0x22c]     ; 004d82da
    SUB ECX,ECX                         ; 004d82e1
    DEC ECX                             ; 004d82e3
    XOR EAX,EAX                         ; 004d82e4
    SCASB.REPNE ES:EDI                  ; 004d82e6
    NOT ECX                             ; 004d82e8
    DEC ECX                             ; 004d82ea
    CMP ECX,ESI                         ; 004d82eb
    JL 0x004d83e4                       ; 004d82ed
        ;   XREF to: 004d83e4 (CONDITIONAL_JUMP)  ; LAB_004d83e4
    XOR EAX,EAX                         ; 004d82f3
    ADD ESP,0x204                       ; 004d82f5
    POP EBP                             ; 004d82fb
    POP EDI                             ; 004d82fc
    POP ESI                             ; 004d82fd
    POP EBX                             ; 004d82fe
    RET                                 ; 004d82ff
    MOV ESI,dword ptr [ESP + 0x21c]     ; 004d8300
        ;   Label: LAB_004d8300
    PUSH ESI                            ; 004d8307
    PUSH 0x5c56ab                       ; 004d8308 | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004d830d
    PUSH EAX                            ; 004d8314
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004d8315
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004d831a
    TEST byte ptr [EBX + 0xc],0x10      ; 004d831d
        ;   Label: LAB_004d831d
    JZ 0x004d83a7                       ; 004d8321
        ;   XREF to: 004d83a7 (CONDITIONAL_JUMP)  ; LAB_004d83a7
    CMP dword ptr [ESP + 0x200],0x0     ; 004d8327
        ;   Label: LAB_004d8327
    JZ 0x004d8399                       ; 004d832f
        ;   XREF to: 004d8399 (CONDITIONAL_JUMP)  ; LAB_004d8399
    XOR EDX,EDX                         ; 004d8331
        ;   Label: LAB_004d8331
    MOV dword ptr [ESP + 0x200],EDX     ; 004d8333
    TEST byte ptr [EBX + 0xc],0x10      ; 004d833a
        ;   Label: LAB_004d833a
    JNZ 0x004d8399                      ; 004d833e
        ;   XREF to: 004d8399 (CONDITIONAL_JUMP)  ; LAB_004d8399
    PUSH EBX                            ; 004d8340
    PUSH 0xff                           ; 004d8341
    LEA EAX,[ESP + 0x8]                 ; 004d8346
    PUSH EAX                            ; 004d834a
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004d834b
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004d8350
    TEST EAX,EAX                        ; 004d8353
    JZ 0x004d8399                       ; 004d8355
        ;   XREF to: 004d8399 (CONDITIONAL_JUMP)  ; LAB_004d8399
    MOV DL,0x3d                         ; 004d8357
    MOV ESI,ESP                         ; 004d8359
    MOV AL,byte ptr [ESI]               ; 004d835b
        ;   Label: LAB_004d835b
    CMP AL,DL                           ; 004d835d
    JZ 0x004d8373                       ; 004d835f
        ;   XREF to: 004d8373 (CONDITIONAL_JUMP)  ; LAB_004d8373
    CMP AL,0x0                          ; 004d8361
    JZ 0x004d8371                       ; 004d8363
        ;   XREF to: 004d8371 (CONDITIONAL_JUMP)  ; LAB_004d8371
    INC ESI                             ; 004d8365
    MOV AL,byte ptr [ESI]               ; 004d8366
    CMP AL,DL                           ; 004d8368
    JZ 0x004d8373                       ; 004d836a
        ;   XREF to: 004d8373 (CONDITIONAL_JUMP)  ; LAB_004d8373
    INC ESI                             ; 004d836c
    CMP AL,0x0                          ; 004d836d
    JNZ 0x004d835b                      ; 004d836f
        ;   XREF to: 004d835b (CONDITIONAL_JUMP)  ; LAB_004d835b
    SUB ESI,ESI                         ; 004d8371
        ;   Label: LAB_004d8371
    MOV EBP,ESI                         ; 004d8373
        ;   Label: LAB_004d8373
    TEST ESI,ESI                        ; 004d8375
    JZ 0x004d837c                       ; 004d8377
        ;   XREF to: 004d837c (CONDITIONAL_JUMP)  ; LAB_004d837c
    MOV byte ptr [ESI],0x0              ; 004d8379
    PUSH EDI                            ; 004d837c
        ;   Label: LAB_004d837c
    LEA EAX,[ESP + 0x4]                 ; 004d837d
    PUSH EAX                            ; 004d8381
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 004d8382
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d8387
    TEST EAX,EAX                        ; 004d838a
    JNZ 0x004d833a                      ; 004d838c
        ;   XREF to: 004d833a (CONDITIONAL_JUMP)  ; LAB_004d833a
    MOV dword ptr [ESP + 0x200],0x1     ; 004d838e
    PUSH EBX                            ; 004d8399
        ;   Label: LAB_004d8399
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004d839a
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004d839f
    JMP 0x004d82c5                      ; 004d83a2
        ;   XREF to: 004d82c5 (UNCONDITIONAL_JUMP)  ; LAB_004d82c5
    PUSH EBX                            ; 004d83a7
        ;   Label: LAB_004d83a7
    PUSH 0xff                           ; 004d83a8
    LEA EAX,[ESP + 0x8]                 ; 004d83ad
    PUSH EAX                            ; 004d83b1
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 004d83b2
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 004d83b7
    TEST EAX,EAX                        ; 004d83ba
    JZ 0x004d8327                       ; 004d83bc
        ;   XREF to: 004d8327 (CONDITIONAL_JUMP)  ; LAB_004d8327
    LEA EAX,[ESP + 0x100]               ; 004d83c2
    PUSH EAX                            ; 004d83c9
    LEA EAX,[ESP + 0x4]                 ; 004d83ca
    PUSH EAX                            ; 004d83ce
    CALL crt_string.c__strcmp_FUN_005a3d00 ; 004d83cf
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005a3d00(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d83d4
    TEST EAX,EAX                        ; 004d83d7
    JNZ 0x004d831d                      ; 004d83d9
        ;   XREF to: 004d831d (CONDITIONAL_JUMP)  ; LAB_004d831d
    JMP 0x004d8331                      ; 004d83df
        ;   XREF to: 004d8331 (UNCONDITIONAL_JUMP)  ; LAB_004d8331
    MOV ESI,dword ptr [ESP + 0x224]     ; 004d83e4
        ;   Label: LAB_004d83e4
    MOV EDI,dword ptr [ESP + 0x228]     ; 004d83eb
    PUSH EDI                            ; 004d83f2
    MOV AL,byte ptr [ESI]               ; 004d83f3
        ;   Label: LAB_004d83f3
    MOV byte ptr [EDI],AL               ; 004d83f5
    CMP AL,0x0                          ; 004d83f7
    JZ 0x004d840b                       ; 004d83f9
        ;   XREF to: 004d840b (CONDITIONAL_JUMP)  ; LAB_004d840b
    MOV AL,byte ptr [ESI + 0x1]         ; 004d83fb
    ADD ESI,0x2                         ; 004d83fe
    MOV byte ptr [EDI + 0x1],AL         ; 004d8401
    ADD EDI,0x2                         ; 004d8404
    CMP AL,0x0                          ; 004d8407
    JNZ 0x004d83f3                      ; 004d8409
        ;   XREF to: 004d83f3 (CONDITIONAL_JUMP)  ; LAB_004d83f3
    POP EDI                             ; 004d840b
        ;   Label: LAB_004d840b
    MOV EAX,0x1                         ; 004d840c
    ADD ESP,0x204                       ; 004d8411
    POP EBP                             ; 004d8417
    POP EDI                             ; 004d8418
    POP ESI                             ; 004d8419
    POP EBX                             ; 004d841a
    RET                                 ; 004d841b
    INC EBP                             ; 004d841c
        ;   Label: LAB_004d841c
    MOV EDI,EBP                         ; 004d841d
    SUB ECX,ECX                         ; 004d841f
    DEC ECX                             ; 004d8421
    XOR EAX,EAX                         ; 004d8422
    SCASB.REPNE ES:EDI                  ; 004d8424
    NOT ECX                             ; 004d8426
    DEC ECX                             ; 004d8428
    MOV EDI,dword ptr [ESP + 0x22c]     ; 004d8429
    PUSH EDI                            ; 004d8430
    LEA EAX,[ECX + -0x1]                ; 004d8431
    PUSH 0x0                            ; 004d8434
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 004d8436
    MOV EAX,dword ptr [ESP + 0x230]     ; 004d843a
    PUSH EAX                            ; 004d8441
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004d8442
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004d8447
    LEA EAX,[EDI + -0x1]                ; 004d844a
    PUSH EAX                            ; 004d844d
    PUSH EBP                            ; 004d844e
    MOV EDX,dword ptr [ESP + 0x230]     ; 004d844f
    PUSH EDX                            ; 004d8456
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 004d8457
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    MOV EAX,0x1                         ; 004d845c
    ADD ESP,0xc                         ; 004d8461
    ADD ESP,0x204                       ; 004d8464
    POP EBP                             ; 004d846a
    POP EDI                             ; 004d846b
    POP ESI                             ; 004d846c
    POP EBX                             ; 004d846d
    RET                                 ; 004d846e

