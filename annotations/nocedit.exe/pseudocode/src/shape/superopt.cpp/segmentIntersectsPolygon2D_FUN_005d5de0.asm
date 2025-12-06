; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0(CVector2d * polyVerts, uint vertCount, CVector2d * segStart, CVector2d * segEnd, CVector2d * segStart2)
;
; Parameters:
; CVector2d *      Stack[0x4]:4   polyVerts
; uint             Stack[0x8]:4   vertCount
; CVector2d *      Stack[0xc]:4   segStart
; CVector2d *      Stack[0x10]:4   segEnd
; CVector2d *      Stack[0x14]:4   segStart2
;
; Called Functions:
;   shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60
;   shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d5de0
        ;   Label: shape_superopt.cpp_segmentIntersectsPolygon2D_FUN_005d5de0
    PUSH ESI                            ; 005d5de1
    PUSH EDI                            ; 005d5de2
    PUSH EBP                            ; 005d5de3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005d5de4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005d5de8
    MOV EBP,dword ptr [ESP + 0x20]      ; 005d5dec
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005d5df0
    PUSH EDX                            ; 005d5df4
    PUSH EDI                            ; 005d5df5
    PUSH EBX                            ; 005d5df6
    CALL shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60 ; 005d5df7 | int shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60(CVector2d * vertices, uint vertex_count, CVector2d * test_point)
        ;   XREF to: 005d5e60 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d5dfc
    TEST EAX,EAX                        ; 005d5dff
    JZ 0x005d5e0d                       ; 005d5e01 | LAB_005d5e0d
        ;   XREF to: 005d5e0d (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005d5e03
        ;   Label: LAB_005d5e03
    POP EBP                             ; 005d5e08
    POP EDI                             ; 005d5e09
    POP ESI                             ; 005d5e0a
    POP EBX                             ; 005d5e0b
    RET                                 ; 005d5e0c
    PUSH EBP                            ; 005d5e0d
        ;   Label: LAB_005d5e0d
    PUSH EDI                            ; 005d5e0e
    PUSH EBX                            ; 005d5e0f
    CALL shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60 ; 005d5e10 | int shape_superopt.cpp_pointInPolygon2D_FUN_005d5e60(CVector2d * vertices, uint vertex_count, CVector2d * test_point)
        ;   XREF to: 005d5e60 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005d5e15
    TEST EAX,EAX                        ; 005d5e18
    JNZ 0x005d5e03                      ; 005d5e1a | LAB_005d5e03
        ;   XREF to: 005d5e03 (CONDITIONAL_JUMP)
    MOV EAX,EDI                         ; 005d5e1c
    SHL EAX,0x4                         ; 005d5e1e
    SUB EAX,0x10                        ; 005d5e21
    XOR ESI,ESI                         ; 005d5e24
    ADD EAX,EBX                         ; 005d5e26
    TEST EDI,EDI                        ; 005d5e28
    JBE 0x005d5e4a                      ; 005d5e2a | LAB_005d5e4a
        ;   XREF to: 005d5e4a (CONDITIONAL_JUMP)
    PUSH EBP                            ; 005d5e2c
        ;   Label: LAB_005d5e2c
    MOV ECX,dword ptr [ESP + 0x20]      ; 005d5e2d
    PUSH ECX                            ; 005d5e31
    PUSH EBX                            ; 005d5e32
    PUSH EAX                            ; 005d5e33
    CALL shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0 ; 005d5e34 | int shape_superopt.cpp_segmentsIntersect2D_FUN_005d5bb0(CVector2d * point_a, CVector2d * point_b, CVector2d * point_c, CVector2d * point_d)
        ;   XREF to: 005d5bb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005d5e39
    TEST EAX,EAX                        ; 005d5e3c
    JNZ 0x005d5e03                      ; 005d5e3e | LAB_005d5e03
        ;   XREF to: 005d5e03 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005d5e40
    INC ESI                             ; 005d5e42
    ADD EBX,0x10                        ; 005d5e43
    CMP ESI,EDI                         ; 005d5e46
    JC 0x005d5e2c                       ; 005d5e48 | LAB_005d5e2c
        ;   XREF to: 005d5e2c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005d5e4a
        ;   Label: LAB_005d5e4a
    POP EBP                             ; 005d5e4c
    POP EDI                             ; 005d5e4d
    POP ESI                             ; 005d5e4e
    POP EBX                             ; 005d5e4f
    RET                                 ; 005d5e50

