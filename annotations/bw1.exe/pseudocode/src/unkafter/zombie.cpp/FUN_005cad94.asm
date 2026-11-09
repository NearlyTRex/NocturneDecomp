; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cad94(void)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005caecc at 005caf52
;
; Referenced Globals:
;   void* PTR_TlsFree_005d0664 = 001d125c
;   undefined4 DAT_006265f8
;
; Called Functions:
;   TlsFree
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x006265f8]      ; 005cad94 | DAT_006265f8
        ;   Label: unkafter_zombie.cpp_FUN_005cad94
    CMP EDX,-0x1                        ; 005cad9a
    JZ 0x005cadb1                       ; 005cad9d
        ;   XREF to: 005cadb1 (CONDITIONAL_JUMP)  ; LAB_005cadb1
    PUSH EDX                            ; 005cad9f
    CALL dword ptr CS:[0x5d0664]        ; 005cada0 | PTR_TlsFree_005d0664
    MOV dword ptr [0x006265f8],0xffffffff ; 005cada7 | DAT_006265f8
    RET                                 ; 005cadb1
        ;   Label: LAB_005cadb1

