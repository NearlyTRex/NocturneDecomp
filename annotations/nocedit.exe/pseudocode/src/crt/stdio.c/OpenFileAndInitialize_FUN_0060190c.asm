; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl _FILE * __cdecl crt_stdio_c_OpenFileAndInitialize_FUN_0060190c (char *filename,char mode_char,int parsed_mode_flags,int stage1_result, int additional_flags,_FILE *file_struct)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char             Stack[0x8]:1   mode_char
; int              Stack[0xc]:4   parsed_mode_flags
; int              Stack[0x10]:4   stage1_result
; int              Stack[0x14]:4   additional_flags
; _FILE *          Stack[0x18]:4   file_struct
;
; XREF[2]:
;   crt_stdio.c_fopenWithFlags_FUN_00601a20 at 00601a66
;   crt_stdio.c_freopen_FUN_00601b14 at 00601b88
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005feb30
;   crt_stdio.c___freefp_FUN_006093b0
;   crt_stdio.c_CreateFileVariadic_FUN_00609074
;   crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0
;   crt_stdio.c_fseek_FUN_005ffacc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060190c
        ;   Label: crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
    PUSH ESI                            ; 0060190d
    PUSH EDI                            ; 0060190e
    PUSH EBP                            ; 0060190f
    MOV EBX,dword ptr [ESP + 0x28]      ; 00601910
    AND byte ptr [EBX + 0xc],0xfc       ; 00601914
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00601918
    MOV EDX,dword ptr [EBX + 0xc]       ; 0060191c
    OR EDX,EAX                          ; 0060191f
    XOR EAX,EAX                         ; 00601921
    MOV AL,byte ptr [ESP + 0x18]        ; 00601923
    PUSH EAX                            ; 00601927
    MOV dword ptr [EBX + 0xc],EDX       ; 00601928
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 0060192b
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005feb30(int character)
    ADD ESP,0x4                         ; 00601930
    CMP AL,0x72                         ; 00601933
    JNZ 0x00601965                      ; 00601935
        ;   XREF to: 00601965 (CONDITIONAL_JUMP)  ; LAB_00601965
    MOV CH,byte ptr [ESP + 0x1c]        ; 00601937
    XOR EAX,EAX                         ; 0060193b
    TEST CH,0x2                         ; 0060193d
    JZ 0x00601947                       ; 00601940
        ;   XREF to: 00601947 (CONDITIONAL_JUMP)  ; LAB_00601947
    MOV EAX,0x2                         ; 00601942
    TEST byte ptr [ESP + 0x1c],0x40     ; 00601947
        ;   Label: LAB_00601947
    JZ 0x00601953                       ; 0060194c
        ;   XREF to: 00601953 (CONDITIONAL_JUMP)  ; LAB_00601953
    OR AH,0x2                           ; 0060194e
    JMP 0x00601956                      ; 00601951
        ;   XREF to: 00601956 (UNCONDITIONAL_JUMP)  ; LAB_00601956
    OR AH,0x1                           ; 00601953
        ;   Label: LAB_00601953
    PUSH 0x0                            ; 00601956
        ;   Label: LAB_00601956
    MOV EDI,dword ptr [ESP + 0x28]      ; 00601958
    PUSH EDI                            ; 0060195c
    PUSH EAX                            ; 0060195d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0060195e
    PUSH EBP                            ; 00601962
    JMP 0x006019a1                      ; 00601963
        ;   XREF to: 006019a1 (UNCONDITIONAL_JUMP)  ; LAB_006019a1
    MOV DL,byte ptr [ESP + 0x1c]        ; 00601965
        ;   Label: LAB_00601965
    TEST DL,0x1                         ; 00601969
    SETNZ AL                            ; 0060196c
    AND EAX,0xff                        ; 0060196f
    ADD EAX,0x21                        ; 00601974
    TEST DL,0x80                        ; 00601977
    JZ 0x00601980                       ; 0060197a
        ;   XREF to: 00601980 (CONDITIONAL_JUMP)  ; LAB_00601980
    OR AL,0x10                          ; 0060197c
    JMP 0x00601982                      ; 0060197e
        ;   XREF to: 00601982 (UNCONDITIONAL_JUMP)  ; LAB_00601982
    OR AL,0x40                          ; 00601980
        ;   Label: LAB_00601980
    TEST byte ptr [ESP + 0x1c],0x40     ; 00601982
        ;   Label: LAB_00601982
    JZ 0x0060198e                       ; 00601987
        ;   XREF to: 0060198e (CONDITIONAL_JUMP)  ; LAB_0060198e
    OR AH,0x2                           ; 00601989
    JMP 0x00601991                      ; 0060198c
        ;   XREF to: 00601991 (UNCONDITIONAL_JUMP)  ; LAB_00601991
    OR AH,0x1                           ; 0060198e
        ;   Label: LAB_0060198e
    PUSH 0x180                          ; 00601991
        ;   Label: LAB_00601991
    MOV ECX,dword ptr [ESP + 0x28]      ; 00601996
    PUSH ECX                            ; 0060199a
    PUSH EAX                            ; 0060199b
    MOV ESI,dword ptr [ESP + 0x20]      ; 0060199c
    PUSH ESI                            ; 006019a0
    CALL crt_stdio.c_CreateFileVariadic_FUN_00609074 ; 006019a1
        ;   XREF to: 00609074 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_CreateFileVariadic_FUN_00609074(char * filename, int access_mode, int share_mode)
        ;   Label: LAB_006019a1
    ADD ESP,0x10                        ; 006019a6
    MOV dword ptr [EBX + 0x10],EAX      ; 006019a9
    CMP dword ptr [EBX + 0x10],-0x1     ; 006019ac
    JNZ 0x006019c2                      ; 006019b0
        ;   XREF to: 006019c2 (CONDITIONAL_JUMP)  ; LAB_006019c2
    PUSH EBX                            ; 006019b2
    CALL crt_stdio.c___freefp_FUN_006093b0 ; 006019b3
        ;   XREF to: 006093b0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c___freefp_FUN_006093b0(_FILE * file_handle)
    ADD ESP,0x4                         ; 006019b8
    XOR EAX,EAX                         ; 006019bb
    POP EBP                             ; 006019bd
    POP EDI                             ; 006019be
    POP ESI                             ; 006019bf
    POP EBX                             ; 006019c0
    RET                                 ; 006019c1
    MOV dword ptr [EBX + 0x4],0x0       ; 006019c2
        ;   Label: LAB_006019c2
    MOV EAX,dword ptr [EBX + 0x8]       ; 006019c9
    MOV dword ptr [EBX + 0x14],0x0      ; 006019cc
    MOV dword ptr [EAX + 0xc],0x0       ; 006019d3
    MOV EAX,dword ptr [EBX + 0x8]       ; 006019da
    MOV EDX,dword ptr [ESP + 0x20]      ; 006019dd
    MOV dword ptr [EAX + 0x10],EDX      ; 006019e1
    MOV EAX,dword ptr [EBX + 0x8]       ; 006019e4
    MOV dword ptr [EAX + 0x15],0x0      ; 006019e7
    MOV EAX,dword ptr [EBX + 0x8]       ; 006019ee
    MOV DH,byte ptr [ESP + 0x1c]        ; 006019f1
    MOV dword ptr [EAX + 0x8],0x0       ; 006019f5
    TEST DH,0x80                        ; 006019fc
    JZ 0x00601a0e                       ; 006019ff
        ;   XREF to: 00601a0e (CONDITIONAL_JUMP)  ; LAB_00601a0e
    PUSH 0x2                            ; 00601a01
    PUSH 0x0                            ; 00601a03
    PUSH EBX                            ; 00601a05
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 00601a06
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    ADD ESP,0xc                         ; 00601a0b
    PUSH EBX                            ; 00601a0e
        ;   Label: LAB_00601a0e
    CALL crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0 ; 00601a0f
        ;   XREF to: 00608ee0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_DetectDeviceAndSetBuffering_FUN_00608ee0(_FILE * file)
    ADD ESP,0x4                         ; 00601a14
    MOV EAX,EBX                         ; 00601a17
    POP EBP                             ; 00601a19
    POP EDI                             ; 00601a1a
    POP ESI                             ; 00601a1b
    POP EBX                             ; 00601a1c
    RET                                 ; 00601a1d

