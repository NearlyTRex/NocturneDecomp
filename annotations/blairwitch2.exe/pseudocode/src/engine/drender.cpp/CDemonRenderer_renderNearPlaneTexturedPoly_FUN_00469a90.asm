; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_00469a90(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
;
; Referenced Globals:
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

    PUSH EBX                            ; 00469a90
        ;   Label: engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_00469a90
    PUSH ESI                            ; 00469a91
    PUSH EDI                            ; 00469a92
    PUSH EBP                            ; 00469a93
    SUB ESP,0x4                         ; 00469a94
    MOV EBX,dword ptr [ESP + 0x18]      ; 00469a97
    CMP dword ptr [EBX + 0xc],0x0       ; 00469a9b
    JNZ 0x00469b51                      ; 00469a9f
        ;   XREF to: 00469b51 (CONDITIONAL_JUMP)  ; LAB_00469b51
    MOV ECX,0xffffffff                  ; 00469aa5
        ;   Label: LAB_00469aa5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00469aaa
    MOV dword ptr [ESP],ECX             ; 00469aae
    MOV ESI,dword ptr [EAX + 0x4]       ; 00469ab1
    XOR ECX,ECX                         ; 00469ab4
    TEST ESI,ESI                        ; 00469ab6
    JLE 0x00469af0                      ; 00469ab8
        ;   XREF to: 00469af0 (CONDITIONAL_JUMP)  ; LAB_00469af0
    XOR EDX,EDX                         ; 00469aba
    MOV ESI,dword ptr [EAX + 0x18]      ; 00469abc
        ;   Label: LAB_00469abc
    MOV dword ptr [EDX + 0x1ba5c84],ESI ; 00469abf
    IMUL ESI,ESI,0x30                   ; 00469ac5
    MOV EDI,dword ptr [EBX]             ; 00469ac8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 00469aca
    MOV EDI,dword ptr [ESP]             ; 00469ace
    ADD EDX,0x4                         ; 00469ad1
    AND EDI,ESI                         ; 00469ad4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00469ad6
    ADD EAX,0xc                         ; 00469ada
    INC ECX                             ; 00469add
    MOV EBP,dword ptr [ESI + 0x4]       ; 00469ade
    MOV dword ptr [ESP],EDI             ; 00469ae1
    CMP ECX,EBP                         ; 00469ae4
    JL 0x00469abc                       ; 00469ae6
        ;   XREF to: 00469abc (CONDITIONAL_JUMP)  ; LAB_00469abc
    LEA EAX,[EAX]                       ; 00469ae8
    MOV EDX,EDX                         ; 00469aee
    TEST byte ptr [ESP + 0x3],0x80      ; 00469af0
        ;   Label: LAB_00469af0
    JZ 0x00469afd                       ; 00469af5
        ;   XREF to: 00469afd (CONDITIONAL_JUMP)  ; LAB_00469afd
    TEST byte ptr [ESP],0x1f            ; 00469af7
    JNZ 0x00469b49                      ; 00469afb
        ;   XREF to: 00469b49 (CONDITIONAL_JUMP)  ; LAB_00469b49
    CMP dword ptr [EBX + 0x4],0x0       ; 00469afd
        ;   Label: LAB_00469afd
    JZ 0x00469b6a                       ; 00469b01
        ;   XREF to: 00469b6a (CONDITIONAL_JUMP)  ; LAB_00469b6a
    LEA EAX,[EAX]                       ; 00469b03
    LEA EDX,[EDX]                       ; 00469b09
    NOP                                 ; 00469b0f
    CMP dword ptr [EBX + 0x4],0x0       ; 00469b10
        ;   Label: LAB_00469b10
    JZ 0x00469bb1                       ; 00469b14
        ;   XREF to: 00469bb1 (CONDITIONAL_JUMP)  ; LAB_00469bb1
    XOR EDI,EDI                         ; 00469b1a
    MOV ESI,0x46e936                    ; 00469b1c
    MOV dword ptr [0x01c38b54],EDI      ; 00469b21 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDI      ; 00469b27 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ESI      ; 00469b2d | DAT_01c35e6c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00469b33
        ;   Label: LAB_00469b33
    PUSH 0x1ba5c84                      ; 00469b37
    MOV EDX,dword ptr [EAX + 0x4]       ; 00469b3c
    PUSH EDX                            ; 00469b3f
    PUSH EBX                            ; 00469b40
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 00469b41
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00469b46
    ADD ESP,0x4                         ; 00469b49
        ;   Label: LAB_00469b49
    POP EBP                             ; 00469b4c
    POP EDI                             ; 00469b4d
    POP ESI                             ; 00469b4e
    POP EBX                             ; 00469b4f
    RET                                 ; 00469b50
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00469b51
        ;   Label: LAB_00469b51
    ADD EAX,0x8                         ; 00469b55
    PUSH EAX                            ; 00469b58
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00469b59
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00469b5e
    TEST EAX,EAX                        ; 00469b61
    JZ 0x00469b49                       ; 00469b63
        ;   XREF to: 00469b49 (CONDITIONAL_JUMP)  ; LAB_00469b49
    JMP 0x00469aa5                      ; 00469b65
        ;   XREF to: 00469aa5 (UNCONDITIONAL_JUMP)  ; LAB_00469aa5
    MOV EDX,dword ptr [EBX + 0x20]      ; 00469b6a
        ;   Label: LAB_00469b6a
    TEST EDX,EDX                        ; 00469b6d
    JNZ 0x00469b10                      ; 00469b6f
        ;   XREF to: 00469b10 (CONDITIONAL_JUMP)  ; LAB_00469b10
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00469b71
    MOV ESI,dword ptr [EAX + 0x4]       ; 00469b75
    XOR ECX,ECX                         ; 00469b78
    TEST ESI,ESI                        ; 00469b7a
    JLE 0x00469b10                      ; 00469b7c
        ;   XREF to: 00469b10 (CONDITIONAL_JUMP)  ; LAB_00469b10
    MOV ESI,dword ptr [EDX + 0x1ba5c84] ; 00469b7e
        ;   Label: LAB_00469b7e
    IMUL ESI,ESI,0x30                   ; 00469b84
    MOV EDI,dword ptr [EBX]             ; 00469b87
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00469b89
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00469b8c
    MOV EDI,dword ptr [EBX]             ; 00469b90
    ADD EDI,ESI                         ; 00469b92
    MOV ESI,dword ptr [EAX + 0x20]      ; 00469b94
    MOV dword ptr [EDI + 0x1c],ESI      ; 00469b97
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00469b9a
    ADD EAX,0xc                         ; 00469b9e
    INC ECX                             ; 00469ba1
    MOV EDI,dword ptr [ESI + 0x4]       ; 00469ba2
    ADD EDX,0x4                         ; 00469ba5
    CMP ECX,EDI                         ; 00469ba8
    JL 0x00469b7e                       ; 00469baa
        ;   XREF to: 00469b7e (CONDITIONAL_JUMP)  ; LAB_00469b7e
    JMP 0x00469b10                      ; 00469bac
        ;   XREF to: 00469b10 (UNCONDITIONAL_JUMP)  ; LAB_00469b10
    MOV EDX,0xc1                        ; 00469bb1
        ;   Label: LAB_00469bb1
    MOV ECX,0x3                         ; 00469bb6
    MOV EAX,0x46f0c0                    ; 00469bbb
    MOV dword ptr [0x01c38b54],EDX      ; 00469bc0 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 00469bc6 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 00469bcc | DAT_01c35e6c
    JMP 0x00469b33                      ; 00469bd1
        ;   XREF to: 00469b33 (UNCONDITIONAL_JUMP)  ; LAB_00469b33

