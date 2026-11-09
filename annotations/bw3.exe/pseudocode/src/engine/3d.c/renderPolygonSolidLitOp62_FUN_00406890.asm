; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonSolidLitOp62_FUN_00406890(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba38
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00406890
        ;   Label: engine_3d.c_renderPolygonSolidLitOp62_FUN_00406890
    PUSH EBP                            ; 00406891
    MOV EBP,dword ptr [ESP + 0xc]       ; 00406892
    LEA ESI,[EBP + 0x18]                ; 00406896
    LEA EAX,[EBP + 0x8]                 ; 00406899
    PUSH EAX                            ; 0040689c
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0040689d
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004068a2
    TEST EAX,EAX                        ; 004068a5
    JZ 0x0040698d                       ; 004068a7
        ;   XREF to: 0040698d (CONDITIONAL_JUMP)  ; LAB_0040698d
    CMP dword ptr [0x01c6e2a0],0x0      ; 004068ad | DAT_01c6e2a0
    JNZ 0x0040694a                      ; 004068b4
        ;   XREF to: 0040694a (CONDITIONAL_JUMP)  ; LAB_0040694a
    CMP dword ptr [0x005fba20],0x20     ; 004068ba | DAT_005fba20
    JNZ 0x0040693e                      ; 004068c1
        ;   XREF to: 0040693e (CONDITIONAL_JUMP)  ; LAB_0040693e
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004068c7 | DAT_01c6b5cc
    PUSH EDI                            ; 004068d1
        ;   Label: LAB_004068d1
    PUSH EBX                            ; 004068d2
    MOV EBX,0x13                        ; 004068d3
    PUSH EBP                            ; 004068d8
    MOV dword ptr [0x01c6e2b4],EBX      ; 004068d9 | DAT_01c6e2b4
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 004068df
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_004039d0()
    MOV EDI,dword ptr [0x005fba38]      ; 004068e4 | DAT_005fba38
    ADD ESP,0x4                         ; 004068ea
    CMP EDI,0xff                        ; 004068ed
    JL 0x00406971                       ; 004068f3
        ;   XREF to: 00406971 (CONDITIONAL_JUMP)  ; LAB_00406971
    XOR EAX,EAX                         ; 004068f9
        ;   Label: LAB_004068f9
    XOR EBX,EBX                         ; 004068fb
    XOR ECX,ECX                         ; 004068fd
    XOR EDX,EDX                         ; 004068ff
    MOV [0x01c6e2b8],EAX                ; 00406901 | DAT_01c6e2b8
    MOV EAX,ESI                         ; 00406906
    MOV ESI,dword ptr [EBP + 0x4]       ; 00406908
        ;   Label: LAB_00406908
    LEA ESI,[ESI + ESI*0x2]             ; 0040690b
    CMP ECX,ESI                         ; 0040690e
    JGE 0x0040697d                      ; 00406910
        ;   XREF to: 0040697d (CONDITIONAL_JUMP)  ; LAB_0040697d
    MOV ESI,dword ptr [EAX]             ; 00406912
    MOV dword ptr [EDX + 0x730418],ESI  ; 00406914 | DAT_00730418 | DAT_0073041c
    IMUL EDI,ESI,0x30                   ; 0040691a
    MOV ESI,dword ptr [EAX + 0x4]       ; 0040691d
    MOV dword ptr [EDI + 0x60b02c],ESI  ; 00406920 | DAT_0060b02c
    IMUL EDI,dword ptr [EAX],0x30       ; 00406926
    ADD EAX,0xc                         ; 00406929
    ADD EDX,0x4                         ; 0040692c
    INC EBX                             ; 0040692f
    MOV ESI,dword ptr [EAX + -0x4]      ; 00406930
    ADD ECX,0x3                         ; 00406933
    MOV dword ptr [EDI + 0x60b030],ESI  ; 00406936 | DAT_0060b030
    JMP 0x00406908                      ; 0040693c
        ;   XREF to: 00406908 (UNCONDITIONAL_JUMP)  ; LAB_00406908
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 0040693e | DAT_01c6b5cc
        ;   Label: LAB_0040693e
    JMP 0x004068d1                      ; 00406948
        ;   XREF to: 004068d1 (UNCONDITIONAL_JUMP)  ; LAB_004068d1
    CMP dword ptr [0x005fba20],0x20     ; 0040694a | DAT_005fba20
        ;   Label: LAB_0040694a
    JNZ 0x00406962                      ; 00406951
        ;   XREF to: 00406962 (CONDITIONAL_JUMP)  ; LAB_00406962
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00406953 | DAT_01c6b5cc
    JMP 0x004068d1                      ; 0040695d
        ;   XREF to: 004068d1 (UNCONDITIONAL_JUMP)  ; LAB_004068d1
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00406962 | DAT_01c6b5cc
        ;   Label: LAB_00406962
    JMP 0x004068d1                      ; 0040696c
        ;   XREF to: 004068d1 (UNCONDITIONAL_JUMP)  ; LAB_004068d1
    OR byte ptr [0x01c6e2b4],0x20       ; 00406971 | DAT_01c6e2b4
        ;   Label: LAB_00406971
    JMP 0x004068f9                      ; 00406978
        ;   XREF to: 004068f9 (UNCONDITIONAL_JUMP)  ; LAB_004068f9
    PUSH 0x730418                       ; 0040697d | DAT_00730418
        ;   Label: LAB_0040697d
    PUSH EBX                            ; 00406982
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00406983
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00406988
    POP EBX                             ; 0040698b
    POP EDI                             ; 0040698c
    MOV EDX,dword ptr [EBP + 0x4]       ; 0040698d
        ;   Label: LAB_0040698d
    LEA EAX,[EDX*0x4 + 0x0]             ; 00406990
    SUB EAX,EDX                         ; 00406997
    LEA EDX,[EAX*0x4 + 0x0]             ; 00406999
    LEA EAX,[EBP + 0x18]                ; 004069a0
    ADD EAX,EDX                         ; 004069a3
    POP EBP                             ; 004069a5
    POP ESI                             ; 004069a6
    RET                                 ; 004069a7

