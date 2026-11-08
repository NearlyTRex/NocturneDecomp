; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad2f0(void)
;
;
; XREF[1]:
;   FUN_005ad2c4 at 005ad2e7
;
; Referenced Globals:
;   undefined4 DAT_00607b58
;   void* PTR_FUN_00607d78 = 005ad2c0
;   void* PTR_FUN_00607d7c = 005ad2c0
;
; Called Functions:
;   FUN_005a8210
;   FUN_005ad2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad2f0
        ;   Label: FUN_005ad2f0
    CALL dword ptr [0x00607d78]         ; 005ad2f1 | PTR_FUN_00607d78
    CALL dword ptr [0x00607d7c]         ; 005ad2f7 | PTR_FUN_00607d7c
    CMP dword ptr [0x00607b58],0x0      ; 005ad2fd | DAT_00607b58
    JZ 0x005ad30c                       ; 005ad304
        ;   XREF to: 005ad30c (CONDITIONAL_JUMP)  ; LAB_005ad30c
    CALL dword ptr [0x00607b58]         ; 005ad306 | DAT_00607b58
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ad30c
        ;   Label: LAB_005ad30c
    PUSH EBX                            ; 005ad310
    JMP 0x005a8210                      ; 005ad311
        ;   XREF to: 005a8210 (UNCONDITIONAL_CALL)

