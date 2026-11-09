; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_enemy_cpp_FUN_00489600(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x50]:1  local_50
;
; XREF[2]:
;   core_enemy.cpp_FUN_00489730 at 0048994d
;   core_zombprie.cpp_FUN_0058e8d0 at 0058e90d
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_box.cpp_FUN_0041ee30
;   core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0053cca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489600
        ;   Label: core_enemy.cpp_FUN_00489600
    PUSH EBP                            ; 00489601
    SUB ESP,0xa8                        ; 00489602
    MOV EBP,dword ptr [ESP + 0xb4]      ; 00489608
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0048960f
    TEST EBX,EBX                        ; 00489616
    JNZ 0x00489625                      ; 00489618
        ;   XREF to: 00489625 (CONDITIONAL_JUMP)  ; LAB_00489625
    XOR EAX,EAX                         ; 0048961a
    ADD ESP,0xa8                        ; 0048961c
    POP EBP                             ; 00489622
    POP EBX                             ; 00489623
    RET                                 ; 00489624
    PUSH EDI                            ; 00489625
        ;   Label: LAB_00489625
    PUSH ESI                            ; 00489626
    PUSH EBP                            ; 00489627
    MOV EAX,dword ptr [EBP + 0x154]     ; 00489628
    LEA ESI,[ESP + 0x6c]                ; 0048962e
    LEA EDI,[ESP + 0x48]                ; 00489632
    CALL dword ptr [EAX + 0x140]        ; 00489636
    ADD ESP,0x4                         ; 0048963c
    LEA EAX,[ESP + 0x44]                ; 0048963f
    LEA ESI,[ESP + 0x68]                ; 00489643
    PUSH EAX                            ; 00489647
    MOVSD ES:EDI,ESI                    ; 00489648
    MOVSD ES:EDI,ESI                    ; 00489649
    MOVSD ES:EDI,ESI                    ; 0048964a
    PUSH EBP                            ; 0048964b
    LEA ESI,[ESP + 0x40]                ; 0048964c
    LEA EDI,[ESP + 0x94]                ; 00489650
    CALL core_actor.cpp_FUN_00408b80    ; 00489657
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x40]                ; 0048965c
    ADD ESP,0x8                         ; 00489660
    MOVSD ES:EDI,ESI                    ; 00489663
    MOVSD ES:EDI,ESI                    ; 00489664
    MOVSD ES:EDI,ESI                    ; 00489665
    PUSH EBX                            ; 00489666
    MOV EAX,dword ptr [EBX + 0x154]     ; 00489667
    LEA ESI,[ESP + 0x24]                ; 0048966d
    LEA EDI,[ESP + 0xc]                 ; 00489671
    CALL dword ptr [EAX + 0x1c]         ; 00489675
    MOV ECX,0x6                         ; 00489678
    ADD ESP,0x4                         ; 0048967d
    LEA EAX,[ESP + 0x8c]                ; 00489680
    LEA ESI,[ESP + 0x20]                ; 00489687
    PUSH EAX                            ; 0048968b
    MOVSD.REP ES:EDI,ESI                ; 0048968c
    PUSH EBX                            ; 0048968e
    LEA ESI,[ESP + 0x88]                ; 0048968f
    LEA EDI,[ESP + 0x58]                ; 00489696
    CALL core_actor.cpp_FUN_00408bf0    ; 0048969a
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    ADD ESP,0x8                         ; 0048969f
    LEA EAX,[ESP + 0x50]                ; 004896a2
    LEA ESI,[ESP + 0x80]                ; 004896a6
    PUSH EAX                            ; 004896ad
    LEA EAX,[ESP + 0xc]                 ; 004896ae
    MOVSD ES:EDI,ESI                    ; 004896b2
    MOVSD ES:EDI,ESI                    ; 004896b3
    MOVSD ES:EDI,ESI                    ; 004896b4
    PUSH EAX                            ; 004896b5
    LEA ESI,[ESP + 0xac]                ; 004896b6
    LEA EDI,[ESP + 0x7c]                ; 004896bd
    CALL core_box.cpp_FUN_0041ee30      ; 004896c1
        ;   XREF to: 0041ee30 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041ee30()
    ADD ESP,0x8                         ; 004896c6
    LEA EAX,[ESP + 0x74]                ; 004896c9
    LEA ESI,[ESP + 0xa4]                ; 004896cd
    PUSH EAX                            ; 004896d4
    MOVSD ES:EDI,ESI                    ; 004896d5
    MOVSD ES:EDI,ESI                    ; 004896d6
    MOVSD ES:EDI,ESI                    ; 004896d7
    PUSH EBX                            ; 004896d8
    LEA ESI,[ESP + 0xa0]                ; 004896d9
    CALL core_actor.cpp_FUN_00408b80    ; 004896e0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 004896e5
    LEA EAX,[ESP + 0x5c]                ; 004896e8
    PUSH EAX                            ; 004896ec
    LEA EAX,[ESP + 0x90]                ; 004896ed
    LEA EDI,[ESP + 0x60]                ; 004896f4
    PUSH EAX                            ; 004896f8
    MOV EDX,dword ptr [0x00603b28]      ; 004896f9 | g_CDemonSetPtr
    LEA ESI,[ESP + 0xa0]                ; 004896ff
    PUSH EDX                            ; 00489706 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 00489707
    MOVSD ES:EDI,ESI                    ; 00489708
    MOVSD ES:EDI,ESI                    ; 00489709
    CALL core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0053cca0 ; 0048970a
        ;   XREF to: 0053cca0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0053cca0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 0048970f
    TEST EAX,EAX                        ; 00489712
    SETZ AL                             ; 00489714
    AND EAX,0xff                        ; 00489717
    POP ESI                             ; 0048971c
    POP EDI                             ; 0048971d
    ADD ESP,0xa8                        ; 0048971e
    POP EBP                             ; 00489724
    POP EBX                             ; 00489725
    RET                                 ; 00489726

