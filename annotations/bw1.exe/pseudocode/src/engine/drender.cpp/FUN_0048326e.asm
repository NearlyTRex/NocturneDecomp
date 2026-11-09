; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0048326e(CDemonRenderer *param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0048326e
        ;   Label: engine_drender.cpp_FUN_0048326e
    PUSH EBX                            ; 00483270
    PUSH ESI                            ; 00483271
    PUSH EDI                            ; 00483272
    PUSH EBP                            ; 00483273
    MOV EBP,dword ptr [ESP + 0x14]      ; 00483274
    MOV ESI,dword ptr [ESP + 0x18]      ; 00483278
    CMP dword ptr [EBP + 0xc],0x0       ; 0048327c
    JNZ 0x004832f1                      ; 00483280
        ;   XREF to: 004832f1 (CONDITIONAL_JUMP)  ; LAB_004832f1
    MOV ECX,0xffffffff                  ; 00483286
        ;   Label: LAB_00483286
    MOV EBX,dword ptr [ESI + 0x4]       ; 0048328b
    XOR EDX,EDX                         ; 0048328e
    TEST EBX,EBX                        ; 00483290
    JLE 0x004832b0                      ; 00483292
        ;   XREF to: 004832b0 (CONDITIONAL_JUMP)  ; LAB_004832b0
    MOV EAX,ESI                         ; 00483294
    MOV EDI,dword ptr [EBP]             ; 00483296
    MOV EBX,dword ptr [EAX + 0x18]      ; 00483299
        ;   Label: LAB_00483299
    IMUL EBX,EBX,0x30                   ; 0048329c
    INC EDX                             ; 0048329f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 004832a0
    MOV EBX,dword ptr [ESI + 0x4]       ; 004832a4
    ADD EAX,0x4                         ; 004832a7
    CMP EDX,EBX                         ; 004832aa
    JL 0x00483299                       ; 004832ac
        ;   XREF to: 00483299 (CONDITIONAL_JUMP)  ; LAB_00483299
    MOV EAX,EAX                         ; 004832ae
    TEST ECX,0x80000000                 ; 004832b0
        ;   Label: LAB_004832b0
    JZ 0x004832bd                       ; 004832b6
        ;   XREF to: 004832bd (CONDITIONAL_JUMP)  ; LAB_004832bd
    TEST CL,0x1f                        ; 004832b8
    JNZ 0x004832ec                      ; 004832bb
        ;   XREF to: 004832ec (CONDITIONAL_JUMP)  ; LAB_004832ec
    CMP dword ptr [EBP + 0x4],0x0       ; 004832bd
        ;   Label: LAB_004832bd
    JZ 0x00483303                       ; 004832c1
        ;   XREF to: 00483303 (CONDITIONAL_JUMP)  ; LAB_00483303
    XOR EDX,EDX                         ; 004832c3
    MOV EAX,0x486e26                    ; 004832c5
    MOV dword ptr [0x01c51d14],EDX      ; 004832ca | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 004832d0 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 004832d6 | DAT_01c4f02c
    LEA EAX,[ESI + 0x18]                ; 004832db
        ;   Label: LAB_004832db
    PUSH EAX                            ; 004832de
    MOV EBX,dword ptr [ESI + 0x4]       ; 004832df
    PUSH EBX                            ; 004832e2
    PUSH EBP                            ; 004832e3
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 004832e4
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 004832e9
    POP EBP                             ; 004832ec
        ;   Label: LAB_004832ec
    POP EDI                             ; 004832ed
    POP ESI                             ; 004832ee
    POP EBX                             ; 004832ef
    RET                                 ; 004832f0
    LEA EAX,[ESI + 0x8]                 ; 004832f1
        ;   Label: LAB_004832f1
    PUSH EAX                            ; 004832f4
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004832f5
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004832fa
    TEST EAX,EAX                        ; 004832fd
    JZ 0x004832ec                       ; 004832ff
        ;   XREF to: 004832ec (CONDITIONAL_JUMP)  ; LAB_004832ec
    JMP 0x00483286                      ; 00483301
        ;   XREF to: 00483286 (UNCONDITIONAL_JUMP)  ; LAB_00483286
    CMP dword ptr [0x0061b4a0],0x20     ; 00483303 | DAT_0061b4a0
        ;   Label: LAB_00483303
    JNZ 0x0048332b                      ; 0048330a
        ;   XREF to: 0048332b (CONDITIONAL_JUMP)  ; LAB_0048332b
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0048330c | DAT_01c4f02c
    XOR EDI,EDI                         ; 00483316
        ;   Label: LAB_00483316
    MOV EBX,0x327                       ; 00483318
    MOV dword ptr [0x01c51d18],EDI      ; 0048331d | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EBX      ; 00483323 | DAT_01c51d14
    JMP 0x004832db                      ; 00483329
        ;   XREF to: 004832db (UNCONDITIONAL_JUMP)  ; LAB_004832db
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 0048332b | DAT_01c4f02c
        ;   Label: LAB_0048332b
    JMP 0x00483316                      ; 00483335
        ;   XREF to: 00483316 (UNCONDITIONAL_JUMP)  ; LAB_00483316

