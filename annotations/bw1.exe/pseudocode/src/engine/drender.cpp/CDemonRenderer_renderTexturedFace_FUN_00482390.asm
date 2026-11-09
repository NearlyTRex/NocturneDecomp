; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedFace_FUN_00482390(CDemonRenderer *this_ptr,SInputFace *face,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face
; int              Stack[0xc]:4   render_flags
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 at 00484ec4
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0 at 00484557
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
;   undefined4 DAT_01bc1248
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00482390
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_00482390
    MOV ECX,dword ptr [ESP + 0x8]       ; 00482391
    MOV EBP,dword ptr [ESP + 0xc]       ; 00482395
    CMP dword ptr [ESP + 0x10],-0x1     ; 00482399
    JZ 0x00482405                       ; 0048239e
        ;   XREF to: 00482405 (CONDITIONAL_JUMP)  ; LAB_00482405
    CMP dword ptr [ECX + 0x1c],0x0      ; 004823a0
        ;   Label: LAB_004823a0
    JNZ 0x0048240f                      ; 004823a4
        ;   XREF to: 0048240f (CONDITIONAL_JUMP)  ; LAB_0048240f
    PUSH EBX                            ; 004823a6
    CMP dword ptr [ECX + 0x4],0x0       ; 004823a7
    JZ 0x00482420                       ; 004823ab
        ;   XREF to: 00482420 (CONDITIONAL_JUMP)  ; LAB_00482420
    XOR EAX,EAX                         ; 004823ad
        ;   Label: LAB_004823ad
    MOV AX,word ptr [EBP]               ; 004823af
    MOV [0x01bc1240],EAX                ; 004823b3 | DAT_01bc1240
    XOR EAX,EAX                         ; 004823b8
    MOV AX,word ptr [EBP + 0x2]         ; 004823ba
    MOV [0x01bc1244],EAX                ; 004823be | DAT_01bc1244
    XOR EAX,EAX                         ; 004823c3
    MOV AX,word ptr [EBP + 0x4]         ; 004823c5
    MOV EBX,dword ptr [ECX + 0x4]       ; 004823c9
    MOV [0x01bc1248],EAX                ; 004823cc | DAT_01bc1248
    TEST EBX,EBX                        ; 004823d1
    JZ 0x00482461                       ; 004823d3
        ;   XREF to: 00482461 (CONDITIONAL_JUMP)  ; LAB_00482461
    XOR EBX,EBX                         ; 004823d9
    MOV EDX,0x486e26                    ; 004823db
    MOV dword ptr [0x01c51d14],EBX      ; 004823e0 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBX      ; 004823e6 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDX      ; 004823ec | DAT_01c4f02c
    PUSH 0x1bc1240                      ; 004823f2 | DAT_01bc1240
    PUSH 0x3                            ; 004823f7
    PUSH ECX                            ; 004823f9
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 004823fa
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 004823ff
    POP EBX                             ; 00482402
    POP EBP                             ; 00482403
    RET                                 ; 00482404
    MOV dword ptr [ESP + 0x10],0x2cd    ; 00482405
        ;   Label: LAB_00482405
    JMP 0x004823a0                      ; 0048240d
        ;   XREF to: 004823a0 (UNCONDITIONAL_JUMP)  ; LAB_004823a0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0048240f
        ;   Label: LAB_0048240f
    PUSH EDX                            ; 00482413
    PUSH EBP                            ; 00482414
    PUSH ECX                            ; 00482415
    CALL engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20 ; 00482416
        ;   XREF to: 00484c20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureFace_FUN_00484c20(CDemonRenderer * this_ptr, STrianglePackedIndices * triangle_indices, int render_flags)
    ADD ESP,0xc                         ; 0048241b
    POP EBP                             ; 0048241e
    RET                                 ; 0048241f
    CMP dword ptr [ECX + 0x20],0x0      ; 00482420
        ;   Label: LAB_00482420
    JNZ 0x004823ad                      ; 00482424
        ;   XREF to: 004823ad (CONDITIONAL_JUMP)  ; LAB_004823ad
    PUSH EDI                            ; 00482426
    PUSH ESI                            ; 00482427
    MOV EAX,EBP                         ; 00482428
    LEA EDI,[EBP + 0x6]                 ; 0048242a
    XOR EDX,EDX                         ; 0048242d
        ;   Label: LAB_0048242d
    MOV DX,word ptr [EAX]               ; 0048242f
    IMUL EDX,EDX,0x30                   ; 00482432
    XOR ESI,ESI                         ; 00482435
    MOV SI,word ptr [EAX + 0x6]         ; 00482437
    MOV EBX,dword ptr [ECX]             ; 0048243b
    SHL ESI,0x8                         ; 0048243d
    MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI ; 00482440
    XOR EBX,EBX                         ; 00482444
    MOV BX,word ptr [EAX + 0xc]         ; 00482446
    MOV ESI,dword ptr [ECX]             ; 0048244a
    SHL EBX,0x8                         ; 0048244c
    ADD EAX,0x2                         ; 0048244f
    MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX ; 00482452
    CMP EAX,EDI                         ; 00482456
    JNZ 0x0048242d                      ; 00482458
        ;   XREF to: 0048242d (CONDITIONAL_JUMP)  ; LAB_0048242d
    POP ESI                             ; 0048245a
    POP EDI                             ; 0048245b
    JMP 0x004823ad                      ; 0048245c
        ;   XREF to: 004823ad (UNCONDITIONAL_JUMP)  ; LAB_004823ad
    CMP dword ptr [0x0061b4a0],0x20     ; 00482461 | DAT_0061b4a0
        ;   Label: LAB_00482461
    JNZ 0x0048249a                      ; 00482468
        ;   XREF to: 0048249a (CONDITIONAL_JUMP)  ; LAB_0048249a
    MOV dword ptr [0x01c4f02c],0x57de01 ; 0048246a | DAT_01c4f02c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00482474
        ;   Label: LAB_00482474
    MOV [0x01c51d14],EAX                ; 00482478 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],0x6      ; 0048247d | DAT_01c51d18
    PUSH 0x1bc1240                      ; 00482487 | DAT_01bc1240
    PUSH 0x3                            ; 0048248c
    PUSH ECX                            ; 0048248e
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 0048248f
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482494
    POP EBX                             ; 00482497
    POP EBP                             ; 00482498
    RET                                 ; 00482499
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 0048249a | DAT_01c4f02c
        ;   Label: LAB_0048249a
    JMP 0x00482474                      ; 004824a4
        ;   XREF to: 00482474 (UNCONDITIONAL_JUMP)  ; LAB_00482474

