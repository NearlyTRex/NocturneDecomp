; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005afc5c(int param_1)
;
;
; XREF[1]:
;   FUN_005adba4 at 005adbca
;
; Referenced Globals:
;   void* PTR_FUN_006079cc = 005a7f44
;   void* PTR_FUN_006079d0 = 005a7f44
;   undefined4 DAT_02d261f0
;
; Called Functions:
;   FUN_005a3770
;   FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afc5c
        ;   Label: FUN_005afc5c
    PUSH ESI                            ; 005afc5d
    PUSH EDI                            ; 005afc5e
    MOV EDI,dword ptr [ESP + 0x10]      ; 005afc5f
    CALL dword ptr [0x006079cc]         ; 005afc63 | PTR_FUN_006079cc
    MOV EBX,dword ptr [0x02d261f0]      ; 005afc69 | DAT_02d261f0
    MOV ESI,0x2d261f0                   ; 005afc6f
    TEST EBX,EBX                        ; 005afc74
    JZ 0x005afca6                       ; 005afc76
        ;   XREF to: 005afca6 (CONDITIONAL_JUMP)  ; LAB_005afca6
    CMP EDI,dword ptr [EBX + 0x4]       ; 005afc78
        ;   Label: LAB_005afc78
    JNZ 0x005afc9e                      ; 005afc7b
        ;   XREF to: 005afc9e (CONDITIONAL_JUMP)  ; LAB_005afc9e
    CMP dword ptr [EBX + 0xc],0x0       ; 005afc7d
    JZ 0x005afc8f                       ; 005afc81
        ;   XREF to: 005afc8f (CONDITIONAL_JUMP)  ; LAB_005afc8f
    MOV EDI,dword ptr [EBX + 0x8]       ; 005afc83
    PUSH EDI                            ; 005afc86
    CALL FUN_005a3770                   ; 005afc87
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005afc8c
    MOV EDI,dword ptr [EBX]             ; 005afc8f
        ;   Label: LAB_005afc8f
    PUSH EBX                            ; 005afc91
    MOV dword ptr [ESI],EDI             ; 005afc92 | DAT_02d261f0
    CALL FUN_005a3770                   ; 005afc94
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 005afc99
    JMP 0x005afca6                      ; 005afc9c
        ;   XREF to: 005afca6 (UNCONDITIONAL_JUMP)  ; LAB_005afca6
    MOV ESI,EBX                         ; 005afc9e
        ;   Label: LAB_005afc9e
    MOV EBX,dword ptr [EBX]             ; 005afca0
    TEST EBX,EBX                        ; 005afca2
    JNZ 0x005afc78                      ; 005afca4
        ;   XREF to: 005afc78 (CONDITIONAL_JUMP)  ; LAB_005afc78
    CALL dword ptr [0x006079d0]         ; 005afca6 | PTR_FUN_006079d0
        ;   Label: LAB_005afca6
    POP EDI                             ; 005afcac
    POP ESI                             ; 005afcad
    POP EBX                             ; 005afcae
    RET                                 ; 005afcaf

