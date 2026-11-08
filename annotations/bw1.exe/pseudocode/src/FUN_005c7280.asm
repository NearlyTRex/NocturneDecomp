; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005c7280(LPCSTR param_1,uint param_2,uint param_3,int *param_4)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_005c7254 at 005c7271
;
; Referenced Globals:
;   void* PTR_CloseHandle_005d051c = 001d0c5a
;   void* PTR_CreateFileA_005d0528 = 001d0c8c
;   undefined4 DAT_005fabb4
;   undefined4 DAT_006264e0
;   void* PTR_FUN_00626608 = 005c50d8
;   undefined4 DAT_0062677c
;   undefined4 DAT_006267e0
;   undefined4 DAT_00626a74
;
; Called Functions:
;   CloseHandle
;   CreateFileA
;   FUN_005c04e0
;   FUN_005c50d8
;   FUN_005c6450
;   FUN_005c862c
;   FUN_005c8b38
;   FUN_005c8b70
;   FUN_005c8db8
;   FUN_005cbc10
;   FUN_005cbc54
;   FUN_005cbcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c7280
        ;   Label: FUN_005c7280
    PUSH ESI                            ; 005c7281
    PUSH EDI                            ; 005c7282
    PUSH EBP                            ; 005c7283
    SUB ESP,0x18                        ; 005c7284
    MOV EDI,dword ptr [ESP + 0x38]      ; 005c7287
    CALL FUN_005c8b70                   ; 005c728b
        ;   XREF to: 005c8b70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8b70()
    TEST EAX,EAX                        ; 005c7290
    JZ 0x005c72a8                       ; 005c7292
        ;   XREF to: 005c72a8 (CONDITIONAL_JUMP)  ; LAB_005c72a8
    PUSH 0xb                            ; 005c7294
    CALL FUN_005c6450                   ; 005c7296
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    MOV EAX,0xffffffff                  ; 005c729b
    ADD ESP,0x4                         ; 005c72a0
    JMP 0x005c74b9                      ; 005c72a3
        ;   XREF to: 005c74b9 (UNCONDITIONAL_JUMP)  ; LAB_005c74b9
    LEA EAX,[ESP + 0x14]                ; 005c72a8
        ;   Label: LAB_005c72a8
    PUSH EAX                            ; 005c72ac
    LEA EAX,[ESP + 0x14]                ; 005c72ad
    MOV ESI,dword ptr [ESP + 0x34]      ; 005c72b1
    PUSH EAX                            ; 005c72b5
    AND ESI,0x7                         ; 005c72b6
    PUSH ESI                            ; 005c72b9
    CALL FUN_005cbc10                   ; 005c72ba
        ;   XREF to: 005cbc10 (UNCONDITIONAL_CALL)  ; undefined FUN_005cbc10()
    ADD ESP,0xc                         ; 005c72bf
    LEA EAX,[ESP + 0xc]                 ; 005c72c2
    PUSH EAX                            ; 005c72c6
    MOV EAX,dword ptr [ESP + 0x38]      ; 005c72c7
    OR EAX,ESI                          ; 005c72cb
    PUSH EAX                            ; 005c72cd
    MOV EBP,0x80                        ; 005c72ce
    CALL FUN_005cbc54                   ; 005c72d3
        ;   XREF to: 005cbc54 (UNCONDITIONAL_CALL)  ; undefined FUN_005cbc54()
    MOV EDX,0xc                         ; 005c72d8
    ADD ESP,0x8                         ; 005c72dd
    XOR ECX,ECX                         ; 005c72e0
    MOV AH,byte ptr [ESP + 0x30]        ; 005c72e2
    MOV dword ptr [ESP],EDX             ; 005c72e6
    MOV dword ptr [ESP + 0x4],ECX       ; 005c72e9
    TEST AH,0x80                        ; 005c72ed
    SETZ AL                             ; 005c72f0
    AND EAX,0xff                        ; 005c72f3
    MOV dword ptr [ESP + 0x8],EAX       ; 005c72f8
    CMP dword ptr [0x0062677c],0x0      ; 005c72fc | DAT_0062677c
    JZ 0x005c7344                       ; 005c7303
        ;   XREF to: 005c7344 (CONDITIONAL_JUMP)  ; LAB_005c7344
    PUSH 0x5fabb4                       ; 005c7305 | DAT_005fabb4
    MOV EDX,dword ptr [ESP + 0x30]      ; 005c730a
    PUSH EDX                            ; 005c730e
    CALL FUN_005c04e0                   ; 005c730f
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 005c7314
    TEST EAX,EAX                        ; 005c7317
    JNZ 0x005c7344                      ; 005c7319
        ;   XREF to: 005c7344 (CONDITIONAL_JUMP)  ; LAB_005c7344
    CALL FUN_005c8db8                   ; 005c731b
        ;   XREF to: 005c8db8 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8db8()
    PUSH EAX                            ; 005c7320
    CALL dword ptr [0x00626608]         ; 005c7321 | PTR_FUN_00626608
    ADD ESP,0x4                         ; 005c7327
    PUSH -0x1                           ; 005c732a
    PUSH EAX                            ; 005c732c
    PUSH 0x0                            ; 005c732d
    MOV EBX,0x2000                      ; 005c732f
    MOV EBP,EAX                         ; 005c7334
    CALL dword ptr [0x0062677c]         ; 005c7336 | DAT_0062677c
    ADD ESP,0xc                         ; 005c733c
    JMP 0x005c7466                      ; 005c733f
        ;   XREF to: 005c7466 (UNCONDITIONAL_JUMP)  ; LAB_005c7466
    MOV DL,byte ptr [ESP + 0x30]        ; 005c7344
        ;   Label: LAB_005c7344
    TEST DL,0x20                        ; 005c7348
    JZ 0x005c73af                       ; 005c734b
        ;   XREF to: 005c73af (CONDITIONAL_JUMP)  ; LAB_005c73af
    MOV EBX,dword ptr [EDI]             ; 005c734d
    ADD EBX,0x4                         ; 005c734f
    MOV dword ptr [EDI],EBX             ; 005c7352
    MOV EAX,dword ptr [EBX + -0x4]      ; 005c7354
    MOV dword ptr [ESP + 0x14],EAX      ; 005c7357
    MOV dword ptr [EDI],0x0             ; 005c735b
    MOV EAX,[0x00626a74]                ; 005c7361 | DAT_00626a74
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c7366
    NOT EAX                             ; 005c736a
    AND ECX,EAX                         ; 005c736c
    MOV dword ptr [ESP + 0x14],ECX      ; 005c736e
    TEST byte ptr [ESP + 0x15],0x1      ; 005c7372
    JZ 0x005c7385                       ; 005c7377
        ;   XREF to: 005c7385 (CONDITIONAL_JUMP)  ; LAB_005c7385
    TEST byte ptr [ESP + 0x14],0x80     ; 005c7379
    JNZ 0x005c7385                      ; 005c737e
        ;   XREF to: 005c7385 (CONDITIONAL_JUMP)  ; LAB_005c7385
    MOV EBP,0x1                         ; 005c7380
    TEST byte ptr [ESP + 0x31],0x4      ; 005c7385
        ;   Label: LAB_005c7385
    JZ 0x005c7395                       ; 005c738a
        ;   XREF to: 005c7395 (CONDITIONAL_JUMP)  ; LAB_005c7395
    MOV EBX,0x1                         ; 005c738c
    MOV EAX,EBX                         ; 005c7391
    JMP 0x005c73c0                      ; 005c7393
        ;   XREF to: 005c73c0 (UNCONDITIONAL_JUMP)  ; LAB_005c73c0
    TEST byte ptr [ESP + 0x30],0x40     ; 005c7395
        ;   Label: LAB_005c7395
    JZ 0x005c73a8                       ; 005c739a
        ;   XREF to: 005c73a8 (CONDITIONAL_JUMP)  ; LAB_005c73a8
    MOV EBX,0x2                         ; 005c739c
    MOV EAX,0x1                         ; 005c73a1
    JMP 0x005c73c0                      ; 005c73a6
        ;   XREF to: 005c73c0 (UNCONDITIONAL_JUMP)  ; LAB_005c73c0
    MOV EBX,0x4                         ; 005c73a8
        ;   Label: LAB_005c73a8
    JMP 0x005c73bb                      ; 005c73ad
        ;   XREF to: 005c73bb (UNCONDITIONAL_JUMP)  ; LAB_005c73bb
    TEST DL,0x40                        ; 005c73af
        ;   Label: LAB_005c73af
    JZ 0x005c73bb                       ; 005c73b2
        ;   XREF to: 005c73bb (CONDITIONAL_JUMP)  ; LAB_005c73bb
    MOV EAX,0x5                         ; 005c73b4
    JMP 0x005c73c0                      ; 005c73b9
        ;   XREF to: 005c73c0 (UNCONDITIONAL_JUMP)  ; LAB_005c73c0
    MOV EAX,0x3                         ; 005c73bb
        ;   Label: LAB_005c73bb
    PUSH 0x0                            ; 005c73c0
        ;   Label: LAB_005c73c0
    PUSH EBP                            ; 005c73c2
    PUSH EAX                            ; 005c73c3
    LEA EAX,[ESP + 0xc]                 ; 005c73c4
    PUSH EAX                            ; 005c73c8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005c73c9
    PUSH EDI                            ; 005c73cd
    MOV EAX,dword ptr [ESP + 0x24]      ; 005c73ce
    PUSH EAX                            ; 005c73d2
    MOV EDX,dword ptr [ESP + 0x44]      ; 005c73d3
    PUSH EDX                            ; 005c73d7
    CALL dword ptr CS:[0x5d0528]        ; 005c73d8 | PTR_CreateFileA_005d0528
    MOV EDI,EAX                         ; 005c73df
    CMP EAX,-0x1                        ; 005c73e1
    JNZ 0x005c741d                      ; 005c73e4
        ;   XREF to: 005c741d (CONDITIONAL_JUMP)  ; LAB_005c741d
    TEST byte ptr [ESP + 0x30],0x20     ; 005c73e6
    JZ 0x005c740b                       ; 005c73eb
        ;   XREF to: 005c740b (CONDITIONAL_JUMP)  ; LAB_005c740b
    PUSH 0x0                            ; 005c73ed
    PUSH EBP                            ; 005c73ef
    PUSH EBX                            ; 005c73f0
    PUSH 0x0                            ; 005c73f1
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c73f3
    PUSH EBX                            ; 005c73f7
    MOV ECX,dword ptr [ESP + 0x24]      ; 005c73f8
    PUSH ECX                            ; 005c73fc
    MOV EDI,dword ptr [ESP + 0x44]      ; 005c73fd
    PUSH EDI                            ; 005c7401
    CALL dword ptr CS:[0x5d0528]        ; 005c7402 | PTR_CreateFileA_005d0528
    MOV EDI,EAX                         ; 005c7409
    CMP EDI,-0x1                        ; 005c740b
        ;   Label: LAB_005c740b
    JNZ 0x005c741d                      ; 005c740e
        ;   XREF to: 005c741d (CONDITIONAL_JUMP)  ; LAB_005c741d
    CALL FUN_005c862c                   ; 005c7410
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined FUN_005c862c()
    ADD ESP,0x18                        ; 005c7415
    POP EBP                             ; 005c7418
    POP EDI                             ; 005c7419
    POP ESI                             ; 005c741a
    POP EBX                             ; 005c741b
    RET                                 ; 005c741c
    PUSH EDI                            ; 005c741d
        ;   Label: LAB_005c741d
    CALL dword ptr [0x00626608]         ; 005c741e | PTR_FUN_00626608
    XOR EBX,EBX                         ; 005c7424
    MOV EDX,dword ptr [0x006267e0]      ; 005c7426 | DAT_006267e0
    ADD ESP,0x4                         ; 005c742c
    MOV EBP,EAX                         ; 005c742f
    CMP EAX,EDX                         ; 005c7431
    JC 0x005c7454                       ; 005c7433
        ;   XREF to: 005c7454 (CONDITIONAL_JUMP)  ; LAB_005c7454
    PUSH EDI                            ; 005c7435
    CALL dword ptr CS:[0x5d051c]        ; 005c7436 | PTR_CloseHandle_005d051c
    PUSH 0x5                            ; 005c743d
    CALL FUN_005c6450                   ; 005c743f
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; undefined FUN_005c6450()
    MOV EAX,0xffffffff                  ; 005c7444
    ADD ESP,0x4                         ; 005c7449
    ADD ESP,0x18                        ; 005c744c
    POP EBP                             ; 005c744f
    POP EDI                             ; 005c7450
    POP ESI                             ; 005c7451
    POP EBX                             ; 005c7452
    RET                                 ; 005c7453
    PUSH EAX                            ; 005c7454
        ;   Label: LAB_005c7454
    CALL FUN_005cbcc0                   ; 005c7455
        ;   XREF to: 005cbcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_005cbcc0()
    ADD ESP,0x4                         ; 005c745a
    TEST EAX,EAX                        ; 005c745d
    JZ 0x005c7466                       ; 005c745f
        ;   XREF to: 005c7466 (CONDITIONAL_JUMP)  ; LAB_005c7466
    MOV EBX,0x2000                      ; 005c7461
    CMP ESI,0x2                         ; 005c7466
        ;   Label: LAB_005c7466
    JNZ 0x005c7470                      ; 005c7469
        ;   XREF to: 005c7470 (CONDITIONAL_JUMP)  ; LAB_005c7470
    OR BL,0x3                           ; 005c746b
    JMP 0x005c7481                      ; 005c746e
        ;   XREF to: 005c7481 (UNCONDITIONAL_JUMP)  ; LAB_005c7481
    TEST ESI,ESI                        ; 005c7470
        ;   Label: LAB_005c7470
    JNZ 0x005c7479                      ; 005c7472
        ;   XREF to: 005c7479 (CONDITIONAL_JUMP)  ; LAB_005c7479
    OR BL,0x1                           ; 005c7474
    JMP 0x005c7481                      ; 005c7477
        ;   XREF to: 005c7481 (UNCONDITIONAL_JUMP)  ; LAB_005c7481
    CMP ESI,0x1                         ; 005c7479
        ;   Label: LAB_005c7479
    JNZ 0x005c7481                      ; 005c747c
        ;   XREF to: 005c7481 (CONDITIONAL_JUMP)  ; LAB_005c7481
    OR BL,0x2                           ; 005c747e
    TEST byte ptr [ESP + 0x30],0x10     ; 005c7481
        ;   Label: LAB_005c7481
    JZ 0x005c748b                       ; 005c7486
        ;   XREF to: 005c748b (CONDITIONAL_JUMP)  ; LAB_005c748b
    OR BL,0x80                          ; 005c7488
    MOV EAX,EBX                         ; 005c748b
        ;   Label: LAB_005c748b
    MOV DL,byte ptr [ESP + 0x31]        ; 005c748d
    OR AL,0x40                          ; 005c7491
    TEST DL,0x3                         ; 005c7493
    JZ 0x005c749f                       ; 005c7496
        ;   XREF to: 005c749f (CONDITIONAL_JUMP)  ; LAB_005c749f
    TEST DL,0x2                         ; 005c7498
    JZ 0x005c74ad                       ; 005c749b
        ;   XREF to: 005c74ad (CONDITIONAL_JUMP)  ; LAB_005c74ad
    JMP 0x005c74ab                      ; 005c749d
        ;   XREF to: 005c74ab (UNCONDITIONAL_JUMP)  ; LAB_005c74ab
    CMP dword ptr [0x006264e0],0x200    ; 005c749f | DAT_006264e0
        ;   Label: LAB_005c749f
    JNZ 0x005c74ad                      ; 005c74a9
        ;   XREF to: 005c74ad (CONDITIONAL_JUMP)  ; LAB_005c74ad
    MOV EBX,EAX                         ; 005c74ab
        ;   Label: LAB_005c74ab
    PUSH EBX                            ; 005c74ad
        ;   Label: LAB_005c74ad
    PUSH EBP                            ; 005c74ae
    CALL FUN_005c8b38                   ; 005c74af
        ;   XREF to: 005c8b38 (UNCONDITIONAL_CALL)  ; undefined FUN_005c8b38()
    ADD ESP,0x8                         ; 005c74b4
    MOV EAX,EBP                         ; 005c74b7
    ADD ESP,0x18                        ; 005c74b9
        ;   Label: LAB_005c74b9
    POP EBP                             ; 005c74bc
    POP EDI                             ; 005c74bd
    POP ESI                             ; 005c74be
    POP EBX                             ; 005c74bf
    RET                                 ; 005c74c0

