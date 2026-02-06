; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_curtain_cpp_CCurtain_FUN_00449f10(CCurtain *this_ptr)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_curtain.cpp_CCurtain_process_FUN_0044a920 at 0044ad89
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449f10
        ;   Label: core_curtain.cpp_CCurtain_FUN_00449f10
    PUSH ESI                            ; 00449f11
    PUSH EDI                            ; 00449f12
    PUSH EBP                            ; 00449f13
    SUB ESP,0x20                        ; 00449f14
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449f17
    MOV EDX,dword ptr [EAX + 0x204]     ; 00449f1b
    XOR EDI,EDI                         ; 00449f21
    TEST EDX,EDX                        ; 00449f23
    JLE 0x00449f9c                      ; 00449f25
        ;   XREF to: 00449f9c (CONDITIONAL_JUMP)  ; LAB_00449f9c
    MOV EBP,dword ptr [ESP + 0x34]      ; 00449f27
    ADD EAX,0x208                       ; 00449f2b
    MOV EBX,dword ptr [ESP + 0x34]      ; 00449f30
    MOV dword ptr [ESP + 0x1c],EAX      ; 00449f34
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449f38
    ADD EBP,0x20                        ; 00449f3c
    ADD EAX,0x3c                        ; 00449f3f
    ADD EBX,0x228                       ; 00449f42
    MOV dword ptr [ESP + 0x18],EAX      ; 00449f48
    IMUL ESI,EDI,0x74                   ; 00449f4c
        ;   Label: LAB_00449f4c
    FLD float ptr [EBX]                 ; 00449f4f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00449f51
    FSUB float ptr [EBP]                ; 00449f55
    MOV EDX,dword ptr [ESP + 0x18]      ; 00449f58
    FSTP float ptr [ESP]                ; 00449f5c
    FLD float ptr [EBX + 0x4]           ; 00449f5f
    FSUB float ptr [EBP + 0x4]          ; 00449f62
    ADD ESI,EAX                         ; 00449f65
    MOV EAX,ESP                         ; 00449f67
    FSTP float ptr [ESP + 0x4]          ; 00449f69
    PUSH EAX                            ; 00449f6d
    LEA EAX,[ESP + 0x10]                ; 00449f6e
    FLD float ptr [EBX + 0x8]           ; 00449f72
    PUSH EAX                            ; 00449f75
    FSUB float ptr [EBP + 0x8]          ; 00449f76
    PUSH EDX                            ; 00449f79
    FSTP float ptr [ESP + 0x14]         ; 00449f7a
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00449f7e
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00449f83
    CMP ESI,EAX                         ; 00449f86
    JNZ 0x00449fa4                      ; 00449f88
        ;   XREF to: 00449fa4 (CONDITIONAL_JUMP)  ; LAB_00449fa4
    MOV EAX,dword ptr [ESP + 0x34]      ; 00449f8a
        ;   Label: LAB_00449f8a
    INC EDI                             ; 00449f8e
    MOV ECX,dword ptr [EAX + 0x204]     ; 00449f8f
    ADD EBX,0x74                        ; 00449f95
    CMP EDI,ECX                         ; 00449f98
    JL 0x00449f4c                       ; 00449f9a
        ;   XREF to: 00449f4c (CONDITIONAL_JUMP)  ; LAB_00449f4c
    ADD ESP,0x20                        ; 00449f9c
        ;   Label: LAB_00449f9c
    POP EBP                             ; 00449f9f
    POP EDI                             ; 00449fa0
    POP ESI                             ; 00449fa1
    POP EBX                             ; 00449fa2
    RET                                 ; 00449fa3
    MOV EDX,dword ptr [EAX]             ; 00449fa4
        ;   Label: LAB_00449fa4
    MOV dword ptr [ESI],EDX             ; 00449fa6
    MOV EDX,dword ptr [EAX + 0x4]       ; 00449fa8
    MOV dword ptr [ESI + 0x4],EDX       ; 00449fab
    MOV EDX,dword ptr [EAX + 0x8]       ; 00449fae
    MOV dword ptr [ESI + 0x8],EDX       ; 00449fb1
    JMP 0x00449f8a                      ; 00449fb4
        ;   XREF to: 00449f8a (UNCONDITIONAL_JUMP)  ; LAB_00449f8a

