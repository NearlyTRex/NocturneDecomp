; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl engine_3d_c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404040(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0070ca60
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404040
        ;   Label: engine_3d.c_renderPolygonTexturedUVLitPlaneMasked_FUN_00404040
    PUSH ESI                            ; 00404041
    PUSH EDI                            ; 00404042
    PUSH EBP                            ; 00404043
    MOV EBP,dword ptr [0x0070ca60]      ; 00404044 | DAT_0070ca60
    MOV EDI,dword ptr [ESP + 0x14]      ; 0040404a
    MOV EDX,dword ptr [0x01c38b40]      ; 0040404e | DAT_01c38b40
    LEA ESI,[EDI + 0x18]                ; 00404054
    TEST EDX,EDX                        ; 00404057
    JNZ 0x004040e3                      ; 00404059
        ;   XREF to: 004040e3 (CONDITIONAL_JUMP)  ; LAB_004040e3
    CMP dword ptr [0x006141c0],0x20     ; 0040405f | DAT_006141c0
    JNZ 0x004040d7                      ; 00404066
        ;   XREF to: 004040d7 (CONDITIONAL_JUMP)  ; LAB_004040d7
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404068 | DAT_01c35e6c
    MOV EAX,0x1                         ; 00404072
        ;   Label: LAB_00404072
    PUSH EDI                            ; 00404077
    XOR EDX,EDX                         ; 00404078
    XOR EBX,EBX                         ; 0040407a
    MOV [0x01c38b54],EAX                ; 0040407c | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 00404081 | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 00404087
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive * prim)
    MOV ECX,0x70ca98                    ; 0040408c
    ADD ESP,0x4                         ; 00404091
    MOV EAX,ESI                         ; 00404094
    MOV EDX,dword ptr [EDI + 0x4]       ; 00404096
        ;   Label: LAB_00404096
    LEA EDX,[EDX + EDX*0x2]             ; 00404099
    MOV EBP,dword ptr [0x0070ca60]      ; 0040409c | DAT_0070ca60
    CMP EBX,EDX                         ; 004040a2
    JGE 0x0040410a                      ; 004040a4
        ;   XREF to: 0040410a (CONDITIONAL_JUMP)  ; LAB_0040410a
    MOV EDX,dword ptr [EAX]             ; 004040a6
    ADD EDX,EBP                         ; 004040a8
    MOV dword ptr [ECX],EDX             ; 004040aa
    MOV EDX,dword ptr [EAX]             ; 004040ac
    ADD EDX,EBP                         ; 004040ae
    IMUL EDX,EDX,0x30                   ; 004040b0
    MOV ESI,dword ptr [EAX + 0x4]       ; 004040b3
    MOV dword ptr [EDX + 0x62202c],ESI  ; 004040b6
    MOV EDX,dword ptr [EAX]             ; 004040bc
    ADD EDX,EBP                         ; 004040be
    IMUL ESI,EDX,0x30                   ; 004040c0
    ADD EAX,0xc                         ; 004040c3
    ADD ECX,0x4                         ; 004040c6
    MOV EDX,dword ptr [EAX + -0x4]      ; 004040c9
    ADD EBX,0x3                         ; 004040cc
    MOV dword ptr [ESI + 0x622030],EDX  ; 004040cf
    JMP 0x00404096                      ; 004040d5
        ;   XREF to: 00404096 (UNCONDITIONAL_JUMP)  ; LAB_00404096
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004040d7 | DAT_01c35e6c
        ;   Label: LAB_004040d7
    JMP 0x00404072                      ; 004040e1
        ;   XREF to: 00404072 (UNCONDITIONAL_JUMP)  ; LAB_00404072
    CMP dword ptr [0x006141c0],0x20     ; 004040e3 | DAT_006141c0
        ;   Label: LAB_004040e3
    JNZ 0x004040fb                      ; 004040ea
        ;   XREF to: 004040fb (CONDITIONAL_JUMP)  ; LAB_004040fb
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004040ec | DAT_01c35e6c
    JMP 0x00404072                      ; 004040f6
        ;   XREF to: 00404072 (UNCONDITIONAL_JUMP)  ; LAB_00404072
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004040fb | DAT_01c35e6c
        ;   Label: LAB_004040fb
    JMP 0x00404072                      ; 00404105
        ;   XREF to: 00404072 (UNCONDITIONAL_JUMP)  ; LAB_00404072
    PUSH 0x70ca98                       ; 0040410a
        ;   Label: LAB_0040410a
    MOV ECX,dword ptr [EDI + 0x4]       ; 0040410f
    PUSH ECX                            ; 00404112
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404113
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    MOV EDX,dword ptr [EDI + 0x4]       ; 00404118
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040411b
    ADD EDI,0x18                        ; 00404122
    SUB EAX,EDX                         ; 00404125
    MOV EBP,dword ptr [0x0070ca60]      ; 00404127 | DAT_0070ca60
    SHL EAX,0x2                         ; 0040412d
    ADD ESP,0x8                         ; 00404130
    ADD EAX,EDI                         ; 00404133
    POP EBP                             ; 00404135
    POP EDI                             ; 00404136
    POP ESI                             ; 00404137
    POP EBX                             ; 00404138
    RET                                 ; 00404139

