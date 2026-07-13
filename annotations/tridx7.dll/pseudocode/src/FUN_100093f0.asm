; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_100093f0(LPCSTR param_1,uint param_2,undefined4 param_3,uint param_4)
;
; Local Variables:
; undefined        Stack[-0x19]:1  local_19
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   __openfile at 10006b8e
;
; Referenced Globals:
;   IMAGE_DOS_HEADER IMAGE_DOS_HEADER_10000000
;   void* switchdataD_10009808 = 100094d6
;   void* PTR_caseD_20_1000980c = 100094e0
;   undefined4 DAT_10016d60
;   undefined4 DAT_100178f4
;   undefined4 DAT_10241870
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_CloseHandle_102421cc = 00242428
;   void* PTR_GetFileType_10242200 = 002424f8
;   void* PTR_CreateFileA_10242244 = 0024262e
;
; Called Functions:
;   __alloc_osfhnd
;   __chsize_lk
;   __close
;   __dosmaperr
;   __lseek_lk
;   __unlock_fhandle
;   CloseHandle
;   CreateFileA
;   FUN_10008a20
;   FUN_10008a30
;   FUN_10008b80
;   FUN_1000b720
;   GetFileType
;   GetLastError
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 100093f0
        ;   Label: FUN_100093f0
    XOR EAX,EAX                         ; 100093f3
    MOV dword ptr [ESP + 0x14],EAX      ; 100093f5
    PUSH EBX                            ; 100093f9
    MOV dword ptr [ESP + 0x1c],EAX      ; 100093fa
    PUSH ESI                            ; 100093fe
    MOV ESI,dword ptr [ESP + 0x2c]      ; 100093ff
    PUSH EDI                            ; 10009403
    MOV dword ptr [ESP + 0x1c],0xc      ; 10009404
    TEST ESI,0x80                       ; 1000940c
    PUSH EBP                            ; 10009412
    JNZ 0x1000941d                      ; 10009413
        ;   XREF to: 1000941d (CONDITIONAL_JUMP)  ; LAB_1000941d
    MOV dword ptr [ESP + 0x28],0x1      ; 10009415
    TEST ESI,0x8000                     ; 1000941d
        ;   Label: LAB_1000941d
    JZ 0x10009429                       ; 10009423
        ;   XREF to: 10009429 (CONDITIONAL_JUMP)  ; LAB_10009429
    XOR BL,BL                           ; 10009425
    JMP 0x10009448                      ; 10009427
        ;   XREF to: 10009448 (UNCONDITIONAL_JUMP)  ; LAB_10009448
    TEST ESI,0x4000                     ; 10009429
        ;   Label: LAB_10009429
    MOV BL,0x80                         ; 1000942f
    JNZ 0x10009448                      ; 10009431
        ;   XREF to: 10009448 (CONDITIONAL_JUMP)  ; LAB_10009448
    MOV EAX,[0x100178f4]                ; 10009433 | DAT_100178f4
    MOV BL,0x0                          ; 10009438
    SUB EAX,0x8000                      ; 1000943a
    CMP EAX,0x1                         ; 1000943f
    ADC BL,0xff                         ; 10009442
    AND BL,0x80                         ; 10009445
    MOV EAX,ESI                         ; 10009448
        ;   Label: LAB_10009448
    AND EAX,0x3                         ; 1000944a
    JZ 0x1000947c                       ; 1000944d
        ;   XREF to: 1000947c (CONDITIONAL_JUMP)  ; LAB_1000947c
    CMP EAX,0x1                         ; 1000944f
    JZ 0x10009486                       ; 10009452
        ;   XREF to: 10009486 (CONDITIONAL_JUMP)  ; LAB_10009486
    CMP EAX,0x2                         ; 10009454
    JZ 0x10009490                       ; 10009457
        ;   XREF to: 10009490 (CONDITIONAL_JUMP)  ; LAB_10009490
    CALL FUN_10008a20                   ; 10009459
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
    MOV dword ptr [EAX],0x16            ; 1000945e
    CALL FUN_10008a30                   ; 10009464
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    POP EBP                             ; 10009469
    MOV dword ptr [EAX],0x0             ; 1000946a
    MOV EAX,0xffffffff                  ; 10009470
    POP EDI                             ; 10009475
    POP ESI                             ; 10009476
    POP EBX                             ; 10009477
    ADD ESP,0x1c                        ; 10009478
    RET                                 ; 1000947b
    MOV dword ptr [ESP + 0x18],0x80000000 ; 1000947c
        ;   Label: LAB_1000947c
    JMP 0x10009498                      ; 10009484
        ;   XREF to: 10009498 (UNCONDITIONAL_JUMP)  ; LAB_10009498
    MOV dword ptr [ESP + 0x18],0x40000000 ; 10009486
        ;   Label: LAB_10009486
    JMP 0x10009498                      ; 1000948e
        ;   XREF to: 10009498 (UNCONDITIONAL_JUMP)  ; LAB_10009498
    MOV dword ptr [ESP + 0x18],0xc0000000 ; 10009490
        ;   Label: LAB_10009490
    MOV EAX,dword ptr [ESP + 0x38]      ; 10009498
        ;   Label: LAB_10009498
    SUB EAX,0x10                        ; 1000949c
    CMP EAX,0x30                        ; 1000949f
    JA 0x100094b3                       ; 100094a2
        ;   XREF to: 100094b3 (CONDITIONAL_JUMP)  ; caseD_3f
    XOR ECX,ECX                         ; 100094a4
    MOV CL,byte ptr [EAX + 0x1000981c]  ; 100094a6 | PTR_caseD_20_1000980c
    JMP dword ptr [ECX*0x4 + 0x10009808] ; 100094ac | caseD_10 | caseD_3f | caseD_20
        ;   Label: switchD
    CALL FUN_10008a20                   ; 100094b3
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: caseD_11
    MOV dword ptr [EAX],0x16            ; 100094b8
    CALL FUN_10008a30                   ; 100094be
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    POP EBP                             ; 100094c3
    MOV dword ptr [EAX],0x0             ; 100094c4
    MOV EAX,0xffffffff                  ; 100094ca
    POP EDI                             ; 100094cf
    POP ESI                             ; 100094d0
    POP EBX                             ; 100094d1
    ADD ESP,0x1c                        ; 100094d2
    RET                                 ; 100094d5
    MOV dword ptr [ESP + 0x14],0x0      ; 100094d6
        ;   Label: caseD_10
    JMP 0x100094fc                      ; 100094de
        ;   XREF to: 100094fc (UNCONDITIONAL_JUMP)  ; LAB_100094fc
    MOV dword ptr [ESP + 0x14],0x1      ; 100094e0
        ;   Label: caseD_20
    JMP 0x100094fc                      ; 100094e8
        ;   XREF to: 100094fc (UNCONDITIONAL_JUMP)  ; LAB_100094fc
    MOV dword ptr [ESP + 0x14],0x2      ; 100094ea
        ;   Label: caseD_30
    JMP 0x100094fc                      ; 100094f2
        ;   XREF to: 100094fc (UNCONDITIONAL_JUMP)  ; LAB_100094fc
    MOV dword ptr [ESP + 0x14],0x3      ; 100094f4
        ;   Label: caseD_40
    MOV EAX,ESI                         ; 100094fc
        ;   Label: LAB_100094fc
    AND EAX,0x700                       ; 100094fe
    CMP EAX,0x100                       ; 10009503
    JG 0x10009512                       ; 10009508
        ;   XREF to: 10009512 (CONDITIONAL_JUMP)  ; LAB_10009512
    JZ 0x10009571                       ; 1000950a
        ;   XREF to: 10009571 (CONDITIONAL_JUMP)  ; LAB_10009571
    TEST EAX,EAX                        ; 1000950c
    JZ 0x10009567                       ; 1000950e
        ;   XREF to: 10009567 (CONDITIONAL_JUMP)  ; LAB_10009567
    JMP 0x10009544                      ; 10009510
        ;   XREF to: 10009544 (UNCONDITIONAL_JUMP)  ; LAB_10009544
    CMP EAX,0x300                       ; 10009512
        ;   Label: LAB_10009512
    JG 0x10009524                       ; 10009517
        ;   XREF to: 10009524 (CONDITIONAL_JUMP)  ; LAB_10009524
    JZ 0x10009585                       ; 10009519
        ;   XREF to: 10009585 (CONDITIONAL_JUMP)  ; LAB_10009585
    CMP EAX,0x200                       ; 1000951b
    JZ 0x1000957b                       ; 10009520
        ;   XREF to: 1000957b (CONDITIONAL_JUMP)  ; LAB_1000957b
    JMP 0x10009544                      ; 10009522
        ;   XREF to: 10009544 (UNCONDITIONAL_JUMP)  ; LAB_10009544
    CMP EAX,0x500                       ; 10009524
        ;   Label: LAB_10009524
    JG 0x10009536                       ; 10009529
        ;   XREF to: 10009536 (CONDITIONAL_JUMP)  ; LAB_10009536
    JZ 0x1000958f                       ; 1000952b
        ;   XREF to: 1000958f (CONDITIONAL_JUMP)  ; LAB_1000958f
    CMP EAX,0x400                       ; 1000952d
    JZ 0x10009567                       ; 10009532
        ;   XREF to: 10009567 (CONDITIONAL_JUMP)  ; LAB_10009567
    JMP 0x10009544                      ; 10009534
        ;   XREF to: 10009544 (UNCONDITIONAL_JUMP)  ; LAB_10009544
    CMP EAX,0x600                       ; 10009536
        ;   Label: LAB_10009536
    JZ 0x1000957b                       ; 1000953b
        ;   XREF to: 1000957b (CONDITIONAL_JUMP)  ; LAB_1000957b
    CMP EAX,0x700                       ; 1000953d
    JZ 0x1000958f                       ; 10009542
        ;   XREF to: 1000958f (CONDITIONAL_JUMP)  ; LAB_1000958f
    CALL FUN_10008a20                   ; 10009544
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_10009544
    MOV dword ptr [EAX],0x16            ; 10009549
    CALL FUN_10008a30                   ; 1000954f
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    POP EBP                             ; 10009554
    MOV dword ptr [EAX],0x0             ; 10009555
    MOV EAX,0xffffffff                  ; 1000955b
    POP EDI                             ; 10009560
    POP ESI                             ; 10009561
    POP EBX                             ; 10009562
    ADD ESP,0x1c                        ; 10009563
    RET                                 ; 10009566
    MOV dword ptr [ESP + 0x1c],0x3      ; 10009567
        ;   Label: LAB_10009567
    JMP 0x10009597                      ; 1000956f
        ;   XREF to: 10009597 (UNCONDITIONAL_JUMP)  ; LAB_10009597
    MOV dword ptr [ESP + 0x1c],0x4      ; 10009571
        ;   Label: LAB_10009571
    JMP 0x10009597                      ; 10009579
        ;   XREF to: 10009597 (UNCONDITIONAL_JUMP)  ; LAB_10009597
    MOV dword ptr [ESP + 0x1c],0x5      ; 1000957b
        ;   Label: LAB_1000957b
    JMP 0x10009597                      ; 10009583
        ;   XREF to: 10009597 (UNCONDITIONAL_JUMP)  ; LAB_10009597
    MOV dword ptr [ESP + 0x1c],0x2      ; 10009585
        ;   Label: LAB_10009585
    JMP 0x10009597                      ; 1000958d
        ;   XREF to: 10009597 (UNCONDITIONAL_JUMP)  ; LAB_10009597
    MOV dword ptr [ESP + 0x1c],0x1      ; 1000958f
        ;   Label: LAB_1000958f
    TEST ESI,0x100                      ; 10009597
        ;   Label: LAB_10009597
    MOV EBP,0x80                        ; 1000959d
    JZ 0x100095b8                       ; 100095a2
        ;   XREF to: 100095b8 (CONDITIONAL_JUMP)  ; LAB_100095b8
    MOV EAX,[0x10016d60]                ; 100095a4 | DAT_10016d60
    NOT EAX                             ; 100095a9
    AND EAX,dword ptr [ESP + 0x3c]      ; 100095ab
    TEST EBP,EAX                        ; 100095af
    JNZ 0x100095b8                      ; 100095b1
        ;   XREF to: 100095b8 (CONDITIONAL_JUMP)  ; LAB_100095b8
    MOV EBP,0x1                         ; 100095b3
    TEST ESI,0x40                       ; 100095b8
        ;   Label: LAB_100095b8
    JZ 0x100095ce                       ; 100095be
        ;   XREF to: 100095ce (CONDITIONAL_JUMP)  ; LAB_100095ce
    OR dword ptr [ESP + 0x18],0x10000   ; 100095c0
    OR EBP,0x4000000                    ; 100095c8
    TEST ESI,0x1000                     ; 100095ce
        ;   Label: LAB_100095ce
    JZ 0x100095dc                       ; 100095d4
        ;   XREF to: 100095dc (CONDITIONAL_JUMP)  ; LAB_100095dc
    OR EBP,0x100                        ; 100095d6
    TEST ESI,0x20                       ; 100095dc
        ;   Label: LAB_100095dc
    JZ 0x100095ec                       ; 100095e2
        ;   XREF to: 100095ec (CONDITIONAL_JUMP)  ; LAB_100095ec
    OR EBP,0x8000000                    ; 100095e4
    JMP 0x100095fa                      ; 100095ea
        ;   XREF to: 100095fa (UNCONDITIONAL_JUMP)  ; LAB_100095fa
    TEST ESI,0x10                       ; 100095ec
        ;   Label: LAB_100095ec
    JZ 0x100095fa                       ; 100095f2
        ;   XREF to: 100095fa (CONDITIONAL_JUMP)  ; LAB_100095fa
    OR EBP,0x10000000                   ; 100095f4 | IMAGE_DOS_HEADER_10000000
    CALL __alloc_osfhnd                 ; 100095fa
        ;   XREF to: 10008a40 (UNCONDITIONAL_CALL)  ; int __alloc_osfhnd()
        ;   Label: LAB_100095fa
    CMP EAX,-0x1                        ; 100095ff
    MOV EDI,EAX                         ; 10009602
    JNZ 0x10009629                      ; 10009604
        ;   XREF to: 10009629 (CONDITIONAL_JUMP)  ; LAB_10009629
    CALL FUN_10008a20                   ; 10009606
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
    MOV dword ptr [EAX],0x18            ; 1000960b
    CALL FUN_10008a30                   ; 10009611
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    POP EBP                             ; 10009616
    MOV dword ptr [EAX],0x0             ; 10009617
    MOV EAX,0xffffffff                  ; 1000961d
    POP EDI                             ; 10009622
    POP ESI                             ; 10009623
    POP EBX                             ; 10009624
    ADD ESP,0x1c                        ; 10009625
    RET                                 ; 10009628
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10009629
        ;   Label: LAB_10009629
    PUSH 0x0                            ; 1000962d
    LEA ECX,[ESP + 0x24]                ; 1000962f
    PUSH EBP                            ; 10009633
    MOV EDX,dword ptr [ESP + 0x1c]      ; 10009634
    PUSH EAX                            ; 10009638
    MOV EAX,dword ptr [ESP + 0x24]      ; 10009639
    PUSH ECX                            ; 1000963d
    MOV ECX,dword ptr [ESP + 0x40]      ; 1000963e
    PUSH EDX                            ; 10009642
    PUSH EAX                            ; 10009643
    MOV EBP,dword ptr [0x10242244]      ; 10009644 | PTR_CreateFileA_10242244
    PUSH ECX                            ; 1000964a
    CALL EBP                            ; 1000964b | HANDLE CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, ...)
    CMP EAX,-0x1                        ; 1000964d
    MOV EBP,EAX                         ; 10009650
    JNZ 0x10009679                      ; 10009652
        ;   XREF to: 10009679 (CONDITIONAL_JUMP)  ; LAB_10009679
    CALL dword ptr [0x102421c8]         ; 10009654 | PTR_GetLastError_102421c8
    PUSH EAX                            ; 1000965a
    CALL __dosmaperr                    ; 1000965b
        ;   XREF to: 100089a0 (UNCONDITIONAL_CALL)  ; void __dosmaperr(ulong param_1)
    ADD ESP,0x4                         ; 10009660
    PUSH EDI                            ; 10009663
    CALL __unlock_fhandle               ; 10009664
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 10009669
    MOV EAX,0xffffffff                  ; 1000966c
    POP EBP                             ; 10009671
    POP EDI                             ; 10009672
    POP ESI                             ; 10009673
    POP EBX                             ; 10009674
    ADD ESP,0x1c                        ; 10009675
    RET                                 ; 10009678
    PUSH EBP                            ; 10009679
        ;   Label: LAB_10009679
    CALL dword ptr [0x10242200]         ; 1000967a | PTR_GetFileType_10242200
    TEST EAX,EAX                        ; 10009680
    JNZ 0x100096b0                      ; 10009682
        ;   XREF to: 100096b0 (CONDITIONAL_JUMP)  ; LAB_100096b0
    PUSH EBP                            ; 10009684
    CALL dword ptr [0x102421cc]         ; 10009685 | PTR_CloseHandle_102421cc
    CALL dword ptr [0x102421c8]         ; 1000968b | PTR_GetLastError_102421c8
    PUSH EAX                            ; 10009691
    CALL __dosmaperr                    ; 10009692
        ;   XREF to: 100089a0 (UNCONDITIONAL_CALL)  ; void __dosmaperr(ulong param_1)
    ADD ESP,0x4                         ; 10009697
    PUSH EDI                            ; 1000969a
    CALL __unlock_fhandle               ; 1000969b
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 100096a0
    MOV EAX,0xffffffff                  ; 100096a3
    POP EBP                             ; 100096a8
    POP EDI                             ; 100096a9
    POP ESI                             ; 100096aa
    POP EBX                             ; 100096ab
    ADD ESP,0x1c                        ; 100096ac
    RET                                 ; 100096af
    CMP EAX,0x2                         ; 100096b0
        ;   Label: LAB_100096b0
    JNZ 0x100096ba                      ; 100096b3
        ;   XREF to: 100096ba (CONDITIONAL_JUMP)  ; LAB_100096ba
    OR BL,0x40                          ; 100096b5
    JMP 0x100096c2                      ; 100096b8
        ;   XREF to: 100096c2 (UNCONDITIONAL_JUMP)  ; LAB_100096c2
    CMP EAX,0x3                         ; 100096ba
        ;   Label: LAB_100096ba
    JNZ 0x100096c2                      ; 100096bd
        ;   XREF to: 100096c2 (CONDITIONAL_JUMP)  ; LAB_100096c2
    OR BL,0x8                           ; 100096bf
    PUSH EBP                            ; 100096c2
        ;   Label: LAB_100096c2
    OR BL,0x1                           ; 100096c3
    PUSH EDI                            ; 100096c6
    CALL FUN_10008b80                   ; 100096c7
        ;   XREF to: 10008b80 (UNCONDITIONAL_CALL)  ; undefined FUN_10008b80()
    ADD ESP,0x8                         ; 100096cc
    MOV EAX,EDI                         ; 100096cf
    AND EAX,0xffffffe7                  ; 100096d1
    SAR EAX,0x3                         ; 100096d4
    LEA EBP,[EAX + 0x10241870]          ; 100096d7 | DAT_10241870
    MOV EAX,EDI                         ; 100096dd
    AND EAX,0x1f                        ; 100096df
    MOV EDX,dword ptr [EBP]             ; 100096e2 | DAT_10241870
    SHL EAX,0x2                         ; 100096e5
    LEA ECX,[EAX + EAX*0x8]             ; 100096e8
    MOV AL,BL                           ; 100096eb
    AND AL,0x48                         ; 100096ed
    MOV dword ptr [ESP + 0x18],ECX      ; 100096ef
    MOV byte ptr [EDX + ECX*0x1 + 0x4],BL ; 100096f3
    MOV byte ptr [ESP + 0x14],AL        ; 100096f7
    JNZ 0x100097d9                      ; 100096fb
        ;   XREF to: 100097d9 (CONDITIONAL_JUMP)  ; LAB_100097d9
    TEST BL,0x80                        ; 10009701
    JZ 0x100097d9                       ; 10009704
        ;   XREF to: 100097d9 (CONDITIONAL_JUMP)  ; LAB_100097d9
    TEST ESI,0x2                        ; 1000970a
    JZ 0x100097d9                       ; 10009710
        ;   XREF to: 100097d9 (CONDITIONAL_JUMP)  ; LAB_100097d9
    PUSH 0x2                            ; 10009716
    PUSH -0x1                           ; 10009718
    PUSH EDI                            ; 1000971a
    CALL __lseek_lk                     ; 1000971b
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; undefined __lseek_lk()
    ADD ESP,0xc                         ; 10009720
    MOV EBX,EAX                         ; 10009723
    CMP EBX,-0x1                        ; 10009725
    JNZ 0x1000975a                      ; 10009728
        ;   XREF to: 1000975a (CONDITIONAL_JUMP)  ; LAB_1000975a
    CALL FUN_10008a30                   ; 1000972a
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    CMP dword ptr [EAX],0x83            ; 1000972f
    JZ 0x100097d9                       ; 10009735
        ;   XREF to: 100097d9 (CONDITIONAL_JUMP)  ; LAB_100097d9
    PUSH EDI                            ; 1000973b
    CALL __close                        ; 1000973c
        ;   XREF to: 10005b50 (UNCONDITIONAL_CALL)  ; int __close(int _FileHandle)
    ADD ESP,0x4                         ; 10009741
    PUSH EDI                            ; 10009744
    CALL __unlock_fhandle               ; 10009745
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 1000974a
    MOV EAX,0xffffffff                  ; 1000974d
    POP EBP                             ; 10009752
    POP EDI                             ; 10009753
    POP ESI                             ; 10009754
    POP EBX                             ; 10009755
    ADD ESP,0x1c                        ; 10009756
    RET                                 ; 10009759
    LEA EAX,[ESP + 0x13]                ; 1000975a
        ;   Label: LAB_1000975a
    PUSH 0x1                            ; 1000975e
    MOV byte ptr [ESP + 0x17],0x0       ; 10009760
    PUSH EAX                            ; 10009765
    PUSH EDI                            ; 10009766
    CALL FUN_1000b720                   ; 10009767
        ;   XREF to: 1000b720 (UNCONDITIONAL_CALL)  ; undefined FUN_1000b720()
    ADD ESP,0xc                         ; 1000976c
    TEST EAX,EAX                        ; 1000976f
    JNZ 0x100097a8                      ; 10009771
        ;   XREF to: 100097a8 (CONDITIONAL_JUMP)  ; LAB_100097a8
    CMP byte ptr [ESP + 0x13],0x1a      ; 10009773
    JNZ 0x100097a8                      ; 10009778
        ;   XREF to: 100097a8 (CONDITIONAL_JUMP)  ; LAB_100097a8
    PUSH EBX                            ; 1000977a
    PUSH EDI                            ; 1000977b
    CALL __chsize_lk                    ; 1000977c
        ;   XREF to: 1000b560 (UNCONDITIONAL_CALL)  ; undefined __chsize_lk()
    ADD ESP,0x8                         ; 10009781
    CMP EAX,-0x1                        ; 10009784
    JNZ 0x100097a8                      ; 10009787
        ;   XREF to: 100097a8 (CONDITIONAL_JUMP)  ; LAB_100097a8
    PUSH EDI                            ; 10009789
    CALL __close                        ; 1000978a
        ;   XREF to: 10005b50 (UNCONDITIONAL_CALL)  ; int __close(int _FileHandle)
    ADD ESP,0x4                         ; 1000978f
    PUSH EDI                            ; 10009792
    CALL __unlock_fhandle               ; 10009793
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 10009798
    MOV EAX,0xffffffff                  ; 1000979b
    POP EBP                             ; 100097a0
    POP EDI                             ; 100097a1
    POP ESI                             ; 100097a2
    POP EBX                             ; 100097a3
    ADD ESP,0x1c                        ; 100097a4
    RET                                 ; 100097a7
    PUSH 0x0                            ; 100097a8
        ;   Label: LAB_100097a8
    PUSH 0x0                            ; 100097aa
    PUSH EDI                            ; 100097ac
    CALL __lseek_lk                     ; 100097ad
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; undefined __lseek_lk()
    ADD ESP,0xc                         ; 100097b2
    CMP EAX,-0x1                        ; 100097b5
    JNZ 0x100097d9                      ; 100097b8
        ;   XREF to: 100097d9 (CONDITIONAL_JUMP)  ; LAB_100097d9
    PUSH EDI                            ; 100097ba
    CALL __close                        ; 100097bb
        ;   XREF to: 10005b50 (UNCONDITIONAL_CALL)  ; int __close(int _FileHandle)
    ADD ESP,0x4                         ; 100097c0
    PUSH EDI                            ; 100097c3
    CALL __unlock_fhandle               ; 100097c4
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 100097c9
    MOV EAX,0xffffffff                  ; 100097cc
    POP EBP                             ; 100097d1
    POP EDI                             ; 100097d2
    POP ESI                             ; 100097d3
    POP EBX                             ; 100097d4
    ADD ESP,0x1c                        ; 100097d5
    RET                                 ; 100097d8
    CMP byte ptr [ESP + 0x14],0x0       ; 100097d9
        ;   Label: LAB_100097d9
    JNZ 0x100097f4                      ; 100097de
        ;   XREF to: 100097f4 (CONDITIONAL_JUMP)  ; LAB_100097f4
    TEST ESI,0x8                        ; 100097e0
    JZ 0x100097f4                       ; 100097e6
        ;   XREF to: 100097f4 (CONDITIONAL_JUMP)  ; LAB_100097f4
    MOV EAX,dword ptr [EBP]             ; 100097e8 | DAT_10241870
    MOV ECX,dword ptr [ESP + 0x18]      ; 100097eb
    OR byte ptr [EAX + ECX*0x1 + 0x4],0x20 ; 100097ef
    PUSH EDI                            ; 100097f4
        ;   Label: LAB_100097f4
    CALL __unlock_fhandle               ; 100097f5
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 100097fa
    MOV EAX,EDI                         ; 100097fd
    POP EBP                             ; 100097ff
    POP EDI                             ; 10009800
    POP ESI                             ; 10009801
    POP EBX                             ; 10009802
    ADD ESP,0x1c                        ; 10009803
    RET                                 ; 10009806

