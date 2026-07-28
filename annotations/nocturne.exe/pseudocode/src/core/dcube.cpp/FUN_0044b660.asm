; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_0044b660(char *param_1)
;
; Local Variables:
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_rt_0057bdef
;   TerminatedCString s_help_0057bdf2
;   undefined4 DAT_005b7620
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fgets_FUN_00564b20
;   engine_2d.c_clearInputAndWait_FUN_00403f50
;   engine_2d.c_drawText_FUN_00402600
;   engine_dosio.cpp_getFile_FUN_00456a60
;   engine_special.cpp_clearScreen_FUN_0052ee70
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;   wincore_winrun.cpp_getNextKeypress_FUN_00558b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b660
        ;   Label: core_dcube.cpp_FUN_0044b660
    PUSH ESI                            ; 0044b661
    PUSH EDI                            ; 0044b662
    PUSH EBP                            ; 0044b663
    MOV EBP,ESP                         ; 0044b664
    SUB ESP,0x58                        ; 0044b666
    MOV dword ptr [EBP + -0x4],0x0      ; 0044b66c
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0044b673
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    MOV EAX,0x57bdef                    ; 0044b678 | = "rt"
    PUSH EAX                            ; 0044b67d | = "rt"
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b67e
    PUSH EAX                            ; 0044b681
    MOV EAX,0x57bdf2                    ; 0044b682 | = "help"
    PUSH EAX                            ; 0044b687 | = "help"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 0044b688
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_getFile_FUN_00456a60(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0044b68d
    MOV dword ptr [EBP + -0x8],EAX      ; 0044b690
    CMP dword ptr [EBP + -0x8],0x0      ; 0044b693
    JZ 0x0044b70a                       ; 0044b697
        ;   XREF to: 0044b70a (CONDITIONAL_JUMP)  ; LAB_0044b70a
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 0044b699
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    MOV EAX,dword ptr [EBP + -0x8]      ; 0044b69e
        ;   Label: LAB_0044b69e
    PUSH EAX                            ; 0044b6a1
    PUSH 0x4f                           ; 0044b6a2
    LEA EAX,[EBP + -0x58]               ; 0044b6a4
    PUSH EAX                            ; 0044b6a7
    CALL crt_stdio.c_fgets_FUN_00564b20 ; 0044b6a8
        ;   XREF to: 00564b20 (UNCONDITIONAL_CALL)  ; char * crt_stdio.c_fgets_FUN_00564b20(char * str, int num, _FILE * stream)
    ADD ESP,0xc                         ; 0044b6ad
    TEST EAX,EAX                        ; 0044b6b0
    JZ 0x0044b6f4                       ; 0044b6b2
        ;   XREF to: 0044b6f4 (CONDITIONAL_JUMP)  ; LAB_0044b6f4
    MOV EAX,dword ptr [EBP + -0x4]      ; 0044b6b4
    PUSH EAX                            ; 0044b6b7
    PUSH 0x0                            ; 0044b6b8
    LEA EAX,[EBP + -0x58]               ; 0044b6ba
    PUSH EAX                            ; 0044b6bd
    CALL engine_2d.c_drawText_FUN_00402600 ; 0044b6be
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 0044b6c3
    ADD dword ptr [EBP + -0x4],0xb      ; 0044b6c6
    MOV EAX,[0x005b7620]                ; 0044b6ca | DAT_005b7620
    SUB EAX,0xb                         ; 0044b6cf
    CMP EAX,dword ptr [EBP + -0x4]      ; 0044b6d2
    JGE 0x0044b6f2                      ; 0044b6d5
        ;   XREF to: 0044b6f2 (CONDITIONAL_JUMP)  ; LAB_0044b6f2
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0044b6d7
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 0044b6dc
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0044b6e1
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
    CALL engine_special.cpp_clearScreen_FUN_0052ee70 ; 0044b6e6
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0052ee70()
    MOV dword ptr [EBP + -0x4],0x0      ; 0044b6eb
    JMP 0x0044b69e                      ; 0044b6f2
        ;   XREF to: 0044b69e (UNCONDITIONAL_JUMP)  ; LAB_0044b69e
        ;   Label: LAB_0044b6f2
    MOV EAX,dword ptr [EBP + -0x8]      ; 0044b6f4
        ;   Label: LAB_0044b6f4
    PUSH EAX                            ; 0044b6f7
    CALL crt_stdio.c_fclose_FUN_00563380 ; 0044b6f8
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    ADD ESP,0x4                         ; 0044b6fd
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 0044b700
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_00558b00 ; 0044b705
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_00558b00()
    CALL engine_2d.c_clearInputAndWait_FUN_00403f50 ; 0044b70a
        ;   XREF to: 00403f50 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403f50()
        ;   Label: LAB_0044b70a
    MOV ESP,EBP                         ; 0044b70f
    POP EBP                             ; 0044b711
    POP EDI                             ; 0044b712
    POP ESI                             ; 0044b713
    POP EBX                             ; 0044b714
    RET                                 ; 0044b715

