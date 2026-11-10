; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_openScreenDevice_FUN_0057a3c0(void)
;
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
;
; XREF[4]:
;   core_game.cpp_FUN_004b6f30 at 004b6ff9
;   core_game.cpp_FUN_004bec20 at 004beddf
;   engine_special.cpp_presentToExternalRenderer_FUN_00566260 at 005662cf
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 at 0057a8eb
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005d75ed
;   TerminatedCString s_openScreenDevice_Unable_005d7604
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02d0bce8
;   undefined4 DAT_02d0bcfc
;   undefined4 DAT_02d0bd08
;   undefined4 DAT_02d0bd0c
;   undefined4 DAT_02d0bd10
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a3c0
        ;   Label: wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0
    PUSH ESI                            ; 0057a3c1
    PUSH EDI                            ; 0057a3c2
    PUSH EBP                            ; 0057a3c3
    SUB ESP,0x6c                        ; 0057a3c4
    MOV EDX,dword ptr [0x02d0bcfc]      ; 0057a3c7 | DAT_02d0bcfc
    TEST EDX,EDX                        ; 0057a3cd
    JNZ 0x0057a3e0                      ; 0057a3cf
        ;   XREF to: 0057a3e0 (CONDITIONAL_JUMP)  ; LAB_0057a3e0
    CMP dword ptr [0x01c6cee8],0x0      ; 0057a3d1 | DAT_01c6cee8
    JZ 0x0057a3e8                       ; 0057a3d8
        ;   XREF to: 0057a3e8 (CONDITIONAL_JUMP)  ; LAB_0057a3e8
    LEA EAX,[EAX]                       ; 0057a3da
    ADD ESP,0x6c                        ; 0057a3e0
        ;   Label: LAB_0057a3e0
    POP EBP                             ; 0057a3e3
    POP EDI                             ; 0057a3e4
    POP ESI                             ; 0057a3e5
    POP EBX                             ; 0057a3e6
    RET                                 ; 0057a3e7
    PUSH 0x6c                           ; 0057a3e8
        ;   Label: LAB_0057a3e8
    PUSH EDX                            ; 0057a3ea
    LEA EAX,[ESP + 0x8]                 ; 0057a3eb
    PUSH EAX                            ; 0057a3ef
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0057a3f0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057a3f5
    PUSH 0x0                            ; 0057a3f8
    PUSH 0x1                            ; 0057a3fa
    LEA EDX,[ESP + 0x8]                 ; 0057a3fc
    MOV EBX,0x6c                        ; 0057a400
    PUSH EDX                            ; 0057a405
    MOV EAX,[0x02d0bce8]                ; 0057a406 | DAT_02d0bce8
    MOV dword ptr [ESP + 0xc],EBX       ; 0057a40b
    PUSH 0x0                            ; 0057a40f
    MOV ECX,dword ptr [EAX]             ; 0057a411
    PUSH EAX                            ; 0057a413
    CALL dword ptr [ECX + 0x64]         ; 0057a414
    TEST EAX,EAX                        ; 0057a417
    JZ 0x0057a43e                       ; 0057a419
        ;   XREF to: 0057a43e (CONDITIONAL_JUMP)  ; LAB_0057a43e
    MOV ESI,0x5d75ed                    ; 0057a41b | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x262                       ; 0057a420
    PUSH 0x5d7604                       ; 0057a425 | = "openScreenDevice - Unable to lock scr..."
    MOV dword ptr [0x01d71de0],ESI      ; 0057a42a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0057a430 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057a436
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057a43b
    MOV EBP,dword ptr [0x02d0bcfc]      ; 0057a43e | DAT_02d0bcfc
        ;   Label: LAB_0057a43e
    MOV EDX,dword ptr [ESP + 0x24]      ; 0057a444
    TEST EBP,EBP                        ; 0057a448
    JZ 0x0057a47a                       ; 0057a44a
        ;   XREF to: 0057a47a (CONDITIONAL_JUMP)  ; LAB_0057a47a
    MOV ESI,dword ptr [0x005fba1c]      ; 0057a44c | DAT_005fba1c
        ;   Label: LAB_0057a44c
    TEST ESI,ESI                        ; 0057a452
    JLE 0x0057a3e0                      ; 0057a454
        ;   XREF to: 0057a3e0 (CONDITIONAL_JUMP)  ; LAB_0057a3e0
    MOV EDI,dword ptr [ESP + 0x10]      ; 0057a456
    LEA ECX,[ESI*0x4 + 0x0]             ; 0057a45a
    XOR EAX,EAX                         ; 0057a461
    MOV dword ptr [EAX + 0x1c5faec],EDX ; 0057a463 | DAT_01c5faec | DAT_01c5faf0
        ;   Label: LAB_0057a463
    ADD EAX,0x4                         ; 0057a469
    ADD EDX,EDI                         ; 0057a46c
    CMP EAX,ECX                         ; 0057a46e
    JL 0x0057a463                       ; 0057a470
        ;   XREF to: 0057a463 (CONDITIONAL_JUMP)  ; LAB_0057a463
    ADD ESP,0x6c                        ; 0057a472
    POP EBP                             ; 0057a475
    POP EDI                             ; 0057a476
    POP ESI                             ; 0057a477
    POP EBX                             ; 0057a478
    RET                                 ; 0057a479
    MOV EDX,dword ptr [0x02d0bd0c]      ; 0057a47a | DAT_02d0bd0c
        ;   Label: LAB_0057a47a
    IMUL EDX,dword ptr [0x02d0bd08]     ; 0057a480 | DAT_02d0bd08
    MOV ECX,dword ptr [ESP + 0x10]      ; 0057a487
    IMUL ECX,dword ptr [0x02d0bd10]     ; 0057a48b | DAT_02d0bd10
    MOV EAX,EDX                         ; 0057a492
    SAR EDX,0x1f                        ; 0057a494
    SHL EDX,0x3                         ; 0057a497
    SBB EAX,EDX                         ; 0057a49a
    SAR EAX,0x3                         ; 0057a49c
    MOV EDX,dword ptr [ESP + 0x24]      ; 0057a49f
    ADD EAX,ECX                         ; 0057a4a3
    ADD EDX,EAX                         ; 0057a4a5
    JMP 0x0057a44c                      ; 0057a4a7
        ;   XREF to: 0057a44c (UNCONDITIONAL_JUMP)  ; LAB_0057a44c

