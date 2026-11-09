; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_weapon_cpp_FUN_0057b880(int param_1)
;
;
; XREF[15]:
;   core_bindevil.cpp_FUN_0040f840 at 0040f847
;   core_blundrbs.cpp_FUN_00410490 at 004104fd
;   core_burncrss.cpp_FUN_00424550 at 004245dd
;   core_disease.cpp_FUN_0045c040 at 0045c047
;   core_dynamite.cpp_FUN_0047b130 at 0047b136
;   core_elephant.cpp_FUN_00486d40 at 00486da4
;   core_exorcism.cpp_FUN_0048b020 at 0048b43a
;   core_firestff.cpp_FUN_004a4d00 at 004a4d31
;   core_flintlck.cpp_FUN_004ae850 at 004ae8b4
;   core_gun.cpp_FUN_004d0fc0 at 004d101e
;   ... and 5 more
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   CGame g_CGameInstance
;   undefined4 g_CHeroClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_game.cpp_FUN_004bd910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b880
        ;   Label: core_weapon.cpp_FUN_0057b880
    PUSH ESI                            ; 0057b881
    PUSH EBP                            ; 0057b882
    MOV EBX,dword ptr [ESP + 0x10]      ; 0057b883
    CMP dword ptr [EBX + 0x570],0x0     ; 0057b887
    JZ 0x0057b899                       ; 0057b88e
        ;   XREF to: 0057b899 (CONDITIONAL_JUMP)  ; LAB_0057b899
    MOV EAX,0x1                         ; 0057b890
        ;   Label: LAB_0057b890
    POP EBP                             ; 0057b895
    POP ESI                             ; 0057b896
    POP EBX                             ; 0057b897
    RET                                 ; 0057b898
    MOV ECX,dword ptr [0x01d5ba70]      ; 0057b899 | g_CHeroClassInfo.name_hash
        ;   Label: LAB_0057b899
    PUSH ECX                            ; 0057b89f
    MOV ESI,dword ptr [EBX + 0x304]     ; 0057b8a0
    PUSH ESI                            ; 0057b8a6
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0057b8a7
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0057b8ac
    MOV EDX,EAX                         ; 0057b8af
    TEST EAX,EAX                        ; 0057b8b1
    JZ 0x0057b890                       ; 0057b8b3
        ;   XREF to: 0057b890 (CONDITIONAL_JUMP)  ; LAB_0057b890
    CMP dword ptr [EBX + 0x56c],0xa     ; 0057b8b5
    JNZ 0x0057b8eb                      ; 0057b8bc
        ;   XREF to: 0057b8eb (CONDITIONAL_JUMP)  ; LAB_0057b8eb
    MOV EAX,dword ptr [EAX + 0x20b80]   ; 0057b8be
    MOV EBP,dword ptr [EBX + 0x58c]     ; 0057b8c4
        ;   Label: LAB_0057b8c4
    CMP EAX,EBP                         ; 0057b8ca
    JGE 0x0057b8f3                      ; 0057b8cc
        ;   XREF to: 0057b8f3 (CONDITIONAL_JUMP)  ; LAB_0057b8f3
    CMP dword ptr [EBX + 0x56c],0xa     ; 0057b8ce
    JNZ 0x0057b8e5                      ; 0057b8d5
        ;   XREF to: 0057b8e5 (CONDITIONAL_JUMP)  ; LAB_0057b8e5
    MOV EAX,[0x005fe9dc]                ; 0057b8d7 | g_CGamePtr
    PUSH EAX                            ; 0057b8dc | g_CGameInstance
    CALL core_game.cpp_FUN_004bd910     ; 0057b8dd
        ;   XREF to: 004bd910 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bd910(CGame * this_ptr)
    ADD ESP,0x4                         ; 0057b8e2
    XOR EAX,EAX                         ; 0057b8e5
        ;   Label: LAB_0057b8e5
    POP EBP                             ; 0057b8e7
    POP ESI                             ; 0057b8e8
    POP EBX                             ; 0057b8e9
    RET                                 ; 0057b8ea
    MOV EAX,dword ptr [EAX + 0x20b84]   ; 0057b8eb
        ;   Label: LAB_0057b8eb
    JMP 0x0057b8c4                      ; 0057b8f1
        ;   XREF to: 0057b8c4 (UNCONDITIONAL_JUMP)  ; LAB_0057b8c4
    MOV ESI,dword ptr [EBX + 0x56c]     ; 0057b8f3
        ;   Label: LAB_0057b8f3
    SUB EAX,EBP                         ; 0057b8f9
    CMP ESI,0xa                         ; 0057b8fb
    JNZ 0x0057b920                      ; 0057b8fe
        ;   XREF to: 0057b920 (CONDITIONAL_JUMP)  ; LAB_0057b920
    PUSH EDI                            ; 0057b900
    MOV EDI,dword ptr [0x005fe9dc]      ; 0057b901 | g_CGamePtr
    PUSH EDI                            ; 0057b907 | g_CGameInstance
    MOV dword ptr [EDX + 0x20b80],EAX   ; 0057b908
    CALL core_game.cpp_FUN_004bd910     ; 0057b90e
        ;   XREF to: 004bd910 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004bd910(CGame * this_ptr)
    ADD ESP,0x4                         ; 0057b913
    POP EDI                             ; 0057b916
    MOV EAX,0x1                         ; 0057b917
    POP EBP                             ; 0057b91c
    POP ESI                             ; 0057b91d
    POP EBX                             ; 0057b91e
    RET                                 ; 0057b91f
    MOV dword ptr [EDX + 0x20b84],EAX   ; 0057b920
        ;   Label: LAB_0057b920
    MOV EAX,0x1                         ; 0057b926
    POP EBP                             ; 0057b92b
    POP ESI                             ; 0057b92c
    POP EBX                             ; 0057b92d
    RET                                 ; 0057b92e

