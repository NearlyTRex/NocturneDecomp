; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00401680(int param_1,int param_2,uint param_3)
;
;
; XREF[1]:
;   FUN_00401710 at 0040179a
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401680
        ;   Label: FUN_00401680
    PUSH EDI                            ; 00401681
    PUSH EBP                            ; 00401682
    MOV EBX,dword ptr [ESP + 0x10]      ; 00401683
    MOV EAX,dword ptr [ESP + 0x14]      ; 00401687
    SHL EAX,0x2                         ; 0040168b
    LEA EDX,[EBX*0x4 + 0x0]             ; 0040168e
    MOV ECX,dword ptr [EAX + 0x1bd4260] ; 00401695
    ADD ECX,EDX                         ; 0040169b
    MOV EDI,dword ptr [ESP + 0x18]      ; 0040169d
    CMP EDI,dword ptr [ECX]             ; 004016a1
    JBE 0x004016d9                      ; 004016a3
        ;   XREF to: 004016d9 (CONDITIONAL_JUMP)  ; LAB_004016d9
    MOV EBP,dword ptr [0x005b7624]      ; 004016a5 | DAT_005b7624
    MOV dword ptr [ECX],EDI             ; 004016ab
    CMP EBP,0x8                         ; 004016ad
    JZ 0x004016dd                       ; 004016b0
        ;   XREF to: 004016dd (CONDITIONAL_JUMP)  ; LAB_004016dd
    MOV ECX,dword ptr [0x01c00c70]      ; 004016b2 | DAT_01c00c70
    AND ECX,0xff                        ; 004016b8
    CMP EBP,0x10                        ; 004016be
    JNZ 0x004016f1                      ; 004016c1
        ;   XREF to: 004016f1 (CONDITIONAL_JUMP)  ; LAB_004016f1
    LEA EDX,[EBX + EBX*0x1]             ; 004016c3
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 004016c6
    ADD EDX,EAX                         ; 004016cc
    MOV AX,word ptr [ECX*0x2 + 0x1bff720] ; 004016ce
    MOV word ptr [EDX],AX               ; 004016d6
    POP EBP                             ; 004016d9
        ;   Label: LAB_004016d9
    POP EDI                             ; 004016da
    POP EBX                             ; 004016db
    RET                                 ; 004016dc
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 004016dd
        ;   Label: LAB_004016dd
    LEA EDX,[EAX + EBX*0x1]             ; 004016e3
    MOV AL,[0x01c00c70]                 ; 004016e6 | DAT_01c00c70
    MOV byte ptr [EDX],AL               ; 004016eb
    POP EBP                             ; 004016ed
    POP EDI                             ; 004016ee
    POP EBX                             ; 004016ef
    RET                                 ; 004016f0
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 004016f1
        ;   Label: LAB_004016f1
    ADD EDX,EAX                         ; 004016f7
    MOV EAX,dword ptr [ECX*0x4 + 0x1bff920] ; 004016f9
    MOV dword ptr [EDX],EAX             ; 00401700
    POP EBP                             ; 00401702
    POP EDI                             ; 00401703
    POP EBX                             ; 00401704
    RET                                 ; 00401705

