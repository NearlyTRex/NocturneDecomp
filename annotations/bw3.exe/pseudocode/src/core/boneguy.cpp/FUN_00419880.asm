; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_boneguy_cpp_FUN_00419880(int param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00431000
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00419880
        ;   Label: core_boneguy.cpp_FUN_00419880
    PUSH EDX                            ; 00419884
    CALL core_charactr.cpp_FUN_00431000 ; 00419885
        ;   XREF to: 00431000 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00431000()
    ADD ESP,0x4                         ; 0041988a
    MOV EDX,EAX                         ; 0041988d
    TEST EAX,EAX                        ; 0041988f
    JNZ 0x004198a6                      ; 00419891
        ;   XREF to: 004198a6 (CONDITIONAL_JUMP)  ; LAB_004198a6
    MOV EAX,dword ptr [ESP + 0x4]       ; 00419893
    CMP dword ptr [EAX + 0xd0e4],0x0    ; 00419897
    JZ 0x004198a6                       ; 0041989e
        ;   XREF to: 004198a6 (CONDITIONAL_JUMP)  ; LAB_004198a6
    MOV EAX,0xfffffffe                  ; 004198a0
    RET                                 ; 004198a5
    MOV EAX,EDX                         ; 004198a6
        ;   Label: LAB_004198a6
    RET                                 ; 004198a8

