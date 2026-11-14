; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_gabriela_cpp_FUN_004ad1a0(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004afa20 at 004afe14
;
; Referenced Globals:
;   undefined4 DAT_005d6d8b
;   undefined4 DAT_005d6d93
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004ad1a0
        ;   Label: core_gabriela.cpp_FUN_004ad1a0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ad1a3
    TEST EAX,EAX                        ; 004ad1a7
    JLE 0x004ad1c4                      ; 004ad1a9
        ;   XREF to: 004ad1c4 (CONDITIONAL_JUMP)  ; LAB_004ad1c4
    CMP EAX,0x1                         ; 004ad1ab
    JNZ 0x004ad1d0                      ; 004ad1ae
        ;   XREF to: 004ad1d0 (CONDITIONAL_JUMP)  ; LAB_004ad1d0
    FLD float ptr [ESP + 0x10]          ; 004ad1b0
    FMUL double ptr [0x005d6d8b]        ; 004ad1b4 | DAT_005d6d8b
    FSTP float ptr [ESP]                ; 004ad1ba
        ;   Label: LAB_004ad1ba
    MOV EAX,dword ptr [ESP]             ; 004ad1bd
    ADD ESP,0x4                         ; 004ad1c0
    RET                                 ; 004ad1c3
    FLD float ptr [ESP + 0x10]          ; 004ad1c4
        ;   Label: LAB_004ad1c4
    FMUL double ptr [0x005d6d93]        ; 004ad1c8 | DAT_005d6d93
    JMP 0x004ad1ba                      ; 004ad1ce
        ;   XREF to: 004ad1ba (UNCONDITIONAL_JUMP)  ; LAB_004ad1ba
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ad1d0
        ;   Label: LAB_004ad1d0
    MOV dword ptr [ESP],EAX             ; 004ad1d4
    MOV EAX,dword ptr [ESP]             ; 004ad1d7
    ADD ESP,0x4                         ; 004ad1da
    RET                                 ; 004ad1dd

