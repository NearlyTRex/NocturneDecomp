; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_FUN_005bfdd4(char *filename,WatcomStat *file_info)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; WatcomStat *     Stack[0x8]:4   file_info
; Local Variables:
; undefined4       Stack[-0x368]:4  local_368
; undefined        Stack[-0x364]:1  local_364
; undefined        Stack[-0x35c]:1  local_35c
; undefined        Stack[-0x354]:1  local_354
; undefined4       Stack[-0x348]:4  local_348
; undefined        Stack[-0x33c]:1  local_33c
; undefined        Stack[-0x228]:1  local_228
; undefined1       Stack[-0x227]:1  local_227
; undefined1       Stack[-0x226]:1  local_226
; undefined1       Stack[-0x225]:1  local_225
; undefined        Stack[-0x124]:1  local_124
; undefined2       Stack[-0x20]:2  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined2       Stack[-0x14]:2  local_14
;
; XREF[2]:
;   crt_io.c_FUN_005b99c8 at 005b99c8
;   unkafter_morph.cpp_FUN_005c40e0 at 005c4154
;
; Referenced Globals:
;   void* PTR_FindClose_005c8544 = 001c8d36
;   void* PTR_FindFirstFileA_005c8548 = 001c8d42
;   undefined4 DAT_005f1a20
;   undefined4 DAT_0061ed94
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005b8470
;   crt_errno.c_setErrno_FUN_005be180
;   crt_memory.c_memset_FUN_005b77c0
;   crt_stdlib.c__fullpath_FUN_005ba120
;   crt_string.c__strncpy_FUN_005b9cf0
;   crt_unknown.c_FUN_005ba2e0
;   crt_unknown.c_FUN_005bfcc0
;   crt_unknown.c_FUN_005c036c
;   crt_unknown.c_FUN_005c0e00
;   crt_unknown.c_FUN_005c0f10
;   FindClose
;   FindFirstFileA
;   unkafter_morph.cpp_FUN_005c3e70
;   unkafter_morph.cpp_FUN_005c3ec0
;   unkafter_morph.cpp_FUN_005c3fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfdd4
        ;   Label: crt_unknown.c_FUN_005bfdd4
    PUSH ESI                            ; 005bfdd5
    PUSH EDI                            ; 005bfdd6
    PUSH EBP                            ; 005bfdd7
    SUB ESP,0x358                       ; 005bfdd8
    MOV ESI,dword ptr [ESP + 0x36c]     ; 005bfdde
    MOV EBX,dword ptr [ESP + 0x370]     ; 005bfde5
    MOV AH,byte ptr [ESI]               ; 005bfdec
    XOR EBP,EBP                         ; 005bfdee
    TEST AH,AH                          ; 005bfdf0
    JZ 0x005bfe06                       ; 005bfdf2
        ;   XREF to: 005bfe06 (CONDITIONAL_JUMP)  ; LAB_005bfe06
    PUSH 0x5f1a20                       ; 005bfdf4 | DAT_005f1a20
    PUSH ESI                            ; 005bfdf9
    CALL unkafter_morph.cpp_FUN_005c3e70 ; 005bfdfa
        ;   XREF to: 005c3e70 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3e70()
    ADD ESP,0x8                         ; 005bfdff
    TEST EAX,EAX                        ; 005bfe02
    JZ 0x005bfe1a                       ; 005bfe04
        ;   XREF to: 005bfe1a (CONDITIONAL_JUMP)  ; LAB_005bfe1a
    PUSH 0x1                            ; 005bfe06
        ;   Label: LAB_005bfe06
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005bfe08
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV EAX,0xffffffff                  ; 005bfe0d
    ADD ESP,0x4                         ; 005bfe12
    JMP 0x005c00c5                      ; 005bfe15
        ;   XREF to: 005c00c5 (UNCONDITIONAL_JUMP)  ; LAB_005c00c5
    PUSH 0x104                          ; 005bfe1a
        ;   Label: LAB_005bfe1a
    LEA EAX,[ESP + 0x248]               ; 005bfe1f
    PUSH EAX                            ; 005bfe26
    CALL crt_unknown.c_FUN_005c0f10     ; 005bfe27
        ;   XREF to: 005c0f10 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0f10()
    ADD ESP,0x8                         ; 005bfe2c
    PUSH 0x104                          ; 005bfe2f
    PUSH ESI                            ; 005bfe34
    LEA EAX,[ESP + 0x148]               ; 005bfe35
    PUSH EAX                            ; 005bfe3c
    CALL crt_stdlib.c__fullpath_FUN_005ba120 ; 005bfe3d
        ;   XREF to: 005ba120 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_005ba120(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 005bfe42
    TEST EAX,EAX                        ; 005bfe45
    JZ 0x005bfe83                       ; 005bfe47
        ;   XREF to: 005bfe83 (CONDITIONAL_JUMP)  ; LAB_005bfe83
    MOV AL,byte ptr [ESP + 0x140]       ; 005bfe49
    INC AL                              ; 005bfe50
    AND EAX,0xff                        ; 005bfe52
    TEST byte ptr [EAX + 0x61ed94],0xc0 ; 005bfe57 | DAT_0061ed94
    JZ 0x005bfe83                       ; 005bfe5e
        ;   XREF to: 005bfe83 (CONDITIONAL_JUMP)  ; LAB_005bfe83
    CMP byte ptr [ESP + 0x141],0x3a     ; 005bfe60
    JNZ 0x005bfe83                      ; 005bfe68
        ;   XREF to: 005bfe83 (CONDITIONAL_JUMP)  ; LAB_005bfe83
    CMP byte ptr [ESP + 0x142],0x5c     ; 005bfe6a
    JNZ 0x005bfe83                      ; 005bfe72
        ;   XREF to: 005bfe83 (CONDITIONAL_JUMP)  ; LAB_005bfe83
    CMP byte ptr [ESP + 0x143],0x0      ; 005bfe74
    JNZ 0x005bfe83                      ; 005bfe7c
        ;   XREF to: 005bfe83 (CONDITIONAL_JUMP)  ; LAB_005bfe83
    MOV EBP,0x1                         ; 005bfe7e
    PUSH ESI                            ; 005bfe83
        ;   Label: LAB_005bfe83
    MOV EDI,ESI                         ; 005bfe84
    CALL crt_unknown.c_FUN_005c0e00     ; 005bfe86
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    MOV DL,byte ptr [EAX]               ; 005bfe8b
    ADD ESP,0x4                         ; 005bfe8d
    CMP DL,0x3a                         ; 005bfe90
    JNZ 0x005bfe98                      ; 005bfe93
        ;   XREF to: 005bfe98 (CONDITIONAL_JUMP)  ; LAB_005bfe98
    LEA EDI,[ESI + 0x2]                 ; 005bfe95
    MOV DH,byte ptr [EDI]               ; 005bfe98
        ;   Label: LAB_005bfe98
    CMP DH,0x5c                         ; 005bfe9a
    JZ 0x005bfea4                       ; 005bfe9d
        ;   XREF to: 005bfea4 (CONDITIONAL_JUMP)  ; LAB_005bfea4
    CMP DH,0x2f                         ; 005bfe9f
    JNZ 0x005bfeaa                      ; 005bfea2
        ;   XREF to: 005bfeaa (CONDITIONAL_JUMP)  ; LAB_005bfeaa
    CMP byte ptr [EDI + 0x1],0x0        ; 005bfea4
        ;   Label: LAB_005bfea4
    JZ 0x005bfeae                       ; 005bfea8
        ;   XREF to: 005bfeae (CONDITIONAL_JUMP)  ; LAB_005bfeae
    TEST EBP,EBP                        ; 005bfeaa
        ;   Label: LAB_005bfeaa
    JZ 0x005bfef9                       ; 005bfeac
        ;   XREF to: 005bfef9 (CONDITIONAL_JUMP)  ; LAB_005bfef9
    PUSH ESI                            ; 005bfeae
        ;   Label: LAB_005bfeae
    CALL crt_unknown.c_FUN_005ba2e0     ; 005bfeaf
        ;   XREF to: 005ba2e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2e0()
    ADD ESP,0x4                         ; 005bfeb4
    TEST EAX,EAX                        ; 005bfeb7
    JZ 0x005bfecb                       ; 005bfeb9
        ;   XREF to: 005bfecb (CONDITIONAL_JUMP)  ; LAB_005bfecb
    MOV EAX,0xffffffff                  ; 005bfebb
    ADD ESP,0x358                       ; 005bfec0
    POP EBP                             ; 005bfec6
    POP EDI                             ; 005bfec7
    POP ESI                             ; 005bfec8
    POP EBX                             ; 005bfec9
    RET                                 ; 005bfeca
    LEA EAX,[ESP + 0x244]               ; 005bfecb
        ;   Label: LAB_005bfecb
    PUSH EAX                            ; 005bfed2
    CALL crt_unknown.c_FUN_005ba2e0     ; 005bfed3
        ;   XREF to: 005ba2e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ba2e0()
    ADD ESP,0x4                         ; 005bfed8
    PUSH 0x13e                          ; 005bfedb
    PUSH 0x0                            ; 005bfee0
    LEA EAX,[ESP + 0x8]                 ; 005bfee2
    PUSH EAX                            ; 005bfee6
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005bfee7
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EDX,0x10                        ; 005bfeec
    ADD ESP,0xc                         ; 005bfef1
    MOV dword ptr [ESP],EDX             ; 005bfef4
    JMP 0x005bff21                      ; 005bfef7
        ;   XREF to: 005bff21 (UNCONDITIONAL_JUMP)  ; LAB_005bff21
    MOV EAX,ESP                         ; 005bfef9
        ;   Label: LAB_005bfef9
    PUSH EAX                            ; 005bfefb
    PUSH ESI                            ; 005bfefc
    CALL dword ptr CS:[0x5c8548]        ; 005bfefd | PTR_FindFirstFileA_005c8548
    CMP EAX,-0x1                        ; 005bff04
    JNZ 0x005bff19                      ; 005bff07
        ;   XREF to: 005bff19 (CONDITIONAL_JUMP)  ; LAB_005bff19
    CALL crt_unknown.c_FUN_005c036c     ; 005bff09
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c036c()
    ADD ESP,0x358                       ; 005bff0e
    POP EBP                             ; 005bff14
    POP EDI                             ; 005bff15
    POP ESI                             ; 005bff16
    POP EBX                             ; 005bff17
    RET                                 ; 005bff18
    PUSH EAX                            ; 005bff19
        ;   Label: LAB_005bff19
    CALL dword ptr CS:[0x5c8544]        ; 005bff1a | PTR_FindClose_005c8544
    PUSH ESI                            ; 005bff21
        ;   Label: LAB_005bff21
    CALL crt_unknown.c_FUN_005c0e00     ; 005bff22
        ;   XREF to: 005c0e00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0e00()
    MOV DL,byte ptr [EAX]               ; 005bff27
    ADD ESP,0x4                         ; 005bff29
    CMP DL,0x3a                         ; 005bff2c
    JNZ 0x005bff37                      ; 005bff2f
        ;   XREF to: 005bff37 (CONDITIONAL_JUMP)  ; LAB_005bff37
    XOR EAX,EAX                         ; 005bff31
    MOV AL,byte ptr [ESI]               ; 005bff33
    JMP 0x005bff40                      ; 005bff35
        ;   XREF to: 005bff40 (UNCONDITIONAL_JUMP)  ; LAB_005bff40
    XOR EAX,EAX                         ; 005bff37
        ;   Label: LAB_005bff37
    MOV AL,byte ptr [ESP + 0x244]       ; 005bff39
    PUSH EAX                            ; 005bff40
        ;   Label: LAB_005bff40
    CALL crt_ctype.c_tolower_FUN_005b8470 ; 005bff41
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005b8470(int character)
    SUB EAX,0x61                        ; 005bff46
    ADD ESP,0x4                         ; 005bff49
    MOV dword ptr [EBX],EAX             ; 005bff4c
    MOV ECX,dword ptr [EBX]             ; 005bff4e
    DEC ECX                             ; 005bff50
    MOV dword ptr [EBX],ECX             ; 005bff51
    MOV dword ptr [EBX + 0x12],ECX      ; 005bff53
    MOV EAX,dword ptr [ESP + 0x20]      ; 005bff56
    MOV dword ptr [EBX + 0x16],EAX      ; 005bff5a
    LEA EAX,[ESP + 0x2c]                ; 005bff5d
    PUSH EAX                            ; 005bff61
    MOV ESI,dword ptr [ESP + 0x4]       ; 005bff62
    PUSH ESI                            ; 005bff66
    CALL crt_unknown.c_FUN_005bfcc0     ; 005bff67
        ;   XREF to: 005bfcc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfcc0()
    ADD ESP,0x8                         ; 005bff6c
    MOV word ptr [EBX + 0x8],AX         ; 005bff6f
    LEA EAX,[ESP + 0x354]               ; 005bff73
    PUSH EAX                            ; 005bff7a
    LEA EAX,[ESP + 0x34c]               ; 005bff7b
    PUSH EAX                            ; 005bff82
    LEA EAX,[ESP + 0x1c]                ; 005bff83
    PUSH EAX                            ; 005bff87
    CALL unkafter_morph.cpp_FUN_005c3ec0 ; 005bff88
        ;   XREF to: 005c3ec0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3ec0()
    ADD ESP,0xc                         ; 005bff8d
    XOR EAX,EAX                         ; 005bff90
    MOV AX,word ptr [ESP + 0x354]       ; 005bff92
    PUSH EAX                            ; 005bff9a
    XOR EAX,EAX                         ; 005bff9b
    MOV AX,word ptr [ESP + 0x34c]       ; 005bff9d
    PUSH EAX                            ; 005bffa5
    CALL unkafter_morph.cpp_FUN_005c3fb0 ; 005bffa6
        ;   XREF to: 005c3fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3fb0()
    ADD ESP,0x8                         ; 005bffab
    MOV dword ptr [EBX + 0x1e],EAX      ; 005bffae
    LEA EAX,[ESP + 0x34c]               ; 005bffb1
    PUSH EAX                            ; 005bffb8
    LEA EAX,[ESP + 0x354]               ; 005bffb9
    PUSH EAX                            ; 005bffc0
    LEA EAX,[ESP + 0xc]                 ; 005bffc1
    PUSH EAX                            ; 005bffc5
    CALL unkafter_morph.cpp_FUN_005c3ec0 ; 005bffc6
        ;   XREF to: 005c3ec0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3ec0()
    ADD ESP,0xc                         ; 005bffcb
    MOV EAX,dword ptr [ESP + 0x350]     ; 005bffce
    CMP AX,word ptr [ESP + 0x348]       ; 005bffd5
    JNZ 0x005bfff5                      ; 005bffdd
        ;   XREF to: 005bfff5 (CONDITIONAL_JUMP)  ; LAB_005bfff5
    MOV EAX,dword ptr [ESP + 0x34c]     ; 005bffdf
    CMP AX,word ptr [ESP + 0x354]       ; 005bffe6
    JNZ 0x005bfff5                      ; 005bffee
        ;   XREF to: 005bfff5 (CONDITIONAL_JUMP)  ; LAB_005bfff5
    MOV EAX,dword ptr [EBX + 0x1e]      ; 005bfff0
    JMP 0x005c0013                      ; 005bfff3
        ;   XREF to: 005c0013 (UNCONDITIONAL_JUMP)  ; LAB_005c0013
    XOR EAX,EAX                         ; 005bfff5
        ;   Label: LAB_005bfff5
    MOV AX,word ptr [ESP + 0x34c]       ; 005bfff7
    PUSH EAX                            ; 005bffff
    XOR EAX,EAX                         ; 005c0000
    MOV AX,word ptr [ESP + 0x354]       ; 005c0002
    PUSH EAX                            ; 005c000a
    CALL unkafter_morph.cpp_FUN_005c3fb0 ; 005c000b
        ;   XREF to: 005c3fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3fb0()
    ADD ESP,0x8                         ; 005c0010
    MOV dword ptr [EBX + 0x22],EAX      ; 005c0013
        ;   Label: LAB_005c0013
    LEA EAX,[ESP + 0x34c]               ; 005c0016
    PUSH EAX                            ; 005c001d
    LEA EAX,[ESP + 0x354]               ; 005c001e
    PUSH EAX                            ; 005c0025
    LEA EAX,[ESP + 0x14]                ; 005c0026
    PUSH EAX                            ; 005c002a
    CALL unkafter_morph.cpp_FUN_005c3ec0 ; 005c002b
        ;   XREF to: 005c3ec0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3ec0()
    ADD ESP,0xc                         ; 005c0030
    MOV EAX,dword ptr [ESP + 0x350]     ; 005c0033
    CMP AX,word ptr [ESP + 0x348]       ; 005c003a
    JNZ 0x005c005a                      ; 005c0042
        ;   XREF to: 005c005a (CONDITIONAL_JUMP)  ; LAB_005c005a
    MOV EAX,dword ptr [ESP + 0x34c]     ; 005c0044
    CMP AX,word ptr [ESP + 0x354]       ; 005c004b
    JNZ 0x005c005a                      ; 005c0053
        ;   XREF to: 005c005a (CONDITIONAL_JUMP)  ; LAB_005c005a
    MOV EAX,dword ptr [EBX + 0x1e]      ; 005c0055
    JMP 0x005c0078                      ; 005c0058
        ;   XREF to: 005c0078 (UNCONDITIONAL_JUMP)  ; LAB_005c0078
    XOR EAX,EAX                         ; 005c005a
        ;   Label: LAB_005c005a
    MOV AX,word ptr [ESP + 0x34c]       ; 005c005c
    PUSH EAX                            ; 005c0064
    XOR EAX,EAX                         ; 005c0065
    MOV AX,word ptr [ESP + 0x354]       ; 005c0067
    PUSH EAX                            ; 005c006f
    CALL unkafter_morph.cpp_FUN_005c3fb0 ; 005c0070
        ;   XREF to: 005c3fb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c3fb0()
    ADD ESP,0x8                         ; 005c0075
    MOV dword ptr [EBX + 0x1a],EAX      ; 005c0078
        ;   Label: LAB_005c0078
    MOV word ptr [EBX + 0x10],0x0       ; 005c007b
    MOV AX,word ptr [EBX + 0x10]        ; 005c0081
    MOV word ptr [EBX + 0xa],0x1        ; 005c0085
    CWDE                                ; 005c008b
    MOV dword ptr [EBX + 0xc],EAX       ; 005c008c
    MOV dword ptr [EBX + 0x4],EAX       ; 005c008f
    ADD EBX,0x39                        ; 005c0092
    MOV EAX,dword ptr [ESP]             ; 005c0095
    MOV dword ptr [EBX + -0xb],0x0      ; 005c0098
    PUSH 0xd                            ; 005c009f
    MOV dword ptr [EBX + -0xf],EAX      ; 005c00a1
    LEA EAX,[ESP + 0x30]                ; 005c00a4
    MOV dword ptr [EBX + -0x7],0x0      ; 005c00a8
    PUSH EAX                            ; 005c00af
    MOV word ptr [EBX + -0x3],0x0       ; 005c00b0
    PUSH EBX                            ; 005c00b6
    MOV byte ptr [EBX + -0x1],0x0       ; 005c00b7
    CALL crt_string.c__strncpy_FUN_005b9cf0 ; 005c00bb
        ;   XREF to: 005b9cf0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005b9cf0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005c00c0
    XOR EAX,EAX                         ; 005c00c3
    ADD ESP,0x358                       ; 005c00c5
        ;   Label: LAB_005c00c5
    POP EBP                             ; 005c00cb
    POP EDI                             ; 005c00cc
    POP ESI                             ; 005c00cd
    POP EBX                             ; 005c00ce
    RET                                 ; 005c00cf

