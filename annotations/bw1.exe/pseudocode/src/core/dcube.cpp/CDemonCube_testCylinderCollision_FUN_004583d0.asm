; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_004583d0(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_0048c300 at 0048c47a
;
; Referenced Globals:
;   undefined4 DAT_0152c2a8
;   undefined4 DAT_0152c2ac
;   undefined4 DAT_0152c2b0
;   undefined4 DAT_0152c2b4
;   undefined4 DAT_0152c2b8
;   undefined4 DAT_0152c2bc
;   undefined4 DAT_0152c2c0
;   undefined4 DAT_0152c2c4
;   undefined4 DAT_0152c2c8
;
; Called Functions:
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_004566c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004583d0
        ;   Label: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_004583d0
    PUSH ESI                            ; 004583d1
    PUSH EDI                            ; 004583d2
    PUSH EBP                            ; 004583d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004583d4
    MOV EBP,0xffffffff                  ; 004583d8
    MOV EDX,dword ptr [EDI + 0x28]      ; 004583dd
    XOR EBX,EBX                         ; 004583e0
    TEST EDX,EDX                        ; 004583e2
    JLE 0x0045840c                      ; 004583e4
        ;   XREF to: 0045840c (CONDITIONAL_JUMP)  ; LAB_0045840c
    XOR ESI,ESI                         ; 004583e6
    MOV EAX,dword ptr [ESP + 0x18]      ; 004583e8
        ;   Label: LAB_004583e8
    PUSH EAX                            ; 004583ec
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004583ed
    ADD EAX,ESI                         ; 004583f0
    PUSH EAX                            ; 004583f2
    CALL core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_004566c0 ; 004583f3
        ;   XREF to: 004566c0 (UNCONDITIONAL_CALL)  ; uint core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_004566c0(STriangleRef * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 004583f8
    TEST EAX,EAX                        ; 004583fb
    JZ 0x00458401                       ; 004583fd
        ;   XREF to: 00458401 (CONDITIONAL_JUMP)  ; LAB_00458401
    MOV EBP,EBX                         ; 004583ff
    INC EBX                             ; 00458401
        ;   Label: LAB_00458401
    MOV ECX,dword ptr [EDI + 0x28]      ; 00458402
    ADD ESI,0x20                        ; 00458405
    CMP EBX,ECX                         ; 00458408
    JL 0x004583e8                       ; 0045840a
        ;   XREF to: 004583e8 (CONDITIONAL_JUMP)  ; LAB_004583e8
    TEST EBP,EBP                        ; 0045840c
        ;   Label: LAB_0045840c
    JL 0x00458460                       ; 0045840e
        ;   XREF to: 00458460 (CONDITIONAL_JUMP)  ; LAB_00458460
    MOV EBX,EBP                         ; 00458410
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00458412
    SHL EBX,0x5                         ; 00458415
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00458418
    CMP EAX,0x152c2a8                   ; 0045841b
    JNZ 0x00458465                      ; 00458420
        ;   XREF to: 00458465 (CONDITIONAL_JUMP)  ; LAB_00458465
    MOV EBX,EBP                         ; 00458422
        ;   Label: LAB_00458422
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00458424
    SHL EBX,0x5                         ; 00458427
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0045842a
    CMP EAX,0x152c2b4                   ; 0045842e
    JZ 0x0045844f                       ; 00458433
        ;   XREF to: 0045844f (CONDITIONAL_JUMP)  ; LAB_0045844f
    FLD float ptr [EAX]                 ; 00458435
    FLD float ptr [EAX + 0x8]           ; 00458437
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045843a
    MOV dword ptr [0x0152c2b8],EDX      ; 0045843d | DAT_0152c2b8
    FSTP float ptr [0x0152c2bc]         ; 00458443 | DAT_0152c2bc
    FSTP float ptr [0x0152c2b4]         ; 00458449 | DAT_0152c2b4
    SHL EBP,0x5                         ; 0045844f
        ;   Label: LAB_0045844f
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00458452
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0x8] ; 00458455
    CMP EAX,0x152c2c0                   ; 00458459
    JNZ 0x00458481                      ; 0045845e
        ;   XREF to: 00458481 (CONDITIONAL_JUMP)  ; LAB_00458481
    POP EBP                             ; 00458460
        ;   Label: LAB_00458460
    POP EDI                             ; 00458461
    POP ESI                             ; 00458462
    POP EBX                             ; 00458463
    RET                                 ; 00458464
    FLD float ptr [EAX]                 ; 00458465
        ;   Label: LAB_00458465
    FLD float ptr [EAX + 0x8]           ; 00458467
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045846a
    MOV dword ptr [0x0152c2ac],EDX      ; 0045846d | DAT_0152c2ac
    FSTP float ptr [0x0152c2b0]         ; 00458473 | DAT_0152c2b0
    FSTP float ptr [0x0152c2a8]         ; 00458479 | DAT_0152c2a8
    JMP 0x00458422                      ; 0045847f
        ;   XREF to: 00458422 (UNCONDITIONAL_JUMP)  ; LAB_00458422
    FLD float ptr [EAX]                 ; 00458481
        ;   Label: LAB_00458481
    FLD float ptr [EAX + 0x8]           ; 00458483
    MOV EDX,dword ptr [EAX + 0x4]       ; 00458486
    MOV dword ptr [0x0152c2c4],EDX      ; 00458489 | DAT_0152c2c4
    FSTP float ptr [0x0152c2c8]         ; 0045848f | DAT_0152c2c8
    FSTP float ptr [0x0152c2c0]         ; 00458495 | DAT_0152c2c0
    POP EBP                             ; 0045849b
    POP EDI                             ; 0045849c
    POP ESI                             ; 0045849d
    POP EBX                             ; 0045849e
    RET                                 ; 0045849f

