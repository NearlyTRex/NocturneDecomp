; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00465ba0(int param_1,LPCSTR param_2)
;
;
; XREF[5]:
;   FUN_00482a70 at 00482bc1
;   FUN_00482c70 at 00482db4
;   FUN_00482ea0 at 00482f0d
;   FUN_00483020 at 004830f4
;   FUN_005152e0 at 00515322
;
; Referenced Globals:
;   void* PTR_FindFirstFileA_005b3558 = 001b3d70
;
; Called Functions:
;   FindFirstFileA
;   FUN_00465ca0
;   FUN_00465ce0
;   FUN_00465cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465ba0
        ;   Label: FUN_00465ba0
    SUB ESP,0x140                       ; 00465ba1
    MOV EBX,dword ptr [ESP + 0x148]     ; 00465ba7
    PUSH EBX                            ; 00465bae
    CALL FUN_00465ca0                   ; 00465baf
        ;   XREF to: 00465ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ca0()
    ADD ESP,0x4                         ; 00465bb4
    MOV EAX,ESP                         ; 00465bb7
    PUSH EAX                            ; 00465bb9
    MOV EDX,dword ptr [ESP + 0x150]     ; 00465bba
    PUSH EDX                            ; 00465bc1
    CALL dword ptr CS:[0x5b3558]        ; 00465bc2 | PTR_FindFirstFileA_005b3558
    CMP EAX,-0x1                        ; 00465bc9
    JNZ 0x00465be5                      ; 00465bcc
        ;   XREF to: 00465be5 (CONDITIONAL_JUMP)  ; LAB_00465be5
    CMP dword ptr [EBX + 0x10c],0x0     ; 00465bce
    JZ 0x00465c03                       ; 00465bd5
        ;   XREF to: 00465c03 (CONDITIONAL_JUMP)  ; LAB_00465c03
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00465bd7
        ;   Label: LAB_00465bd7
    ADD ESP,0x140                       ; 00465bdd
    POP EBX                             ; 00465be3
    RET                                 ; 00465be4
    MOV dword ptr [EBX + 0x110],EAX     ; 00465be5
        ;   Label: LAB_00465be5
    MOV EAX,ESP                         ; 00465beb
    PUSH EAX                            ; 00465bed
    PUSH EBX                            ; 00465bee
    CALL FUN_00465cf0                   ; 00465bef
        ;   XREF to: 00465cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465cf0()
    ADD ESP,0x8                         ; 00465bf4
    MOV dword ptr [EBX + 0x10c],0x1     ; 00465bf7
    JMP 0x00465bd7                      ; 00465c01
        ;   XREF to: 00465bd7 (UNCONDITIONAL_JUMP)  ; LAB_00465bd7
    PUSH EBX                            ; 00465c03
        ;   Label: LAB_00465c03
    CALL FUN_00465ce0                   ; 00465c04
        ;   XREF to: 00465ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_00465ce0()
    ADD ESP,0x4                         ; 00465c09
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00465c0c
    ADD ESP,0x140                       ; 00465c12
    POP EBX                             ; 00465c18
    RET                                 ; 00465c19

