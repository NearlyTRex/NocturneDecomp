; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_testCoronaVisibility_FUN_00451eb0(int start_x,int start_y,int depth_reciprocal)
;
; Parameters:
; int              Stack[0x4]:4   start_x
; int              Stack[0x8]:4   start_y
; int              Stack[0xc]:4   depth_reciprocal
;
; Referenced Globals:
;   undefined4 DAT_0152bc1c
;   undefined4 DAT_0152bc20
;   undefined4 DAT_0152bc24
;   undefined4 DAT_0152bc28
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00451eb0
        ;   Label: core_dcamera.cpp_testCoronaVisibility_FUN_00451eb0
    PUSH EBP                            ; 00451eb1
    SUB ESP,0x10                        ; 00451eb2
    MOV ESI,dword ptr [ESP + 0x24]      ; 00451eb5
    CMP dword ptr [0x0152bc1c],0x0      ; 00451eb9 | DAT_0152bc1c
    JZ 0x00451f76                       ; 00451ec0
        ;   XREF to: 00451f76 (CONDITIONAL_JUMP)  ; LAB_00451f76
    PUSH EDI                            ; 00451ec6
    PUSH EBX                            ; 00451ec7
    MOV EDI,dword ptr [0x0152bc20]      ; 00451ec8 | DAT_0152bc20
    XOR ECX,ECX                         ; 00451ece
    MOV EBX,dword ptr [0x0152bc28]      ; 00451ed0 | DAT_0152bc28
    MOV dword ptr [ESP + 0x8],ECX       ; 00451ed6
    MOV ECX,dword ptr [0x0152bc24]      ; 00451eda | DAT_0152bc24
    TEST ESI,ESI                        ; 00451ee0
    JZ 0x00451f7d                       ; 00451ee2
        ;   XREF to: 00451f7d (CONDITIONAL_JUMP)  ; LAB_00451f7d
    MOV EAX,0x7fffffff                  ; 00451ee8
    MOV EDX,EAX                         ; 00451eed
    SAR EDX,0x1f                        ; 00451eef
    IDIV ESI                            ; 00451ef2
    MOV ESI,EAX                         ; 00451ef4
    MOV EBP,dword ptr [ESP + 0x24]      ; 00451ef6
        ;   Label: LAB_00451ef6
    MOV EAX,EDI                         ; 00451efa
    SUB EAX,EBP                         ; 00451efc
    SHL EAX,0x4                         ; 00451efe
    MOV dword ptr [ESP + 0x14],EAX      ; 00451f01
    MOV EAX,dword ptr [ESP + 0x28]      ; 00451f05
    SUB ECX,EAX                         ; 00451f09
    MOV EAX,ECX                         ; 00451f0b
    MOV EDX,EBX                         ; 00451f0d
    SHL EAX,0x4                         ; 00451f0f
    SUB EDX,ESI                         ; 00451f12
    MOV dword ptr [ESP + 0xc],EAX       ; 00451f14
    MOV EAX,EDX                         ; 00451f18
    SAR EDX,0x1f                        ; 00451f1a
    SHL EDX,0x4                         ; 00451f1d
    SBB EAX,EDX                         ; 00451f20
    SAR EAX,0x4                         ; 00451f22
    MOV EBX,dword ptr [ESP + 0x28]      ; 00451f25
    MOV ECX,EBP                         ; 00451f29
    SHL EBX,0x8                         ; 00451f2b
    SHL ECX,0x8                         ; 00451f2e
    MOV dword ptr [ESP + 0x10],EAX      ; 00451f31
    MOV EDX,ESI                         ; 00451f35
    MOV EAX,0x10                        ; 00451f37
    MOV EBP,dword ptr [ESP + 0x10]      ; 00451f3c
    MOV EDI,EBX                         ; 00451f40
        ;   Label: LAB_00451f40
    SAR EDI,0x8                         ; 00451f42
    IMUL EDI,EDI,0x500                  ; 00451f45
    MOV ESI,ECX                         ; 00451f4b
    SAR ESI,0x8                         ; 00451f4d
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xb36198] ; 00451f50
    LEA EDI,[EDX + -0x80]               ; 00451f57
    CMP ESI,EDI                         ; 00451f5a
    JGE 0x00451f87                      ; 00451f5c
        ;   XREF to: 00451f87 (CONDITIONAL_JUMP)  ; LAB_00451f87
    TEST EAX,EAX                        ; 00451f5e
        ;   Label: LAB_00451f5e
    JNZ 0x00451f6a                      ; 00451f60
        ;   XREF to: 00451f6a (CONDITIONAL_JUMP)  ; LAB_00451f6a
    MOV dword ptr [ESP + 0x8],0x1       ; 00451f62
    MOV EAX,dword ptr [ESP + 0x8]       ; 00451f6a
        ;   Label: LAB_00451f6a
    POP EBX                             ; 00451f6e
    POP EDI                             ; 00451f6f
    ADD ESP,0x10                        ; 00451f70
        ;   Label: LAB_00451f70
    POP EBP                             ; 00451f73
    POP ESI                             ; 00451f74
    RET                                 ; 00451f75
    MOV EAX,0x1                         ; 00451f76
        ;   Label: LAB_00451f76
    JMP 0x00451f70                      ; 00451f7b
        ;   XREF to: 00451f70 (UNCONDITIONAL_JUMP)  ; LAB_00451f70
    MOV ESI,0x7fffffff                  ; 00451f7d
        ;   Label: LAB_00451f7d
    JMP 0x00451ef6                      ; 00451f82
        ;   XREF to: 00451ef6 (UNCONDITIONAL_JUMP)  ; LAB_00451ef6
    MOV ESI,dword ptr [ESP + 0x14]      ; 00451f87
        ;   Label: LAB_00451f87
    MOV EDI,dword ptr [ESP + 0xc]       ; 00451f8b
    DEC EAX                             ; 00451f8f
    ADD EDX,EBP                         ; 00451f90
    ADD ECX,ESI                         ; 00451f92
    ADD EBX,EDI                         ; 00451f94
    TEST EAX,EAX                        ; 00451f96
    JG 0x00451f40                       ; 00451f98
        ;   XREF to: 00451f40 (CONDITIONAL_JUMP)  ; LAB_00451f40
    JMP 0x00451f5e                      ; 00451f9a
        ;   XREF to: 00451f5e (UNCONDITIONAL_JUMP)  ; LAB_00451f5e

