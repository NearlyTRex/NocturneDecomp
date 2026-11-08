; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483cf0(int param_1,int param_2,int param_3,uint param_4)
;
;
; XREF[5]:
;   FUN_00457f70 at 00458118
;   FUN_0048d4f0 at 0048da91
;   FUN_0048e770 at 0048e78a
;   FUN_004c0080 at 004c0394
;   FUN_005640d0 at 00564827
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4f020
;   undefined4 DAT_01c50948
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483cf0
        ;   Label: FUN_00483cf0
    PUSH ESI                            ; 00483cf1
    MOV EBX,dword ptr [ESP + 0x14]      ; 00483cf2
    MOV EDX,dword ptr [ESP + 0x18]      ; 00483cf6
    MOV CL,byte ptr [0x01c4e9ec]        ; 00483cfa | DAT_01c4e9ec
    MOV ESI,EBX                         ; 00483d00
    SHL EDX,CL                          ; 00483d02
    MOV CL,byte ptr [0x01c4e9e0]        ; 00483d04 | DAT_01c4e9e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00483d0a
    SHL ESI,CL                          ; 00483d0e
    MOV CL,byte ptr [0x01c4e9d4]        ; 00483d10 | DAT_01c4e9d4
    SHL EBX,0x8                         ; 00483d16
    SHL EAX,CL                          ; 00483d19
    MOV ECX,dword ptr [ESP + 0x10]      ; 00483d1b
    OR EAX,ESI                          ; 00483d1f
    SHL ECX,0x10                        ; 00483d21
    OR EDX,EAX                          ; 00483d24
    MOV EAX,dword ptr [ESP + 0x18]      ; 00483d26
    OR ECX,EBX                          ; 00483d2a
    OR EAX,ECX                          ; 00483d2c
    CMP dword ptr [0x01c50948],0x0      ; 00483d2e | DAT_01c50948
    JNZ 0x00483d56                      ; 00483d35
        ;   XREF to: 00483d56 (CONDITIONAL_JUMP)  ; LAB_00483d56
    CMP dword ptr [0x0061b4a0],0x20     ; 00483d37 | DAT_0061b4a0
    JNZ 0x00483d42                      ; 00483d3e
        ;   XREF to: 00483d42 (CONDITIONAL_JUMP)  ; LAB_00483d42
    MOV EAX,EDX                         ; 00483d40
    MOV EDX,dword ptr [ESP + 0xc]       ; 00483d42
        ;   Label: LAB_00483d42
    MOV ECX,EAX                         ; 00483d46
    MOV EDX,dword ptr [EDX + 0x14]      ; 00483d48
    OR ECX,EDX                          ; 00483d4b
    MOV dword ptr [0x01c4f020],ECX      ; 00483d4d | DAT_01c4f020
    POP ESI                             ; 00483d53
    POP EBX                             ; 00483d54
    RET                                 ; 00483d55
    CMP dword ptr [0x0061b4a0],0x20     ; 00483d56 | DAT_0061b4a0
        ;   Label: LAB_00483d56
    JNZ 0x00483d61                      ; 00483d5d
        ;   XREF to: 00483d61 (CONDITIONAL_JUMP)  ; LAB_00483d61
    MOV EAX,EDX                         ; 00483d5f
    MOV ECX,EAX                         ; 00483d61
        ;   Label: LAB_00483d61
    MOV dword ptr [0x01c4f020],ECX      ; 00483d63 | DAT_01c4f020
    POP ESI                             ; 00483d69
    POP EBX                             ; 00483d6a
    RET                                 ; 00483d6b

