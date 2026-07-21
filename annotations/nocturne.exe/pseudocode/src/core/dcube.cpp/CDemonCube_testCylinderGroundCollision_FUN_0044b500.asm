; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_dcube_cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float *param_5,uint *param_6)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_004687e0 at 00468951
;
; Referenced Globals:
;   undefined4 DAT_014b89e8
;   undefined4 DAT_014b89ec
;   undefined4 DAT_014b89f0
;   undefined4 DAT_014b89f4
;   undefined4 DAT_014b89f8
;   undefined4 DAT_014b89fc
;   undefined4 DAT_014b8a00
;   undefined4 DAT_014b8a04
;   undefined4 DAT_014b8a08
;
; Called Functions:
;   core_dcube.cpp_triangleCylinderCollision_FUN_00449d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b500
        ;   Label: core_dcube.cpp_CDemonCube_testCylinderGroundCollision_FUN_0044b500
    PUSH ESI                            ; 0044b501
    PUSH EDI                            ; 0044b502
    PUSH EBP                            ; 0044b503
    SUB ESP,0xc                         ; 0044b504
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044b507
    MOV EBP,0xffffffff                  ; 0044b50b
    MOV EDX,dword ptr [EDI + 0x28]      ; 0044b510
    XOR EBX,EBX                         ; 0044b513
    TEST EDX,EDX                        ; 0044b515
    JLE 0x0044b548                      ; 0044b517
        ;   XREF to: 0044b548 (CONDITIONAL_JUMP)  ; LAB_0044b548
    XOR ESI,ESI                         ; 0044b519
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044b51b
        ;   Label: LAB_0044b51b
    PUSH EAX                            ; 0044b51f
    MOV EDX,dword ptr [ESP + 0x28]      ; 0044b520
    PUSH dword ptr [ESP + 0x2c]         ; 0044b524
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0044b528
    PUSH EDX                            ; 0044b52b
    ADD EAX,ESI                         ; 0044b52c
    PUSH EAX                            ; 0044b52e
    CALL core_dcube.cpp_triangleCylinderCollision_FUN_00449d30 ; 0044b52f
        ;   XREF to: 00449d30 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_triangleCylinderCollision_FUN_00449d30()
    ADD ESP,0x10                        ; 0044b534
    TEST EAX,EAX                        ; 0044b537
    JZ 0x0044b53d                       ; 0044b539
        ;   XREF to: 0044b53d (CONDITIONAL_JUMP)  ; LAB_0044b53d
    MOV EBP,EBX                         ; 0044b53b
    INC EBX                             ; 0044b53d
        ;   Label: LAB_0044b53d
    MOV ECX,dword ptr [EDI + 0x28]      ; 0044b53e
    ADD ESI,0x20                        ; 0044b541
    CMP EBX,ECX                         ; 0044b544
    JL 0x0044b51b                       ; 0044b546
        ;   XREF to: 0044b51b (CONDITIONAL_JUMP)  ; LAB_0044b51b
    TEST EBP,EBP                        ; 0044b548
        ;   Label: LAB_0044b548
    JL 0x0044b634                       ; 0044b54a
        ;   XREF to: 0044b634 (CONDITIONAL_JUMP)  ; LAB_0044b634
    MOV EBX,EBP                         ; 0044b550
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0044b552
    SHL EBX,0x5                         ; 0044b555
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 0044b558
    CMP EAX,0x14b89e8                   ; 0044b55b
    JZ 0x0044b57c                       ; 0044b560
        ;   XREF to: 0044b57c (CONDITIONAL_JUMP)  ; LAB_0044b57c
    FLD float ptr [EAX]                 ; 0044b562
    FLD float ptr [EAX + 0x8]           ; 0044b564
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b567
    MOV dword ptr [0x014b89ec],EDX      ; 0044b56a | DAT_014b89ec
    FSTP float ptr [0x014b89f0]         ; 0044b570 | DAT_014b89f0
    FSTP float ptr [0x014b89e8]         ; 0044b576 | DAT_014b89e8
    MOV EAX,EBP                         ; 0044b57c
        ;   Label: LAB_0044b57c
    MOV EBX,dword ptr [EDI + 0x2c]      ; 0044b57e
    SHL EAX,0x5                         ; 0044b581
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0044b584
    CMP EAX,0x14b89f4                   ; 0044b588
    JZ 0x0044b5a9                       ; 0044b58d
        ;   XREF to: 0044b5a9 (CONDITIONAL_JUMP)  ; LAB_0044b5a9
    FLD float ptr [EAX]                 ; 0044b58f
    FLD float ptr [EAX + 0x8]           ; 0044b591
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b594
    MOV dword ptr [0x014b89f8],EDX      ; 0044b597 | DAT_014b89f8
    FSTP float ptr [0x014b89fc]         ; 0044b59d | DAT_014b89fc
    FSTP float ptr [0x014b89f4]         ; 0044b5a3 | DAT_014b89f4
    MOV EBX,EBP                         ; 0044b5a9
        ;   Label: LAB_0044b5a9
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0044b5ab
    SHL EBX,0x5                         ; 0044b5ae
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0044b5b1
    CMP EAX,0x14b8a00                   ; 0044b5b5
    JZ 0x0044b5d6                       ; 0044b5ba
        ;   XREF to: 0044b5d6 (CONDITIONAL_JUMP)  ; LAB_0044b5d6
    FLD float ptr [EAX]                 ; 0044b5bc
    FLD float ptr [EAX + 0x8]           ; 0044b5be
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b5c1
    MOV dword ptr [0x014b8a04],EDX      ; 0044b5c4 | DAT_014b8a04
    FSTP float ptr [0x014b8a08]         ; 0044b5ca | DAT_014b8a08
    FSTP float ptr [0x014b8a00]         ; 0044b5d0 | DAT_014b8a00
    MOV EAX,dword ptr [EDI + 0x30]      ; 0044b5d6
        ;   Label: LAB_0044b5d6
    MOV AL,byte ptr [EAX + EBP*0x1]     ; 0044b5d9
    MOV EBX,dword ptr [ESP + 0x34]      ; 0044b5dc
    AND EAX,0xff                        ; 0044b5e0
    MOV dword ptr [EBX],EAX             ; 0044b5e5
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0044b5e7
    SHL EBP,0x5                         ; 0044b5ea
    MOV EBX,dword ptr [ESP + 0x30]      ; 0044b5ed
    FLD float ptr [EAX + EBP*0x1 + 0xc] ; 0044b5f1
    FCHS                                ; 0044b5f5
    FSTP float ptr [ESP]                ; 0044b5f7
    FLD float ptr [EAX + EBP*0x1 + 0x10] ; 0044b5fa
    FCHS                                ; 0044b5fe
    FSTP float ptr [ESP + 0x4]          ; 0044b600
    FLD float ptr [EAX + EBP*0x1 + 0x14] ; 0044b604
    FCHS                                ; 0044b608
    MOV EAX,ESP                         ; 0044b60a
    FSTP float ptr [ESP + 0x8]          ; 0044b60c
    CMP EAX,EBX                         ; 0044b610
    JZ 0x0044b627                       ; 0044b612
        ;   XREF to: 0044b627 (CONDITIONAL_JUMP)  ; LAB_0044b627
    MOV EAX,dword ptr [ESP]             ; 0044b614
    MOV dword ptr [EBX],EAX             ; 0044b617
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044b619
    MOV dword ptr [EBX + 0x4],EAX       ; 0044b61d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044b620
    MOV dword ptr [EBX + 0x8],EAX       ; 0044b624
    MOV EAX,0x1                         ; 0044b627
        ;   Label: LAB_0044b627
    ADD ESP,0xc                         ; 0044b62c
    POP EBP                             ; 0044b62f
    POP EDI                             ; 0044b630
    POP ESI                             ; 0044b631
    POP EBX                             ; 0044b632
    RET                                 ; 0044b633
    XOR EAX,EAX                         ; 0044b634
        ;   Label: LAB_0044b634
    ADD ESP,0xc                         ; 0044b636
    POP EBP                             ; 0044b639
    POP EDI                             ; 0044b63a
    POP ESI                             ; 0044b63b
    POP EBX                             ; 0044b63c
    RET                                 ; 0044b63d

