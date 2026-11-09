; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_00469bdc(CDemonRenderer *param_1,int param_2)
;
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

    LEA EDX,[EDX]                       ; 00469bdc
        ;   Label: engine_drender.cpp_FUN_00469bdc
    PUSH EBX                            ; 00469be0
    PUSH ESI                            ; 00469be1
    PUSH EBP                            ; 00469be2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00469be3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00469be7
    CMP dword ptr [EBX + 0xc],0x0       ; 00469beb
    JNZ 0x00469c25                      ; 00469bef
        ;   XREF to: 00469c25 (CONDITIONAL_JUMP)  ; LAB_00469c25
    CMP dword ptr [EBX + 0x4],0x0       ; 00469bf1
        ;   Label: LAB_00469bf1
    JZ 0x00469c37                       ; 00469bf5
        ;   XREF to: 00469c37 (CONDITIONAL_JUMP)  ; LAB_00469c37
    XOR ECX,ECX                         ; 00469bf7
    MOV EDX,0x46e936                    ; 00469bf9
    MOV dword ptr [0x01c38b54],ECX      ; 00469bfe | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 00469c04 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EDX      ; 00469c0a | DAT_01c35e6c
    LEA EAX,[ESI + 0x18]                ; 00469c10
        ;   Label: LAB_00469c10
    PUSH EAX                            ; 00469c13
    MOV EBP,dword ptr [ESI + 0x4]       ; 00469c14
    PUSH EBP                            ; 00469c17
    PUSH EBX                            ; 00469c18
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 00469c19
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00469c1e
    POP EBP                             ; 00469c21
        ;   Label: LAB_00469c21
    POP ESI                             ; 00469c22
    POP EBX                             ; 00469c23
    RET                                 ; 00469c24
    LEA EAX,[ESI + 0x8]                 ; 00469c25
        ;   Label: LAB_00469c25
    PUSH EAX                            ; 00469c28
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00469c29
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00469c2e
    TEST EAX,EAX                        ; 00469c31
    JZ 0x00469c21                       ; 00469c33
        ;   XREF to: 00469c21 (CONDITIONAL_JUMP)  ; LAB_00469c21
    JMP 0x00469bf1                      ; 00469c35
        ;   XREF to: 00469bf1 (UNCONDITIONAL_JUMP)  ; LAB_00469bf1
    PUSH EDI                            ; 00469c37
        ;   Label: LAB_00469c37
    MOV EBP,0x1                         ; 00469c38
    MOV EAX,0x6                         ; 00469c3d
    MOV EDI,0x4722e9                    ; 00469c42
    MOV dword ptr [0x01c38b54],EBP      ; 00469c47 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 00469c4d | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EDI      ; 00469c52 | DAT_01c35e6c
    POP EDI                             ; 00469c58
    JMP 0x00469c10                      ; 00469c59
        ;   XREF to: 00469c10 (UNCONDITIONAL_JUMP)  ; LAB_00469c10

