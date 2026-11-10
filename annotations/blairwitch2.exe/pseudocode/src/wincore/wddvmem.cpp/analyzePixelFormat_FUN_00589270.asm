; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_analyzePixelFormat_FUN_00589270(void)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
;
; XREF[1]:
;   wincore_wddvmem.cpp_setupColorPalette_FUN_00589430 at 0058954f
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005ee32d
;   TerminatedCString s_setColorTable16_Unable_t_005ee344
;   TerminatedCString s_wincore_wddvmem_cpp_005ee372
;   TerminatedCString s_setColorTable16_Unable_t_005ee389
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35818
;   undefined4 DAT_01c3581c
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c35824
;   undefined4 DAT_01c35828
;   undefined4 DAT_01c3582c
;   undefined4 DAT_01c35830
;   undefined4 DAT_01c35834
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   ... and 1 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589270
        ;   Label: wincore_wddvmem.cpp_analyzePixelFormat_FUN_00589270
    SUB ESP,0x6c                        ; 00589271
    PUSH 0x6c                           ; 00589274
    PUSH 0x0                            ; 00589276
    LEA EAX,[ESP + 0x8]                 ; 00589278
    PUSH EAX                            ; 0058927c
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0058927d
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00589282
    PUSH 0x0                            ; 00589285
    PUSH 0x1                            ; 00589287
    LEA ECX,[ESP + 0x8]                 ; 00589289
    MOV EDX,0x6c                        ; 0058928d
    PUSH ECX                            ; 00589292
    MOV EAX,[0x02661ae8]                ; 00589293 | DAT_02661ae8
    MOV dword ptr [ESP + 0xc],EDX       ; 00589298
    PUSH 0x0                            ; 0058929c
    MOV EDX,dword ptr [EAX]             ; 0058929e
    PUSH EAX                            ; 005892a0
    CALL dword ptr [EDX + 0x64]         ; 005892a1
    TEST EAX,EAX                        ; 005892a4
    JNZ 0x00589330                      ; 005892a6
        ;   XREF to: 00589330 (CONDITIONAL_JUMP)  ; LAB_00589330
    PUSH 0x0                            ; 005892ac
        ;   Label: LAB_005892ac
    MOV EAX,[0x02661ae8]                ; 005892ae | DAT_02661ae8
    PUSH EAX                            ; 005892b3
    MOV ECX,dword ptr [EAX]             ; 005892b4
    CALL dword ptr [ECX + 0x80]         ; 005892b6
    TEST EAX,EAX                        ; 005892bc
    JZ 0x005892e7                       ; 005892be
        ;   XREF to: 005892e7 (CONDITIONAL_JUMP)  ; LAB_005892e7
    PUSH EDI                            ; 005892c0
    PUSH ESI                            ; 005892c1
    MOV ESI,0x5ee372                    ; 005892c2 | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x296                       ; 005892c7
    PUSH 0x5ee389                       ; 005892cc | = "setColorTable16 - Unable to unlock ba..."
    MOV dword ptr [0x01d046a0],ESI      ; 005892d1 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005892d7 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005892dd
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005892e2
    POP ESI                             ; 005892e5
    POP EDI                             ; 005892e6
    MOV EAX,dword ptr [ESP + 0x58]      ; 005892e7
        ;   Label: LAB_005892e7
    MOV DL,byte ptr [ESP + 0x58]        ; 005892eb
    XOR ECX,ECX                         ; 005892ef
    TEST DL,0x1                         ; 005892f1
    JNZ 0x00589300                      ; 005892f4
        ;   XREF to: 00589300 (CONDITIONAL_JUMP)  ; LAB_00589300
    SHR EAX,0x1                         ; 005892f6
        ;   Label: LAB_005892f6
    INC ECX                             ; 005892f8
    TEST AL,0x1                         ; 005892f9
    JZ 0x005892f6                       ; 005892fb
        ;   XREF to: 005892f6 (CONDITIONAL_JUMP)  ; LAB_005892f6
    LEA EAX,[EAX]                       ; 005892fd
    MOV EAX,dword ptr [ESP + 0x58]      ; 00589300
        ;   Label: LAB_00589300
    MOV dword ptr [0x01c35814],ECX      ; 00589304 | DAT_01c35814
    SHR EAX,CL                          ; 0058930a
    XOR EDX,EDX                         ; 0058930c
    MOV ECX,EAX                         ; 0058930e
    MOV EAX,0xff                        ; 00589310
    DIV ECX                             ; 00589315
    MOV [0x01c35818],EAX                ; 00589317 | DAT_01c35818
    XOR ECX,ECX                         ; 0058931c
    TEST EAX,EAX                        ; 0058931e
    JZ 0x00589358                       ; 00589320
        ;   XREF to: 00589358 (CONDITIONAL_JUMP)  ; LAB_00589358
    CMP EAX,0x1                         ; 00589322
        ;   Label: LAB_00589322
    JBE 0x005893ac                      ; 00589325
        ;   XREF to: 005893ac (CONDITIONAL_JUMP)  ; LAB_005893ac
    INC ECX                             ; 0058932b
    SHR EAX,0x1                         ; 0058932c
    JMP 0x00589322                      ; 0058932e
        ;   XREF to: 00589322 (UNCONDITIONAL_JUMP)  ; LAB_00589322
    MOV ECX,0x5ee32d                    ; 00589330 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_00589330
    MOV EBX,0x294                       ; 00589335
    PUSH 0x5ee344                       ; 0058933a | = "setColorTable16 - Unable to lock back..."
    MOV dword ptr [0x01d046a0],ECX      ; 0058933f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00589345 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0058934b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00589350
    JMP 0x005892ac                      ; 00589353
        ;   XREF to: 005892ac (UNCONDITIONAL_JUMP)  ; LAB_005892ac
    MOV EAX,0x20                        ; 00589358
        ;   Label: LAB_00589358
    MOV DH,byte ptr [ESP + 0x5c]        ; 0058935d
        ;   Label: LAB_0058935d
    MOV [0x01c3581c],EAX                ; 00589361 | DAT_01c3581c
    XOR ECX,ECX                         ; 00589366
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00589368
    TEST DH,0x1                         ; 0058936c
    JNZ 0x00589380                      ; 0058936f
        ;   XREF to: 00589380 (CONDITIONAL_JUMP)  ; LAB_00589380
    SHR EAX,0x1                         ; 00589371
        ;   Label: LAB_00589371
    INC ECX                             ; 00589373
    TEST AL,0x1                         ; 00589374
    JZ 0x00589371                       ; 00589376
        ;   XREF to: 00589371 (CONDITIONAL_JUMP)  ; LAB_00589371
    LEA EAX,[EAX]                       ; 00589378
    MOV EDX,EDX                         ; 0058937e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00589380
        ;   Label: LAB_00589380
    MOV dword ptr [0x01c35820],ECX      ; 00589384 | DAT_01c35820
    SHR EAX,CL                          ; 0058938a
    XOR EDX,EDX                         ; 0058938c
    MOV ECX,EAX                         ; 0058938e
    MOV EAX,0xff                        ; 00589390
    DIV ECX                             ; 00589395
    MOV [0x01c35824],EAX                ; 00589397 | DAT_01c35824
    XOR ECX,ECX                         ; 0058939c
    TEST EAX,EAX                        ; 0058939e
    JZ 0x005893b0                       ; 005893a0
        ;   XREF to: 005893b0 (CONDITIONAL_JUMP)  ; LAB_005893b0
    CMP EAX,0x1                         ; 005893a2
        ;   Label: LAB_005893a2
    JBE 0x005893fc                      ; 005893a5
        ;   XREF to: 005893fc (CONDITIONAL_JUMP)  ; LAB_005893fc
    INC ECX                             ; 005893a7
    SHR EAX,0x1                         ; 005893a8
    JMP 0x005893a2                      ; 005893aa
        ;   XREF to: 005893a2 (UNCONDITIONAL_JUMP)  ; LAB_005893a2
    MOV EAX,ECX                         ; 005893ac
        ;   Label: LAB_005893ac
    JMP 0x0058935d                      ; 005893ae
        ;   XREF to: 0058935d (UNCONDITIONAL_JUMP)  ; LAB_0058935d
    MOV EAX,0x20                        ; 005893b0
        ;   Label: LAB_005893b0
    MOV BL,byte ptr [ESP + 0x60]        ; 005893b5
        ;   Label: LAB_005893b5
    MOV [0x01c35828],EAX                ; 005893b9 | DAT_01c35828
    XOR ECX,ECX                         ; 005893be
    MOV EAX,dword ptr [ESP + 0x60]      ; 005893c0
    TEST BL,0x1                         ; 005893c4
    JNZ 0x005893d0                      ; 005893c7
        ;   XREF to: 005893d0 (CONDITIONAL_JUMP)  ; LAB_005893d0
    SHR EAX,0x1                         ; 005893c9
        ;   Label: LAB_005893c9
    INC ECX                             ; 005893cb
    TEST AL,0x1                         ; 005893cc
    JZ 0x005893c9                       ; 005893ce
        ;   XREF to: 005893c9 (CONDITIONAL_JUMP)  ; LAB_005893c9
    MOV EAX,dword ptr [ESP + 0x60]      ; 005893d0
        ;   Label: LAB_005893d0
    MOV dword ptr [0x01c3582c],ECX      ; 005893d4 | DAT_01c3582c
    SHR EAX,CL                          ; 005893da
    XOR EDX,EDX                         ; 005893dc
    MOV ECX,EAX                         ; 005893de
    MOV EAX,0xff                        ; 005893e0
    DIV ECX                             ; 005893e5
    MOV [0x01c35830],EAX                ; 005893e7 | DAT_01c35830
    XOR ECX,ECX                         ; 005893ec
    TEST EAX,EAX                        ; 005893ee
    JZ 0x00589400                       ; 005893f0
        ;   XREF to: 00589400 (CONDITIONAL_JUMP)  ; LAB_00589400
    CMP EAX,0x1                         ; 005893f2
        ;   Label: LAB_005893f2
    JBE 0x00589414                      ; 005893f5
        ;   XREF to: 00589414 (CONDITIONAL_JUMP)  ; LAB_00589414
    INC ECX                             ; 005893f7
    SHR EAX,0x1                         ; 005893f8
    JMP 0x005893f2                      ; 005893fa
        ;   XREF to: 005893f2 (UNCONDITIONAL_JUMP)  ; LAB_005893f2
    MOV EAX,ECX                         ; 005893fc
        ;   Label: LAB_005893fc
    JMP 0x005893b5                      ; 005893fe
        ;   XREF to: 005893b5 (UNCONDITIONAL_JUMP)  ; LAB_005893b5
    MOV EAX,0x20                        ; 00589400
        ;   Label: LAB_00589400
    MOV [0x01c35834],EAX                ; 00589405 | DAT_01c35834
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10 ; 0058940a
        ;   XREF to: 004d0d10 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10()
    ADD ESP,0x6c                        ; 0058940f
    POP EBX                             ; 00589412
    RET                                 ; 00589413
    MOV EAX,ECX                         ; 00589414
        ;   Label: LAB_00589414
    MOV [0x01c35834],EAX                ; 00589416 | DAT_01c35834
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10 ; 0058941b
        ;   XREF to: 004d0d10 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d0d10()
    ADD ESP,0x6c                        ; 00589420
    POP EBX                             ; 00589423
    RET                                 ; 00589424

