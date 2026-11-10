; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_005621a0(CStairs *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
;
; Called Functions:
;   core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005621a0
        ;   Label: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_005621a0
    PUSH ESI                            ; 005621a1
    PUSH EDI                            ; 005621a2
    PUSH EBP                            ; 005621a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005621a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005621a8
    LEA ESI,[EDI + 0x2cc]               ; 005621ac
    XOR EBX,EBX                         ; 005621b2
    MOV EAX,dword ptr [EDI + 0x2c8]     ; 005621b4
        ;   Label: LAB_005621b4
    ADD EAX,EAX                         ; 005621ba
    CMP EBX,EAX                         ; 005621bc
    JL 0x005621c5                       ; 005621be
        ;   XREF to: 005621c5 (CONDITIONAL_JUMP)  ; LAB_005621c5
    POP EBP                             ; 005621c0
    POP EDI                             ; 005621c1
    POP ESI                             ; 005621c2
    POP EBX                             ; 005621c3
    RET                                 ; 005621c4
    PUSH EBP                            ; 005621c5
        ;   Label: LAB_005621c5
    PUSH ESI                            ; 005621c6
    INC EBX                             ; 005621c7
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0 ; 005621c8
        ;   XREF to: 00477fe0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00477fe0()
    ADD ESP,0x8                         ; 005621cd
    ADD ESI,0x38                        ; 005621d0
    JMP 0x005621b4                      ; 005621d3
        ;   XREF to: 005621b4 (UNCONDITIONAL_JUMP)  ; LAB_005621b4

