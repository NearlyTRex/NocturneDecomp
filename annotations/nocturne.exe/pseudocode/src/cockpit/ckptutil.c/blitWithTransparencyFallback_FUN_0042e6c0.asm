; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_ckptutil_c_blitWithTransparencyFallback_FUN_0042e6c0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e6c0
        ;   Label: cockpit_ckptutil.c_blitWithTransparencyFallback_FUN_0042e6c0
    PUSH ESI                            ; 0042e6c1
    PUSH EDI                            ; 0042e6c2
    PUSH EBP                            ; 0042e6c3
    SUB ESP,0x10                        ; 0042e6c4
    MOV ESI,dword ptr [ESP + 0x28]      ; 0042e6c7
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0042e6cb
    MOV EBP,dword ptr [ESP + 0x30]      ; 0042e6cf
    MOV EDX,dword ptr [ESP + 0x38]      ; 0042e6d3
    TEST ECX,ECX                        ; 0042e6d7
    JLE 0x0042e740                      ; 0042e6d9
        ;   XREF to: 0042e740 (CONDITIONAL_JUMP)  ; LAB_0042e740
    MOV dword ptr [ESP + 0x4],ESI       ; 0042e6db
    IMUL EAX,ESI,0x0                    ; 0042e6df
    MOV dword ptr [ESP + 0xc],EDX       ; 0042e6e2
    ADD EDX,ECX                         ; 0042e6e6
    MOV dword ptr [ESP],EDX             ; 0042e6e8
    MOV dword ptr [ESP + 0x8],EAX       ; 0042e6eb
    XOR EAX,EAX                         ; 0042e6ef
        ;   Label: LAB_0042e6ef
    TEST ESI,ESI                        ; 0042e6f1
    JLE 0x0042e722                      ; 0042e6f3
        ;   XREF to: 0042e722 (CONDITIONAL_JUMP)  ; LAB_0042e722
    MOV EDX,dword ptr [ESP + 0x24]      ; 0042e6f5
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042e6f9
    MOV EDI,dword ptr [ESP + 0xc]       ; 0042e6fd
    ADD EDX,ECX                         ; 0042e701
    MOV ECX,dword ptr [0x005b761c]      ; 0042e703 | DAT_005b761c
        ;   Label: LAB_0042e703
    IMUL ECX,EDI                        ; 0042e709
    MOV EBX,dword ptr [ESP + 0x34]      ; 0042e70c
    ADD ECX,EAX                         ; 0042e710
    ADD ECX,EBX                         ; 0042e712
    MOV BL,byte ptr [EDX]               ; 0042e714
    ADD ECX,EBP                         ; 0042e716
    TEST BL,BL                          ; 0042e718
    JZ 0x0042e748                       ; 0042e71a
        ;   XREF to: 0042e748 (CONDITIONAL_JUMP)  ; LAB_0042e748
    INC EAX                             ; 0042e71c
        ;   Label: LAB_0042e71c
    INC EDX                             ; 0042e71d
    CMP EAX,ESI                         ; 0042e71e
    JL 0x0042e703                       ; 0042e720
        ;   XREF to: 0042e703 (CONDITIONAL_JUMP)  ; LAB_0042e703
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042e722
        ;   Label: LAB_0042e722
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042e726
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042e72a
    MOV EBX,dword ptr [ESP]             ; 0042e72e
    INC EDX                             ; 0042e731
    ADD ECX,EAX                         ; 0042e732
    MOV dword ptr [ESP + 0xc],EDX       ; 0042e734
    MOV dword ptr [ESP + 0x8],ECX       ; 0042e738
    CMP EDX,EBX                         ; 0042e73c
    JL 0x0042e6ef                       ; 0042e73e
        ;   XREF to: 0042e6ef (CONDITIONAL_JUMP)  ; LAB_0042e6ef
    ADD ESP,0x10                        ; 0042e740
        ;   Label: LAB_0042e740
    POP EBP                             ; 0042e743
    POP EDI                             ; 0042e744
    POP ESI                             ; 0042e745
    POP EBX                             ; 0042e746
    RET                                 ; 0042e747
    MOV CL,byte ptr [ECX]               ; 0042e748
        ;   Label: LAB_0042e748
    MOV byte ptr [EDX],CL               ; 0042e74a
    JMP 0x0042e71c                      ; 0042e74c
        ;   XREF to: 0042e71c (UNCONDITIONAL_JUMP)  ; LAB_0042e71c

