; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_stairs_cpp_FUN_005ba660(void)
;
;
; Called Functions:
;   core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba660
        ;   Label: core_stairs.cpp_FUN_005ba660
    PUSH ESI                            ; 005ba661
    PUSH EDI                            ; 005ba662
    PUSH EBP                            ; 005ba663
    MOV EDI,dword ptr [ESP + 0x14]      ; 005ba664
    MOV EBP,dword ptr [ESP + 0x18]      ; 005ba668
    LEA ESI,[EDI + 0x170]               ; 005ba66c
    XOR EBX,EBX                         ; 005ba672
    MOV EAX,dword ptr [EDI + 0x16c]     ; 005ba674
        ;   Label: LAB_005ba674
    ADD EAX,EAX                         ; 005ba67a
    CMP EBX,EAX                         ; 005ba67c
    JL 0x005ba685                       ; 005ba67e
        ;   XREF to: 005ba685 (CONDITIONAL_JUMP)  ; LAB_005ba685
    POP EBP                             ; 005ba680
    POP EDI                             ; 005ba681
    POP ESI                             ; 005ba682
    POP EBX                             ; 005ba683
    RET                                 ; 005ba684
    PUSH EBP                            ; 005ba685
        ;   Label: LAB_005ba685
    PUSH ESI                            ; 005ba686
    INC EBX                             ; 005ba687
    CALL core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80 ; 005ba688
        ;   XREF to: 0049ad80 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_cylinderTriangleTest_FUN_0049ad80(CDemonTriangle * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 005ba68d
    ADD ESI,0x38                        ; 005ba690
    JMP 0x005ba674                      ; 005ba693
        ;   XREF to: 005ba674 (UNCONDITIONAL_JUMP)  ; LAB_005ba674

