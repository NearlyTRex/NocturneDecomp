; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_stranger_cpp_FUN_00585040(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_0058a360 at 0058a7ec
;
; Referenced Globals:
;   undefined4 DAT_005f63a9
;   undefined4 DAT_005f63b1
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00585040
        ;   Label: core_stranger.cpp_FUN_00585040
    MOV EAX,dword ptr [ESP + 0x14]      ; 00585043
    TEST EAX,EAX                        ; 00585047
    JLE 0x00585064                      ; 00585049
        ;   XREF to: 00585064 (CONDITIONAL_JUMP)  ; LAB_00585064
    CMP EAX,0x1                         ; 0058504b
    JNZ 0x00585070                      ; 0058504e
        ;   XREF to: 00585070 (CONDITIONAL_JUMP)  ; LAB_00585070
    FLD float ptr [ESP + 0x10]          ; 00585050
    FMUL double ptr [0x005f63a9]        ; 00585054 | DAT_005f63a9
    FSTP float ptr [ESP]                ; 0058505a
        ;   Label: LAB_0058505a
    MOV EAX,dword ptr [ESP]             ; 0058505d
    ADD ESP,0x4                         ; 00585060
    RET                                 ; 00585063
    FLD float ptr [ESP + 0x10]          ; 00585064
        ;   Label: LAB_00585064
    FMUL double ptr [0x005f63b1]        ; 00585068 | DAT_005f63b1
    JMP 0x0058505a                      ; 0058506e
        ;   XREF to: 0058505a (UNCONDITIONAL_JUMP)  ; LAB_0058505a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00585070
        ;   Label: LAB_00585070
    MOV dword ptr [ESP],EAX             ; 00585074
    MOV EAX,dword ptr [ESP]             ; 00585077
    ADD ESP,0x4                         ; 0058507a
    RET                                 ; 0058507d

