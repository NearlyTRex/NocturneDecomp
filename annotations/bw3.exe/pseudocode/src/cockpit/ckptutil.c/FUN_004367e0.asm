; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_FUN_004367e0(char *param_1,int *param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fread_FUN_005a3890
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005a3770
;   crt_unknown.c_printf_FUN_005a40f0
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004367e0
        ;   Label: cockpit_ckptutil.c_FUN_004367e0
    PUSH ESI                            ; 004367e1
    PUSH EDI                            ; 004367e2
    PUSH EBP                            ; 004367e3
    SUB ESP,0x58                        ; 004367e4
    MOV EBX,dword ptr [ESP + 0x70]      ; 004367e7
    PUSH 0x5b89ce                       ; 004367eb
    MOV EDX,dword ptr [ESP + 0x70]      ; 004367f0
    PUSH EDX                            ; 004367f4
    PUSH 0x5b89d1                       ; 004367f5
    CALL engine_dosio.cpp_FUN_004659c0  ; 004367fa
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 004367ff
    MOV dword ptr [ESP + 0x54],EAX      ; 00436802
    TEST EAX,EAX                        ; 00436806
    JNZ 0x00436842                      ; 00436808
        ;   XREF to: 00436842 (CONDITIONAL_JUMP)  ; LAB_00436842
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0043680a
    PUSH ECX                            ; 0043680e
    PUSH 0x5b89d5                       ; 0043680f
    LEA EAX,[ESP + 0x8]                 ; 00436814
    PUSH EAX                            ; 00436818
    MOV ESI,0x5b89f9                    ; 00436819
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0043681e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00436823
    MOV EAX,ESP                         ; 00436826
    MOV EDI,0x486                       ; 00436828
    PUSH EAX                            ; 0043682d
    MOV dword ptr [0x01d71de0],ESI      ; 0043682e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00436834 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043683a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0043683f
    MOV EBP,dword ptr [ESP + 0x54]      ; 00436842
        ;   Label: LAB_00436842
    PUSH EBP                            ; 00436846
    PUSH 0x1                            ; 00436847
    PUSH 0x4                            ; 00436849
    LEA EAX,[ESP + 0x5c]                ; 0043684b
    PUSH EAX                            ; 0043684f
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00436850
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00436855
    CMP EAX,0x1                         ; 00436858
    JZ 0x00436895                       ; 0043685b
        ;   XREF to: 00436895 (CONDITIONAL_JUMP)  ; LAB_00436895
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0043685d
    PUSH EAX                            ; 00436861
    PUSH 0x5b8a0f                       ; 00436862
    LEA EAX,[ESP + 0x8]                 ; 00436867
    PUSH EAX                            ; 0043686b
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0043686c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5b8a39                    ; 00436871
    ADD ESP,0xc                         ; 00436876
    MOV EAX,ESP                         ; 00436879
    MOV ECX,0x48f                       ; 0043687b
    PUSH EAX                            ; 00436880
    MOV dword ptr [0x01d71de0],EDX      ; 00436881 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00436887 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043688d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00436892
    MOV EAX,dword ptr [ESP + 0x50]      ; 00436895
        ;   Label: LAB_00436895
    CMP EAX,dword ptr [ESP + 0x74]      ; 00436899
    JZ 0x004368d6                       ; 0043689d
        ;   XREF to: 004368d6 (CONDITIONAL_JUMP)  ; LAB_004368d6
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0043689f
    PUSH EDI                            ; 004368a3
    PUSH 0x5b8a4f                       ; 004368a4
    LEA EAX,[ESP + 0x8]                 ; 004368a9
    PUSH EAX                            ; 004368ad
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004368ae
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EAX,0x498                       ; 004368b3
    ADD ESP,0xc                         ; 004368b8
    MOV [0x01d71de4],EAX                ; 004368bb | DAT_01d71de4
    MOV EAX,ESP                         ; 004368c0
    MOV EBP,0x5b8a7a                    ; 004368c2
    PUSH EAX                            ; 004368c7
    MOV dword ptr [0x01d71de0],EBP      ; 004368c8 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 004368ce
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004368d3
    MOV EDX,dword ptr [ESP + 0x74]      ; 004368d6
        ;   Label: LAB_004368d6
    XOR EDI,EDI                         ; 004368da
    TEST EDX,EDX                        ; 004368dc
    JLE 0x004369c5                      ; 004368de
        ;   XREF to: 004369c5 (CONDITIONAL_JUMP)  ; LAB_004369c5
    LEA ESI,[EBX + 0x4]                 ; 004368e4
    MOV EBP,dword ptr [ESP + 0x54]      ; 004368e7
        ;   Label: LAB_004368e7
    PUSH EBP                            ; 004368eb
    PUSH 0x1                            ; 004368ec
    PUSH 0x4                            ; 004368ee
    PUSH ESI                            ; 004368f0
    CALL crt_stdio.c_fread_FUN_005a3890 ; 004368f1
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 004368f6
    CMP EAX,0x1                         ; 004368f9
    JZ 0x00436936                       ; 004368fc
        ;   XREF to: 00436936 (CONDITIONAL_JUMP)  ; LAB_00436936
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004368fe
    PUSH EAX                            ; 00436902
    PUSH 0x5b8a90                       ; 00436903
    LEA EAX,[ESP + 0x8]                 ; 00436908
    PUSH EAX                            ; 0043690c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0043690d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5b8ab5                    ; 00436912
    ADD ESP,0xc                         ; 00436917
    MOV EAX,ESP                         ; 0043691a
    MOV ECX,0x4a3                       ; 0043691c
    PUSH EAX                            ; 00436921
    MOV dword ptr [0x01d71de0],EDX      ; 00436922 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00436928 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043692e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00436933
    MOV EBP,dword ptr [EBX]             ; 00436936
        ;   Label: LAB_00436936
    TEST EBP,EBP                        ; 00436938
    JZ 0x00436945                       ; 0043693a
        ;   XREF to: 00436945 (CONDITIONAL_JUMP)  ; LAB_00436945
    PUSH EBP                            ; 0043693c
    CALL crt_unknown.c_FUN_005a3770     ; 0043693d
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00436942
    MOV EDX,dword ptr [EBX + 0x4]       ; 00436945
        ;   Label: LAB_00436945
    TEST EDX,EDX                        ; 00436948
    JLE 0x004369b2                      ; 0043694a
        ;   XREF to: 004369b2 (CONDITIONAL_JUMP)  ; LAB_004369b2
    LEA EBP,[EDX*0x8 + 0x0]             ; 0043694c
    PUSH EBP                            ; 00436953
    CALL crt_unknown.c_FUN_005a3650     ; 00436954
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00436959
    MOV dword ptr [EBX],EAX             ; 0043695c
    TEST EAX,EAX                        ; 0043695e
    JZ 0x004369da                       ; 00436960
        ;   XREF to: 004369da (CONDITIONAL_JUMP)  ; LAB_004369da
    MOV ECX,dword ptr [ESP + 0x54]      ; 00436962
        ;   Label: LAB_00436962
    PUSH ECX                            ; 00436966
    PUSH 0x1                            ; 00436967
    PUSH EBP                            ; 00436969
    MOV EBP,dword ptr [EBX]             ; 0043696a
    PUSH EBP                            ; 0043696c
    CALL crt_stdio.c_fread_FUN_005a3890 ; 0043696d
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00436972
    CMP EAX,0x1                         ; 00436975
    JZ 0x004369b2                       ; 00436978
        ;   XREF to: 004369b2 (CONDITIONAL_JUMP)  ; LAB_004369b2
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0043697a
    PUSH EAX                            ; 0043697e
    PUSH 0x5b8b0c                       ; 0043697f
    LEA EAX,[ESP + 0x8]                 ; 00436984
    PUSH EAX                            ; 00436988
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 00436989
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV EDX,0x5b8b2b                    ; 0043698e
    ADD ESP,0xc                         ; 00436993
    MOV EAX,ESP                         ; 00436996
    MOV ECX,0x4c0                       ; 00436998
    PUSH EAX                            ; 0043699d
    MOV dword ptr [0x01d71de0],EDX      ; 0043699e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004369a4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004369aa
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004369af
    MOV ECX,dword ptr [ESP + 0x74]      ; 004369b2
        ;   Label: LAB_004369b2
    ADD ESI,0x8                         ; 004369b6
    INC EDI                             ; 004369b9
    ADD EBX,0x8                         ; 004369ba
    CMP EDI,ECX                         ; 004369bd
    JL 0x004368e7                       ; 004369bf
        ;   XREF to: 004368e7 (CONDITIONAL_JUMP)  ; LAB_004368e7
    MOV EBX,dword ptr [ESP + 0x54]      ; 004369c5
        ;   Label: LAB_004369c5
    PUSH EBX                            ; 004369c9
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 004369ca
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 004369cf
    ADD ESP,0x58                        ; 004369d2
    POP EBP                             ; 004369d5
    POP EDI                             ; 004369d6
    POP ESI                             ; 004369d7
    POP EBX                             ; 004369d8
    RET                                 ; 004369d9
    PUSH 0x5b8acb                       ; 004369da
        ;   Label: LAB_004369da
    CALL crt_unknown.c_printf_FUN_005a40f0 ; 004369df
        ;   XREF to: 005a40f0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_printf_FUN_005a40f0(char * format)
    MOV EAX,0x5b8af6                    ; 004369e4
    ADD ESP,0x4                         ; 004369e9
    MOV [0x01d71de0],EAX                ; 004369ec | DAT_01d71de0
    MOV EAX,ESP                         ; 004369f1
    MOV EDX,0x4b9                       ; 004369f3
    PUSH EAX                            ; 004369f8
    MOV dword ptr [0x01d71de4],EDX      ; 004369f9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004369ff
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00436a04
    JMP 0x00436962                      ; 00436a07
        ;   XREF to: 00436962 (UNCONDITIONAL_JUMP)  ; LAB_00436962

