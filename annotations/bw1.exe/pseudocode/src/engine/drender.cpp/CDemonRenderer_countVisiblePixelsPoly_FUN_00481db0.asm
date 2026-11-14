; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_setdir.cpp_FUN_00559c10 at 00559c63
;   core_setdir.cpp_FUN_00559f80 at 0055ae07
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005db315
;   TerminatedCString s_Can_t_use_demonZFacetCou_005db32b
;   undefined4 DAT_01bc1238
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481db0
        ;   Label: engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_00481db0
    PUSH ESI                            ; 00481db1
    PUSH EDI                            ; 00481db2
    PUSH EBP                            ; 00481db3
    SUB ESP,0x4                         ; 00481db4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00481db7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00481dbb
    XOR EDX,EDX                         ; 00481dbf
    MOV ECX,dword ptr [EBP + 0xc]       ; 00481dc1
    MOV dword ptr [0x01bc1238],EDX      ; 00481dc4 | DAT_01bc1238
    TEST ECX,ECX                        ; 00481dca
    JNZ 0x00481e65                      ; 00481dcc
        ;   XREF to: 00481e65 (CONDITIONAL_JUMP)  ; LAB_00481e65
    MOV EBX,0xffffffff                  ; 00481dd2
        ;   Label: LAB_00481dd2
    MOV ESI,dword ptr [EDI + 0x4]       ; 00481dd7
    XOR EAX,EAX                         ; 00481dda
    MOV dword ptr [ESP],EBX             ; 00481ddc
    TEST ESI,ESI                        ; 00481ddf
    JLE 0x00481e10                      ; 00481de1
        ;   XREF to: 00481e10 (CONDITIONAL_JUMP)  ; LAB_00481e10
    MOV EDX,EDI                         ; 00481de3
    XOR ECX,ECX                         ; 00481de5
    MOV EBX,dword ptr [EDX + 0x18]      ; 00481de7
        ;   Label: LAB_00481de7
    MOV dword ptr [ECX + 0x1bc1240],EBX ; 00481dea | DAT_01bc1240 | DAT_01bc1244
    IMUL ESI,EBX,0x30                   ; 00481df0
    MOV EBX,dword ptr [EBP]             ; 00481df3
    ADD ECX,0x4                         ; 00481df6
    ADD EDX,0xc                         ; 00481df9
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x10] ; 00481dfc
    MOV ESI,dword ptr [ESP]             ; 00481e00
    INC EAX                             ; 00481e03
    AND ESI,EBX                         ; 00481e04
    MOV EBX,dword ptr [EDI + 0x4]       ; 00481e06
    MOV dword ptr [ESP],ESI             ; 00481e09
    CMP EAX,EBX                         ; 00481e0c
    JL 0x00481de7                       ; 00481e0e
        ;   XREF to: 00481de7 (CONDITIONAL_JUMP)  ; LAB_00481de7
    TEST byte ptr [ESP + 0x3],0x80      ; 00481e10
        ;   Label: LAB_00481e10
    JZ 0x00481e1d                       ; 00481e15
        ;   XREF to: 00481e1d (CONDITIONAL_JUMP)  ; LAB_00481e1d
    TEST byte ptr [ESP],0x1f            ; 00481e17
    JNZ 0x00481e7b                      ; 00481e1b
        ;   XREF to: 00481e7b (CONDITIONAL_JUMP)  ; LAB_00481e7b
    CMP dword ptr [EBP + 0x4],0x0       ; 00481e1d
        ;   Label: LAB_00481e1d
    JZ 0x00481e7f                       ; 00481e21
        ;   XREF to: 00481e7f (CONDITIONAL_JUMP)  ; LAB_00481e7f
    MOV EBX,0x5db315                    ; 00481e23 | = "..\\engine\\drender.cpp"
    MOV ESI,0x29d                       ; 00481e28
    PUSH 0x5db32b                       ; 00481e2d | = "Can't use demonZFacetCount in shadow ..."
    MOV dword ptr [0x01d1d400],EBX      ; 00481e32 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00481e38 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00481e3e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00481e43
    PUSH 0x1bc1240                      ; 00481e46 | DAT_01bc1240
        ;   Label: LAB_00481e46
    MOV EAX,dword ptr [EDI + 0x4]       ; 00481e4b
    PUSH EAX                            ; 00481e4e
    PUSH EBP                            ; 00481e4f
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00481e50
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    MOV EAX,[0x01bc1238]                ; 00481e55 | DAT_01bc1238
    ADD ESP,0xc                         ; 00481e5a
    ADD ESP,0x4                         ; 00481e5d
        ;   Label: LAB_00481e5d
    POP EBP                             ; 00481e60
    POP EDI                             ; 00481e61
    POP ESI                             ; 00481e62
    POP EBX                             ; 00481e63
    RET                                 ; 00481e64
    LEA EAX,[EDI + 0x8]                 ; 00481e65
        ;   Label: LAB_00481e65
    PUSH EAX                            ; 00481e68
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00481e69
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00481e6e
    TEST EAX,EAX                        ; 00481e71
    JNZ 0x00481dd2                      ; 00481e73
        ;   XREF to: 00481dd2 (CONDITIONAL_JUMP)  ; LAB_00481dd2
    JMP 0x00481e5d                      ; 00481e79
        ;   XREF to: 00481e5d (UNCONDITIONAL_JUMP)  ; LAB_00481e5d
    XOR EAX,EAX                         ; 00481e7b
        ;   Label: LAB_00481e7b
    JMP 0x00481e5d                      ; 00481e7d
        ;   XREF to: 00481e5d (UNCONDITIONAL_JUMP)  ; LAB_00481e5d
    MOV EDX,0xc0                        ; 00481e7f
        ;   Label: LAB_00481e7f
    MOV ECX,0x6                         ; 00481e84
    MOV EAX,0x487425                    ; 00481e89
    MOV dword ptr [0x01c51d14],EDX      ; 00481e8e | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 00481e94 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 00481e9a | DAT_01c4f02c
    JMP 0x00481e46                      ; 00481e9f
        ;   XREF to: 00481e46 (UNCONDITIONAL_JUMP)  ; LAB_00481e46

