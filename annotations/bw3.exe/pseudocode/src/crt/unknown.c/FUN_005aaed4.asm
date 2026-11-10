; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_FUN_005aaed4(char *filename,WatcomStat *file_info)
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
;   crt_io.c_FUN_005a4bc4 at 005a4bc4
;   crt_unknown.c_FUN_005af050 at 005af0c4
;
; Referenced Globals:
;   void* PTR_FindClose_005b3554 = 001b3d64
;   void* PTR_FindFirstFileA_005b3558 = 001b3d70
;   undefined4 DAT_005da884
;   undefined4 DAT_006074b8
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005a35a0
;   crt_errno.c_setErrno_FUN_005a92c0
;   crt_memory.c_memset_FUN_005a28f0
;   crt_stdlib.c__fullpath_FUN_005a53f0
;   crt_string.c__strncpy_FUN_005a4ee0
;   crt_unknown.c_FUN_005a55b0
;   crt_unknown.c_FUN_005aadc0
;   crt_unknown.c_FUN_005ab46c
;   crt_unknown.c_FUN_005aca00
;   crt_unknown.c_FUN_005acb10
;   crt_unknown.c_FUN_005aede0
;   crt_unknown.c_FUN_005aee30
;   crt_unknown.c_FUN_005aef20
;   FindClose
;   FindFirstFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aaed4
        ;   Label: crt_unknown.c_FUN_005aaed4
    PUSH ESI                            ; 005aaed5
    PUSH EDI                            ; 005aaed6
    PUSH EBP                            ; 005aaed7
    SUB ESP,0x358                       ; 005aaed8
    MOV ESI,dword ptr [ESP + 0x36c]     ; 005aaede
    MOV EBX,dword ptr [ESP + 0x370]     ; 005aaee5
    MOV AH,byte ptr [ESI]               ; 005aaeec
    XOR EBP,EBP                         ; 005aaeee
    TEST AH,AH                          ; 005aaef0
    JZ 0x005aaf06                       ; 005aaef2
        ;   XREF to: 005aaf06 (CONDITIONAL_JUMP)  ; LAB_005aaf06
    PUSH 0x5da884                       ; 005aaef4 | DAT_005da884
    PUSH ESI                            ; 005aaef9
    CALL crt_unknown.c_FUN_005aede0     ; 005aaefa
        ;   XREF to: 005aede0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aede0()
    ADD ESP,0x8                         ; 005aaeff
    TEST EAX,EAX                        ; 005aaf02
    JZ 0x005aaf1a                       ; 005aaf04
        ;   XREF to: 005aaf1a (CONDITIONAL_JUMP)  ; LAB_005aaf1a
    PUSH 0x1                            ; 005aaf06
        ;   Label: LAB_005aaf06
    CALL crt_errno.c_setErrno_FUN_005a92c0 ; 005aaf08
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005a92c0(int error_code)
    MOV EAX,0xffffffff                  ; 005aaf0d
    ADD ESP,0x4                         ; 005aaf12
    JMP 0x005ab1c5                      ; 005aaf15
        ;   XREF to: 005ab1c5 (UNCONDITIONAL_JUMP)  ; LAB_005ab1c5
    PUSH 0x104                          ; 005aaf1a
        ;   Label: LAB_005aaf1a
    LEA EAX,[ESP + 0x248]               ; 005aaf1f
    PUSH EAX                            ; 005aaf26
    CALL crt_unknown.c_FUN_005acb10     ; 005aaf27
        ;   XREF to: 005acb10 (UNCONDITIONAL_CALL)  ; char * crt_unknown.c_FUN_005acb10(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 005aaf2c
    PUSH 0x104                          ; 005aaf2f
    PUSH ESI                            ; 005aaf34
    LEA EAX,[ESP + 0x148]               ; 005aaf35
    PUSH EAX                            ; 005aaf3c
    CALL crt_stdlib.c__fullpath_FUN_005a53f0 ; 005aaf3d
        ;   XREF to: 005a53f0 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_005a53f0(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 005aaf42
    TEST EAX,EAX                        ; 005aaf45
    JZ 0x005aaf83                       ; 005aaf47
        ;   XREF to: 005aaf83 (CONDITIONAL_JUMP)  ; LAB_005aaf83
    MOV AL,byte ptr [ESP + 0x140]       ; 005aaf49
    INC AL                              ; 005aaf50
    AND EAX,0xff                        ; 005aaf52
    TEST byte ptr [EAX + 0x6074b8],0xc0 ; 005aaf57 | DAT_006074b8
    JZ 0x005aaf83                       ; 005aaf5e
        ;   XREF to: 005aaf83 (CONDITIONAL_JUMP)  ; LAB_005aaf83
    CMP byte ptr [ESP + 0x141],0x3a     ; 005aaf60
    JNZ 0x005aaf83                      ; 005aaf68
        ;   XREF to: 005aaf83 (CONDITIONAL_JUMP)  ; LAB_005aaf83
    CMP byte ptr [ESP + 0x142],0x5c     ; 005aaf6a
    JNZ 0x005aaf83                      ; 005aaf72
        ;   XREF to: 005aaf83 (CONDITIONAL_JUMP)  ; LAB_005aaf83
    CMP byte ptr [ESP + 0x143],0x0      ; 005aaf74
    JNZ 0x005aaf83                      ; 005aaf7c
        ;   XREF to: 005aaf83 (CONDITIONAL_JUMP)  ; LAB_005aaf83
    MOV EBP,0x1                         ; 005aaf7e
    PUSH ESI                            ; 005aaf83
        ;   Label: LAB_005aaf83
    MOV EDI,ESI                         ; 005aaf84
    CALL crt_unknown.c_FUN_005aca00     ; 005aaf86
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    MOV DL,byte ptr [EAX]               ; 005aaf8b
    ADD ESP,0x4                         ; 005aaf8d
    CMP DL,0x3a                         ; 005aaf90
    JNZ 0x005aaf98                      ; 005aaf93
        ;   XREF to: 005aaf98 (CONDITIONAL_JUMP)  ; LAB_005aaf98
    LEA EDI,[ESI + 0x2]                 ; 005aaf95
    MOV DH,byte ptr [EDI]               ; 005aaf98
        ;   Label: LAB_005aaf98
    CMP DH,0x5c                         ; 005aaf9a
    JZ 0x005aafa4                       ; 005aaf9d
        ;   XREF to: 005aafa4 (CONDITIONAL_JUMP)  ; LAB_005aafa4
    CMP DH,0x2f                         ; 005aaf9f
    JNZ 0x005aafaa                      ; 005aafa2
        ;   XREF to: 005aafaa (CONDITIONAL_JUMP)  ; LAB_005aafaa
    CMP byte ptr [EDI + 0x1],0x0        ; 005aafa4
        ;   Label: LAB_005aafa4
    JZ 0x005aafae                       ; 005aafa8
        ;   XREF to: 005aafae (CONDITIONAL_JUMP)  ; LAB_005aafae
    TEST EBP,EBP                        ; 005aafaa
        ;   Label: LAB_005aafaa
    JZ 0x005aaff9                       ; 005aafac
        ;   XREF to: 005aaff9 (CONDITIONAL_JUMP)  ; LAB_005aaff9
    PUSH ESI                            ; 005aafae
        ;   Label: LAB_005aafae
    CALL crt_unknown.c_FUN_005a55b0     ; 005aafaf
        ;   XREF to: 005a55b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005a55b0(char * path)
    ADD ESP,0x4                         ; 005aafb4
    TEST EAX,EAX                        ; 005aafb7
    JZ 0x005aafcb                       ; 005aafb9
        ;   XREF to: 005aafcb (CONDITIONAL_JUMP)  ; LAB_005aafcb
    MOV EAX,0xffffffff                  ; 005aafbb
    ADD ESP,0x358                       ; 005aafc0
    POP EBP                             ; 005aafc6
    POP EDI                             ; 005aafc7
    POP ESI                             ; 005aafc8
    POP EBX                             ; 005aafc9
    RET                                 ; 005aafca
    LEA EAX,[ESP + 0x244]               ; 005aafcb
        ;   Label: LAB_005aafcb
    PUSH EAX                            ; 005aafd2
    CALL crt_unknown.c_FUN_005a55b0     ; 005aafd3
        ;   XREF to: 005a55b0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_FUN_005a55b0(char * path)
    ADD ESP,0x4                         ; 005aafd8
    PUSH 0x13e                          ; 005aafdb
    PUSH 0x0                            ; 005aafe0
    LEA EAX,[ESP + 0x8]                 ; 005aafe2
    PUSH EAX                            ; 005aafe6
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005aafe7
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV EDX,0x10                        ; 005aafec
    ADD ESP,0xc                         ; 005aaff1
    MOV dword ptr [ESP],EDX             ; 005aaff4
    JMP 0x005ab021                      ; 005aaff7
        ;   XREF to: 005ab021 (UNCONDITIONAL_JUMP)  ; LAB_005ab021
    MOV EAX,ESP                         ; 005aaff9
        ;   Label: LAB_005aaff9
    PUSH EAX                            ; 005aaffb
    PUSH ESI                            ; 005aaffc
    CALL dword ptr CS:[0x5b3558]        ; 005aaffd | PTR_FindFirstFileA_005b3558
    CMP EAX,-0x1                        ; 005ab004
    JNZ 0x005ab019                      ; 005ab007
        ;   XREF to: 005ab019 (CONDITIONAL_JUMP)  ; LAB_005ab019
    CALL crt_unknown.c_FUN_005ab46c     ; 005ab009
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab46c()
    ADD ESP,0x358                       ; 005ab00e
    POP EBP                             ; 005ab014
    POP EDI                             ; 005ab015
    POP ESI                             ; 005ab016
    POP EBX                             ; 005ab017
    RET                                 ; 005ab018
    PUSH EAX                            ; 005ab019
        ;   Label: LAB_005ab019
    CALL dword ptr CS:[0x5b3554]        ; 005ab01a | PTR_FindClose_005b3554
    PUSH ESI                            ; 005ab021
        ;   Label: LAB_005ab021
    CALL crt_unknown.c_FUN_005aca00     ; 005ab022
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aca00()
    MOV DL,byte ptr [EAX]               ; 005ab027
    ADD ESP,0x4                         ; 005ab029
    CMP DL,0x3a                         ; 005ab02c
    JNZ 0x005ab037                      ; 005ab02f
        ;   XREF to: 005ab037 (CONDITIONAL_JUMP)  ; LAB_005ab037
    XOR EAX,EAX                         ; 005ab031
    MOV AL,byte ptr [ESI]               ; 005ab033
    JMP 0x005ab040                      ; 005ab035
        ;   XREF to: 005ab040 (UNCONDITIONAL_JUMP)  ; LAB_005ab040
    XOR EAX,EAX                         ; 005ab037
        ;   Label: LAB_005ab037
    MOV AL,byte ptr [ESP + 0x244]       ; 005ab039
    PUSH EAX                            ; 005ab040
        ;   Label: LAB_005ab040
    CALL crt_ctype.c_tolower_FUN_005a35a0 ; 005ab041
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005a35a0(int character)
    SUB EAX,0x61                        ; 005ab046
    ADD ESP,0x4                         ; 005ab049
    MOV dword ptr [EBX],EAX             ; 005ab04c
    MOV ECX,dword ptr [EBX]             ; 005ab04e
    DEC ECX                             ; 005ab050
    MOV dword ptr [EBX],ECX             ; 005ab051
    MOV dword ptr [EBX + 0x12],ECX      ; 005ab053
    MOV EAX,dword ptr [ESP + 0x20]      ; 005ab056
    MOV dword ptr [EBX + 0x16],EAX      ; 005ab05a
    LEA EAX,[ESP + 0x2c]                ; 005ab05d
    PUSH EAX                            ; 005ab061
    MOV ESI,dword ptr [ESP + 0x4]       ; 005ab062
    PUSH ESI                            ; 005ab066
    CALL crt_unknown.c_FUN_005aadc0     ; 005ab067
        ;   XREF to: 005aadc0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aadc0()
    ADD ESP,0x8                         ; 005ab06c
    MOV word ptr [EBX + 0x8],AX         ; 005ab06f
    LEA EAX,[ESP + 0x354]               ; 005ab073
    PUSH EAX                            ; 005ab07a
    LEA EAX,[ESP + 0x34c]               ; 005ab07b
    PUSH EAX                            ; 005ab082
    LEA EAX,[ESP + 0x1c]                ; 005ab083
    PUSH EAX                            ; 005ab087
    CALL crt_unknown.c_FUN_005aee30     ; 005ab088
        ;   XREF to: 005aee30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aee30()
    ADD ESP,0xc                         ; 005ab08d
    XOR EAX,EAX                         ; 005ab090
    MOV AX,word ptr [ESP + 0x354]       ; 005ab092
    PUSH EAX                            ; 005ab09a
    XOR EAX,EAX                         ; 005ab09b
    MOV AX,word ptr [ESP + 0x34c]       ; 005ab09d
    PUSH EAX                            ; 005ab0a5
    CALL crt_unknown.c_FUN_005aef20     ; 005ab0a6
        ;   XREF to: 005aef20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aef20()
    ADD ESP,0x8                         ; 005ab0ab
    MOV dword ptr [EBX + 0x1e],EAX      ; 005ab0ae
    LEA EAX,[ESP + 0x34c]               ; 005ab0b1
    PUSH EAX                            ; 005ab0b8
    LEA EAX,[ESP + 0x354]               ; 005ab0b9
    PUSH EAX                            ; 005ab0c0
    LEA EAX,[ESP + 0xc]                 ; 005ab0c1
    PUSH EAX                            ; 005ab0c5
    CALL crt_unknown.c_FUN_005aee30     ; 005ab0c6
        ;   XREF to: 005aee30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aee30()
    ADD ESP,0xc                         ; 005ab0cb
    MOV EAX,dword ptr [ESP + 0x350]     ; 005ab0ce
    CMP AX,word ptr [ESP + 0x348]       ; 005ab0d5
    JNZ 0x005ab0f5                      ; 005ab0dd
        ;   XREF to: 005ab0f5 (CONDITIONAL_JUMP)  ; LAB_005ab0f5
    MOV EAX,dword ptr [ESP + 0x34c]     ; 005ab0df
    CMP AX,word ptr [ESP + 0x354]       ; 005ab0e6
    JNZ 0x005ab0f5                      ; 005ab0ee
        ;   XREF to: 005ab0f5 (CONDITIONAL_JUMP)  ; LAB_005ab0f5
    MOV EAX,dword ptr [EBX + 0x1e]      ; 005ab0f0
    JMP 0x005ab113                      ; 005ab0f3
        ;   XREF to: 005ab113 (UNCONDITIONAL_JUMP)  ; LAB_005ab113
    XOR EAX,EAX                         ; 005ab0f5
        ;   Label: LAB_005ab0f5
    MOV AX,word ptr [ESP + 0x34c]       ; 005ab0f7
    PUSH EAX                            ; 005ab0ff
    XOR EAX,EAX                         ; 005ab100
    MOV AX,word ptr [ESP + 0x354]       ; 005ab102
    PUSH EAX                            ; 005ab10a
    CALL crt_unknown.c_FUN_005aef20     ; 005ab10b
        ;   XREF to: 005aef20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aef20()
    ADD ESP,0x8                         ; 005ab110
    MOV dword ptr [EBX + 0x22],EAX      ; 005ab113
        ;   Label: LAB_005ab113
    LEA EAX,[ESP + 0x34c]               ; 005ab116
    PUSH EAX                            ; 005ab11d
    LEA EAX,[ESP + 0x354]               ; 005ab11e
    PUSH EAX                            ; 005ab125
    LEA EAX,[ESP + 0x14]                ; 005ab126
    PUSH EAX                            ; 005ab12a
    CALL crt_unknown.c_FUN_005aee30     ; 005ab12b
        ;   XREF to: 005aee30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aee30()
    ADD ESP,0xc                         ; 005ab130
    MOV EAX,dword ptr [ESP + 0x350]     ; 005ab133
    CMP AX,word ptr [ESP + 0x348]       ; 005ab13a
    JNZ 0x005ab15a                      ; 005ab142
        ;   XREF to: 005ab15a (CONDITIONAL_JUMP)  ; LAB_005ab15a
    MOV EAX,dword ptr [ESP + 0x34c]     ; 005ab144
    CMP AX,word ptr [ESP + 0x354]       ; 005ab14b
    JNZ 0x005ab15a                      ; 005ab153
        ;   XREF to: 005ab15a (CONDITIONAL_JUMP)  ; LAB_005ab15a
    MOV EAX,dword ptr [EBX + 0x1e]      ; 005ab155
    JMP 0x005ab178                      ; 005ab158
        ;   XREF to: 005ab178 (UNCONDITIONAL_JUMP)  ; LAB_005ab178
    XOR EAX,EAX                         ; 005ab15a
        ;   Label: LAB_005ab15a
    MOV AX,word ptr [ESP + 0x34c]       ; 005ab15c
    PUSH EAX                            ; 005ab164
    XOR EAX,EAX                         ; 005ab165
    MOV AX,word ptr [ESP + 0x354]       ; 005ab167
    PUSH EAX                            ; 005ab16f
    CALL crt_unknown.c_FUN_005aef20     ; 005ab170
        ;   XREF to: 005aef20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aef20()
    ADD ESP,0x8                         ; 005ab175
    MOV dword ptr [EBX + 0x1a],EAX      ; 005ab178
        ;   Label: LAB_005ab178
    MOV word ptr [EBX + 0x10],0x0       ; 005ab17b
    MOV AX,word ptr [EBX + 0x10]        ; 005ab181
    MOV word ptr [EBX + 0xa],0x1        ; 005ab185
    CWDE                                ; 005ab18b
    MOV dword ptr [EBX + 0xc],EAX       ; 005ab18c
    MOV dword ptr [EBX + 0x4],EAX       ; 005ab18f
    ADD EBX,0x39                        ; 005ab192
    MOV EAX,dword ptr [ESP]             ; 005ab195
    MOV dword ptr [EBX + -0xb],0x0      ; 005ab198
    PUSH 0xd                            ; 005ab19f
    MOV dword ptr [EBX + -0xf],EAX      ; 005ab1a1
    LEA EAX,[ESP + 0x30]                ; 005ab1a4
    MOV dword ptr [EBX + -0x7],0x0      ; 005ab1a8
    PUSH EAX                            ; 005ab1af
    MOV word ptr [EBX + -0x3],0x0       ; 005ab1b0
    PUSH EBX                            ; 005ab1b6
    MOV byte ptr [EBX + -0x1],0x0       ; 005ab1b7
    CALL crt_string.c__strncpy_FUN_005a4ee0 ; 005ab1bb
        ;   XREF to: 005a4ee0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_005a4ee0(char * dest, char * src, SIZE_T count)
    ADD ESP,0xc                         ; 005ab1c0
    XOR EAX,EAX                         ; 005ab1c3
    ADD ESP,0x358                       ; 005ab1c5
        ;   Label: LAB_005ab1c5
    POP EBP                             ; 005ab1cb
    POP EDI                             ; 005ab1cc
    POP ESI                             ; 005ab1cd
    POP EBX                             ; 005ab1ce
    RET                                 ; 005ab1cf

