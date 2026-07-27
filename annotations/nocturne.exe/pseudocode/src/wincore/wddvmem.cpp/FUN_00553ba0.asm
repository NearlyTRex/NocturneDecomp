; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_00553ba0(void)
;
;
; XREF[2]:
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910 at 00553b4c
;   wincore_winrun.cpp_FUN_00558d90 at 00558e69
;
; Referenced Globals:
;   void* PTR_SetFocus_00575470 = 00175a70
;   TerminatedCString s_wincore_wddvmem_cpp_00597b48
;   TerminatedCString s_videoRestore_Unable_to_s_00597b5f
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   char* PTR_01cc4800
;   int INT_01cc4804
;   int INT_02dc9d60
;   undefined4 DAT_02ddf550
;   undefined4 DAT_02ddf554
;   undefined4 DAT_02ddf558
;   undefined4 DAT_02ddf55c
;   undefined4 DAT_02ddf568
;   undefined4 DAT_02de2098
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   DirectDrawCreate
;   engine_special.cpp_setResolutionAndColorTable_FUN_005324a0
;   SetFocus
;   wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553ba0
        ;   Label: wincore_wddvmem.cpp_FUN_00553ba0
    PUSH ESI                            ; 00553ba1
    PUSH EBP                            ; 00553ba2
    CMP dword ptr [0x02dc9d60],0x0      ; 00553ba3 | INT_02dc9d60
    JZ 0x00553cb7                       ; 00553baa
        ;   XREF to: 00553cb7 (CONDITIONAL_JUMP)  ; LAB_00553cb7
    CMP dword ptr [0x02ddf568],0x0      ; 00553bb0 | DAT_02ddf568
    JZ 0x00553cb7                       ; 00553bb7
        ;   XREF to: 00553cb7 (CONDITIONAL_JUMP)  ; LAB_00553cb7
    MOV EDX,dword ptr [0x005b7624]      ; 00553bbd | DAT_005b7624
    PUSH EDX                            ; 00553bc3
    MOV ECX,dword ptr [0x005b7620]      ; 00553bc4 | DAT_005b7620
    PUSH ECX                            ; 00553bca
    MOV EBX,dword ptr [0x005b761c]      ; 00553bcb | DAT_005b761c
    PUSH EBX                            ; 00553bd1
    CALL engine_special.cpp_setResolutionAndColorTable_FUN_005324a0 ; 00553bd2
        ;   XREF to: 005324a0 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_setResolutionAndColorTable_FUN_005324a0()
    ADD ESP,0xc                         ; 00553bd7
    TEST EAX,EAX                        ; 00553bda
    JNZ 0x00553c81                      ; 00553bdc
        ;   XREF to: 00553c81 (CONDITIONAL_JUMP)  ; LAB_00553c81
    PUSH EDI                            ; 00553be2
    MOV EDI,dword ptr [0x02ddf55c]      ; 00553be3 | DAT_02ddf55c
    MOV [0x02dc9d60],EAX                ; 00553be9 | INT_02dc9d60
    TEST EDI,EDI                        ; 00553bee
    JZ 0x00553c00                       ; 00553bf0
        ;   XREF to: 00553c00 (CONDITIONAL_JUMP)  ; LAB_00553c00
    PUSH EDI                            ; 00553bf2
    MOV EDX,dword ptr [EDI]             ; 00553bf3
    XOR EBP,EBP                         ; 00553bf5
    CALL dword ptr [EDX + 0x8]          ; 00553bf7
    MOV dword ptr [0x02ddf55c],EBP      ; 00553bfa | DAT_02ddf55c
    MOV EAX,[0x02ddf558]                ; 00553c00 | DAT_02ddf558
        ;   Label: LAB_00553c00
    TEST EAX,EAX                        ; 00553c05
    JZ 0x00553c17                       ; 00553c07
        ;   XREF to: 00553c17 (CONDITIONAL_JUMP)  ; LAB_00553c17
    PUSH EAX                            ; 00553c09
    MOV EDX,dword ptr [EAX]             ; 00553c0a
    CALL dword ptr [EDX + 0x8]          ; 00553c0c
    XOR EDX,EDX                         ; 00553c0f
    MOV dword ptr [0x02ddf558],EDX      ; 00553c11 | DAT_02ddf558
    MOV ECX,dword ptr [0x02ddf554]      ; 00553c17 | DAT_02ddf554
        ;   Label: LAB_00553c17
    TEST ECX,ECX                        ; 00553c1d
    JZ 0x00553c2f                       ; 00553c1f
        ;   XREF to: 00553c2f (CONDITIONAL_JUMP)  ; LAB_00553c2f
    PUSH ECX                            ; 00553c21
    MOV EDX,dword ptr [ECX]             ; 00553c22
    XOR EBX,EBX                         ; 00553c24
    CALL dword ptr [EDX + 0x8]          ; 00553c26
    MOV dword ptr [0x02ddf554],EBX      ; 00553c29 | DAT_02ddf554
    MOV ESI,dword ptr [0x02ddf550]      ; 00553c2f | DAT_02ddf550
        ;   Label: LAB_00553c2f
    TEST ESI,ESI                        ; 00553c35
    JZ 0x00553c52                       ; 00553c37
        ;   XREF to: 00553c52 (CONDITIONAL_JUMP)  ; LAB_00553c52
    PUSH ESI                            ; 00553c39
    MOV EDX,dword ptr [ESI]             ; 00553c3a
    CALL dword ptr [EDX + 0x4c]         ; 00553c3c
    MOV EAX,[0x02ddf550]                ; 00553c3f | DAT_02ddf550
    PUSH EAX                            ; 00553c44
    MOV EDX,dword ptr [EAX]             ; 00553c45
    XOR EDI,EDI                         ; 00553c47
    CALL dword ptr [EDX + 0x8]          ; 00553c49
    MOV dword ptr [0x02ddf550],EDI      ; 00553c4c | DAT_02ddf550
    PUSH 0x0                            ; 00553c52
        ;   Label: LAB_00553c52
    PUSH 0x2ddf550                      ; 00553c54 | DAT_02ddf550
    PUSH 0x0                            ; 00553c59
    CALL DirectDrawCreate               ; 00553c5b
        ;   XREF to: 00574ba8 (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 00553c60
    JZ 0x00553ca1                       ; 00553c62
        ;   XREF to: 00553ca1 (CONDITIONAL_JUMP)  ; LAB_00553ca1
    MOV EAX,[0x005b7624]                ; 00553c64 | DAT_005b7624
        ;   Label: LAB_00553c64
    PUSH EAX                            ; 00553c69
    MOV EDX,dword ptr [0x005b7620]      ; 00553c6a | DAT_005b7620
    PUSH EDX                            ; 00553c70
    MOV ECX,dword ptr [0x005b761c]      ; 00553c71 | DAT_005b761c
    PUSH ECX                            ; 00553c77
    CALL wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00 ; 00553c78
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_setScreenResolution_FUN_00552e00()
    ADD ESP,0xc                         ; 00553c7d
    POP EDI                             ; 00553c80
    MOV EBX,dword ptr [0x02de2098]      ; 00553c81 | DAT_02de2098
        ;   Label: LAB_00553c81
    PUSH EBX                            ; 00553c87
    CALL dword ptr CS:[0x575470]        ; 00553c88 | PTR_SetFocus_00575470
    POP EBP                             ; 00553c8f
        ;   Label: LAB_00553c8f
    POP ESI                             ; 00553c90
    POP EBX                             ; 00553c91
    LEA EAX,[EAX]                       ; 00553c92
    LEA EDX,[EDX]                       ; 00553c98
    MOV EAX,EAX                         ; 00553c9e
    PUSH 0x11                           ; 00553ca1
        ;   Label: LAB_00553ca1
    MOV EBP,dword ptr [0x02de2098]      ; 00553ca3 | DAT_02de2098
    MOV EAX,[0x02ddf550]                ; 00553ca9 | DAT_02ddf550
    PUSH EBP                            ; 00553cae
    MOV EDX,dword ptr [EAX]             ; 00553caf
    PUSH EAX                            ; 00553cb1
    CALL dword ptr [EDX + 0x50]         ; 00553cb2
    JMP 0x00553c64                      ; 00553cb5
        ;   XREF to: 00553c64 (UNCONDITIONAL_JUMP)  ; LAB_00553c64
    MOV EBX,dword ptr [0x02ddf554]      ; 00553cb7 | DAT_02ddf554
        ;   Label: LAB_00553cb7
    TEST EBX,EBX                        ; 00553cbd
    JZ 0x00553c8f                       ; 00553cbf
        ;   XREF to: 00553c8f (CONDITIONAL_JUMP)  ; LAB_00553c8f
    PUSH EBX                            ; 00553cc1
    MOV EDX,dword ptr [EBX]             ; 00553cc2
    CALL dword ptr [EDX + 0x6c]         ; 00553cc4
    MOV EAX,[0x02ddf558]                ; 00553cc7 | DAT_02ddf558
    PUSH EAX                            ; 00553ccc
    MOV EDX,dword ptr [EAX]             ; 00553ccd
    CALL dword ptr [EDX + 0x6c]         ; 00553ccf
    MOV ESI,dword ptr [0x02ddf55c]      ; 00553cd2 | DAT_02ddf55c
    TEST ESI,ESI                        ; 00553cd8
    JZ 0x00553c8f                       ; 00553cda
        ;   XREF to: 00553c8f (CONDITIONAL_JUMP)  ; LAB_00553c8f
    PUSH ESI                            ; 00553cdc
    MOV EAX,[0x02ddf554]                ; 00553cdd | DAT_02ddf554
    PUSH EAX                            ; 00553ce2
    MOV EDX,dword ptr [EAX]             ; 00553ce3
    CALL dword ptr [EDX + 0x7c]         ; 00553ce5
    TEST EAX,EAX                        ; 00553ce8
    JZ 0x00553c8f                       ; 00553cea
        ;   XREF to: 00553c8f (CONDITIONAL_JUMP)  ; LAB_00553c8f
    MOV EBP,0x597b48                    ; 00553cec | = "..\\wincore\\wddvmem.cpp"
    MOV EAX,0x3df                       ; 00553cf1
    PUSH 0x597b5f                       ; 00553cf6 | = "videoRestore - Unable to set front bu..."
    MOV dword ptr [0x01cc4800],EBP      ; 00553cfb | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 00553d01 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00553d06
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00553d0b
    POP EBP                             ; 00553d0e
    POP ESI                             ; 00553d0f
    POP EBX                             ; 00553d10
    RET                                 ; 00553d11

