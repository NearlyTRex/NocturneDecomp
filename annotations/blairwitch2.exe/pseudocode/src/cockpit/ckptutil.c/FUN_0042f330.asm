; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * cockpit_ckptutil_c_FUN_0042f330(char *param_1,void *param_2,uint param_3,uint param_4,int param_5,void *param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_ckptutil.c_applyActPalette_FUN_0042c670
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_unknown.c_FUN_005b7790
;   crt_unknown.c_FUN_005b8580
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f330
        ;   Label: cockpit_ckptutil.c_FUN_0042f330
    PUSH ESI                            ; 0042f331
    PUSH EDI                            ; 0042f332
    PUSH EBP                            ; 0042f333
    SUB ESP,0x5c                        ; 0042f334
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0042f337
    MOV EAX,dword ptr [ESP + 0x78]      ; 0042f33b
    IMUL EAX,EBP                        ; 0042f33f
    MOV EDX,dword ptr [ESP + 0x74]      ; 0042f342
    MOV dword ptr [ESP + 0x50],EAX      ; 0042f346
    TEST EDX,EDX                        ; 0042f34a
    JZ 0x0042f431                       ; 0042f34c
        ;   XREF to: 0042f431 (CONDITIONAL_JUMP)  ; LAB_0042f431
    PUSH 0x5cd751                       ; 0042f352
        ;   Label: LAB_0042f352
    MOV EDX,dword ptr [ESP + 0x74]      ; 0042f357
    PUSH EDX                            ; 0042f35b
    PUSH 0x5cd754                       ; 0042f35c
    CALL engine_dosio.cpp_FUN_00460c70  ; 0042f361
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0042f366
    MOV EDI,EAX                         ; 0042f369
    TEST EAX,EAX                        ; 0042f36b
    JZ 0x0042f487                       ; 0042f36d
        ;   XREF to: 0042f487 (CONDITIONAL_JUMP)  ; LAB_0042f487
    XOR EAX,EAX                         ; 0042f373
        ;   Label: LAB_0042f373
    MOV dword ptr [ESP + 0x54],EAX      ; 0042f375
    TEST EBP,EBP                        ; 0042f379
    JBE 0x0042f40e                      ; 0042f37b
        ;   XREF to: 0042f40e (CONDITIONAL_JUMP)  ; LAB_0042f40e
    MOV EDX,dword ptr [ESP + 0x54]      ; 0042f381
        ;   Label: LAB_0042f381
    MOV EAX,EBP                         ; 0042f385
    MOV ESI,dword ptr [ESP + 0x74]      ; 0042f387
    SUB EAX,EDX                         ; 0042f38b
    MOV ECX,dword ptr [ESP + 0x78]      ; 0042f38d
    DEC EAX                             ; 0042f391
    XOR EBX,EBX                         ; 0042f392
    ADD ESI,EAX                         ; 0042f394
    TEST ECX,ECX                        ; 0042f396
    JBE 0x0042f3fd                      ; 0042f398
        ;   XREF to: 0042f3fd (CONDITIONAL_JUMP)  ; LAB_0042f3fd
    PUSH EDI                            ; 0042f39a
        ;   Label: LAB_0042f39a
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0042f39b
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0042f3a0
    MOV dword ptr [ESP + 0x58],EAX      ; 0042f3a3
    CMP EAX,-0x1                        ; 0042f3a7
    JNZ 0x0042f3ec                      ; 0042f3aa
        ;   XREF to: 0042f3ec (CONDITIONAL_JUMP)  ; LAB_0042f3ec
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042f3ac
    PUSH EDX                            ; 0042f3b0
    PUSH 0x5cd78f                       ; 0042f3b1
    LEA EAX,[ESP + 0x8]                 ; 0042f3b6
    PUSH EAX                            ; 0042f3ba
    CALL crt_unknown.c_FUN_005b7790     ; 0042f3bb
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0042f3c0
    PUSH EDI                            ; 0042f3c3
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0042f3c4
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    MOV EAX,0x7fb                       ; 0042f3c9
    ADD ESP,0x4                         ; 0042f3ce
    MOV [0x01d046a4],EAX                ; 0042f3d1 | DAT_01d046a4
    MOV EAX,ESP                         ; 0042f3d6
    MOV ECX,0x5cd7b0                    ; 0042f3d8
    PUSH EAX                            ; 0042f3dd
    MOV dword ptr [0x01d046a0],ECX      ; 0042f3de | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 0042f3e4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042f3e9
    MOV AL,byte ptr [ESP + 0x58]        ; 0042f3ec
        ;   Label: LAB_0042f3ec
    INC EBX                             ; 0042f3f0
    MOV byte ptr [ESI],AL               ; 0042f3f1
    MOV EAX,dword ptr [ESP + 0x78]      ; 0042f3f3
    ADD ESI,EBP                         ; 0042f3f7
    CMP EBX,EAX                         ; 0042f3f9
    JC 0x0042f39a                       ; 0042f3fb
        ;   XREF to: 0042f39a (CONDITIONAL_JUMP)  ; LAB_0042f39a
    MOV EDX,dword ptr [ESP + 0x54]      ; 0042f3fd
        ;   Label: LAB_0042f3fd
    INC EDX                             ; 0042f401
    MOV dword ptr [ESP + 0x54],EDX      ; 0042f402
    CMP EBP,EDX                         ; 0042f406
    JA 0x0042f381                       ; 0042f408
        ;   XREF to: 0042f381 (CONDITIONAL_JUMP)  ; LAB_0042f381
    PUSH EDI                            ; 0042f40e
        ;   Label: LAB_0042f40e
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0042f40f
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0042f414
    CMP dword ptr [ESP + 0x80],0x0      ; 0042f417
    JNZ 0x0042f4c4                      ; 0042f41f
        ;   XREF to: 0042f4c4 (CONDITIONAL_JUMP)  ; LAB_0042f4c4
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042f425
    ADD ESP,0x5c                        ; 0042f429
    POP EBP                             ; 0042f42c
    POP EDI                             ; 0042f42d
    POP ESI                             ; 0042f42e
    POP EBX                             ; 0042f42f
    RET                                 ; 0042f430
    PUSH EAX                            ; 0042f431
        ;   Label: LAB_0042f431
    CALL crt_unknown.c_FUN_005b8580     ; 0042f432
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 0042f437
    MOV dword ptr [ESP + 0x74],EAX      ; 0042f43a
    TEST EAX,EAX                        ; 0042f43e
    JNZ 0x0042f352                      ; 0042f440
        ;   XREF to: 0042f352 (CONDITIONAL_JUMP)  ; LAB_0042f352
    MOV EBX,dword ptr [ESP + 0x70]      ; 0042f446
    PUSH EBX                            ; 0042f44a
    MOV ESI,dword ptr [ESP + 0x54]      ; 0042f44b
    PUSH ESI                            ; 0042f44f
    PUSH 0x5cd701                       ; 0042f450
    LEA EAX,[ESP + 0xc]                 ; 0042f455
    PUSH EAX                            ; 0042f459
    CALL crt_unknown.c_FUN_005b7790     ; 0042f45a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    MOV EAX,0x7e5                       ; 0042f45f
    ADD ESP,0x10                        ; 0042f464
    MOV [0x01d046a4],EAX                ; 0042f467 | DAT_01d046a4
    MOV EAX,ESP                         ; 0042f46c
    MOV EDI,0x5cd73b                    ; 0042f46e
    PUSH EAX                            ; 0042f473
    MOV dword ptr [0x01d046a0],EDI      ; 0042f474 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 0042f47a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042f47f
    JMP 0x0042f352                      ; 0042f482
        ;   XREF to: 0042f352 (UNCONDITIONAL_JUMP)  ; LAB_0042f352
    MOV ECX,dword ptr [ESP + 0x70]      ; 0042f487
        ;   Label: LAB_0042f487
    PUSH ECX                            ; 0042f48b
    PUSH 0x5cd758                       ; 0042f48c
    LEA EAX,[ESP + 0x8]                 ; 0042f491
    PUSH EAX                            ; 0042f495
    MOV EBX,0x5cd779                    ; 0042f496
    CALL crt_unknown.c_FUN_005b7790     ; 0042f49b
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 0042f4a0
    MOV EAX,ESP                         ; 0042f4a3
    MOV ESI,0x7ee                       ; 0042f4a5
    PUSH EAX                            ; 0042f4aa
    MOV dword ptr [0x01d046a0],EBX      ; 0042f4ab | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0042f4b1 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0042f4b7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0042f4bc
    JMP 0x0042f373                      ; 0042f4bf
        ;   XREF to: 0042f373 (UNCONDITIONAL_JUMP)  ; LAB_0042f373
    MOV ESI,dword ptr [ESP + 0x84]      ; 0042f4c4
        ;   Label: LAB_0042f4c4
    PUSH ESI                            ; 0042f4cb
    MOV EDI,dword ptr [ESP + 0x54]      ; 0042f4cc
    PUSH EDI                            ; 0042f4d0
    MOV EBP,dword ptr [ESP + 0x7c]      ; 0042f4d1
    PUSH EBP                            ; 0042f4d5
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0042f4d6
    PUSH EAX                            ; 0042f4da
    CALL cockpit_ckptutil.c_applyActPalette_FUN_0042c670 ; 0042f4db
        ;   XREF to: 0042c670 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_applyActPalette_FUN_0042c670(char * filename, void * bitmap_buffer, int bitmap_size, int palette_index)
    ADD ESP,0x10                        ; 0042f4e0
    MOV EAX,dword ptr [ESP + 0x74]      ; 0042f4e3
    ADD ESP,0x5c                        ; 0042f4e7
    POP EBP                             ; 0042f4ea
    POP EDI                             ; 0042f4eb
    POP ESI                             ; 0042f4ec
    POP EBX                             ; 0042f4ed
    RET                                 ; 0042f4ee

