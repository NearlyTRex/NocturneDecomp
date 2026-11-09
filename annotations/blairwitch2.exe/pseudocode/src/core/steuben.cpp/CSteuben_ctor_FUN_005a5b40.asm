; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSteuben * core_steuben_cpp_CSteuben_ctor_FUN_005a5b40(CSteuben *this_ptr)
;
; Parameters:
; CSteuben *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_steuben.cpp_factoryFuncSteuben_FUN_005a5b10 at 005a5b23
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
;   core_cloth.cpp_CClothList_add_FUN_005b15c0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   core_steuben.cpp_FUN_005a5c20
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5b40
        ;   Label: core_steuben.cpp_CSteuben_ctor_FUN_005a5b40
    PUSH ESI                            ; 005a5b41
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a5b42
    PUSH EDX                            ; 005a5b46
    CALL core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 ; 005a5b47
        ;   XREF to: 005a47b0 (UNCONDITIONAL_CALL)  ; CBasicNPC * core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a5b4c
    PUSH 0x5f05eb                       ; 005a5b4f
    MOV EBX,EAX                         ; 005a5b54
    LEA ESI,[EAX + 0x2b4]               ; 005a5b56
    PUSH ESI                            ; 005a5b5c
    MOV dword ptr [EAX + 0x2b0],0x5ffad4 ; 005a5b5d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a5b67
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f800000 ; 005a5b6c
    MOV dword ptr [EBX + 0x1134c],0x3fc00000 ; 005a5b76
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a5b80
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a5b8a
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a5b94
    ADD ESP,0x8                         ; 005a5b9e
    MOV dword ptr [EBX + 0x1138c],0x1   ; 005a5ba1
    PUSH 0x5f05f7                       ; 005a5bab
    LEA ESI,[EBX + 0x2d0c]              ; 005a5bb0
    MOV dword ptr [EBX + 0x11390],0x0   ; 005a5bb6
    PUSH ESI                            ; 005a5bc0
    MOV dword ptr [EBX + 0x11394],0x0   ; 005a5bc1
    CALL core_cloth.cpp_CClothList_add_FUN_005b15c0 ; 005a5bcb
        ;   XREF to: 005b15c0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_005b15c0(CClothList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a5bd0
    PUSH 0x0                            ; 005a5bd3
    PUSH 0x0                            ; 005a5bd5
    PUSH EBX                            ; 005a5bd7
    CALL core_steuben.cpp_FUN_005a5c20  ; 005a5bd8
        ;   XREF to: 005a5c20 (UNCONDITIONAL_CALL)  ; undefined core_steuben.cpp_FUN_005a5c20()
    ADD ESP,0xc                         ; 005a5bdd
    PUSH 0x5f0608                       ; 005a5be0
    LEA ESI,[EBX + 0x10af8]             ; 005a5be5
    PUSH ESI                            ; 005a5beb
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005a5bec
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a5bf1
    PUSH ESI                            ; 005a5bf4
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005a5bf5
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 005a5bfa
    MOV EAX,EBX                         ; 005a5bfd
    POP ESI                             ; 005a5bff
    POP EBX                             ; 005a5c00
    RET                                 ; 005a5c01

