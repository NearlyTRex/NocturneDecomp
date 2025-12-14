; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_fire.cpp_FUN_004c5680()
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c8fd0 at 004c9000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c5680
        ;   Label: core_fire.cpp_FUN_004c5680
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c5681
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c5685
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c5689
    LEA EAX,[EDX + 0x4]                 ; 004c568d
    CMP EAX,ECX                         ; 004c5690
    JNZ 0x004c56b8                      ; 004c5692
        ;   XREF to: 004c56b8 (CONDITIONAL_JUMP)  ; LAB_004c56b8
    LEA EAX,[EDX + 0x1c]                ; 004c5694
        ;   Label: LAB_004c5694
    CMP EAX,EBX                         ; 004c5697
    JNZ 0x004c56cc                      ; 004c5699
        ;   XREF to: 004c56cc (CONDITIONAL_JUMP)  ; LAB_004c56cc
    MOV dword ptr [EDX],0x1             ; 004c569b
        ;   Label: LAB_004c569b
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c56a1
    MOV dword ptr [EDX + 0x14],0x3e800000 ; 004c56a5
    MOV dword ptr [EDX + 0x18],EAX      ; 004c56ac
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c56af
    MOV dword ptr [EDX + 0x28],EAX      ; 004c56b3
    POP EBX                             ; 004c56b6
    RET                                 ; 004c56b7
    PUSH ESI                            ; 004c56b8
        ;   Label: LAB_004c56b8
    MOV ESI,dword ptr [ECX]             ; 004c56b9
    MOV dword ptr [EAX],ESI             ; 004c56bb
    MOV ESI,dword ptr [ECX + 0x4]       ; 004c56bd
    MOV dword ptr [EAX + 0x4],ESI       ; 004c56c0
    MOV ESI,dword ptr [ECX + 0x8]       ; 004c56c3
    MOV dword ptr [EAX + 0x8],ESI       ; 004c56c6
    POP ESI                             ; 004c56c9
    JMP 0x004c5694                      ; 004c56ca
        ;   XREF to: 004c5694 (UNCONDITIONAL_JUMP)  ; LAB_004c5694
    MOV ECX,dword ptr [EBX]             ; 004c56cc
        ;   Label: LAB_004c56cc
    MOV dword ptr [EAX],ECX             ; 004c56ce
    MOV ECX,dword ptr [EBX + 0x4]       ; 004c56d0
    MOV dword ptr [EAX + 0x4],ECX       ; 004c56d3
    MOV ECX,dword ptr [EBX + 0x8]       ; 004c56d6
    MOV dword ptr [EAX + 0x8],ECX       ; 004c56d9
    JMP 0x004c569b                      ; 004c56dc
        ;   XREF to: 004c569b (UNCONDITIONAL_JUMP)  ; LAB_004c569b

