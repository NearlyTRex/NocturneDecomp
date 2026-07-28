; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_0044b430(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00468af0 at 00468c6a
;
; Referenced Globals:
;   undefined4 DAT_014b89e8
;   undefined4 DAT_014b89ec
;   undefined4 DAT_014b89f0
;   undefined4 DAT_014b89f4
;   undefined4 DAT_014b89f8
;   undefined4 DAT_014b89fc
;   undefined4 DAT_014b8a00
;   undefined4 DAT_014b8a04
;   undefined4 DAT_014b8a08
;
; Called Functions:
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00449720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b430
        ;   Label: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_0044b430
    PUSH ESI                            ; 0044b431
    PUSH EDI                            ; 0044b432
    PUSH EBP                            ; 0044b433
    MOV EDI,dword ptr [ESP + 0x14]      ; 0044b434
    MOV EBP,0xffffffff                  ; 0044b438
    MOV EDX,dword ptr [EDI + 0x28]      ; 0044b43d
    XOR EBX,EBX                         ; 0044b440
    TEST EDX,EDX                        ; 0044b442
    JLE 0x0044b46c                      ; 0044b444
        ;   XREF to: 0044b46c (CONDITIONAL_JUMP)  ; LAB_0044b46c
    XOR ESI,ESI                         ; 0044b446
    MOV EAX,dword ptr [ESP + 0x18]      ; 0044b448
        ;   Label: LAB_0044b448
    PUSH EAX                            ; 0044b44c
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0044b44d
    ADD EAX,ESI                         ; 0044b450
    PUSH EAX                            ; 0044b452
    CALL core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00449720 ; 0044b453
        ;   XREF to: 00449720 (UNCONDITIONAL_CALL)  ; uint core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00449720(STriangleRef * triangle, SIntersectXZCylinder * cylinder)
    ADD ESP,0x8                         ; 0044b458
    TEST EAX,EAX                        ; 0044b45b
    JZ 0x0044b461                       ; 0044b45d
        ;   XREF to: 0044b461 (CONDITIONAL_JUMP)  ; LAB_0044b461
    MOV EBP,EBX                         ; 0044b45f
    INC EBX                             ; 0044b461
        ;   Label: LAB_0044b461
    MOV ECX,dword ptr [EDI + 0x28]      ; 0044b462
    ADD ESI,0x20                        ; 0044b465
    CMP EBX,ECX                         ; 0044b468
    JL 0x0044b448                       ; 0044b46a
        ;   XREF to: 0044b448 (CONDITIONAL_JUMP)  ; LAB_0044b448
    TEST EBP,EBP                        ; 0044b46c
        ;   Label: LAB_0044b46c
    JL 0x0044b4c0                       ; 0044b46e
        ;   XREF to: 0044b4c0 (CONDITIONAL_JUMP)  ; LAB_0044b4c0
    MOV EBX,EBP                         ; 0044b470
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0044b472
    SHL EBX,0x5                         ; 0044b475
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 0044b478
    CMP EAX,0x14b89e8                   ; 0044b47b
    JNZ 0x0044b4c5                      ; 0044b480
        ;   XREF to: 0044b4c5 (CONDITIONAL_JUMP)  ; LAB_0044b4c5
    MOV EBX,EBP                         ; 0044b482
        ;   Label: LAB_0044b482
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0044b484
    SHL EBX,0x5                         ; 0044b487
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0044b48a
    CMP EAX,0x14b89f4                   ; 0044b48e
    JZ 0x0044b4af                       ; 0044b493
        ;   XREF to: 0044b4af (CONDITIONAL_JUMP)  ; LAB_0044b4af
    FLD float ptr [EAX]                 ; 0044b495
    FLD float ptr [EAX + 0x8]           ; 0044b497
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b49a
    MOV dword ptr [0x014b89f8],EDX      ; 0044b49d | DAT_014b89f8
    FSTP float ptr [0x014b89fc]         ; 0044b4a3 | DAT_014b89fc
    FSTP float ptr [0x014b89f4]         ; 0044b4a9 | DAT_014b89f4
    SHL EBP,0x5                         ; 0044b4af
        ;   Label: LAB_0044b4af
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0044b4b2
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0x8] ; 0044b4b5
    CMP EAX,0x14b8a00                   ; 0044b4b9
    JNZ 0x0044b4e1                      ; 0044b4be
        ;   XREF to: 0044b4e1 (CONDITIONAL_JUMP)  ; LAB_0044b4e1
    POP EBP                             ; 0044b4c0
        ;   Label: LAB_0044b4c0
    POP EDI                             ; 0044b4c1
    POP ESI                             ; 0044b4c2
    POP EBX                             ; 0044b4c3
    RET                                 ; 0044b4c4
    FLD float ptr [EAX]                 ; 0044b4c5
        ;   Label: LAB_0044b4c5
    FLD float ptr [EAX + 0x8]           ; 0044b4c7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b4ca
    MOV dword ptr [0x014b89ec],EDX      ; 0044b4cd | DAT_014b89ec
    FSTP float ptr [0x014b89f0]         ; 0044b4d3 | DAT_014b89f0
    FSTP float ptr [0x014b89e8]         ; 0044b4d9 | DAT_014b89e8
    JMP 0x0044b482                      ; 0044b4df
        ;   XREF to: 0044b482 (UNCONDITIONAL_JUMP)  ; LAB_0044b482
    FLD float ptr [EAX]                 ; 0044b4e1
        ;   Label: LAB_0044b4e1
    FLD float ptr [EAX + 0x8]           ; 0044b4e3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044b4e6
    MOV dword ptr [0x014b8a04],EDX      ; 0044b4e9 | DAT_014b8a04
    FSTP float ptr [0x014b8a08]         ; 0044b4ef | DAT_014b8a08
    FSTP float ptr [0x014b8a00]         ; 0044b4f5 | DAT_014b8a00
    POP EBP                             ; 0044b4fb
    POP EDI                             ; 0044b4fc
    POP ESI                             ; 0044b4fd
    POP EBX                             ; 0044b4fe
    RET                                 ; 0044b4ff

