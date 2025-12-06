; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stairs.cpp_FUN_005ba6a0()
;
;
; Called Functions:
;   core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba6a0
        ;   Label: core_stairs.cpp_FUN_005ba6a0
    PUSH ESI                            ; 005ba6a1
    PUSH EDI                            ; 005ba6a2
    PUSH EBP                            ; 005ba6a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005ba6a4
    LEA ESI,[EBP + 0x170]               ; 005ba6a8
    XOR EBX,EBX                         ; 005ba6ae
    XOR EDI,EDI                         ; 005ba6b0
    MOV EAX,dword ptr [EBP + 0x16c]     ; 005ba6b2
        ;   Label: LAB_005ba6b2
    ADD EAX,EAX                         ; 005ba6b8
    CMP EBX,EAX                         ; 005ba6ba
    JL 0x005ba6c5                       ; 005ba6bc | LAB_005ba6c5
        ;   XREF to: 005ba6c5 (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 005ba6be
    POP EBP                             ; 005ba6c0
    POP EDI                             ; 005ba6c1
    POP ESI                             ; 005ba6c2
    POP EBX                             ; 005ba6c3
    RET                                 ; 005ba6c4
    MOV EDX,dword ptr [ESP + 0x20]      ; 005ba6c5
        ;   Label: LAB_005ba6c5
    PUSH EDX                            ; 005ba6c9
    MOV ECX,dword ptr [ESP + 0x1c]      ; 005ba6ca
    PUSH dword ptr [ESP + 0x20]         ; 005ba6ce
    PUSH ECX                            ; 005ba6d2
    PUSH ESI                            ; 005ba6d3
    CALL core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0 ; 005ba6d4 | int core_dtri.cpp_rayTriangleFloorTest_FUN_0049b2f0(CDemonTriangle * triangle, float x, float z, float * out_height)
        ;   XREF to: 0049b2f0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005ba6d9
    TEST EAX,EAX                        ; 005ba6dc
    JZ 0x005ba6e5                       ; 005ba6de | LAB_005ba6e5
        ;   XREF to: 005ba6e5 (CONDITIONAL_JUMP)
    MOV EDI,0x1                         ; 005ba6e0
    INC EBX                             ; 005ba6e5
        ;   Label: LAB_005ba6e5
    ADD ESI,0x38                        ; 005ba6e6
    JMP 0x005ba6b2                      ; 005ba6e9 | LAB_005ba6b2
        ;   XREF to: 005ba6b2 (UNCONDITIONAL_JUMP)

