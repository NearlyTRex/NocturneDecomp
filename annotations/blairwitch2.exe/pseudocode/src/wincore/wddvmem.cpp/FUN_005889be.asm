; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_005889be(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_006141c0
;   undefined4 DAT_00622010
;   undefined4 DAT_0070c62c
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 005889be
        ;   Label: wincore_wddvmem.cpp_FUN_005889be
    PUSH EBP                            ; 005889c0
    SUB ESP,0x4                         ; 005889c1
    MOV EDX,dword ptr [0x006141bc]      ; 005889c4 | DAT_006141bc
    XOR ECX,ECX                         ; 005889ca
    TEST EDX,EDX                        ; 005889cc
    JLE 0x00588a3d                      ; 005889ce
        ;   XREF to: 00588a3d (CONDITIONAL_JUMP)  ; LAB_00588a3d
    PUSH EDI                            ; 005889d0
    PUSH ESI                            ; 005889d1
    PUSH EBX                            ; 005889d2
    MOV EAX,[0x006141c0]                ; 005889d3 | DAT_006141c0
    MOV EDX,EAX                         ; 005889d8
    SAR EDX,0x1f                        ; 005889da
    SHL EDX,0x3                         ; 005889dd
    SBB EAX,EDX                         ; 005889e0
    SAR EAX,0x3                         ; 005889e2
    MOV EDI,EAX                         ; 005889e5
    MOV EAX,[0x006141b8]                ; 005889e7 | DAT_006141b8
    SHL EAX,0x2                         ; 005889ec
    MOV EBP,dword ptr [0x006141b8]      ; 005889ef | DAT_006141b8
    MOV dword ptr [ESP + 0xc],EAX       ; 005889f5
    XOR EAX,EAX                         ; 005889f9
    IMUL EDX,EBP,0x0                    ; 005889fb
    MOV EBX,dword ptr [0x006141b8]      ; 005889fe | DAT_006141b8
        ;   Label: LAB_005889fe
    IMUL EBX,ECX                        ; 00588a04
    IMUL EBX,EDI                        ; 00588a07
    MOV ESI,dword ptr [0x00622010]      ; 00588a0a | DAT_00622010
    ADD EBX,ESI                         ; 00588a10
    MOV dword ptr [EAX + 0x1c2a38c],EBX ; 00588a12
    MOV EBX,dword ptr [0x0070c62c]      ; 00588a18 | DAT_0070c62c
    ADD EAX,0x4                         ; 00588a1e
    ADD EBX,EDX                         ; 00588a21
    INC ECX                             ; 00588a23
    MOV dword ptr [EAX + 0x1c2b648],EBX ; 00588a24
    MOV EBX,dword ptr [ESP + 0xc]       ; 00588a2a
    MOV ESI,dword ptr [0x006141bc]      ; 00588a2e | DAT_006141bc
    ADD EDX,EBX                         ; 00588a34
    CMP ECX,ESI                         ; 00588a36
    JL 0x005889fe                       ; 00588a38
        ;   XREF to: 005889fe (CONDITIONAL_JUMP)  ; LAB_005889fe
    POP EBX                             ; 00588a3a
    POP ESI                             ; 00588a3b
    POP EDI                             ; 00588a3c
    ADD ESP,0x4                         ; 00588a3d
        ;   Label: LAB_00588a3d
    POP EBP                             ; 00588a40
    RET                                 ; 00588a41

