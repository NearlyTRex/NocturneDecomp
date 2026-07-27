; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_stranger_cpp_FUN_00534e90(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_stranger.cpp_CStranger_makeDrawDecision_FUN_00539b10 at 00539f9c
;
; Referenced Globals:
;   double DOUBLE_005951d7 = 0.700000000000000
;   double DOUBLE_005951df = 0.400000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00534e90
        ;   Label: core_stranger.cpp_FUN_00534e90
    MOV EAX,dword ptr [ESP + 0x14]      ; 00534e93
    TEST EAX,EAX                        ; 00534e97
    JLE 0x00534eb4                      ; 00534e99
        ;   XREF to: 00534eb4 (CONDITIONAL_JUMP)  ; LAB_00534eb4
    CMP EAX,0x1                         ; 00534e9b
    JNZ 0x00534ec0                      ; 00534e9e
        ;   XREF to: 00534ec0 (CONDITIONAL_JUMP)  ; LAB_00534ec0
    FLD float ptr [ESP + 0x10]          ; 00534ea0
    FMUL double ptr [0x005951d7]        ; 00534ea4 | DOUBLE_005951d7
    FSTP float ptr [ESP]                ; 00534eaa
        ;   Label: LAB_00534eaa
    MOV EAX,dword ptr [ESP]             ; 00534ead
    ADD ESP,0x4                         ; 00534eb0
    RET                                 ; 00534eb3
    FLD float ptr [ESP + 0x10]          ; 00534eb4
        ;   Label: LAB_00534eb4
    FMUL double ptr [0x005951df]        ; 00534eb8 | DOUBLE_005951df
    JMP 0x00534eaa                      ; 00534ebe
        ;   XREF to: 00534eaa (UNCONDITIONAL_JUMP)  ; LAB_00534eaa
    MOV EAX,dword ptr [ESP + 0x10]      ; 00534ec0
        ;   Label: LAB_00534ec0
    MOV dword ptr [ESP],EAX             ; 00534ec4
    MOV EAX,dword ptr [ESP]             ; 00534ec7
    ADD ESP,0x4                         ; 00534eca
    RET                                 ; 00534ecd

