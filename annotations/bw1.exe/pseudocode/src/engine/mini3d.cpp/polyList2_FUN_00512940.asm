; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_polyList2_FUN_00512940(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d224b4
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c8345c
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_mini3d.cpp_updateRenderState_FUN_00516c60
;   engine_mini3d.cpp_updateTransform_FUN_005124f0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00512940
        ;   Label: engine_mini3d.cpp_polyList2_FUN_00512940
    PUSH EBP                            ; 00512941
    MOV EAX,dword ptr [ESP + 0x18]      ; 00512942
    MOV EDX,dword ptr [0x01e7dac8]      ; 00512946 | DAT_01e7dac8
    MOV ECX,dword ptr [0x01d224b4]      ; 0051294c | DAT_01d224b4
    ADD EDX,EAX                         ; 00512952
    ADD ECX,dword ptr [ESP + 0x10]      ; 00512954
    MOV dword ptr [0x01e7dac8],EDX      ; 00512958 | DAT_01e7dac8
    MOV dword ptr [0x01d224b4],ECX      ; 0051295e | DAT_01d224b4
    CALL engine_mini3d.cpp_updateTransform_FUN_005124f0 ; 00512964
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateTransform_FUN_005124f0()
    CALL engine_mini3d.cpp_updateRenderState_FUN_00516c60 ; 00512969
        ;   XREF to: 00516c60 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_updateRenderState_FUN_00516c60()
    CMP dword ptr [0x02c8345c],0x0      ; 0051296e | DAT_02c8345c
    JZ 0x005129aa                       ; 00512975
        ;   XREF to: 005129aa (CONDITIONAL_JUMP)  ; LAB_005129aa
    CMP dword ptr [0x01c50948],0x0      ; 00512977 | DAT_01c50948
    JZ 0x005129aa                       ; 0051297e
        ;   XREF to: 005129aa (CONDITIONAL_JUMP)  ; LAB_005129aa
    PUSH ESI                            ; 00512980
    PUSH EBX                            ; 00512981
    MOV EAX,[0x01c51d14]                ; 00512982 | DAT_01c51d14
    PUSH EAX                            ; 00512987
    MOV EDX,dword ptr [ESP + 0x24]      ; 00512988
    PUSH EDX                            ; 0051298c
    MOV ECX,dword ptr [ESP + 0x24]      ; 0051298d
    PUSH ECX                            ; 00512991
    MOV EBX,dword ptr [ESP + 0x24]      ; 00512992
    PUSH EBX                            ; 00512996
    MOV ESI,dword ptr [ESP + 0x24]      ; 00512997
    PUSH ESI                            ; 0051299b
    CALL dword ptr [0x02c8345c]         ; 0051299c | DAT_02c8345c
    ADD ESP,0x14                        ; 005129a2
    POP EBX                             ; 005129a5
    POP ESI                             ; 005129a6
    POP EBP                             ; 005129a7
    POP EDI                             ; 005129a8
    RET                                 ; 005129a9
    MOV EDI,0x5e8d13                    ; 005129aa
        ;   Label: LAB_005129aa
    MOV EBP,0x71f                       ; 005129af
    PUSH 0x5e8d28                       ; 005129b4
    MOV dword ptr [0x01d1d400],EDI      ; 005129b9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005129bf | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005129c5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005129ca
    POP EBP                             ; 005129cd
    POP EDI                             ; 005129ce
    RET                                 ; 005129cf

