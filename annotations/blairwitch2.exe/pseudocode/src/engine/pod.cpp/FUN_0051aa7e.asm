; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool engine_pod_cpp_FUN_0051aa7e(int *param_1)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgetc_FUN_005b8180
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_fread_FUN_005b87c0
;   crt_stdio.c_fseek_FUN_005b929c
;   engine_dosio.cpp_getFileSize_FUN_00460aa0
;   engine_pod.cpp_crc32UpdateByte_FUN_00519cb0
;   engine_pod.cpp_FUN_0051af80
;   shape_edittool.cpp_CPickList_ctor_FUN_00481fc0
;   shape_edittool.cpp_CPickList_dtor_FUN_004820b0
;   shape_edittool.cpp_CStrList_add_FUN_00480e70
;   shape_edittool.cpp_FUN_0047be90
;   shape_edittool.cpp_FUN_0047db40
;   shape_edittool.cpp_FUN_0047dc40
;   ... and 2 more
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0051aa7e
        ;   Label: engine_pod.cpp_FUN_0051aa7e
    PUSH EBX                            ; 0051aa80
    PUSH ESI                            ; 0051aa81
    PUSH EDI                            ; 0051aa82
    PUSH EBP                            ; 0051aa83
    SUB ESP,0x3d0                       ; 0051aa84
    MOV EBX,dword ptr [ESP + 0x3e4]     ; 0051aa8a
    MOV EDX,dword ptr [EBX]             ; 0051aa91
    TEST EDX,EDX                        ; 0051aa93
    JZ 0x0051abba                       ; 0051aa95
        ;   XREF to: 0051abba (CONDITIONAL_JUMP)  ; LAB_0051abba
    CMP byte ptr [EBX + 0x4],0x0        ; 0051aa9b
    JZ 0x0051abba                       ; 0051aa9f
        ;   XREF to: 0051abba (CONDITIONAL_JUMP)  ; LAB_0051abba
    CMP EDX,0xc8                        ; 0051aaa5
    JZ 0x0051abc9                       ; 0051aaab
        ;   XREF to: 0051abc9 (CONDITIONAL_JUMP)  ; LAB_0051abc9
    MOV EDI,dword ptr [EBX]             ; 0051aab1
        ;   Label: LAB_0051aab1
    MOV ESI,0xffffffff                  ; 0051aab3
    CMP EDI,0x1                         ; 0051aab8
    JNZ 0x0051acf6                      ; 0051aabb
        ;   XREF to: 0051acf6 (CONDITIONAL_JUMP)  ; LAB_0051acf6
    MOV ESI,0x54                        ; 0051aac1
    LEA EDI,[EBX + 0x4]                 ; 0051aac6
        ;   Label: LAB_0051aac6
    PUSH EDI                            ; 0051aac9
    PUSH 0x5e2557                       ; 0051aaca
    MOV EBP,dword ptr [0x006138e0]      ; 0051aacf | g_CEditorToolsPtr
    PUSH EBP                            ; 0051aad5
    CALL shape_edittool.cpp_FUN_0047be90 ; 0051aad6
        ;   XREF to: 0047be90 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047be90()
    ADD ESP,0xc                         ; 0051aadb
    PUSH 0x5e256f                       ; 0051aade
    PUSH EDI                            ; 0051aae3
    CALL crt_stdio.c_fopen_FUN_005b910c ; 0051aae4
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    MOV EBX,EAX                         ; 0051aae9
    ADD ESP,0x8                         ; 0051aaeb
    TEST EAX,EAX                        ; 0051aaee
    JZ 0x0051ad0d                       ; 0051aaf0
        ;   XREF to: 0051ad0d (CONDITIONAL_JUMP)  ; LAB_0051ad0d
    PUSH 0x0                            ; 0051aaf6
    LEA EAX,[ESI + -0x4]                ; 0051aaf8
    PUSH EAX                            ; 0051aafb
    PUSH EBX                            ; 0051aafc
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051aafd
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 0051ab02
    PUSH EBX                            ; 0051ab05
    PUSH 0x1                            ; 0051ab06
    PUSH 0x4                            ; 0051ab08
    LEA EAX,[ESP + 0x3cc]               ; 0051ab0a
    PUSH EAX                            ; 0051ab11
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 0051ab12
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005b87c0()
    ADD ESP,0x10                        ; 0051ab17
    PUSH EBX                            ; 0051ab1a
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0051ab1b
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0051ab20
    PUSH EDI                            ; 0051ab23
    PUSH 0x5e2403                       ; 0051ab24
    CALL engine_dosio.cpp_getFileSize_FUN_00460aa0 ; 0051ab29
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; int engine_dosio.cpp_getFileSize_FUN_00460aa0(char * directory, char * filename)
    ADD ESP,0x8                         ; 0051ab2e
    PUSH 0x5e2404                       ; 0051ab31
    SUB EAX,ESI                         ; 0051ab36
    PUSH EDI                            ; 0051ab38
    MOV dword ptr [ESP + 0x3cc],EAX     ; 0051ab39
    CALL crt_stdio.c_fopen_FUN_005b910c ; 0051ab40
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 0051ab45
    PUSH 0x0                            ; 0051ab48
    PUSH ESI                            ; 0051ab4a
    PUSH EAX                            ; 0051ab4b
    MOV EBP,EAX                         ; 0051ab4c
    MOV dword ptr [ESP + 0x3d4],EAX     ; 0051ab4e
    CALL crt_stdio.c_fseek_FUN_005b929c ; 0051ab55
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 0051ab5a
    XOR EBX,EBX                         ; 0051ab5d
    MOV EDI,dword ptr [ESP + 0x3c4]     ; 0051ab5f
    MOV ESI,0xffffffff                  ; 0051ab66
    TEST EDI,EDI                        ; 0051ab6b
    JLE 0x0051ab90                      ; 0051ab6d
        ;   XREF to: 0051ab90 (CONDITIONAL_JUMP)  ; LAB_0051ab90
    PUSH EBP                            ; 0051ab6f
        ;   Label: LAB_0051ab6f
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 0051ab70
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 0051ab75
    AND EAX,0xff                        ; 0051ab78
    PUSH EAX                            ; 0051ab7d
    PUSH ESI                            ; 0051ab7e
    INC EBX                             ; 0051ab7f
    CALL engine_pod.cpp_crc32UpdateByte_FUN_00519cb0 ; 0051ab80
        ;   XREF to: 00519cb0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_00519cb0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0051ab85
    MOV ESI,EAX                         ; 0051ab88
    CMP EBX,EDI                         ; 0051ab8a
    JL 0x0051ab6f                       ; 0051ab8c
        ;   XREF to: 0051ab6f (CONDITIONAL_JUMP)  ; LAB_0051ab6f
    MOV EAX,EAX                         ; 0051ab8e
    MOV EDX,dword ptr [ESP + 0x3c8]     ; 0051ab90
        ;   Label: LAB_0051ab90
    PUSH EDX                            ; 0051ab97
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 0051ab98
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 0051ab9d
    CMP ESI,dword ptr [ESP + 0x3c0]     ; 0051aba0
    SETZ AL                             ; 0051aba7
    MOVZX ESI,AL                        ; 0051abaa
    MOV EAX,ESI                         ; 0051abad
    ADD ESP,0x3d0                       ; 0051abaf
    POP EBP                             ; 0051abb5
    POP EDI                             ; 0051abb6
    POP ESI                             ; 0051abb7
    POP EBX                             ; 0051abb8
    RET                                 ; 0051abb9
    XOR ESI,ESI                         ; 0051abba
        ;   Label: LAB_0051abba
    MOV EAX,ESI                         ; 0051abbc
    ADD ESP,0x3d0                       ; 0051abbe
    POP EBP                             ; 0051abc4
    POP EDI                             ; 0051abc5
    POP ESI                             ; 0051abc6
    POP EBX                             ; 0051abc7
    RET                                 ; 0051abc8
    PUSH 0x5e24e2                       ; 0051abc9
        ;   Label: LAB_0051abc9
    MOV ESI,dword ptr [0x006138e0]      ; 0051abce | g_CEditorToolsPtr
    PUSH ESI                            ; 0051abd4
    CALL shape_edittool.cpp_FUN_0047db40 ; 0051abd5
        ;   XREF to: 0047db40 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_0047db40(CEditorTools * this_ptr, char * message_text)
    ADD ESP,0x8                         ; 0051abda
    MOV EAX,ESP                         ; 0051abdd
    PUSH EAX                            ; 0051abdf
    XOR EDI,EDI                         ; 0051abe0
    CALL shape_edittool.cpp_CPickList_ctor_FUN_00481fc0 ; 0051abe2
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_00481fc0(CPickList * this_ptr)
    MOV EBP,dword ptr [EBX + 0x410]     ; 0051abe7
    ADD ESP,0x4                         ; 0051abed
    TEST EBP,EBP                        ; 0051abf0
    JLE 0x0051ac9a                      ; 0051abf2
        ;   XREF to: 0051ac9a (CONDITIONAL_JUMP)  ; LAB_0051ac9a
    XOR ESI,ESI                         ; 0051abf8
    MOV EAX,dword ptr [EBX + 0x410]     ; 0051abfa
        ;   Label: LAB_0051abfa
    DEC EAX                             ; 0051ac00
    IMUL ECX,EAX,0x14                   ; 0051ac01
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051ac04
    MOV EDX,dword ptr [ECX + EAX*0x1 + 0x8] ; 0051ac0a
    MOV EBP,dword ptr [ECX + EAX*0x1 + 0x4] ; 0051ac0e
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051ac12
    ADD EDX,EBP                         ; 0051ac15
    SUB EDX,ECX                         ; 0051ac17
    MOV dword ptr [ESP + 0x3cc],EDX     ; 0051ac19
    FILD dword ptr [ESP + 0x3cc]        ; 0051ac20
    SUB ESP,0x4                         ; 0051ac27
    LEA EDX,[EAX + ESI*0x1]             ; 0051ac2a
    FSTP float ptr [ESP]                ; 0051ac2d
    MOV EDX,dword ptr [EDX + 0x8]       ; 0051ac30
    SUB EDX,ECX                         ; 0051ac33
    MOV dword ptr [ESP + 0x3d0],EDX     ; 0051ac35
    FILD dword ptr [ESP + 0x3d0]        ; 0051ac3c
    SUB ESP,0x4                         ; 0051ac43
    MOV EAX,[0x006138e0]                ; 0051ac46 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 0051ac4b
    PUSH EAX                            ; 0051ac4e
    CALL shape_edittool.cpp_FUN_0047dc40 ; 0051ac4f
        ;   XREF to: 0047dc40 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047dc40()
    ADD ESP,0xc                         ; 0051ac54
    PUSH EDI                            ; 0051ac57
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051ac58
    PUSH EBX                            ; 0051ac5e
    LEA EBP,[EAX + ESI*0x1]             ; 0051ac5f
    CALL engine_pod.cpp_FUN_0051af80    ; 0051ac62
        ;   XREF to: 0051af80 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_FUN_0051af80()
    MOV EDX,dword ptr [EBP + 0x10]      ; 0051ac67
    ADD ESP,0x8                         ; 0051ac6a
    CMP EAX,EDX                         ; 0051ac6d
    JZ 0x0051ac88                       ; 0051ac6f
        ;   XREF to: 0051ac88 (CONDITIONAL_JUMP)  ; LAB_0051ac88
    MOV EAX,dword ptr [EBX + 0x414]     ; 0051ac71
    MOV ECX,dword ptr [ESI + EAX*0x1]   ; 0051ac77
    PUSH ECX                            ; 0051ac7a
    LEA EAX,[ESP + 0x4]                 ; 0051ac7b
    PUSH EAX                            ; 0051ac7f
    CALL shape_edittool.cpp_CStrList_add_FUN_00480e70 ; 0051ac80
        ;   XREF to: 00480e70 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00480e70(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0051ac85
    INC EDI                             ; 0051ac88
        ;   Label: LAB_0051ac88
    MOV EAX,dword ptr [EBX + 0x410]     ; 0051ac89
    ADD ESI,0x14                        ; 0051ac8f
    CMP EDI,EAX                         ; 0051ac92
    JL 0x0051abfa                       ; 0051ac94
        ;   XREF to: 0051abfa (CONDITIONAL_JUMP)  ; LAB_0051abfa
    MOV EDX,dword ptr [0x006138e0]      ; 0051ac9a | g_CEditorToolsPtr
        ;   Label: LAB_0051ac9a
    PUSH EDX                            ; 0051aca0
    CALL shape_edittool.cpp_FUN_0047e760 ; 0051aca1
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047e760()
    ADD ESP,0x4                         ; 0051aca6
    MOV ECX,dword ptr [ESP]             ; 0051aca9
    TEST ECX,ECX                        ; 0051acac
    JNZ 0x0051acc3                      ; 0051acae
        ;   XREF to: 0051acc3 (CONDITIONAL_JUMP)  ; LAB_0051acc3
    PUSH ECX                            ; 0051acb0
    LEA EAX,[ESP + 0x4]                 ; 0051acb1
    PUSH EAX                            ; 0051acb5
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 0051acb6
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051acbb
    JMP 0x0051aab1                      ; 0051acbe
        ;   XREF to: 0051aab1 (UNCONDITIONAL_JUMP)  ; LAB_0051aab1
    PUSH 0x0                            ; 0051acc3
        ;   Label: LAB_0051acc3
    PUSH -0x1                           ; 0051acc5
    PUSH 0x5e2500                       ; 0051acc7
    LEA EAX,[ESP + 0xc]                 ; 0051accc
    PUSH EAX                            ; 0051acd0
    CALL shape_edittool.cpp_FUN_00482250 ; 0051acd1
        ;   XREF to: 00482250 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00482250(CPickList * this_ptr, char * dialog_title, int initial_selected_index, uint window_flags)
    ADD ESP,0x10                        ; 0051acd6
    XOR ESI,ESI                         ; 0051acd9
    PUSH ESI                            ; 0051acdb
    LEA EAX,[ESP + 0x4]                 ; 0051acdc
    PUSH EAX                            ; 0051ace0
    CALL shape_edittool.cpp_CPickList_dtor_FUN_004820b0 ; 0051ace1
        ;   XREF to: 004820b0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_dtor_FUN_004820b0(CPickList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0051ace6
    MOV EAX,ESI                         ; 0051ace9
    ADD ESP,0x3d0                       ; 0051aceb
    POP EBP                             ; 0051acf1
    POP EDI                             ; 0051acf2
    POP ESI                             ; 0051acf3
    POP EBX                             ; 0051acf4
    RET                                 ; 0051acf5
    CMP EDI,0xc8                        ; 0051acf6
        ;   Label: LAB_0051acf6
    JNZ 0x0051ad08                      ; 0051acfc
        ;   XREF to: 0051ad08 (CONDITIONAL_JUMP)  ; LAB_0051ad08
    MOV ESI,0x8                         ; 0051acfe
    JMP 0x0051aac6                      ; 0051ad03
        ;   XREF to: 0051aac6 (UNCONDITIONAL_JUMP)  ; LAB_0051aac6
    CMP EDI,0x64                        ; 0051ad08
        ;   Label: LAB_0051ad08
    JNZ 0x0051ad1c                      ; 0051ad0b
        ;   XREF to: 0051ad1c (CONDITIONAL_JUMP)  ; LAB_0051ad1c
    XOR ESI,ESI                         ; 0051ad0d
        ;   Label: LAB_0051ad0d
    MOV EAX,ESI                         ; 0051ad0f
    ADD ESP,0x3d0                       ; 0051ad11
    POP EBP                             ; 0051ad17
    POP EDI                             ; 0051ad18
    POP ESI                             ; 0051ad19
    POP EBX                             ; 0051ad1a
    RET                                 ; 0051ad1b
    PUSH EDI                            ; 0051ad1c
        ;   Label: LAB_0051ad1c
    LEA EAX,[EBX + 0x4]                 ; 0051ad1d
    PUSH EAX                            ; 0051ad20
    MOV EDX,0x5e2526                    ; 0051ad21
    MOV ECX,0x32c                       ; 0051ad26
    PUSH 0x5e2538                       ; 0051ad2b
    MOV dword ptr [0x01d046a0],EDX      ; 0051ad30 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0051ad36 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0051ad3c
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0xc                         ; 0051ad41
    JMP 0x0051aac6                      ; 0051ad44
        ;   XREF to: 0051aac6 (UNCONDITIONAL_JUMP)  ; LAB_0051aac6

