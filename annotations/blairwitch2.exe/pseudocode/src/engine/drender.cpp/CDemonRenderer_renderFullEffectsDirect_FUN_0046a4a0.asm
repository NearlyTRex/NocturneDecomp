; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0046a4a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a4a0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderFullEffectsDirect_FUN_0046a4a0
    PUSH ESI                            ; 0046a4a1
    PUSH EDI                            ; 0046a4a2
    PUSH EBP                            ; 0046a4a3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046a4a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046a4a8
    CMP dword ptr [EBP + 0xc],0x0       ; 0046a4ac
    JNZ 0x0046a526                      ; 0046a4b0
        ;   XREF to: 0046a526 (CONDITIONAL_JUMP)  ; LAB_0046a526
    MOV ECX,0xffffffff                  ; 0046a4b6
        ;   Label: LAB_0046a4b6
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046a4bb
    XOR EDX,EDX                         ; 0046a4be
    TEST EBX,EBX                        ; 0046a4c0
    JLE 0x0046a4e0                      ; 0046a4c2
        ;   XREF to: 0046a4e0 (CONDITIONAL_JUMP)  ; LAB_0046a4e0
    MOV EAX,ESI                         ; 0046a4c4
    MOV EDI,dword ptr [EBP]             ; 0046a4c6
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046a4c9
        ;   Label: LAB_0046a4c9
    IMUL EBX,EBX,0x30                   ; 0046a4cc
    INC EDX                             ; 0046a4cf
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046a4d0
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046a4d4
    ADD EAX,0x4                         ; 0046a4d7
    CMP EDX,EBX                         ; 0046a4da
    JL 0x0046a4c9                       ; 0046a4dc
        ;   XREF to: 0046a4c9 (CONDITIONAL_JUMP)  ; LAB_0046a4c9
    MOV EAX,EAX                         ; 0046a4de
    TEST ECX,0x80000000                 ; 0046a4e0
        ;   Label: LAB_0046a4e0
    JZ 0x0046a4ed                       ; 0046a4e6
        ;   XREF to: 0046a4ed (CONDITIONAL_JUMP)  ; LAB_0046a4ed
    TEST CL,0x1f                        ; 0046a4e8
    JNZ 0x0046a521                      ; 0046a4eb
        ;   XREF to: 0046a521 (CONDITIONAL_JUMP)  ; LAB_0046a521
    CMP dword ptr [EBP + 0x4],0x0       ; 0046a4ed
        ;   Label: LAB_0046a4ed
    JZ 0x0046a53b                       ; 0046a4f1
        ;   XREF to: 0046a53b (CONDITIONAL_JUMP)  ; LAB_0046a53b
    MOV EDX,0x1                         ; 0046a4f3
    MOV EAX,0x46e9e7                    ; 0046a4f8
    XOR ECX,ECX                         ; 0046a4fd
    MOV dword ptr [0x01c38b54],EDX      ; 0046a4ff | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 0046a505 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 0046a50b | DAT_01c35e6c
    LEA EAX,[ESI + 0x18]                ; 0046a510
        ;   Label: LAB_0046a510
    PUSH EAX                            ; 0046a513
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046a514
    PUSH EBX                            ; 0046a517
    PUSH EBP                            ; 0046a518
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046a519
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046a51e
    POP EBP                             ; 0046a521
        ;   Label: LAB_0046a521
    POP EDI                             ; 0046a522
    POP ESI                             ; 0046a523
    POP EBX                             ; 0046a524
    RET                                 ; 0046a525
    LEA EAX,[ESI + 0x8]                 ; 0046a526
        ;   Label: LAB_0046a526
    PUSH EAX                            ; 0046a529
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046a52a
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046a52f
    TEST EAX,EAX                        ; 0046a532
    JZ 0x0046a521                       ; 0046a534
        ;   XREF to: 0046a521 (CONDITIONAL_JUMP)  ; LAB_0046a521
    JMP 0x0046a4b6                      ; 0046a536
        ;   XREF to: 0046a4b6 (UNCONDITIONAL_JUMP)  ; LAB_0046a4b6
    CMP dword ptr [0x006141c0],0x20     ; 0046a53b | DAT_006141c0
        ;   Label: LAB_0046a53b
    JNZ 0x0046a566                      ; 0046a542
        ;   XREF to: 0046a566 (CONDITIONAL_JUMP)  ; LAB_0046a566
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046a544 | DAT_01c35e6c
    MOV EDI,0x6                         ; 0046a54e
        ;   Label: LAB_0046a54e
    MOV EBX,0x3e7                       ; 0046a553
    MOV dword ptr [0x01c38b58],EDI      ; 0046a558 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EBX      ; 0046a55e | DAT_01c38b54
    JMP 0x0046a510                      ; 0046a564
        ;   XREF to: 0046a510 (UNCONDITIONAL_JUMP)  ; LAB_0046a510
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046a566 | DAT_01c35e6c
        ;   Label: LAB_0046a566
    JMP 0x0046a54e                      ; 0046a570
        ;   XREF to: 0046a54e (UNCONDITIONAL_JUMP)  ; LAB_0046a54e

