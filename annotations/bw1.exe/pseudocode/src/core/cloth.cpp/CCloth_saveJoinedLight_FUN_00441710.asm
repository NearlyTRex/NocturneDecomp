; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_00441710(CCloth *this_ptr,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
; CDeformableModelInstance * Stack[0x8]:4   model_ptr
;
; XREF[1]:
;   core_cloth.cpp_CClothList_render_FUN_00441ff0 at 00442016
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_005d68dc
;   TerminatedCString s_CCloth_saveJoinedLight_C_005d68ee
;   TerminatedCString s_core_cloth_cpp_005d6928
;   TerminatedCString s_CCloth_saveJoinedLight_M_005d693a
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441710
        ;   Label: core_cloth.cpp_CCloth_saveJoinedLight_FUN_00441710
    PUSH ESI                            ; 00441711
    PUSH EDI                            ; 00441712
    PUSH EBP                            ; 00441713
    MOV EBP,dword ptr [ESP + 0x14]      ; 00441714
    MOV EDI,dword ptr [ESP + 0x18]      ; 00441718
    TEST EDI,EDI                        ; 0044171c
    JZ 0x004417a5                       ; 0044171e
        ;   XREF to: 004417a5 (CONDITIONAL_JUMP)  ; LAB_004417a5
    MOV EDI,dword ptr [EDI + 0x2320]    ; 00441724
        ;   Label: LAB_00441724
    TEST EDI,EDI                        ; 0044172a
    JL 0x004417cd                       ; 0044172c
        ;   XREF to: 004417cd (CONDITIONAL_JUMP)  ; LAB_004417cd
    MOV EAX,dword ptr [EBP + 0x39ce8]   ; 00441732
        ;   Label: LAB_00441732
    XOR ESI,ESI                         ; 00441738
    TEST EAX,EAX                        ; 0044173a
    JLE 0x004417a0                      ; 0044173c
        ;   XREF to: 004417a0 (CONDITIONAL_JUMP)  ; LAB_004417a0
    LEA EAX,[EDI*0x4 + 0x0]             ; 0044173e
    SUB EAX,EDI                         ; 00441745
    SHL EAX,0x3                         ; 00441747
    ADD EAX,EDI                         ; 0044174a
    SHL EAX,0x4                         ; 0044174c
    LEA EBX,[EAX + EBP*0x1]             ; 0044174f
    MOV EAX,EBP                         ; 00441752
    MOV ECX,dword ptr [EBX + 0x39e7c]   ; 00441754
        ;   Label: LAB_00441754
    IMUL ECX,ECX,0x30                   ; 0044175a
    MOV EDX,dword ptr [0x00612560]      ; 0044175d | DAT_00612560
    MOV EDI,dword ptr [EDX]             ; 00441763 | DAT_01bc120c
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x20] ; 00441765
    MOV dword ptr [EAX + 0x3a64c],EDI   ; 00441769
    MOV EDI,dword ptr [EDX]             ; 0044176f | DAT_01bc120c
    MOV EDI,dword ptr [ECX + EDI*0x1 + 0x24] ; 00441771
    MOV dword ptr [EAX + 0x3a7dc],EDI   ; 00441775
    MOV EDX,dword ptr [EDX]             ; 0044177b | DAT_01bc120c
    ADD EAX,0x4                         ; 0044177d
    MOV EDX,dword ptr [ECX + EDX*0x1 + 0x28] ; 00441780
    MOV dword ptr [EAX + 0x3a968],EDX   ; 00441784
    INC ESI                             ; 0044178a
    MOV EDX,dword ptr [EBP + 0x39ce8]   ; 0044178b
    ADD EBX,0x4                         ; 00441791
    CMP ESI,EDX                         ; 00441794
    JL 0x00441754                       ; 00441796
        ;   XREF to: 00441754 (CONDITIONAL_JUMP)  ; LAB_00441754
    LEA EAX,[EAX]                       ; 00441798
    MOV EDX,EDX                         ; 0044179e
    POP EBP                             ; 004417a0
        ;   Label: LAB_004417a0
    POP EDI                             ; 004417a1
    POP ESI                             ; 004417a2
    POP EBX                             ; 004417a3
    RET                                 ; 004417a4
    MOV EDX,0x5d68dc                    ; 004417a5 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_004417a5
    MOV ECX,0x4f0                       ; 004417aa
    PUSH 0x5d68ee                       ; 004417af | = "CCloth::saveJoinedLight - Can't save ..."
    MOV dword ptr [0x01d1d400],EDX      ; 004417b4 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004417ba | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004417c0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004417c5
    JMP 0x00441724                      ; 004417c8
        ;   XREF to: 00441724 (UNCONDITIONAL_JUMP)  ; LAB_00441724
    MOV EBX,0x5d6928                    ; 004417cd | = "..\\core\\cloth.cpp"
        ;   Label: LAB_004417cd
    MOV ESI,0x4f5                       ; 004417d2
    PUSH 0x5d693a                       ; 004417d7 | = "CCloth::saveJoinedLight - Model wasn'..."
    MOV dword ptr [0x01d1d400],EBX      ; 004417dc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004417e2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004417e8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004417ed
    JMP 0x00441732                      ; 004417f0
        ;   XREF to: 00441732 (UNCONDITIONAL_JUMP)  ; LAB_00441732

