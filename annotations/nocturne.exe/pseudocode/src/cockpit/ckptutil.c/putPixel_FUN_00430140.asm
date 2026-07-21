; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_putPixel_FUN_00430140(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   cockpit_ckptutil.c_drawLineAA_FUN_0042f600 at 0042f680
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00430140
        ;   Label: cockpit_ckptutil.c_putPixel_FUN_00430140
    MOV ECX,dword ptr [ESP + 0x8]       ; 00430141
    MOV EDX,dword ptr [ESP + 0xc]       ; 00430145
    MOV EBX,dword ptr [ESP + 0x10]      ; 00430149
    CMP ECX,dword ptr [0x01c00c58]      ; 0043014d | DAT_01c00c58
    JL 0x0043017f                       ; 00430153
        ;   XREF to: 0043017f (CONDITIONAL_JUMP)  ; LAB_0043017f
    CMP ECX,dword ptr [0x01c00c60]      ; 00430155 | DAT_01c00c60
    JG 0x0043017f                       ; 0043015b
        ;   XREF to: 0043017f (CONDITIONAL_JUMP)  ; LAB_0043017f
    CMP EDX,dword ptr [0x01c00c5c]      ; 0043015d | DAT_01c00c5c
    JL 0x0043017f                       ; 00430163
        ;   XREF to: 0043017f (CONDITIONAL_JUMP)  ; LAB_0043017f
    CMP EDX,dword ptr [0x01c00c64]      ; 00430165 | DAT_01c00c64
    JG 0x0043017f                       ; 0043016b
        ;   XREF to: 0043017f (CONDITIONAL_JUMP)  ; LAB_0043017f
    MOV EAX,[0x005b7624]                ; 0043016d | DAT_005b7624
    SHL EDX,0x2                         ; 00430172
    CMP EAX,0x10                        ; 00430175
    JNC 0x004301b9                      ; 00430178
        ;   XREF to: 004301b9 (CONDITIONAL_JUMP)  ; LAB_004301b9
    CMP EAX,0x8                         ; 0043017a
    JZ 0x00430181                       ; 0043017d
        ;   XREF to: 00430181 (CONDITIONAL_JUMP)  ; LAB_00430181
    POP EBX                             ; 0043017f
        ;   Label: LAB_0043017f
    RET                                 ; 00430180
    MOV EAX,dword ptr [EDX + 0x1bd2fa0] ; 00430181
        ;   Label: LAB_00430181
    MOV byte ptr [ECX + EAX*0x1],BL     ; 00430187
    POP EBX                             ; 0043018a
    RET                                 ; 0043018b
    MOV EAX,dword ptr [EDX + 0x1bd2fa0] ; 0043018c
        ;   Label: LAB_0043018c
    ADD ECX,ECX                         ; 00430192
    ADD ECX,EAX                         ; 00430194
    MOV AX,word ptr [EBX*0x2 + 0x1c00424] ; 00430196
    MOV word ptr [ECX],AX               ; 0043019e
    POP EBX                             ; 004301a1
    RET                                 ; 004301a2
    SHL ECX,0x2                         ; 004301a3
        ;   Label: LAB_004301a3
    MOV EAX,dword ptr [EDX + 0x1bd2fa0] ; 004301a6
    ADD ECX,EAX                         ; 004301ac
    MOV EAX,dword ptr [EBX*0x4 + 0x1c00024] ; 004301ae
    MOV dword ptr [ECX],EAX             ; 004301b5
    POP EBX                             ; 004301b7
    RET                                 ; 004301b8
    JBE 0x0043018c                      ; 004301b9
        ;   XREF to: 0043018c (CONDITIONAL_JUMP)  ; LAB_0043018c
        ;   Label: LAB_004301b9
    CMP EAX,0x20                        ; 004301bb
    JZ 0x004301a3                       ; 004301be
        ;   XREF to: 004301a3 (CONDITIONAL_JUMP)  ; LAB_004301a3
    POP EBX                             ; 004301c0
    RET                                 ; 004301c1

