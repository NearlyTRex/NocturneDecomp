; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00427060(int param_1,int param_2,undefined4 param_3,float param_4)
;
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[3]:
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041e74e
;   core_ghoul.cpp_CGhoul_process_FUN_004c1bb0 at 004c389f
;   core_zombie.cpp_CZombie_process_FUN_00595f30 at 00596c1f
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730
;   core_skeleton.cpp_FUN_00546a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427060
        ;   Label: core_charactr.cpp_FUN_00427060
    SUB ESP,0x54                        ; 00427061
    MOV EBX,dword ptr [ESP + 0x5c]      ; 00427064
    MOV EAX,dword ptr [ESP + 0x60]      ; 00427068
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 0042706c
    JZ 0x0042707b                       ; 00427074
        ;   XREF to: 0042707b (CONDITIONAL_JUMP)  ; LAB_0042707b
    ADD ESP,0x54                        ; 00427076
        ;   Label: LAB_00427076
    POP EBX                             ; 00427079
    RET                                 ; 0042707a
    PUSH dword ptr [ESP + 0x68]         ; 0042707b
        ;   Label: LAB_0042707b
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0042707f
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00427084
    TEST EAX,EAX                        ; 00427087
    JZ 0x00427076                       ; 00427089
        ;   XREF to: 00427076 (CONDITIONAL_JUMP)  ; LAB_00427076
    PUSH EDI                            ; 0042708b
    PUSH ESI                            ; 0042708c
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0042708d
    PUSH ECX                            ; 00427091
    LEA EAX,[EBX + 0x2b4]               ; 00427092
    PUSH EAX                            ; 00427098
    LEA ESI,[ESP + 0x10]                ; 00427099
    LEA EDI,[ESP + 0x40]                ; 0042709d
    CALL core_skeleton.cpp_FUN_00546a90 ; 004270a1
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00546a90()
    ADD ESP,0x8                         ; 004270a6
    LEA EAX,[ESP + 0x38]                ; 004270a9
    LEA ESI,[ESP + 0x8]                 ; 004270ad
    PUSH EAX                            ; 004270b1
    MOVSD ES:EDI,ESI                    ; 004270b2
    MOVSD ES:EDI,ESI                    ; 004270b3
    MOVSD ES:EDI,ESI                    ; 004270b4
    PUSH EBX                            ; 004270b5
    LEA ESI,[ESP + 0x1c]                ; 004270b6
    LEA EDI,[ESP + 0x58]                ; 004270ba
    CALL core_actor.cpp_FUN_00408d70    ; 004270be
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x1c]                ; 004270c3
    ADD ESP,0x8                         ; 004270c7
    LEA EAX,[ESP + 0x2c]                ; 004270ca
    MOVSD ES:EDI,ESI                    ; 004270ce
    MOVSD ES:EDI,ESI                    ; 004270cf
    MOVSD ES:EDI,ESI                    ; 004270d0
    PUSH EAX                            ; 004270d1
    MOV ESI,0xc0400000                  ; 004270d2
    PUSH EBX                            ; 004270d7
    XOR EDI,EDI                         ; 004270d8
    MOV dword ptr [ESP + 0x34],ESI      ; 004270da
    MOV dword ptr [ESP + 0x38],EDI      ; 004270de
    MOV dword ptr [ESP + 0x3c],EDI      ; 004270e2
    LEA ESI,[ESP + 0x28]                ; 004270e6
    LEA EDI,[ESP + 0x4c]                ; 004270ea
    CALL core_actor.cpp_FUN_00408cf0    ; 004270ee
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0x28]                ; 004270f3
    ADD ESP,0x8                         ; 004270f7
    MOVSD ES:EDI,ESI                    ; 004270fa
    MOVSD ES:EDI,ESI                    ; 004270fb
    MOVSD ES:EDI,ESI                    ; 004270fc
    MOV EAX,dword ptr [EBX + 0x280c]    ; 004270fd
    PUSH EAX                            ; 00427103
    LEA EAX,[ESP + 0x48]                ; 00427104
    PUSH EAX                            ; 00427108
    LEA EAX,[ESP + 0x58]                ; 00427109
    PUSH EAX                            ; 0042710d
    MOV EDX,dword ptr [0x006167e0]      ; 0042710e | g_CGorePtr
    PUSH EDX                            ; 00427114
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730 ; 00427115
        ;   XREF to: 004c9730 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 0042711a
    POP ESI                             ; 0042711d
    POP EDI                             ; 0042711e
    ADD ESP,0x54                        ; 0042711f
    POP EBX                             ; 00427122
    RET                                 ; 00427123

