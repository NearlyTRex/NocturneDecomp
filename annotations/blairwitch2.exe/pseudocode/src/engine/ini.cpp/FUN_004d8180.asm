; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_ini_cpp_FUN_004d8180(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename)
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
;   engine_ini.cpp_FUN_004d8840 at 004d8895
;   engine_ini.cpp_getProfileString_FUN_004d8800 at 004d8827
;
; Referenced Globals:
;   undefined4 DAT_005dab81
;   TerminatedCString s_s_005dab84
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgets_FUN_005b9600
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_string.c__strcmp_FUN_005b8c30
;   crt_string.c__strncpy_FUN_005b9cf0
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8180
        ;   Label: engine_ini.cpp_FUN_004d8180
    PUSH ESI                            ; 004d8181
    PUSH EDI                            ; 004d8182
    PUSH EBP                            ; 004d8183
    SUB ESP,0x204                       ; 004d8184
    MOV EDI,dword ptr [ESP + 0x220]     ; 004d818a
    PUSH 0x5dab81                       ; 004d8191 | DAT_005dab81
    MOV ECX,dword ptr [ESP + 0x234]     ; 004d8196
    XOR EDX,EDX                         ; 004d819d
    PUSH ECX                            ; 004d819f
    MOV dword ptr [ESP + 0x208],EDX     ; 004d81a0
    CALL crt_stdio.c_fopen_FUN_005b910c ; 004d81a7
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 004d81ac
    MOV EBX,EAX                         ; 004d81af
    TEST EAX,EAX                        ; 004d81b1
    JNZ 0x004d81f0                      ; 004d81b3
        ;   XREF to: 004d81f0 (CONDITIONAL_JUMP)  ; LAB_004d81f0
    CMP dword ptr [ESP + 0x200],0x0     ; 004d81b5
        ;   Label: LAB_004d81b5
    JNZ 0x004d830c                      ; 004d81bd
        ;   XREF to: 004d830c (CONDITIONAL_JUMP)  ; LAB_004d830c
    MOV EDI,dword ptr [ESP + 0x224]     ; 004d81c3
    MOV ESI,dword ptr [ESP + 0x22c]     ; 004d81ca
    SUB ECX,ECX                         ; 004d81d1
    DEC ECX                             ; 004d81d3
    XOR EAX,EAX                         ; 004d81d4
    SCASB.REPNE ES:EDI                  ; 004d81d6
    NOT ECX                             ; 004d81d8
    DEC ECX                             ; 004d81da
    CMP ECX,ESI                         ; 004d81db
    JL 0x004d82d4                       ; 004d81dd
        ;   XREF to: 004d82d4 (CONDITIONAL_JUMP)  ; LAB_004d82d4
    XOR EAX,EAX                         ; 004d81e3
    ADD ESP,0x204                       ; 004d81e5
    POP EBP                             ; 004d81eb
    POP EDI                             ; 004d81ec
    POP ESI                             ; 004d81ed
    POP EBX                             ; 004d81ee
    RET                                 ; 004d81ef
    MOV ESI,dword ptr [ESP + 0x21c]     ; 004d81f0
        ;   Label: LAB_004d81f0
    PUSH ESI                            ; 004d81f7
    PUSH 0x5dab84                       ; 004d81f8 | = "[%s]\n"
    LEA EAX,[ESP + 0x108]               ; 004d81fd
    PUSH EAX                            ; 004d8204
    CALL crt_unknown.c_FUN_005b7790     ; 004d8205
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 004d820a
    TEST byte ptr [EBX + 0xc],0x10      ; 004d820d
        ;   Label: LAB_004d820d
    JZ 0x004d8297                       ; 004d8211
        ;   XREF to: 004d8297 (CONDITIONAL_JUMP)  ; LAB_004d8297
    CMP dword ptr [ESP + 0x200],0x0     ; 004d8217
        ;   Label: LAB_004d8217
    JZ 0x004d8289                       ; 004d821f
        ;   XREF to: 004d8289 (CONDITIONAL_JUMP)  ; LAB_004d8289
    XOR EDX,EDX                         ; 004d8221
        ;   Label: LAB_004d8221
    MOV dword ptr [ESP + 0x200],EDX     ; 004d8223
    TEST byte ptr [EBX + 0xc],0x10      ; 004d822a
        ;   Label: LAB_004d822a
    JNZ 0x004d8289                      ; 004d822e
        ;   XREF to: 004d8289 (CONDITIONAL_JUMP)  ; LAB_004d8289
    PUSH EBX                            ; 004d8230
    PUSH 0xff                           ; 004d8231
    LEA EAX,[ESP + 0x8]                 ; 004d8236
    PUSH EAX                            ; 004d823a
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004d823b
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 004d8240
    TEST EAX,EAX                        ; 004d8243
    JZ 0x004d8289                       ; 004d8245
        ;   XREF to: 004d8289 (CONDITIONAL_JUMP)  ; LAB_004d8289
    MOV DL,0x3d                         ; 004d8247
    MOV ESI,ESP                         ; 004d8249
    MOV AL,byte ptr [ESI]               ; 004d824b
        ;   Label: LAB_004d824b
    CMP AL,DL                           ; 004d824d
    JZ 0x004d8263                       ; 004d824f
        ;   XREF to: 004d8263 (CONDITIONAL_JUMP)  ; LAB_004d8263
    CMP AL,0x0                          ; 004d8251
    JZ 0x004d8261                       ; 004d8253
        ;   XREF to: 004d8261 (CONDITIONAL_JUMP)  ; LAB_004d8261
    INC ESI                             ; 004d8255
    MOV AL,byte ptr [ESI]               ; 004d8256
    CMP AL,DL                           ; 004d8258
    JZ 0x004d8263                       ; 004d825a
        ;   XREF to: 004d8263 (CONDITIONAL_JUMP)  ; LAB_004d8263
    INC ESI                             ; 004d825c
    CMP AL,0x0                          ; 004d825d
    JNZ 0x004d824b                      ; 004d825f
        ;   XREF to: 004d824b (CONDITIONAL_JUMP)  ; LAB_004d824b
    SUB ESI,ESI                         ; 004d8261
        ;   Label: LAB_004d8261
    MOV EBP,ESI                         ; 004d8263
        ;   Label: LAB_004d8263
    TEST ESI,ESI                        ; 004d8265
    JZ 0x004d826c                       ; 004d8267
        ;   XREF to: 004d826c (CONDITIONAL_JUMP)  ; LAB_004d826c
    MOV byte ptr [ESI],0x0              ; 004d8269
    PUSH EDI                            ; 004d826c
        ;   Label: LAB_004d826c
    LEA EAX,[ESP + 0x4]                 ; 004d826d
    PUSH EAX                            ; 004d8271
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004d8272
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d8277
    TEST EAX,EAX                        ; 004d827a
    JNZ 0x004d822a                      ; 004d827c
        ;   XREF to: 004d822a (CONDITIONAL_JUMP)  ; LAB_004d822a
    MOV dword ptr [ESP + 0x200],0x1     ; 004d827e
    PUSH EBX                            ; 004d8289
        ;   Label: LAB_004d8289
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 004d828a
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 004d828f
    JMP 0x004d81b5                      ; 004d8292
        ;   XREF to: 004d81b5 (UNCONDITIONAL_JUMP)  ; LAB_004d81b5
    PUSH EBX                            ; 004d8297
        ;   Label: LAB_004d8297
    PUSH 0xff                           ; 004d8298
    LEA EAX,[ESP + 0x8]                 ; 004d829d
    PUSH EAX                            ; 004d82a1
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 004d82a2
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 004d82a7
    TEST EAX,EAX                        ; 004d82aa
    JZ 0x004d8217                       ; 004d82ac
        ;   XREF to: 004d8217 (CONDITIONAL_JUMP)  ; LAB_004d8217
    LEA EAX,[ESP + 0x100]               ; 004d82b2
    PUSH EAX                            ; 004d82b9
    LEA EAX,[ESP + 0x4]                 ; 004d82ba
    PUSH EAX                            ; 004d82be
    CALL crt_string.c__strcmp_FUN_005b8c30 ; 004d82bf
        ;   XREF to: 005b8c30 (UNCONDITIONAL_CALL)  ; int crt_string.c__strcmp_FUN_005b8c30(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d82c4
    TEST EAX,EAX                        ; 004d82c7
    JNZ 0x004d820d                      ; 004d82c9
        ;   XREF to: 004d820d (CONDITIONAL_JUMP)  ; LAB_004d820d
    JMP 0x004d8221                      ; 004d82cf
        ;   XREF to: 004d8221 (UNCONDITIONAL_JUMP)  ; LAB_004d8221
    MOV ESI,dword ptr [ESP + 0x224]     ; 004d82d4
        ;   Label: LAB_004d82d4
    MOV EDI,dword ptr [ESP + 0x228]     ; 004d82db
    PUSH EDI                            ; 004d82e2
    MOV AL,byte ptr [ESI]               ; 004d82e3
        ;   Label: LAB_004d82e3
    MOV byte ptr [EDI],AL               ; 004d82e5
    CMP AL,0x0                          ; 004d82e7
    JZ 0x004d82fb                       ; 004d82e9
        ;   XREF to: 004d82fb (CONDITIONAL_JUMP)  ; LAB_004d82fb
    MOV AL,byte ptr [ESI + 0x1]         ; 004d82eb
    ADD ESI,0x2                         ; 004d82ee
    MOV byte ptr [EDI + 0x1],AL         ; 004d82f1
    ADD EDI,0x2                         ; 004d82f4
    CMP AL,0x0                          ; 004d82f7
    JNZ 0x004d82e3                      ; 004d82f9
        ;   XREF to: 004d82e3 (CONDITIONAL_JUMP)  ; LAB_004d82e3
    POP EDI                             ; 004d82fb
        ;   Label: LAB_004d82fb
    MOV EAX,0x1                         ; 004d82fc
    ADD ESP,0x204                       ; 004d8301
    POP EBP                             ; 004d8307
    POP EDI                             ; 004d8308
    POP ESI                             ; 004d8309
    POP EBX                             ; 004d830a
    RET                                 ; 004d830b
    INC EBP                             ; 004d830c
        ;   Label: LAB_004d830c
    MOV EDI,EBP                         ; 004d830d
    SUB ECX,ECX                         ; 004d830f
    DEC ECX                             ; 004d8311
    XOR EAX,EAX                         ; 004d8312
    SCASB.REPNE ES:EDI                  ; 004d8314
    NOT ECX                             ; 004d8316
    DEC ECX                             ; 004d8318
    MOV EDI,dword ptr [ESP + 0x22c]     ; 004d8319
    PUSH EDI                            ; 004d8320
    LEA EAX,[ECX + -0x1]                ; 004d8321
    PUSH 0x0                            ; 004d8324
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 004d8326
    MOV EAX,dword ptr [ESP + 0x230]     ; 004d832a
    PUSH EAX                            ; 004d8331
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004d8332
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004d8337
    LEA EAX,[EDI + -0x1]                ; 004d833a
    PUSH EAX                            ; 004d833d
    PUSH EBP                            ; 004d833e
    MOV EDX,dword ptr [ESP + 0x230]     ; 004d833f
    PUSH EDX                            ; 004d8346
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 004d8347
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    MOV EAX,0x1                         ; 004d834c
    ADD ESP,0xc                         ; 004d8351
    ADD ESP,0x204                       ; 004d8354
    POP EBP                             ; 004d835a
    POP EDI                             ; 004d835b
    POP ESI                             ; 004d835c
    POP EBX                             ; 004d835d
    RET                                 ; 004d835e

