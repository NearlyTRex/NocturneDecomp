; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_0056f130(CCharacter *param_1,int param_2,CVector3f *param_3)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00428d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f130
        ;   Label: core_stranger.cpp_FUN_0056f130
    PUSH ESI                            ; 0056f131
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056f132
    MOV EAX,dword ptr [ESP + 0x10]      ; 0056f136
    SHL EAX,0x3                         ; 0056f13a
    MOV EDX,EAX                         ; 0056f13d
    SHL EAX,0x4                         ; 0056f13f
    SUB EAX,EDX                         ; 0056f142
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x2620] ; 0056f144
    CMP EAX,dword ptr [EBX + 0x25698]   ; 0056f14b
    JZ 0x0056f169                       ; 0056f151
        ;   XREF to: 0056f169 (CONDITIONAL_JUMP)  ; LAB_0056f169
    MOV ECX,dword ptr [ESP + 0x14]      ; 0056f153
        ;   Label: LAB_0056f153
    PUSH ECX                            ; 0056f157
    MOV ESI,dword ptr [ESP + 0x14]      ; 0056f158
    PUSH ESI                            ; 0056f15c
    PUSH EBX                            ; 0056f15d
    CALL core_charactr.cpp_FUN_00428d60 ; 0056f15e
        ;   XREF to: 00428d60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00428d60(CCharacter * this_ptr, int hand_index, CVector3f * drop_direction)
    ADD ESP,0xc                         ; 0056f163
    POP ESI                             ; 0056f166
    POP EBX                             ; 0056f167
    RET                                 ; 0056f168
    PUSH 0x0                            ; 0056f169
        ;   Label: LAB_0056f169
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056f16b
    PUSH EBX                            ; 0056f171
    MOV dword ptr [EBX + 0x25698],0x0   ; 0056f172
    CALL dword ptr [EAX + 0x150]        ; 0056f17c
    ADD ESP,0x8                         ; 0056f182
    JMP 0x0056f153                      ; 0056f185
        ;   XREF to: 0056f153 (UNCONDITIONAL_JUMP)  ; LAB_0056f153

