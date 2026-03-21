; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_previewLodGeneration_FUN_0051d520 at 0051d69e
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;
; Called Functions:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e770
        ;   Label: shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770
    PUSH ESI                            ; 0051e771
    PUSH EDI                            ; 0051e772
    PUSH EBP                            ; 0051e773
    SUB ESP,0xc                         ; 0051e774
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051e777
    XOR EDX,EDX                         ; 0051e77b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051e77d
    MOV dword ptr [ESP + 0x4],EDX       ; 0051e780
    TEST ECX,ECX                        ; 0051e784
    JLE 0x0051e81f                      ; 0051e786
        ;   XREF to: 0051e81f (CONDITIONAL_JUMP)  ; LAB_0051e81f
    MOV dword ptr [ESP],EDX             ; 0051e78c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0051e78f
        ;   Label: LAB_0051e78f
    MOV EBX,dword ptr [ESP]             ; 0051e793
    MOV EAX,dword ptr [EAX + 0xc]       ; 0051e796
    ADD EBX,EAX                         ; 0051e799
    MOV EDX,dword ptr [EBX + 0x40]      ; 0051e79b
    MOV dword ptr [ESP + 0x8],EBX       ; 0051e79e
    TEST EDX,EDX                        ; 0051e7a2
    JNZ 0x0051e7fb                      ; 0051e7a4
        ;   XREF to: 0051e7fb (CONDITIONAL_JUMP)  ; LAB_0051e7fb
    MOV EBP,dword ptr [ESP + 0x8]       ; 0051e7a6
    XOR EBX,EBX                         ; 0051e7aa
    LEA EDI,[EBX + 0x1]                 ; 0051e7ac
        ;   Label: LAB_0051e7ac
    CMP EDI,0x3                         ; 0051e7af
    JL 0x0051e7b6                       ; 0051e7b2
        ;   XREF to: 0051e7b6 (CONDITIONAL_JUMP)  ; LAB_0051e7b6
    XOR EDI,EDI                         ; 0051e7b4
    MOV ECX,dword ptr [ESP + 0x8]       ; 0051e7b6
        ;   Label: LAB_0051e7b6
    SHL EDI,0x2                         ; 0051e7ba
    ADD EDI,ECX                         ; 0051e7bd
    IMUL ESI,dword ptr [EDI + 0x10],0x30 ; 0051e7bf
    MOV EAX,[0x006703ec]                ; 0051e7c3 | g_CDemonRendererPtr2
    JMP 0x0060de5d                      ; 0051e7c8
        ;   XREF to: 0060de5d (UNCONDITIONAL_JUMP)  ; LAB_0060de5d
    MOVSD.REP ES:EDI,ESI                ; 0051e7d6
        ;   Label: LAB_0051e7d6
    IMUL ESI,dword ptr [EBP + 0x10],0x30 ; 0051e7d8
    JMP 0x0060deb6                      ; 0051e7dc
        ;   XREF to: 0060deb6 (UNCONDITIONAL_JUMP)  ; LAB_0060deb6
    MOVSD.REP ES:EDI,ESI                ; 0051e7ec
        ;   Label: LAB_0051e7ec
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 0051e7ee
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0051e7f3
    CMP EBX,0x3                         ; 0051e7f6
    JL 0x0051e7ac                       ; 0051e7f9
        ;   XREF to: 0051e7ac (CONDITIONAL_JUMP)  ; LAB_0051e7ac
    MOV EBX,dword ptr [ESP]             ; 0051e7fb
        ;   Label: LAB_0051e7fb
    ADD EBX,0x8c                        ; 0051e7fe
    MOV ESI,dword ptr [ESP + 0x4]       ; 0051e804
    MOV dword ptr [ESP],EBX             ; 0051e808
    MOV EBX,dword ptr [ESP + 0x20]      ; 0051e80b
    INC ESI                             ; 0051e80f
    MOV EDI,dword ptr [EBX + 0x8]       ; 0051e810
    MOV dword ptr [ESP + 0x4],ESI       ; 0051e813
    CMP ESI,EDI                         ; 0051e817
    JL 0x0051e78f                       ; 0051e819
        ;   XREF to: 0051e78f (CONDITIONAL_JUMP)  ; LAB_0051e78f
    ADD ESP,0xc                         ; 0051e81f
        ;   Label: LAB_0051e81f
    POP EBP                             ; 0051e822
    POP EDI                             ; 0051e823
    POP ESI                             ; 0051e824
    POP EBX                             ; 0051e825
    RET                                 ; 0051e826
    SUB ESP,0x30                        ; 0060de5d
        ;   Label: LAB_0060de5d
    MOV ECX,0xc                         ; 0060de60
    MOV EAX,dword ptr [EAX]             ; 0060de65
    MOV EDI,ESP                         ; 0060de67
    ADD ESI,EAX                         ; 0060de69
    MOV ECX,dword ptr [ESI]             ; 0060de6b
    MOV dword ptr [EDI],ECX             ; 0060de6d
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060de6f
    MOV dword ptr [EDI + 0x4],ECX       ; 0060de72
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060de75
    MOV dword ptr [EDI + 0x8],ECX       ; 0060de78
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060de7b
    MOV dword ptr [EDI + 0xc],ECX       ; 0060de7e
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060de81
    MOV dword ptr [EDI + 0x10],ECX      ; 0060de84
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060de87
    MOV dword ptr [EDI + 0x14],ECX      ; 0060de8a
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060de8d
    MOV dword ptr [EDI + 0x18],ECX      ; 0060de90
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060de93
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060de96
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060de99
    MOV dword ptr [EDI + 0x20],ECX      ; 0060de9c
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060de9f
    MOV dword ptr [EDI + 0x24],ECX      ; 0060dea2
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060dea5
    MOV dword ptr [EDI + 0x28],ECX      ; 0060dea8
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060deab
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060deae
    JMP 0x0051e7d6                      ; 0060deb1
        ;   XREF to: 0051e7d6 (UNCONDITIONAL_JUMP)  ; LAB_0051e7d6
    SUB ESP,0x30                        ; 0060deb6
        ;   Label: LAB_0060deb6
    MOV ECX,0xc                         ; 0060deb9
    MOV EDI,ESP                         ; 0060debe
    ADD ESI,EAX                         ; 0060dec0
    ADD EBP,0x4                         ; 0060dec2
    INC EBX                             ; 0060dec5
    MOV ECX,dword ptr [ESI]             ; 0060dec6
    MOV dword ptr [EDI],ECX             ; 0060dec8
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060deca
    MOV dword ptr [EDI + 0x4],ECX       ; 0060decd
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060ded0
    MOV dword ptr [EDI + 0x8],ECX       ; 0060ded3
    MOV ECX,dword ptr [ESI + 0xc]       ; 0060ded6
    MOV dword ptr [EDI + 0xc],ECX       ; 0060ded9
    MOV ECX,dword ptr [ESI + 0x10]      ; 0060dedc
    MOV dword ptr [EDI + 0x10],ECX      ; 0060dedf
    MOV ECX,dword ptr [ESI + 0x14]      ; 0060dee2
    MOV dword ptr [EDI + 0x14],ECX      ; 0060dee5
    MOV ECX,dword ptr [ESI + 0x18]      ; 0060dee8
    MOV dword ptr [EDI + 0x18],ECX      ; 0060deeb
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0060deee
    MOV dword ptr [EDI + 0x1c],ECX      ; 0060def1
    MOV ECX,dword ptr [ESI + 0x20]      ; 0060def4
    MOV dword ptr [EDI + 0x20],ECX      ; 0060def7
    MOV ECX,dword ptr [ESI + 0x24]      ; 0060defa
    MOV dword ptr [EDI + 0x24],ECX      ; 0060defd
    MOV ECX,dword ptr [ESI + 0x28]      ; 0060df00
    MOV dword ptr [EDI + 0x28],ECX      ; 0060df03
    MOV ECX,dword ptr [ESI + 0x2c]      ; 0060df06
    MOV dword ptr [EDI + 0x2c],ECX      ; 0060df09
    JMP 0x0051e7ec                      ; 0060df0c
        ;   XREF to: 0051e7ec (UNCONDITIONAL_JUMP)  ; LAB_0051e7ec

