; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0046ae40(CDemonRenderer *param_1,int param_2)
;
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

    PUSH EBX                            ; 0046ae40
        ;   Label: engine_drender.cpp_FUN_0046ae40
    PUSH ESI                            ; 0046ae41
    PUSH EDI                            ; 0046ae42
    PUSH EBP                            ; 0046ae43
    SUB ESP,0x4                         ; 0046ae44
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046ae47
    CMP dword ptr [EBX + 0xc],0x0       ; 0046ae4b
    JNZ 0x0046aeee                      ; 0046ae4f
        ;   XREF to: 0046aeee (CONDITIONAL_JUMP)  ; LAB_0046aeee
    MOV ECX,0xffffffff                  ; 0046ae55
        ;   Label: LAB_0046ae55
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046ae5a
    MOV dword ptr [ESP],ECX             ; 0046ae5e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046ae61
    XOR ECX,ECX                         ; 0046ae64
    TEST ESI,ESI                        ; 0046ae66
    JLE 0x0046aea0                      ; 0046ae68
        ;   XREF to: 0046aea0 (CONDITIONAL_JUMP)  ; LAB_0046aea0
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0046ae6a
    XOR EAX,EAX                         ; 0046ae6e
    MOV ESI,dword ptr [EDX + 0x18]      ; 0046ae70
        ;   Label: LAB_0046ae70
    MOV dword ptr [EAX + 0x1ba5c84],ESI ; 0046ae73
    IMUL ESI,ESI,0x30                   ; 0046ae79
    MOV EDI,dword ptr [EBX]             ; 0046ae7c
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046ae7e
    MOV EDI,dword ptr [ESP]             ; 0046ae82
    ADD EAX,0x4                         ; 0046ae85
    AND EDI,ESI                         ; 0046ae88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046ae8a
    ADD EDX,0xc                         ; 0046ae8e
    INC ECX                             ; 0046ae91
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046ae92
    MOV dword ptr [ESP],EDI             ; 0046ae95
    CMP ECX,EBP                         ; 0046ae98
    JL 0x0046ae70                       ; 0046ae9a
        ;   XREF to: 0046ae70 (CONDITIONAL_JUMP)  ; LAB_0046ae70
    LEA EAX,[EAX]                       ; 0046ae9c
    TEST byte ptr [ESP + 0x3],0x80      ; 0046aea0
        ;   Label: LAB_0046aea0
    JZ 0x0046aead                       ; 0046aea5
        ;   XREF to: 0046aead (CONDITIONAL_JUMP)  ; LAB_0046aead
    TEST byte ptr [ESP],0x1f            ; 0046aea7
    JNZ 0x0046aee6                      ; 0046aeab
        ;   XREF to: 0046aee6 (CONDITIONAL_JUMP)  ; LAB_0046aee6
    CMP dword ptr [EBX + 0x4],0x0       ; 0046aead
        ;   Label: LAB_0046aead
    JZ 0x0046af07                       ; 0046aeb1
        ;   XREF to: 0046af07 (CONDITIONAL_JUMP)  ; LAB_0046af07
    XOR ESI,ESI                         ; 0046aeb3
    MOV ECX,0x46e936                    ; 0046aeb5
    MOV dword ptr [0x01c38b54],ESI      ; 0046aeba | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ESI      ; 0046aec0 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ECX      ; 0046aec6 | DAT_01c35e6c
    LEA EAX,[EAX]                       ; 0046aecc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046aed0
        ;   Label: LAB_0046aed0
    PUSH 0x1ba5c84                      ; 0046aed4
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046aed9
    PUSH EDX                            ; 0046aedc
    PUSH EBX                            ; 0046aedd
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046aede
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046aee3
    ADD ESP,0x4                         ; 0046aee6
        ;   Label: LAB_0046aee6
    POP EBP                             ; 0046aee9
    POP EDI                             ; 0046aeea
    POP ESI                             ; 0046aeeb
    POP EBX                             ; 0046aeec
    RET                                 ; 0046aeed
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046aeee
        ;   Label: LAB_0046aeee
    ADD EAX,0x8                         ; 0046aef2
    PUSH EAX                            ; 0046aef5
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046aef6
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046aefb
    TEST EAX,EAX                        ; 0046aefe
    JZ 0x0046aee6                       ; 0046af00
        ;   XREF to: 0046aee6 (CONDITIONAL_JUMP)  ; LAB_0046aee6
    JMP 0x0046ae55                      ; 0046af02
        ;   XREF to: 0046ae55 (UNCONDITIONAL_JUMP)  ; LAB_0046ae55
    CMP dword ptr [0x006141c0],0x20     ; 0046af07 | DAT_006141c0
        ;   Label: LAB_0046af07
    JNZ 0x0046af81                      ; 0046af0e
        ;   XREF to: 0046af81 (CONDITIONAL_JUMP)  ; LAB_0046af81
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046af10 | DAT_01c35e6c
    MOV EDI,0x327                       ; 0046af1a
        ;   Label: LAB_0046af1a
    XOR EBP,EBP                         ; 0046af1f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046af21
    MOV dword ptr [0x01c38b58],EBP      ; 0046af24 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDI      ; 0046af2a | DAT_01c38b54
    TEST EAX,EAX                        ; 0046af30
    JNZ 0x0046aed0                      ; 0046af32
        ;   XREF to: 0046aed0 (CONDITIONAL_JUMP)  ; LAB_0046aed0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046af34
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046af38
    XOR ECX,ECX                         ; 0046af3b
    TEST EDX,EDX                        ; 0046af3d
    JLE 0x0046aed0                      ; 0046af3f
        ;   XREF to: 0046aed0 (CONDITIONAL_JUMP)  ; LAB_0046aed0
    MOV EDX,EAX                         ; 0046af41
    XOR ESI,ESI                         ; 0046af43
    MOV EDI,dword ptr [ESI + 0x1ba5c84] ; 0046af45
        ;   Label: LAB_0046af45
    LEA EAX,[EDI*0x4 + 0x0]             ; 0046af4b
    SUB EAX,EDI                         ; 0046af52
    MOV EBP,dword ptr [EBX]             ; 0046af54
    SHL EAX,0x4                         ; 0046af56
    MOV EDI,dword ptr [EDX + 0x1c]      ; 0046af59
    MOV dword ptr [EAX + EBP*0x1 + 0x18],EDI ; 0046af5c
    MOV EDI,dword ptr [EBX]             ; 0046af60
    ADD EDI,EAX                         ; 0046af62
    MOV EAX,dword ptr [EDX + 0x20]      ; 0046af64
    MOV dword ptr [EDI + 0x1c],EAX      ; 0046af67
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046af6a
    ADD EDX,0xc                         ; 0046af6e
    INC ECX                             ; 0046af71
    MOV EBP,dword ptr [EAX + 0x4]       ; 0046af72
    ADD ESI,0x4                         ; 0046af75
    CMP ECX,EBP                         ; 0046af78
    JL 0x0046af45                       ; 0046af7a
        ;   XREF to: 0046af45 (CONDITIONAL_JUMP)  ; LAB_0046af45
    JMP 0x0046aed0                      ; 0046af7c
        ;   XREF to: 0046aed0 (UNCONDITIONAL_JUMP)  ; LAB_0046aed0
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046af81 | DAT_01c35e6c
        ;   Label: LAB_0046af81
    JMP 0x0046af1a                      ; 0046af8b
        ;   XREF to: 0046af1a (UNCONDITIONAL_JUMP)  ; LAB_0046af1a

