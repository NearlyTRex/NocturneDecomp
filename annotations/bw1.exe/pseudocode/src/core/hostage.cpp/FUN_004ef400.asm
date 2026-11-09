; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hostage_cpp_FUN_004ef400(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CShotgun_005e5041
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;   core_charactr.cpp_FUN_00432be0
;   core_xform.cpp_FUN_005b5760
;   core_xform.cpp_multiplyMatrix3x4_FUN_005b5200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef400
        ;   Label: core_hostage.cpp_FUN_004ef400
    PUSH EDI                            ; 004ef401
    PUSH EBP                            ; 004ef402
    SUB ESP,0x2ac                       ; 004ef403
    MOV EBX,dword ptr [ESP + 0x2bc]     ; 004ef409
    MOV EBP,ESI                         ; 004ef410
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004ef412
    SHL EAX,0x3                         ; 004ef419
    MOV EDX,EAX                         ; 004ef41c
    SHL EAX,0x4                         ; 004ef41e
    SUB EAX,EDX                         ; 004ef421
    LEA ESI,[EBX + EAX*0x1]             ; 004ef423
    MOV EDX,dword ptr [EBX + 0x1fe68]   ; 004ef426
    MOV EAX,dword ptr [ESI + 0x25b0]    ; 004ef42c
    CMP EDX,0x1                         ; 004ef432
    JZ 0x004ef59a                       ; 004ef435
        ;   XREF to: 004ef59a (CONDITIONAL_JUMP)  ; LAB_004ef59a
    MOV ECX,dword ptr [EBX + 0x1fe68]   ; 004ef43b
        ;   Label: LAB_004ef43b
    CMP ECX,0x3                         ; 004ef441
    JNZ 0x004ef661                      ; 004ef444
        ;   XREF to: 004ef661 (CONDITIONAL_JUMP)  ; LAB_004ef661
    MOV EAX,0xbe4d1e54                  ; 004ef44a
    MOV EDX,0x3d04bb36                  ; 004ef44f
    MOV EDI,0x3e882d5a                  ; 004ef454
    MOV dword ptr [ESP + 0x280],EAX     ; 004ef459
    MOV dword ptr [ESP + 0x284],EDX     ; 004ef460
    LEA EAX,[ESP + 0x27c]               ; 004ef467
    LEA EDX,[ESP + 0x1f8]               ; 004ef46e
    MOV dword ptr [ESP + 0x27c],EDI     ; 004ef475
    CMP EDX,EAX                         ; 004ef47c
    JZ 0x004ef49f                       ; 004ef47e
        ;   XREF to: 004ef49f (CONDITIONAL_JUMP)  ; LAB_004ef49f
    MOV ESI,0xbe4d1e54                  ; 004ef480
    MOV dword ptr [ESP + 0x1f8],EDI     ; 004ef485
    MOV EDI,0x3d04bb36                  ; 004ef48c
    MOV dword ptr [ESP + 0x1fc],ESI     ; 004ef491
    MOV dword ptr [ESP + 0x200],EDI     ; 004ef498
    MOV EAX,0xbef6147b                  ; 004ef49f
        ;   Label: LAB_004ef49f
    MOV EDX,0x3e0c27a6                  ; 004ef4a4
    LEA EDI,[ESP + 0x258]               ; 004ef4a9
    LEA ESI,[ESP + 0x1ec]               ; 004ef4b0
    MOV dword ptr [ESP + 0x1ec],EAX     ; 004ef4b7
    MOV dword ptr [ESP + 0x1f4],EDX     ; 004ef4be
    MOV dword ptr [ESP + 0x1f0],EDX     ; 004ef4c5
    LEA EAX,[ESP + 0x258]               ; 004ef4cc
    LEA EDX,[ESP + 0x204]               ; 004ef4d3
    MOVSD ES:EDI,ESI                    ; 004ef4da
    MOVSD ES:EDI,ESI                    ; 004ef4db
    MOVSD ES:EDI,ESI                    ; 004ef4dc
    CMP EDX,EAX                         ; 004ef4dd
    JZ 0x004ef50b                       ; 004ef4df
        ;   XREF to: 004ef50b (CONDITIONAL_JUMP)  ; LAB_004ef50b
    MOV EAX,dword ptr [ESP + 0x258]     ; 004ef4e1
    MOV dword ptr [ESP + 0x204],EAX     ; 004ef4e8
    MOV EAX,dword ptr [ESP + 0x25c]     ; 004ef4ef
    MOV dword ptr [ESP + 0x208],EAX     ; 004ef4f6
    MOV EAX,dword ptr [ESP + 0x260]     ; 004ef4fd
    MOV dword ptr [ESP + 0x20c],EAX     ; 004ef504
    LEA EAX,[ESP + 0x204]               ; 004ef50b
        ;   Label: LAB_004ef50b
    PUSH EAX                            ; 004ef512
    LEA EAX,[ESP + 0x1fc]               ; 004ef513
    PUSH EAX                            ; 004ef51a
    LEA EAX,[ESP + 0x8]                 ; 004ef51b
    PUSH EAX                            ; 004ef51f
    CALL core_xform.cpp_FUN_005b5760    ; 004ef520
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004ef525
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004ef528
    SHL EAX,0x3                         ; 004ef52f
    MOV EDX,EAX                         ; 004ef532
    SHL EAX,0x4                         ; 004ef534
    SUB EAX,EDX                         ; 004ef537
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x25a8] ; 004ef539
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef540
    SUB EAX,EDX                         ; 004ef547
    ADD EBX,0xfd8                       ; 004ef549
    SHL EAX,0x4                         ; 004ef54f
    ADD EBX,EAX                         ; 004ef552
    PUSH EBX                            ; 004ef554
    LEA EAX,[ESP + 0x4]                 ; 004ef555
    PUSH EAX                            ; 004ef559
    LEA ESI,[ESP + 0x128]               ; 004ef55a
    LEA EDI,[ESP + 0x1b8]               ; 004ef561
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004ef568
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004ef56d
    LEA ESI,[ESP + 0x128]               ; 004ef572
    ADD ESP,0x8                         ; 004ef579
        ;   Label: LAB_004ef579
    MOVSD.REP ES:EDI,ESI                ; 004ef57c
    MOV ECX,0xc                         ; 004ef57e
    LEA ESI,[ESP + 0x1b0]               ; 004ef583
    MOV EDI,EBP                         ; 004ef58a
    MOVSD.REP ES:EDI,ESI                ; 004ef58c
    MOV EAX,EBP                         ; 004ef58e
    ADD ESP,0x2ac                       ; 004ef590
    POP EBP                             ; 004ef596
    POP EDI                             ; 004ef597
    POP EBX                             ; 004ef598
    RET                                 ; 004ef599
    PUSH 0x5e5041                       ; 004ef59a | = "CShotgun"
        ;   Label: LAB_004ef59a
    PUSH EAX                            ; 004ef59f
    CALL core_actor.cpp_FUN_0040c550    ; 004ef5a0
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004ef5a5
    TEST EAX,EAX                        ; 004ef5a8
    JZ 0x004ef43b                       ; 004ef5aa
        ;   XREF to: 004ef43b (CONDITIONAL_JUMP)  ; LAB_004ef43b
    MOV EDI,0x3e89ba5e                  ; 004ef5b0
    MOV EAX,0xbc449ba6                  ; 004ef5b5
    MOV EDX,0x3dbc6a7f                  ; 004ef5ba
    MOV dword ptr [ESP + 0x274],EAX     ; 004ef5bf
    MOV EAX,0x3ecf5c29                  ; 004ef5c6
    MOV ECX,0xbe92f1aa                  ; 004ef5cb
    MOV dword ptr [ESP + 0x214],EAX     ; 004ef5d0
    LEA EAX,[ESP + 0x210]               ; 004ef5d7
    MOV dword ptr [ESP + 0x270],EDI     ; 004ef5de
    PUSH EAX                            ; 004ef5e5
    LEA EAX,[ESP + 0x274]               ; 004ef5e6
    MOV dword ptr [ESP + 0x27c],EDX     ; 004ef5ed
    PUSH EAX                            ; 004ef5f4
    LEA EAX,[ESP + 0x98]                ; 004ef5f5
    MOV EDI,0x3f9ac083                  ; 004ef5fc
    PUSH EAX                            ; 004ef601
    MOV dword ptr [ESP + 0x21c],ECX     ; 004ef602
    MOV dword ptr [ESP + 0x224],EDI     ; 004ef609
    CALL core_xform.cpp_FUN_005b5760    ; 004ef610
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    MOV EDX,dword ptr [ESI + 0x25a8]    ; 004ef615
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef61b
    SUB EAX,EDX                         ; 004ef622
    MOV EDX,EAX                         ; 004ef624
    SHL EDX,0x4                         ; 004ef626
    LEA EAX,[EBX + 0xfd8]               ; 004ef629
    ADD ESP,0xc                         ; 004ef62f
    ADD EAX,EDX                         ; 004ef632
    PUSH EAX                            ; 004ef634
    LEA EAX,[ESP + 0x94]                ; 004ef635
    PUSH EAX                            ; 004ef63c
    LEA ESI,[ESP + 0x188]               ; 004ef63d
    LEA EDI,[ESP + 0x1b8]               ; 004ef644
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004ef64b
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004ef650
    LEA ESI,[ESP + 0x188]               ; 004ef655
    JMP 0x004ef579                      ; 004ef65c
        ;   XREF to: 004ef579 (UNCONDITIONAL_JUMP)  ; LAB_004ef579
    CMP ECX,0x5                         ; 004ef661
        ;   Label: LAB_004ef661
    JNZ 0x004ef7a4                      ; 004ef664
        ;   XREF to: 004ef7a4 (CONDITIONAL_JUMP)  ; LAB_004ef7a4
    MOV EAX,0x3e882d5a                  ; 004ef66a
    MOV EDX,0xbe4d1e54                  ; 004ef66f
    MOV ECX,0x3d04bb36                  ; 004ef674
    MOV dword ptr [ESP + 0x1e0],EAX     ; 004ef679
    MOV dword ptr [ESP + 0x1e4],EDX     ; 004ef680
    LEA EAX,[ESP + 0x1e0]               ; 004ef687
    LEA EDX,[ESP + 0x264]               ; 004ef68e
    MOV dword ptr [ESP + 0x1e8],ECX     ; 004ef695
    CMP EDX,EAX                         ; 004ef69c
    JZ 0x004ef6bf                       ; 004ef69e
        ;   XREF to: 004ef6bf (CONDITIONAL_JUMP)  ; LAB_004ef6bf
    MOV EDI,0xbe4d1e54                  ; 004ef6a0
    MOV ESI,0x3e882d5a                  ; 004ef6a5
    MOV dword ptr [ESP + 0x26c],ECX     ; 004ef6aa
    MOV dword ptr [ESP + 0x268],EDI     ; 004ef6b1
    MOV dword ptr [ESP + 0x264],ESI     ; 004ef6b8
    MOV EDX,0xbef6147b                  ; 004ef6bf
        ;   Label: LAB_004ef6bf
    MOV ECX,0x3e0c27a6                  ; 004ef6c4
    LEA EDI,[ESP + 0x234]               ; 004ef6c9
    LEA ESI,[ESP + 0x240]               ; 004ef6d0
    LEA EAX,[ESP + 0x234]               ; 004ef6d7
    MOV dword ptr [ESP + 0x240],EDX     ; 004ef6de
    MOV dword ptr [ESP + 0x248],ECX     ; 004ef6e5
    MOV dword ptr [ESP + 0x244],ECX     ; 004ef6ec
    LEA EDX,[ESP + 0x228]               ; 004ef6f3
    MOVSD ES:EDI,ESI                    ; 004ef6fa
    MOVSD ES:EDI,ESI                    ; 004ef6fb
    MOVSD ES:EDI,ESI                    ; 004ef6fc
    CMP EDX,EAX                         ; 004ef6fd
    JZ 0x004ef72b                       ; 004ef6ff
        ;   XREF to: 004ef72b (CONDITIONAL_JUMP)  ; LAB_004ef72b
    MOV EAX,dword ptr [ESP + 0x234]     ; 004ef701
    MOV dword ptr [ESP + 0x228],EAX     ; 004ef708
    MOV EAX,dword ptr [ESP + 0x238]     ; 004ef70f
    MOV dword ptr [ESP + 0x22c],EAX     ; 004ef716
    MOV EAX,dword ptr [ESP + 0x23c]     ; 004ef71d
    MOV dword ptr [ESP + 0x230],EAX     ; 004ef724
    LEA EAX,[ESP + 0x228]               ; 004ef72b
        ;   Label: LAB_004ef72b
    PUSH EAX                            ; 004ef732
    LEA EAX,[ESP + 0x268]               ; 004ef733
    PUSH EAX                            ; 004ef73a
    LEA EAX,[ESP + 0x158]               ; 004ef73b
    PUSH EAX                            ; 004ef742
    CALL core_xform.cpp_FUN_005b5760    ; 004ef743
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004ef748
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004ef74b
    SHL EAX,0x3                         ; 004ef752
    MOV EDX,EAX                         ; 004ef755
    SHL EAX,0x4                         ; 004ef757
    SUB EAX,EDX                         ; 004ef75a
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x25a8] ; 004ef75c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef763
    SUB EAX,EDX                         ; 004ef76a
    ADD EBX,0xfd8                       ; 004ef76c
    SHL EAX,0x4                         ; 004ef772
    ADD EBX,EAX                         ; 004ef775
    PUSH EBX                            ; 004ef777
    LEA EAX,[ESP + 0x154]               ; 004ef778
    PUSH EAX                            ; 004ef77f
    LEA ESI,[ESP + 0xf8]                ; 004ef780
    LEA EDI,[ESP + 0x1b8]               ; 004ef787
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004ef78e
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004ef793
    LEA ESI,[ESP + 0xf8]                ; 004ef798
    JMP 0x004ef579                      ; 004ef79f
        ;   XREF to: 004ef579 (UNCONDITIONAL_JUMP)  ; LAB_004ef579
    JNZ 0x004ef8dc                      ; 004ef7a4
        ;   XREF to: 004ef8dc (CONDITIONAL_JUMP)  ; LAB_004ef8dc
        ;   Label: LAB_004ef7a4
    MOV EDX,0x3e882d5a                  ; 004ef7aa
    MOV ECX,0xbe4d1e54                  ; 004ef7af
    MOV ESI,0x3d04bb36                  ; 004ef7b4
    LEA EAX,[ESP + 0x2a0]               ; 004ef7b9
    MOV dword ptr [ESP + 0x2a0],EDX     ; 004ef7c0
    MOV dword ptr [ESP + 0x2a4],ECX     ; 004ef7c7
    LEA EDX,[ESP + 0x294]               ; 004ef7ce
    MOV dword ptr [ESP + 0x2a8],ESI     ; 004ef7d5
    CMP EDX,EAX                         ; 004ef7dc
    JNZ 0x004ef8bd                      ; 004ef7de
        ;   XREF to: 004ef8bd (CONDITIONAL_JUMP)  ; LAB_004ef8bd
    MOV ESI,0x3e0c27a6                  ; 004ef7e4
        ;   Label: LAB_004ef7e4
    MOV ECX,0xbef6147b                  ; 004ef7e9
    LEA EDI,[ESP + 0x288]               ; 004ef7ee
    LEA EAX,[ESP + 0x288]               ; 004ef7f5
    MOV dword ptr [ESP + 0x224],ESI     ; 004ef7fc
    MOV dword ptr [ESP + 0x220],ESI     ; 004ef803
    LEA ESI,[ESP + 0x21c]               ; 004ef80a
    MOV dword ptr [ESP + 0x21c],ECX     ; 004ef811
    LEA EDX,[ESP + 0x24c]               ; 004ef818
    MOVSD ES:EDI,ESI                    ; 004ef81f
    MOVSD ES:EDI,ESI                    ; 004ef820
    MOVSD ES:EDI,ESI                    ; 004ef821
    CMP EDX,EAX                         ; 004ef822
    JZ 0x004ef850                       ; 004ef824
        ;   XREF to: 004ef850 (CONDITIONAL_JUMP)  ; LAB_004ef850
    MOV EAX,dword ptr [ESP + 0x288]     ; 004ef826
    MOV dword ptr [ESP + 0x24c],EAX     ; 004ef82d
    MOV EAX,dword ptr [ESP + 0x28c]     ; 004ef834
    MOV dword ptr [ESP + 0x250],EAX     ; 004ef83b
    MOV EAX,dword ptr [ESP + 0x290]     ; 004ef842
    MOV dword ptr [ESP + 0x254],EAX     ; 004ef849
    LEA EAX,[ESP + 0x24c]               ; 004ef850
        ;   Label: LAB_004ef850
    PUSH EAX                            ; 004ef857
    LEA EAX,[ESP + 0x298]               ; 004ef858
    PUSH EAX                            ; 004ef85f
    LEA EAX,[ESP + 0x38]                ; 004ef860
    PUSH EAX                            ; 004ef864
    CALL core_xform.cpp_FUN_005b5760    ; 004ef865
        ;   XREF to: 005b5760 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_FUN_005b5760(CMatrix3x4f * output_matrix, CVector3f * position, CVector3f * euler_angles)
    ADD ESP,0xc                         ; 004ef86a
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004ef86d
    SHL EAX,0x3                         ; 004ef874
    MOV EDX,EAX                         ; 004ef877
    SHL EAX,0x4                         ; 004ef879
    SUB EAX,EDX                         ; 004ef87c
    MOV EDX,dword ptr [EBX + EAX*0x1 + 0x25a8] ; 004ef87e
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ef885
    SUB EAX,EDX                         ; 004ef88c
    ADD EBX,0xfd8                       ; 004ef88e
    SHL EAX,0x4                         ; 004ef894
    ADD EBX,EAX                         ; 004ef897
    PUSH EBX                            ; 004ef899
    LEA EAX,[ESP + 0x34]                ; 004ef89a
    PUSH EAX                            ; 004ef89e
    LEA ESI,[ESP + 0x68]                ; 004ef89f
    LEA EDI,[ESP + 0x1b8]               ; 004ef8a3
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005b5200 ; 004ef8aa
        ;   XREF to: 005b5200 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_005b5200()
    MOV ECX,0xc                         ; 004ef8af
    LEA ESI,[ESP + 0x68]                ; 004ef8b4
    JMP 0x004ef579                      ; 004ef8b8
        ;   XREF to: 004ef579 (UNCONDITIONAL_JUMP)  ; LAB_004ef579
    MOV EDI,0x3e882d5a                  ; 004ef8bd
        ;   Label: LAB_004ef8bd
    MOV dword ptr [ESP + 0x298],ECX     ; 004ef8c2
    MOV dword ptr [ESP + 0x29c],ESI     ; 004ef8c9
    MOV dword ptr [ESP + 0x294],EDI     ; 004ef8d0
    JMP 0x004ef7e4                      ; 004ef8d7
        ;   XREF to: 004ef7e4 (UNCONDITIONAL_JUMP)  ; LAB_004ef7e4
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 004ef8dc
        ;   Label: LAB_004ef8dc
    PUSH EAX                            ; 004ef8e3
    PUSH EBX                            ; 004ef8e4
    LEA ESI,[ESP + 0xc8]                ; 004ef8e5
    LEA EDI,[ESP + 0x1b8]               ; 004ef8ec
    CALL core_charactr.cpp_FUN_00432be0 ; 004ef8f3
        ;   XREF to: 00432be0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432be0()
    MOV ECX,0xc                         ; 004ef8f8
    LEA ESI,[ESP + 0xc8]                ; 004ef8fd
    JMP 0x004ef579                      ; 004ef904
        ;   XREF to: 004ef579 (UNCONDITIONAL_JUMP)  ; LAB_004ef579

