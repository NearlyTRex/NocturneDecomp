; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_renderBones_FUN_005426c0(CDeformableModel *this_ptr,CMatrix3x4f *bone_matrices)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; CMatrix3x4f *    Stack[0x8]:4   bone_matrices
;
; Referenced Globals:
;   undefined4 DAT_005fb998
;   undefined4 DAT_0060b280
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0
;   core_xform.cpp_FUN_00592720
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005426c0
        ;   Label: core_skeleton.cpp_CDeformableModel_renderBones_FUN_005426c0
    PUSH ESI                            ; 005426c1
    PUSH EDI                            ; 005426c2
    PUSH EBP                            ; 005426c3
    SUB ESP,0x30                        ; 005426c4
    MOV EDX,dword ptr [ESP + 0x44]      ; 005426c7
    PUSH EDX                            ; 005426cb
    CALL core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0 ; 005426cc
        ;   XREF to: 005415d0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel * this_ptr)
    ADD ESP,0x4                         ; 005426d1
    MOV EBX,dword ptr [EAX + 0x1d1f8]   ; 005426d4
    XOR ECX,ECX                         ; 005426da
    MOV dword ptr [ESP + 0x24],EAX      ; 005426dc
    MOV dword ptr [ESP + 0x28],ECX      ; 005426e0
    TEST EBX,EBX                        ; 005426e4
    JLE 0x00542797                      ; 005426e6
        ;   XREF to: 00542797 (CONDITIONAL_JUMP)  ; LAB_00542797
    LEA EBP,[EAX + 0x1d1fc]             ; 005426ec
    MOV EAX,dword ptr [ESP + 0x48]      ; 005426f2
    MOV dword ptr [ESP + 0x2c],EAX      ; 005426f6
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005426fa
        ;   Label: LAB_005426fa
    PUSH ECX                            ; 005426fe
    LEA ESI,[ESP + 0x1c]                ; 005426ff
    LEA EDI,[ESP + 0x10]                ; 00542703
    CALL core_xform.cpp_FUN_00592720    ; 00542707
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    LEA ESI,[ESP + 0x1c]                ; 0054270c
    ADD ESP,0x4                         ; 00542710
    MOV EBX,ESP                         ; 00542713
    MOVSD ES:EDI,ESI                    ; 00542715
    MOVSD ES:EDI,ESI                    ; 00542716
    MOVSD ES:EDI,ESI                    ; 00542717
    LEA EAX,[ESP + 0xc]                 ; 00542718
    MOV ESI,dword ptr [0x0060b280]      ; 0054271c | DAT_0060b280
    FLD float ptr [EAX]                 ; 00542722
    FMUL float ptr [0x005fb998]         ; 00542724 | DAT_005fb998
    FISTP dword ptr [EBX]               ; 0054272a
    FLD float ptr [EAX + 0x4]           ; 0054272c
    FMUL float ptr [0x005fb998]         ; 0054272f | DAT_005fb998
    FISTP dword ptr [EBX + 0x4]         ; 00542735
    FLD float ptr [EAX + 0x8]           ; 00542738
    FMUL float ptr [0x005fb998]         ; 0054273b | DAT_005fb998
    FISTP dword ptr [EBX + 0x8]         ; 00542741
    MOV EAX,ESP                         ; 00542744
    PUSH EAX                            ; 00542746
    MOV EAX,dword ptr [ESI]             ; 00542747
    ADD EAX,0xea5d0                     ; 00542749
    PUSH EAX                            ; 0054274e
    CALL engine_special.cpp_FUN_0055d723 ; 0054274f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x0060b280]                ; 00542754 | DAT_0060b280
    MOV EAX,dword ptr [EAX]             ; 00542759
    ADD ESP,0x8                         ; 0054275b
    MOV DL,byte ptr [EAX + 0xea5e3]     ; 0054275e
    ADD EAX,0xea5d0                     ; 00542764
    TEST DL,0x80                        ; 00542769
    JZ 0x0054279f                       ; 0054276c
        ;   XREF to: 0054279f (CONDITIONAL_JUMP)  ; LAB_0054279f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0054276e
        ;   Label: LAB_0054276e
    MOV EDI,dword ptr [ESP + 0x28]      ; 00542772
    MOV EBX,dword ptr [ESP + 0x24]      ; 00542776
    ADD EBP,0x24                        ; 0054277a
    ADD ESI,0x30                        ; 0054277d
    INC EDI                             ; 00542780
    MOV EDX,dword ptr [EBX + 0x1d1f8]   ; 00542781
    MOV dword ptr [ESP + 0x2c],ESI      ; 00542787
    MOV dword ptr [ESP + 0x28],EDI      ; 0054278b
    CMP EDI,EDX                         ; 0054278f
    JL 0x005426fa                       ; 00542791
        ;   XREF to: 005426fa (CONDITIONAL_JUMP)  ; LAB_005426fa
    ADD ESP,0x30                        ; 00542797
        ;   Label: LAB_00542797
    POP EBP                             ; 0054279a
    POP EDI                             ; 0054279b
    POP ESI                             ; 0054279c
    POP EBX                             ; 0054279d
    RET                                 ; 0054279e
    MOV EBX,dword ptr [EAX + 0x14]      ; 0054279f
        ;   Label: LAB_0054279f
    SAR EBX,0x10                        ; 005427a2
    MOV EAX,dword ptr [EAX + 0x10]      ; 005427a5
    PUSH EBX                            ; 005427a8
    SAR EAX,0x10                        ; 005427a9
    PUSH EAX                            ; 005427ac
    PUSH EBP                            ; 005427ad
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 005427ae
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005427b3
    JMP 0x0054276e                      ; 005427b6
        ;   XREF to: 0054276e (UNCONDITIONAL_JUMP)  ; LAB_0054276e

