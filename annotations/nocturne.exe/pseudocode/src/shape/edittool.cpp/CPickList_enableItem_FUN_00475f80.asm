; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CPickList_enableItem_FUN_00475f80(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_004a4b50 at 004a5026
;   core_game.cpp_CGame_runGameSession_FUN_0049da10 at 0049e2ba
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057ee5b
;   TerminatedCString s_CPickList_enableItem_inv_0057ee71
;   TerminatedCString s_shape_edittool_cpp_0057ee97
;   TerminatedCString s_Out_of_memory_0057eead
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_memory.c_realloc_FUN_00564a70
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475f80
        ;   Label: shape_edittool.cpp_CPickList_enableItem_FUN_00475f80
    PUSH ESI                            ; 00475f81
    PUSH EDI                            ; 00475f82
    PUSH EBP                            ; 00475f83
    MOV EBX,dword ptr [ESP + 0x14]      ; 00475f84
    MOV ESI,dword ptr [ESP + 0x18]      ; 00475f88
    TEST ESI,ESI                        ; 00475f8c
    JL 0x00475f94                       ; 00475f8e
        ;   XREF to: 00475f94 (CONDITIONAL_JUMP)  ; LAB_00475f94
    CMP ESI,dword ptr [EBX]             ; 00475f90
    JL 0x00475fb7                       ; 00475f92
        ;   XREF to: 00475fb7 (CONDITIONAL_JUMP)  ; LAB_00475fb7
    MOV ECX,0x57ee5b                    ; 00475f94 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00475f94
    MOV EDI,0xdfa                       ; 00475f99
    PUSH 0x57ee71                       ; 00475f9e | = "CPickList::enableItem - invalid index"
    MOV dword ptr [0x01cc4800],ECX      ; 00475fa3 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00475fa9 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00475faf
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00475fb4
    CMP ESI,dword ptr [EBX + 0x130]     ; 00475fb7
        ;   Label: LAB_00475fb7
    JGE 0x00475fda                      ; 00475fbd
        ;   XREF to: 00475fda (CONDITIONAL_JUMP)  ; LAB_00475fda
    CMP dword ptr [ESP + 0x1c],0x0      ; 00475fbf
        ;   Label: LAB_00475fbf
    SETNZ AL                            ; 00475fc4
    MOV EDX,dword ptr [EBX + 0x134]     ; 00475fc7
    AND EAX,0xff                        ; 00475fcd
    MOV dword ptr [EDX + ESI*0x4],EAX   ; 00475fd2
    POP EBP                             ; 00475fd5
    POP EDI                             ; 00475fd6
    POP ESI                             ; 00475fd7
    POP EBX                             ; 00475fd8
    RET                                 ; 00475fd9
    MOV EAX,dword ptr [EBX]             ; 00475fda
        ;   Label: LAB_00475fda
    SHL EAX,0x2                         ; 00475fdc
    PUSH EAX                            ; 00475fdf
    MOV EAX,dword ptr [EBX + 0x134]     ; 00475fe0
    PUSH EAX                            ; 00475fe6
    CALL crt_memory.c_realloc_FUN_00564a70 ; 00475fe7
        ;   XREF to: 00564a70 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_realloc_FUN_00564a70()
    ADD ESP,0x8                         ; 00475fec
    MOV dword ptr [EBX + 0x134],EAX     ; 00475fef
    TEST EAX,EAX                        ; 00475ff5
    JZ 0x0047601a                       ; 00475ff7
        ;   XREF to: 0047601a (CONDITIONAL_JUMP)  ; LAB_0047601a
    MOV EBP,dword ptr [EBX]             ; 00475ff9
        ;   Label: LAB_00475ff9
    MOV EAX,dword ptr [EBX + 0x130]     ; 00475ffb
    CMP EAX,EBP                         ; 00476001
    JGE 0x00475fbf                      ; 00476003
        ;   XREF to: 00475fbf (CONDITIONAL_JUMP)  ; LAB_00475fbf
    MOV EDX,dword ptr [EBX + 0x134]     ; 00476005
    MOV dword ptr [EDX + EAX*0x4],0x1   ; 0047600b
    INC dword ptr [EBX + 0x130]         ; 00476012
    JMP 0x00475ff9                      ; 00476018
        ;   XREF to: 00475ff9 (UNCONDITIONAL_JUMP)  ; LAB_00475ff9
    MOV ECX,0x57ee97                    ; 0047601a | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047601a
    MOV EDI,0xe01                       ; 0047601f
    PUSH 0x57eead                       ; 00476024 | = "Out of memory"
    MOV dword ptr [0x01cc4800],ECX      ; 00476029 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0047602f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00476035
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0047603a
    JMP 0x00475ff9                      ; 0047603d
        ;   XREF to: 00475ff9 (UNCONDITIONAL_JUMP)  ; LAB_00475ff9

