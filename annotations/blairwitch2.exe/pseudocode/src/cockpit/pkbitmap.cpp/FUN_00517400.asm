; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * cockpit_pkbitmap_cpp_FUN_00517400(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517400
        ;   Label: cockpit_pkbitmap.cpp_FUN_00517400
    PUSH ESI                            ; 00517401
    PUSH EDI                            ; 00517402
    PUSH EBP                            ; 00517403
    SUB ESP,0x168                       ; 00517404
    MOV EDI,dword ptr [ESP + 0x17c]     ; 0051740a
    MOV EBP,dword ptr [ESP + 0x190]     ; 00517411
    PUSH 0x5e1e7e                       ; 00517418
    MOV EDX,dword ptr [ESP + 0x184]     ; 0051741d
    PUSH EDX                            ; 00517424
    PUSH 0x5e1e81                       ; 00517425
    CALL engine_dosio.cpp_FUN_00460c70  ; 0051742a
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0051742f
    MOV EBX,EAX                         ; 00517432
    TEST EAX,EAX                        ; 00517434
    JZ 0x005174ac                       ; 00517436
        ;   XREF to: 005174ac (CONDITIONAL_JUMP)  ; LAB_005174ac
    PUSH EBP                            ; 0051743c
        ;   Label: LAB_0051743c
    MOV EDX,dword ptr [ESP + 0x190]     ; 0051743d
    PUSH EDX                            ; 00517444
    MOV ECX,dword ptr [ESP + 0x190]     ; 00517445
    PUSH ECX                            ; 0051744c
    PUSH EBX                            ; 0051744d
    PUSH EDI                            ; 0051744e
    CALL cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280 ; 0051744f
        ;   XREF to: 00517280 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280()
    ADD ESP,0x14                        ; 00517454
    PUSH EBX                            ; 00517457
    MOV ESI,EAX                         ; 00517458
    MOV dword ptr [ESP + 0x168],EAX     ; 0051745a
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00517461
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00517466
    MOV EAX,dword ptr [EDI]             ; 00517469
    XOR EBX,EBX                         ; 0051746b
    TEST EAX,EAX                        ; 0051746d
    JLE 0x00517490                      ; 0051746f
        ;   XREF to: 00517490 (CONDITIONAL_JUMP)  ; LAB_00517490
    MOV EDX,dword ptr [ESP + 0x180]     ; 00517471
        ;   Label: LAB_00517471
    PUSH EDX                            ; 00517478
    PUSH ESI                            ; 00517479
    INC EBX                             ; 0051747a
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270 ; 0051747b
        ;   XREF to: 00516270 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_00516270(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00517480
    MOV ECX,dword ptr [EDI]             ; 00517483
    ADD ESI,0x24                        ; 00517485
    CMP EBX,ECX                         ; 00517488
    JL 0x00517471                       ; 0051748a
        ;   XREF to: 00517471 (CONDITIONAL_JUMP)  ; LAB_00517471
    LEA EAX,[EAX]                       ; 0051748c
    CMP dword ptr [ESP + 0x184],0x0     ; 00517490
        ;   Label: LAB_00517490
    JNZ 0x005174f3                      ; 00517498
        ;   XREF to: 005174f3 (CONDITIONAL_JUMP)  ; LAB_005174f3
    MOV EAX,dword ptr [ESP + 0x164]     ; 0051749a
        ;   Label: LAB_0051749a
    ADD ESP,0x168                       ; 005174a1
    POP EBP                             ; 005174a7
    POP EDI                             ; 005174a8
    POP ESI                             ; 005174a9
    POP EBX                             ; 005174aa
    RET                                 ; 005174ab
    MOV ECX,dword ptr [ESP + 0x180]     ; 005174ac
        ;   Label: LAB_005174ac
    PUSH ECX                            ; 005174b3
    PUSH 0x5e1e85                       ; 005174b4
    LEA EAX,[ESP + 0x108]               ; 005174b9
    PUSH EAX                            ; 005174c0
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 005174c1
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV EAX,0x5b4                       ; 005174c6
    ADD ESP,0xc                         ; 005174cb
    MOV [0x01d046a4],EAX                ; 005174ce | DAT_01d046a4
    LEA EAX,[ESP + 0x100]               ; 005174d3
    MOV ESI,0x5e1ea0                    ; 005174da
    PUSH EAX                            ; 005174df
    MOV dword ptr [0x01d046a0],ESI      ; 005174e0 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 005174e6
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005174eb
    JMP 0x0051743c                      ; 005174ee
        ;   XREF to: 0051743c (UNCONDITIONAL_JUMP)  ; LAB_0051743c
    MOV EAX,ESP                         ; 005174f3
        ;   Label: LAB_005174f3
    PUSH EAX                            ; 005174f5
    MOV ESI,dword ptr [ESP + 0x184]     ; 005174f6
    PUSH ESI                            ; 005174fd
    XOR EBX,EBX                         ; 005174fe
    CALL cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0 ; 00517500
        ;   XREF to: 0042c6f0 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_loadACTToIndexedPalette_FUN_0042c6f0(char * filename, uchar * output_palette)
    MOV EAX,dword ptr [EDI]             ; 00517505
    ADD ESP,0x8                         ; 00517507
    TEST EAX,EAX                        ; 0051750a
    JLE 0x0051749a                      ; 0051750c
        ;   XREF to: 0051749a (CONDITIONAL_JUMP)  ; LAB_0051749a
    MOV ESI,dword ptr [ESP + 0x164]     ; 0051750e
    TEST EBP,EBP                        ; 00517515
        ;   Label: LAB_00517515
    JL 0x0051752d                       ; 00517517
        ;   XREF to: 0051752d (CONDITIONAL_JUMP)  ; LAB_0051752d
    CMP EBX,EBP                         ; 00517519
    JZ 0x0051752d                       ; 0051751b
        ;   XREF to: 0051752d (CONDITIONAL_JUMP)  ; LAB_0051752d
    INC EBX                             ; 0051751d
    MOV EDX,dword ptr [EDI]             ; 0051751e
    ADD ESI,0x24                        ; 00517520
    CMP EBX,EDX                         ; 00517523
    JGE 0x0051749a                      ; 00517525
        ;   XREF to: 0051749a (CONDITIONAL_JUMP)  ; LAB_0051749a
    JMP 0x00517515                      ; 0051752b
        ;   XREF to: 00517515 (UNCONDITIONAL_JUMP)  ; LAB_00517515
    MOV EAX,ESP                         ; 0051752d
        ;   Label: LAB_0051752d
    PUSH EAX                            ; 0051752f
    PUSH ESI                            ; 00517530
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00 ; 00517531
        ;   XREF to: 00516d00 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00(CPackedBitmap * this_ptr, uchar * palette_buffer)
    ADD ESP,0x8                         ; 00517536
    INC EBX                             ; 00517539
    MOV EDX,dword ptr [EDI]             ; 0051753a
    ADD ESI,0x24                        ; 0051753c
    CMP EBX,EDX                         ; 0051753f
    JGE 0x0051749a                      ; 00517541
        ;   XREF to: 0051749a (CONDITIONAL_JUMP)  ; LAB_0051749a
    JMP 0x00517515                      ; 00517547
        ;   XREF to: 00517515 (UNCONDITIONAL_JUMP)  ; LAB_00517515

