; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_cloth_cpp_SClothVertex_ctor_FUN_004389a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004389a0
        ;   Label: core_cloth.cpp_SClothVertex_ctor_FUN_004389a0
    PUSH 0x5993b0                       ; 004389a4 | DAT_005993b0
    PUSH 0x3                            ; 004389a9
    ADD EAX,0xec                        ; 004389ab
    PUSH EAX                            ; 004389b0
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004389b1
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005644a7()
    ADD ESP,0xc                         ; 004389b6
    SUB EAX,0xec                        ; 004389b9
    RET                                 ; 004389be

