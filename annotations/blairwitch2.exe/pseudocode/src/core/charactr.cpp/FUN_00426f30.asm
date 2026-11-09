; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00426f30(int param_1)
;
; Local Variables:
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[3]:
;   core_bride.cpp_FUN_0041dbe0 at 0041e7e7
;   core_ghoul.cpp_FUN_004c1bb0 at 004c3938
;   core_zombie.cpp_FUN_00595f30 at 00596cc7
;
; Referenced Globals:
;   CGore* g_CGorePtr = 01cb8284
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_0040d060
;   core_gore.cpp_FUN_004c9730
;   core_xform.cpp_FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00426f30
        ;   Label: core_charactr.cpp_FUN_00426f30
    PUSH ESI                            ; 00426f31
    PUSH EDI                            ; 00426f32
    PUSH EBP                            ; 00426f33
    MOV EBP,ESP                         ; 00426f34
    SUB ESP,0x84                        ; 00426f36
    SUB EBP,0x7e                        ; 00426f3c
    MOV EBX,dword ptr [EBP + 0x92]      ; 00426f3f
    XOR EDX,EDX                         ; 00426f45
    MOV ECX,dword ptr [EBX + 0x3448]    ; 00426f47
    MOV dword ptr [EBP + 0x76],EDX      ; 00426f4d
    TEST ECX,ECX                        ; 00426f50
    JLE 0x00426f8f                      ; 00426f52
        ;   XREF to: 00426f8f (CONDITIONAL_JUMP)  ; LAB_00426f8f
    LEA EAX,[EBX + 0x1134]              ; 00426f54
    MOV dword ptr [EBP + 0x72],EAX      ; 00426f5a
    LEA EAX,[EBX + 0x344c]              ; 00426f5d
    MOV dword ptr [EBP + 0x7a],EAX      ; 00426f63
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00426f66
        ;   Label: LAB_00426f66
    MOV EAX,dword ptr [EAX]             ; 00426f69
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 00426f6b
    JNZ 0x00426f97                      ; 00426f73
        ;   XREF to: 00426f97 (CONDITIONAL_JUMP)  ; LAB_00426f97
    MOV ESI,dword ptr [EBP + 0x7a]      ; 00426f75
        ;   Label: LAB_00426f75
    MOV EDI,dword ptr [EBP + 0x76]      ; 00426f78
    MOV EDX,dword ptr [EBX + 0x3448]    ; 00426f7b
    ADD ESI,0x38                        ; 00426f81
    INC EDI                             ; 00426f84
    MOV dword ptr [EBP + 0x7a],ESI      ; 00426f85
    MOV dword ptr [EBP + 0x76],EDI      ; 00426f88
    CMP EDI,EDX                         ; 00426f8b
    JL 0x00426f66                       ; 00426f8d
        ;   XREF to: 00426f66 (CONDITIONAL_JUMP)  ; LAB_00426f66
    LEA ESP,[EBP + 0x7e]                ; 00426f8f
        ;   Label: LAB_00426f8f
    POP EBP                             ; 00426f92
    POP EDI                             ; 00426f93
    POP ESI                             ; 00426f94
    POP EBX                             ; 00426f95
    RET                                 ; 00426f96
    PUSH 0x3dcccccd                     ; 00426f97
        ;   Label: LAB_00426f97
    CALL core_actor.cpp_FUN_0040d060    ; 00426f9c
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 00426fa1
    TEST EAX,EAX                        ; 00426fa4
    JZ 0x00426f75                       ; 00426fa6
        ;   XREF to: 00426f75 (CONDITIONAL_JUMP)  ; LAB_00426f75
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00426fa8
    IMUL EAX,dword ptr [EAX + 0x4],0x30 ; 00426fab
    ADD EAX,dword ptr [EBP + 0x72]      ; 00426faf
    PUSH EAX                            ; 00426fb2
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00426fb3
    ADD EAX,0x8                         ; 00426fb6
    PUSH EAX                            ; 00426fb9
    XOR EAX,EAX                         ; 00426fba
    MOV ECX,0xbe4ccccd                  ; 00426fbc
    MOV dword ptr [EBP + 0x5a],EAX      ; 00426fc1
    MOV dword ptr [EBP + 0x5e],EAX      ; 00426fc4
    LEA EAX,[EBP + 0x5a]                ; 00426fc7
    MOV dword ptr [EBP + 0x62],ECX      ; 00426fca
    PUSH EAX                            ; 00426fcd
    LEA ESI,[EBP + 0x36]                ; 00426fce
    LEA EDI,[EBP + 0x42]                ; 00426fd1
    CALL core_xform.cpp_FUN_00591530    ; 00426fd4
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0x36]                ; 00426fd9
    LEA EAX,[EBP + 0x42]                ; 00426fdc
    ADD ESP,0x8                         ; 00426fdf
    MOVSD ES:EDI,ESI                    ; 00426fe2
    MOVSD ES:EDI,ESI                    ; 00426fe3
    MOVSD ES:EDI,ESI                    ; 00426fe4
    PUSH EAX                            ; 00426fe5
    LEA ESI,[EBP + -0x6]                ; 00426fe6
    LEA EDI,[EBP + 0x4e]                ; 00426fe9
    CALL core_xform.cpp_FUN_00591530    ; 00426fec
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 00426ff1
    LEA EAX,[EBP + 0x4e]                ; 00426ff4
    LEA ESI,[EBP + -0x6]                ; 00426ff7
    PUSH EAX                            ; 00426ffa
    MOVSD ES:EDI,ESI                    ; 00426ffb
    MOVSD ES:EDI,ESI                    ; 00426ffc
    MOVSD ES:EDI,ESI                    ; 00426ffd
    PUSH EBX                            ; 00426ffe
    LEA ESI,[EBP + 0x12]                ; 00426fff
    LEA EDI,[EBP + 0x66]                ; 00427002
    CALL core_actor.cpp_FUN_00408d70    ; 00427005
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[EBP + 0x12]                ; 0042700a
    LEA EAX,[EBP + 0x2a]                ; 0042700d
    ADD ESP,0x8                         ; 00427010
    MOVSD ES:EDI,ESI                    ; 00427013
    MOVSD ES:EDI,ESI                    ; 00427014
    MOVSD ES:EDI,ESI                    ; 00427015
    PUSH EAX                            ; 00427016
    MOV ESI,0x40400000                  ; 00427017
    PUSH EBX                            ; 0042701c
    XOR EDI,EDI                         ; 0042701d
    MOV dword ptr [EBP + 0x2a],ESI      ; 0042701f
    MOV dword ptr [EBP + 0x2e],EDI      ; 00427022
    MOV dword ptr [EBP + 0x32],EDI      ; 00427025
    LEA ESI,[EBP + 0x1e]                ; 00427028
    LEA EDI,[EBP + 0x6]                 ; 0042702b
    CALL core_actor.cpp_FUN_00408cf0    ; 0042702e
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[EBP + 0x1e]                ; 00427033
    MOVSD ES:EDI,ESI                    ; 00427036
    MOVSD ES:EDI,ESI                    ; 00427037
    MOVSD ES:EDI,ESI                    ; 00427038
    ADD ESP,0x8                         ; 00427039
    MOV EDX,dword ptr [EBX + 0x280c]    ; 0042703c
    PUSH EDX                            ; 00427042
    LEA EAX,[EBP + 0x6]                 ; 00427043
    PUSH EAX                            ; 00427046
    LEA EAX,[EBP + 0x66]                ; 00427047
    PUSH EAX                            ; 0042704a
    MOV ECX,dword ptr [0x006167e0]      ; 0042704b | g_CGorePtr
    PUSH ECX                            ; 00427051
    CALL core_gore.cpp_FUN_004c9730     ; 00427052
        ;   XREF to: 004c9730 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_FUN_004c9730(CGore * this_ptr, CVector3f * position, CVector3f * velocity, EBloodType blood_type)
    ADD ESP,0x10                        ; 00427057
    JMP 0x00426f75                      ; 0042705a
        ;   XREF to: 00426f75 (UNCONDITIONAL_JUMP)  ; LAB_00426f75

