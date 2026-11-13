; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90(CCharacter *this_ptr,int part_index,int bone_index,float chance)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; int              Stack[0xc]:4   bone_index
; float            Stack[0x10]:4   chance
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[4]:
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426c11
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 00455e28
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c8c3e
;   core_zombie.cpp_CZombie_process_FUN_00588ee0 at 00589c5e
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fe90
        ;   Label: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
    SUB ESP,0x3c                        ; 0042fe91
    MOV EBX,dword ptr [ESP + 0x44]      ; 0042fe94
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042fe98
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042fe9c
    JZ 0x0042feab                       ; 0042fea4
        ;   XREF to: 0042feab (CONDITIONAL_JUMP)  ; LAB_0042feab
    ADD ESP,0x3c                        ; 0042fea6
        ;   Label: LAB_0042fea6
    POP EBX                             ; 0042fea9
    RET                                 ; 0042feaa
    PUSH dword ptr [ESP + 0x50]         ; 0042feab
        ;   Label: LAB_0042feab
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0042feaf
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0042feb4
    TEST EAX,EAX                        ; 0042feb7
    JZ 0x0042fea6                       ; 0042feb9
        ;   XREF to: 0042fea6 (CONDITIONAL_JUMP)  ; LAB_0042fea6
    PUSH EDI                            ; 0042febb
    PUSH ESI                            ; 0042febc
    MOV ECX,dword ptr [ESP + 0x54]      ; 0042febd
    PUSH ECX                            ; 0042fec1
    LEA EAX,[EBX + 0x158]               ; 0042fec2
    PUSH EAX                            ; 0042fec8
    LEA ESI,[ESP + 0x1c]                ; 0042fec9
    LEA EDI,[ESP + 0x40]                ; 0042fecd
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0042fed1
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 0042fed6
    LEA EAX,[ESP + 0x38]                ; 0042fed9
    LEA ESI,[ESP + 0x14]                ; 0042fedd
    PUSH EAX                            ; 0042fee1
    MOVSD ES:EDI,ESI                    ; 0042fee2
    MOVSD ES:EDI,ESI                    ; 0042fee3
    MOVSD ES:EDI,ESI                    ; 0042fee4
    PUSH EBX                            ; 0042fee5
    LEA ESI,[ESP + 0x28]                ; 0042fee6
    LEA EDI,[ESP + 0x10]                ; 0042feea
    CALL core_actor.cpp_FUN_00408b80    ; 0042feee
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x28]                ; 0042fef3
    ADD ESP,0x8                         ; 0042fef7
    MOVSD ES:EDI,ESI                    ; 0042fefa
    MOVSD ES:EDI,ESI                    ; 0042fefb
    MOVSD ES:EDI,ESI                    ; 0042fefc
    XOR ESI,ESI                         ; 0042fefd
    MOV EDI,0x40e00000                  ; 0042feff
    MOV dword ptr [ESP + 0x2c],ESI      ; 0042ff04
    MOV dword ptr [ESP + 0x30],EDI      ; 0042ff08
    MOV dword ptr [ESP + 0x34],ESI      ; 0042ff0c
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 0042ff10
    PUSH EAX                            ; 0042ff16
    LEA EAX,[ESP + 0x30]                ; 0042ff17
    PUSH EAX                            ; 0042ff1b
    LEA EAX,[ESP + 0x10]                ; 0042ff1c
    PUSH EAX                            ; 0042ff20
    MOV EDX,dword ptr [0x005fed24]      ; 0042ff21 | g_CGorePtr
    PUSH EDX                            ; 0042ff27
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0 ; 0042ff28
        ;   XREF to: 004ce8a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 0042ff2d
    POP ESI                             ; 0042ff30
    POP EDI                             ; 0042ff31
    ADD ESP,0x3c                        ; 0042ff32
    POP EBX                             ; 0042ff35
    RET                                 ; 0042ff36

