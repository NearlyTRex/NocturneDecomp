; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_FUN_0046b470(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_setdir.cpp_FUN_0053f5d0 at 0053f623
;   core_setdir.cpp_FUN_0053f940 at 005407c7
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005bc4ac
;   TerminatedCString s_Can_t_use_demonZFacetCou_005bc4c2
;   undefined4 DAT_01bdd810
;   undefined4 DAT_01bdd818
;   undefined4 DAT_01bdd81c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b470
        ;   Label: engine_drender.cpp_FUN_0046b470
    PUSH ESI                            ; 0046b471
    PUSH EDI                            ; 0046b472
    PUSH EBP                            ; 0046b473
    SUB ESP,0x4                         ; 0046b474
    MOV EBP,dword ptr [ESP + 0x18]      ; 0046b477
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0046b47b
    XOR EDX,EDX                         ; 0046b47f
    MOV ECX,dword ptr [EBP + 0xc]       ; 0046b481
    MOV dword ptr [0x01bdd810],EDX      ; 0046b484 | DAT_01bdd810
    TEST ECX,ECX                        ; 0046b48a
    JNZ 0x0046b534                      ; 0046b48c
        ;   XREF to: 0046b534 (CONDITIONAL_JUMP)  ; LAB_0046b534
    MOV EBX,0xffffffff                  ; 0046b492
        ;   Label: LAB_0046b492
    MOV ESI,dword ptr [EDI + 0x4]       ; 0046b497
    XOR EDX,EDX                         ; 0046b49a
    MOV dword ptr [ESP],EBX             ; 0046b49c
    TEST ESI,ESI                        ; 0046b49f
    JLE 0x0046b4e0                      ; 0046b4a1
        ;   XREF to: 0046b4e0 (CONDITIONAL_JUMP)  ; LAB_0046b4e0
    MOV EBX,EDI                         ; 0046b4a3
    XOR ECX,ECX                         ; 0046b4a5
    MOV ESI,dword ptr [EBX + 0x18]      ; 0046b4a7
        ;   Label: LAB_0046b4a7
    MOV dword ptr [ECX + 0x1bdd818],ESI ; 0046b4aa | DAT_01bdd818 | DAT_01bdd81c
    LEA EAX,[ESI*0x4 + 0x0]             ; 0046b4b0
    SUB EAX,ESI                         ; 0046b4b7
    ADD ECX,0x4                         ; 0046b4b9
    MOV ESI,EAX                         ; 0046b4bc
    MOV EAX,dword ptr [EBP]             ; 0046b4be
    SHL ESI,0x4                         ; 0046b4c1
    ADD EBX,0xc                         ; 0046b4c4
    MOV EAX,dword ptr [ESI + EAX*0x1 + 0x10] ; 0046b4c7
    MOV ESI,dword ptr [ESP]             ; 0046b4cb
    INC EDX                             ; 0046b4ce
    AND ESI,EAX                         ; 0046b4cf
    MOV EAX,dword ptr [EDI + 0x4]       ; 0046b4d1
    MOV dword ptr [ESP],ESI             ; 0046b4d4
    CMP EDX,EAX                         ; 0046b4d7
    JL 0x0046b4a7                       ; 0046b4d9
        ;   XREF to: 0046b4a7 (CONDITIONAL_JUMP)  ; LAB_0046b4a7
    LEA EAX,[EAX]                       ; 0046b4db
    MOV ECX,ECX                         ; 0046b4de
    TEST byte ptr [ESP + 0x3],0x80      ; 0046b4e0
        ;   Label: LAB_0046b4e0
    JZ 0x0046b4ed                       ; 0046b4e5
        ;   XREF to: 0046b4ed (CONDITIONAL_JUMP)  ; LAB_0046b4ed
    TEST byte ptr [ESP],0x1f            ; 0046b4e7
    JNZ 0x0046b54a                      ; 0046b4eb
        ;   XREF to: 0046b54a (CONDITIONAL_JUMP)  ; LAB_0046b54a
    CMP dword ptr [EBP + 0x4],0x0       ; 0046b4ed
        ;   Label: LAB_0046b4ed
    JZ 0x0046b54e                       ; 0046b4f1
        ;   XREF to: 0046b54e (CONDITIONAL_JUMP)  ; LAB_0046b54e
    MOV EAX,0x5bc4ac                    ; 0046b4f3 | = "..\\engine\\drender.cpp"
    MOV EDX,0x29d                       ; 0046b4f8
    PUSH 0x5bc4c2                       ; 0046b4fd | = "Can't use demonZFacetCount in shadow ..."
    MOV [0x01d71de0],EAX                ; 0046b502 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0046b507 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0046b50d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0046b512
    PUSH 0x1bdd818                      ; 0046b515 | DAT_01bdd818
        ;   Label: LAB_0046b515
    MOV ECX,dword ptr [EDI + 0x4]       ; 0046b51a
    PUSH ECX                            ; 0046b51d
    PUSH EBP                            ; 0046b51e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046b51f
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    MOV EAX,[0x01bdd810]                ; 0046b524 | DAT_01bdd810
    ADD ESP,0xc                         ; 0046b529
    ADD ESP,0x4                         ; 0046b52c
        ;   Label: LAB_0046b52c
    POP EBP                             ; 0046b52f
    POP EDI                             ; 0046b530
    POP ESI                             ; 0046b531
    POP EBX                             ; 0046b532
    RET                                 ; 0046b533
    LEA EAX,[EDI + 0x8]                 ; 0046b534
        ;   Label: LAB_0046b534
    PUSH EAX                            ; 0046b537
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046b538
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046b53d
    TEST EAX,EAX                        ; 0046b540
    JNZ 0x0046b492                      ; 0046b542
        ;   XREF to: 0046b492 (CONDITIONAL_JUMP)  ; LAB_0046b492
    JMP 0x0046b52c                      ; 0046b548
        ;   XREF to: 0046b52c (UNCONDITIONAL_JUMP)  ; LAB_0046b52c
    XOR EAX,EAX                         ; 0046b54a
        ;   Label: LAB_0046b54a
    JMP 0x0046b52c                      ; 0046b54c
        ;   XREF to: 0046b52c (UNCONDITIONAL_JUMP)  ; LAB_0046b52c
    MOV EBX,0xc0                        ; 0046b54e
        ;   Label: LAB_0046b54e
    MOV ESI,0x6                         ; 0046b553
    MOV ECX,0x46ffa5                    ; 0046b558
    MOV dword ptr [0x01c6e2b4],EBX      ; 0046b55d | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ESI      ; 0046b563 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],ECX      ; 0046b569 | DAT_01c6b5cc
    JMP 0x0046b515                      ; 0046b56f
        ;   XREF to: 0046b515 (UNCONDITIONAL_JUMP)  ; LAB_0046b515

