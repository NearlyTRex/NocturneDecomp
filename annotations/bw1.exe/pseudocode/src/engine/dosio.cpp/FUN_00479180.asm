; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl engine_dosio_cpp_FUN_00479180(char *directory,char *filename,char *mode)
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
;   cockpit_ckptutil.c_FUN_00438bd0 at 00438bea
;   cockpit_ckptutil.c_FUN_00438e40 at 00438e65
;   cockpit_ckptutil.c_rotateBitmap_FUN_0043a040 at 0043a071
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480 at 005384ab
;   cockpit_pkbitmap.cpp_FUN_00538750 at 0053877a
;   cockpit_pkbmpset.cpp_FUN_00538b2e at 00538b7a
;   cockpit_pkbmpset.cpp_FUN_00538db0 at 00538dcf
;   core_cloth.cpp_CCloth_load_FUN_0043e6d0 at 0043e6f3
;   core_course.cpp_CCourse_load_FUN_00447db0 at 00447dd3
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 00450090
;   ... and 34 more
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005c12b0
;   crt_stdio.c_fopen_FUN_005c157c
;   crt_stdio.c_fseek_FUN_005c170c
;   engine_dosio.cpp_findFile_FUN_00478e90
;   engine_dosio.cpp_FUN_00478e20
;   engine_dosio.cpp_FUN_004798c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479180
        ;   Label: engine_dosio.cpp_FUN_00479180
    PUSH ESI                            ; 00479181
    PUSH EDI                            ; 00479182
    SUB ESP,0x214                       ; 00479183
    MOV EDI,dword ptr [ESP + 0x224]     ; 00479189
    MOV ESI,dword ptr [ESP + 0x22c]     ; 00479190
    MOV EDX,dword ptr [ESP + 0x228]     ; 00479197
    PUSH EDX                            ; 0047919e
    PUSH EDI                            ; 0047919f
    LEA EAX,[ESP + 0x8]                 ; 004791a0
    PUSH EAX                            ; 004791a4
    MOV EBX,ESI                         ; 004791a5
    CALL engine_dosio.cpp_FUN_00478e20  ; 004791a7
        ;   XREF to: 00478e20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_00478e20()
    MOV AH,byte ptr [ESI]               ; 004791ac
    ADD ESP,0xc                         ; 004791ae
    TEST AH,AH                          ; 004791b1
    JZ 0x004791f4                       ; 004791b3
        ;   XREF to: 004791f4 (CONDITIONAL_JUMP)  ; LAB_004791f4
    XOR EAX,EAX                         ; 004791b5
        ;   Label: LAB_004791b5
    MOV AL,byte ptr [EBX]               ; 004791b7
    PUSH EAX                            ; 004791b9
    CALL crt_ctype.c_toupper_FUN_005c12b0 ; 004791ba
        ;   XREF to: 005c12b0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005c12b0(int c)
    ADD ESP,0x4                         ; 004791bf
    CMP EAX,0x57                        ; 004791c2
    JNZ 0x004791ec                      ; 004791c5
        ;   XREF to: 004791ec (CONDITIONAL_JUMP)  ; LAB_004791ec
    TEST EDI,EDI                        ; 004791c7
    JZ 0x004791d4                       ; 004791c9
        ;   XREF to: 004791d4 (CONDITIONAL_JUMP)  ; LAB_004791d4
    PUSH EDI                            ; 004791cb
    CALL engine_dosio.cpp_FUN_004798c0  ; 004791cc
        ;   XREF to: 004798c0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_FUN_004798c0()
    ADD ESP,0x4                         ; 004791d1
    PUSH ESI                            ; 004791d4
        ;   Label: LAB_004791d4
    LEA EAX,[ESP + 0x4]                 ; 004791d5
    PUSH EAX                            ; 004791d9
    CALL crt_stdio.c_fopen_FUN_005c157c ; 004791da
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 004791df
    ADD ESP,0x214                       ; 004791e2
        ;   Label: LAB_004791e2
    POP EDI                             ; 004791e8
    POP ESI                             ; 004791e9
    POP EBX                             ; 004791ea
    RET                                 ; 004791eb
    MOV DL,byte ptr [EBX + 0x1]         ; 004791ec
        ;   Label: LAB_004791ec
    INC EBX                             ; 004791ef
    TEST DL,DL                          ; 004791f0
    JNZ 0x004791b5                      ; 004791f2
        ;   XREF to: 004791b5 (CONDITIONAL_JUMP)  ; LAB_004791b5
    MOV EAX,ESP                         ; 004791f4
        ;   Label: LAB_004791f4
    PUSH EAX                            ; 004791f6
    CALL engine_dosio.cpp_findFile_FUN_00478e90 ; 004791f7
        ;   XREF to: 00478e90 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_findFile_FUN_00478e90()
    ADD ESP,0x4                         ; 004791fc
    TEST EAX,EAX                        ; 004791ff
    JZ 0x004791e2                       ; 00479201
        ;   XREF to: 004791e2 (CONDITIONAL_JUMP)  ; LAB_004791e2
    PUSH ESI                            ; 00479203
    LEA EAX,[ESP + 0x104]               ; 00479204
    PUSH EAX                            ; 0047920b
    CALL crt_stdio.c_fopen_FUN_005c157c ; 0047920c
        ;   XREF to: 005c157c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005c157c()
    ADD ESP,0x8                         ; 00479211
    MOV EBX,EAX                         ; 00479214
    TEST EAX,EAX                        ; 00479216
    JZ 0x004791e2                       ; 00479218
        ;   XREF to: 004791e2 (CONDITIONAL_JUMP)  ; LAB_004791e2
    MOV ECX,dword ptr [ESP + 0x200]     ; 0047921a
    TEST ECX,ECX                        ; 00479221
    JZ 0x00479231                       ; 00479223
        ;   XREF to: 00479231 (CONDITIONAL_JUMP)  ; LAB_00479231
    PUSH 0x0                            ; 00479225
    PUSH ECX                            ; 00479227
    PUSH EAX                            ; 00479228
    CALL crt_stdio.c_fseek_FUN_005c170c ; 00479229
        ;   XREF to: 005c170c (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fseek_FUN_005c170c()
    ADD ESP,0xc                         ; 0047922e
    MOV EAX,EBX                         ; 00479231
        ;   Label: LAB_00479231
    ADD ESP,0x214                       ; 00479233
    POP EDI                             ; 00479239
    POP ESI                             ; 0047923a
    POP EBX                             ; 0047923b
    RET                                 ; 0047923c

