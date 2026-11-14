; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_0057ab70(void)
;
;
; XREF[2]:
;   wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0 at 0057a96c
;   wincore_winrun.cpp_FUN_00580a50 at 00580b5c
;
; Referenced Globals:
;   void* PTR_SetFocus_005b34fc = 001b3be4
;   TerminatedCString s_trigl_dll_005d77b8
;   TerminatedCString s_wincore_wddvmem_cpp_005d77c2
;   TerminatedCString s_videoRestore_Unable_to_s_005d77d9
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined1 DAT_00606730
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf5fcc
;   undefined4 DAT_02d0bce0
;   undefined4 DAT_02d0bce4
;   undefined4 DAT_02d0bce8
;   undefined4 DAT_02d0bcec
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_ddraw.c_DirectDrawCreate
;   crt_string.c__stricmp_FUN_005a3260
;   engine_special.cpp_setResolutionAndColorTable_FUN_00565a90
;   SetFocus
;   wincore_wddvmem.cpp_FUN_00579bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ab70
        ;   Label: wincore_wddvmem.cpp_videoRestore_FUN_0057ab70
    PUSH ESI                            ; 0057ab71
    PUSH EBP                            ; 0057ab72
    CMP dword ptr [0x02cf5fcc],0x0      ; 0057ab73 | DAT_02cf5fcc
    JZ 0x0057ac97                       ; 0057ab7a
        ;   XREF to: 0057ac97 (CONDITIONAL_JUMP)  ; LAB_0057ac97
    CMP dword ptr [0x02d0bcf8],0x0      ; 0057ab80 | DAT_02d0bcf8
    JZ 0x0057ac97                       ; 0057ab87
        ;   XREF to: 0057ac97 (CONDITIONAL_JUMP)  ; LAB_0057ac97
    PUSH 0x5d77b8                       ; 0057ab8d | = "trigl.dll"
    PUSH 0x606730                       ; 0057ab92 | DAT_00606730
    CALL crt_string.c__stricmp_FUN_005a3260 ; 0057ab97
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057ab9c
    TEST EAX,EAX                        ; 0057ab9f
    JZ 0x0057ac6b                       ; 0057aba1
        ;   XREF to: 0057ac6b (CONDITIONAL_JUMP)  ; LAB_0057ac6b
    MOV EDX,dword ptr [0x005fba20]      ; 0057aba7 | DAT_005fba20
    PUSH EDX                            ; 0057abad
    MOV ECX,dword ptr [0x005fba1c]      ; 0057abae | DAT_005fba1c
    PUSH ECX                            ; 0057abb4
    MOV EBX,dword ptr [0x005fba18]      ; 0057abb5 | DAT_005fba18
    PUSH EBX                            ; 0057abbb
    CALL engine_special.cpp_setResolutionAndColorTable_FUN_00565a90 ; 0057abbc
        ;   XREF to: 00565a90 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_setResolutionAndColorTable_FUN_00565a90(int width, int height, int bits_per_pixel)
    ADD ESP,0xc                         ; 0057abc1
    TEST EAX,EAX                        ; 0057abc4
    JNZ 0x0057ac6b                      ; 0057abc6
        ;   XREF to: 0057ac6b (CONDITIONAL_JUMP)  ; LAB_0057ac6b
    PUSH EDI                            ; 0057abcc
    MOV EDI,dword ptr [0x02d0bcec]      ; 0057abcd | DAT_02d0bcec
    MOV [0x02cf5fcc],EAX                ; 0057abd3 | DAT_02cf5fcc
    TEST EDI,EDI                        ; 0057abd8
    JZ 0x0057abea                       ; 0057abda
        ;   XREF to: 0057abea (CONDITIONAL_JUMP)  ; LAB_0057abea
    PUSH EDI                            ; 0057abdc
    MOV EDX,dword ptr [EDI]             ; 0057abdd
    XOR EBP,EBP                         ; 0057abdf
    CALL dword ptr [EDX + 0x8]          ; 0057abe1
    MOV dword ptr [0x02d0bcec],EBP      ; 0057abe4 | DAT_02d0bcec
    MOV EAX,[0x02d0bce8]                ; 0057abea | DAT_02d0bce8
        ;   Label: LAB_0057abea
    TEST EAX,EAX                        ; 0057abef
    JZ 0x0057ac01                       ; 0057abf1
        ;   XREF to: 0057ac01 (CONDITIONAL_JUMP)  ; LAB_0057ac01
    PUSH EAX                            ; 0057abf3
    MOV EDX,dword ptr [EAX]             ; 0057abf4
    CALL dword ptr [EDX + 0x8]          ; 0057abf6
    XOR EDX,EDX                         ; 0057abf9
    MOV dword ptr [0x02d0bce8],EDX      ; 0057abfb | DAT_02d0bce8
    MOV ECX,dword ptr [0x02d0bce4]      ; 0057ac01 | DAT_02d0bce4
        ;   Label: LAB_0057ac01
    TEST ECX,ECX                        ; 0057ac07
    JZ 0x0057ac19                       ; 0057ac09
        ;   XREF to: 0057ac19 (CONDITIONAL_JUMP)  ; LAB_0057ac19
    PUSH ECX                            ; 0057ac0b
    MOV EDX,dword ptr [ECX]             ; 0057ac0c
    XOR EBX,EBX                         ; 0057ac0e
    CALL dword ptr [EDX + 0x8]          ; 0057ac10
    MOV dword ptr [0x02d0bce4],EBX      ; 0057ac13 | DAT_02d0bce4
    MOV ESI,dword ptr [0x02d0bce0]      ; 0057ac19 | DAT_02d0bce0
        ;   Label: LAB_0057ac19
    TEST ESI,ESI                        ; 0057ac1f
    JZ 0x0057ac3c                       ; 0057ac21
        ;   XREF to: 0057ac3c (CONDITIONAL_JUMP)  ; LAB_0057ac3c
    PUSH ESI                            ; 0057ac23
    MOV EDX,dword ptr [ESI]             ; 0057ac24
    CALL dword ptr [EDX + 0x4c]         ; 0057ac26
    MOV EAX,[0x02d0bce0]                ; 0057ac29 | DAT_02d0bce0
    PUSH EAX                            ; 0057ac2e
    MOV EDX,dword ptr [EAX]             ; 0057ac2f
    XOR EDI,EDI                         ; 0057ac31
    CALL dword ptr [EDX + 0x8]          ; 0057ac33
    MOV dword ptr [0x02d0bce0],EDI      ; 0057ac36 | DAT_02d0bce0
    PUSH 0x0                            ; 0057ac3c
        ;   Label: LAB_0057ac3c
    PUSH 0x2d0bce0                      ; 0057ac3e | DAT_02d0bce0
    PUSH 0x0                            ; 0057ac43
    CALL crt_ddraw.c_DirectDrawCreate   ; 0057ac45
        ;   XREF to: 005b254a (UNCONDITIONAL_CALL)  ; HRESULT crt_ddraw.c_DirectDrawCreate(GUID * lp_guid, LPDIRECTDRAW * lplp_dd, IUnknown * p_unk_outer)
    TEST EAX,EAX                        ; 0057ac4a
    JZ 0x0057ac81                       ; 0057ac4c
        ;   XREF to: 0057ac81 (CONDITIONAL_JUMP)  ; LAB_0057ac81
    MOV EAX,[0x005fba20]                ; 0057ac4e | DAT_005fba20
        ;   Label: LAB_0057ac4e
    PUSH EAX                            ; 0057ac53
    MOV EDX,dword ptr [0x005fba1c]      ; 0057ac54 | DAT_005fba1c
    PUSH EDX                            ; 0057ac5a
    MOV ECX,dword ptr [0x005fba18]      ; 0057ac5b | DAT_005fba18
    PUSH ECX                            ; 0057ac61
    CALL wincore_wddvmem.cpp_FUN_00579bb0 ; 0057ac62
        ;   XREF to: 00579bb0 (UNCONDITIONAL_CALL)  ; undefined wincore_wddvmem.cpp_FUN_00579bb0()
    ADD ESP,0xc                         ; 0057ac67
    POP EDI                             ; 0057ac6a
    MOV EBX,dword ptr [0x02d21b78]      ; 0057ac6b | DAT_02d21b78
        ;   Label: LAB_0057ac6b
    PUSH EBX                            ; 0057ac71
    CALL dword ptr CS:[0x5b34fc]        ; 0057ac72 | PTR_SetFocus_005b34fc
    POP EBP                             ; 0057ac79
        ;   Label: LAB_0057ac79
    POP ESI                             ; 0057ac7a
    POP EBX                             ; 0057ac7b
    LEA EAX,[EAX]                       ; 0057ac7c
    PUSH 0x11                           ; 0057ac81
        ;   Label: LAB_0057ac81
    MOV EBP,dword ptr [0x02d21b78]      ; 0057ac83 | DAT_02d21b78
    MOV EAX,[0x02d0bce0]                ; 0057ac89 | DAT_02d0bce0
    PUSH EBP                            ; 0057ac8e
    MOV EDX,dword ptr [EAX]             ; 0057ac8f
    PUSH EAX                            ; 0057ac91
    CALL dword ptr [EDX + 0x50]         ; 0057ac92
    JMP 0x0057ac4e                      ; 0057ac95
        ;   XREF to: 0057ac4e (UNCONDITIONAL_JUMP)  ; LAB_0057ac4e
    MOV EBX,dword ptr [0x02d0bce4]      ; 0057ac97 | DAT_02d0bce4
        ;   Label: LAB_0057ac97
    TEST EBX,EBX                        ; 0057ac9d
    JZ 0x0057ac79                       ; 0057ac9f
        ;   XREF to: 0057ac79 (CONDITIONAL_JUMP)  ; LAB_0057ac79
    PUSH EBX                            ; 0057aca1
    MOV EDX,dword ptr [EBX]             ; 0057aca2
    CALL dword ptr [EDX + 0x6c]         ; 0057aca4
    MOV EAX,[0x02d0bce8]                ; 0057aca7 | DAT_02d0bce8
    PUSH EAX                            ; 0057acac
    MOV EDX,dword ptr [EAX]             ; 0057acad
    CALL dword ptr [EDX + 0x6c]         ; 0057acaf
    MOV ESI,dword ptr [0x02d0bcec]      ; 0057acb2 | DAT_02d0bcec
    TEST ESI,ESI                        ; 0057acb8
    JZ 0x0057ac79                       ; 0057acba
        ;   XREF to: 0057ac79 (CONDITIONAL_JUMP)  ; LAB_0057ac79
    PUSH ESI                            ; 0057acbc
    MOV EAX,[0x02d0bce4]                ; 0057acbd | DAT_02d0bce4
    PUSH EAX                            ; 0057acc2
    MOV EDX,dword ptr [EAX]             ; 0057acc3
    CALL dword ptr [EDX + 0x7c]         ; 0057acc5
    TEST EAX,EAX                        ; 0057acc8
    JZ 0x0057ac79                       ; 0057acca
        ;   XREF to: 0057ac79 (CONDITIONAL_JUMP)  ; LAB_0057ac79
    MOV EBP,0x5d77c2                    ; 0057accc | = "..\\wincore\\wddvmem.cpp"
    MOV EAX,0x3fe                       ; 0057acd1
    PUSH 0x5d77d9                       ; 0057acd6 | = "videoRestore - Unable to set front bu..."
    MOV dword ptr [0x01d71de0],EBP      ; 0057acdb | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0057ace1 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057ace6
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057aceb
    POP EBP                             ; 0057acee
    POP ESI                             ; 0057acef
    POP EBX                             ; 0057acf0
    RET                                 ; 0057acf1

