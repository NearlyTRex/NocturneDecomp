; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005acb10(void)
;
; Local Variables:
; undefined4       Stack[-0x7c]:4  local_7c
;
; XREF[4]:
;   FUN_004ce580 at 004ce649
;   FUN_004d77d0 at 004d798f
;   FUN_00582990 at 005829ff
;   FUN_005acff0 at 005ad03b
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005f9674
;   TerminatedCString s_openScreenDevice_Unable_005f968b
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c99308
;   undefined4 DAT_02c9931c
;   undefined4 DAT_02c99328
;   undefined4 DAT_02c9932c
;   undefined4 DAT_02c99330
;
; Called Functions:
;   FUN_005030e0
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acb10
        ;   Label: FUN_005acb10
    PUSH ESI                            ; 005acb11
    PUSH EDI                            ; 005acb12
    PUSH EBP                            ; 005acb13
    SUB ESP,0x6c                        ; 005acb14
    MOV EDX,dword ptr [0x02c9931c]      ; 005acb17 | DAT_02c9931c
    TEST EDX,EDX                        ; 005acb1d
    JNZ 0x005acb30                      ; 005acb1f
        ;   XREF to: 005acb30 (CONDITIONAL_JUMP)  ; LAB_005acb30
    CMP dword ptr [0x01c50948],0x0      ; 005acb21 | DAT_01c50948
    JZ 0x005acb38                       ; 005acb28
        ;   XREF to: 005acb38 (CONDITIONAL_JUMP)  ; LAB_005acb38
    LEA EAX,[EAX]                       ; 005acb2a
    ADD ESP,0x6c                        ; 005acb30
        ;   Label: LAB_005acb30
    POP EBP                             ; 005acb33
    POP EDI                             ; 005acb34
    POP ESI                             ; 005acb35
    POP EBX                             ; 005acb36
    RET                                 ; 005acb37
    PUSH 0x6c                           ; 005acb38
        ;   Label: LAB_005acb38
    PUSH EDX                            ; 005acb3a
    LEA EAX,[ESP + 0x8]                 ; 005acb3b
    PUSH EAX                            ; 005acb3f
    CALL FUN_005bfb70                   ; 005acb40
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 005acb45
    PUSH 0x0                            ; 005acb48
    PUSH 0x1                            ; 005acb4a
    LEA EDX,[ESP + 0x8]                 ; 005acb4c
    MOV EBX,0x6c                        ; 005acb50
    PUSH EDX                            ; 005acb55
    MOV EAX,[0x02c99308]                ; 005acb56 | DAT_02c99308
    MOV dword ptr [ESP + 0xc],EBX       ; 005acb5b
    PUSH 0x0                            ; 005acb5f
    MOV ECX,dword ptr [EAX]             ; 005acb61
    PUSH EAX                            ; 005acb63
    CALL dword ptr [ECX + 0x64]         ; 005acb64
    TEST EAX,EAX                        ; 005acb67
    JZ 0x005acb8e                       ; 005acb69
        ;   XREF to: 005acb8e (CONDITIONAL_JUMP)  ; LAB_005acb8e
    MOV ESI,0x5f9674                    ; 005acb6b | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x262                       ; 005acb70
    PUSH 0x5f968b                       ; 005acb75 | = "openScreenDevice - Unable to lock scr..."
    MOV dword ptr [0x01d1d400],ESI      ; 005acb7a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 005acb80 | DAT_01d1d404
    CALL FUN_005030e0                   ; 005acb86
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 005acb8b
    MOV EBP,dword ptr [0x02c9931c]      ; 005acb8e | DAT_02c9931c
        ;   Label: LAB_005acb8e
    MOV EDX,dword ptr [ESP + 0x24]      ; 005acb94
    TEST EBP,EBP                        ; 005acb98
    JZ 0x005acbca                       ; 005acb9a
        ;   XREF to: 005acbca (CONDITIONAL_JUMP)  ; LAB_005acbca
    MOV ESI,dword ptr [0x0061b49c]      ; 005acb9c | DAT_0061b49c
        ;   Label: LAB_005acb9c
    TEST ESI,ESI                        ; 005acba2
    JLE 0x005acb30                      ; 005acba4
        ;   XREF to: 005acb30 (CONDITIONAL_JUMP)  ; LAB_005acb30
    MOV EDI,dword ptr [ESP + 0x10]      ; 005acba6
    LEA ECX,[ESI*0x4 + 0x0]             ; 005acbaa
    XOR EAX,EAX                         ; 005acbb1
    MOV dword ptr [EAX + 0x1c4354c],EDX ; 005acbb3 | DAT_01c4354c | DAT_01c43550
        ;   Label: LAB_005acbb3
    ADD EAX,0x4                         ; 005acbb9
    ADD EDX,EDI                         ; 005acbbc
    CMP EAX,ECX                         ; 005acbbe
    JL 0x005acbb3                       ; 005acbc0
        ;   XREF to: 005acbb3 (CONDITIONAL_JUMP)  ; LAB_005acbb3
    ADD ESP,0x6c                        ; 005acbc2
    POP EBP                             ; 005acbc5
    POP EDI                             ; 005acbc6
    POP ESI                             ; 005acbc7
    POP EBX                             ; 005acbc8
    RET                                 ; 005acbc9
    MOV EDX,dword ptr [0x02c9932c]      ; 005acbca | DAT_02c9932c
        ;   Label: LAB_005acbca
    IMUL EDX,dword ptr [0x02c99328]     ; 005acbd0 | DAT_02c99328
    MOV ECX,dword ptr [ESP + 0x10]      ; 005acbd7
    IMUL ECX,dword ptr [0x02c99330]     ; 005acbdb | DAT_02c99330
    MOV EAX,EDX                         ; 005acbe2
    SAR EDX,0x1f                        ; 005acbe4
    SHL EDX,0x3                         ; 005acbe7
    SBB EAX,EDX                         ; 005acbea
    SAR EAX,0x3                         ; 005acbec
    MOV EDX,dword ptr [ESP + 0x24]      ; 005acbef
    ADD EAX,ECX                         ; 005acbf3
    ADD EDX,EAX                         ; 005acbf5
    JMP 0x005acb9c                      ; 005acbf7
        ;   XREF to: 005acb9c (UNCONDITIONAL_JUMP)  ; LAB_005acb9c

