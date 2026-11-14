; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005cb3d8(PEXCEPTION_RECORD param_1,undefined4 param_2,PCONTEXT param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005cb5a8 at 005cb5d1
;
; Referenced Globals:
;   void* switchdataD_005cb3bc = 005cb422
;   void* PTR_ExitProcess_005d0544 = 001d0d10
;   void* PTR_UnhandledExceptionFilter_005d0670 = 001d1282
;   undefined4 DAT_00626a4c
;   undefined4 DAT_00626a50
;   undefined4 DAT_02c9ff74
;
; Called Functions:
;   crt_unknown.c_FUN_005cd0e0
;   crt_unknown.c_FUN_005cd2b8
;   ExitProcess
;   UnhandledExceptionFilter
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cb3d8
        ;   Label: crt_unknown.c_FUN_005cb3d8
    PUSH ESI                            ; 005cb3d9
    PUSH EDI                            ; 005cb3da
    SUB ESP,0x8                         ; 005cb3db
    MOV ESI,dword ptr [ESP + 0x18]      ; 005cb3de
    MOV EDI,dword ptr [ESP + 0x20]      ; 005cb3e2
    TEST byte ptr [ESI + 0x4],0x6       ; 005cb3e6
    JNZ 0x005cb59a                      ; 005cb3ea
        ;   XREF to: 005cb59a (CONDITIONAL_JUMP)  ; LAB_005cb59a
    MOV EAX,dword ptr [ESI]             ; 005cb3f0
    ADD EAX,0x3fffff73                  ; 005cb3f2
    CMP EAX,0x6                         ; 005cb3f7
    JA 0x005cb522                       ; 005cb3fa
        ;   XREF to: 005cb522 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr CS:[EAX*0x4 + 0x5cb3bc] ; 005cb400 | caseD_c000008d | caseD_c000008e | caseD_c000008f
        ;   Label: switchD
    TEST byte ptr [EDI + 0x21],0x2      ; 005cb408
        ;   Label: caseD_c0000092
    JZ 0x005cb418                       ; 005cb40c
        ;   XREF to: 005cb418 (CONDITIONAL_JUMP)  ; LAB_005cb418
    MOV EBX,0x8a                        ; 005cb40e
    JMP 0x005cb4e3                      ; 005cb413
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    MOV EBX,0x8b                        ; 005cb418
        ;   Label: LAB_005cb418
    JMP 0x005cb4e3                      ; 005cb41d
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    MOV EBX,0x82                        ; 005cb422
        ;   Label: caseD_c000008d
    JMP 0x005cb4e3                      ; 005cb427
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    MOV EBX,0x86                        ; 005cb42c
        ;   Label: caseD_c000008f
    JMP 0x005cb4e3                      ; 005cb431
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    MOV EBX,0x84                        ; 005cb436
        ;   Label: caseD_c0000091
    JMP 0x005cb4e3                      ; 005cb43b
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    MOV EBX,0x85                        ; 005cb440
        ;   Label: caseD_c0000093
    JMP 0x005cb4e3                      ; 005cb445
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    MOV EAX,dword ptr [EDI + 0x28]      ; 005cb44a
        ;   Label: caseD_c0000090
    MOV DX,word ptr [EAX]               ; 005cb44d
    MOV EBX,0x81                        ; 005cb450
    CMP DX,0xfad9                       ; 005cb455
    JNZ 0x005cb466                      ; 005cb45a
        ;   XREF to: 005cb466 (CONDITIONAL_JUMP)  ; LAB_005cb466
    MOV EBX,0x88                        ; 005cb45c
    JMP 0x005cb4e3                      ; 005cb461
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    CMP DX,0xf1d9                       ; 005cb466
        ;   Label: LAB_005cb466
    JNZ 0x005cb477                      ; 005cb46b
        ;   XREF to: 005cb477 (CONDITIONAL_JUMP)  ; LAB_005cb477
    MOV EBX,0x8e                        ; 005cb46d
    JMP 0x005cb4e3                      ; 005cb472
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    JNZ 0x005cb483                      ; 005cb477
        ;   XREF to: 005cb483 (CONDITIONAL_JUMP)  ; LAB_005cb483
        ;   Label: LAB_005cb477
    MOV EBX,0x8f                        ; 005cb479
    JMP 0x005cb4e3                      ; 005cb47e
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    MOV DH,byte ptr [EAX]               ; 005cb483
        ;   Label: LAB_005cb483
    CMP DH,0xdb                         ; 005cb485
    JZ 0x005cb48f                       ; 005cb488
        ;   XREF to: 005cb48f (CONDITIONAL_JUMP)  ; LAB_005cb48f
    CMP DH,0xdf                         ; 005cb48a
    JNZ 0x005cb49f                      ; 005cb48d
        ;   XREF to: 005cb49f (CONDITIONAL_JUMP)  ; LAB_005cb49f
    MOV CL,byte ptr [EAX + 0x1]         ; 005cb48f
        ;   Label: LAB_005cb48f
    AND CL,0x30                         ; 005cb492
    CMP CL,0x10                         ; 005cb495
    JNZ 0x005cb49f                      ; 005cb498
        ;   XREF to: 005cb49f (CONDITIONAL_JUMP)  ; LAB_005cb49f
    MOV EBX,0x8d                        ; 005cb49a
    TEST byte ptr [EAX],0x1             ; 005cb49f
        ;   Label: LAB_005cb49f
    JNZ 0x005cb4de                      ; 005cb4a2
        ;   XREF to: 005cb4de (CONDITIONAL_JUMP)  ; LAB_005cb4de
    MOV AL,byte ptr [EAX + 0x1]         ; 005cb4a4
    AND AL,0x30                         ; 005cb4a7
    CMP AL,0x30                         ; 005cb4a9
    JNZ 0x005cb4de                      ; 005cb4ab
        ;   XREF to: 005cb4de (CONDITIONAL_JUMP)  ; LAB_005cb4de
    MOV ECX,dword ptr [EDI + 0x20]      ; 005cb4ad
    AND ECX,0xffff                      ; 005cb4b0
    MOV EAX,dword ptr [EDI + 0x24]      ; 005cb4b6
    SHL ECX,0x2                         ; 005cb4b9
    AND EAX,0xffff                      ; 005cb4bc
    SHR CX,0xd                          ; 005cb4c1
    AND ECX,0xffff                      ; 005cb4c5
    ADD ECX,ECX                         ; 005cb4cb
    SHR EAX,CL                          ; 005cb4cd
    AND EAX,0x1                         ; 005cb4cf
    CMP EAX,0x1                         ; 005cb4d2
    JNZ 0x005cb4de                      ; 005cb4d5
        ;   XREF to: 005cb4de (CONDITIONAL_JUMP)  ; LAB_005cb4de
    MOV EBX,0x83                        ; 005cb4d7
        ;   Label: caseD_c000008e
    JMP 0x005cb4e3                      ; 005cb4dc
        ;   XREF to: 005cb4e3 (UNCONDITIONAL_JUMP)  ; LAB_005cb4e3
    CMP EBX,-0x1                        ; 005cb4de
        ;   Label: LAB_005cb4de
    JZ 0x005cb522                       ; 005cb4e1
        ;   XREF to: 005cb522 (CONDITIONAL_JUMP)  ; default
    MOV byte ptr [0x02c9ff74],0x1       ; 005cb4e3 | DAT_02c9ff74
        ;   Label: LAB_005cb4e3
    CALL crt_unknown.c_FUN_005cd0e0     ; 005cb4ea
        ;   XREF to: 005cd0e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd0e0()
    PUSH EBX                            ; 005cb4ef
    CALL crt_unknown.c_FUN_005cd2b8     ; 005cb4f0
        ;   XREF to: 005cd2b8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005cd2b8()
    ADD ESP,0x4                         ; 005cb4f5
    CMP EAX,-0x1                        ; 005cb4f8
    JZ 0x005cb57b                       ; 005cb4fb
        ;   XREF to: 005cb57b (CONDITIONAL_JUMP)  ; LAB_005cb57b
    CMP byte ptr [0x02c9ff74],0x0       ; 005cb501 | DAT_02c9ff74
    JZ 0x005cb57b                       ; 005cb508
        ;   XREF to: 005cb57b (CONDITIONAL_JUMP)  ; LAB_005cb57b
    MOV BX,word ptr [EDI + 0x20]        ; 005cb50e
    XOR BL,BL                           ; 005cb512
    AND BH,0x7f                         ; 005cb514
    XOR EAX,EAX                         ; 005cb517
    MOV word ptr [EDI + 0x20],BX        ; 005cb519
    JMP 0x005cb59f                      ; 005cb51d
        ;   XREF to: 005cb59f (UNCONDITIONAL_JUMP)  ; LAB_005cb59f
    CMP dword ptr [0x00626a50],0x0      ; 005cb522 | DAT_00626a50
        ;   Label: default
    JZ 0x005cb57b                       ; 005cb529
        ;   XREF to: 005cb57b (CONDITIONAL_JUMP)  ; LAB_005cb57b
    MOV EBX,0x1                         ; 005cb52b
    MOV ECX,dword ptr [ESI]             ; 005cb530
        ;   Label: LAB_005cb530
    PUSH ECX                            ; 005cb532
    PUSH EBX                            ; 005cb533
    CALL dword ptr [0x00626a4c]         ; 005cb534 | DAT_00626a4c
    ADD ESP,0x8                         ; 005cb53a
    TEST EAX,EAX                        ; 005cb53d
    JZ 0x005cb575                       ; 005cb53f
        ;   XREF to: 005cb575 (CONDITIONAL_JUMP)  ; LAB_005cb575
    CMP EAX,0x1                         ; 005cb541
    JZ 0x005cb57b                       ; 005cb544
        ;   XREF to: 005cb57b (CONDITIONAL_JUMP)  ; LAB_005cb57b
    CMP EAX,0x2                         ; 005cb546
    JZ 0x005cb57b                       ; 005cb549
        ;   XREF to: 005cb57b (CONDITIONAL_JUMP)  ; LAB_005cb57b
    CMP EAX,0x3                         ; 005cb54b
    JZ 0x005cb57b                       ; 005cb54e
        ;   XREF to: 005cb57b (CONDITIONAL_JUMP)  ; LAB_005cb57b
    MOV DL,0x1                          ; 005cb550
    PUSH EBX                            ; 005cb552
    MOV byte ptr [0x02c9ff74],DL        ; 005cb553 | DAT_02c9ff74
    CALL dword ptr [0x00626a50]         ; 005cb559 | DAT_00626a50
    MOV DH,byte ptr [0x02c9ff74]        ; 005cb55f | DAT_02c9ff74
    ADD ESP,0x4                         ; 005cb565
    TEST DH,DH                          ; 005cb568
    JZ 0x005cb575                       ; 005cb56a
        ;   XREF to: 005cb575 (CONDITIONAL_JUMP)  ; LAB_005cb575
    XOR EAX,EAX                         ; 005cb56c
    ADD ESP,0x8                         ; 005cb56e
    POP EDI                             ; 005cb571
    POP ESI                             ; 005cb572
    POP EBX                             ; 005cb573
    RET                                 ; 005cb574
    INC EBX                             ; 005cb575
        ;   Label: LAB_005cb575
    CMP EBX,0xc                         ; 005cb576
    JLE 0x005cb530                      ; 005cb579
        ;   XREF to: 005cb530 (CONDITIONAL_JUMP)  ; LAB_005cb530
    MOV EAX,ESP                         ; 005cb57b
        ;   Label: LAB_005cb57b
    PUSH EAX                            ; 005cb57d
    MOV dword ptr [ESP + 0x4],ESI       ; 005cb57e
    MOV dword ptr [ESP + 0x8],EDI       ; 005cb582
    CALL dword ptr CS:[0x5d0670]        ; 005cb586 | PTR_UnhandledExceptionFilter_005d0670
    TEST EAX,EAX                        ; 005cb58d
    JZ 0x005cb59a                       ; 005cb58f
        ;   XREF to: 005cb59a (CONDITIONAL_JUMP)  ; LAB_005cb59a
    PUSH -0x1                           ; 005cb591
    CALL dword ptr CS:[0x5d0544]        ; 005cb593 | PTR_ExitProcess_005d0544
    MOV EAX,0x1                         ; 005cb59a
        ;   Label: LAB_005cb59a
    ADD ESP,0x8                         ; 005cb59f
        ;   Label: LAB_005cb59f
    POP EDI                             ; 005cb5a2
    POP ESI                             ; 005cb5a3
    POP EBX                             ; 005cb5a4
    RET                                 ; 005cb5a5

