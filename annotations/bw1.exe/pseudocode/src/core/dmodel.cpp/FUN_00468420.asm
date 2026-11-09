; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dmodel_cpp_FUN_00468420(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340 at 00468412
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00468250 at 004682b3
;   core_dmodel.cpp_CKeyFramedModel_intersectCylinder_FUN_00468160 at 0046819e
;
; Referenced Globals:
;   undefined4 DAT_005fec44
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468420
        ;   Label: core_dmodel.cpp_FUN_00468420
    PUSH ESI                            ; 00468421
    PUSH EDI                            ; 00468422
    PUSH EBP                            ; 00468423
    SUB ESP,0x94                        ; 00468424
    MOV EBX,dword ptr [ESP + 0xac]      ; 0046842a
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00468431
    ADD EAX,0x364                       ; 00468438
    CMP EAX,EBX                         ; 0046843d
    JZ 0x00468451                       ; 0046843f
        ;   XREF to: 00468451 (CONDITIONAL_JUMP)  ; LAB_00468451
    MOV EDX,dword ptr [EBX]             ; 00468441
    MOV dword ptr [EAX],EDX             ; 00468443
    MOV EDX,dword ptr [EBX + 0x4]       ; 00468445
    MOV dword ptr [EAX + 0x4],EDX       ; 00468448
    MOV EDX,dword ptr [EBX + 0x8]       ; 0046844b
    MOV dword ptr [EAX + 0x8],EDX       ; 0046844e
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00468451
        ;   Label: LAB_00468451
    ADD EAX,0x364                       ; 00468458
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0046845d
    PUSH EAX                            ; 00468464
    ADD EBX,0x370                       ; 00468465
    PUSH EBX                            ; 0046846b
    CALL core_dirmat.cpp_FUN_0045f3e0   ; 0046846c
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00468471
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00468474
    MOV EAX,dword ptr [EAX + 0x358]     ; 0046847b
    MOV dword ptr [ESP + 0x8c],EAX      ; 00468481
    MOV EAX,dword ptr [ESP + 0xa8]      ; 00468488
    XOR EDX,EDX                         ; 0046848f
    MOV ECX,dword ptr [EAX + 0x100]     ; 00468491
    MOV dword ptr [ESP + 0x6c],EDX      ; 00468497
    TEST ECX,ECX                        ; 0046849b
    JLE 0x0046876a                      ; 0046849d
        ;   XREF to: 0046876a (CONDITIONAL_JUMP)  ; LAB_0046876a
    MOV dword ptr [ESP + 0x74],EBX      ; 004684a3
    MOV dword ptr [ESP + 0x70],EBX      ; 004684a7
    MOV dword ptr [ESP + 0x80],EBX      ; 004684ab
    MOV EBX,dword ptr [ESP + 0xa8]      ; 004684b2
        ;   Label: LAB_004684b2
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004684b9
    MOV EBX,dword ptr [EBX + 0x104]     ; 004684bd
    IMUL EBX,EDI                        ; 004684c3
    IMUL EBX,EBX,0xc                    ; 004684c6
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004684c9
    MOV EAX,dword ptr [EAX + 0x10c]     ; 004684d0
    ADD EAX,EBX                         ; 004684d6
    MOV dword ptr [ESP + 0x84],EAX      ; 004684d8
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004684df
    XOR EBP,EBP                         ; 004684e6
    MOV EDX,dword ptr [EAX + 0x110]     ; 004684e8
    MOV dword ptr [ESP + 0x7c],EBP      ; 004684ee
    TEST EDX,EDX                        ; 004684f2
    JLE 0x0046874c                      ; 004684f4
        ;   XREF to: 0046874c (CONDITIONAL_JUMP)  ; LAB_0046874c
    MOV dword ptr [ESP + 0x78],EBP      ; 004684fa
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004684fe
        ;   Label: LAB_004684fe
    MOV EBX,dword ptr [ESP + 0x78]      ; 00468505
    MOV EAX,dword ptr [EAX + 0x114]     ; 00468509
    ADD EBX,EAX                         ; 0046850f
    IMUL EAX,dword ptr [EBX + 0x18],0xc ; 00468511
    MOV EDX,dword ptr [ESP + 0x84]      ; 00468515
    MOV dword ptr [ESP + 0x88],EBX      ; 0046851c
    LEA EBX,[ESP + 0x24]                ; 00468523
    ADD EAX,EDX                         ; 00468527
    FILD dword ptr [EAX]                ; 00468529
    FMUL float ptr [0x005fec44]         ; 0046852b | DAT_005fec44
    FSTP float ptr [EBX]                ; 00468531
    FILD dword ptr [EAX + 0x4]          ; 00468533
    FMUL float ptr [0x005fec44]         ; 00468536 | DAT_005fec44
    FSTP float ptr [EBX + 0x4]          ; 0046853c
    FILD dword ptr [EAX + 0x8]          ; 0046853f
    FMUL float ptr [0x005fec44]         ; 00468542 | DAT_005fec44
    FSTP float ptr [EBX + 0x8]          ; 00468548
    MOV EAX,dword ptr [ESP + 0x88]      ; 0046854b
    IMUL EAX,dword ptr [EAX + 0x24],0xc ; 00468552
    LEA EBX,[ESP + 0x18]                ; 00468556
    ADD EAX,EDX                         ; 0046855a
    FILD dword ptr [EAX]                ; 0046855c
    FMUL float ptr [0x005fec44]         ; 0046855e | DAT_005fec44
    FSTP float ptr [EBX]                ; 00468564
    FILD dword ptr [EAX + 0x4]          ; 00468566
    FMUL float ptr [0x005fec44]         ; 00468569 | DAT_005fec44
    FSTP float ptr [EBX + 0x4]          ; 0046856f
    FILD dword ptr [EAX + 0x8]          ; 00468572
    FMUL float ptr [0x005fec44]         ; 00468575 | DAT_005fec44
    FSTP float ptr [EBX + 0x8]          ; 0046857b
    LEA EAX,[ESP + 0x24]                ; 0046857e
    PUSH EAX                            ; 00468582
    MOV ESI,dword ptr [ESP + 0x74]      ; 00468583
    LEA EDI,[ESP + 0x64]                ; 00468587
    PUSH ESI                            ; 0046858b
    LEA ESI,[ESP + 0x5c]                ; 0046858c
    LEA EBX,[ESP + 0x2c]                ; 00468590
    CALL core_dirmat.cpp_FUN_0045f690   ; 00468594
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x5c]                ; 00468599
    ADD ESP,0x8                         ; 0046859d
    LEA EAX,[ESP + 0x60]                ; 004685a0
    MOVSD ES:EDI,ESI                    ; 004685a4
    MOVSD ES:EDI,ESI                    ; 004685a5
    MOVSD ES:EDI,ESI                    ; 004685a6
    CMP EBX,EAX                         ; 004685a7
    JZ 0x004685c3                       ; 004685a9
        ;   XREF to: 004685c3 (CONDITIONAL_JUMP)  ; LAB_004685c3
    MOV EAX,dword ptr [ESP + 0x60]      ; 004685ab
    MOV dword ptr [ESP + 0x24],EAX      ; 004685af
    MOV EAX,dword ptr [ESP + 0x64]      ; 004685b3
    MOV dword ptr [ESP + 0x28],EAX      ; 004685b7
    MOV EAX,dword ptr [ESP + 0x68]      ; 004685bb
    MOV dword ptr [ESP + 0x2c],EAX      ; 004685bf
    LEA EAX,[ESP + 0x18]                ; 004685c3
        ;   Label: LAB_004685c3
    PUSH EAX                            ; 004685c7
    MOV EDI,dword ptr [ESP + 0x78]      ; 004685c8
    PUSH EDI                            ; 004685cc
    LEA ESI,[ESP + 0x8]                 ; 004685cd
    LEA EBX,[ESP + 0x14]                ; 004685d1
    CALL core_dirmat.cpp_FUN_0045f690   ; 004685d5
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA EDI,[ESP + 0x14]                ; 004685da
    LEA ESI,[ESP + 0x8]                 ; 004685de
    ADD ESP,0x8                         ; 004685e2
    LEA EAX,[ESP + 0x18]                ; 004685e5
    MOVSD ES:EDI,ESI                    ; 004685e9
    MOVSD ES:EDI,ESI                    ; 004685ea
    MOVSD ES:EDI,ESI                    ; 004685eb
    CMP EAX,EBX                         ; 004685ec
    JZ 0x00468608                       ; 004685ee
        ;   XREF to: 00468608 (CONDITIONAL_JUMP)  ; LAB_00468608
    MOV EAX,dword ptr [ESP + 0xc]       ; 004685f0
    MOV dword ptr [ESP + 0x18],EAX      ; 004685f4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004685f8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004685fc
    MOV EAX,dword ptr [ESP + 0x14]      ; 00468600
    MOV dword ptr [ESP + 0x20],EAX      ; 00468604
    MOV EAX,dword ptr [ESP + 0x88]      ; 00468608
        ;   Label: LAB_00468608
    MOV EBP,0x2                         ; 0046860f
    CMP EBP,dword ptr [EAX + 0x4]       ; 00468614
    JGE 0x00468721                      ; 00468617
        ;   XREF to: 00468721 (CONDITIONAL_JUMP)  ; LAB_00468721
    ADD EAX,0x18                        ; 0046861d
    MOV dword ptr [ESP + 0x90],EAX      ; 00468620
    MOV EAX,dword ptr [ESP + 0x90]      ; 00468627
        ;   Label: LAB_00468627
    IMUL EAX,dword ptr [EAX + 0x18],0xc ; 0046862e
    MOV EDI,dword ptr [ESP + 0x84]      ; 00468632
    LEA EBX,[ESP + 0x3c]                ; 00468639
    ADD EAX,EDI                         ; 0046863d
    FILD dword ptr [EAX]                ; 0046863f
    FMUL float ptr [0x005fec44]         ; 00468641 | DAT_005fec44
    FSTP float ptr [EBX]                ; 00468647
    FILD dword ptr [EAX + 0x4]          ; 00468649
    FMUL float ptr [0x005fec44]         ; 0046864c | DAT_005fec44
    FSTP float ptr [EBX + 0x4]          ; 00468652
    FILD dword ptr [EAX + 0x8]          ; 00468655
    FMUL float ptr [0x005fec44]         ; 00468658 | DAT_005fec44
    FSTP float ptr [EBX + 0x8]          ; 0046865e
    LEA EAX,[ESP + 0x3c]                ; 00468661
    PUSH EAX                            ; 00468665
    MOV EAX,dword ptr [ESP + 0x84]      ; 00468666
    LEA ESI,[ESP + 0x34]                ; 0046866d
    PUSH EAX                            ; 00468671
    LEA EDI,[ESP + 0x50]                ; 00468672
    LEA EBX,[ESP + 0x44]                ; 00468676
    CALL core_dirmat.cpp_FUN_0045f690   ; 0046867a
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x38]                ; 0046867f
    ADD ESP,0x8                         ; 00468683
    LEA EAX,[ESP + 0x48]                ; 00468686
    MOVSD ES:EDI,ESI                    ; 0046868a
    MOVSD ES:EDI,ESI                    ; 0046868b
    MOVSD ES:EDI,ESI                    ; 0046868c
    CMP EBX,EAX                         ; 0046868d
    JZ 0x004686a9                       ; 0046868f
        ;   XREF to: 004686a9 (CONDITIONAL_JUMP)  ; LAB_004686a9
    MOV EAX,dword ptr [ESP + 0x48]      ; 00468691
    MOV dword ptr [ESP + 0x3c],EAX      ; 00468695
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00468699
    MOV dword ptr [ESP + 0x40],EAX      ; 0046869d
    MOV EAX,dword ptr [ESP + 0x50]      ; 004686a1
    MOV dword ptr [ESP + 0x44],EAX      ; 004686a5
    LEA EAX,[ESP + 0x3c]                ; 004686a9
        ;   Label: LAB_004686a9
    PUSH EAX                            ; 004686ad
    LEA EAX,[ESP + 0x1c]                ; 004686ae
    PUSH EAX                            ; 004686b2
    LEA EAX,[ESP + 0x2c]                ; 004686b3
    PUSH EAX                            ; 004686b7
    MOV EDX,dword ptr [ESP + 0x98]      ; 004686b8
    PUSH EDX                            ; 004686bf
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 004686c0
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 004686c5
    MOV ECX,dword ptr [ESP + 0x8c]      ; 004686c8
    LEA EBX,[ESP + 0x18]                ; 004686cf
    ADD ECX,0x38                        ; 004686d3
    LEA EAX,[ESP + 0x3c]                ; 004686d6
    MOV dword ptr [ESP + 0x8c],ECX      ; 004686da
    CMP EBX,EAX                         ; 004686e1
    JZ 0x004686fd                       ; 004686e3
        ;   XREF to: 004686fd (CONDITIONAL_JUMP)  ; LAB_004686fd
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004686e5
    MOV dword ptr [ESP + 0x18],EAX      ; 004686e9
    MOV EAX,dword ptr [ESP + 0x40]      ; 004686ed
    MOV dword ptr [ESP + 0x1c],EAX      ; 004686f1
    MOV EAX,dword ptr [ESP + 0x44]      ; 004686f5
    MOV dword ptr [ESP + 0x20],EAX      ; 004686f9
    MOV ECX,dword ptr [ESP + 0x90]      ; 004686fd
        ;   Label: LAB_004686fd
    MOV EAX,dword ptr [ESP + 0x88]      ; 00468704
    INC EBP                             ; 0046870b
    ADD ECX,0xc                         ; 0046870c
    MOV EBX,dword ptr [EAX + 0x4]       ; 0046870f
    MOV dword ptr [ESP + 0x90],ECX      ; 00468712
    CMP EBP,EBX                         ; 00468719
    JL 0x00468627                       ; 0046871b
        ;   XREF to: 00468627 (CONDITIONAL_JUMP)  ; LAB_00468627
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00468721
        ;   Label: LAB_00468721
    INC EBX                             ; 00468725
    MOV ECX,dword ptr [ESP + 0x78]      ; 00468726
    MOV dword ptr [ESP + 0x7c],EBX      ; 0046872a
    MOV EAX,EBX                         ; 0046872e
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00468730
    ADD ECX,0x48                        ; 00468737
    MOV ESI,dword ptr [EBX + 0x110]     ; 0046873a
    MOV dword ptr [ESP + 0x78],ECX      ; 00468740
    CMP EAX,ESI                         ; 00468744
    JL 0x004684fe                       ; 00468746
        ;   XREF to: 004684fe (CONDITIONAL_JUMP)  ; LAB_004684fe
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0046874c
        ;   Label: LAB_0046874c
    INC EBX                             ; 00468750
    MOV dword ptr [ESP + 0x6c],EBX      ; 00468751
    MOV EAX,EBX                         ; 00468755
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00468757
    CMP EAX,dword ptr [EBX + 0x100]     ; 0046875e
    JL 0x004684b2                       ; 00468764
        ;   XREF to: 004684b2 (CONDITIONAL_JUMP)  ; LAB_004684b2
    ADD ESP,0x94                        ; 0046876a
        ;   Label: LAB_0046876a
    POP EBP                             ; 00468770
    POP EDI                             ; 00468771
    POP ESI                             ; 00468772
    POP EBX                             ; 00468773
    RET                                 ; 00468774

