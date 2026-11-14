; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_005069f0(CMarquee *this_ptr)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_marquee.cpp_CMarquee_setup_FUN_00506b20 at 00506b45
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_00447f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005069f0
        ;   Label: core_marquee.cpp_CMarquee_computeBoundingBox_FUN_005069f0
    PUSH ESI                            ; 005069f1
    PUSH EDI                            ; 005069f2
    SUB ESP,0x20                        ; 005069f3
    MOV EBX,dword ptr [ESP + 0x30]      ; 005069f6
    MOV dword ptr [EBX + 0x188],0x461c3f9a ; 005069fa
    MOV dword ptr [EBX + 0x18c],0x461c3f9a ; 00506a04
    MOV dword ptr [EBX + 0x190],0xc61c3f9a ; 00506a0e
    MOV dword ptr [EBX + 0x194],0xc61c3f9a ; 00506a18
    MOV dword ptr [EBX + 0x198],0xc61c3f9a ; 00506a22
    LEA EDI,[EBX + 0x1a4]               ; 00506a2c
    MOV dword ptr [EBX + 0x184],0x461c3f9a ; 00506a32
    XOR ESI,ESI                         ; 00506a3c
    MOV EAX,dword ptr [EDI]             ; 00506a3e
    CMP ESI,EAX                         ; 00506a40
    JL 0x00506a4b                       ; 00506a42
        ;   XREF to: 00506a4b (CONDITIONAL_JUMP)  ; LAB_00506a4b
    ADD ESP,0x20                        ; 00506a44
    POP EDI                             ; 00506a47
    POP ESI                             ; 00506a48
    POP EBX                             ; 00506a49
    RET                                 ; 00506a4a
    MOV EAX,ESP                         ; 00506a4b
        ;   Label: LAB_00506a4b
    MOV dword ptr [ESP + 0x1c],ESI      ; 00506a4d
    PUSH EAX                            ; 00506a51
    LEA EAX,[ESP + 0x10]                ; 00506a52
    FILD dword ptr [ESP + 0x20]         ; 00506a56
    PUSH EAX                            ; 00506a5a
    FSTP float ptr [ESP + 0x20]         ; 00506a5b
    PUSH dword ptr [ESP + 0x20]         ; 00506a5f
    PUSH EDI                            ; 00506a63
    CALL core_course.cpp_CCourse_evaluate_FUN_00447f00 ; 00506a64
        ;   XREF to: 00447f00 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00447f00(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 00506a69
    FLD float ptr [ESP + 0xc]           ; 00506a6c
    FCOMP float ptr [EBX + 0x184]       ; 00506a70
    FNSTSW AX                           ; 00506a76
    SAHF                                ; 00506a78
    JNC 0x00506a85                      ; 00506a79
        ;   XREF to: 00506a85 (CONDITIONAL_JUMP)  ; LAB_00506a85
    MOV EAX,dword ptr [ESP + 0xc]       ; 00506a7b
    MOV dword ptr [EBX + 0x184],EAX     ; 00506a7f
    FLD float ptr [ESP + 0xc]           ; 00506a85
        ;   Label: LAB_00506a85
    FCOMP float ptr [EBX + 0x190]       ; 00506a89
    FNSTSW AX                           ; 00506a8f
    SAHF                                ; 00506a91
    JBE 0x00506a9e                      ; 00506a92
        ;   XREF to: 00506a9e (CONDITIONAL_JUMP)  ; LAB_00506a9e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00506a94
    MOV dword ptr [EBX + 0x190],EAX     ; 00506a98
    FLD float ptr [ESP + 0x10]          ; 00506a9e
        ;   Label: LAB_00506a9e
    FCOMP float ptr [EBX + 0x188]       ; 00506aa2
    FNSTSW AX                           ; 00506aa8
    SAHF                                ; 00506aaa
    JNC 0x00506ab7                      ; 00506aab
        ;   XREF to: 00506ab7 (CONDITIONAL_JUMP)  ; LAB_00506ab7
    MOV EAX,dword ptr [ESP + 0x10]      ; 00506aad
    MOV dword ptr [EBX + 0x188],EAX     ; 00506ab1
    FLD float ptr [ESP + 0x10]          ; 00506ab7
        ;   Label: LAB_00506ab7
    FCOMP float ptr [EBX + 0x194]       ; 00506abb
    FNSTSW AX                           ; 00506ac1
    SAHF                                ; 00506ac3
    JBE 0x00506ad0                      ; 00506ac4
        ;   XREF to: 00506ad0 (CONDITIONAL_JUMP)  ; LAB_00506ad0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00506ac6
    MOV dword ptr [EBX + 0x194],EAX     ; 00506aca
    FLD float ptr [ESP + 0x14]          ; 00506ad0
        ;   Label: LAB_00506ad0
    FCOMP float ptr [EBX + 0x18c]       ; 00506ad4
    FNSTSW AX                           ; 00506ada
    SAHF                                ; 00506adc
    JNC 0x00506ae9                      ; 00506add
        ;   XREF to: 00506ae9 (CONDITIONAL_JUMP)  ; LAB_00506ae9
    MOV EAX,dword ptr [ESP + 0x14]      ; 00506adf
    MOV dword ptr [EBX + 0x18c],EAX     ; 00506ae3
    FLD float ptr [ESP + 0x14]          ; 00506ae9
        ;   Label: LAB_00506ae9
    FCOMP float ptr [EBX + 0x198]       ; 00506aed
    FNSTSW AX                           ; 00506af3
    SAHF                                ; 00506af5
    JBE 0x00506b02                      ; 00506af6
        ;   XREF to: 00506b02 (CONDITIONAL_JUMP)  ; LAB_00506b02
    MOV EAX,dword ptr [ESP + 0x14]      ; 00506af8
    MOV dword ptr [EBX + 0x198],EAX     ; 00506afc
    INC ESI                             ; 00506b02
        ;   Label: LAB_00506b02
    MOV EAX,dword ptr [EDI]             ; 00506b03
    CMP ESI,EAX                         ; 00506b05
    JL 0x00506a4b                       ; 00506b07
        ;   XREF to: 00506a4b (CONDITIONAL_JUMP)  ; LAB_00506a4b
    ADD ESP,0x20                        ; 00506b0d
    POP EDI                             ; 00506b10
    POP ESI                             ; 00506b11
    POP EBX                             ; 00506b12
    RET                                 ; 00506b13

