; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_00591d80(CCharacter *param_1,int param_2,CVector3f *param_3)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00432820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591d80
        ;   Label: core_stranger.cpp_FUN_00591d80
    PUSH ESI                            ; 00591d81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00591d82
    MOV EAX,dword ptr [ESP + 0x10]      ; 00591d86
    SHL EAX,0x3                         ; 00591d8a
    MOV EDX,EAX                         ; 00591d8d
    SHL EAX,0x4                         ; 00591d8f
    SUB EAX,EDX                         ; 00591d92
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25b0] ; 00591d94
    CMP EAX,dword ptr [EBX + 0x20004]   ; 00591d9b
    JZ 0x00591db9                       ; 00591da1
        ;   XREF to: 00591db9 (CONDITIONAL_JUMP)  ; LAB_00591db9
    MOV ECX,dword ptr [ESP + 0x14]      ; 00591da3
        ;   Label: LAB_00591da3
    PUSH ECX                            ; 00591da7
    MOV ESI,dword ptr [ESP + 0x14]      ; 00591da8
    PUSH ESI                            ; 00591dac
    PUSH EBX                            ; 00591dad
    CALL core_charactr.cpp_FUN_00432820 ; 00591dae
        ;   XREF to: 00432820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00432820(CCharacter * this_ptr, int hand_index, CVector3f * drop_direction)
    ADD ESP,0xc                         ; 00591db3
    POP ESI                             ; 00591db6
    POP EBX                             ; 00591db7
    RET                                 ; 00591db8
    PUSH 0x0                            ; 00591db9
        ;   Label: LAB_00591db9
    MOV EAX,dword ptr [EBX + 0x154]     ; 00591dbb
    PUSH EBX                            ; 00591dc1
    MOV dword ptr [EBX + 0x20004],0x0   ; 00591dc2
    CALL dword ptr [EAX + 0x144]        ; 00591dcc
    ADD ESP,0x8                         ; 00591dd2
    JMP 0x00591da3                      ; 00591dd5
        ;   XREF to: 00591da3 (UNCONDITIONAL_JUMP)  ; LAB_00591da3

