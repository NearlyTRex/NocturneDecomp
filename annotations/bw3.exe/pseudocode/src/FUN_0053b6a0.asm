; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0053b6a0(undefined4 param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_004bda10 at 004bdbda
;
; Referenced Globals:
;   undefined4 DAT_0203a414
;   undefined4 DAT_0203a418
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b6a0
        ;   Label: FUN_0053b6a0
    MOV EBX,dword ptr [0x0203a414]      ; 0053b6a1 | DAT_0203a414
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053b6a7
    MOV EAX,EBX                         ; 0053b6ab
    MOV dword ptr [ECX],EBX             ; 0053b6ad
    XOR EAX,EBX                         ; 0053b6af
    TEST EBX,EBX                        ; 0053b6b1
    JLE 0x0053b6d0                      ; 0053b6b3
        ;   XREF to: 0053b6d0 (CONDITIONAL_JUMP)  ; LAB_0053b6d0
    MOV EDX,ECX                         ; 0053b6b5
    MOV ECX,dword ptr [EAX*0x4 + 0x203a418] ; 0053b6b7 | DAT_0203a418
        ;   Label: LAB_0053b6b7
    ADD EDX,0x4                         ; 0053b6be
    MOV ECX,dword ptr [ECX + 0x1cb4]    ; 0053b6c1
    INC EAX                             ; 0053b6c7
    MOV dword ptr [EDX],ECX             ; 0053b6c8
    CMP EAX,EBX                         ; 0053b6ca
    JL 0x0053b6b7                       ; 0053b6cc
        ;   XREF to: 0053b6b7 (CONDITIONAL_JUMP)  ; LAB_0053b6b7
    MOV EAX,EAX                         ; 0053b6ce
    MOV dword ptr [0x0203a414],EBX      ; 0053b6d0 | DAT_0203a414
        ;   Label: LAB_0053b6d0
    POP EBX                             ; 0053b6d6
    RET                                 ; 0053b6d7

