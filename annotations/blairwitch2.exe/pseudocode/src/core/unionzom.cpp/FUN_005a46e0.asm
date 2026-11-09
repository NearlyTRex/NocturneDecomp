; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_unionzom_cpp_FUN_005a46e0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f03e2
;
; Called Functions:
;   core_enemy.cpp_FUN_00488020
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a46e0
        ;   Label: core_unionzom.cpp_FUN_005a46e0
    FLD float ptr [EDX + 0x113c4]       ; 005a46e4
    FCOMP double ptr [0x005f03e2]       ; 005a46ea | DAT_005f03e2
    FNSTSW AX                           ; 005a46f0
    SAHF                                ; 005a46f2
    JNC 0x005a46f8                      ; 005a46f3
        ;   XREF to: 005a46f8 (CONDITIONAL_JUMP)  ; LAB_005a46f8
    XOR EAX,EAX                         ; 005a46f5
    RET                                 ; 005a46f7
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a46f8
        ;   Label: LAB_005a46f8
    PUSH ECX                            ; 005a46fc
    PUSH EDX                            ; 005a46fd
    CALL core_enemy.cpp_FUN_00488020    ; 005a46fe
        ;   XREF to: 00488020 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00488020()
    ADD ESP,0x8                         ; 005a4703
    RET                                 ; 005a4706

