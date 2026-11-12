; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_box_cpp_FUN_005b1eb0(CBox *param_1,CVector3f *param_2,CVector3f *param_3,int param_4,float *param_5,float param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_box.cpp_FUN_005b2050
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1eb0
        ;   Label: core_box.cpp_FUN_005b1eb0
    PUSH ESI                            ; 005b1eb1
    PUSH EDI                            ; 005b1eb2
    PUSH EBP                            ; 005b1eb3
    SUB ESP,0x30                        ; 005b1eb4
    MOV EBP,dword ptr [ESP + 0x44]      ; 005b1eb7
    MOV EBX,dword ptr [ESP + 0x50]      ; 005b1ebb
    CMP EBX,0x8                         ; 005b1ebf
    JG 0x005b2019                       ; 005b1ec2
        ;   XREF to: 005b2019 (CONDITIONAL_JUMP)  ; LAB_005b2019
    MOV ESI,0x4479c000                  ; 005b1ec8
        ;   Label: LAB_005b1ec8
    MOV EDX,0xc479c000                  ; 005b1ecd
    MOV dword ptr [ESP + 0x10],ESI      ; 005b1ed2
    MOV dword ptr [ESP + 0x14],ESI      ; 005b1ed6
    MOV dword ptr [ESP],EDX             ; 005b1eda
    MOV dword ptr [ESP + 0x4],EDX       ; 005b1edd
    MOV dword ptr [ESP + 0x8],EDX       ; 005b1ee1
    MOV dword ptr [ESP + 0xc],ESI       ; 005b1ee5
    XOR EDX,EDX                         ; 005b1ee9
    TEST EBX,EBX                        ; 005b1eeb
    JLE 0x005b1f6b                      ; 005b1eed
        ;   XREF to: 005b1f6b (CONDITIONAL_JUMP)  ; LAB_005b1f6b
    MOV ESI,dword ptr [ESP + 0x54]      ; 005b1ef3
    FLD float ptr [ESI]                 ; 005b1ef7
        ;   Label: LAB_005b1ef7
    FCOMP float ptr [ESP + 0xc]         ; 005b1ef9
    FNSTSW AX                           ; 005b1efd
    SAHF                                ; 005b1eff
    JNC 0x005b1f08                      ; 005b1f00
        ;   XREF to: 005b1f08 (CONDITIONAL_JUMP)  ; LAB_005b1f08
    MOV EAX,dword ptr [ESI]             ; 005b1f02
    MOV dword ptr [ESP + 0xc],EAX       ; 005b1f04
    FLD float ptr [ESI + 0x4]           ; 005b1f08
        ;   Label: LAB_005b1f08
    FCOMP float ptr [ESP + 0x10]        ; 005b1f0b
    FNSTSW AX                           ; 005b1f0f
    SAHF                                ; 005b1f11
    JNC 0x005b1f1b                      ; 005b1f12
        ;   XREF to: 005b1f1b (CONDITIONAL_JUMP)  ; LAB_005b1f1b
    MOV EAX,dword ptr [ESI + 0x4]       ; 005b1f14
    MOV dword ptr [ESP + 0x10],EAX      ; 005b1f17
    FLD float ptr [ESI + 0x8]           ; 005b1f1b
        ;   Label: LAB_005b1f1b
    FCOMP float ptr [ESP + 0x14]        ; 005b1f1e
    FNSTSW AX                           ; 005b1f22
    SAHF                                ; 005b1f24
    JNC 0x005b1f2e                      ; 005b1f25
        ;   XREF to: 005b1f2e (CONDITIONAL_JUMP)  ; LAB_005b1f2e
    MOV EAX,dword ptr [ESI + 0x8]       ; 005b1f27
    MOV dword ptr [ESP + 0x14],EAX      ; 005b1f2a
    FLD float ptr [ESI]                 ; 005b1f2e
        ;   Label: LAB_005b1f2e
    FCOMP float ptr [ESP]               ; 005b1f30
    FNSTSW AX                           ; 005b1f33
    SAHF                                ; 005b1f35
    JBE 0x005b1f3d                      ; 005b1f36
        ;   XREF to: 005b1f3d (CONDITIONAL_JUMP)  ; LAB_005b1f3d
    MOV EAX,dword ptr [ESI]             ; 005b1f38
    MOV dword ptr [ESP],EAX             ; 005b1f3a
    FLD float ptr [ESI + 0x4]           ; 005b1f3d
        ;   Label: LAB_005b1f3d
    FCOMP float ptr [ESP + 0x4]         ; 005b1f40
    FNSTSW AX                           ; 005b1f44
    SAHF                                ; 005b1f46
    JBE 0x005b1f50                      ; 005b1f47
        ;   XREF to: 005b1f50 (CONDITIONAL_JUMP)  ; LAB_005b1f50
    MOV EAX,dword ptr [ESI + 0x4]       ; 005b1f49
    MOV dword ptr [ESP + 0x4],EAX       ; 005b1f4c
    FLD float ptr [ESI + 0x8]           ; 005b1f50
        ;   Label: LAB_005b1f50
    FCOMP float ptr [ESP + 0x8]         ; 005b1f53
    FNSTSW AX                           ; 005b1f57
    SAHF                                ; 005b1f59
    JBE 0x005b1f63                      ; 005b1f5a
        ;   XREF to: 005b1f63 (CONDITIONAL_JUMP)  ; LAB_005b1f63
    MOV EAX,dword ptr [ESI + 0x8]       ; 005b1f5c
    MOV dword ptr [ESP + 0x8],EAX       ; 005b1f5f
    INC EDX                             ; 005b1f63
        ;   Label: LAB_005b1f63
    ADD ESI,0xc                         ; 005b1f64
    CMP EDX,EBX                         ; 005b1f67
    JL 0x005b1ef7                       ; 005b1f69
        ;   XREF to: 005b1ef7 (CONDITIONAL_JUMP)  ; LAB_005b1ef7
    FLD float ptr [ESP]                 ; 005b1f6b
        ;   Label: LAB_005b1f6b
    FLD float ptr [ESP + 0x4]           ; 005b1f6e
    FLD float ptr [ESP + 0x8]           ; 005b1f72
    LEA EDI,[ESP + 0x24]                ; 005b1f76
    LEA ESI,[ESP + 0x18]                ; 005b1f7a
    LEA EAX,[ESP + 0x24]                ; 005b1f7e
    LEA EDX,[EBP + 0xa4]                ; 005b1f82
    FXCH ST2                            ; 005b1f88
    FSUB float ptr [ESP + 0xc]          ; 005b1f8a
    FXCH                                ; 005b1f8e
    FSUB float ptr [ESP + 0x10]         ; 005b1f90
    FXCH ST2                            ; 005b1f94
    FSUB float ptr [ESP + 0x14]         ; 005b1f96
    FXCH ST2                            ; 005b1f9a
    FSTP float ptr [ESP + 0x1c]         ; 005b1f9c
    FXCH                                ; 005b1fa0
    FSTP float ptr [ESP + 0x20]         ; 005b1fa2
    FSTP float ptr [ESP + 0x18]         ; 005b1fa6
    MOVSD ES:EDI,ESI                    ; 005b1faa
    MOVSD ES:EDI,ESI                    ; 005b1fab
    MOVSD ES:EDI,ESI                    ; 005b1fac
    CMP EDX,EAX                         ; 005b1fad
    JZ 0x005b1fc5                       ; 005b1faf
        ;   XREF to: 005b1fc5 (CONDITIONAL_JUMP)  ; LAB_005b1fc5
    MOV EAX,dword ptr [ESP + 0x24]      ; 005b1fb1
    MOV dword ptr [EDX],EAX             ; 005b1fb5
    MOV EAX,dword ptr [ESP + 0x28]      ; 005b1fb7
    MOV dword ptr [EDX + 0x4],EAX       ; 005b1fbb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005b1fbe
    MOV dword ptr [EDX + 0x8],EAX       ; 005b1fc2
    XOR EDX,EDX                         ; 005b1fc5
        ;   Label: LAB_005b1fc5
    MOV dword ptr [EBP + 0xb0],EBX      ; 005b1fc7
    TEST EBX,EBX                        ; 005b1fcd
    JLE 0x005b1ffa                      ; 005b1fcf
        ;   XREF to: 005b1ffa (CONDITIONAL_JUMP)  ; LAB_005b1ffa
    MOV ESI,dword ptr [ESP + 0x54]      ; 005b1fd1
    LEA EAX,[EBP + 0xb4]                ; 005b1fd5
    CMP EAX,ESI                         ; 005b1fdb
        ;   Label: LAB_005b1fdb
    JZ 0x005b1fef                       ; 005b1fdd
        ;   XREF to: 005b1fef (CONDITIONAL_JUMP)  ; LAB_005b1fef
    MOV ECX,dword ptr [ESI]             ; 005b1fdf
    MOV dword ptr [EAX],ECX             ; 005b1fe1
    MOV ECX,dword ptr [ESI + 0x4]       ; 005b1fe3
    MOV dword ptr [EAX + 0x4],ECX       ; 005b1fe6
    MOV ECX,dword ptr [ESI + 0x8]       ; 005b1fe9
    MOV dword ptr [EAX + 0x8],ECX       ; 005b1fec
    ADD EAX,0x34                        ; 005b1fef
        ;   Label: LAB_005b1fef
    INC EDX                             ; 005b1ff2
    ADD ESI,0xc                         ; 005b1ff3
    CMP EDX,EBX                         ; 005b1ff6
    JL 0x005b1fdb                       ; 005b1ff8
        ;   XREF to: 005b1fdb (CONDITIONAL_JUMP)  ; LAB_005b1fdb
    MOV EDI,dword ptr [ESP + 0x4c]      ; 005b1ffa
        ;   Label: LAB_005b1ffa
    PUSH dword ptr [ESP + 0x58]         ; 005b1ffe
    PUSH EDI                            ; 005b2002
    MOV EAX,dword ptr [ESP + 0x50]      ; 005b2003
    PUSH EAX                            ; 005b2007
    PUSH EBP                            ; 005b2008
    CALL core_box.cpp_FUN_005b2050      ; 005b2009
        ;   XREF to: 005b2050 (UNCONDITIONAL_CALL)  ; void core_box.cpp_FUN_005b2050(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
    ADD ESP,0x10                        ; 005b200e
    ADD ESP,0x30                        ; 005b2011
    POP EBP                             ; 005b2014
    POP EDI                             ; 005b2015
    POP ESI                             ; 005b2016
    POP EBX                             ; 005b2017
    RET                                 ; 005b2018
    MOV EDX,0x5f1290                    ; 005b2019
        ;   Label: LAB_005b2019
    MOV ECX,0x80                        ; 005b201e
    PUSH 0x5f12a0                       ; 005b2023
    MOV dword ptr [0x01d046a0],EDX      ; 005b2028 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 005b202e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005b2034
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 005b2039
    JMP 0x005b1ec8                      ; 005b203c
        ;   XREF to: 005b1ec8 (UNCONDITIONAL_JUMP)  ; LAB_005b1ec8

