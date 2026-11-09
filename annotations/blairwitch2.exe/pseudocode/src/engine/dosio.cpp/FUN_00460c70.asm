; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl engine_dosio_cpp_FUN_00460c70(char *directory,char *filename,char *mode)
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
; XREF[44]:
;   cockpit_ckptutil.c_FUN_0042dec0 at 0042deda
;   cockpit_ckptutil.c_FUN_0042e130 at 0042e155
;   cockpit_ckptutil.c_FUN_0042f330 at 0042f361
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130 at 0051715b
;   cockpit_pkbmpset.cpp_FUN_005177de at 0051782a
;   cockpit_pkbmpset.cpp_FUN_00517a60 at 00517a7f
;   core_cloth.cpp_CCloth_load_FUN_005adeb0 at 005aded3
;   core_course.cpp_CCourse_load_FUN_00438af0 at 00438b13
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930 at 0043e9d0
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00441fd8
;   ... and 34 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005b8e40
;   crt_stdio.c_fopen_FUN_005b910c
;   crt_stdio.c_fseek_FUN_005b929c
;   engine_dosio.cpp_findFile_FUN_00460980
;   engine_dosio.cpp_FUN_00460910
;   unkafter_dosio.cpp_FUN_004613b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460c70
        ;   Label: engine_dosio.cpp_FUN_00460c70
    PUSH ESI                            ; 00460c71
    PUSH EDI                            ; 00460c72
    SUB ESP,0x214                       ; 00460c73
    MOV EDI,dword ptr [ESP + 0x224]     ; 00460c79
    MOV ESI,dword ptr [ESP + 0x22c]     ; 00460c80
    MOV EDX,dword ptr [ESP + 0x228]     ; 00460c87
    PUSH EDX                            ; 00460c8e
    PUSH EDI                            ; 00460c8f
    LEA EAX,[ESP + 0x8]                 ; 00460c90
    PUSH EAX                            ; 00460c94
    MOV EBX,ESI                         ; 00460c95
    CALL engine_dosio.cpp_FUN_00460910  ; 00460c97
        ;   XREF to: 00460910 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00460910()
    MOV AH,byte ptr [ESI]               ; 00460c9c
    ADD ESP,0xc                         ; 00460c9e
    TEST AH,AH                          ; 00460ca1
    JZ 0x00460ce4                       ; 00460ca3
        ;   XREF to: 00460ce4 (CONDITIONAL_JUMP)  ; LAB_00460ce4
    XOR EAX,EAX                         ; 00460ca5
        ;   Label: LAB_00460ca5
    MOV AL,byte ptr [EBX]               ; 00460ca7
    PUSH EAX                            ; 00460ca9
    CALL crt_ctype.c_toupper_FUN_005b8e40 ; 00460caa
        ;   XREF to: 005b8e40 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005b8e40(int c)
    ADD ESP,0x4                         ; 00460caf
    CMP EAX,0x57                        ; 00460cb2
    JNZ 0x00460cdc                      ; 00460cb5
        ;   XREF to: 00460cdc (CONDITIONAL_JUMP)  ; LAB_00460cdc
    TEST EDI,EDI                        ; 00460cb7
    JZ 0x00460cc4                       ; 00460cb9
        ;   XREF to: 00460cc4 (CONDITIONAL_JUMP)  ; LAB_00460cc4
    PUSH EDI                            ; 00460cbb
    CALL unkafter_dosio.cpp_FUN_004613b0 ; 00460cbc
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_dosio.cpp_FUN_004613b0()
    ADD ESP,0x4                         ; 00460cc1
    PUSH ESI                            ; 00460cc4
        ;   Label: LAB_00460cc4
    LEA EAX,[ESP + 0x4]                 ; 00460cc5
    PUSH EAX                            ; 00460cc9
    CALL crt_stdio.c_fopen_FUN_005b910c ; 00460cca
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 00460ccf
    ADD ESP,0x214                       ; 00460cd2
        ;   Label: LAB_00460cd2
    POP EDI                             ; 00460cd8
    POP ESI                             ; 00460cd9
    POP EBX                             ; 00460cda
    RET                                 ; 00460cdb
    MOV DL,byte ptr [EBX + 0x1]         ; 00460cdc
        ;   Label: LAB_00460cdc
    INC EBX                             ; 00460cdf
    TEST DL,DL                          ; 00460ce0
    JNZ 0x00460ca5                      ; 00460ce2
        ;   XREF to: 00460ca5 (CONDITIONAL_JUMP)  ; LAB_00460ca5
    MOV EAX,ESP                         ; 00460ce4
        ;   Label: LAB_00460ce4
    PUSH EAX                            ; 00460ce6
    CALL engine_dosio.cpp_findFile_FUN_00460980 ; 00460ce7
        ;   XREF to: 00460980 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_00460980()
    ADD ESP,0x4                         ; 00460cec
    TEST EAX,EAX                        ; 00460cef
    JZ 0x00460cd2                       ; 00460cf1
        ;   XREF to: 00460cd2 (CONDITIONAL_JUMP)  ; LAB_00460cd2
    PUSH ESI                            ; 00460cf3
    LEA EAX,[ESP + 0x104]               ; 00460cf4
    PUSH EAX                            ; 00460cfb
    CALL crt_stdio.c_fopen_FUN_005b910c ; 00460cfc
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005b910c()
    ADD ESP,0x8                         ; 00460d01
    MOV EBX,EAX                         ; 00460d04
    TEST EAX,EAX                        ; 00460d06
    JZ 0x00460cd2                       ; 00460d08
        ;   XREF to: 00460cd2 (CONDITIONAL_JUMP)  ; LAB_00460cd2
    MOV ECX,dword ptr [ESP + 0x200]     ; 00460d0a
    TEST ECX,ECX                        ; 00460d11
    JZ 0x00460d21                       ; 00460d13
        ;   XREF to: 00460d21 (CONDITIONAL_JUMP)  ; LAB_00460d21
    PUSH 0x0                            ; 00460d15
    PUSH ECX                            ; 00460d17
    PUSH EAX                            ; 00460d18
    CALL crt_stdio.c_fseek_FUN_005b929c ; 00460d19
        ;   XREF to: 005b929c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005b929c()
    ADD ESP,0xc                         ; 00460d1e
    MOV EAX,EBX                         ; 00460d21
        ;   Label: LAB_00460d21
    ADD ESP,0x214                       ; 00460d23
    POP EDI                             ; 00460d29
    POP ESI                             ; 00460d2a
    POP EBX                             ; 00460d2b
    RET                                 ; 00460d2c

