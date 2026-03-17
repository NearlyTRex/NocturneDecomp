; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_fstream_cpp_convertModesAndOpenFile_FUN_0060c340(char *filename,int *iostream_mode,int permissions)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; int *            Stack[0x8]:4   iostream_mode
; int              Stack[0xc]:4   permissions
;
; XREF[1]:
;   crt_fstream.cpp_filebuf_open_FUN_00608c15 at 00608c75
;
; Called Functions:
;   crt_io.c_getFileStat_FUN_00607e64
;   crt_stdio.c_CreateFileVariadic_FUN_00609074
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c340
        ;   Label: crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340
    PUSH ESI                            ; 0060c341
    SUB ESP,0x48                        ; 0060c342
    MOV ECX,dword ptr [ESP + 0x58]      ; 0060c345
    MOV EAX,dword ptr [ECX]             ; 0060c349
    MOV EDX,EAX                         ; 0060c34b
    AND EDX,0x3                         ; 0060c34d
    CMP EDX,0x3                         ; 0060c350
    JNZ 0x0060c35c                      ; 0060c353
        ;   XREF to: 0060c35c (CONDITIONAL_JUMP)  ; LAB_0060c35c
    MOV EBX,0x22                        ; 0060c355
    JMP 0x0060c377                      ; 0060c35a
        ;   XREF to: 0060c377 (UNCONDITIONAL_JUMP)  ; LAB_0060c377
    TEST AL,0x1                         ; 0060c35c
        ;   Label: LAB_0060c35c
    JZ 0x0060c364                       ; 0060c35e
        ;   XREF to: 0060c364 (CONDITIONAL_JUMP)  ; LAB_0060c364
    XOR EBX,EBX                         ; 0060c360
    JMP 0x0060c377                      ; 0060c362
        ;   XREF to: 0060c377 (UNCONDITIONAL_JUMP)  ; LAB_0060c377
    TEST AL,0x2                         ; 0060c364
        ;   Label: LAB_0060c364
    JNZ 0x0060c372                      ; 0060c366
        ;   XREF to: 0060c372 (CONDITIONAL_JUMP)  ; LAB_0060c372
    MOV EAX,0xffffffff                  ; 0060c368
    JMP 0x0060c42c                      ; 0060c36d
        ;   XREF to: 0060c42c (UNCONDITIONAL_JUMP)  ; LAB_0060c42c
    MOV EBX,0x21                        ; 0060c372
        ;   Label: LAB_0060c372
    TEST AL,0x8                         ; 0060c377
        ;   Label: LAB_0060c377
    JZ 0x0060c37e                       ; 0060c379
        ;   XREF to: 0060c37e (CONDITIONAL_JUMP)  ; LAB_0060c37e
    OR BL,0x10                          ; 0060c37b
    TEST AL,0x10                        ; 0060c37e
        ;   Label: LAB_0060c37e
    JZ 0x0060c385                       ; 0060c380
        ;   XREF to: 0060c385 (CONDITIONAL_JUMP)  ; LAB_0060c385
    OR BL,0x40                          ; 0060c382
    TEST AL,0x20                        ; 0060c385
        ;   Label: LAB_0060c385
    JZ 0x0060c38c                       ; 0060c387
        ;   XREF to: 0060c38c (CONDITIONAL_JUMP)  ; LAB_0060c38c
    AND BL,0xdf                         ; 0060c389
    TEST AH,0x1                         ; 0060c38c
        ;   Label: LAB_0060c38c
    JZ 0x0060c396                       ; 0060c38f
        ;   XREF to: 0060c396 (CONDITIONAL_JUMP)  ; LAB_0060c396
    OR BH,0x2                           ; 0060c391
    JMP 0x0060c3a0                      ; 0060c394
        ;   XREF to: 0060c3a0 (UNCONDITIONAL_JUMP)  ; LAB_0060c3a0
    MOV DL,byte ptr [ECX]               ; 0060c396
        ;   Label: LAB_0060c396
    OR DL,0x80                          ; 0060c398
    OR BH,0x1                           ; 0060c39b
    MOV byte ptr [ECX],DL               ; 0060c39e
    TEST AL,0x40                        ; 0060c3a0
        ;   Label: LAB_0060c3a0
    JZ 0x0060c3cc                       ; 0060c3a2
        ;   XREF to: 0060c3cc (CONDITIONAL_JUMP)  ; LAB_0060c3cc
    MOV EAX,EBX                         ; 0060c3a4
    OR AL,0x20                          ; 0060c3a6
    TEST EAX,EAX                        ; 0060c3a8
    JZ 0x0060c3cc                       ; 0060c3aa
        ;   XREF to: 0060c3cc (CONDITIONAL_JUMP)  ; LAB_0060c3cc
    MOV EAX,ESP                         ; 0060c3ac
    PUSH EAX                            ; 0060c3ae
    MOV EDX,dword ptr [ESP + 0x58]      ; 0060c3af
    PUSH EDX                            ; 0060c3b3
    CALL crt_io.c_getFileStat_FUN_00607e64 ; 0060c3b4
        ;   XREF to: 00607e64 (UNCONDITIONAL_CALL)  ; int crt_io.c_getFileStat_FUN_00607e64(char * filename, _stat * file_info)
    ADD ESP,0x8                         ; 0060c3b9
    CMP EAX,-0x1                        ; 0060c3bc
    JZ 0x0060c3cc                       ; 0060c3bf
        ;   XREF to: 0060c3cc (CONDITIONAL_JUMP)  ; LAB_0060c3cc
    MOV EAX,0xffffffff                  ; 0060c3c1
    ADD ESP,0x48                        ; 0060c3c6
    POP ESI                             ; 0060c3c9
    POP EBX                             ; 0060c3ca
    RET                                 ; 0060c3cb
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0060c3cc
        ;   Label: LAB_0060c3cc
    AND EAX,0x7000                      ; 0060c3d0
    XOR EDX,EDX                         ; 0060c3d5
    CMP EAX,0x2000                      ; 0060c3d7
    JC 0x0060c3f2                       ; 0060c3dc
        ;   XREF to: 0060c3f2 (CONDITIONAL_JUMP)  ; LAB_0060c3f2
    JBE 0x0060c400                      ; 0060c3de
        ;   XREF to: 0060c400 (CONDITIONAL_JUMP)  ; LAB_0060c400
    CMP EAX,0x3000                      ; 0060c3e0
    JC 0x0060c413                       ; 0060c3e5
        ;   XREF to: 0060c413 (CONDITIONAL_JUMP)  ; LAB_0060c413
    JBE 0x0060c407                      ; 0060c3e7
        ;   XREF to: 0060c407 (CONDITIONAL_JUMP)  ; LAB_0060c407
    CMP EAX,0x4000                      ; 0060c3e9
    JZ 0x0060c40e                       ; 0060c3ee
        ;   XREF to: 0060c40e (CONDITIONAL_JUMP)  ; LAB_0060c40e
    JMP 0x0060c413                      ; 0060c3f0
        ;   XREF to: 0060c413 (UNCONDITIONAL_JUMP)  ; LAB_0060c413
    CMP EAX,0x1000                      ; 0060c3f2
        ;   Label: LAB_0060c3f2
    JNZ 0x0060c413                      ; 0060c3f7
        ;   XREF to: 0060c413 (CONDITIONAL_JUMP)  ; LAB_0060c413
    MOV EDX,0x20                        ; 0060c3f9
    JMP 0x0060c413                      ; 0060c3fe
        ;   XREF to: 0060c413 (UNCONDITIONAL_JUMP)  ; LAB_0060c413
    MOV EDX,0x30                        ; 0060c400
        ;   Label: LAB_0060c400
    JMP 0x0060c413                      ; 0060c405
        ;   XREF to: 0060c413 (UNCONDITIONAL_JUMP)  ; LAB_0060c413
    MOV EDX,0x40                        ; 0060c407
        ;   Label: LAB_0060c407
    JMP 0x0060c413                      ; 0060c40c
        ;   XREF to: 0060c413 (UNCONDITIONAL_JUMP)  ; LAB_0060c413
    MOV EDX,0x10                        ; 0060c40e
        ;   Label: LAB_0060c40e
    AND byte ptr [ESP + 0x5d],0x8f      ; 0060c413
        ;   Label: LAB_0060c413
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0060c418
    PUSH ECX                            ; 0060c41c
    PUSH EDX                            ; 0060c41d
    PUSH EBX                            ; 0060c41e
    MOV ESI,dword ptr [ESP + 0x60]      ; 0060c41f
    PUSH ESI                            ; 0060c423
    CALL crt_stdio.c_CreateFileVariadic_FUN_00609074 ; 0060c424
        ;   XREF to: 00609074 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_CreateFileVariadic_FUN_00609074(char * filename, int access_mode, int share_mode)
    ADD ESP,0x10                        ; 0060c429
    ADD ESP,0x48                        ; 0060c42c
        ;   Label: LAB_0060c42c
    POP ESI                             ; 0060c42f
    POP EBX                             ; 0060c430
    RET                                 ; 0060c431

