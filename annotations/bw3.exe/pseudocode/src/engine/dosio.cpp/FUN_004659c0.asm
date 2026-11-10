; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl engine_dosio_cpp_FUN_004659c0(char *directory,char *filename,char *mode)
;
; Parameters:
; char *           Stack[0x4]:4   directory
; char *           Stack[0x8]:4   filename
; char *           Stack[0xc]:4   mode
; Local Variables:
; undefined        Stack[-0x220]:1  local_220
; undefined        Stack[-0x120]:1  local_120
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[43]:
;   cockpit_ckptutil.c_FUN_004367e0 at 004367fa
;   cockpit_ckptutil.c_FUN_00436a50 at 00436a75
;   cockpit_ckptutil.c_rotateBitmap_FUN_00437c50 at 00437c81
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160 at 0051018b
;   cockpit_pkbmpset.cpp_FUN_0051080e at 0051085a
;   cockpit_pkbmpset.cpp_FUN_00510a90 at 00510aaf
;   core_cloth.cpp_FUN_0043c330 at 0043c353
;   core_course.cpp_FUN_00444970 at 00444993
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c1d0
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044f7d8
;   ... and 33 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005a4120
;   crt_stdio.c_fopen_FUN_005a43ec
;   crt_stdio.c_fseek_FUN_005a457c
;   engine_dosio.cpp_findFile_FUN_004656d0
;   engine_dosio.cpp_FUN_00465660
;   unkafter_dosio.cpp_FUN_00466190
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004659c0
        ;   Label: engine_dosio.cpp_FUN_004659c0
    PUSH ESI                            ; 004659c1
    PUSH EDI                            ; 004659c2
    SUB ESP,0x214                       ; 004659c3
    MOV EDI,dword ptr [ESP + 0x224]     ; 004659c9
    MOV ESI,dword ptr [ESP + 0x22c]     ; 004659d0
    MOV EDX,dword ptr [ESP + 0x228]     ; 004659d7
    PUSH EDX                            ; 004659de
    PUSH EDI                            ; 004659df
    LEA EAX,[ESP + 0x8]                 ; 004659e0
    PUSH EAX                            ; 004659e4
    MOV EBX,ESI                         ; 004659e5
    CALL engine_dosio.cpp_FUN_00465660  ; 004659e7
        ;   XREF to: 00465660 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00465660()
    MOV AH,byte ptr [ESI]               ; 004659ec
    ADD ESP,0xc                         ; 004659ee
    TEST AH,AH                          ; 004659f1
    JZ 0x00465a34                       ; 004659f3
        ;   XREF to: 00465a34 (CONDITIONAL_JUMP)  ; LAB_00465a34
    XOR EAX,EAX                         ; 004659f5
        ;   Label: LAB_004659f5
    MOV AL,byte ptr [EBX]               ; 004659f7
    PUSH EAX                            ; 004659f9
    CALL crt_ctype.c_toupper_FUN_005a4120 ; 004659fa
        ;   XREF to: 005a4120 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005a4120(int c)
    ADD ESP,0x4                         ; 004659ff
    CMP EAX,0x57                        ; 00465a02
    JNZ 0x00465a2c                      ; 00465a05
        ;   XREF to: 00465a2c (CONDITIONAL_JUMP)  ; LAB_00465a2c
    TEST EDI,EDI                        ; 00465a07
    JZ 0x00465a14                       ; 00465a09
        ;   XREF to: 00465a14 (CONDITIONAL_JUMP)  ; LAB_00465a14
    PUSH EDI                            ; 00465a0b
    CALL unkafter_dosio.cpp_FUN_00466190 ; 00465a0c
        ;   XREF to: 00466190 (UNCONDITIONAL_CALL)  ; undefined unkafter_dosio.cpp_FUN_00466190()
    ADD ESP,0x4                         ; 00465a11
    PUSH ESI                            ; 00465a14
        ;   Label: LAB_00465a14
    LEA EAX,[ESP + 0x4]                 ; 00465a15
    PUSH EAX                            ; 00465a19
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00465a1a
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 00465a1f
    ADD ESP,0x214                       ; 00465a22
        ;   Label: LAB_00465a22
    POP EDI                             ; 00465a28
    POP ESI                             ; 00465a29
    POP EBX                             ; 00465a2a
    RET                                 ; 00465a2b
    MOV DL,byte ptr [EBX + 0x1]         ; 00465a2c
        ;   Label: LAB_00465a2c
    INC EBX                             ; 00465a2f
    TEST DL,DL                          ; 00465a30
    JNZ 0x004659f5                      ; 00465a32
        ;   XREF to: 004659f5 (CONDITIONAL_JUMP)  ; LAB_004659f5
    MOV EAX,ESP                         ; 00465a34
        ;   Label: LAB_00465a34
    PUSH EAX                            ; 00465a36
    CALL engine_dosio.cpp_findFile_FUN_004656d0 ; 00465a37
        ;   XREF to: 004656d0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_004656d0()
    ADD ESP,0x4                         ; 00465a3c
    TEST EAX,EAX                        ; 00465a3f
    JZ 0x00465a22                       ; 00465a41
        ;   XREF to: 00465a22 (CONDITIONAL_JUMP)  ; LAB_00465a22
    PUSH ESI                            ; 00465a43
    LEA EAX,[ESP + 0x104]               ; 00465a44
    PUSH EAX                            ; 00465a4b
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 00465a4c
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 00465a51
    MOV EBX,EAX                         ; 00465a54
    TEST EAX,EAX                        ; 00465a56
    JZ 0x00465a22                       ; 00465a58
        ;   XREF to: 00465a22 (CONDITIONAL_JUMP)  ; LAB_00465a22
    MOV ECX,dword ptr [ESP + 0x200]     ; 00465a5a
    TEST ECX,ECX                        ; 00465a61
    JZ 0x00465a71                       ; 00465a63
        ;   XREF to: 00465a71 (CONDITIONAL_JUMP)  ; LAB_00465a71
    PUSH 0x0                            ; 00465a65
    PUSH ECX                            ; 00465a67
    PUSH EAX                            ; 00465a68
    CALL crt_stdio.c_fseek_FUN_005a457c ; 00465a69
        ;   XREF to: 005a457c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005a457c()
    ADD ESP,0xc                         ; 00465a6e
    MOV EAX,EBX                         ; 00465a71
        ;   Label: LAB_00465a71
    ADD ESP,0x214                       ; 00465a73
    POP EDI                             ; 00465a79
    POP ESI                             ; 00465a7a
    POP EBX                             ; 00465a7b
    RET                                 ; 00465a7c

