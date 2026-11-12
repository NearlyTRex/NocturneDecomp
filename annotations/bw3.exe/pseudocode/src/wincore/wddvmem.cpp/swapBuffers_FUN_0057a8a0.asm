; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0(void)
;
; Local Variables:
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[38]:
;   core_game.cpp_CGame_finishAct_FUN_004bfee0 at 004c0260
;   core_game.cpp_CGame_rollCredits_FUN_004c02a0 at 004c058b
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8c87
;   core_game.cpp_CGame_setScreenResolutionAndDisplayFangs_FUN_004b7ee0 at 004b7f63
;   core_game.cpp_FUN_004bec20 at 004bedfd
;   core_level.cpp_FUN_004e0000 at 004e005b
;   core_main.c_FUN_004e4400 at 004e4442
;   core_main.c_FUN_004e44e0 at 004e4ae6
;   core_menu.cpp_FUN_004e85a0 at 004e89f8
;   core_menu.cpp_FUN_004e8f80 at 004e926d
;   ... and 28 more
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005d7779
;   TerminatedCString s_Unable_to_unlock_front_b_005d7790
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_00607288
;   undefined4 DAT_0060b010
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02d0bce4
;   undefined4 DAT_02d0bcf4
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   engine_special.cpp_presentToExternalRenderer_FUN_00566260
;   wincore_wddvmem.cpp_closeScreenDevice_FUN_0057a4b0
;   wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0
;   wincore_wddvmem.cpp_videoRestore_FUN_0057ab70
;   wincore_winrun.cpp_FUN_00580f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a8a0
        ;   Label: wincore_wddvmem.cpp_swapBuffers_FUN_0057a8a0
    PUSH ESI                            ; 0057a8a1
    PUSH EDI                            ; 0057a8a2
    PUSH EBP                            ; 0057a8a3
    MOV EBP,ESP                         ; 0057a8a4
    SUB ESP,0x7c                        ; 0057a8a6
    CMP dword ptr [0x00607288],0x0      ; 0057a8a9 | DAT_00607288
    JZ 0x0057a971                       ; 0057a8b0
        ;   XREF to: 0057a971 (CONDITIONAL_JUMP)  ; LAB_0057a971
    MOV ECX,dword ptr [0x01c6cee8]      ; 0057a8b6 | DAT_01c6cee8
    TEST ECX,ECX                        ; 0057a8bc
    JNZ 0x0057a985                      ; 0057a8be
        ;   XREF to: 0057a985 (CONDITIONAL_JUMP)  ; LAB_0057a985
    MOV EBX,dword ptr [0x02d0bcf4]      ; 0057a8c4 | DAT_02d0bcf4
    TEST EBX,EBX                        ; 0057a8ca
    JNZ 0x0057a94d                      ; 0057a8cc
        ;   XREF to: 0057a94d (CONDITIONAL_JUMP)  ; LAB_0057a94d
    CMP dword ptr [0x02d0bcfc],0x0      ; 0057a8d2 | DAT_02d0bcfc
    JZ 0x0057a9a3                       ; 0057a8d9
        ;   XREF to: 0057a9a3 (CONDITIONAL_JUMP)  ; LAB_0057a9a3
    MOV ESI,dword ptr [0x0060b010]      ; 0057a8df | DAT_0060b010
    MOV dword ptr [0x02d0bcfc],ECX      ; 0057a8e5 | DAT_02d0bcfc
    CALL wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0 ; 0057a8eb
        ;   XREF to: 0057a3c0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0()
    MOV EBX,dword ptr [0x005fba1c]      ; 0057a8f0 | DAT_005fba1c
    XOR ECX,ECX                         ; 0057a8f6
    TEST EBX,EBX                        ; 0057a8f8
    JLE 0x0057a93e                      ; 0057a8fa
        ;   XREF to: 0057a93e (CONDITIONAL_JUMP)  ; LAB_0057a93e
    XOR EDI,EDI                         ; 0057a8fc
    MOV EBX,dword ptr [0x005fba18]      ; 0057a8fe | DAT_005fba18
        ;   Label: LAB_0057a8fe
    MOV EAX,dword ptr [EDI + 0x1c5faec] ; 0057a904 | DAT_01c5faec | DAT_01c5faf0
    XOR EDX,EDX                         ; 0057a90a
    TEST EBX,EBX                        ; 0057a90c
    JLE 0x0057a931                      ; 0057a90e
        ;   XREF to: 0057a931 (CONDITIONAL_JUMP)  ; LAB_0057a931
    MOV BL,byte ptr [ESI]               ; 0057a910
        ;   Label: LAB_0057a910
    MOV byte ptr [EAX],BL               ; 0057a912
    MOV BL,byte ptr [ESI + 0x1]         ; 0057a914
    ADD ESI,0x4                         ; 0057a917
    MOV byte ptr [EAX + 0x1],BL         ; 0057a91a
    MOV BL,byte ptr [ESI + -0x2]        ; 0057a91d
    INC EDX                             ; 0057a920
    MOV byte ptr [EAX + 0x2],BL         ; 0057a921
    MOV EBX,dword ptr [0x005fba18]      ; 0057a924 | DAT_005fba18
    ADD EAX,0x3                         ; 0057a92a
    CMP EDX,EBX                         ; 0057a92d
    JL 0x0057a910                       ; 0057a92f
        ;   XREF to: 0057a910 (CONDITIONAL_JUMP)  ; LAB_0057a910
    MOV EAX,[0x005fba1c]                ; 0057a931 | DAT_005fba1c
        ;   Label: LAB_0057a931
    INC ECX                             ; 0057a936
    ADD EDI,0x4                         ; 0057a937
    CMP ECX,EAX                         ; 0057a93a
    JL 0x0057a8fe                       ; 0057a93c
        ;   XREF to: 0057a8fe (CONDITIONAL_JUMP)  ; LAB_0057a8fe
    CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_0057a4b0 ; 0057a93e
        ;   XREF to: 0057a4b0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_closeScreenDevice_FUN_0057a4b0()
        ;   Label: LAB_0057a93e
    MOV dword ptr [0x02d0bcfc],0x1      ; 0057a943 | DAT_02d0bcfc
    MOV ESI,dword ptr [0x02d0bce4]      ; 0057a94d | DAT_02d0bce4
        ;   Label: LAB_0057a94d
    TEST ESI,ESI                        ; 0057a953
    JZ 0x0057a971                       ; 0057a955
        ;   XREF to: 0057a971 (CONDITIONAL_JUMP)  ; LAB_0057a971
    PUSH 0x1                            ; 0057a957
    PUSH 0x0                            ; 0057a959
    MOV EDX,dword ptr [ESI]             ; 0057a95b
    PUSH ESI                            ; 0057a95d
    CALL dword ptr [EDX + 0x2c]         ; 0057a95e
    TEST EAX,EAX                        ; 0057a961
    JZ 0x0057a971                       ; 0057a963
        ;   XREF to: 0057a971 (CONDITIONAL_JUMP)  ; LAB_0057a971
    CMP EAX,0x887601c2                  ; 0057a965
    JNZ 0x0057a971                      ; 0057a96a
        ;   XREF to: 0057a971 (CONDITIONAL_JUMP)  ; LAB_0057a971
    CALL wincore_wddvmem.cpp_videoRestore_FUN_0057ab70 ; 0057a96c
        ;   XREF to: 0057ab70 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_videoRestore_FUN_0057ab70()
    XOR EDI,EDI                         ; 0057a971
        ;   Label: LAB_0057a971
    MOV dword ptr [0x02d0bcf4],EDI      ; 0057a973 | DAT_02d0bcf4
    CALL wincore_winrun.cpp_FUN_00580f70 ; 0057a979
        ;   XREF to: 00580f70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_00580f70()
    MOV ESP,EBP                         ; 0057a97e
    POP EBP                             ; 0057a980
    POP EDI                             ; 0057a981
    POP ESI                             ; 0057a982
    POP EBX                             ; 0057a983
    RET                                 ; 0057a984
    PUSH 0x0                            ; 0057a985
        ;   Label: LAB_0057a985
    CALL engine_special.cpp_presentToExternalRenderer_FUN_00566260 ; 0057a987
        ;   XREF to: 00566260 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_presentToExternalRenderer_FUN_00566260(int skip_buffer_copy)
    ADD ESP,0x4                         ; 0057a98c
    XOR EDI,EDI                         ; 0057a98f
    MOV dword ptr [0x02d0bcf4],EDI      ; 0057a991 | DAT_02d0bcf4
    CALL wincore_winrun.cpp_FUN_00580f70 ; 0057a997
        ;   XREF to: 00580f70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_00580f70()
    MOV ESP,EBP                         ; 0057a99c
    POP EBP                             ; 0057a99e
    POP EDI                             ; 0057a99f
    POP ESI                             ; 0057a9a0
    POP EBX                             ; 0057a9a1
    RET                                 ; 0057a9a2
    MOV EAX,[0x0060b010]                ; 0057a9a3 | DAT_0060b010
        ;   Label: LAB_0057a9a3
    MOV dword ptr [EBP + -0x10],EAX     ; 0057a9a8
    MOV EAX,[0x005fba20]                ; 0057a9ab | DAT_005fba20
    MOV EDX,EAX                         ; 0057a9b0
    SAR EDX,0x1f                        ; 0057a9b2
    SHL EDX,0x3                         ; 0057a9b5
    SBB EAX,EDX                         ; 0057a9b8
    SAR EAX,0x3                         ; 0057a9ba
    MOV EDX,dword ptr [0x005fba18]      ; 0057a9bd | DAT_005fba18
    IMUL EDX,EAX                        ; 0057a9c3
    PUSH 0x6c                           ; 0057a9c6
    PUSH ECX                            ; 0057a9c8
    MOV dword ptr [EBP + -0xc],EDX      ; 0057a9c9
    LEA EAX,[EBP + -0x7c]               ; 0057a9cc
    PUSH EAX                            ; 0057a9cf
    CALL crt_memory.c_memset_FUN_005a28f0 ; 0057a9d0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0057a9d5
    PUSH EBX                            ; 0057a9d8
    PUSH 0x1                            ; 0057a9d9
    LEA EDX,[EBP + -0x7c]               ; 0057a9db
    MOV EDI,0x6c                        ; 0057a9de
    PUSH EDX                            ; 0057a9e3
    MOV EAX,[0x02d0bce4]                ; 0057a9e4 | DAT_02d0bce4
    MOV dword ptr [EBP + -0x7c],EDI     ; 0057a9e9
    PUSH EBX                            ; 0057a9ec
    MOV ECX,dword ptr [EAX]             ; 0057a9ed
    PUSH EAX                            ; 0057a9ef
    CALL dword ptr [ECX + 0x64]         ; 0057a9f0
    MOV ECX,EAX                         ; 0057a9f3
    MOV EAX,dword ptr [EBP + -0x58]     ; 0057a9f5
    MOV dword ptr [EBP + -0x8],EAX      ; 0057a9f8
    MOV ESI,dword ptr [EBP + -0x6c]     ; 0057a9fb
    IMUL ESI,dword ptr [0x02d0bd10]     ; 0057a9fe | DAT_02d0bd10
    MOV EDX,dword ptr [0x02d0bd0c]      ; 0057aa05 | DAT_02d0bd0c
    MOV EBX,dword ptr [0x02d0bd08]      ; 0057aa0b | DAT_02d0bd08
    IMUL EDX,EBX                        ; 0057aa11
    MOV EAX,EDX                         ; 0057aa14
    SAR EDX,0x1f                        ; 0057aa16
    SHL EDX,0x3                         ; 0057aa19
    SBB EAX,EDX                         ; 0057aa1c
    SAR EAX,0x3                         ; 0057aa1e
    ADD EAX,ESI                         ; 0057aa21
    ADD dword ptr [EBP + -0x8],EAX      ; 0057aa23
    TEST ECX,ECX                        ; 0057aa26
    JNZ 0x0057a971                      ; 0057aa28
        ;   XREF to: 0057a971 (CONDITIONAL_JUMP)  ; LAB_0057a971
    CMP dword ptr [EBP + -0x8],0x0      ; 0057aa2e
    JZ 0x0057a971                       ; 0057aa32
        ;   XREF to: 0057a971 (CONDITIONAL_JUMP)  ; LAB_0057a971
    XOR EAX,EAX                         ; 0057aa38
    MOV EDX,dword ptr [0x005fba1c]      ; 0057aa3a | DAT_005fba1c
    MOV dword ptr [EBP + -0x4],EAX      ; 0057aa40
    TEST EDX,EDX                        ; 0057aa43
    JLE 0x0057aaae                      ; 0057aa45
        ;   XREF to: 0057aaae (CONDITIONAL_JUMP)  ; LAB_0057aaae
    CMP dword ptr [0x01c6e2a0],0x0      ; 0057aa47 | DAT_01c6e2a0
        ;   Label: LAB_0057aa47
    JZ 0x0057aafd                       ; 0057aa4e
        ;   XREF to: 0057aafd (CONDITIONAL_JUMP)  ; LAB_0057aafd
    MOV ECX,dword ptr [EBP + 0xfffffff4] ; 0057aa54
    MOV ESI,dword ptr [EBP + 0xfffffff0] ; 0057aa5a
    MOV EDI,dword ptr [EBP + 0xfffffff8] ; 0057aa60
    MOVQ MM0,qword ptr [ESI]            ; 0057aa66
        ;   Label: LAB_0057aa66
    MOVQ MM1,qword ptr [ESI + 0x8]      ; 0057aa69
    MOVQ MM2,qword ptr [ESI + 0x10]     ; 0057aa6d
    MOVQ MM3,qword ptr [ESI + 0x18]     ; 0057aa71
    MOVQ qword ptr [EDI],MM0            ; 0057aa75
    MOVQ qword ptr [EDI + 0x8],MM1      ; 0057aa78
    MOVQ qword ptr [EDI + 0x10],MM2     ; 0057aa7c
    MOVQ qword ptr [EDI + 0x18],MM3     ; 0057aa80
    ADD ESI,0x20                        ; 0057aa84
    ADD EDI,0x20                        ; 0057aa87
    SUB ECX,0x20                        ; 0057aa8a
    JG 0x0057aa66                       ; 0057aa8d
        ;   XREF to: 0057aa66 (CONDITIONAL_JUMP)  ; LAB_0057aa66
    EMMS                                ; 0057aa8f
    MOV EAX,dword ptr [EBP + -0xc]      ; 0057aa91
        ;   Label: LAB_0057aa91
    ADD dword ptr [EBP + -0x10],EAX     ; 0057aa94
    MOV EAX,dword ptr [EBP + -0x6c]     ; 0057aa97
    ADD dword ptr [EBP + -0x8],EAX      ; 0057aa9a
    MOV EAX,dword ptr [EBP + -0x4]      ; 0057aa9d
    INC EAX                             ; 0057aaa0
    MOV EDX,dword ptr [0x005fba1c]      ; 0057aaa1 | DAT_005fba1c
    MOV dword ptr [EBP + -0x4],EAX      ; 0057aaa7
    CMP EAX,EDX                         ; 0057aaaa
    JL 0x0057aa47                       ; 0057aaac
        ;   XREF to: 0057aa47 (CONDITIONAL_JUMP)  ; LAB_0057aa47
    PUSH 0x0                            ; 0057aaae
        ;   Label: LAB_0057aaae
    MOV EAX,[0x02d0bce4]                ; 0057aab0 | DAT_02d0bce4
    PUSH EAX                            ; 0057aab5
    MOV EDX,dword ptr [EAX]             ; 0057aab6
    CALL dword ptr [EDX + 0x80]         ; 0057aab8
    TEST EAX,EAX                        ; 0057aabe
    JZ 0x0057a971                       ; 0057aac0
        ;   XREF to: 0057a971 (CONDITIONAL_JUMP)  ; LAB_0057a971
    MOV ECX,0x5d7779                    ; 0057aac6 | = "..\\wincore\\wddvmem.cpp"
    MOV EBX,0x381                       ; 0057aacb
    PUSH 0x5d7790                       ; 0057aad0 | = "Unable to unlock front buffer"
    MOV dword ptr [0x01d71de0],ECX      ; 0057aad5 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0057aadb | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0057aae1
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0057aae6
    XOR EDI,EDI                         ; 0057aae9
    MOV dword ptr [0x02d0bcf4],EDI      ; 0057aaeb | DAT_02d0bcf4
    CALL wincore_winrun.cpp_FUN_00580f70 ; 0057aaf1
        ;   XREF to: 00580f70 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_00580f70()
    MOV ESP,EBP                         ; 0057aaf6
    POP EBP                             ; 0057aaf8
    POP EDI                             ; 0057aaf9
    POP ESI                             ; 0057aafa
    POP EBX                             ; 0057aafb
    RET                                 ; 0057aafc
    MOV ECX,dword ptr [EBP + -0xc]      ; 0057aafd
        ;   Label: LAB_0057aafd
    MOV ESI,dword ptr [EBP + -0x10]     ; 0057ab00
    MOV EDI,dword ptr [EBP + -0x8]      ; 0057ab03
    PUSH EDI                            ; 0057ab06
    MOV EAX,ECX                         ; 0057ab07
    SHR ECX,0x2                         ; 0057ab09
    MOVSD.REP ES:EDI,ESI                ; 0057ab0c
    MOV CL,AL                           ; 0057ab0e
    AND CL,0x3                          ; 0057ab10
    MOVSB.REP ES:EDI,ESI                ; 0057ab13
    POP EDI                             ; 0057ab15
    JMP 0x0057aa91                      ; 0057ab16
        ;   XREF to: 0057aa91 (UNCONDITIONAL_JUMP)  ; LAB_0057aa91

