; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_box_cpp_FUN_0041dcf0(CBox *param_1,CVector3f *param_2,CVector3f *param_3,int param_4,float *param_5,float param_6)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_box.cpp_FUN_0041de90
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041dcf0
        ;   Label: core_box.cpp_FUN_0041dcf0
    PUSH ESI                            ; 0041dcf1
    PUSH EDI                            ; 0041dcf2
    PUSH EBP                            ; 0041dcf3
    SUB ESP,0x30                        ; 0041dcf4
    MOV EBP,dword ptr [ESP + 0x44]      ; 0041dcf7
    MOV EBX,dword ptr [ESP + 0x50]      ; 0041dcfb
    CMP EBX,0x8                         ; 0041dcff
    JG 0x0041de59                       ; 0041dd02
        ;   XREF to: 0041de59 (CONDITIONAL_JUMP)  ; LAB_0041de59
    MOV ESI,0x4479c000                  ; 0041dd08
        ;   Label: LAB_0041dd08
    MOV EDX,0xc479c000                  ; 0041dd0d
    MOV dword ptr [ESP + 0x10],ESI      ; 0041dd12
    MOV dword ptr [ESP + 0x14],ESI      ; 0041dd16
    MOV dword ptr [ESP],EDX             ; 0041dd1a
    MOV dword ptr [ESP + 0x4],EDX       ; 0041dd1d
    MOV dword ptr [ESP + 0x8],EDX       ; 0041dd21
    MOV dword ptr [ESP + 0xc],ESI       ; 0041dd25
    XOR EDX,EDX                         ; 0041dd29
    TEST EBX,EBX                        ; 0041dd2b
    JLE 0x0041ddab                      ; 0041dd2d
        ;   XREF to: 0041ddab (CONDITIONAL_JUMP)  ; LAB_0041ddab
    MOV ESI,dword ptr [ESP + 0x54]      ; 0041dd33
    FLD float ptr [ESI]                 ; 0041dd37
        ;   Label: LAB_0041dd37
    FCOMP float ptr [ESP + 0xc]         ; 0041dd39
    FNSTSW AX                           ; 0041dd3d
    SAHF                                ; 0041dd3f
    JNC 0x0041dd48                      ; 0041dd40
        ;   XREF to: 0041dd48 (CONDITIONAL_JUMP)  ; LAB_0041dd48
    MOV EAX,dword ptr [ESI]             ; 0041dd42
    MOV dword ptr [ESP + 0xc],EAX       ; 0041dd44
    FLD float ptr [ESI + 0x4]           ; 0041dd48
        ;   Label: LAB_0041dd48
    FCOMP float ptr [ESP + 0x10]        ; 0041dd4b
    FNSTSW AX                           ; 0041dd4f
    SAHF                                ; 0041dd51
    JNC 0x0041dd5b                      ; 0041dd52
        ;   XREF to: 0041dd5b (CONDITIONAL_JUMP)  ; LAB_0041dd5b
    MOV EAX,dword ptr [ESI + 0x4]       ; 0041dd54
    MOV dword ptr [ESP + 0x10],EAX      ; 0041dd57
    FLD float ptr [ESI + 0x8]           ; 0041dd5b
        ;   Label: LAB_0041dd5b
    FCOMP float ptr [ESP + 0x14]        ; 0041dd5e
    FNSTSW AX                           ; 0041dd62
    SAHF                                ; 0041dd64
    JNC 0x0041dd6e                      ; 0041dd65
        ;   XREF to: 0041dd6e (CONDITIONAL_JUMP)  ; LAB_0041dd6e
    MOV EAX,dword ptr [ESI + 0x8]       ; 0041dd67
    MOV dword ptr [ESP + 0x14],EAX      ; 0041dd6a
    FLD float ptr [ESI]                 ; 0041dd6e
        ;   Label: LAB_0041dd6e
    FCOMP float ptr [ESP]               ; 0041dd70
    FNSTSW AX                           ; 0041dd73
    SAHF                                ; 0041dd75
    JBE 0x0041dd7d                      ; 0041dd76
        ;   XREF to: 0041dd7d (CONDITIONAL_JUMP)  ; LAB_0041dd7d
    MOV EAX,dword ptr [ESI]             ; 0041dd78
    MOV dword ptr [ESP],EAX             ; 0041dd7a
    FLD float ptr [ESI + 0x4]           ; 0041dd7d
        ;   Label: LAB_0041dd7d
    FCOMP float ptr [ESP + 0x4]         ; 0041dd80
    FNSTSW AX                           ; 0041dd84
    SAHF                                ; 0041dd86
    JBE 0x0041dd90                      ; 0041dd87
        ;   XREF to: 0041dd90 (CONDITIONAL_JUMP)  ; LAB_0041dd90
    MOV EAX,dword ptr [ESI + 0x4]       ; 0041dd89
    MOV dword ptr [ESP + 0x4],EAX       ; 0041dd8c
    FLD float ptr [ESI + 0x8]           ; 0041dd90
        ;   Label: LAB_0041dd90
    FCOMP float ptr [ESP + 0x8]         ; 0041dd93
    FNSTSW AX                           ; 0041dd97
    SAHF                                ; 0041dd99
    JBE 0x0041dda3                      ; 0041dd9a
        ;   XREF to: 0041dda3 (CONDITIONAL_JUMP)  ; LAB_0041dda3
    MOV EAX,dword ptr [ESI + 0x8]       ; 0041dd9c
    MOV dword ptr [ESP + 0x8],EAX       ; 0041dd9f
    INC EDX                             ; 0041dda3
        ;   Label: LAB_0041dda3
    ADD ESI,0xc                         ; 0041dda4
    CMP EDX,EBX                         ; 0041dda7
    JL 0x0041dd37                       ; 0041dda9
        ;   XREF to: 0041dd37 (CONDITIONAL_JUMP)  ; LAB_0041dd37
    FLD float ptr [ESP]                 ; 0041ddab
        ;   Label: LAB_0041ddab
    FLD float ptr [ESP + 0x4]           ; 0041ddae
    FLD float ptr [ESP + 0x8]           ; 0041ddb2
    LEA EDI,[ESP + 0x24]                ; 0041ddb6
    LEA ESI,[ESP + 0x18]                ; 0041ddba
    LEA EAX,[ESP + 0x24]                ; 0041ddbe
    LEA EDX,[EBP + 0xa4]                ; 0041ddc2
    FXCH ST2                            ; 0041ddc8
    FSUB float ptr [ESP + 0xc]          ; 0041ddca
    FXCH                                ; 0041ddce
    FSUB float ptr [ESP + 0x10]         ; 0041ddd0
    FXCH ST2                            ; 0041ddd4
    FSUB float ptr [ESP + 0x14]         ; 0041ddd6
    FXCH ST2                            ; 0041ddda
    FSTP float ptr [ESP + 0x1c]         ; 0041dddc
    FXCH                                ; 0041dde0
    FSTP float ptr [ESP + 0x20]         ; 0041dde2
    FSTP float ptr [ESP + 0x18]         ; 0041dde6
    MOVSD ES:EDI,ESI                    ; 0041ddea
    MOVSD ES:EDI,ESI                    ; 0041ddeb
    MOVSD ES:EDI,ESI                    ; 0041ddec
    CMP EDX,EAX                         ; 0041dded
    JZ 0x0041de05                       ; 0041ddef
        ;   XREF to: 0041de05 (CONDITIONAL_JUMP)  ; LAB_0041de05
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041ddf1
    MOV dword ptr [EDX],EAX             ; 0041ddf5
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041ddf7
    MOV dword ptr [EDX + 0x4],EAX       ; 0041ddfb
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041ddfe
    MOV dword ptr [EDX + 0x8],EAX       ; 0041de02
    XOR EDX,EDX                         ; 0041de05
        ;   Label: LAB_0041de05
    MOV dword ptr [EBP + 0xb0],EBX      ; 0041de07
    TEST EBX,EBX                        ; 0041de0d
    JLE 0x0041de3a                      ; 0041de0f
        ;   XREF to: 0041de3a (CONDITIONAL_JUMP)  ; LAB_0041de3a
    MOV ESI,dword ptr [ESP + 0x54]      ; 0041de11
    LEA EAX,[EBP + 0xb4]                ; 0041de15
    CMP EAX,ESI                         ; 0041de1b
        ;   Label: LAB_0041de1b
    JZ 0x0041de2f                       ; 0041de1d
        ;   XREF to: 0041de2f (CONDITIONAL_JUMP)  ; LAB_0041de2f
    MOV ECX,dword ptr [ESI]             ; 0041de1f
    MOV dword ptr [EAX],ECX             ; 0041de21
    MOV ECX,dword ptr [ESI + 0x4]       ; 0041de23
    MOV dword ptr [EAX + 0x4],ECX       ; 0041de26
    MOV ECX,dword ptr [ESI + 0x8]       ; 0041de29
    MOV dword ptr [EAX + 0x8],ECX       ; 0041de2c
    ADD EAX,0x34                        ; 0041de2f
        ;   Label: LAB_0041de2f
    INC EDX                             ; 0041de32
    ADD ESI,0xc                         ; 0041de33
    CMP EDX,EBX                         ; 0041de36
    JL 0x0041de1b                       ; 0041de38
        ;   XREF to: 0041de1b (CONDITIONAL_JUMP)  ; LAB_0041de1b
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0041de3a
        ;   Label: LAB_0041de3a
    PUSH dword ptr [ESP + 0x58]         ; 0041de3e
    PUSH EDI                            ; 0041de42
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041de43
    PUSH EAX                            ; 0041de47
    PUSH EBP                            ; 0041de48
    CALL core_box.cpp_FUN_0041de90      ; 0041de49
        ;   XREF to: 0041de90 (UNCONDITIONAL_CALL)  ; void core_box.cpp_FUN_0041de90(CBox * this_ptr, CVector3f * new_position, CVector3f * new_orientation, float speed)
    ADD ESP,0x10                        ; 0041de4e
    ADD ESP,0x30                        ; 0041de51
    POP EBP                             ; 0041de54
    POP EDI                             ; 0041de55
    POP ESI                             ; 0041de56
    POP EBX                             ; 0041de57
    RET                                 ; 0041de58
    MOV EDX,0x5d4a50                    ; 0041de59
        ;   Label: LAB_0041de59
    MOV ECX,0x80                        ; 0041de5e
    PUSH 0x5d4a60                       ; 0041de63
    MOV dword ptr [0x01d1d400],EDX      ; 0041de68 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0041de6e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0041de74
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0041de79
    JMP 0x0041dd08                      ; 0041de7c
        ;   XREF to: 0041dd08 (UNCONDITIONAL_JUMP)  ; LAB_0041dd08

