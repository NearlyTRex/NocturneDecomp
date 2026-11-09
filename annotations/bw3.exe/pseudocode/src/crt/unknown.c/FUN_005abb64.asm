; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005abb64(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005a7f58 at 005a7f5d
;   unkafter_asgaya.cpp_FUN_005ad9c4 at 005ad9e1
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079d4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079d8 = 005a7f44
;   undefined4 DAT_00607bdc
;   undefined4 DAT_00607be0
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abb64
        ;   Label: crt_unknown.c_FUN_005abb64
    MOV EBX,dword ptr [ESP + 0x8]       ; 005abb65
    CALL dword ptr [0x006079d4]         ; 005abb69 | PTR_crt_unknown.c_FUN_005a7f44_006079d4
    TEST EBX,EBX                        ; 005abb6f
    JLE 0x005abb88                      ; 005abb71
        ;   XREF to: 005abb88 (CONDITIONAL_JUMP)  ; LAB_005abb88
    CMP EBX,dword ptr [0x00607be0]      ; 005abb73 | DAT_00607be0
    JGE 0x005abb88                      ; 005abb79
        ;   XREF to: 005abb88 (CONDITIONAL_JUMP)  ; LAB_005abb88
    MOV EDX,dword ptr [0x00607bdc]      ; 005abb7b | DAT_00607bdc
    MOV dword ptr [EDX + EBX*0x4],0x0   ; 005abb81
    CALL dword ptr [0x006079d8]         ; 005abb88 | PTR_crt_unknown.c_FUN_005a7f44_006079d8
        ;   Label: LAB_005abb88
    POP EBX                             ; 005abb8e
    RET                                 ; 005abb8f

