; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float unkafter_prye_cpp_FUN_00517ce0(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   core_prye.cpp_FUN_0051e6d0 at 0051eb60
;
; Referenced Globals:
;   undefined4 DAT_005cca87
;   undefined4 DAT_005cca8f
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00517ce0
        ;   Label: unkafter_prye.cpp_FUN_00517ce0
    MOV EAX,dword ptr [ESP + 0x14]      ; 00517ce3
    TEST EAX,EAX                        ; 00517ce7
    JLE 0x00517d04                      ; 00517ce9
        ;   XREF to: 00517d04 (CONDITIONAL_JUMP)  ; LAB_00517d04
    CMP EAX,0x1                         ; 00517ceb
    JNZ 0x00517d10                      ; 00517cee
        ;   XREF to: 00517d10 (CONDITIONAL_JUMP)  ; LAB_00517d10
    FLD float ptr [ESP + 0x10]          ; 00517cf0
    FMUL double ptr [0x005cca87]        ; 00517cf4 | DAT_005cca87
    FSTP float ptr [ESP]                ; 00517cfa
        ;   Label: LAB_00517cfa
    MOV EAX,dword ptr [ESP]             ; 00517cfd
    ADD ESP,0x4                         ; 00517d00
    RET                                 ; 00517d03
    FLD float ptr [ESP + 0x10]          ; 00517d04
        ;   Label: LAB_00517d04
    FMUL double ptr [0x005cca8f]        ; 00517d08 | DAT_005cca8f
    JMP 0x00517cfa                      ; 00517d0e
        ;   XREF to: 00517cfa (UNCONDITIONAL_JUMP)  ; LAB_00517cfa
    MOV EAX,dword ptr [ESP + 0x10]      ; 00517d10
        ;   Label: LAB_00517d10
    MOV dword ptr [ESP],EAX             ; 00517d14
    MOV EAX,dword ptr [ESP]             ; 00517d17
    ADD ESP,0x4                         ; 00517d1a
    RET                                 ; 00517d1d

