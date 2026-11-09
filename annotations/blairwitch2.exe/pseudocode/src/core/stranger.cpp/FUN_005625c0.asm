; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_stranger_cpp_FUN_005625c0(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00567880 at 00567d0c
;
; Referenced Globals:
;   undefined4 DAT_005eb1a5
;   undefined4 DAT_005eb1ad
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005625c0
        ;   Label: core_stranger.cpp_FUN_005625c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 005625c3
    TEST EAX,EAX                        ; 005625c7
    JLE 0x005625e4                      ; 005625c9
        ;   XREF to: 005625e4 (CONDITIONAL_JUMP)  ; LAB_005625e4
    CMP EAX,0x1                         ; 005625cb
    JNZ 0x005625f0                      ; 005625ce
        ;   XREF to: 005625f0 (CONDITIONAL_JUMP)  ; LAB_005625f0
    FLD float ptr [ESP + 0x10]          ; 005625d0
    FMUL double ptr [0x005eb1a5]        ; 005625d4 | DAT_005eb1a5
    FSTP float ptr [ESP]                ; 005625da
        ;   Label: LAB_005625da
    MOV EAX,dword ptr [ESP]             ; 005625dd
    ADD ESP,0x4                         ; 005625e0
    RET                                 ; 005625e3
    FLD float ptr [ESP + 0x10]          ; 005625e4
        ;   Label: LAB_005625e4
    FMUL double ptr [0x005eb1ad]        ; 005625e8 | DAT_005eb1ad
    JMP 0x005625da                      ; 005625ee
        ;   XREF to: 005625da (UNCONDITIONAL_JUMP)  ; LAB_005625da
    MOV EAX,dword ptr [ESP + 0x10]      ; 005625f0
        ;   Label: LAB_005625f0
    MOV dword ptr [ESP],EAX             ; 005625f4
    MOV EAX,dword ptr [ESP]             ; 005625f7
    ADD ESP,0x4                         ; 005625fa
    RET                                 ; 005625fd

