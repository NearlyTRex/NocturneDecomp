; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void shape_edittool_cpp_FUN_0047a71e(uint param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01c25f84
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f8e20
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 0047a71e
        ;   Label: shape_edittool.cpp_FUN_0047a71e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a720
    CMP dword ptr [0x01c25f84],0x0      ; 0047a724 | DAT_01c25f84
    JNZ 0x0047a733                      ; 0047a72b
        ;   XREF to: 0047a733 (CONDITIONAL_JUMP)  ; LAB_0047a733
    MOV [0x01c35e60],EAX                ; 0047a72d | DAT_01c35e60
    RET                                 ; 0047a732
    AND EAX,0xff                        ; 0047a733
        ;   Label: LAB_0047a733
    MOV EDX,EAX                         ; 0047a738
    SHL EAX,0x2                         ; 0047a73a
    SUB EAX,EDX                         ; 0047a73d
    XOR EDX,EDX                         ; 0047a73f
    MOV DL,byte ptr [EAX + 0x1c35839]   ; 0047a741
    MOV ECX,EDX                         ; 0047a747
    XOR EDX,EDX                         ; 0047a749
    MOV DL,byte ptr [EAX + 0x1c35838]   ; 0047a74b
    SHL ECX,0x8                         ; 0047a751
    SHL EDX,0x10                        ; 0047a754
    MOV AL,byte ptr [EAX + 0x1c3583a]   ; 0047a757
    OR ECX,EDX                          ; 0047a75d
    AND EAX,0xff                        ; 0047a75f
    OR EAX,ECX                          ; 0047a764
    PUSH EAX                            ; 0047a766
    CALL engine_mini3d.cpp_FUN_004f8e20 ; 0047a767
        ;   XREF to: 004f8e20 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f8e20()
    ADD ESP,0x4                         ; 0047a76c
    RET                                 ; 0047a76f

