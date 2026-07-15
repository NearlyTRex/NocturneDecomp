; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c__output_FUN_10005f40(FILE *file_handle,char *fmt,va_list args)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_handle
; char *           Stack[0x8]:4   fmt
; va_list          Stack[0xc]:4   args
; Local Variables:
; undefined        Stack[-0x248]:1  local_248
; undefined1       Stack[-0x246]:1  local_246
; undefined1       Stack[-0x245]:1  local_245
; undefined        Stack[-0x244]:1  local_244
; undefined4       Stack[-0x240]:4  local_240
; undefined4       Stack[-0x23c]:4  local_23c
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined4       Stack[-0x230]:4  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x228]:4  local_228
; undefined4       Stack[-0x224]:4  local_224
; undefined4       Stack[-0x220]:4  local_220
; undefined4       Stack[-0x21c]:4  local_21c
; undefined4       Stack[-0x218]:4  local_218
; undefined4       Stack[-0x214]:4  local_214
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x20c]:4  local_20c
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x204]:4  local_204
; undefined4       Stack[-0x200]:4  local_200
; undefined2       Stack[-0x2]:2  local_2
;
; XREF[2]:
;   crt_stdio.c__sprintf_FUN_10005630 at 1000565f
;   crt_stdio.c_fprintf_FUN_100054d0 at 100054f6
;
; Referenced Globals:
;   void* switchdataD_10006810 = 10006124
;   undefined4 PTR_caseD_5_10006824+3
;   void* PTR_caseD_6_10006828 = 100060dc
;   void* switchdataD_10006830 = 10006019
;   void* switchdataD_1000685c = 100060fa
;   void* switchdataD_100068a0 = 100061d6
;   undefined4 switchdataD_100068a0+1
;   undefined4 DAT_10010028
;   undefined4 s_.dll_100122f8+8
;   undefined2 DAT_10012308
;   unicode u_null)_1001230a
;   undefined1 DAT_10012318
;   string s_null)_10012319
;   undefined4 DAT_10012320
;   void* PTR_DAT_10016d40 = 10012318
;   ... and 6 more
;
; Called Functions:
;   crt_fpu.c__fptrap_FUN_10009ab0
;   crt_locale.c__wctomb_FUN_100091e0
;   crt_math.c__aulldiv_FUN_100092e0
;   crt_math.c__aullrem_FUN_10009350
;   crt_stdio.c_get_int64_arg_FUN_10006a00
;   crt_stdio.c_get_int_arg_FUN_100069f0
;   crt_stdio.c_get_short_arg_FUN_10006a20
;   crt_stdio.c_write_char_FUN_10006920
;   crt_stdio.c_write_multi_char_FUN_10006970
;   crt_stdio.c_write_string_FUN_100069b0
;
; *****************************************************************************

