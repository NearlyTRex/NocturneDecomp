; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042fdc0(int param_1,int param_2,undefined4 param_3,float param_4)
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
; XREF[4]:
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426b7f
;   core_demnfolk.cpp_CDemnfolk_process_FUN_00455080 at 00455d96
;   core_ghoul.cpp_CGhoul_process_FUN_004c6eb0 at 004c8bae
;   core_zombie.cpp_CZombie_process_FUN_00588ee0 at 00589bcc
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01d22e44
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042fdc0
        ;   Label: core_charactr.cpp_FUN_0042fdc0
    SUB ESP,0x54                        ; 0042fdc1
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0042fdc4
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042fdc8
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042fdcc
    JZ 0x0042fddb                       ; 0042fdd4
        ;   XREF to: 0042fddb (CONDITIONAL_JUMP)  ; LAB_0042fddb
    ADD ESP,0x54                        ; 0042fdd6
        ;   Label: LAB_0042fdd6
    POP EBX                             ; 0042fdd9
    RET                                 ; 0042fdda
    PUSH dword ptr [ESP + 0x68]         ; 0042fddb
        ;   Label: LAB_0042fddb
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0042fddf
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0042fde4
    TEST EAX,EAX                        ; 0042fde7
    JZ 0x0042fdd6                       ; 0042fde9
        ;   XREF to: 0042fdd6 (CONDITIONAL_JUMP)  ; LAB_0042fdd6
    PUSH EDI                            ; 0042fdeb
    PUSH ESI                            ; 0042fdec
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0042fded
    PUSH ECX                            ; 0042fdf1
    LEA EAX,[EBX + 0x158]               ; 0042fdf2
    PUSH EAX                            ; 0042fdf8
    LEA ESI,[ESP + 0x10]                ; 0042fdf9
    LEA EDI,[ESP + 0x40]                ; 0042fdfd
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 0042fe01
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 0042fe06
    LEA EAX,[ESP + 0x38]                ; 0042fe09
    LEA ESI,[ESP + 0x8]                 ; 0042fe0d
    PUSH EAX                            ; 0042fe11
    MOVSD ES:EDI,ESI                    ; 0042fe12
    MOVSD ES:EDI,ESI                    ; 0042fe13
    MOVSD ES:EDI,ESI                    ; 0042fe14
    PUSH EBX                            ; 0042fe15
    LEA ESI,[ESP + 0x1c]                ; 0042fe16
    LEA EDI,[ESP + 0x58]                ; 0042fe1a
    CALL core_actor.cpp_FUN_00408b80    ; 0042fe1e
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x1c]                ; 0042fe23
    ADD ESP,0x8                         ; 0042fe27
    LEA EAX,[ESP + 0x2c]                ; 0042fe2a
    MOVSD ES:EDI,ESI                    ; 0042fe2e
    MOVSD ES:EDI,ESI                    ; 0042fe2f
    MOVSD ES:EDI,ESI                    ; 0042fe30
    PUSH EAX                            ; 0042fe31
    MOV ESI,0xc0400000                  ; 0042fe32
    PUSH EBX                            ; 0042fe37
    XOR EDI,EDI                         ; 0042fe38
    MOV dword ptr [ESP + 0x34],ESI      ; 0042fe3a
    MOV dword ptr [ESP + 0x38],EDI      ; 0042fe3e
    MOV dword ptr [ESP + 0x3c],EDI      ; 0042fe42
    LEA ESI,[ESP + 0x28]                ; 0042fe46
    LEA EDI,[ESP + 0x4c]                ; 0042fe4a
    CALL core_actor.cpp_FUN_00408b00    ; 0042fe4e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x28]                ; 0042fe53
    ADD ESP,0x8                         ; 0042fe57
    MOVSD ES:EDI,ESI                    ; 0042fe5a
    MOVSD ES:EDI,ESI                    ; 0042fe5b
    MOVSD ES:EDI,ESI                    ; 0042fe5c
    MOV EAX,dword ptr [EBX + 0x27a0]    ; 0042fe5d
    PUSH EAX                            ; 0042fe63
    LEA EAX,[ESP + 0x48]                ; 0042fe64
    PUSH EAX                            ; 0042fe68
    LEA EAX,[ESP + 0x58]                ; 0042fe69
    PUSH EAX                            ; 0042fe6d
    MOV EDX,dword ptr [0x005fed24]      ; 0042fe6e | g_CGorePtr
    PUSH EDX                            ; 0042fe74
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0 ; 0042fe75
        ;   XREF to: 004ce8a0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004ce8a0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 0042fe7a
    POP ESI                             ; 0042fe7d
    POP EDI                             ; 0042fe7e
    ADD ESP,0x54                        ; 0042fe7f
    POP EBX                             ; 0042fe82
    RET                                 ; 0042fe83

