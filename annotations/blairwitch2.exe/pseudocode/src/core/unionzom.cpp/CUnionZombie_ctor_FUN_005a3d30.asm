; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CUnionZombie * core_unionzom_cpp_CUnionZombie_ctor_FUN_005a3d30(CUnionZombie *this_ptr)
;
; Parameters:
; CUnionZombie *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_unionzom.cpp_factoryFuncUnionZombie_FUN_005a3d00 at 005a3d13
;
; Referenced Globals:
;   undefined4 DAT_005ff53c
;   undefined4 DAT_005ff540
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_unionzom.cpp_FUN_005a3fc0
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;   unkafter_basicene.cpp_FUN_0059e3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3d30
        ;   Label: core_unionzom.cpp_CUnionZombie_ctor_FUN_005a3d30
    PUSH ESI                            ; 005a3d31
    PUSH EDI                            ; 005a3d32
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a3d33
    PUSH EDX                            ; 005a3d37
    CALL unkafter_basicene.cpp_FUN_0059e3b0 ; 005a3d38
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e3b0()
    ADD ESP,0x4                         ; 005a3d3d
    PUSH 0x5f021f                       ; 005a3d40
    MOV EBX,EAX                         ; 005a3d45
    LEA ESI,[EAX + 0x2b4]               ; 005a3d47
    PUSH ESI                            ; 005a3d4d
    MOV dword ptr [EAX + 0x2b0],0x5ff554 ; 005a3d4e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a3d58
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x2814],0x0    ; 005a3d5d
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a3d67
    MOV dword ptr [EBX + 0x3434],0x3f333333 ; 005a3d71
    MOV dword ptr [EBX + 0x113c4],0x0   ; 005a3d7b
    MOV dword ptr [EBX + 0x1134c],0x40200000 ; 005a3d85
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a3d8f
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a3d99
    LEA EDI,[EBX + 0x113d4]             ; 005a3da3
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a3da9
    FLD float ptr [0x005ff53c]          ; 005a3db3 | DAT_005ff53c
    MOV dword ptr [EBX + 0x1138c],0x1   ; 005a3db9
    MOV ESI,0x5f0232                    ; 005a3dc3
    MOV dword ptr [EBX + 0x11418],0x1   ; 005a3dc8
    ADD ESP,0x8                         ; 005a3dd2
    FSTP float ptr [EBX + 0x11370]      ; 005a3dd5
    PUSH EDI                            ; 005a3ddb
    MOV AL,byte ptr [ESI]               ; 005a3ddc
        ;   Label: LAB_005a3ddc
    MOV byte ptr [EDI],AL               ; 005a3dde
    CMP AL,0x0                          ; 005a3de0
    JZ 0x005a3df4                       ; 005a3de2
        ;   XREF to: 005a3df4 (CONDITIONAL_JUMP)  ; LAB_005a3df4
    MOV AL,byte ptr [ESI + 0x1]         ; 005a3de4
    ADD ESI,0x2                         ; 005a3de7
    MOV byte ptr [EDI + 0x1],AL         ; 005a3dea
    ADD EDI,0x2                         ; 005a3ded
    CMP AL,0x0                          ; 005a3df0
    JNZ 0x005a3ddc                      ; 005a3df2
        ;   XREF to: 005a3ddc (CONDITIONAL_JUMP)  ; LAB_005a3ddc
    POP EDI                             ; 005a3df4
        ;   Label: LAB_005a3df4
    PUSH 0x0                            ; 005a3df5
    PUSH 0x0                            ; 005a3df7
    PUSH EBX                            ; 005a3df9
    MOV dword ptr [EBX + 0x11858],0x0   ; 005a3dfa
    CALL core_unionzom.cpp_FUN_005a3fc0 ; 005a3e04
        ;   XREF to: 005a3fc0 (UNCONDITIONAL_CALL)  ; undefined core_unionzom.cpp_FUN_005a3fc0()
    ADD ESP,0xc                         ; 005a3e09
    PUSH 0x5f0239                       ; 005a3e0c
    LEA ESI,[EBX + 0x10af8]             ; 005a3e11
    PUSH 0x5f0246                       ; 005a3e17
    FLD float ptr [0x005ff540]          ; 005a3e1c | DAT_005ff540
    PUSH ESI                            ; 005a3e22
    FSTP float ptr [EBX + 0x11394]      ; 005a3e23
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005a3e29
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a3e2e
    PUSH 0x5f0254                       ; 005a3e31
    PUSH ESI                            ; 005a3e36
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005a3e37
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a3e3c
    PUSH ESI                            ; 005a3e3f
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005a3e40
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    MOV dword ptr [EBX + 0x11430],0x0   ; 005a3e45
    ADD ESP,0x4                         ; 005a3e4f
    MOV dword ptr [EBX + 0x280c],0x1    ; 005a3e52
    MOV EAX,EBX                         ; 005a3e5c
    MOV dword ptr [EBX + 0x11348],0x1   ; 005a3e5e
    POP EDI                             ; 005a3e68
    POP ESI                             ; 005a3e69
    POP EBX                             ; 005a3e6a
    RET                                 ; 005a3e6b

