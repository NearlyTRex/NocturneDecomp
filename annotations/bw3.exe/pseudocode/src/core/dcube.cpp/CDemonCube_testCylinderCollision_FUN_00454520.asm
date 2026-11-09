; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCube_testCylinderCollision_FUN_00454520(CDemonCube *this_ptr,SIntersectXZCylinder *cylinder)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; SIntersectXZCylinder * Stack[0x8]:4   cylinder
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_testCylinderCollision_FUN_00474e80 at 00474ffa
;
; Referenced Globals:
;   undefined4 DAT_01548b58
;   undefined4 DAT_01548b5c
;   undefined4 DAT_01548b60
;   undefined4 DAT_01548b64
;   undefined4 DAT_01548b68
;   undefined4 DAT_01548b6c
;   undefined4 DAT_01548b70
;   undefined4 DAT_01548b74
;   undefined4 DAT_01548b78
;
; Called Functions:
;   core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00452810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454520
        ;   Label: core_dcube.cpp_CDemonCube_testCylinderCollision_FUN_00454520
    PUSH ESI                            ; 00454521
    PUSH EDI                            ; 00454522
    PUSH EBP                            ; 00454523
    MOV EDI,dword ptr [ESP + 0x14]      ; 00454524
    MOV EBP,0xffffffff                  ; 00454528
    MOV EDX,dword ptr [EDI + 0x28]      ; 0045452d
    XOR EBX,EBX                         ; 00454530
    TEST EDX,EDX                        ; 00454532
    JLE 0x0045455c                      ; 00454534
        ;   XREF to: 0045455c (CONDITIONAL_JUMP)  ; LAB_0045455c
    XOR ESI,ESI                         ; 00454536
    MOV EAX,dword ptr [ESP + 0x18]      ; 00454538
        ;   Label: LAB_00454538
    PUSH EAX                            ; 0045453c
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0045453d
    ADD EAX,ESI                         ; 00454540
    PUSH EAX                            ; 00454542
    CALL core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00452810 ; 00454543
        ;   XREF to: 00452810 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_intersectTriangleWithXZCylinder_FUN_00452810()
    ADD ESP,0x8                         ; 00454548
    TEST EAX,EAX                        ; 0045454b
    JZ 0x00454551                       ; 0045454d
        ;   XREF to: 00454551 (CONDITIONAL_JUMP)  ; LAB_00454551
    MOV EBP,EBX                         ; 0045454f
    INC EBX                             ; 00454551
        ;   Label: LAB_00454551
    MOV ECX,dword ptr [EDI + 0x28]      ; 00454552
    ADD ESI,0x20                        ; 00454555
    CMP EBX,ECX                         ; 00454558
    JL 0x00454538                       ; 0045455a
        ;   XREF to: 00454538 (CONDITIONAL_JUMP)  ; LAB_00454538
    TEST EBP,EBP                        ; 0045455c
        ;   Label: LAB_0045455c
    JL 0x004545b0                       ; 0045455e
        ;   XREF to: 004545b0 (CONDITIONAL_JUMP)  ; LAB_004545b0
    MOV EBX,EBP                         ; 00454560
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00454562
    SHL EBX,0x5                         ; 00454565
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00454568
    CMP EAX,0x1548b58                   ; 0045456b
    JNZ 0x004545b5                      ; 00454570
        ;   XREF to: 004545b5 (CONDITIONAL_JUMP)  ; LAB_004545b5
    MOV EBX,EBP                         ; 00454572
        ;   Label: LAB_00454572
    MOV EAX,dword ptr [EDI + 0x2c]      ; 00454574
    SHL EBX,0x5                         ; 00454577
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0045457a
    CMP EAX,0x1548b64                   ; 0045457e
    JZ 0x0045459f                       ; 00454583
        ;   XREF to: 0045459f (CONDITIONAL_JUMP)  ; LAB_0045459f
    FLD float ptr [EAX]                 ; 00454585
    FLD float ptr [EAX + 0x8]           ; 00454587
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045458a
    MOV dword ptr [0x01548b68],EDX      ; 0045458d | DAT_01548b68
    FSTP float ptr [0x01548b6c]         ; 00454593 | DAT_01548b6c
    FSTP float ptr [0x01548b64]         ; 00454599 | DAT_01548b64
    SHL EBP,0x5                         ; 0045459f
        ;   Label: LAB_0045459f
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004545a2
    MOV EAX,dword ptr [EAX + EBP*0x1 + 0x8] ; 004545a5
    CMP EAX,0x1548b70                   ; 004545a9
    JNZ 0x004545d1                      ; 004545ae
        ;   XREF to: 004545d1 (CONDITIONAL_JUMP)  ; LAB_004545d1
    POP EBP                             ; 004545b0
        ;   Label: LAB_004545b0
    POP EDI                             ; 004545b1
    POP ESI                             ; 004545b2
    POP EBX                             ; 004545b3
    RET                                 ; 004545b4
    FLD float ptr [EAX]                 ; 004545b5
        ;   Label: LAB_004545b5
    FLD float ptr [EAX + 0x8]           ; 004545b7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004545ba
    MOV dword ptr [0x01548b5c],EDX      ; 004545bd | DAT_01548b5c
    FSTP float ptr [0x01548b60]         ; 004545c3 | DAT_01548b60
    FSTP float ptr [0x01548b58]         ; 004545c9 | DAT_01548b58
    JMP 0x00454572                      ; 004545cf
        ;   XREF to: 00454572 (UNCONDITIONAL_JUMP)  ; LAB_00454572
    FLD float ptr [EAX]                 ; 004545d1
        ;   Label: LAB_004545d1
    FLD float ptr [EAX + 0x8]           ; 004545d3
    MOV EDX,dword ptr [EAX + 0x4]       ; 004545d6
    MOV dword ptr [0x01548b74],EDX      ; 004545d9 | DAT_01548b74
    FSTP float ptr [0x01548b78]         ; 004545df | DAT_01548b78
    FSTP float ptr [0x01548b70]         ; 004545e5 | DAT_01548b70
    POP EBP                             ; 004545eb
    POP EDI                             ; 004545ec
    POP ESI                             ; 004545ed
    POP EBX                             ; 004545ee
    RET                                 ; 004545ef

