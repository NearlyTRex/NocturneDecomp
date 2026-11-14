; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ca480(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ca454 at 005ca477
;
; Referenced Globals:
;   undefined4 DAT_006267b4
;   void* PTR_crt_unknown.c_FUN_005ca450_006269d4 = 005ca450
;   void* PTR_crt_unknown.c_FUN_005ca450_006269d8 = 005ca450
;
; Called Functions:
;   crt_unknown.c_FUN_005c53a0
;   crt_unknown.c_FUN_005ca450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca480
        ;   Label: crt_unknown.c_FUN_005ca480
    CALL dword ptr [0x006269d4]         ; 005ca481 | PTR_crt_unknown.c_FUN_005ca450_006269d4
    CALL dword ptr [0x006269d8]         ; 005ca487 | PTR_crt_unknown.c_FUN_005ca450_006269d8
    CMP dword ptr [0x006267b4],0x0      ; 005ca48d | DAT_006267b4
    JZ 0x005ca49c                       ; 005ca494
        ;   XREF to: 005ca49c (CONDITIONAL_JUMP)  ; LAB_005ca49c
    CALL dword ptr [0x006267b4]         ; 005ca496 | DAT_006267b4
    MOV EBX,dword ptr [ESP + 0x8]       ; 005ca49c
        ;   Label: LAB_005ca49c
    PUSH EBX                            ; 005ca4a0
    JMP 0x005c53a0                      ; 005ca4a1
        ;   XREF to: 005c53a0 (UNCONDITIONAL_CALL)

