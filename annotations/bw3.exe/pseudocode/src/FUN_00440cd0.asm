; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00440cd0(int param_1)
;
;
; XREF[2]:
;   FUN_00440c50 at 00440c6d
;   FUN_00440d70 at 00440df0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00440cd0
        ;   Label: FUN_00440cd0
    MOV EAX,0x1                         ; 00440cd4
    MOV ECX,dword ptr [EDX + 0x4]       ; 00440cd9
    SHL EAX,CL                          ; 00440cdc
    XOR ECX,ECX                         ; 00440cde
    MOV dword ptr [EDX + 0xc],EAX       ; 00440ce0
    TEST EAX,EAX                        ; 00440ce3
    JLE 0x00440d1f                      ; 00440ce5
        ;   XREF to: 00440d1f (CONDITIONAL_JUMP)  ; LAB_00440d1f
    PUSH ESI                            ; 00440ce7
    PUSH EBX                            ; 00440ce8
    XOR EAX,EAX                         ; 00440ce9
    MOV EBX,dword ptr [EDX + 0x10]      ; 00440ceb
        ;   Label: LAB_00440ceb
    MOV dword ptr [EBX + EAX*0x1],ECX   ; 00440cee
    MOV EBX,dword ptr [EDX + 0x10]      ; 00440cf1
    MOV dword ptr [EBX + EAX*0x1 + 0x4],0xffffffff ; 00440cf4
    MOV EBX,dword ptr [EDX + 0x10]      ; 00440cfc
    MOV dword ptr [EBX + EAX*0x1 + 0x8],0xffffffff ; 00440cff
    MOV EBX,dword ptr [EDX + 0x10]      ; 00440d07
    MOV dword ptr [EBX + EAX*0x1 + 0xc],0xffffffff ; 00440d0a
    INC ECX                             ; 00440d12
    MOV ESI,dword ptr [EDX + 0xc]       ; 00440d13
    ADD EAX,0x10                        ; 00440d16
    CMP ECX,ESI                         ; 00440d19
    JL 0x00440ceb                       ; 00440d1b
        ;   XREF to: 00440ceb (CONDITIONAL_JUMP)  ; LAB_00440ceb
    POP EBX                             ; 00440d1d
    POP ESI                             ; 00440d1e
    MOV EAX,dword ptr [EDX + 0x4]       ; 00440d1f
        ;   Label: LAB_00440d1f
    MOV dword ptr [EDX + 0x8],EAX       ; 00440d22
    RET                                 ; 00440d25

