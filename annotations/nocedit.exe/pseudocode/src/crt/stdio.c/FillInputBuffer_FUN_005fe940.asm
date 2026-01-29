; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_stdio_c_FillInputBuffer_FUN_005fe940(_FILE *file)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file
;
; XREF[2]:
;   crt_stdio.c_FillBufferAndGetChar_FUN_005fe910 at 005fe916
;   crt_stdio.c_fread_FUN_005fd990 at 005fdae3
;
; Called Functions:
;   crt_stdio.c_FlushFilesByMask_FUN_0060595c
;   crt_stdio.c_InitializeFileBuffer_FUN_006027e0
;   crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
;   crt_stdio.c_SetupConsoleInputMode_FUN_006059b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fe940
        ;   Label: crt_stdio.c_FillInputBuffer_FUN_005fe940
    PUSH ESI                            ; 005fe941
    PUSH EDI                            ; 005fe942
    PUSH EBP                            ; 005fe943
    MOV EBX,dword ptr [ESP + 0x14]      ; 005fe944
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fe948
    CMP dword ptr [EAX + 0x8],0x0       ; 005fe94b
    JNZ 0x005fe95a                      ; 005fe94f
        ;   XREF to: 005fe95a (CONDITIONAL_JUMP)  ; LAB_005fe95a
    PUSH EBX                            ; 005fe951
    CALL crt_stdio.c_InitializeFileBuffer_FUN_006027e0 ; 005fe952
        ;   XREF to: 006027e0 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_InitializeFileBuffer_FUN_006027e0(_FILE * file)
    ADD ESP,0x4                         ; 005fe957
    MOV AH,byte ptr [EBX + 0xd]         ; 005fe95a
        ;   Label: LAB_005fe95a
    TEST AH,0x20                        ; 005fe95d
    JZ 0x005fe974                       ; 005fe960
        ;   XREF to: 005fe974 (CONDITIONAL_JUMP)  ; LAB_005fe974
    TEST AH,0x6                         ; 005fe962
    JZ 0x005fe974                       ; 005fe965
        ;   XREF to: 005fe974 (CONDITIONAL_JUMP)  ; LAB_005fe974
    PUSH 0x2000                         ; 005fe967
    CALL crt_stdio.c_FlushFilesByMask_FUN_0060595c ; 005fe96c
        ;   XREF to: 0060595c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_FlushFilesByMask_FUN_0060595c(uint file_mode_mask)
    ADD ESP,0x4                         ; 005fe971
    MOV DH,byte ptr [EBX + 0xc]         ; 005fe974
        ;   Label: LAB_005fe974
    AND DH,0xfb                         ; 005fe977
    MOV EAX,dword ptr [EBX + 0x8]       ; 005fe97a
    MOV byte ptr [EBX + 0xc],DH         ; 005fe97d
    MOV EAX,dword ptr [EAX + 0x8]       ; 005fe980
    MOV dword ptr [EBX],EAX             ; 005fe983
    MOV EAX,dword ptr [EBX + 0xc]       ; 005fe985
    AND EAX,0x2400                      ; 005fe988
    CMP EAX,0x2400                      ; 005fe98d
    JNZ 0x005fe9b7                      ; 005fe992
        ;   XREF to: 005fe9b7 (CONDITIONAL_JUMP)  ; LAB_005fe9b7
    MOV ECX,dword ptr [EBX + 0x10]      ; 005fe994
    TEST ECX,ECX                        ; 005fe997
    JNZ 0x005fe9b7                      ; 005fe999
        ;   XREF to: 005fe9b7 (CONDITIONAL_JUMP)  ; LAB_005fe9b7
    MOV dword ptr [EBX + 0x4],ECX       ; 005fe99b
    CALL crt_stdio.c_SetupConsoleInputMode_FUN_006059b0 ; 005fe99e
        ;   XREF to: 006059b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_SetupConsoleInputMode_FUN_006059b0()
    MOV EDX,EAX                         ; 005fe9a3
    CMP EAX,-0x1                        ; 005fe9a5
    JZ 0x005fe9da                       ; 005fe9a8
        ;   XREF to: 005fe9da (CONDITIONAL_JUMP)  ; LAB_005fe9da
    MOV EAX,dword ptr [EBX]             ; 005fe9aa
    MOV byte ptr [EAX],DL               ; 005fe9ac
    MOV dword ptr [EBX + 0x4],0x1       ; 005fe9ae
    JMP 0x005fe9ff                      ; 005fe9b5
        ;   XREF to: 005fe9ff (UNCONDITIONAL_JUMP)  ; LAB_005fe9ff
    TEST byte ptr [EBX + 0xd],0x4       ; 005fe9b7
        ;   Label: LAB_005fe9b7
    JZ 0x005fe9c4                       ; 005fe9bb
        ;   XREF to: 005fe9c4 (CONDITIONAL_JUMP)  ; LAB_005fe9c4
    MOV EAX,0x1                         ; 005fe9bd
    JMP 0x005fe9c7                      ; 005fe9c2
        ;   XREF to: 005fe9c7 (UNCONDITIONAL_JUMP)  ; LAB_005fe9c7
    MOV EAX,dword ptr [EBX + 0x14]      ; 005fe9c4
        ;   Label: LAB_005fe9c4
    PUSH EAX                            ; 005fe9c7
        ;   Label: LAB_005fe9c7
    MOV ESI,dword ptr [EBX]             ; 005fe9c8
    PUSH ESI                            ; 005fe9ca
    MOV EDI,dword ptr [EBX + 0x10]      ; 005fe9cb
    PUSH EDI                            ; 005fe9ce
    CALL crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880 ; 005fe9cf
        ;   XREF to: 00602880 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880(int file_handle_index, void * buffer, int bytes_to_read)
    ADD ESP,0xc                         ; 005fe9d4
    MOV dword ptr [EBX + 0x4],EAX       ; 005fe9d7
    MOV EBP,dword ptr [EBX + 0x4]       ; 005fe9da
        ;   Label: LAB_005fe9da
    TEST EBP,EBP                        ; 005fe9dd
    JG 0x005fe9ff                       ; 005fe9df
        ;   XREF to: 005fe9ff (CONDITIONAL_JUMP)  ; LAB_005fe9ff
    JNZ 0x005fe9ef                      ; 005fe9e1
        ;   XREF to: 005fe9ef (CONDITIONAL_JUMP)  ; LAB_005fe9ef
    OR byte ptr [EBX + 0xc],0x10        ; 005fe9e3
    MOV EAX,dword ptr [EBX + 0x4]       ; 005fe9e7
    POP EBP                             ; 005fe9ea
    POP EDI                             ; 005fe9eb
    POP ESI                             ; 005fe9ec
    POP EBX                             ; 005fe9ed
    RET                                 ; 005fe9ee
    MOV CH,byte ptr [EBX + 0xc]         ; 005fe9ef
        ;   Label: LAB_005fe9ef
    MOV dword ptr [EBX + 0x4],0x0       ; 005fe9f2
    OR CH,0x20                          ; 005fe9f9
    MOV byte ptr [EBX + 0xc],CH         ; 005fe9fc
    MOV EAX,dword ptr [EBX + 0x4]       ; 005fe9ff
        ;   Label: LAB_005fe9ff
    POP EBP                             ; 005fea02
    POP EDI                             ; 005fea03
    POP ESI                             ; 005fea04
    POP EBX                             ; 005fea05
    RET                                 ; 005fea06

