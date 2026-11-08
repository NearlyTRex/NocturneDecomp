; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00515ac0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   FUN_00439da0 at 00439e94
;   FUN_0043bac0 at 0043bb8c
;   FUN_00466d50 at 00466e31
;   FUN_004673d0 at 004674ad
;   FUN_00515e80 at 00515f33
;   FUN_005163b0 at 005163fd
;   FUN_00516de0 at 00516e93
;   FUN_00517480 at 005174cd
;   FUN_005a1ea0 at 005a2161
;   FUN_005a23c0 at 005a2623
;
; Referenced Globals:
;   undefined4 DAT_007303fc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515ac0
        ;   Label: FUN_00515ac0
    PUSH ESI                            ; 00515ac1
    PUSH EDI                            ; 00515ac2
    PUSH EBP                            ; 00515ac3
    MOV EBP,ESP                         ; 00515ac4
    SUB ESP,0x14                        ; 00515ac6
    MOV EBX,dword ptr [EBP + 0x14]      ; 00515ac9
    MOV EAX,dword ptr [EBP + 0x18]      ; 00515acc
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00515acf
    CMP dword ptr [0x007303fc],0x1      ; 00515ad2 | DAT_007303fc
    JNZ 0x00515b43                      ; 00515ad9
        ;   XREF to: 00515b43 (CONDITIONAL_JUMP)  ; LAB_00515b43
    MOV EDI,dword ptr [EBX + 0x10]      ; 00515adb
    MOV EDX,dword ptr [EAX + 0x10]      ; 00515ade
    SUB EDX,EDI                         ; 00515ae1
    MOV dword ptr [EBP + -0x14],EDX     ; 00515ae3
    MOV EDX,dword ptr [EAX + 0x14]      ; 00515ae6
    MOV ESI,dword ptr [EBX + 0x14]      ; 00515ae9
    SUB EDX,ESI                         ; 00515aec
    MOV dword ptr [EBP + -0x10],EDX     ; 00515aee
    MOV EDX,dword ptr [ECX + 0x10]      ; 00515af1
    MOV EDI,dword ptr [EAX + 0x10]      ; 00515af4
    SUB EDX,EDI                         ; 00515af7
    MOV dword ptr [EBP + -0xc],EDX      ; 00515af9
    MOV EDX,dword ptr [ECX + 0x14]      ; 00515afc
    MOV ECX,dword ptr [EAX + 0x14]      ; 00515aff
    SUB EDX,ECX                         ; 00515b02
    MOV dword ptr [EBP + -0x8],EDX      ; 00515b04
    MOV EAX,dword ptr [EBP + 0xffffffec] ; 00515b07
        ;   Label: LAB_00515b07
    IMUL dword ptr [EBP + 0xfffffff8]   ; 00515b0d
    MOV EBX,EAX                         ; 00515b13
    MOV ECX,EDX                         ; 00515b15
    MOV EAX,dword ptr [EBP + 0xfffffff0] ; 00515b17
    IMUL dword ptr [EBP + 0xfffffff4]   ; 00515b1d
    SUB EAX,EBX                         ; 00515b23
    SBB EDX,ECX                         ; 00515b25
    MOV EAX,0x0                         ; 00515b27
    JGE 0x00515b33                      ; 00515b2c
        ;   XREF to: 00515b33 (CONDITIONAL_JUMP)  ; LAB_00515b33
    MOV EAX,0x1                         ; 00515b2e
    MOV dword ptr [EBP + 0xfffffffc],EAX ; 00515b33
        ;   Label: LAB_00515b33
    MOV EAX,dword ptr [EBP + -0x4]      ; 00515b39
    MOV ESP,EBP                         ; 00515b3c
    POP EBP                             ; 00515b3e
    POP EDI                             ; 00515b3f
    POP ESI                             ; 00515b40
    POP EBX                             ; 00515b41
    RET                                 ; 00515b42
    MOV ESI,dword ptr [EBX + 0x10]      ; 00515b43
        ;   Label: LAB_00515b43
    MOV EDX,dword ptr [EAX + 0x10]      ; 00515b46
    SUB EDX,ESI                         ; 00515b49
    MOV dword ptr [EBP + -0xc],EDX      ; 00515b4b
    MOV EDX,dword ptr [EAX + 0x14]      ; 00515b4e
    MOV EDI,dword ptr [EBX + 0x14]      ; 00515b51
    SUB EDX,EDI                         ; 00515b54
    MOV dword ptr [EBP + -0x8],EDX      ; 00515b56
    MOV EDX,dword ptr [ECX + 0x10]      ; 00515b59
    MOV EBX,dword ptr [EAX + 0x10]      ; 00515b5c
    SUB EDX,EBX                         ; 00515b5f
    MOV dword ptr [EBP + -0x14],EDX     ; 00515b61
    MOV EDX,dword ptr [ECX + 0x14]      ; 00515b64
    MOV ESI,dword ptr [EAX + 0x14]      ; 00515b67
    SUB EDX,ESI                         ; 00515b6a
    MOV dword ptr [EBP + -0x10],EDX     ; 00515b6c
    JMP 0x00515b07                      ; 00515b6f
        ;   XREF to: 00515b07 (UNCONDITIONAL_JUMP)  ; LAB_00515b07

