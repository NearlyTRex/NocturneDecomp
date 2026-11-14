; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0043e7e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35814
;   undefined4 DAT_01c35820
;   undefined4 DAT_01c3582c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e7e0
        ;   Label: core_dcamera.cpp_FUN_0043e7e0
    PUSH ESI                            ; 0043e7e1
    PUSH EDI                            ; 0043e7e2
    PUSH EBP                            ; 0043e7e3
    MOV EBP,dword ptr [0x006141c0]      ; 0043e7e4 | DAT_006141c0
    XOR EDX,EDX                         ; 0043e7ea
    XOR EAX,EAX                         ; 0043e7ec
    MOVZX ESI,byte ptr [EAX + 0xb65c99] ; 0043e7ee
        ;   Label: LAB_0043e7ee
    XOR EBX,EBX                         ; 0043e7f5
    MOVZX EDI,byte ptr [EAX + 0xb65c98] ; 0043e7f7
    MOV BL,byte ptr [EAX + 0xb65c9a]    ; 0043e7fe
    CMP EBP,0x20                        ; 0043e804
    JNZ 0x0043e846                      ; 0043e807
        ;   XREF to: 0043e846 (CONDITIONAL_JUMP)  ; LAB_0043e846
    MOV CL,byte ptr [0x01c35814]        ; 0043e809 | DAT_01c35814
    SHL EDI,CL                          ; 0043e80f
    MOV CL,byte ptr [0x01c35820]        ; 0043e811 | DAT_01c35820
    SHL ESI,CL                          ; 0043e817
    MOV CL,byte ptr [0x01c3582c]        ; 0043e819 | DAT_01c3582c
    SHL EBX,CL                          ; 0043e81f
    OR EDI,ESI                          ; 0043e821
    MOV ECX,EBX                         ; 0043e823
    OR ECX,EDI                          ; 0043e825
    ADD EDX,0x4                         ; 0043e827
        ;   Label: LAB_0043e827
    ADD EAX,0x3                         ; 0043e82a
    MOV dword ptr [EDX + 0xb65f98],ECX  ; 0043e82d
    CMP EDX,0x400                       ; 0043e833
    JNZ 0x0043e7ee                      ; 0043e839
        ;   XREF to: 0043e7ee (CONDITIONAL_JUMP)  ; LAB_0043e7ee
    MOV dword ptr [0x006141c0],EBP      ; 0043e83b | DAT_006141c0
    POP EBP                             ; 0043e841
    POP EDI                             ; 0043e842
    POP ESI                             ; 0043e843
    POP EBX                             ; 0043e844
    RET                                 ; 0043e845
    MOV ECX,EDI                         ; 0043e846
        ;   Label: LAB_0043e846
    SHL ESI,0x8                         ; 0043e848
    SHL ECX,0x10                        ; 0043e84b
    OR ECX,ESI                          ; 0043e84e
    OR ECX,EBX                          ; 0043e850
    JMP 0x0043e827                      ; 0043e852
        ;   XREF to: 0043e827 (UNCONDITIONAL_JUMP)  ; LAB_0043e827

