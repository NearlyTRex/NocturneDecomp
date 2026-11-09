; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_gabriela_cpp_FUN_004c6150(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004c89c0 at 004c8db0
;
; Referenced Globals:
;   undefined4 DAT_005e0e04
;   undefined4 DAT_005e0e0c
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004c6150
        ;   Label: core_gabriela.cpp_FUN_004c6150
    MOV EAX,dword ptr [ESP + 0x14]      ; 004c6153
    TEST EAX,EAX                        ; 004c6157
    JLE 0x004c6174                      ; 004c6159
        ;   XREF to: 004c6174 (CONDITIONAL_JUMP)  ; LAB_004c6174
    CMP EAX,0x1                         ; 004c615b
    JNZ 0x004c6180                      ; 004c615e
        ;   XREF to: 004c6180 (CONDITIONAL_JUMP)  ; LAB_004c6180
    FLD float ptr [ESP + 0x10]          ; 004c6160
    FMUL double ptr [0x005e0e04]        ; 004c6164 | DAT_005e0e04
    FSTP float ptr [ESP]                ; 004c616a
        ;   Label: LAB_004c616a
    MOV EAX,dword ptr [ESP]             ; 004c616d
    ADD ESP,0x4                         ; 004c6170
    RET                                 ; 004c6173
    FLD float ptr [ESP + 0x10]          ; 004c6174
        ;   Label: LAB_004c6174
    FMUL double ptr [0x005e0e0c]        ; 004c6178 | DAT_005e0e0c
    JMP 0x004c616a                      ; 004c617e
        ;   XREF to: 004c616a (UNCONDITIONAL_JUMP)  ; LAB_004c616a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004c6180
        ;   Label: LAB_004c6180
    MOV dword ptr [ESP],EAX             ; 004c6184
    MOV EAX,dword ptr [ESP]             ; 004c6187
    ADD ESP,0x4                         ; 004c618a
    RET                                 ; 004c618d

