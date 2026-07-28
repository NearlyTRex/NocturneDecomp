; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00457120(CDemonPart *this_ptr)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dpart.cpp_CDemonPart_loadFromFile_FUN_004571f0 at 00457441
;
; Called Functions:
;   engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00457120
        ;   Label: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00457120
    PUSH EDI                            ; 00457121
    PUSH EBP                            ; 00457122
    SUB ESP,0x3c                        ; 00457123
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00457126
    MOV EDX,dword ptr [ESI + 0x24]      ; 0045712a
    XOR EDI,EDI                         ; 0045712d
    TEST EDX,EDX                        ; 0045712f
    JLE 0x004571e2                      ; 00457131
        ;   XREF to: 004571e2 (CONDITIONAL_JUMP)  ; LAB_004571e2
    PUSH EBX                            ; 00457137
    XOR EBX,EBX                         ; 00457138
    MOV dword ptr [ESP + 0x8],0x3       ; 0045713a
        ;   Label: LAB_0045713a
    MOV EAX,dword ptr [ESI + 0x34]      ; 00457142
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00457145
    MOV dword ptr [ESP + 0xc],EAX       ; 00457148
    MOV EAX,dword ptr [ESI + 0x34]      ; 0045714c
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0045714f
    MOV dword ptr [ESP + 0x10],EAX      ; 00457153
    MOV EAX,dword ptr [ESI + 0x34]      ; 00457157
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 0045715a
    MOV dword ptr [ESP + 0x14],EAX      ; 0045715e
    MOV EAX,dword ptr [ESI + 0x34]      ; 00457162
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 00457165
    MOV dword ptr [ESP + 0x18],EAX      ; 00457169
    MOV EAX,dword ptr [ESI + 0x34]      ; 0045716d
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 00457170
    MOV dword ptr [ESP + 0x1c],EAX      ; 00457174
    MOV EAX,dword ptr [ESI + 0x34]      ; 00457178
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14] ; 0045717b
    MOV dword ptr [ESP + 0x28],EAX      ; 0045717f
    MOV EAX,dword ptr [ESI + 0x34]      ; 00457183
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x18] ; 00457186
    MOV dword ptr [ESP + 0x34],EAX      ; 0045718a
    LEA EAX,[ESP + 0x4]                 ; 0045718e
    PUSH EAX                            ; 00457192
    MOV EBP,dword ptr [ESI + 0x2c]      ; 00457193
    PUSH EBP                            ; 00457196
    CALL engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920 ; 00457197
        ;   XREF to: 004c3920 (UNCONDITIONAL_CALL)  ; void engine_keyframe.c_calculateSurfaceNormal_FUN_004c3920(CVector3i * vertex_data, SMRGLPrimitiveTriangle * texture)
    MOV EAX,dword ptr [ESI + 0x34]      ; 0045719c
    ADD ESP,0x8                         ; 0045719f
    LEA EDX,[EAX + EBX*0x1]             ; 004571a2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004571a5
    MOV dword ptr [EDX],EAX             ; 004571a9
    MOV EAX,dword ptr [ESI + 0x34]      ; 004571ab
    LEA EDX,[EAX + EBX*0x1]             ; 004571ae
    MOV EAX,dword ptr [ESP + 0x10]      ; 004571b1
    MOV dword ptr [EDX + 0x4],EAX       ; 004571b5
    MOV EAX,dword ptr [ESI + 0x34]      ; 004571b8
    LEA EDX,[EAX + EBX*0x1]             ; 004571bb
    MOV EAX,dword ptr [ESP + 0x14]      ; 004571be
    MOV dword ptr [EDX + 0x8],EAX       ; 004571c2
    MOV EAX,dword ptr [ESI + 0x34]      ; 004571c5
    LEA EDX,[EAX + EBX*0x1]             ; 004571c8
    MOV EAX,dword ptr [ESP + 0x18]      ; 004571cb
    MOV dword ptr [EDX + 0xc],EAX       ; 004571cf
    INC EDI                             ; 004571d2
    MOV EAX,dword ptr [ESI + 0x24]      ; 004571d3
    ADD EBX,0x20                        ; 004571d6
    CMP EDI,EAX                         ; 004571d9
    JL 0x0045713a                       ; 004571db
        ;   XREF to: 0045713a (CONDITIONAL_JUMP)  ; LAB_0045713a
    POP EBX                             ; 004571e1
    ADD ESP,0x3c                        ; 004571e2
        ;   Label: LAB_004571e2
    POP EBP                             ; 004571e5
    POP EDI                             ; 004571e6
    POP ESI                             ; 004571e7
    RET                                 ; 004571e8

