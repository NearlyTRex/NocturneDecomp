; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stairs_cpp_CStairs_customIntersectCylinderXZ_FUN_00568690(CStairs *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
;
; Called Functions:
;   core_dtri.cpp_cylinderTriangleTest_FUN_00479050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568690
        ;   Label: core_stairs.cpp_CStairs_customIntersectCylinderXZ_FUN_00568690
    PUSH ESI                            ; 00568691
    PUSH EDI                            ; 00568692
    PUSH EBP                            ; 00568693
    MOV EDI,dword ptr [ESP + 0x14]      ; 00568694
    MOV EBP,dword ptr [ESP + 0x18]      ; 00568698
    LEA ESI,[EDI + 0x170]               ; 0056869c
    XOR EBX,EBX                         ; 005686a2
    MOV EAX,dword ptr [EDI + 0x16c]     ; 005686a4
        ;   Label: LAB_005686a4
    ADD EAX,EAX                         ; 005686aa
    CMP EBX,EAX                         ; 005686ac
    JL 0x005686b5                       ; 005686ae
        ;   XREF to: 005686b5 (CONDITIONAL_JUMP)  ; LAB_005686b5
    POP EBP                             ; 005686b0
    POP EDI                             ; 005686b1
    POP ESI                             ; 005686b2
    POP EBX                             ; 005686b3
    RET                                 ; 005686b4
    PUSH EBP                            ; 005686b5
        ;   Label: LAB_005686b5
    PUSH ESI                            ; 005686b6
    INC EBX                             ; 005686b7
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_00479050 ; 005686b8
        ;   XREF to: 00479050 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_cylinderTriangleTest_FUN_00479050()
    ADD ESP,0x8                         ; 005686bd
    ADD ESI,0x38                        ; 005686c0
    JMP 0x005686a4                      ; 005686c3
        ;   XREF to: 005686a4 (UNCONDITIONAL_JUMP)  ; LAB_005686a4

