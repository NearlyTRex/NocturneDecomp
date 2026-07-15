; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10001200(void)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_10003400 at 1000358f
;
; Referenced Globals:
;   void* PTR_DAT_10014044 = 10060678
;   void* PTR_DAT_10014048 = 100a8688
;   void* PTR_DAT_1001404c = 100f0698
;   void* PTR_DAT_10014050 = 10018660
;   TerminatedCString s_Textures_10014058
;   TerminatedCString s_system_render_ini_10014068
;   TerminatedCString s_rt_1001407c
;   TerminatedCString s_wt_10014080
;   TerminatedCString s_s_10014084
;   TerminatedCString s_maxTextures32_d_1001408c
;   TerminatedCString s_maxTextures64_d_100140a0
;   TerminatedCString s_maxTextures128_d_100140b4
;   TerminatedCString s_maxTextures256_d_100140c8
;   TerminatedCString s_mipMapFlag_d_100140dc
;   TerminatedCString s_maxTextures32_100140ec
;   ... and 9 more
;
; Called Functions:
;   crt_stdio.c__fclose_FUN_10005430
;   crt_stdio.c_fopen_FUN_10005560
;   crt_stdio.c_fprintf_FUN_100054d0
;   FUN_10001020
;   FUN_10001440
;
; *****************************************************************************

