; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpiritBear * core_spirbear_cpp_CSpiritBear_ctor_FUN_0059aaa0(CSpiritBear *this_ptr)
;
; Parameters:
; CSpiritBear *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spirbear.cpp_factoryFuncSpiritBear_FUN_0059aa70 at 0059aa83
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

    PUSH EBX                            ; 0059aaa0
        ;   Label: core_spirbear.cpp_CSpiritBear_ctor_FUN_0059aaa0
    PUSH ESI                            ; 0059aaa1
    PUSH EDI                            ; 0059aaa2
    SUB ESP,0x4                         ; 0059aaa3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059aaa6
    PUSH EBX                            ; 0059aaaa
    CALL core_npc.cpp_CNPC_ctor_FUN_00508f40 ; 0059aaab
        ;   XREF to: 00508f40 (UNCONDITIONAL_CALL)  ; CNPC * core_npc.cpp_CNPC_ctor_FUN_00508f40(CNPC * this_ptr)
    ADD ESP,0x4                         ; 0059aab0
    ADD EAX,0x206c8                     ; 0059aab3
    PUSH EAX                            ; 0059aab8
    CALL core_path.cpp_CPathMap_ctor_FUN_0050acc0 ; 0059aab9
        ;   XREF to: 0050acc0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_0050acc0(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 0059aabe
    ADD EAX,0x138dc                     ; 0059aac1
    PUSH EAX                            ; 0059aac6
    CALL core_cloth.cpp_CClothList_ctor_FUN_0043f8c0 ; 0059aac7
        ;   XREF to: 0043f8c0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_0043f8c0(CClothList * this_ptr)
    ADD ESP,0x4                         ; 0059aacc
    ADD EAX,0x1d0                       ; 0059aacf
    PUSH EAX                            ; 0059aad4
    CALL core_morph.cpp_CMorph_ctor_FUN_004fa8a0 ; 0059aad5
        ;   XREF to: 004fa8a0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004fa8a0(CMorph * this_ptr)
    LEA EBX,[EAX + 0xfffcbe8c]          ; 0059aada
    MOV dword ptr [EBX + 0x154],0x5e8024 ; 0059aae0
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 0059aaea
    ADD ESP,0x4                         ; 0059aaf4
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 0059aaf7
    PUSH 0x3f8ccccd                     ; 0059ab01
    MOV dword ptr [EBX + 0x327c],0x3fcccccd ; 0059ab06
    PUSH 0x3f666666                     ; 0059ab10
    MOV dword ptr [EBX + 0x3280],0xc479c000 ; 0059ab15
    CALL core_actor.cpp_FUN_0040ce40    ; 0059ab1f
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040ce40()
    MOV dword ptr [ESP + 0x8],EAX       ; 0059ab24
    FLD float ptr [ESP + 0x8]           ; 0059ab28
    ADD ESP,0x8                         ; 0059ab2c
    PUSH 0x5d9b04                       ; 0059ab2f
    LEA EAX,[EBX + 0x158]               ; 0059ab34
    MOV ESI,0x5d9b12                    ; 0059ab3a
    PUSH EAX                            ; 0059ab3f
    FSTP float ptr [EBX + 0x34168]      ; 0059ab40
    CALL core_skeleton.cpp_FUN_0054eae0 ; 0059ab46
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054eae0()
    ADD ESP,0x8                         ; 0059ab4b
    LEA EDI,[EBX + 0x33fa8]             ; 0059ab4e
    MOV dword ptr [EBX + 0x33fa4],0x1   ; 0059ab54
    PUSH EDI                            ; 0059ab5e
    MOV AL,byte ptr [ESI]               ; 0059ab5f
        ;   Label: LAB_0059ab5f
    MOV byte ptr [EDI],AL               ; 0059ab61
    CMP AL,0x0                          ; 0059ab63
    JZ 0x0059ab77                       ; 0059ab65
        ;   XREF to: 0059ab77 (CONDITIONAL_JUMP)  ; LAB_0059ab77
    MOV AL,byte ptr [ESI + 0x1]         ; 0059ab67
    ADD ESI,0x2                         ; 0059ab6a
    MOV byte ptr [EDI + 0x1],AL         ; 0059ab6d
    ADD EDI,0x2                         ; 0059ab70
    CMP AL,0x0                          ; 0059ab73
    JNZ 0x0059ab5f                      ; 0059ab75
        ;   XREF to: 0059ab5f (CONDITIONAL_JUMP)  ; LAB_0059ab5f
    POP EDI                             ; 0059ab77
        ;   Label: LAB_0059ab77
    MOV dword ptr [EBX + 0x27c0],0x0    ; 0059ab78
    MOV dword ptr [EBX + 0x34160],0x0   ; 0059ab82
    MOV EAX,EBX                         ; 0059ab8c
    MOV dword ptr [EBX + 0x34164],0x0   ; 0059ab8e
    ADD ESP,0x4                         ; 0059ab98
    POP EDI                             ; 0059ab9b
    POP ESI                             ; 0059ab9c
    POP EBX                             ; 0059ab9d
    RET                                 ; 0059ab9e

