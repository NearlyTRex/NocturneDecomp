; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_charactr_cpp_FUN_00433a60(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[8]:
;   core_prye.cpp_FUN_0051e6d0 at 0051eb31
;   core_prye.cpp_FUN_0051f490 at 0051f77a
;   core_prye.cpp_FUN_00520dec at 00520e0f
;   core_prye.cpp_FUN_00521880 at 005218b8
;   core_prye.cpp_FUN_005220d0 at 00522314
;   unkafter_prye.cpp_FUN_00524940 at 00524dca
;   unkafter_prye.cpp_FUN_005260b0 at 0052628f
;   unkafter_prye.cpp_FUN_005263c0 at 0052645c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433a60
        ;   Label: core_charactr.cpp_FUN_00433a60
    PUSH ESI                            ; 00433a61
    PUSH EBP                            ; 00433a62
    MOV EBP,ESP                         ; 00433a63
    SUB ESP,0xc                         ; 00433a65
    AND ESP,0xfffffff8                  ; 00433a68
    MOV EDX,dword ptr [EBP + 0x10]      ; 00433a6b
    MOV EAX,dword ptr [EDX + 0x2f00]    ; 00433a6e
    XOR ECX,ECX                         ; 00433a74
    SHL EAX,0x3                         ; 00433a76
    MOV dword ptr [ESP],ECX             ; 00433a79
    MOV ECX,EAX                         ; 00433a7c
    SHL EAX,0x3                         ; 00433a7e
    SUB EAX,ECX                         ; 00433a81
    MOV EBX,dword ptr [EBP + 0x14]      ; 00433a83
    CMP EBX,dword ptr [EDX + EAX*0x1 + 0x27cc] ; 00433a86
    JZ 0x00433ab4                       ; 00433a8d
        ;   XREF to: 00433ab4 (CONDITIONAL_JUMP)  ; LAB_00433ab4
    MOV EAX,dword ptr [EDX + 0x2f00]    ; 00433a8f
        ;   Label: LAB_00433a8f
    SHL EAX,0x3                         ; 00433a95
    MOV ECX,EAX                         ; 00433a98
    SHL EAX,0x3                         ; 00433a9a
    SUB EAX,ECX                         ; 00433a9d
    MOV ESI,dword ptr [EBP + 0x14]      ; 00433a9f
    CMP ESI,dword ptr [EDX + EAX*0x1 + 0x27c8] ; 00433aa2
    JZ 0x00433abf                       ; 00433aa9
        ;   XREF to: 00433abf (CONDITIONAL_JUMP)  ; LAB_00433abf
    MOV EAX,dword ptr [ESP]             ; 00433aab
    MOV ESP,EBP                         ; 00433aae
    POP EBP                             ; 00433ab0
    POP ESI                             ; 00433ab1
    POP EBX                             ; 00433ab2
    RET                                 ; 00433ab3
    MOV EAX,dword ptr [EDX + 0x2f04]    ; 00433ab4
        ;   Label: LAB_00433ab4
    MOV dword ptr [ESP],EAX             ; 00433aba
    JMP 0x00433a8f                      ; 00433abd
        ;   XREF to: 00433a8f (UNCONDITIONAL_JUMP)  ; LAB_00433a8f
    FLD float ptr [EDX + 0x2f04]        ; 00433abf
        ;   Label: LAB_00433abf
    FLD1                                ; 00433ac5
    FSUBRP                              ; 00433ac7
    FADD float ptr [ESP]                ; 00433ac9
    FSTP float ptr [ESP]                ; 00433acc
    MOV EAX,dword ptr [ESP]             ; 00433acf
    MOV ESP,EBP                         ; 00433ad2
    POP EBP                             ; 00433ad4
    POP ESI                             ; 00433ad5
    POP EBX                             ; 00433ad6
    RET                                 ; 00433ad7