section .text

    SUB ESP,0x248                       ; 10005f40
        ;   Label: crt_stdio.c__output_FUN_10005f40
    MOV EAX,dword ptr [ESP + 0x250]     ; 10005f46
    PUSH EBX                            ; 10005f4d
    INC dword ptr [ESP + 0x254]         ; 10005f4e
    PUSH ESI                            ; 10005f55
    MOV dword ptr [ESP + 0x20],0x0      ; 10005f56
    PUSH EDI                            ; 10005f5e
    MOV BL,byte ptr [EAX]               ; 10005f5f
    PUSH EBP                            ; 10005f61
    TEST BL,BL                          ; 10005f62
    MOV dword ptr [ESP + 0x40],0x0      ; 10005f64
    JZ 0x10006197                       ; 10005f6c
        ;   XREF to: 10006197 (CONDITIONAL_JUMP)  ; LAB_10006197
    MOV ESI,dword ptr [ESP + 0x58]      ; 10005f72
    MOV EDI,dword ptr [ESP + 0x58]      ; 10005f76
    CMP dword ptr [ESP + 0x28],0x0      ; 10005f7a
        ;   Label: LAB_10005f7a
    JL 0x10006197                       ; 10005f7f
        ;   XREF to: 10006197 (CONDITIONAL_JUMP)  ; LAB_10006197
    CMP BL,0x20                         ; 10005f85
    JL 0x10005f9f                       ; 10005f88
        ;   XREF to: 10005f9f (CONDITIONAL_JUMP)  ; LAB_10005f9f
    CMP BL,0x78                         ; 10005f8a
    JG 0x10005f9f                       ; 10005f8d
        ;   XREF to: 10005f9f (CONDITIONAL_JUMP)  ; LAB_10005f9f
    MOVSX ECX,BL                        ; 10005f8f
    XOR EAX,EAX                         ; 10005f92
    MOV AL,byte ptr [ECX + 0x10012300]  ; 10005f94 | s_.dll_100122f8+8
    AND EAX,0xf                         ; 10005f9a
    JMP 0x10005fa1                      ; 10005f9d
        ;   XREF to: 10005fa1 (UNCONDITIONAL_JUMP)  ; LAB_10005fa1
    XOR EAX,EAX                         ; 10005f9f
        ;   Label: LAB_10005f9f
    MOV ECX,dword ptr [ESP + 0x40]      ; 10005fa1
        ;   Label: LAB_10005fa1
    MOV AL,byte ptr [ECX + EAX*0x8 + 0x10012320] ; 10005fa5 | DAT_10012320
    SAR AL,0x4                          ; 10005fac
    MOVSX ECX,AL                        ; 10005faf
    CMP ECX,0x7                         ; 10005fb2
    MOV EAX,ECX                         ; 10005fb5
    MOV dword ptr [ESP + 0x40],ECX      ; 10005fb7
    JA 0x1000617f                       ; 10005fbb
        ;   XREF to: 1000617f (CONDITIONAL_JUMP)  ; caseD_2f
    JMP dword ptr [EAX*0x4 + 0x10006810] ; 10005fc1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV dword ptr [ESP + 0x4c],0x0      ; 10005fc8
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0x48],0x0      ; 10005fd0
    MOV dword ptr [ESP + 0x34],0x0      ; 10005fd8
    MOV dword ptr [ESP + 0x38],0x0      ; 10005fe0
    MOV dword ptr [ESP + 0x1c],0xffffffff ; 10005fe8
    XOR ESI,ESI                         ; 10005ff0
    MOV dword ptr [ESP + 0x3c],ESI      ; 10005ff2
    JMP 0x1000617f                      ; 10005ff6
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOVSX EAX,BL                        ; 10005ffb
        ;   Label: caseD_2
    SUB EAX,0x20                        ; 10005ffe
    CMP EAX,0x10                        ; 10006001
    JA 0x1000617f                       ; 10006004
        ;   XREF to: 1000617f (CONDITIONAL_JUMP)  ; caseD_2f
    XOR ECX,ECX                         ; 1000600a
    MOV CL,byte ptr [EAX + 0x10006848]  ; 1000600c | PTR_caseD_6_10006828
    JMP dword ptr [ECX*0x4 + 0x10006830] ; 10006012 | caseD_20 | caseD_2f | caseD_23
        ;   Label: switchD
    OR ESI,0x2                          ; 10006019
        ;   Label: caseD_20
    JMP 0x1000617f                      ; 1000601c
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    OR ESI,0x80                         ; 10006021
        ;   Label: caseD_23
    JMP 0x1000617f                      ; 10006027
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    OR ESI,0x1                          ; 1000602c
        ;   Label: caseD_2b
    JMP 0x1000617f                      ; 1000602f
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    OR ESI,0x4                          ; 10006034
        ;   Label: caseD_2d
    JMP 0x1000617f                      ; 10006037
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    OR ESI,0x8                          ; 1000603c
        ;   Label: caseD_30
    JMP 0x1000617f                      ; 1000603f
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    CMP BL,0x2a                         ; 10006044
        ;   Label: caseD_3
    JNZ 0x10006073                      ; 10006047
        ;   XREF to: 10006073 (CONDITIONAL_JUMP)  ; LAB_10006073
    LEA EAX,[ESP + 0x264]               ; 10006049
    PUSH EAX                            ; 10006050
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 10006051
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
    MOV dword ptr [ESP + 0x38],EAX      ; 10006056
    ADD ESP,0x4                         ; 1000605a
    TEST EAX,EAX                        ; 1000605d
    JGE 0x1000617f                      ; 1000605f
        ;   XREF to: 1000617f (CONDITIONAL_JUMP)  ; caseD_2f
    NEG EAX                             ; 10006065
    OR ESI,0x4                          ; 10006067
    MOV dword ptr [ESP + 0x34],EAX      ; 1000606a
    JMP 0x1000617f                      ; 1000606e
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOV EAX,dword ptr [ESP + 0x34]      ; 10006073
        ;   Label: LAB_10006073
    MOVSX ECX,BL                        ; 10006077
    LEA EDX,[EAX + EAX*0x4]             ; 1000607a
    LEA ECX,[ECX + EDX*0x2 + -0x30]     ; 1000607d
    MOV dword ptr [ESP + 0x34],ECX      ; 10006081
    JMP 0x1000617f                      ; 10006085
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOV dword ptr [ESP + 0x1c],0x0      ; 1000608a
        ;   Label: caseD_4
    JMP 0x1000617f                      ; 10006092
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    CMP BL,0x2a                         ; 10006097
        ;   Label: caseD_5
    JNZ 0x100060c5                      ; 1000609a
        ;   XREF to: 100060c5 (CONDITIONAL_JUMP)  ; LAB_100060c5
    LEA EAX,[ESP + 0x264]               ; 1000609c
    PUSH EAX                            ; 100060a3
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 100060a4
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
    MOV dword ptr [ESP + 0x20],EAX      ; 100060a9
    ADD ESP,0x4                         ; 100060ad
    TEST EAX,EAX                        ; 100060b0
    JGE 0x1000617f                      ; 100060b2
        ;   XREF to: 1000617f (CONDITIONAL_JUMP)  ; caseD_2f
    MOV dword ptr [ESP + 0x1c],0xffffffff ; 100060b8
    JMP 0x1000617f                      ; 100060c0
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 100060c5
        ;   Label: LAB_100060c5
    MOVSX ECX,BL                        ; 100060c9
    LEA EDX,[EAX + EAX*0x4]             ; 100060cc
    LEA ECX,[ECX + EDX*0x2 + -0x30]     ; 100060cf
    MOV dword ptr [ESP + 0x1c],ECX      ; 100060d3
    JMP 0x1000617f                      ; 100060d7
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOVSX ECX,BL                        ; 100060dc
        ;   Label: caseD_6
    SUB ECX,0x49                        ; 100060df
    CMP ECX,0x2e                        ; 100060e2
    JA 0x1000617f                       ; 100060e5
        ;   XREF to: 1000617f (CONDITIONAL_JUMP)  ; caseD_2f
    XOR EAX,EAX                         ; 100060eb
    MOV AL,byte ptr [ECX + 0x10006870]  ; 100060ed | PTR_caseD_5_10006824+3
    JMP dword ptr [EAX*0x4 + 0x1000685c] ; 100060f3 | caseD_49 | caseD_2f | caseD_68
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x260]     ; 100060fa
        ;   Label: caseD_49
    CMP byte ptr [EAX],0x36             ; 10006101
    JNZ 0x1000611c                      ; 10006104
        ;   XREF to: 1000611c (CONDITIONAL_JUMP)  ; LAB_1000611c
    CMP byte ptr [EAX + 0x1],0x34       ; 10006106
    JNZ 0x1000611c                      ; 1000610a
        ;   XREF to: 1000611c (CONDITIONAL_JUMP)  ; LAB_1000611c
    ADD dword ptr [ESP + 0x260],0x2     ; 1000610c
    OR ESI,0x8000                       ; 10006114
    JMP 0x1000617f                      ; 1000611a
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOV dword ptr [ESP + 0x40],0x0      ; 1000611c
        ;   Label: LAB_1000611c
    XOR EAX,EAX                         ; 10006124
        ;   Label: caseD_0
    MOV ECX,dword ptr [0x10017480]      ; 10006126 | PTR_DAT_10017480
    MOV AL,BL                           ; 1000612c
    MOV dword ptr [ESP + 0x3c],0x0      ; 1000612e
    TEST byte ptr [ECX + EAX*0x2 + 0x1],0x80 ; 10006136 | DAT_1001748b
    JZ 0x10006166                       ; 1000613b
        ;   XREF to: 10006166 (CONDITIONAL_JUMP)  ; LAB_10006166
    LEA EAX,[ESP + 0x28]                ; 1000613d
    MOV ECX,dword ptr [ESP + 0x25c]     ; 10006141
    MOVSX EDX,BL                        ; 10006148
    PUSH EAX                            ; 1000614b
    PUSH ECX                            ; 1000614c
    PUSH EDX                            ; 1000614d
    CALL crt_stdio.c_write_char_FUN_10006920 ; 1000614e
        ;   XREF to: 10006920 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_char_FUN_10006920(int ch, FILE * file, int * pnumwritten)
    MOV ECX,dword ptr [ESP + 0x26c]     ; 10006153
    ADD ESP,0xc                         ; 1000615a
    MOV BL,byte ptr [ECX]               ; 1000615d
    INC dword ptr [ESP + 0x260]         ; 1000615f
    LEA EAX,[ESP + 0x28]                ; 10006166
        ;   Label: LAB_10006166
    MOV ECX,dword ptr [ESP + 0x25c]     ; 1000616a
    MOVSX EDX,BL                        ; 10006171
    PUSH EAX                            ; 10006174
    PUSH ECX                            ; 10006175
    PUSH EDX                            ; 10006176
    CALL crt_stdio.c_write_char_FUN_10006920 ; 10006177
        ;   XREF to: 10006920 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_char_FUN_10006920(int ch, FILE * file, int * pnumwritten)
    ADD ESP,0xc                         ; 1000617c
    MOV EAX,dword ptr [ESP + 0x260]     ; 1000617f
        ;   Label: default
    INC dword ptr [ESP + 0x260]         ; 10006186
    MOV BL,byte ptr [EAX]               ; 1000618d
    TEST BL,BL                          ; 1000618f
    JNZ 0x10005f7a                      ; 10006191
        ;   XREF to: 10005f7a (CONDITIONAL_JUMP)  ; LAB_10005f7a
    MOV EAX,dword ptr [ESP + 0x28]      ; 10006197
        ;   Label: LAB_10006197
    POP EBP                             ; 1000619b
    POP EDI                             ; 1000619c
    POP ESI                             ; 1000619d
    POP EBX                             ; 1000619e
    ADD ESP,0x248                       ; 1000619f
    RET                                 ; 100061a5
    OR ESI,0x20                         ; 100061a6
        ;   Label: caseD_68
    JMP 0x1000617f                      ; 100061a9
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    OR ESI,0x10                         ; 100061ab
        ;   Label: caseD_6c
    JMP 0x1000617f                      ; 100061ae
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    OR ESI,0x800                        ; 100061b0
        ;   Label: caseD_77
    JMP 0x1000617f                      ; 100061b6
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f
    MOVSX ECX,BL                        ; 100061b8
        ;   Label: caseD_7
    SUB ECX,0x43                        ; 100061bb
    CMP ECX,0x35                        ; 100061be
    JA 0x100066b4                       ; 100061c1
        ;   XREF to: 100066b4 (CONDITIONAL_JUMP)  ; caseD_77
    XOR EAX,EAX                         ; 100061c7
    MOV AL,byte ptr [ECX + 0x100068e4]  ; 100061c9 | switchdataD_100068a0+1
    JMP dword ptr [EAX*0x4 + 0x100068a0] ; 100061cf | caseD_43 | caseD_77 | caseD_47
        ;   Label: switchD
    TEST ESI,0x830                      ; 100061d6
        ;   Label: caseD_43
    JNZ 0x100061e4                      ; 100061dc
        ;   XREF to: 100061e4 (CONDITIONAL_JUMP)  ; caseD_63
    OR ESI,0x800                        ; 100061de
    TEST ESI,0x810                      ; 100061e4
        ;   Label: caseD_63
    LEA EAX,[ESP + 0x264]               ; 100061ea
    PUSH EAX                            ; 100061f1
    JZ 0x1000666d                       ; 100061f2
        ;   XREF to: 1000666d (CONDITIONAL_JUMP)  ; LAB_1000666d
    CALL crt_stdio.c_get_short_arg_FUN_10006a20 ; 100061f8
        ;   XREF to: 10006a20 (UNCONDITIONAL_CALL)  ; short crt_stdio.c_get_short_arg_FUN_10006a20(va_list * parg)
    ADD ESP,0x4                         ; 100061fd
    PUSH EAX                            ; 10006200
    LEA EAX,[ESP + 0x5c]                ; 10006201
    PUSH EAX                            ; 10006205
    CALL crt_locale.c__wctomb_FUN_100091e0 ; 10006206
        ;   XREF to: 100091e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c__wctomb_FUN_100091e0(char * mb_ch, wchar_t w_ch)
    ADD ESP,0x8                         ; 1000620b
    MOV EDI,EAX                         ; 1000620e
    TEST EDI,EDI                        ; 10006210
    JGE 0x1000667e                      ; 10006212
        ;   XREF to: 1000667e (CONDITIONAL_JUMP)  ; LAB_1000667e
    MOV dword ptr [ESP + 0x48],0x1      ; 10006218
    JMP 0x1000667e                      ; 10006220
        ;   XREF to: 1000667e (UNCONDITIONAL_JUMP)  ; LAB_1000667e
    MOV dword ptr [ESP + 0x4c],0x1      ; 10006225
        ;   Label: caseD_45
    ADD BL,0x20                         ; 1000622d
    OR ESI,0x40                         ; 10006230
        ;   Label: caseD_65
    LEA EAX,[ESP + 0x58]                ; 10006233
    CMP dword ptr [ESP + 0x1c],0x0      ; 10006237
    MOV dword ptr [ESP + 0x18],EAX      ; 1000623c
    JGE 0x100065be                      ; 10006240
        ;   XREF to: 100065be (CONDITIONAL_JUMP)  ; LAB_100065be
    MOV dword ptr [ESP + 0x1c],0x6      ; 10006246
    JMP 0x100065cd                      ; 1000624e
        ;   XREF to: 100065cd (UNCONDITIONAL_JUMP)  ; LAB_100065cd
    TEST ESI,0x830                      ; 10006253
        ;   Label: caseD_53
    JNZ 0x10006261                      ; 10006259
        ;   XREF to: 10006261 (CONDITIONAL_JUMP)  ; caseD_73
    OR ESI,0x800                        ; 1000625b
    CMP dword ptr [ESP + 0x1c],-0x1     ; 10006261
        ;   Label: caseD_73
    MOV EBX,0x7fffffff                  ; 10006266
    JZ 0x10006271                       ; 1000626b
        ;   XREF to: 10006271 (CONDITIONAL_JUMP)  ; LAB_10006271
    MOV EBX,dword ptr [ESP + 0x1c]      ; 1000626d
    LEA EAX,[ESP + 0x264]               ; 10006271
        ;   Label: LAB_10006271
    PUSH EAX                            ; 10006278
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 10006279
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
    MOV dword ptr [ESP + 0x1c],EAX      ; 1000627e
    ADD ESP,0x4                         ; 10006282
    TEST ESI,0x810                      ; 10006285
    JZ 0x10006688                       ; 1000628b
        ;   XREF to: 10006688 (CONDITIONAL_JUMP)  ; LAB_10006688
    TEST EAX,EAX                        ; 10006291
    JNZ 0x1000629e                      ; 10006293
        ;   XREF to: 1000629e (CONDITIONAL_JUMP)  ; LAB_1000629e
    MOV EAX,[0x10016d44]                ; 10006295 | PTR_DAT_10016d44
    MOV dword ptr [ESP + 0x18],EAX      ; 1000629a | DAT_10012308
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000629e
        ;   Label: LAB_1000629e
    XOR EDI,EDI                         ; 100062a2
    MOV dword ptr [ESP + 0x3c],0x1      ; 100062a4
    TEST EBX,EBX                        ; 100062ac
    JLE 0x100066b4                      ; 100062ae
        ;   XREF to: 100066b4 (CONDITIONAL_JUMP)  ; caseD_77
    MOV AX,word ptr [EBP]               ; 100062b4 | DAT_10012308 | = "null)"
        ;   Label: LAB_100062b4
    TEST AX,AX                          ; 100062b8
    JZ 0x100066b4                       ; 100062bb
        ;   XREF to: 100066b4 (CONDITIONAL_JUMP)  ; caseD_77
    PUSH EAX                            ; 100062c1 | DAT_10010028
    LEA EAX,[ESP + 0x14]                ; 100062c2
    PUSH EAX                            ; 100062c6
    CALL crt_locale.c__wctomb_FUN_100091e0 ; 100062c7
        ;   XREF to: 100091e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c__wctomb_FUN_100091e0(char * mb_ch, wchar_t w_ch)
    ADD ESP,0x8                         ; 100062cc
    TEST EAX,EAX                        ; 100062cf
    JZ 0x100066b4                       ; 100062d1
        ;   XREF to: 100066b4 (CONDITIONAL_JUMP)  ; caseD_77
    ADD EDI,EAX                         ; 100062d7
    ADD EBP,0x2                         ; 100062d9
    CMP EDI,EBX                         ; 100062dc
    JL 0x100062b4                       ; 100062de
        ;   XREF to: 100062b4 (CONDITIONAL_JUMP)  ; LAB_100062b4
    JMP 0x100066b4                      ; 100062e0
        ;   XREF to: 100066b4 (UNCONDITIONAL_JUMP)  ; caseD_77
    LEA EAX,[ESP + 0x264]               ; 100062e5
        ;   Label: caseD_5a
    PUSH EAX                            ; 100062ec
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 100062ed
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
    ADD ESP,0x4                         ; 100062f2
    TEST EAX,EAX                        ; 100062f5
    JZ 0x10006333                       ; 100062f7
        ;   XREF to: 10006333 (CONDITIONAL_JUMP)  ; LAB_10006333
    MOV ECX,dword ptr [EAX + 0x4]       ; 100062f9
    TEST ECX,ECX                        ; 100062fc
    JZ 0x10006333                       ; 100062fe
        ;   XREF to: 10006333 (CONDITIONAL_JUMP)  ; LAB_10006333
    TEST ESI,0x800                      ; 10006300
    JZ 0x1000631f                       ; 10006306
        ;   XREF to: 1000631f (CONDITIONAL_JUMP)  ; LAB_1000631f
    MOV dword ptr [ESP + 0x3c],0x1      ; 10006308
    MOVSX EDI,word ptr [EAX]            ; 10006310
    SHR EDI,0x1                         ; 10006313
    MOV dword ptr [ESP + 0x18],ECX      ; 10006316
    JMP 0x100066b4                      ; 1000631a
        ;   XREF to: 100066b4 (UNCONDITIONAL_JUMP)  ; caseD_77
    MOV dword ptr [ESP + 0x3c],0x0      ; 1000631f
        ;   Label: LAB_1000631f
    MOVSX EDI,word ptr [EAX]            ; 10006327
    MOV dword ptr [ESP + 0x18],ECX      ; 1000632a
    JMP 0x100066b4                      ; 1000632e
        ;   XREF to: 100066b4 (UNCONDITIONAL_JUMP)  ; caseD_77
    MOV EAX,[0x10016d40]                ; 10006333 | PTR_DAT_10016d40
        ;   Label: LAB_10006333
    MOV ECX,0xffffffff                  ; 10006338
    MOV EDI,EAX                         ; 1000633d
    MOV dword ptr [ESP + 0x18],EAX      ; 1000633f | DAT_10012318
    SUB EAX,EAX                         ; 10006343
    SCASB.REPNE ES:EDI                  ; 10006345 | DAT_10012318 | = "null)"
    NOT ECX                             ; 10006347
    LEA EDI,[ECX + -0x1]                ; 10006349
    JMP 0x100066b4                      ; 1000634c
        ;   XREF to: 100066b4 (UNCONDITIONAL_JUMP)  ; caseD_77
    OR ESI,0x40                         ; 10006351
        ;   Label: caseD_64
    MOV EDI,0xa                         ; 10006354
    JMP 0x100063d4                      ; 10006359
        ;   XREF to: 100063d4 (UNCONDITIONAL_JUMP)  ; LAB_100063d4
    LEA EAX,[ESP + 0x264]               ; 1000635b
        ;   Label: caseD_6e
    PUSH EAX                            ; 10006362
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 10006363
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
    MOV ECX,dword ptr [ESP + 0x2c]      ; 10006368
    ADD ESP,0x4                         ; 1000636c
    TEST ESI,0x20                       ; 1000636f
    JZ 0x1000637c                       ; 10006375
        ;   XREF to: 1000637c (CONDITIONAL_JUMP)  ; LAB_1000637c
    MOV word ptr [EAX],CX               ; 10006377
    JMP 0x1000637e                      ; 1000637a
        ;   XREF to: 1000637e (UNCONDITIONAL_JUMP)  ; LAB_1000637e
    MOV dword ptr [EAX],ECX             ; 1000637c
        ;   Label: LAB_1000637c
    MOV dword ptr [ESP + 0x48],0x1      ; 1000637e
        ;   Label: LAB_1000637e
    JMP 0x100066b4                      ; 10006386
        ;   XREF to: 100066b4 (UNCONDITIONAL_JUMP)  ; caseD_77
    TEST ESI,0x80                       ; 1000638b
        ;   Label: caseD_6f
    MOV EDI,0x8                         ; 10006391
    JZ 0x100063d4                       ; 10006396
        ;   XREF to: 100063d4 (CONDITIONAL_JUMP)  ; LAB_100063d4
    OR ESI,0x200                        ; 10006398
    JMP 0x100063d4                      ; 1000639e
        ;   XREF to: 100063d4 (UNCONDITIONAL_JUMP)  ; LAB_100063d4
    MOV dword ptr [ESP + 0x1c],0x8      ; 100063a0
        ;   Label: caseD_70
    MOV dword ptr [ESP + 0x44],0x7      ; 100063a8
        ;   Label: caseD_58
    TEST ESI,0x80                       ; 100063b0
        ;   Label: LAB_100063b0
    MOV EDI,0x10                        ; 100063b6
    JZ 0x100063d4                       ; 100063bb
        ;   XREF to: 100063d4 (CONDITIONAL_JUMP)  ; LAB_100063d4
    MOV byte ptr [ESP + 0x12],0x30      ; 100063bd
    MOV dword ptr [ESP + 0x38],0x2      ; 100063c2
    MOV EAX,dword ptr [ESP + 0x44]      ; 100063ca
    ADD AL,0x51                         ; 100063ce
    MOV byte ptr [ESP + 0x13],AL        ; 100063d0
    TEST ESI,0x8000                     ; 100063d4
        ;   Label: LAB_100063d4
    JZ 0x1000640a                       ; 100063da
        ;   XREF to: 1000640a (CONDITIONAL_JUMP)  ; LAB_1000640a
    LEA EAX,[ESP + 0x264]               ; 100063dc
    PUSH EAX                            ; 100063e3
    CALL crt_stdio.c_get_int64_arg_FUN_10006a00 ; 100063e4
        ;   XREF to: 10006a00 (UNCONDITIONAL_CALL)  ; longlong crt_stdio.c_get_int64_arg_FUN_10006a00(va_list * parg)
    MOV dword ptr [ESP + 0x24],EAX      ; 100063e9
    MOV dword ptr [ESP + 0x28],EDX      ; 100063ed
    ADD ESP,0x4                         ; 100063f1
    JMP 0x1000647c                      ; 100063f4
        ;   XREF to: 1000647c (UNCONDITIONAL_JUMP)  ; LAB_1000647c
    MOV EDI,0xa                         ; 100063f9
        ;   Label: caseD_75
    JMP 0x100063d4                      ; 100063fe
        ;   XREF to: 100063d4 (UNCONDITIONAL_JUMP)  ; LAB_100063d4
    MOV dword ptr [ESP + 0x44],0x27     ; 10006400
        ;   Label: caseD_78
    JMP 0x100063b0                      ; 10006408
        ;   XREF to: 100063b0 (UNCONDITIONAL_JUMP)  ; LAB_100063b0
    TEST ESI,0x20                       ; 1000640a
        ;   Label: LAB_1000640a
    JZ 0x10006445                       ; 10006410
        ;   XREF to: 10006445 (CONDITIONAL_JUMP)  ; LAB_10006445
    TEST ESI,0x40                       ; 10006412
    LEA EAX,[ESP + 0x264]               ; 10006418
    PUSH EAX                            ; 1000641f
    JZ 0x10006438                       ; 10006420
        ;   XREF to: 10006438 (CONDITIONAL_JUMP)  ; LAB_10006438
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 10006422
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
    MOVSX EAX,AX                        ; 10006427
    MOV dword ptr [ESP + 0x24],EAX      ; 1000642a
    ADD ESP,0x4                         ; 1000642e
    CDQ                                 ; 10006431
    MOV dword ptr [ESP + 0x24],EDX      ; 10006432
    JMP 0x1000647c                      ; 10006436
        ;   XREF to: 1000647c (UNCONDITIONAL_JUMP)  ; LAB_1000647c
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 10006438
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
        ;   Label: LAB_10006438
    MOVZX EAX,AX                        ; 1000643d
    ADD ESP,0x4                         ; 10006440
    JMP 0x10006470                      ; 10006443
        ;   XREF to: 10006470 (UNCONDITIONAL_JUMP)  ; LAB_10006470
    TEST ESI,0x40                       ; 10006445
        ;   Label: LAB_10006445
    LEA EAX,[ESP + 0x264]               ; 1000644b
    PUSH EAX                            ; 10006452
    JZ 0x10006468                       ; 10006453
        ;   XREF to: 10006468 (CONDITIONAL_JUMP)  ; LAB_10006468
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 10006455
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
    MOV dword ptr [ESP + 0x24],EAX      ; 1000645a
    ADD ESP,0x4                         ; 1000645e
    CDQ                                 ; 10006461
    MOV dword ptr [ESP + 0x24],EDX      ; 10006462
    JMP 0x1000647c                      ; 10006466
        ;   XREF to: 1000647c (UNCONDITIONAL_JUMP)  ; LAB_1000647c
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 10006468
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
        ;   Label: LAB_10006468
    ADD ESP,0x4                         ; 1000646d
    MOV dword ptr [ESP + 0x20],EAX      ; 10006470
        ;   Label: LAB_10006470
    MOV dword ptr [ESP + 0x24],0x0      ; 10006474
    TEST ESI,0x40                       ; 1000647c
        ;   Label: LAB_1000647c
    JZ 0x100064b3                       ; 10006482
        ;   XREF to: 100064b3 (CONDITIONAL_JUMP)  ; LAB_100064b3
    CMP dword ptr [ESP + 0x24],0x0      ; 10006484
    JG 0x100064b3                       ; 10006489
        ;   XREF to: 100064b3 (CONDITIONAL_JUMP)  ; LAB_100064b3
    JL 0x10006494                       ; 1000648b
        ;   XREF to: 10006494 (CONDITIONAL_JUMP)  ; LAB_10006494
    CMP dword ptr [ESP + 0x20],0x0      ; 1000648d
    JNC 0x100064b3                      ; 10006492
        ;   XREF to: 100064b3 (CONDITIONAL_JUMP)  ; LAB_100064b3
    MOV EAX,dword ptr [ESP + 0x20]      ; 10006494
        ;   Label: LAB_10006494
    MOV ECX,dword ptr [ESP + 0x24]      ; 10006498
    NEG EAX                             ; 1000649c
    ADC ECX,0x0                         ; 1000649e
    MOV dword ptr [ESP + 0x2c],EAX      ; 100064a1
    NEG ECX                             ; 100064a5
    OR ESI,0x100                        ; 100064a7
    MOV dword ptr [ESP + 0x30],ECX      ; 100064ad
    JMP 0x100064c3                      ; 100064b1
        ;   XREF to: 100064c3 (UNCONDITIONAL_JUMP)  ; LAB_100064c3
    MOV EAX,dword ptr [ESP + 0x20]      ; 100064b3
        ;   Label: LAB_100064b3
    MOV ECX,dword ptr [ESP + 0x24]      ; 100064b7
    MOV dword ptr [ESP + 0x2c],EAX      ; 100064bb
    MOV dword ptr [ESP + 0x30],ECX      ; 100064bf
    TEST ESI,0x8000                     ; 100064c3
        ;   Label: LAB_100064c3
    JNZ 0x100064d5                      ; 100064c9
        ;   XREF to: 100064d5 (CONDITIONAL_JUMP)  ; LAB_100064d5
    AND dword ptr [ESP + 0x2c],0xffffffff ; 100064cb
    AND dword ptr [ESP + 0x30],0x0      ; 100064d0
    CMP dword ptr [ESP + 0x1c],0x0      ; 100064d5
        ;   Label: LAB_100064d5
    JGE 0x100064e6                      ; 100064da
        ;   XREF to: 100064e6 (CONDITIONAL_JUMP)  ; LAB_100064e6
    MOV dword ptr [ESP + 0x1c],0x1      ; 100064dc
    JMP 0x100064e9                      ; 100064e4
        ;   XREF to: 100064e9 (UNCONDITIONAL_JUMP)  ; LAB_100064e9
    AND ESI,0xfffffff7                  ; 100064e6
        ;   Label: LAB_100064e6
    CMP dword ptr [ESP + 0x30],0x0      ; 100064e9
        ;   Label: LAB_100064e9
    JNZ 0x100064ff                      ; 100064ee
        ;   XREF to: 100064ff (CONDITIONAL_JUMP)  ; LAB_100064ff
    CMP dword ptr [ESP + 0x2c],0x0      ; 100064f0
    JNZ 0x100064ff                      ; 100064f5
        ;   XREF to: 100064ff (CONDITIONAL_JUMP)  ; LAB_100064ff
    MOV dword ptr [ESP + 0x38],0x0      ; 100064f7
    LEA EAX,[ESP + 0x257]               ; 100064ff
        ;   Label: LAB_100064ff
    MOV dword ptr [ESP + 0x18],EAX      ; 10006506
    MOV EAX,dword ptr [ESP + 0x1c]      ; 1000650a
        ;   Label: LAB_1000650a
    DEC dword ptr [ESP + 0x1c]          ; 1000650e
    TEST EAX,EAX                        ; 10006512
    JG 0x10006524                       ; 10006514
        ;   XREF to: 10006524 (CONDITIONAL_JUMP)  ; LAB_10006524
    CMP dword ptr [ESP + 0x30],0x0      ; 10006516
    JNZ 0x10006524                      ; 1000651b
        ;   XREF to: 10006524 (CONDITIONAL_JUMP)  ; LAB_10006524
    CMP dword ptr [ESP + 0x2c],0x0      ; 1000651d
    JZ 0x10006581                       ; 10006522
        ;   XREF to: 10006581 (CONDITIONAL_JUMP)  ; LAB_10006581
    MOV dword ptr [ESP + 0x20],EDI      ; 10006524
        ;   Label: LAB_10006524
    MOV EAX,EDI                         ; 10006528
    CDQ                                 ; 1000652a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 1000652b
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000652f
    MOV dword ptr [ESP + 0x24],EDX      ; 10006533
    MOV EDX,dword ptr [ESP + 0x20]      ; 10006537
    MOV EBX,dword ptr [ESP + 0x24]      ; 1000653b
    PUSH EBX                            ; 1000653f
    PUSH EDX                            ; 10006540
    PUSH ECX                            ; 10006541
    PUSH EAX                            ; 10006542
    CALL crt_math.c__aullrem_FUN_10009350 ; 10006543
        ;   XREF to: 10009350 (UNCONDITIONAL_CALL)  ; double crt_math.c__aullrem_FUN_10009350(uint dividend_lo, uint dividend_hi, uint divisor_lo, uint divisor_hi)
    LEA EBX,[EAX + 0x30]                ; 10006548
    MOV ECX,dword ptr [ESP + 0x30]      ; 1000654b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 1000654f
    MOV EDX,dword ptr [ESP + 0x20]      ; 10006553
    MOV EBP,dword ptr [ESP + 0x24]      ; 10006557
    PUSH EBP                            ; 1000655b
    PUSH EDX                            ; 1000655c
    PUSH ECX                            ; 1000655d
    PUSH EAX                            ; 1000655e
    CALL crt_math.c__aulldiv_FUN_100092e0 ; 1000655f
        ;   XREF to: 100092e0 (UNCONDITIONAL_CALL)  ; double crt_math.c__aulldiv_FUN_100092e0(uint dividend_lo, uint dividend_hi, uint divisor_lo, uint divisor_hi)
    MOV dword ptr [ESP + 0x2c],EAX      ; 10006564
    CMP EBX,0x39                        ; 10006568
    MOV dword ptr [ESP + 0x30],EDX      ; 1000656b
    JLE 0x10006575                      ; 1000656f
        ;   XREF to: 10006575 (CONDITIONAL_JUMP)  ; LAB_10006575
    ADD EBX,dword ptr [ESP + 0x44]      ; 10006571
    MOV EAX,dword ptr [ESP + 0x18]      ; 10006575
        ;   Label: LAB_10006575
    DEC dword ptr [ESP + 0x18]          ; 10006579
    MOV byte ptr [EAX],BL               ; 1000657d
    JMP 0x1000650a                      ; 1000657f
        ;   XREF to: 1000650a (UNCONDITIONAL_JUMP)  ; LAB_1000650a
    LEA EDI,[ESP + 0x257]               ; 10006581
        ;   Label: LAB_10006581
    SUB EDI,dword ptr [ESP + 0x18]      ; 10006588
    INC dword ptr [ESP + 0x18]          ; 1000658c
    TEST ESI,0x200                      ; 10006590
    JZ 0x100066b4                       ; 10006596
        ;   XREF to: 100066b4 (CONDITIONAL_JUMP)  ; caseD_77
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000659c
    CMP byte ptr [EAX],0x30             ; 100065a0
    JNZ 0x100065ad                      ; 100065a3
        ;   XREF to: 100065ad (CONDITIONAL_JUMP)  ; LAB_100065ad
    TEST EDI,EDI                        ; 100065a5
    JNZ 0x100066b4                      ; 100065a7
        ;   XREF to: 100066b4 (CONDITIONAL_JUMP)  ; caseD_77
    INC EDI                             ; 100065ad
        ;   Label: LAB_100065ad
    DEC dword ptr [ESP + 0x18]          ; 100065ae
    MOV EAX,dword ptr [ESP + 0x18]      ; 100065b2
    MOV byte ptr [EAX],0x30             ; 100065b6
    JMP 0x100066b4                      ; 100065b9
        ;   XREF to: 100066b4 (UNCONDITIONAL_JUMP)  ; caseD_77
    JNZ 0x100065cd                      ; 100065be
        ;   XREF to: 100065cd (CONDITIONAL_JUMP)  ; LAB_100065cd
        ;   Label: LAB_100065be
    CMP BL,0x67                         ; 100065c0
    JNZ 0x100065cd                      ; 100065c3
        ;   XREF to: 100065cd (CONDITIONAL_JUMP)  ; LAB_100065cd
    MOV dword ptr [ESP + 0x1c],0x1      ; 100065c5
    ADD dword ptr [ESP + 0x264],0x8     ; 100065cd
        ;   Label: LAB_100065cd
    MOV EAX,dword ptr [ESP + 0x264]     ; 100065d5
    MOV ECX,dword ptr [EAX + -0x8]      ; 100065dc
    MOV EDX,dword ptr [EAX + -0x4]      ; 100065df
    SUB EAX,0x8                         ; 100065e2
    MOV dword ptr [ESP + 0x50],ECX      ; 100065e5
    MOV EAX,dword ptr [ESP + 0x4c]      ; 100065e9
    MOV ECX,dword ptr [ESP + 0x1c]      ; 100065ed
    MOV dword ptr [ESP + 0x54],EDX      ; 100065f1
    PUSH EAX                            ; 100065f5
    LEA EAX,[ESP + 0x5c]                ; 100065f6
    PUSH ECX                            ; 100065fa
    MOVSX EDX,BL                        ; 100065fb
    LEA ECX,[ESP + 0x58]                ; 100065fe
    PUSH EDX                            ; 10006602
    PUSH EAX                            ; 10006603
    MOV EDI,ESI                         ; 10006604
    PUSH ECX                            ; 10006606
    CALL dword ptr [0x10016d48]         ; 10006607 | PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d48
    ADD ESP,0x14                        ; 1000660d
    AND EDI,0x80                        ; 10006610
    JZ 0x1000662d                       ; 10006616
        ;   XREF to: 1000662d (CONDITIONAL_JUMP)  ; LAB_1000662d
    CMP dword ptr [ESP + 0x1c],0x0      ; 10006618
    JNZ 0x1000662d                      ; 1000661d
        ;   XREF to: 1000662d (CONDITIONAL_JUMP)  ; LAB_1000662d
    LEA EAX,[ESP + 0x58]                ; 1000661f
    PUSH EAX                            ; 10006623
    CALL dword ptr [0x10016d54]         ; 10006624 | PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d54
    ADD ESP,0x4                         ; 1000662a
    CMP BL,0x67                         ; 1000662d
        ;   Label: LAB_1000662d
    JNZ 0x10006644                      ; 10006630
        ;   XREF to: 10006644 (CONDITIONAL_JUMP)  ; LAB_10006644
    TEST EDI,EDI                        ; 10006632
    JNZ 0x10006644                      ; 10006634
        ;   XREF to: 10006644 (CONDITIONAL_JUMP)  ; LAB_10006644
    LEA EAX,[ESP + 0x58]                ; 10006636
    PUSH EAX                            ; 1000663a
    CALL dword ptr [0x10016d4c]         ; 1000663b | PTR_crt_fpu.c__fptrap_FUN_10009ab0_10016d4c
    ADD ESP,0x4                         ; 10006641
    CMP byte ptr [ESP + 0x58],0x2d      ; 10006644
        ;   Label: LAB_10006644
    JNZ 0x10006659                      ; 10006649
        ;   XREF to: 10006659 (CONDITIONAL_JUMP)  ; LAB_10006659
    OR ESI,0x100                        ; 1000664b
    LEA EAX,[ESP + 0x59]                ; 10006651
    MOV dword ptr [ESP + 0x18],EAX      ; 10006655
    MOV EDI,dword ptr [ESP + 0x18]      ; 10006659
        ;   Label: LAB_10006659
    MOV ECX,0xffffffff                  ; 1000665d
    SUB EAX,EAX                         ; 10006662
    SCASB.REPNE ES:EDI                  ; 10006664
    NOT ECX                             ; 10006666
    LEA EDI,[ECX + -0x1]                ; 10006668
    JMP 0x100066b4                      ; 1000666b
        ;   XREF to: 100066b4 (UNCONDITIONAL_JUMP)  ; caseD_77
    MOV EDI,0x1                         ; 1000666d
        ;   Label: LAB_1000666d
    CALL crt_stdio.c_get_int_arg_FUN_100069f0 ; 10006672
        ;   XREF to: 100069f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_get_int_arg_FUN_100069f0(va_list * parg)
    MOV byte ptr [ESP + 0x5c],AL        ; 10006677
    ADD ESP,0x4                         ; 1000667b
    LEA EAX,[ESP + 0x58]                ; 1000667e
        ;   Label: LAB_1000667e
    MOV dword ptr [ESP + 0x18],EAX      ; 10006682
    JMP 0x100066b4                      ; 10006686
        ;   XREF to: 100066b4 (UNCONDITIONAL_JUMP)  ; caseD_77
    CMP dword ptr [ESP + 0x18],0x0      ; 10006688
        ;   Label: LAB_10006688
    JNZ 0x10006698                      ; 1000668d
        ;   XREF to: 10006698 (CONDITIONAL_JUMP)  ; LAB_10006698
    MOV EAX,[0x10016d40]                ; 1000668f | PTR_DAT_10016d40
    MOV dword ptr [ESP + 0x18],EAX      ; 10006694 | DAT_10012318
    MOV EDI,dword ptr [ESP + 0x18]      ; 10006698
        ;   Label: LAB_10006698
    MOV EAX,EBX                         ; 1000669c
    DEC EBX                             ; 1000669e
    TEST EAX,EAX                        ; 1000669f
    JZ 0x100066b0                       ; 100066a1
        ;   XREF to: 100066b0 (CONDITIONAL_JUMP)  ; LAB_100066b0
    CMP byte ptr [EDI],0x0              ; 100066a3 | DAT_10012318 | = "null)"
        ;   Label: LAB_100066a3
    JZ 0x100066b0                       ; 100066a6
        ;   XREF to: 100066b0 (CONDITIONAL_JUMP)  ; LAB_100066b0
    INC EDI                             ; 100066a8
    MOV EAX,EBX                         ; 100066a9
    DEC EBX                             ; 100066ab
    TEST EAX,EAX                        ; 100066ac
    JNZ 0x100066a3                      ; 100066ae
        ;   XREF to: 100066a3 (CONDITIONAL_JUMP)  ; LAB_100066a3
    SUB EDI,dword ptr [ESP + 0x18]      ; 100066b0
        ;   Label: LAB_100066b0
    CMP dword ptr [ESP + 0x48],0x0      ; 100066b4
        ;   Label: caseD_44
    JNZ 0x1000617f                      ; 100066b9
        ;   XREF to: 1000617f (CONDITIONAL_JUMP)  ; caseD_2f
    TEST ESI,0x40                       ; 100066bf
    JZ 0x100066fa                       ; 100066c5
        ;   XREF to: 100066fa (CONDITIONAL_JUMP)  ; LAB_100066fa
    TEST ESI,0x100                      ; 100066c7
    JZ 0x100066d6                       ; 100066cd
        ;   XREF to: 100066d6 (CONDITIONAL_JUMP)  ; LAB_100066d6
    MOV byte ptr [ESP + 0x12],0x2d      ; 100066cf
    JMP 0x100066f2                      ; 100066d4
        ;   XREF to: 100066f2 (UNCONDITIONAL_JUMP)  ; LAB_100066f2
    TEST ESI,0x1                        ; 100066d6
        ;   Label: LAB_100066d6
    JZ 0x100066e5                       ; 100066dc
        ;   XREF to: 100066e5 (CONDITIONAL_JUMP)  ; LAB_100066e5
    MOV byte ptr [ESP + 0x12],0x2b      ; 100066de
    JMP 0x100066f2                      ; 100066e3
        ;   XREF to: 100066f2 (UNCONDITIONAL_JUMP)  ; LAB_100066f2
    TEST ESI,0x2                        ; 100066e5
        ;   Label: LAB_100066e5
    JZ 0x100066fa                       ; 100066eb
        ;   XREF to: 100066fa (CONDITIONAL_JUMP)  ; LAB_100066fa
    MOV byte ptr [ESP + 0x12],0x20      ; 100066ed
    MOV dword ptr [ESP + 0x38],0x1      ; 100066f2
        ;   Label: LAB_100066f2
    MOV EAX,dword ptr [ESP + 0x34]      ; 100066fa
        ;   Label: LAB_100066fa
    SUB EAX,EDI                         ; 100066fe
    SUB EAX,dword ptr [ESP + 0x38]      ; 10006700
    TEST ESI,0xc                        ; 10006704
    MOV dword ptr [ESP + 0x20],EAX      ; 1000670a
    JNZ 0x1000672c                      ; 1000670e
        ;   XREF to: 1000672c (CONDITIONAL_JUMP)  ; LAB_1000672c
    LEA EAX,[ESP + 0x28]                ; 10006710
    MOV ECX,dword ptr [ESP + 0x25c]     ; 10006714
    MOV EDX,dword ptr [ESP + 0x20]      ; 1000671b
    PUSH EAX                            ; 1000671f
    PUSH ECX                            ; 10006720
    PUSH EDX                            ; 10006721
    PUSH 0x20                           ; 10006722
    CALL crt_stdio.c_write_multi_char_FUN_10006970 ; 10006724
        ;   XREF to: 10006970 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_multi_char_FUN_10006970(int ch, int count, FILE * file, int * pnumwritten)
    ADD ESP,0x10                        ; 10006729
    LEA EAX,[ESP + 0x28]                ; 1000672c
        ;   Label: LAB_1000672c
    MOV ECX,dword ptr [ESP + 0x25c]     ; 10006730
    MOV EDX,dword ptr [ESP + 0x38]      ; 10006737
    PUSH EAX                            ; 1000673b
    LEA EAX,[ESP + 0x16]                ; 1000673c
    PUSH ECX                            ; 10006740
    PUSH EDX                            ; 10006741
    PUSH EAX                            ; 10006742
    CALL crt_stdio.c_write_string_FUN_100069b0 ; 10006743
        ;   XREF to: 100069b0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_string_FUN_100069b0(char * str, int len, FILE * file, int * pnumwritten)
    ADD ESP,0x10                        ; 10006748
    TEST ESI,0x8                        ; 1000674b
    JZ 0x10006777                       ; 10006751
        ;   XREF to: 10006777 (CONDITIONAL_JUMP)  ; LAB_10006777
    TEST ESI,0x4                        ; 10006753
    JNZ 0x10006777                      ; 10006759
        ;   XREF to: 10006777 (CONDITIONAL_JUMP)  ; LAB_10006777
    LEA EAX,[ESP + 0x28]                ; 1000675b
    MOV ECX,dword ptr [ESP + 0x25c]     ; 1000675f
    MOV EDX,dword ptr [ESP + 0x20]      ; 10006766
    PUSH EAX                            ; 1000676a
    PUSH ECX                            ; 1000676b
    PUSH EDX                            ; 1000676c
    PUSH 0x30                           ; 1000676d
    CALL crt_stdio.c_write_multi_char_FUN_10006970 ; 1000676f
        ;   XREF to: 10006970 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_multi_char_FUN_10006970(int ch, int count, FILE * file, int * pnumwritten)
    ADD ESP,0x10                        ; 10006774
    CMP dword ptr [ESP + 0x3c],0x0      ; 10006777
        ;   Label: LAB_10006777
    JZ 0x100067c7                       ; 1000677c
        ;   XREF to: 100067c7 (CONDITIONAL_JUMP)  ; LAB_100067c7
    TEST EDI,EDI                        ; 1000677e
    JLE 0x100067c7                      ; 10006780
        ;   XREF to: 100067c7 (CONDITIONAL_JUMP)  ; LAB_100067c7
    MOV EBX,dword ptr [ESP + 0x18]      ; 10006782
    LEA EBP,[EDI + -0x1]                ; 10006786
    MOV EAX,EBX                         ; 10006789
        ;   Label: LAB_10006789
    LEA ECX,[ESP + 0x14]                ; 1000678b
    MOV AX,word ptr [EAX]               ; 1000678f
    ADD EBX,0x2                         ; 10006792
    PUSH EAX                            ; 10006795
    PUSH ECX                            ; 10006796
    CALL crt_locale.c__wctomb_FUN_100091e0 ; 10006797
        ;   XREF to: 100091e0 (UNCONDITIONAL_CALL)  ; int crt_locale.c__wctomb_FUN_100091e0(char * mb_ch, wchar_t w_ch)
    ADD ESP,0x8                         ; 1000679c
    TEST EAX,EAX                        ; 1000679f
    JLE 0x100067e2                      ; 100067a1
        ;   XREF to: 100067e2 (CONDITIONAL_JUMP)  ; LAB_100067e2
    LEA ECX,[ESP + 0x28]                ; 100067a3
    MOV EDX,dword ptr [ESP + 0x25c]     ; 100067a7
    PUSH ECX                            ; 100067ae
    PUSH EDX                            ; 100067af
    PUSH EAX                            ; 100067b0
    LEA EAX,[ESP + 0x20]                ; 100067b1
    PUSH EAX                            ; 100067b5
    CALL crt_stdio.c_write_string_FUN_100069b0 ; 100067b6
        ;   XREF to: 100069b0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_string_FUN_100069b0(char * str, int len, FILE * file, int * pnumwritten)
    ADD ESP,0x10                        ; 100067bb
    MOV ECX,EBP                         ; 100067be
    DEC EBP                             ; 100067c0
    TEST ECX,ECX                        ; 100067c1
    JNZ 0x10006789                      ; 100067c3
        ;   XREF to: 10006789 (CONDITIONAL_JUMP)  ; LAB_10006789
    JMP 0x100067e2                      ; 100067c5
        ;   XREF to: 100067e2 (UNCONDITIONAL_JUMP)  ; LAB_100067e2
    LEA EAX,[ESP + 0x28]                ; 100067c7
        ;   Label: LAB_100067c7
    MOV ECX,dword ptr [ESP + 0x25c]     ; 100067cb
    MOV EDX,dword ptr [ESP + 0x18]      ; 100067d2
    PUSH EAX                            ; 100067d6
    PUSH ECX                            ; 100067d7
    PUSH EDI                            ; 100067d8
    PUSH EDX                            ; 100067d9
    CALL crt_stdio.c_write_string_FUN_100069b0 ; 100067da
        ;   XREF to: 100069b0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_string_FUN_100069b0(char * str, int len, FILE * file, int * pnumwritten)
    ADD ESP,0x10                        ; 100067df
    TEST ESI,0x4                        ; 100067e2
        ;   Label: LAB_100067e2
    JZ 0x1000617f                       ; 100067e8
        ;   XREF to: 1000617f (CONDITIONAL_JUMP)  ; caseD_2f
    LEA EAX,[ESP + 0x28]                ; 100067ee
    MOV ECX,dword ptr [ESP + 0x25c]     ; 100067f2
    MOV EDX,dword ptr [ESP + 0x20]      ; 100067f9
    PUSH EAX                            ; 100067fd
    PUSH ECX                            ; 100067fe
    PUSH EDX                            ; 100067ff
    PUSH 0x20                           ; 10006800
    CALL crt_stdio.c_write_multi_char_FUN_10006970 ; 10006802
        ;   XREF to: 10006970 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_write_multi_char_FUN_10006970(int ch, int count, FILE * file, int * pnumwritten)
    ADD ESP,0x10                        ; 10006807
    JMP 0x1000617f                      ; 1000680a
        ;   XREF to: 1000617f (UNCONDITIONAL_JUMP)  ; caseD_2f

