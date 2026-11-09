; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_fldnotes_cpp_FUN_004bc2d0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bcba0 at 004bcce8
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005dfc3e
;   TerminatedCString s_Out_of_memory_005dfc53
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_realloc_FUN_005c10d0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_alphabit.cpp_FUN_0040d0e0
;   engine_alphabit.cpp_FUN_0040d970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bc2d0
        ;   Label: core_fldnotes.cpp_FUN_004bc2d0
    PUSH ESI                            ; 004bc2d1
    PUSH EDI                            ; 004bc2d2
    PUSH EBP                            ; 004bc2d3
    SUB ESP,0x14                        ; 004bc2d4
    MOV EBX,dword ptr [ESP + 0x28]      ; 004bc2d7
    MOV EDX,dword ptr [EBX + 0x6c]      ; 004bc2db
    PUSH EDX                            ; 004bc2de
    MOV ECX,dword ptr [EBX + 0x68]      ; 004bc2df
    PUSH ECX                            ; 004bc2e2
    LEA EAX,[EBX + 0x4]                 ; 004bc2e3
    PUSH EAX                            ; 004bc2e6
    LEA EAX,[EBX + 0x70]                ; 004bc2e7
    PUSH EAX                            ; 004bc2ea
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004bc2eb
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV EAX,dword ptr [EBX + 0x7c]      ; 004bc2f0
    IMUL EAX,dword ptr [EBX + 0x80]     ; 004bc2f3
    ADD ESP,0x10                        ; 004bc2fa
    PUSH EAX                            ; 004bc2fd
    MOV EDI,dword ptr [EBX + 0x84]      ; 004bc2fe
    PUSH EDI                            ; 004bc304
    CALL crt_memory.c_realloc_FUN_005c10d0 ; 004bc305
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005c10d0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 004bc30a
    MOV dword ptr [EBX + 0x84],EAX      ; 004bc30d
    TEST EAX,EAX                        ; 004bc313
    JZ 0x004bc428                       ; 004bc315
        ;   XREF to: 004bc428 (CONDITIONAL_JUMP)  ; LAB_004bc428
    MOV EAX,dword ptr [EBX + 0x7c]      ; 004bc31b
        ;   Label: LAB_004bc31b
    MOV ECX,dword ptr [EBX + 0x80]      ; 004bc31e
    IMUL ECX,EAX                        ; 004bc324
    MOV ESI,dword ptr [EBX + 0x74]      ; 004bc327
    MOV EDI,dword ptr [EBX + 0x84]      ; 004bc32a
    PUSH EDI                            ; 004bc330
    MOV EAX,ECX                         ; 004bc331
    SHR ECX,0x2                         ; 004bc333
    MOVSD.REP ES:EDI,ESI                ; 004bc336
    MOV CL,AL                           ; 004bc338
    AND CL,0x3                          ; 004bc33a
    MOVSB.REP ES:EDI,ESI                ; 004bc33d
    POP EDI                             ; 004bc33f
    MOV EAX,dword ptr [EBX + 0x68]      ; 004bc340
    MOV EDX,EAX                         ; 004bc343
    SAR EDX,0x1f                        ; 004bc345
    SUB EAX,EDX                         ; 004bc348
    SAR EAX,0x1                         ; 004bc34a
    MOV ECX,EAX                         ; 004bc34c
    MOV EAX,dword ptr [EBX + 0x6c]      ; 004bc34e
    MOV EDX,EAX                         ; 004bc351
    SAR EDX,0x1f                        ; 004bc353
    SUB EAX,EDX                         ; 004bc356
    SAR EAX,0x1                         ; 004bc358
    CMP ECX,0x1                         ; 004bc35a
    JGE 0x004bc364                      ; 004bc35d
        ;   XREF to: 004bc364 (CONDITIONAL_JUMP)  ; LAB_004bc364
    MOV ECX,0x1                         ; 004bc35f
    CMP EAX,0x1                         ; 004bc364
        ;   Label: LAB_004bc364
    JGE 0x004bc36e                      ; 004bc367
        ;   XREF to: 004bc36e (CONDITIONAL_JUMP)  ; LAB_004bc36e
    MOV EAX,0x1                         ; 004bc369
    PUSH EAX                            ; 004bc36e
        ;   Label: LAB_004bc36e
    PUSH ECX                            ; 004bc36f
    LEA ESI,[EBX + 0x88]                ; 004bc370
    PUSH ESI                            ; 004bc376
    CALL engine_alphabit.cpp_FUN_0040d0e0 ; 004bc377
        ;   XREF to: 0040d0e0 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d0e0()
    ADD ESP,0xc                         ; 004bc37c
    PUSH 0x0                            ; 004bc37f
    PUSH ESI                            ; 004bc381
    CALL engine_alphabit.cpp_FUN_0040d970 ; 004bc382
        ;   XREF to: 0040d970 (UNCONDITIONAL_CALL)  ; undefined engine_alphabit.cpp_FUN_0040d970()
    ADD ESP,0x8                         ; 004bc387
    MOV ESI,dword ptr [EBX + 0x9c]      ; 004bc38a
    XOR ECX,ECX                         ; 004bc390
    TEST ESI,ESI                        ; 004bc392
    JLE 0x004bc420                      ; 004bc394
        ;   XREF to: 004bc420 (CONDITIONAL_JUMP)  ; LAB_004bc420
    LEA EDX,[EBX + 0xa0]                ; 004bc39a
    MOV ESI,dword ptr [EDX + 0x64]      ; 004bc3a0
        ;   Label: LAB_004bc3a0
    MOV EDI,dword ptr [EDX + 0x6c]      ; 004bc3a3
    MOV EAX,dword ptr [EDX + 0x68]      ; 004bc3a6
    MOV EBP,dword ptr [EDX + 0x70]      ; 004bc3a9
    SUB ESI,EDI                         ; 004bc3ac
    SUB EAX,EBP                         ; 004bc3ae
    IMUL ESI,EAX                        ; 004bc3b0
    FLD float ptr [EDX + 0x74]          ; 004bc3b3
    FSUB float ptr [EDX + 0x7c]         ; 004bc3b6
    FLD float ptr [EDX + 0x78]          ; 004bc3b9
    FSUB float ptr [EDX + 0x80]         ; 004bc3bc
    FMULP                               ; 004bc3c2
    FABS                                ; 004bc3c4
    MOV dword ptr [ESP + 0x10],ESI      ; 004bc3c6
    FILD dword ptr [ESP + 0x10]         ; 004bc3ca
    FABS                                ; 004bc3ce
    FDIVRP                              ; 004bc3d0
    MOV ESI,dword ptr [EBX + 0x98]      ; 004bc3d2
    MOV EAX,dword ptr [EBX + 0x94]      ; 004bc3d8
    IMUL EAX,ESI                        ; 004bc3de
    MOV EDI,dword ptr [EBX + 0x6c]      ; 004bc3e1
    MOV dword ptr [ESP + 0x10],EAX      ; 004bc3e4
    MOV EAX,dword ptr [EBX + 0x68]      ; 004bc3e8
    IMUL EAX,EDI                        ; 004bc3eb
    FILD dword ptr [ESP + 0x10]         ; 004bc3ee
    MOV dword ptr [ESP + 0x10],EAX      ; 004bc3f2
    FMULP                               ; 004bc3f6
    FILD dword ptr [ESP + 0x10]         ; 004bc3f8
    FDIVP                               ; 004bc3fc
    FSQRT                               ; 004bc3fe
    INC ECX                             ; 004bc400
    FSTP float ptr [EDX + 0x84]         ; 004bc401
    MOV EBP,dword ptr [EBX + 0x9c]      ; 004bc407
    ADD EDX,0x88                        ; 004bc40d
    CMP ECX,EBP                         ; 004bc413
    JL 0x004bc3a0                       ; 004bc415
        ;   XREF to: 004bc3a0 (CONDITIONAL_JUMP)  ; LAB_004bc3a0
    LEA EAX,[EAX]                       ; 004bc417
    LEA EDX,[EDX]                       ; 004bc41d
    ADD ESP,0x14                        ; 004bc420
        ;   Label: LAB_004bc420
    POP EBP                             ; 004bc423
    POP EDI                             ; 004bc424
    POP ESI                             ; 004bc425
    POP EBX                             ; 004bc426
    RET                                 ; 004bc427
    MOV EAX,0x5dfc3e                    ; 004bc428 | = "..\\core\\fldnotes.cpp"
        ;   Label: LAB_004bc428
    MOV EDX,0x783                       ; 004bc42d
    PUSH 0x5dfc53                       ; 004bc432 | = "Out of memory!"
    MOV [0x01d1d400],EAX                ; 004bc437 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004bc43c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bc442
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bc447
    JMP 0x004bc31b                      ; 004bc44a
        ;   XREF to: 004bc31b (UNCONDITIONAL_JUMP)  ; LAB_004bc31b

