; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bffb0(int param_1,int param_2,uint param_3)
;
;
; XREF[1]:
;   FUN_004c0080 at 004c04a1
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01cc80c4
;   undefined4 DAT_01cc80c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bffb0
        ;   Label: FUN_004bffb0
    PUSH ESI                            ; 004bffb1
    PUSH EDI                            ; 004bffb2
    PUSH EBP                            ; 004bffb3
    MOV EBP,ESP                         ; 004bffb4
    SUB ESP,0x4                         ; 004bffb6
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bffb9
    SHL EAX,0x2                         ; 004bffbc
    MOV EDX,dword ptr [EBP + 0x14]      ; 004bffbf
    MOV ECX,dword ptr [EAX + 0x1c4480c] ; 004bffc2
    SHL EDX,0x2                         ; 004bffc8
    MOV EBX,dword ptr [EBP + 0x1c]      ; 004bffcb
    CMP EBX,dword ptr [ECX + EDX*0x1]   ; 004bffce
    JBE 0x004bffdc                      ; 004bffd1
        ;   XREF to: 004bffdc (CONDITIONAL_JUMP)  ; LAB_004bffdc
    CMP dword ptr [0x0061b4a0],0x20     ; 004bffd3 | DAT_0061b4a0
    JZ 0x004bffe3                       ; 004bffda
        ;   XREF to: 004bffe3 (CONDITIONAL_JUMP)  ; LAB_004bffe3
    MOV ESP,EBP                         ; 004bffdc
        ;   Label: LAB_004bffdc
    POP EBP                             ; 004bffde
    POP EDI                             ; 004bffdf
    POP ESI                             ; 004bffe0
    POP EBX                             ; 004bffe1
    RET                                 ; 004bffe2
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 004bffe3
        ;   Label: LAB_004bffe3
    ADD EAX,EDX                         ; 004bffe9
    MOV dword ptr [EBP + -0x4],EAX      ; 004bffeb
    MOV EDI,dword ptr [EBP + 0xfffffffc] ; 004bffee
    MOVD MM0,dword ptr [0x01c4f020]     ; 004bfff4 | DAT_01c4f020
    PXOR MM7,MM7                        ; 004bfffb
    MOVD MM1,dword ptr [EDI]            ; 004bfffe
    MOVD MM2,dword ptr [0x01cc80c4]     ; 004c0001 | DAT_01cc80c4
    MOVD MM3,dword ptr [0x01cc80c8]     ; 004c0008 | DAT_01cc80c8
    PUNPCKLBW MM0,MM7                   ; 004c000f
    PUNPCKLBW MM1,MM7                   ; 004c0012
    PUNPCKLBW MM2,MM7                   ; 004c0015
    PUNPCKLBW MM3,MM7                   ; 004c0018
    PMULLW MM0,MM3                      ; 004c001b
    PMULLW MM1,MM2                      ; 004c001e
    PADDW MM0,MM1                       ; 004c0021
    PSRLW MM0,0x8                       ; 004c0024
    PACKUSWB MM0,MM7                    ; 004c0028
    MOVD dword ptr [EDI],MM0            ; 004c002b
    EMMS                                ; 004c002e
    MOV ESP,EBP                         ; 004c0030
    POP EBP                             ; 004c0032
    POP EDI                             ; 004c0033
    POP ESI                             ; 004c0034
    POP EBX                             ; 004c0035
    RET                                 ; 004c0036