section .text

    SUB ESP,0x40                        ; 10001200
        ;   Label: FUN_10001200
    MOV dword ptr [ESP + 0x4],0x200     ; 10001203
    PUSH EBX                            ; 1000120b
    PUSH ESI                            ; 1000120c
    PUSH EDI                            ; 1000120d
    XOR ESI,ESI                         ; 1000120e
    MOV dword ptr [ESP + 0xc],ESI       ; 10001210
    PUSH EBP                            ; 10001214
    MOV dword ptr [ESP + 0x18],ESI      ; 10001215
    PUSH 0x1001407c                     ; 10001219 | = "rt"
    PUSH 0x10014068                     ; 1000121e | = ".\\system\\render.ini"
    MOV dword ptr [0x10060670],ESI      ; 10001223 | DAT_10060670
    MOV dword ptr [ESP + 0x24],0x20     ; 10001229
    CALL crt_stdio.c_fopen_FUN_10005560 ; 10001231
        ;   XREF to: 10005560 (UNCONDITIONAL_CALL)  ; FILE * crt_stdio.c_fopen_FUN_10005560(char * filename, char * mode) | __wfopen
    ADD ESP,0x8                         ; 10001236
    TEST EAX,EAX                        ; 10001239
    JNZ 0x100012d3                      ; 1000123b
        ;   XREF to: 100012d3 (CONDITIONAL_JUMP)  ; LAB_100012d3
    PUSH 0x10014080                     ; 10001241 | = "wt"
    PUSH 0x10014068                     ; 10001246 | = ".\\system\\render.ini"
    CALL crt_stdio.c_fopen_FUN_10005560 ; 1000124b
        ;   XREF to: 10005560 (UNCONDITIONAL_CALL)  ; FILE * crt_stdio.c_fopen_FUN_10005560(char * filename, char * mode) | __wfopen
    ADD ESP,0x8                         ; 10001250
    MOV ESI,EAX                         ; 10001253
    PUSH 0x10014058                     ; 10001255 | = "Textures"
    PUSH 0x10014084                     ; 1000125a | = "[%s]\n"
    PUSH ESI                            ; 1000125f
    CALL crt_stdio.c_fprintf_FUN_100054d0 ; 10001260
        ;   XREF to: 100054d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_100054d0(FILE * file, char * format) | _fwprintf
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10001265
    ADD ESP,0xc                         ; 10001269
    PUSH EAX                            ; 1000126c
    PUSH 0x1001408c                     ; 1000126d | = "maxTextures32=%d\n"
    PUSH ESI                            ; 10001272
    CALL crt_stdio.c_fprintf_FUN_100054d0 ; 10001273
        ;   XREF to: 100054d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_100054d0(FILE * file, char * format) | _fwprintf
    MOV EAX,dword ptr [ESP + 0x20]      ; 10001278
    ADD ESP,0xc                         ; 1000127c
    PUSH EAX                            ; 1000127f
    PUSH 0x100140a0                     ; 10001280 | = "maxTextures64=%d\n"
    PUSH ESI                            ; 10001285
    CALL crt_stdio.c_fprintf_FUN_100054d0 ; 10001286
        ;   XREF to: 100054d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_100054d0(FILE * file, char * format) | _fwprintf
    MOV EAX,dword ptr [ESP + 0x24]      ; 1000128b
    ADD ESP,0xc                         ; 1000128f
    PUSH EAX                            ; 10001292
    PUSH 0x100140b4                     ; 10001293 | = "maxTextures128=%d\n"
    PUSH ESI                            ; 10001298
    CALL crt_stdio.c_fprintf_FUN_100054d0 ; 10001299
        ;   XREF to: 100054d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_100054d0(FILE * file, char * format) | _fwprintf
    MOV EAX,dword ptr [ESP + 0x28]      ; 1000129e
    ADD ESP,0xc                         ; 100012a2
    PUSH EAX                            ; 100012a5
    PUSH 0x100140c8                     ; 100012a6 | = "maxTextures256=%d\n"
    PUSH ESI                            ; 100012ab
    CALL crt_stdio.c_fprintf_FUN_100054d0 ; 100012ac
        ;   XREF to: 100054d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_100054d0(FILE * file, char * format) | _fwprintf
    ADD ESP,0xc                         ; 100012b1
    MOV EAX,[0x10060670]                ; 100012b4 | DAT_10060670
    PUSH EAX                            ; 100012b9
    PUSH 0x100140dc                     ; 100012ba | = "mipMapFlag=%d\n"
    PUSH ESI                            ; 100012bf
    CALL crt_stdio.c_fprintf_FUN_100054d0 ; 100012c0
        ;   XREF to: 100054d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_100054d0(FILE * file, char * format) | _fwprintf
    ADD ESP,0xc                         ; 100012c5
    PUSH ESI                            ; 100012c8
    CALL crt_stdio.c__fclose_FUN_10005430 ; 100012c9
        ;   XREF to: 10005430 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__fclose_FUN_10005430(FILE * file)
    ADD ESP,0x4                         ; 100012ce
    JMP 0x1000134f                      ; 100012d1
        ;   XREF to: 1000134f (UNCONDITIONAL_JUMP)  ; LAB_1000134f
    PUSH EAX                            ; 100012d3
        ;   Label: LAB_100012d3
    CALL crt_stdio.c__fclose_FUN_10005430 ; 100012d4
        ;   XREF to: 10005430 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__fclose_FUN_10005430(FILE * file)
    LEA EAX,[ESP + 0x14]                ; 100012d9
    ADD ESP,0x4                         ; 100012dd
    PUSH EAX                            ; 100012e0
    PUSH 0x100140ec                     ; 100012e1 | = "maxTextures32"
    PUSH 0x10014058                     ; 100012e6 | = "Textures"
    CALL FUN_10001440                   ; 100012eb
        ;   XREF to: 10001440 (UNCONDITIONAL_CALL)  ; undefined FUN_10001440()
    LEA EAX,[ESP + 0x20]                ; 100012f0
    ADD ESP,0xc                         ; 100012f4
    PUSH EAX                            ; 100012f7
    PUSH 0x100140fc                     ; 100012f8 | = "maxTextures64"
    PUSH 0x10014058                     ; 100012fd | = "Textures"
    CALL FUN_10001440                   ; 10001302
        ;   XREF to: 10001440 (UNCONDITIONAL_CALL)  ; undefined FUN_10001440()
    LEA EAX,[ESP + 0x24]                ; 10001307
    ADD ESP,0xc                         ; 1000130b
    PUSH EAX                            ; 1000130e
    PUSH 0x1001410c                     ; 1000130f | = "maxTextures128"
    PUSH 0x10014058                     ; 10001314 | = "Textures"
    CALL FUN_10001440                   ; 10001319
        ;   XREF to: 10001440 (UNCONDITIONAL_CALL)  ; undefined FUN_10001440()
    LEA EAX,[ESP + 0x28]                ; 1000131e
    ADD ESP,0xc                         ; 10001322
    PUSH EAX                            ; 10001325
    PUSH 0x1001411c                     ; 10001326 | = "maxTextures256"
    PUSH 0x10014058                     ; 1000132b | = "Textures"
    CALL FUN_10001440                   ; 10001330
        ;   XREF to: 10001440 (UNCONDITIONAL_CALL)  ; undefined FUN_10001440()
    ADD ESP,0xc                         ; 10001335
    PUSH 0x10060670                     ; 10001338 | DAT_10060670
    PUSH 0x1001412c                     ; 1000133d | = "mipMapFlag"
    PUSH 0x10014058                     ; 10001342 | = "Textures"
    CALL FUN_10001440                   ; 10001347
        ;   XREF to: 10001440 (UNCONDITIONAL_CALL)  ; undefined FUN_10001440()
    ADD ESP,0xc                         ; 1000134c
    MOV EAX,[0x10014044]                ; 1000134f | PTR_DAT_10014044
        ;   Label: LAB_1000134f
    MOV ECX,dword ptr [0x10014048]      ; 10001354 | PTR_DAT_10014048
    MOV EDX,dword ptr [0x1001404c]      ; 1000135a | PTR_DAT_1001404c
    MOV dword ptr [ESP + 0x30],EAX      ; 10001360 | DAT_10060678
    MOV EAX,[0x10014050]                ; 10001364 | PTR_DAT_10014050
    MOV dword ptr [ESP + 0x34],ECX      ; 10001369 | DAT_100a8688
    MOV ECX,dword ptr [ESP + 0x10]      ; 1000136d
    MOV dword ptr [ESP + 0x38],EDX      ; 10001371 | DAT_100f0698
    MOV EDX,dword ptr [ESP + 0x14]      ; 10001375
    MOV dword ptr [ESP + 0x3c],EAX      ; 10001379 | DAT_10018660
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000137d
    MOV dword ptr [ESP + 0x40],ECX      ; 10001381
    MOV ECX,dword ptr [ESP + 0x1c]      ; 10001385
    MOV dword ptr [ESP + 0x44],EDX      ; 10001389
    MOV dword ptr [ESP + 0x48],EAX      ; 1000138d
    MOV dword ptr [ESP + 0x4c],ECX      ; 10001391
    MOV dword ptr [ESP + 0x20],0x20     ; 10001395
    XOR EDI,EDI                         ; 1000139d
    XOR ECX,ECX                         ; 1000139f
    MOV dword ptr [ESP + 0x24],0x40     ; 100013a1
    MOV dword ptr [ESP + 0x28],0x80     ; 100013a9
    MOV dword ptr [ESP + 0x2c],0x100    ; 100013b1
    INC EDI                             ; 100013b9
        ;   Label: LAB_100013b9
    CMP EDI,0x4                         ; 100013ba
    JGE 0x10001404                      ; 100013bd
        ;   XREF to: 10001404 (CONDITIONAL_JUMP)  ; LAB_10001404
    LEA EDX,[EDI*0x4 + 0x0]             ; 100013bf
    LEA ESI,[ESP + ECX*0x1 + 0x40]      ; 100013c6
    LEA EBP,[ESP + EDX*0x1 + 0x40]      ; 100013ca
        ;   Label: LAB_100013ca
    MOV EAX,dword ptr [ESI]             ; 100013ce
    MOV EBX,dword ptr [EBP]             ; 100013d0
    CMP EBX,EAX                         ; 100013d3
    JGE 0x100013fc                      ; 100013d5
        ;   XREF to: 100013fc (CONDITIONAL_JUMP)  ; LAB_100013fc
    MOV dword ptr [ESI],EBX             ; 100013d7
    MOV EBX,dword ptr [ESP + ECX*0x1 + 0x20] ; 100013d9
    MOV dword ptr [EBP],EAX             ; 100013dd
    LEA EAX,[ESP + EDX*0x1 + 0x20]      ; 100013e0
    MOV EBP,dword ptr [EAX]             ; 100013e4
    MOV dword ptr [ESP + ECX*0x1 + 0x20],EBP ; 100013e6
    MOV dword ptr [EAX],EBX             ; 100013ea
    MOV EAX,dword ptr [ESP + ECX*0x1 + 0x30] ; 100013ec
    LEA EBX,[ESP + EDX*0x1 + 0x30]      ; 100013f0
    MOV EBP,dword ptr [EBX]             ; 100013f4
    MOV dword ptr [ESP + ECX*0x1 + 0x30],EBP ; 100013f6 | DAT_100a8688 | DAT_100f0698
    MOV dword ptr [EBX],EAX             ; 100013fa | DAT_10060678 | DAT_100a8688
    ADD EDX,0x4                         ; 100013fc
        ;   Label: LAB_100013fc
    CMP EDX,0x10                        ; 100013ff
    JL 0x100013ca                       ; 10001402
        ;   XREF to: 100013ca (CONDITIONAL_JUMP)  ; LAB_100013ca
    ADD ECX,0x4                         ; 10001404
        ;   Label: LAB_10001404
    CMP ECX,0xc                         ; 10001407
    JL 0x100013b9                       ; 1000140a
        ;   XREF to: 100013b9 (CONDITIONAL_JUMP)  ; LAB_100013b9
    XOR ESI,ESI                         ; 1000140c
    MOV EAX,dword ptr [ESP + ESI*0x1 + 0x20] ; 1000140e
        ;   Label: LAB_1000140e
    MOV ECX,dword ptr [ESP + ESI*0x1 + 0x40] ; 10001412
    PUSH EAX                            ; 10001416
    ADD ESI,0x4                         ; 10001417
    PUSH ECX                            ; 1000141a
    MOV ECX,dword ptr [ESP + ESI*0x1 + 0x34] ; 1000141b
    CALL FUN_10001020                   ; 1000141f
        ;   XREF to: 10001020 (UNCONDITIONAL_CALL)  ; undefined FUN_10001020()
    CMP ESI,0x10                        ; 10001424
    JL 0x1000140e                       ; 10001427
        ;   XREF to: 1000140e (CONDITIONAL_JUMP)  ; LAB_1000140e
    POP EBP                             ; 10001429
    POP EDI                             ; 1000142a
    POP ESI                             ; 1000142b
    POP EBX                             ; 1000142c
    ADD ESP,0x40                        ; 1000142d
    RET                                 ; 10001430

