; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_muzzle_cpp_FUN_0059dc00(int param_1,int param_2)
;
;
; XREF[1]:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 at 005a00a2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059dc00
        ;   Label: core_muzzle.cpp_FUN_0059dc00
    CMP dword ptr [EDX + 0x838],0x0     ; 0059dc04
    JZ 0x0059daad                       ; 0059dc0b
        ;   XREF to: 0059daad (CONDITIONAL_JUMP)  ; LAB_0059daad
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059dc11
    ADD EDX,0x1f4                       ; 0059dc15
    SHL EAX,0x5                         ; 0059dc1b
    ADD EAX,EDX                         ; 0059dc1e
    RET                                 ; 0059dc20

