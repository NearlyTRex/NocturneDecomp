; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0(int param_1)
;
;
; XREF[1]:
;   engine_3d.c_FUN_004079f0 at 00407b89
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca60
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38aec
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004046e0
        ;   Label: engine_3d.c_renderPolygonLitAlphaPlaneMaskedUVOp24_FUN_004046e0
    PUSH EDI                            ; 004046e1
    PUSH EBP                            ; 004046e2
    MOV EBP,dword ptr [0x0070ca60]      ; 004046e3 | DAT_0070ca60
    MOV EDI,dword ptr [ESP + 0x10]      ; 004046e9
    LEA ESI,[EDI + 0x18]                ; 004046ed
    LEA EAX,[EDI + 0x8]                 ; 004046f0
    PUSH EAX                            ; 004046f3
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 004046f4
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 004046f9
    TEST EAX,EAX                        ; 004046fc
    JNZ 0x00404722                      ; 004046fe
        ;   XREF to: 00404722 (CONDITIONAL_JUMP)  ; LAB_00404722
    MOV EDX,dword ptr [EDI + 0x4]       ; 00404700
        ;   Label: LAB_00404700
    LEA EAX,[EDX*0x4 + 0x0]             ; 00404703
    SUB EAX,EDX                         ; 0040470a
    LEA EDX,[EAX*0x4 + 0x0]             ; 0040470c
    LEA EAX,[EDI + 0x18]                ; 00404713
    MOV EBP,dword ptr [0x0070ca60]      ; 00404716 | DAT_0070ca60
    ADD EAX,EDX                         ; 0040471c
    POP EBP                             ; 0040471e
    POP EDI                             ; 0040471f
    POP ESI                             ; 00404720
    RET                                 ; 00404721
    PUSH EDI                            ; 00404722
        ;   Label: LAB_00404722
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 00404723
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_00403a20()
    MOV EDX,dword ptr [0x01c38aec]      ; 00404728 | DAT_01c38aec
    ADD ESP,0x4                         ; 0040472e
    TEST EDX,EDX                        ; 00404731
    JZ 0x004047f7                       ; 00404733
        ;   XREF to: 004047f7 (CONDITIONAL_JUMP)  ; LAB_004047f7
    MOV EDX,dword ptr [0x01c38b40]      ; 00404739 | DAT_01c38b40
    MOV EBP,dword ptr [0x0070ca60]      ; 0040473f | DAT_0070ca60
    TEST EDX,EDX                        ; 00404745
    JNZ 0x004047d0                      ; 00404747
        ;   XREF to: 004047d0 (CONDITIONAL_JUMP)  ; LAB_004047d0
    CMP dword ptr [0x006141c0],0x20     ; 0040474d | DAT_006141c0
    JNZ 0x004047c4                      ; 00404754
        ;   XREF to: 004047c4 (CONDITIONAL_JUMP)  ; LAB_004047c4
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404756 | DAT_01c35e6c
        ;   Label: LAB_00404756
    PUSH EBX                            ; 00404760
        ;   Label: LAB_00404760
    MOV EAX,0x1                         ; 00404761
    MOV EDX,0xd9                        ; 00404766
    MOV EBX,0x70ca98                    ; 0040476b | DAT_0070ca98
    XOR ECX,ECX                         ; 00404770
    MOV [0x01c38b58],EAX                ; 00404772 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDX      ; 00404777 | DAT_01c38b54
    MOV EAX,ESI                         ; 0040477d
    MOV EDX,dword ptr [EDI + 0x4]       ; 0040477f
        ;   Label: LAB_0040477f
    LEA EDX,[EDX + EDX*0x2]             ; 00404782
    MOV dword ptr [0x0070ca60],EBP      ; 00404785 | DAT_0070ca60
    CMP ECX,EDX                         ; 0040478b
    JGE 0x0040483b                      ; 0040478d
        ;   XREF to: 0040483b (CONDITIONAL_JUMP)  ; LAB_0040483b
    MOV EDX,dword ptr [EAX]             ; 00404793
    ADD EDX,EBP                         ; 00404795
    MOV dword ptr [EBX],EDX             ; 00404797 | DAT_0070ca98 | DAT_0070ca9c
    MOV EDX,dword ptr [EAX]             ; 00404799
    ADD EDX,EBP                         ; 0040479b
    IMUL EDX,EDX,0x30                   ; 0040479d
    MOV ESI,dword ptr [EAX + 0x4]       ; 004047a0
    MOV dword ptr [EDX + 0x62202c],ESI  ; 004047a3 | DAT_0062202c
    MOV EDX,dword ptr [EAX]             ; 004047a9
    ADD EDX,EBP                         ; 004047ab
    IMUL ESI,EDX,0x30                   ; 004047ad
    ADD EAX,0xc                         ; 004047b0
    ADD EBX,0x4                         ; 004047b3
    MOV EDX,dword ptr [EAX + -0x4]      ; 004047b6
    ADD ECX,0x3                         ; 004047b9
    MOV dword ptr [ESI + 0x622030],EDX  ; 004047bc | DAT_00622030
    JMP 0x0040477f                      ; 004047c2
        ;   XREF to: 0040477f (UNCONDITIONAL_JUMP)  ; LAB_0040477f
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004047c4 | DAT_01c35e6c
        ;   Label: LAB_004047c4
    JMP 0x00404760                      ; 004047ce
        ;   XREF to: 00404760 (UNCONDITIONAL_JUMP)  ; LAB_00404760
    CMP dword ptr [0x006141c0],0x20     ; 004047d0 | DAT_006141c0
        ;   Label: LAB_004047d0
    JNZ 0x004047e8                      ; 004047d7
        ;   XREF to: 004047e8 (CONDITIONAL_JUMP)  ; LAB_004047e8
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004047d9 | DAT_01c35e6c
    JMP 0x00404760                      ; 004047e3
        ;   XREF to: 00404760 (UNCONDITIONAL_JUMP)  ; LAB_00404760
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004047e8 | DAT_01c35e6c
        ;   Label: LAB_004047e8
    JMP 0x00404760                      ; 004047f2
        ;   XREF to: 00404760 (UNCONDITIONAL_JUMP)  ; LAB_00404760
    MOV ECX,dword ptr [0x01c38b40]      ; 004047f7 | DAT_01c38b40
        ;   Label: LAB_004047f7
    MOV EBP,dword ptr [0x0070ca60]      ; 004047fd | DAT_0070ca60
    TEST ECX,ECX                        ; 00404803
    JNZ 0x00404823                      ; 00404805
        ;   XREF to: 00404823 (CONDITIONAL_JUMP)  ; LAB_00404823
    CMP dword ptr [0x006141c0],0x20     ; 00404807 | DAT_006141c0
    JZ 0x00404756                       ; 0040480e
        ;   XREF to: 00404756 (CONDITIONAL_JUMP)  ; LAB_00404756
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404814 | DAT_01c35e6c
    JMP 0x00404760                      ; 0040481e
        ;   XREF to: 00404760 (UNCONDITIONAL_JUMP)  ; LAB_00404760
    CMP dword ptr [0x006141c0],0x20     ; 00404823 | DAT_006141c0
        ;   Label: LAB_00404823
    JNZ 0x004047e8                      ; 0040482a
        ;   XREF to: 004047e8 (CONDITIONAL_JUMP)  ; LAB_004047e8
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040482c | DAT_01c35e6c
    JMP 0x00404760                      ; 00404836
        ;   XREF to: 00404760 (UNCONDITIONAL_JUMP)  ; LAB_00404760
    PUSH 0x70ca98                       ; 0040483b | DAT_0070ca98
        ;   Label: LAB_0040483b
    MOV ECX,dword ptr [EDI + 0x4]       ; 00404840
    PUSH ECX                            ; 00404843
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404844
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404849
    POP EBX                             ; 0040484c
    JMP 0x00404700                      ; 0040484d
        ;   XREF to: 00404700 (UNCONDITIONAL_JUMP)  ; LAB_00404700

