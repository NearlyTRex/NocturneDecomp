; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0(int *param_1,int param_2)
;
;
; XREF[1]:
;   core_dlight.cpp_FUN_0044f9b0 at 00450118
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004604c0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderOverlayDirect_FUN_004604c0
    PUSH ESI                            ; 004604c1
    PUSH EDI                            ; 004604c2
    PUSH EBP                            ; 004604c3
    MOV EBP,dword ptr [ESP + 0x14]      ; 004604c4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004604c8
    CMP dword ptr [EBP + 0xc],0x0       ; 004604cc
    JNZ 0x00460541                      ; 004604d0
        ;   XREF to: 00460541 (CONDITIONAL_JUMP)  ; LAB_00460541
    MOV ECX,0xffffffff                  ; 004604d6
        ;   Label: LAB_004604d6
    MOV EBX,dword ptr [ESI + 0x4]       ; 004604db
    XOR EDX,EDX                         ; 004604de
    TEST EBX,EBX                        ; 004604e0
    JLE 0x00460500                      ; 004604e2
        ;   XREF to: 00460500 (CONDITIONAL_JUMP)  ; LAB_00460500
    MOV EAX,ESI                         ; 004604e4
    MOV EDI,dword ptr [EBP]             ; 004604e6
    MOV EBX,dword ptr [EAX + 0x18]      ; 004604e9
        ;   Label: LAB_004604e9
    IMUL EBX,EBX,0x30                   ; 004604ec
    INC EDX                             ; 004604ef
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 004604f0
    MOV EBX,dword ptr [ESI + 0x4]       ; 004604f4
    ADD EAX,0x4                         ; 004604f7
    CMP EDX,EBX                         ; 004604fa
    JL 0x004604e9                       ; 004604fc
        ;   XREF to: 004604e9 (CONDITIONAL_JUMP)  ; LAB_004604e9
    MOV EAX,EAX                         ; 004604fe
    TEST ECX,0x80000000                 ; 00460500
        ;   Label: LAB_00460500
    JZ 0x0046050d                       ; 00460506
        ;   XREF to: 0046050d (CONDITIONAL_JUMP)  ; LAB_0046050d
    TEST CL,0x1f                        ; 00460508
    JNZ 0x0046053c                      ; 0046050b
        ;   XREF to: 0046053c (CONDITIONAL_JUMP)  ; LAB_0046053c
    CMP dword ptr [EBP + 0x4],0x0       ; 0046050d
        ;   Label: LAB_0046050d
    JZ 0x00460553                       ; 00460511
        ;   XREF to: 00460553 (CONDITIONAL_JUMP)  ; LAB_00460553
    XOR EDX,EDX                         ; 00460513
    MOV EAX,0x463a79                    ; 00460515 | LAB_00463a79
    MOV dword ptr [0x01c039a0],EDX      ; 0046051a | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 00460520 | DAT_01c039a4
    MOV [0x01c00c7c],EAX                ; 00460526 | DAT_01c00c7c
    LEA EAX,[ESI + 0x18]                ; 0046052b
        ;   Label: LAB_0046052b
    PUSH EAX                            ; 0046052e
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046052f
    PUSH EBX                            ; 00460532
    PUSH EBP                            ; 00460533
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 00460534
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 00460539
    POP EBP                             ; 0046053c
        ;   Label: LAB_0046053c
    POP EDI                             ; 0046053d
    POP ESI                             ; 0046053e
    POP EBX                             ; 0046053f
    RET                                 ; 00460540
    LEA EAX,[ESI + 0x8]                 ; 00460541
        ;   Label: LAB_00460541
    PUSH EAX                            ; 00460544
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00460545
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0046054a
    TEST EAX,EAX                        ; 0046054d
    JZ 0x0046053c                       ; 0046054f
        ;   XREF to: 0046053c (CONDITIONAL_JUMP)  ; LAB_0046053c
    JMP 0x004604d6                      ; 00460551
        ;   XREF to: 004604d6 (UNCONDITIONAL_JUMP)  ; LAB_004604d6
    CMP dword ptr [0x005b7624],0x20     ; 00460553 | DAT_005b7624
        ;   Label: LAB_00460553
    JNZ 0x0046057b                      ; 0046055a
        ;   XREF to: 0046057b (CONDITIONAL_JUMP)  ; LAB_0046057b
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0046055c | DAT_01c00c7c | LAB_0052f031
    XOR EDI,EDI                         ; 00460566
        ;   Label: LAB_00460566
    MOV EBX,0x327                       ; 00460568
    MOV dword ptr [0x01c039a4],EDI      ; 0046056d | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EBX      ; 00460573 | DAT_01c039a0
    JMP 0x0046052b                      ; 00460579
        ;   XREF to: 0046052b (UNCONDITIONAL_JUMP)  ; LAB_0046052b
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0046057b | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0046057b
    JMP 0x00460566                      ; 00460585
        ;   XREF to: 00460566 (UNCONDITIONAL_JUMP)  ; LAB_00460566

