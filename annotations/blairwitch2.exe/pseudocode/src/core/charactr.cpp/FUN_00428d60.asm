; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00428d60(CCharacter *this_ptr,int hand_index,CVector3f *drop_direction)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; CVector3f *      Stack[0xc]:4   drop_direction
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_stranger.cpp_FUN_0056f130 at 0056f15e
;   unkafter_stranger.cpp_FUN_0045ddd0 at 0045ddfe
;
; Called Functions:
;   core_actor.cpp_FUN_00408cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428d60
        ;   Label: core_charactr.cpp_FUN_00428d60
    PUSH ESI                            ; 00428d61
    SUB ESP,0x24                        ; 00428d62
    MOV EDX,dword ptr [ESP + 0x30]      ; 00428d65
    MOV ESI,dword ptr [ESP + 0x38]      ; 00428d69
    MOV EAX,dword ptr [ESP + 0x34]      ; 00428d6d
    SHL EAX,0x3                         ; 00428d71
    MOV EBX,EAX                         ; 00428d74
    SHL EAX,0x4                         ; 00428d76
    SUB EAX,EBX                         ; 00428d79
    LEA EBX,[EDX + 0x2618]              ; 00428d7b
    ADD EBX,EAX                         ; 00428d81
    CMP dword ptr [EBX + 0x8],0x0       ; 00428d83
    JZ 0x00428deb                       ; 00428d87
        ;   XREF to: 00428deb (CONDITIONAL_JUMP)  ; LAB_00428deb
    TEST ESI,ESI                        ; 00428d89
    JZ 0x00428dd0                       ; 00428d8b
        ;   XREF to: 00428dd0 (CONDITIONAL_JUMP)  ; LAB_00428dd0
    PUSH EDI                            ; 00428d8d
    PUSH ESI                            ; 00428d8e
    PUSH EDX                            ; 00428d8f
    LEA ESI,[ESP + 0xc]                 ; 00428d90
    LEA EDI,[ESP + 0x18]                ; 00428d94
    CALL core_actor.cpp_FUN_00408cf0    ; 00428d98
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0xc]                 ; 00428d9d
    LEA EAX,[ESP + 0x18]                ; 00428da1
    ADD ESP,0x8                         ; 00428da5
    LEA EDX,[ESP + 0x1c]                ; 00428da8
    MOVSD ES:EDI,ESI                    ; 00428dac
    MOVSD ES:EDI,ESI                    ; 00428dad
    MOVSD ES:EDI,ESI                    ; 00428dae
    CMP EDX,EAX                         ; 00428daf
    JZ 0x00428dcb                       ; 00428db1
        ;   XREF to: 00428dcb (CONDITIONAL_JUMP)  ; LAB_00428dcb
    MOV EAX,dword ptr [ESP + 0x10]      ; 00428db3
    MOV dword ptr [ESP + 0x1c],EAX      ; 00428db7
    MOV EAX,dword ptr [ESP + 0x14]      ; 00428dbb
    MOV dword ptr [ESP + 0x20],EAX      ; 00428dbf
    MOV EAX,dword ptr [ESP + 0x18]      ; 00428dc3
    MOV dword ptr [ESP + 0x24],EAX      ; 00428dc7
    LEA ESI,[ESP + 0x1c]                ; 00428dcb
        ;   Label: LAB_00428dcb
    POP EDI                             ; 00428dcf
    PUSH ESI                            ; 00428dd0
        ;   Label: LAB_00428dd0
    MOV EAX,dword ptr [EBX + 0x8]       ; 00428dd1
    PUSH EAX                            ; 00428dd4
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00428dd5
    CALL dword ptr [EDX + 0x94]         ; 00428ddb
    ADD ESP,0x8                         ; 00428de1
    MOV dword ptr [EBX + 0x8],0x0       ; 00428de4
    ADD ESP,0x24                        ; 00428deb
        ;   Label: LAB_00428deb
    POP ESI                             ; 00428dee
    POP EBX                             ; 00428def
    RET                                 ; 00428df0

