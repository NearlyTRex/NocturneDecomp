; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042a2d0(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Called Functions:
;   core_skeleton.cpp_FUN_00545a60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042a2d0
        ;   Label: core_charactr.cpp_FUN_0042a2d0
    PUSH ESI                            ; 0042a2d1
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042a2d2
    MOV EAX,dword ptr [ECX + 0x2830]    ; 0042a2d6
    SHL EAX,0x3                         ; 0042a2dc
    MOV EDX,EAX                         ; 0042a2df
    SHL EAX,0x3                         ; 0042a2e1
    PUSH 0x544cc0                       ; 0042a2e4
    SUB EAX,EDX                         ; 0042a2e9
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042a2eb
    MOV EDX,EAX                         ; 0042a2ef
    LEA EAX,[ECX + 0x2834]              ; 0042a2f1
    PUSH EBX                            ; 0042a2f7
    FILD dword ptr [EDX + EAX*0x1 + 0x30] ; 0042a2f8
    FMUL float ptr [ECX + 0x2d08]       ; 0042a2fc
    PUSH dword ptr [ESP + 0x18]         ; 0042a302
    SUB ESP,0x4                         ; 0042a306
    FSTP float ptr [ESP]                ; 0042a309
    MOV ESI,dword ptr [EDX + EAX*0x1 + 0x2c] ; 0042a30c
    PUSH ESI                            ; 0042a310
    ADD ECX,0x2b4                       ; 0042a311
    PUSH ECX                            ; 0042a317
    CALL core_skeleton.cpp_FUN_00545a60 ; 0042a318
        ;   XREF to: 00545a60 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00545a60()
    ADD ESP,0x18                        ; 0042a31d
    POP ESI                             ; 0042a320
    POP EBX                             ; 0042a321
    RET                                 ; 0042a322

