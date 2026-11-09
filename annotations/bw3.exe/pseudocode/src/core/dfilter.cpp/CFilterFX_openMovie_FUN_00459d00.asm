; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterFX_openMovie_FUN_00459d00(CFilterFX *this_ptr,char *filename)
;
; Parameters:
; CFilterFX *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_filmreel.cpp_FUN_00496560 at 00496673
;
; Referenced Globals:
;   CFilterCache* g_CFilterCachePtr = 01548f90
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_load_FUN_00459980
;   core_dfilter.cpp_CFilterCache_findFilter_FUN_00459850
;   core_dfilter.cpp_FUN_00459ce0
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_stdio.c_fread_FUN_005a3890
;   crt_stdio.c_fscanf_FUN_005a3230
;   crt_unknown.c_FUN_005a28c0
;   crt_unknown.c_FUN_005a3650
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459d00
        ;   Label: core_dfilter.cpp_CFilterFX_openMovie_FUN_00459d00
    PUSH ESI                            ; 00459d01
    PUSH EBP                            ; 00459d02
    SUB ESP,0x100                       ; 00459d03
    MOV ESI,dword ptr [ESP + 0x110]     ; 00459d09
    MOV EBX,dword ptr [ESP + 0x114]     ; 00459d10
    PUSH ESI                            ; 00459d17
    CALL core_dfilter.cpp_FUN_00459ce0  ; 00459d18
        ;   XREF to: 00459ce0 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_FUN_00459ce0(CFilterFX * this_ptr)
    ADD ESP,0x4                         ; 00459d1d
    TEST EBX,EBX                        ; 00459d20
    JZ 0x00459e21                       ; 00459d22
        ;   XREF to: 00459e21 (CONDITIONAL_JUMP)  ; LAB_00459e21
    PUSH EDI                            ; 00459d28
    PUSH EBX                            ; 00459d29
    PUSH 0x5bac22                       ; 00459d2a
    LEA EAX,[ESP + 0xc]                 ; 00459d2f
    PUSH EAX                            ; 00459d33
    CALL crt_unknown.c_FUN_005a28c0     ; 00459d34
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00459d39
    PUSH 0x5bac29                       ; 00459d3c
    LEA EAX,[ESP + 0x8]                 ; 00459d41
    PUSH EAX                            ; 00459d45
    PUSH EBX                            ; 00459d46
    CALL engine_dosio.cpp_FUN_004659c0  ; 00459d47
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00459d4c
    MOV EDI,EAX                         ; 00459d4f
    TEST EAX,EAX                        ; 00459d51
    JNZ 0x00459d79                      ; 00459d53
        ;   XREF to: 00459d79 (CONDITIONAL_JUMP)  ; LAB_00459d79
    PUSH EBX                            ; 00459d55
    MOV EDX,0x5bac2c                    ; 00459d56
    MOV ECX,0x15a                       ; 00459d5b
    PUSH 0x5bac40                       ; 00459d60
    MOV dword ptr [0x01d71de0],EDX      ; 00459d65 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00459d6b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00459d71
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00459d76
    PUSH ESI                            ; 00459d79
        ;   Label: LAB_00459d79
    PUSH 0x5bac58                       ; 00459d7a
    PUSH EDI                            ; 00459d7f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00459d80
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00459d85
    PUSH EDI                            ; 00459d88
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00459d89
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    MOV EAX,dword ptr [ESI]             ; 00459d8e
    ADD ESP,0x4                         ; 00459d90
    SHL EAX,0xd                         ; 00459d93
    PUSH EAX                            ; 00459d96
    CALL crt_unknown.c_FUN_005a3650     ; 00459d97
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00459d9c
    PUSH EBX                            ; 00459d9f
    PUSH 0x5bac5c                       ; 00459da0
    MOV dword ptr [ESI + 0x4],EAX       ; 00459da5
    LEA EAX,[ESP + 0xc]                 ; 00459da8
    PUSH EAX                            ; 00459dac
    CALL crt_unknown.c_FUN_005a28c0     ; 00459dad
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00459db2
    PUSH 0x5bac63                       ; 00459db5
    LEA EAX,[ESP + 0x8]                 ; 00459dba
    PUSH EAX                            ; 00459dbe
    PUSH EBX                            ; 00459dbf
    CALL engine_dosio.cpp_FUN_004659c0  ; 00459dc0
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00459dc5
    MOV EDI,EAX                         ; 00459dc8
    TEST EAX,EAX                        ; 00459dca
    JZ 0x00459e4d                       ; 00459dcc
        ;   XREF to: 00459e4d (CONDITIONAL_JUMP)  ; LAB_00459e4d
    PUSH EDI                            ; 00459dd2
        ;   Label: LAB_00459dd2
    MOV EDX,dword ptr [ESI]             ; 00459dd3
    PUSH EDX                            ; 00459dd5
    PUSH 0x2000                         ; 00459dd6
    MOV ECX,dword ptr [ESI + 0x4]       ; 00459ddb
    PUSH ECX                            ; 00459dde
    CALL crt_stdio.c_fread_FUN_005a3890 ; 00459ddf
        ;   XREF to: 005a3890 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005a3890()
    ADD ESP,0x10                        ; 00459de4
    PUSH EDI                            ; 00459de7
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 00459de8
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 00459ded
    XOR ECX,ECX                         ; 00459df0
    POP EDI                             ; 00459df2
    MOV EAX,dword ptr [ESI]             ; 00459df3
        ;   Label: LAB_00459df3
    SHL EAX,0xd                         ; 00459df5
    CMP ECX,EAX                         ; 00459df8
    JGE 0x00459e75                      ; 00459dfa
        ;   XREF to: 00459e75 (CONDITIONAL_JUMP)  ; LAB_00459e75
    MOV EBX,dword ptr [ESI + 0x4]       ; 00459dfc
    XOR EDX,EDX                         ; 00459dff
    MOV DL,byte ptr [ECX + EBX*0x1]     ; 00459e01
    MOV EAX,EDX                         ; 00459e04
    SAR EDX,0x1f                        ; 00459e06
    SHL EDX,0x2                         ; 00459e09
    SBB EAX,EDX                         ; 00459e0c
    SAR EAX,0x2                         ; 00459e0e
    MOV EDX,EAX                         ; 00459e11
    SAR EDX,0x1f                        ; 00459e13
    SUB EAX,EDX                         ; 00459e16
    SAR EAX,0x1                         ; 00459e18
    INC ECX                             ; 00459e1a
    MOV byte ptr [ECX + EBX*0x1 + -0x1],AL ; 00459e1b
    JMP 0x00459df3                      ; 00459e1f
        ;   XREF to: 00459df3 (UNCONDITIONAL_JUMP)  ; LAB_00459df3
    PUSH 0x5bac0a                       ; 00459e21
        ;   Label: LAB_00459e21
    MOV EBX,dword ptr [0x005f190c]      ; 00459e26 | g_CFilterCachePtr
    PUSH EBX                            ; 00459e2c
    CALL core_dfilter.cpp_CFilterCache_findFilter_FUN_00459850 ; 00459e2d
        ;   XREF to: 00459850 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CFilterCache_findFilter_FUN_00459850(CFilterCache * this_ptr, char * filter_name)
    ADD ESP,0x8                         ; 00459e32
    PUSH 0x5bac16                       ; 00459e35
    PUSH EAX                            ; 00459e3a
    CALL core_dfilter.cpp_CDemonFilter_load_FUN_00459980 ; 00459e3b
        ;   XREF to: 00459980 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_load_FUN_00459980(CDemonFilter * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00459e40
    ADD ESP,0x100                       ; 00459e43
    POP EBP                             ; 00459e49
    POP ESI                             ; 00459e4a
    POP EBX                             ; 00459e4b
    RET                                 ; 00459e4c
    PUSH EBX                            ; 00459e4d
        ;   Label: LAB_00459e4d
    MOV EBP,0x5bac66                    ; 00459e4e
    MOV EAX,0x166                       ; 00459e53
    PUSH 0x5bac7a                       ; 00459e58
    MOV dword ptr [0x01d71de0],EBP      ; 00459e5d | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00459e63 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00459e68
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00459e6d
    JMP 0x00459dd2                      ; 00459e70
        ;   XREF to: 00459dd2 (UNCONDITIONAL_JUMP)  ; LAB_00459dd2
    MOV dword ptr [ESI + 0x8],0x0       ; 00459e75
        ;   Label: LAB_00459e75
    ADD ESP,0x100                       ; 00459e7c
    POP EBP                             ; 00459e82
    POP ESI                             ; 00459e83
    POP EBX                             ; 00459e84
    RET                                 ; 00459e85

