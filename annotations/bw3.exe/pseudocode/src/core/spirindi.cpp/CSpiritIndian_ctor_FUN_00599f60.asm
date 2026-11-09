; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpiritIndian * core_spirindi_cpp_CSpiritIndian_ctor_FUN_00599f60(CSpiritIndian *this_ptr)
;
; Parameters:
; CSpiritIndian *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spirindi.cpp_factoryFuncSpiritIndian_FUN_00599f30 at 00599f43
;
; Called Functions:
;   core_actor.cpp_FUN_0040ce40
;   core_cloth.cpp_CClothList_ctor_FUN_0043f8c0
;   core_morph.cpp_CMorph_ctor_FUN_004fa8a0
;   core_npc.cpp_CNPC_ctor_FUN_00508f40
;   core_path.cpp_CPathMap_ctor_FUN_0050acc0
;   core_skeleton.cpp_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599f60
        ;   Label: core_spirindi.cpp_CSpiritIndian_ctor_FUN_00599f60
    PUSH ESI                            ; 00599f61
    PUSH EDI                            ; 00599f62
    SUB ESP,0x4                         ; 00599f63
    MOV EBX,dword ptr [ESP + 0x14]      ; 00599f66
    PUSH EBX                            ; 00599f6a
    CALL core_npc.cpp_CNPC_ctor_FUN_00508f40 ; 00599f6b
        ;   XREF to: 00508f40 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00508f40(CNPC * this_ptr)
    ADD ESP,0x4                         ; 00599f70
    ADD EAX,0x206c8                     ; 00599f73
    PUSH EAX                            ; 00599f78
    CALL core_path.cpp_CPathMap_ctor_FUN_0050acc0 ; 00599f79
        ;   XREF to: 0050acc0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_0050acc0(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 00599f7e
    ADD EAX,0x138dc                     ; 00599f81
    PUSH EAX                            ; 00599f86
    CALL core_cloth.cpp_CClothList_ctor_FUN_0043f8c0 ; 00599f87
        ;   XREF to: 0043f8c0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_0043f8c0(CClothList * this_ptr)
    ADD ESP,0x4                         ; 00599f8c
    ADD EAX,0x1d0                       ; 00599f8f
    PUSH EAX                            ; 00599f94
    CALL core_morph.cpp_CMorph_ctor_FUN_004fa8a0 ; 00599f95
        ;   XREF to: 004fa8a0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004fa8a0(CMorph * this_ptr)
    LEA EBX,[EAX + 0xfffcbe8c]          ; 00599f9a
    MOV dword ptr [EBX + 0x154],0x5e7e94 ; 00599fa0
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 00599faa
    ADD ESP,0x4                         ; 00599fb4
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 00599fb7
    PUSH 0x3f8ccccd                     ; 00599fc1
    MOV dword ptr [EBX + 0x327c],0x3fcccccd ; 00599fc6
    PUSH 0x3f666666                     ; 00599fd0
    MOV dword ptr [EBX + 0x3280],0xc479c000 ; 00599fd5
    CALL core_actor.cpp_FUN_0040ce40    ; 00599fdf
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 00599fe4
    FLD float ptr [ESP + 0x8]           ; 00599fe8
    ADD ESP,0x8                         ; 00599fec
    PUSH 0x5d9a27                       ; 00599fef
    LEA EAX,[EBX + 0x158]               ; 00599ff4
    MOV ESI,0x5d9a39                    ; 00599ffa
    PUSH EAX                            ; 00599fff
    FSTP float ptr [EBX + 0x34168]      ; 0059a000
    CALL core_skeleton.cpp_FUN_0054eae0 ; 0059a006
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    ADD ESP,0x8                         ; 0059a00b
    LEA EDI,[EBX + 0x33fa8]             ; 0059a00e
    MOV dword ptr [EBX + 0x33fa4],0x1   ; 0059a014
    PUSH EDI                            ; 0059a01e
    MOV AL,byte ptr [ESI]               ; 0059a01f
        ;   Label: LAB_0059a01f
    MOV byte ptr [EDI],AL               ; 0059a021
    CMP AL,0x0                          ; 0059a023
    JZ 0x0059a037                       ; 0059a025
        ;   XREF to: 0059a037 (CONDITIONAL_JUMP)  ; LAB_0059a037
    MOV AL,byte ptr [ESI + 0x1]         ; 0059a027
    ADD ESI,0x2                         ; 0059a02a
    MOV byte ptr [EDI + 0x1],AL         ; 0059a02d
    ADD EDI,0x2                         ; 0059a030
    CMP AL,0x0                          ; 0059a033
    JNZ 0x0059a01f                      ; 0059a035
        ;   XREF to: 0059a01f (CONDITIONAL_JUMP)  ; LAB_0059a01f
    POP EDI                             ; 0059a037
        ;   Label: LAB_0059a037
    MOV dword ptr [EBX + 0x27c0],0x0    ; 0059a038
    MOV dword ptr [EBX + 0x34160],0x0   ; 0059a042
    MOV EAX,EBX                         ; 0059a04c
    MOV dword ptr [EBX + 0x34164],0x0   ; 0059a04e
    ADD ESP,0x4                         ; 0059a058
    POP EDI                             ; 0059a05b
    POP ESI                             ; 0059a05c
    POP EBX                             ; 0059a05d
    RET                                 ; 0059a05e

