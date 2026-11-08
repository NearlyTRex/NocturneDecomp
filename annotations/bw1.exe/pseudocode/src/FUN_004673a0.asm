; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004673a0(int param_1,int *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00467270 at 004672a2
;
; Referenced Globals:
;   undefined4 DAT_005d94c4
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_00483d70
;   FUN_00483d80
;   FUN_00483e20
;   FUN_00483e60
;   FUN_00484f00
;   FUN_005551f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004673a0
        ;   Label: FUN_004673a0
    PUSH ESI                            ; 004673a1
    PUSH EDI                            ; 004673a2
    PUSH EBP                            ; 004673a3
    MOV EBP,ESP                         ; 004673a4
    SUB ESP,0x34                        ; 004673a6
    AND ESP,0xfffffff8                  ; 004673a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004673ac
    CMP dword ptr [EAX + 0x110],0x1     ; 004673af
    JL 0x004674a2                       ; 004673b6
        ;   XREF to: 004674a2 (CONDITIONAL_JUMP)  ; LAB_004674a2
    CMP dword ptr [EAX + 0x360],0x0     ; 004673bc
    JNZ 0x004674a9                      ; 004673c3
        ;   XREF to: 004674a9 (CONDITIONAL_JUMP)  ; LAB_004674a9
    CMP dword ptr [EAX + 0x100],0x0     ; 004673c9
    JLE 0x004674cc                      ; 004673d0
        ;   XREF to: 004674cc (CONDITIONAL_JUMP)  ; LAB_004674cc
    PUSH 0x1                            ; 004673d6
        ;   Label: LAB_004673d6
    MOV ESI,dword ptr [0x00612560]      ; 004673d8 | DAT_00612560
    PUSH ESI                            ; 004673de | DAT_01bc120c
    CALL FUN_00483d80                   ; 004673df
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 004673e4
        ;   Label: LAB_004673e4
    MOV EDX,dword ptr [0x00612560]      ; 004673e7 | DAT_00612560
        ;   Label: LAB_004673e7
    PUSH EDX                            ; 004673ed | DAT_01bc120c
    CALL FUN_00483e60                   ; 004673ee
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 004673f3
    MOV dword ptr [ESP + 0x18],EAX      ; 004673f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004673fa
    MOV ESI,0xffffffff                  ; 004673fd
    XOR EDI,EDI                         ; 00467402
    MOV EBX,dword ptr [EAX + 0x244]     ; 00467404
    MOV dword ptr [ESP + 0x1c],EDI      ; 0046740a
    TEST EBX,EBX                        ; 0046740e
    JLE 0x00467480                      ; 00467410
        ;   XREF to: 00467480 (CONDITIONAL_JUMP)  ; LAB_00467480
    ADD EAX,0x124                       ; 00467412
    MOV dword ptr [ESP + 0x28],EAX      ; 00467417
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046741b
    MOV dword ptr [ESP + 0x20],EAX      ; 0046741e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00467422
    MOV dword ptr [ESP + 0x24],EAX      ; 00467425
    MOV EAX,dword ptr [ESP + 0x20]      ; 00467429
        ;   Label: LAB_00467429
    MOV EAX,dword ptr [EAX + 0x24c]     ; 0046742d
    ADD EAX,EDI                         ; 00467433
    MOV dword ptr [ESP + 0x2c],EAX      ; 00467435
    CMP dword ptr [EBP + 0x18],0x0      ; 00467439
    JZ 0x0046753a                       ; 0046743d
        ;   XREF to: 0046753a (CONDITIONAL_JUMP)  ; LAB_0046753a
    MOV EAX,dword ptr [ESP + 0x24]      ; 00467443
    CMP dword ptr [EAX],0x0             ; 00467447
    JNZ 0x0046753a                      ; 0046744a
        ;   XREF to: 0046753a (CONDITIONAL_JUMP)  ; LAB_0046753a
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00467450
        ;   Label: LAB_00467450
    MOV EAX,dword ptr [ESP + 0x20]      ; 00467454
    MOV EDX,dword ptr [ESP + 0x24]      ; 00467458
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046745c
    ADD EDX,0x4                         ; 00467460
    ADD EAX,0x8                         ; 00467463
    MOV dword ptr [ESP + 0x24],EDX      ; 00467466
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046746a
    INC ECX                             ; 0046746d
    MOV dword ptr [ESP + 0x20],EAX      ; 0046746e
    MOV EBX,dword ptr [EDX + 0x244]     ; 00467472
    MOV dword ptr [ESP + 0x1c],ECX      ; 00467478
    CMP ECX,EBX                         ; 0046747c
    JL 0x00467429                       ; 0046747e
        ;   XREF to: 00467429 (CONDITIONAL_JUMP)  ; LAB_00467429
    PUSH 0x0                            ; 00467480
        ;   Label: LAB_00467480
    MOV ESI,dword ptr [0x00612560]      ; 00467482 | DAT_00612560
    PUSH ESI                            ; 00467488 | DAT_01bc120c
    CALL FUN_00483d80                   ; 00467489
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 0046748e
    PUSH 0x1                            ; 00467491
    MOV EDI,dword ptr [0x00612560]      ; 00467493 | DAT_00612560
    PUSH EDI                            ; 00467499 | DAT_01bc120c
    CALL FUN_00483e20                   ; 0046749a
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e20()
    ADD ESP,0x8                         ; 0046749f
    MOV ESP,EBP                         ; 004674a2
        ;   Label: LAB_004674a2
    POP EBP                             ; 004674a4
    POP EDI                             ; 004674a5
    POP ESI                             ; 004674a6
    POP EBX                             ; 004674a7
    RET                                 ; 004674a8
    PUSH 0x0                            ; 004674a9
        ;   Label: LAB_004674a9
    MOV EDI,dword ptr [0x00612560]      ; 004674ab | DAT_00612560
    PUSH EDI                            ; 004674b1 | DAT_01bc120c
    CALL FUN_00483d80                   ; 004674b2
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d80()
    ADD ESP,0x8                         ; 004674b7
    PUSH 0x0                            ; 004674ba
    MOV EAX,[0x00612560]                ; 004674bc | DAT_00612560
    PUSH EAX                            ; 004674c1 | DAT_01bc120c
    CALL FUN_00483d70                   ; 004674c2
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00483d70()
    JMP 0x004673e4                      ; 004674c7
        ;   XREF to: 004673e4 (UNCONDITIONAL_JUMP)  ; LAB_004673e4
    FLD float ptr [EAX + 0x344]         ; 004674cc
        ;   Label: LAB_004674cc
    FLD float ptr [EAX + 0x348]         ; 004674d2
    FLD float ptr [EAX + 0x34c]         ; 004674d8
    MOV EDI,ESP                         ; 004674de
    LEA ESI,[ESP + 0xc]                 ; 004674e0
    FXCH ST2                            ; 004674e4
    FSUB float ptr [EAX + 0x338]        ; 004674e6
    FXCH                                ; 004674ec
    FSUB float ptr [EAX + 0x33c]        ; 004674ee
    FXCH ST2                            ; 004674f4
    FSUB float ptr [EAX + 0x340]        ; 004674f6
    FXCH                                ; 004674fc
    FSTP float ptr [ESP + 0xc]          ; 004674fe
    FXCH                                ; 00467502
    FSTP float ptr [ESP + 0x10]         ; 00467504
    FSTP float ptr [ESP + 0x14]         ; 00467508
    MOVSD ES:EDI,ESI                    ; 0046750c
    MOVSD ES:EDI,ESI                    ; 0046750d
    MOVSD ES:EDI,ESI                    ; 0046750e
    FLD float ptr [ESP + 0x4]           ; 0046750f
    FMUL ST0                            ; 00467513
    FLD float ptr [ESP]                 ; 00467515
    FMUL ST0                            ; 00467518
    FADDP                               ; 0046751a
    FLD float ptr [ESP + 0x8]           ; 0046751c
    FMUL ST0                            ; 00467520
    FADDP                               ; 00467522
    FSQRT                               ; 00467524
    FCOMP double ptr [0x005d94c4]       ; 00467526 | DAT_005d94c4
    FNSTSW AX                           ; 0046752c
    SAHF                                ; 0046752e
    JA 0x004673d6                       ; 0046752f
        ;   XREF to: 004673d6 (CONDITIONAL_JUMP)  ; LAB_004673d6
    JMP 0x004673e7                      ; 00467535
        ;   XREF to: 004673e7 (UNCONDITIONAL_JUMP)  ; LAB_004673e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046753a
        ;   Label: LAB_0046753a
    CMP dword ptr [EAX + 0x120],0x1     ; 0046753d
    JLE 0x0046754d                      ; 00467544
        ;   XREF to: 0046754d (CONDITIONAL_JUMP)  ; LAB_0046754d
    CMP dword ptr [ESP + 0x18],0x0      ; 00467546
    JZ 0x00467596                       ; 0046754b
        ;   XREF to: 00467596 (CONDITIONAL_JUMP)  ; LAB_00467596
    CMP dword ptr [ESP + 0x18],0x0      ; 0046754d
        ;   Label: LAB_0046754d
    JNZ 0x00467568                      ; 00467552
        ;   XREF to: 00467568 (CONDITIONAL_JUMP)  ; LAB_00467568
    MOV ECX,dword ptr [ESP + 0x28]      ; 00467554
    PUSH ECX                            ; 00467558
    MOV EBX,dword ptr [0x00612560]      ; 00467559 | DAT_00612560
    PUSH EBX                            ; 0046755f | DAT_01bc120c
    CALL FUN_00484f00                   ; 00467560
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 00467565
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00467568
        ;   Label: LAB_00467568
    PUSH EAX                            ; 0046756b
    MOV EAX,dword ptr [ESP + 0x30]      ; 0046756c
    SUB EAX,EDI                         ; 00467570
    IMUL EDI,EDI,0x48                   ; 00467572
    PUSH EAX                            ; 00467575
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467576
    MOV EAX,dword ptr [EAX + 0x114]     ; 00467579
    ADD EAX,EDI                         ; 0046757f
    PUSH EAX                            ; 00467581
    MOV EDX,dword ptr [0x00622c18]      ; 00467582 | DAT_00622c18
    PUSH EDX                            ; 00467588 | DAT_01e82168
    CALL FUN_005551f0                   ; 00467589
        ;   XREF to: 005551f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005551f0()
    ADD ESP,0x10                        ; 0046758e
    JMP 0x00467450                      ; 00467591
        ;   XREF to: 00467450 (UNCONDITIONAL_JUMP)  ; LAB_00467450
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00467596
        ;   Label: LAB_00467596
    MOV EBX,EDI                         ; 0046759a
    CMP EDI,EAX                         ; 0046759c
    JGE 0x00467450                      ; 0046759e
        ;   XREF to: 00467450 (CONDITIONAL_JUMP)  ; LAB_00467450
    MOV EAX,dword ptr [EBP + 0x14]      ; 004675a4
        ;   Label: LAB_004675a4
    LEA EDI,[EBX*0x4 + 0x0]             ; 004675a7
    MOV EAX,dword ptr [EAX + 0x118]     ; 004675ae
    ADD EAX,EDI                         ; 004675b4
    MOV EDX,dword ptr [EAX]             ; 004675b6
    CMP ESI,EDX                         ; 004675b8
    JNZ 0x0046761a                      ; 004675ba
        ;   XREF to: 0046761a (CONDITIONAL_JUMP)  ; LAB_0046761a
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004675bc
        ;   Label: LAB_004675bc
    MOV dword ptr [ESP + 0x30],EBX      ; 004675c0
    LEA EAX,[EBX*0x4 + 0x0]             ; 004675c4
    SHL ECX,0x2                         ; 004675cb
    ADD EAX,0x4                         ; 004675ce
        ;   Label: LAB_004675ce
    INC EBX                             ; 004675d1
    CMP EAX,ECX                         ; 004675d2
    JGE 0x004675e4                      ; 004675d4
        ;   XREF to: 004675e4 (CONDITIONAL_JUMP)  ; LAB_004675e4
    MOV EDX,dword ptr [EBP + 0x14]      ; 004675d6
    MOV EDX,dword ptr [EDX + 0x118]     ; 004675d9
    CMP ESI,dword ptr [EDX + EAX*0x1]   ; 004675df
    JZ 0x004675ce                       ; 004675e2
        ;   XREF to: 004675ce (CONDITIONAL_JUMP)  ; LAB_004675ce
    MOV EDI,dword ptr [ESP + 0x30]      ; 004675e4
        ;   Label: LAB_004675e4
    MOV EAX,EBX                         ; 004675e8
    SUB EAX,EDI                         ; 004675ea
    IMUL EDX,EDI,0x48                   ; 004675ec
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004675ef
    PUSH ECX                            ; 004675f2
    PUSH EAX                            ; 004675f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004675f4
    MOV EAX,dword ptr [EAX + 0x114]     ; 004675f7
    ADD EAX,EDX                         ; 004675fd
    PUSH EAX                            ; 004675ff
    MOV EDX,dword ptr [0x00622c18]      ; 00467600 | DAT_00622c18
    PUSH EDX                            ; 00467606 | DAT_01e82168
    CALL FUN_005551f0                   ; 00467607
        ;   XREF to: 005551f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005551f0()
    ADD ESP,0x10                        ; 0046760c
    CMP EBX,dword ptr [ESP + 0x2c]      ; 0046760f
    JL 0x004675a4                       ; 00467613
        ;   XREF to: 004675a4 (CONDITIONAL_JUMP)  ; LAB_004675a4
    JMP 0x00467450                      ; 00467615
        ;   XREF to: 00467450 (UNCONDITIONAL_JUMP)  ; LAB_00467450
    IMUL EAX,EDX,0x48                   ; 0046761a
        ;   Label: LAB_0046761a
    ADD EAX,dword ptr [ESP + 0x28]      ; 0046761d
    PUSH EAX                            ; 00467621
    MOV EAX,[0x00612560]                ; 00467622 | DAT_00612560
    PUSH EAX                            ; 00467627 | DAT_01bc120c
    CALL FUN_00484f00                   ; 00467628
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 0046762d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467630
    MOV EAX,dword ptr [EAX + 0x118]     ; 00467633
    MOV ESI,dword ptr [EDI + EAX*0x1]   ; 00467639
    JMP 0x004675bc                      ; 0046763c
        ;   XREF to: 004675bc (UNCONDITIONAL_JUMP)  ; LAB_004675bc

