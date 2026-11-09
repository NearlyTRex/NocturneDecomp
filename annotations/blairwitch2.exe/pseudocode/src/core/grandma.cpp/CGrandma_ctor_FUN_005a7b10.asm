; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGrandma * core_grandma_cpp_CGrandma_ctor_FUN_005a7b10(CGrandma *this_ptr)
;
; Parameters:
; CGrandma *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_grandma.cpp_factoryFuncGrandma_FUN_005a7ae0 at 005a7af3
;
; Called Functions:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
;   core_cloth.cpp_CClothList_add_FUN_005b15c0
;   core_grandma.cpp_FUN_005a7c20
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7b10
        ;   Label: core_grandma.cpp_CGrandma_ctor_FUN_005a7b10
    PUSH ESI                            ; 005a7b11
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a7b12
    PUSH EDX                            ; 005a7b16
    CALL core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 ; 005a7b17
        ;   XREF to: 005a47b0 (UNCONDITIONAL_CALL)  ; CBasicNPC * core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC * this_ptr)
    ADD ESP,0x4                         ; 005a7b1c
    PUSH 0x5f07e5                       ; 005a7b1f
    MOV EBX,EAX                         ; 005a7b24
    LEA ESI,[EAX + 0x2b4]               ; 005a7b26
    PUSH ESI                            ; 005a7b2c
    MOV dword ptr [EAX + 0x2b0],0x600104 ; 005a7b2d
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a7b37
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f800000 ; 005a7b3c
    MOV dword ptr [EBX + 0x1134c],0x3fc00000 ; 005a7b46
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a7b50
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a7b5a
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a7b64
    ADD ESP,0x8                         ; 005a7b6e
    MOV dword ptr [EBX + 0x1138c],0x1   ; 005a7b71
    PUSH 0x5f07f1                       ; 005a7b7b
    LEA ESI,[EBX + 0x2d0c]              ; 005a7b80
    MOV dword ptr [EBX + 0x11390],0x0   ; 005a7b86
    PUSH ESI                            ; 005a7b90
    MOV dword ptr [EBX + 0x11394],0x0   ; 005a7b91
    CALL core_cloth.cpp_CClothList_add_FUN_005b15c0 ; 005a7b9b
        ;   XREF to: 005b15c0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CClothList_add_FUN_005b15c0(CClothList * this_ptr, char * filename)
    ADD ESP,0x8                         ; 005a7ba0
    PUSH 0x0                            ; 005a7ba3
    PUSH 0x0                            ; 005a7ba5
    PUSH EBX                            ; 005a7ba7
    CALL core_grandma.cpp_FUN_005a7c20  ; 005a7ba8
        ;   XREF to: 005a7c20 (UNCONDITIONAL_CALL)  ; undefined core_grandma.cpp_FUN_005a7c20()
    ADD ESP,0xc                         ; 005a7bad
    PUSH 0x5f0802                       ; 005a7bb0
    LEA ESI,[EBX + 0x10af8]             ; 005a7bb5
    PUSH ESI                            ; 005a7bbb
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005a7bbc
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a7bc1
    PUSH ESI                            ; 005a7bc4
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005a7bc5
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    ADD ESP,0x4                         ; 005a7bca
    MOV EAX,EBX                         ; 005a7bcd
    POP ESI                             ; 005a7bcf
    POP EBX                             ; 005a7bd0
    RET                                 ; 005a7bd1

