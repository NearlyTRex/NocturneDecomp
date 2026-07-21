; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534a30
        ;   Label: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00534a30
    PUSH ESI                            ; 00534a31
    PUSH EDI                            ; 00534a32
    PUSH EBP                            ; 00534a33
    MOV EDI,dword ptr [ESP + 0x14]      ; 00534a34
    MOV EBP,dword ptr [ESP + 0x18]      ; 00534a38
    LEA ESI,[EDI + 0x168]               ; 00534a3c
    XOR EBX,EBX                         ; 00534a42
    MOV EAX,dword ptr [EDI + 0x164]     ; 00534a44
        ;   Label: LAB_00534a44
    ADD EAX,EAX                         ; 00534a4a
    CMP EBX,EAX                         ; 00534a4c
    JL 0x00534a55                       ; 00534a4e
        ;   XREF to: 00534a55 (CONDITIONAL_JUMP)  ; LAB_00534a55
    POP EBP                             ; 00534a50
    POP EDI                             ; 00534a51
    POP ESI                             ; 00534a52
    POP EBX                             ; 00534a53
    RET                                 ; 00534a54
    PUSH EBP                            ; 00534a55
        ;   Label: LAB_00534a55
    PUSH ESI                            ; 00534a56
    INC EBX                             ; 00534a57
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0 ; 00534a58
        ;   XREF to: 0046cba0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_0046cba0()
    ADD ESP,0x8                         ; 00534a5d
    ADD ESI,0x38                        ; 00534a60
    JMP 0x00534a44                      ; 00534a63
        ;   XREF to: 00534a44 (UNCONDITIONAL_JUMP)  ; LAB_00534a44

