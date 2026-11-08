; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00581010(void)
;
;
; XREF[1]:
;   FUN_00581080 at 00581254
;
; Referenced Globals:
;   void* PTR_CreateWindowExA_005b34a8 = 001b3a8c
;   void* PTR_ExitProcess_005b3540 = 001b3cfe
;   TerminatedCString s_Blair_Witch_3_005d7ebe
;   TerminatedCString s_Blair_Witch_3_005d7ecc
;   void* PTR_s_Blair_Witch_3_00607280 = 005d7ebe
;   void* PTR_s_Blair_Witch_3_00607284 = 005d7ecc
;   undefined4 DAT_02d21b78
;   undefined4 DAT_02d21b7c
;
; Called Functions:
;   CreateWindowExA
;   ExitProcess
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581010
        ;   Label: FUN_00581010
    PUSH 0x0                            ; 00581011
    MOV EDX,dword ptr [0x02d21b7c]      ; 00581013 | DAT_02d21b7c
    PUSH EDX                            ; 00581019
    PUSH 0x0                            ; 0058101a
    PUSH 0x0                            ; 0058101c
    PUSH 0x0                            ; 0058101e
    PUSH 0x0                            ; 00581020
    PUSH 0x0                            ; 00581022
    PUSH 0x0                            ; 00581024
    PUSH 0x80000000                     ; 00581026
    MOV ECX,dword ptr [0x00607284]      ; 0058102b | PTR_s_Blair_Witch_3_00607284
    PUSH ECX                            ; 00581031 | = "Blair Witch 3"
    MOV EBX,dword ptr [0x00607280]      ; 00581032 | PTR_s_Blair_Witch_3_00607280
    PUSH EBX                            ; 00581038 | = "Blair Witch 3"
    PUSH 0x40000                        ; 00581039
    CALL dword ptr CS:[0x5b34a8]        ; 0058103e | PTR_CreateWindowExA_005b34a8
    MOV [0x02d21b78],EAX                ; 00581045 | DAT_02d21b78
    TEST EAX,EAX                        ; 0058104a
    JZ 0x00581050                       ; 0058104c
        ;   XREF to: 00581050 (CONDITIONAL_JUMP)  ; LAB_00581050
    POP EBX                             ; 0058104e
    RET                                 ; 0058104f
    PUSH 0x1                            ; 00581050
        ;   Label: LAB_00581050
    CALL dword ptr CS:[0x5b3540]        ; 00581052 | PTR_ExitProcess_005b3540

