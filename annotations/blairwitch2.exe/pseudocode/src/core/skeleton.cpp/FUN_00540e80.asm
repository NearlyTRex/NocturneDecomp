; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00540e80(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[59]:
;   FUN_0040f780 at 0040f7a8
;   FUN_004116f0 at 00411722
;   FUN_00412be0 at 00412c12
;   FUN_004184c0 at 004184e9
;   FUN_0041d9c0 at 0041d9ec
;   FUN_00422930 at 004229da
;   FUN_004291f0 at 0042922c
;   FUN_00429420 at 0042946c
;   FUN_0042a7a0 at 0042a899
;   FUN_0042aa00 at 0042aa45
;   ... and 49 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e6b34
;   TerminatedCString s_Can_t_find_bone_s_in_ske_005e6b49
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00540e80
        ;   Label: FUN_00540e80
    PUSH ESI                            ; 00540e81
    PUSH EDI                            ; 00540e82
    PUSH EBP                            ; 00540e83
    MOV EDI,dword ptr [ESP + 0x14]      ; 00540e84
    MOV EBP,dword ptr [ESP + 0x18]      ; 00540e88
    MOV EDX,dword ptr [EDI + 0x1d1f8]   ; 00540e8c
    XOR EBX,EBX                         ; 00540e92
    TEST EDX,EDX                        ; 00540e94
    JLE 0x00540eba                      ; 00540e96
        ;   XREF to: 00540eba (CONDITIONAL_JUMP)  ; LAB_00540eba
    LEA ESI,[EDI + 0x1d1fc]             ; 00540e98
    PUSH EBP                            ; 00540e9e
        ;   Label: LAB_00540e9e
    PUSH ESI                            ; 00540e9f
    CALL FUN_005b8130                   ; 00540ea0
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00540ea5
    TEST EAX,EAX                        ; 00540ea8
    JZ 0x00540ecb                       ; 00540eaa
        ;   XREF to: 00540ecb (CONDITIONAL_JUMP)  ; LAB_00540ecb
    INC EBX                             ; 00540eac
    MOV ECX,dword ptr [EDI + 0x1d1f8]   ; 00540ead
    ADD ESI,0x24                        ; 00540eb3
    CMP EBX,ECX                         ; 00540eb6
    JL 0x00540e9e                       ; 00540eb8
        ;   XREF to: 00540e9e (CONDITIONAL_JUMP)  ; LAB_00540e9e
    CMP dword ptr [ESP + 0x1c],0x0      ; 00540eba
        ;   Label: LAB_00540eba
    JNZ 0x00540ed2                      ; 00540ebf
        ;   XREF to: 00540ed2 (CONDITIONAL_JUMP)  ; LAB_00540ed2
    MOV EAX,0xffffffff                  ; 00540ec1
    POP EBP                             ; 00540ec6
    POP EDI                             ; 00540ec7
    POP ESI                             ; 00540ec8
    POP EBX                             ; 00540ec9
    RET                                 ; 00540eca
    MOV EAX,EBX                         ; 00540ecb
        ;   Label: LAB_00540ecb
    POP EBP                             ; 00540ecd
    POP EDI                             ; 00540ece
    POP ESI                             ; 00540ecf
    POP EBX                             ; 00540ed0
    RET                                 ; 00540ed1
    ADD EDI,0x1d1a8                     ; 00540ed2
        ;   Label: LAB_00540ed2
    PUSH EDI                            ; 00540ed8
    PUSH EBP                            ; 00540ed9
    MOV ESI,0x5e6b34                    ; 00540eda | = "..\\core\\skeleton.cpp"
    MOV EAX,0x178                       ; 00540edf
    PUSH 0x5e6b49                       ; 00540ee4 | = "Can't find bone %s in skeleton %s!"
    MOV dword ptr [0x01d046a0],ESI      ; 00540ee9 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00540eef | DAT_01d046a4
    CALL FUN_004e4500                   ; 00540ef4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 00540ef9
    MOV EAX,0xffffffff                  ; 00540efc
    POP EBP                             ; 00540f01
    POP EDI                             ; 00540f02
    POP ESI                             ; 00540f03
    POP EBX                             ; 00540f04
    RET                                 ; 00540f05

