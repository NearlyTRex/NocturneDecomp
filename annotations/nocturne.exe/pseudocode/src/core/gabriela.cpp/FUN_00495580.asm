; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_gabriela_cpp_FUN_00495580(undefined4 param_1,undefined4 param_2,float param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_gabriela.cpp_FUN_00497900 at 00497cea
;
; Referenced Globals:
;   double DOUBLE_00581e12 = 0.950000000000000
;   double DOUBLE_00581e1a = 0.900000000000000
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00495580
        ;   Label: core_gabriela.cpp_FUN_00495580
    MOV EAX,dword ptr [ESP + 0x14]      ; 00495583
    TEST EAX,EAX                        ; 00495587
    JLE 0x004955a4                      ; 00495589
        ;   XREF to: 004955a4 (CONDITIONAL_JUMP)  ; LAB_004955a4
    CMP EAX,0x1                         ; 0049558b
    JNZ 0x004955b0                      ; 0049558e
        ;   XREF to: 004955b0 (CONDITIONAL_JUMP)  ; LAB_004955b0
    FLD float ptr [ESP + 0x10]          ; 00495590
    FMUL double ptr [0x00581e12]        ; 00495594 | DOUBLE_00581e12
    FSTP float ptr [ESP]                ; 0049559a
        ;   Label: LAB_0049559a
    MOV EAX,dword ptr [ESP]             ; 0049559d
    ADD ESP,0x4                         ; 004955a0
    RET                                 ; 004955a3
    FLD float ptr [ESP + 0x10]          ; 004955a4
        ;   Label: LAB_004955a4
    FMUL double ptr [0x00581e1a]        ; 004955a8 | DOUBLE_00581e1a
    JMP 0x0049559a                      ; 004955ae
        ;   XREF to: 0049559a (UNCONDITIONAL_JUMP)  ; LAB_0049559a
    MOV EAX,dword ptr [ESP + 0x10]      ; 004955b0
        ;   Label: LAB_004955b0
    MOV dword ptr [ESP],EAX             ; 004955b4
    MOV EAX,dword ptr [ESP]             ; 004955b7
    ADD ESP,0x4                         ; 004955ba
    RET                                 ; 004955bd

