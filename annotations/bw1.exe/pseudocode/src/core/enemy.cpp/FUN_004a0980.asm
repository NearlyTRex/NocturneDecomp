; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_enemy_cpp_FUN_004a0980(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x50]:1  local_50
;
; XREF[2]:
;   core_enemy.cpp_FUN_004a0ab0 at 004a0ccd
;   core_mobster.cpp_CMobster_aimTommyGun_FUN_0051def0 at 0051df2d
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_box.cpp_FUN_00421af0
;   core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_005572e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0980
        ;   Label: core_enemy.cpp_FUN_004a0980
    PUSH EBP                            ; 004a0981
    SUB ESP,0xa8                        ; 004a0982
    MOV EBP,dword ptr [ESP + 0xb4]      ; 004a0988
    MOV EBX,dword ptr [ESP + 0xb8]      ; 004a098f
    TEST EBX,EBX                        ; 004a0996
    JNZ 0x004a09a5                      ; 004a0998
        ;   XREF to: 004a09a5 (CONDITIONAL_JUMP)  ; LAB_004a09a5
    XOR EAX,EAX                         ; 004a099a
    ADD ESP,0xa8                        ; 004a099c
    POP EBP                             ; 004a09a2
    POP EBX                             ; 004a09a3
    RET                                 ; 004a09a4
    PUSH EDI                            ; 004a09a5
        ;   Label: LAB_004a09a5
    PUSH ESI                            ; 004a09a6
    PUSH EBP                            ; 004a09a7
    MOV EAX,dword ptr [EBP + 0x154]     ; 004a09a8
    LEA ESI,[ESP + 0x6c]                ; 004a09ae
    LEA EDI,[ESP + 0x48]                ; 004a09b2
    CALL dword ptr [EAX + 0x140]        ; 004a09b6
    ADD ESP,0x4                         ; 004a09bc
    LEA EAX,[ESP + 0x44]                ; 004a09bf
    LEA ESI,[ESP + 0x68]                ; 004a09c3
    PUSH EAX                            ; 004a09c7
    MOVSD ES:EDI,ESI                    ; 004a09c8
    MOVSD ES:EDI,ESI                    ; 004a09c9
    MOVSD ES:EDI,ESI                    ; 004a09ca
    PUSH EBP                            ; 004a09cb
    LEA ESI,[ESP + 0x40]                ; 004a09cc
    LEA EDI,[ESP + 0x94]                ; 004a09d0
    CALL core_actor.cpp_FUN_00408b40    ; 004a09d7
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x40]                ; 004a09dc
    ADD ESP,0x8                         ; 004a09e0
    MOVSD ES:EDI,ESI                    ; 004a09e3
    MOVSD ES:EDI,ESI                    ; 004a09e4
    MOVSD ES:EDI,ESI                    ; 004a09e5
    PUSH EBX                            ; 004a09e6
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a09e7
    LEA ESI,[ESP + 0x24]                ; 004a09ed
    LEA EDI,[ESP + 0xc]                 ; 004a09f1
    CALL dword ptr [EAX + 0x1c]         ; 004a09f5
    MOV ECX,0x6                         ; 004a09f8
    ADD ESP,0x4                         ; 004a09fd
    LEA EAX,[ESP + 0x8c]                ; 004a0a00
    LEA ESI,[ESP + 0x20]                ; 004a0a07
    PUSH EAX                            ; 004a0a0b
    MOVSD.REP ES:EDI,ESI                ; 004a0a0c
    PUSH EBX                            ; 004a0a0e
    LEA ESI,[ESP + 0x88]                ; 004a0a0f
    LEA EDI,[ESP + 0x58]                ; 004a0a16
    CALL core_actor.cpp_FUN_00408bb0    ; 004a0a1a
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 004a0a1f
    LEA EAX,[ESP + 0x50]                ; 004a0a22
    LEA ESI,[ESP + 0x80]                ; 004a0a26
    PUSH EAX                            ; 004a0a2d
    LEA EAX,[ESP + 0xc]                 ; 004a0a2e
    MOVSD ES:EDI,ESI                    ; 004a0a32
    MOVSD ES:EDI,ESI                    ; 004a0a33
    MOVSD ES:EDI,ESI                    ; 004a0a34
    PUSH EAX                            ; 004a0a35
    LEA ESI,[ESP + 0xac]                ; 004a0a36
    LEA EDI,[ESP + 0x7c]                ; 004a0a3d
    CALL core_box.cpp_FUN_00421af0      ; 004a0a41
        ;   XREF to: 00421af0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00421af0()
    ADD ESP,0x8                         ; 004a0a46
    LEA EAX,[ESP + 0x74]                ; 004a0a49
    LEA ESI,[ESP + 0xa4]                ; 004a0a4d
    PUSH EAX                            ; 004a0a54
    MOVSD ES:EDI,ESI                    ; 004a0a55
    MOVSD ES:EDI,ESI                    ; 004a0a56
    MOVSD ES:EDI,ESI                    ; 004a0a57
    PUSH EBX                            ; 004a0a58
    LEA ESI,[ESP + 0xa0]                ; 004a0a59
    CALL core_actor.cpp_FUN_00408b40    ; 004a0a60
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004a0a65
    LEA EAX,[ESP + 0x5c]                ; 004a0a68
    PUSH EAX                            ; 004a0a6c
    LEA EAX,[ESP + 0x90]                ; 004a0a6d
    LEA EDI,[ESP + 0x60]                ; 004a0a74
    PUSH EAX                            ; 004a0a78
    MOV EDX,dword ptr [0x00622c18]      ; 004a0a79 | g_CDemonSetPtr
    LEA ESI,[ESP + 0xa0]                ; 004a0a7f
    PUSH EDX                            ; 004a0a86 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004a0a87
    MOVSD ES:EDI,ESI                    ; 004a0a88
    MOVSD ES:EDI,ESI                    ; 004a0a89
    CALL core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_005572e0 ; 004a0a8a
        ;   XREF to: 005572e0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_005572e0(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 004a0a8f
    TEST EAX,EAX                        ; 004a0a92
    SETZ AL                             ; 004a0a94
    AND EAX,0xff                        ; 004a0a97
    POP ESI                             ; 004a0a9c
    POP EDI                             ; 004a0a9d
    ADD ESP,0xa8                        ; 004a0a9e
    POP EBP                             ; 004a0aa4
    POP EBX                             ; 004a0aa5
    RET                                 ; 004a0aa6

