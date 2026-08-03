; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_FUN_00431260(void *bitmap_buffer,char *filename,SScanlineSpans *span_output,int width,int height,int transparent_color_index)
;
; Parameters:
; void *           Stack[0x4]:4   bitmap_buffer
; char *           Stack[0x8]:4   filename
; SScanlineSpans * Stack[0xc]:4   span_output
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; int              Stack[0x18]:4   transparent_color_index
; Local Variables:
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_ckptutil.c_FUN_0042d180 at 0042d1d2
;
; Referenced Globals:
;   TerminatedCString s_Invalid_transparent_colo_0057abc6
;   TerminatedCString s_cockpit_ckptutil_c_0057abea
;   TerminatedCString s_Too_many_spans_bitmap_s_0057ac00
;   TerminatedCString s_cockpit_ckptutil_c_0057ac31
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431260
        ;   Label: cockpit_ckptutil.c_FUN_00431260
    PUSH ESI                            ; 00431261
    PUSH EDI                            ; 00431262
    PUSH EBP                            ; 00431263
    SUB ESP,0x120                       ; 00431264
    MOV EDX,dword ptr [ESP + 0x148]     ; 0043126a
    CMP EDX,0xff                        ; 00431271
    JA 0x00431459                       ; 00431277
        ;   XREF to: 00431459 (CONDITIONAL_JUMP)  ; LAB_00431459
    XOR EDI,EDI                         ; 0043127d
        ;   Label: LAB_0043127d
    MOV EBP,dword ptr [ESP + 0x144]     ; 0043127f
    MOV dword ptr [ESP + 0x110],EDI     ; 00431286
    TEST EBP,EBP                        ; 0043128d
    JLE 0x0043144e                      ; 0043128f
        ;   XREF to: 0043144e (CONDITIONAL_JUMP)  ; LAB_0043144e
    MOV EAX,dword ptr [ESP + 0x140]     ; 00431295
    DEC EAX                             ; 0043129c
    MOV dword ptr [ESP + 0x100],EAX     ; 0043129d
    MOV EAX,dword ptr [ESP + 0x140]     ; 004312a4
    MOV dword ptr [ESP + 0x104],EAX     ; 004312ab
    IMUL EAX,EDI                        ; 004312b2
    MOV EDX,dword ptr [ESP + 0x134]     ; 004312b5
    ADD EAX,EDX                         ; 004312bc
    MOV dword ptr [ESP + 0x10c],EAX     ; 004312be
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004312c5
    MOV dword ptr [ESP + 0x108],EDI     ; 004312cc
    MOV dword ptr [ESP + 0x114],EAX     ; 004312d3
    MOV ESI,dword ptr [ESP + 0x140]     ; 004312da
        ;   Label: LAB_004312da
    XOR EBX,EBX                         ; 004312e1
    XOR EAX,EAX                         ; 004312e3
    MOV dword ptr [ESP + 0x11c],EBX     ; 004312e5
    TEST ESI,ESI                        ; 004312ec
    JLE 0x0043135b                      ; 004312ee
        ;   XREF to: 0043135b (CONDITIONAL_JUMP)  ; LAB_0043135b
    MOV EDX,dword ptr [ESP + 0x108]     ; 004312f0
    MOV ESI,0xffffffff                  ; 004312f7
    XOR EDI,EDI                         ; 004312fc
    MOV dword ptr [ESP + 0x118],EDX     ; 004312fe
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00431305
    MOV ECX,dword ptr [ESP + 0x13c]     ; 0043130c
        ;   Label: LAB_0043130c
    ADD ECX,dword ptr [ESP + 0x118]     ; 00431313
    ADD ECX,EDI                         ; 0043131a
    TEST EBX,EBX                        ; 0043131c
    JZ 0x00431492                       ; 0043131e
        ;   XREF to: 00431492 (CONDITIONAL_JUMP)  ; LAB_00431492
    MOVZX EBP,byte ptr [EDX]            ; 00431324
    CMP EBP,dword ptr [ESP + 0x148]     ; 00431327
    JNZ 0x0043134d                      ; 0043132e
        ;   XREF to: 0043134d (CONDITIONAL_JUMP)  ; LAB_0043134d
    MOV EBP,ESI                         ; 00431330
    SUB EBP,dword ptr [ECX + 0x4]       ; 00431332
    INC EBP                             ; 00431335
    MOV dword ptr [ECX + 0x44],EBP      ; 00431336
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00431339
    ADD EDI,0x4                         ; 00431340
    INC ECX                             ; 00431343
    XOR EBX,EBX                         ; 00431344
    MOV dword ptr [ESP + 0x11c],ECX     ; 00431346
    MOV EBP,dword ptr [ESP + 0x140]     ; 0043134d
        ;   Label: LAB_0043134d
    INC EDX                             ; 00431354
    INC EAX                             ; 00431355
    INC ESI                             ; 00431356
    CMP EAX,EBP                         ; 00431357
    JL 0x0043130c                       ; 00431359
        ;   XREF to: 0043130c (CONDITIONAL_JUMP)  ; LAB_0043130c
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0043135b
        ;   Label: LAB_0043135b
    CMP EAX,0x10                        ; 00431362
    JL 0x004313ab                       ; 00431365
        ;   XREF to: 004313ab (CONDITIONAL_JUMP)  ; LAB_004313ab
    MOV EDX,dword ptr [ESP + 0x110]     ; 00431367
    PUSH EDX                            ; 0043136e
    PUSH EAX                            ; 0043136f
    MOV ESI,dword ptr [ESP + 0x140]     ; 00431370
    PUSH ESI                            ; 00431377
    PUSH 0x57ac00                       ; 00431378 | = "Too many spans: bitmap %s, spans %d, ..."
    LEA EAX,[ESP + 0x10]                ; 0043137d
    PUSH EAX                            ; 00431381
    MOV EDI,0x57ac31                    ; 00431382 | = "..\\cockpit\\ckptutil.c"
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00431387
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x14                        ; 0043138c
    MOV EAX,ESP                         ; 0043138f
    MOV EBP,0x96a                       ; 00431391
    PUSH EAX                            ; 00431396
    MOV dword ptr [0x01cc4800],EDI      ; 00431397 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0043139d | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004313a3
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004313a8
    CMP EBX,0x1                         ; 004313ab
        ;   Label: LAB_004313ab
    JNZ 0x004313e1                      ; 004313ae
        ;   XREF to: 004313e1 (CONDITIONAL_JUMP)  ; LAB_004313e1
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004313b0
    MOV EDX,dword ptr [ESP + 0x114]     ; 004313b7
    SHL EAX,0x2                         ; 004313be
    ADD EAX,EDX                         ; 004313c1
    MOV EDX,dword ptr [ESP + 0x100]     ; 004313c3
    SUB EDX,dword ptr [EAX + 0x4]       ; 004313ca
    ADD EDX,EBX                         ; 004313cd
    MOV EBX,dword ptr [ESP + 0x11c]     ; 004313cf
    INC EBX                             ; 004313d6
    MOV dword ptr [EAX + 0x44],EDX      ; 004313d7
    MOV dword ptr [ESP + 0x11c],EBX     ; 004313da
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004313e1
        ;   Label: LAB_004313e1
    MOV EDX,dword ptr [ESP + 0x114]     ; 004313e8
    MOV ECX,dword ptr [ESP + 0x114]     ; 004313ef
    MOV EBX,dword ptr [ESP + 0x108]     ; 004313f6
    MOV ESI,dword ptr [ESP + 0x110]     ; 004313fd
    MOV EDI,dword ptr [ESP + 0x144]     ; 00431404
    ADD ECX,0x84                        ; 0043140b
    ADD EBX,0x84                        ; 00431411
    INC ESI                             ; 00431417
    MOV dword ptr [EDX],EAX             ; 00431418
    MOV EAX,dword ptr [ESP + 0x104]     ; 0043141a
    MOV EDX,dword ptr [ESP + 0x10c]     ; 00431421
    MOV dword ptr [ESP + 0x114],ECX     ; 00431428
    MOV dword ptr [ESP + 0x108],EBX     ; 0043142f
    ADD EDX,EAX                         ; 00431436
    MOV dword ptr [ESP + 0x110],ESI     ; 00431438
    MOV dword ptr [ESP + 0x10c],EDX     ; 0043143f
    CMP ESI,EDI                         ; 00431446
    JL 0x004312da                       ; 00431448
        ;   XREF to: 004312da (CONDITIONAL_JUMP)  ; LAB_004312da
    ADD ESP,0x120                       ; 0043144e
        ;   Label: LAB_0043144e
    POP EBP                             ; 00431454
    POP EDI                             ; 00431455
    POP ESI                             ; 00431456
    POP EBX                             ; 00431457
    RET                                 ; 00431458
    PUSH EDX                            ; 00431459
        ;   Label: LAB_00431459
    PUSH 0x57abc6                       ; 0043145a | = "Invalid transparent color index: %d"
    LEA EAX,[ESP + 0x8]                 ; 0043145f
    PUSH EAX                            ; 00431463
    MOV EBX,0x57abea                    ; 00431464 | = "..\\cockpit\\ckptutil.c"
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00431469
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043146e
    MOV EAX,ESP                         ; 00431471
    MOV ESI,0x93a                       ; 00431473
    PUSH EAX                            ; 00431478
    MOV dword ptr [0x01cc4800],EBX      ; 00431479 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0043147f | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00431485
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0043148a
    JMP 0x0043127d                      ; 0043148d
        ;   XREF to: 0043127d (UNCONDITIONAL_JUMP)  ; LAB_0043127d
    MOVZX EBP,byte ptr [EDX]            ; 00431492
        ;   Label: LAB_00431492
    CMP EBP,dword ptr [ESP + 0x148]     ; 00431495
    JZ 0x0043134d                       ; 0043149c
        ;   XREF to: 0043134d (CONDITIONAL_JUMP)  ; LAB_0043134d
    MOV EBX,0x1                         ; 004314a2
    MOV dword ptr [ECX + 0x4],EAX       ; 004314a7
    JMP 0x0043134d                      ; 004314aa
        ;   XREF to: 0043134d (UNCONDITIONAL_JUMP)  ; LAB_0043134d

