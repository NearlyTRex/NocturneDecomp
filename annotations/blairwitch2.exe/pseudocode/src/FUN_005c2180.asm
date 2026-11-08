; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c2180(void)
;
;
; XREF[1]:
;   FUN_005c2154 at 005c2177
;
; Referenced Globals:
;   undefined4 DAT_0061f454
;   void* PTR_FUN_0061f654 = 005c2150
;   void* PTR_FUN_0061f658 = 005c2150
;
; Called Functions:
;   FUN_005bd0d0
;   FUN_005c2150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2180
        ;   Label: FUN_005c2180
    CALL dword ptr [0x0061f654]         ; 005c2181 | PTR_FUN_0061f654
    CALL dword ptr [0x0061f658]         ; 005c2187 | PTR_FUN_0061f658
    CMP dword ptr [0x0061f454],0x0      ; 005c218d | DAT_0061f454
    JZ 0x005c219c                       ; 005c2194
        ;   XREF to: 005c219c (CONDITIONAL_JUMP)  ; LAB_005c219c
    CALL dword ptr [0x0061f454]         ; 005c2196 | DAT_0061f454
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c219c
        ;   Label: LAB_005c219c
    PUSH EBX                            ; 005c21a0
    JMP 0x005bd0d0                      ; 005c21a1
        ;   XREF to: 005bd0d0 (UNCONDITIONAL_CALL)

