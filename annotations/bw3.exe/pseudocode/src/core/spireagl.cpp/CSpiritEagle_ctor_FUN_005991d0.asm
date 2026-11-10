; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpiritEagle * core_spireagl_cpp_CSpiritEagle_ctor_FUN_005991d0(CSpiritEagle *this_ptr)
;
; Parameters:
; CSpiritEagle *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spireagl.cpp_factoryFuncSpiritEagle_FUN_005991a0 at 005991b3
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_charactr.cpp_CCharacter_ctor_FUN_0042ac20
;   core_cloth.cpp_CClothList_ctor_FUN_0043f8c0
;   core_morph.cpp_CMorph_ctor_FUN_004fa8a0
;   core_path.cpp_CPathMap_ctor_FUN_0050acc0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005991d0
        ;   Label: core_spireagl.cpp_CSpiritEagle_ctor_FUN_005991d0
    PUSH ESI                            ; 005991d1
    PUSH EDI                            ; 005991d2
    SUB ESP,0x4                         ; 005991d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005991d6
    PUSH EBX                            ; 005991da
    CALL core_charactr.cpp_CCharacter_ctor_FUN_0042ac20 ; 005991db
        ;   XREF to: 0042ac20 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_0042ac20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005991e0
    ADD EAX,0xcdcc                      ; 005991e3
    PUSH EAX                            ; 005991e8
    CALL core_path.cpp_CPathMap_ctor_FUN_0050acc0 ; 005991e9
        ;   XREF to: 0050acc0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_CPathMap_ctor_FUN_0050acc0(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 005991ee
    ADD EAX,0x138dc                     ; 005991f1
    PUSH EAX                            ; 005991f6
    CALL core_cloth.cpp_CClothList_ctor_FUN_0043f8c0 ; 005991f7
        ;   XREF to: 0043f8c0 (UNCONDITIONAL_CALL)  ; CClothList * core_cloth.cpp_CClothList_ctor_FUN_0043f8c0(CClothList * this_ptr)
    ADD ESP,0x4                         ; 005991fc
    ADD EAX,0x1cc                       ; 005991ff
    PUSH EAX                            ; 00599204
    CALL core_morph.cpp_CMorph_ctor_FUN_004fa8a0 ; 00599205
        ;   XREF to: 004fa8a0 (UNCONDITIONAL_CALL)  ; CMorph * core_morph.cpp_CMorph_ctor_FUN_004fa8a0(CMorph * this_ptr)
    LEA EBX,[EAX + 0xfffdf78c]          ; 0059920a
    MOV dword ptr [EBX + 0x154],0x5e7d04 ; 00599210
    ADD ESP,0x4                         ; 0059921a
    MOV dword ptr [EBX + 0x326c],0x3f19999a ; 0059921d
    MOV ESI,0x5d98da                    ; 00599227
    MOV dword ptr [EBX + 0x3270],0x3f666666 ; 0059922c
    PUSH 0x3f8ccccd                     ; 00599236
    MOV dword ptr [EBX + 0x327c],0x3fcccccd ; 0059923b
    PUSH 0x3f666666                     ; 00599245
    MOV dword ptr [EBX + 0x3280],0xc479c000 ; 0059924a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00599254
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBX + 0x214a4],0x0   ; 00599259
    LEA EDI,[EBX + 0x206ac]             ; 00599263
    MOV dword ptr [EBX + 0x214a8],0x0   ; 00599269
    MOV dword ptr [ESP + 0x8],EAX       ; 00599273
    MOV dword ptr [EBX + 0x206a8],0x1   ; 00599277
    FLD float ptr [ESP + 0x8]           ; 00599281
    ADD ESP,0x8                         ; 00599285
    FSTP float ptr [EBX + 0x2086c]      ; 00599288
    PUSH EDI                            ; 0059928e
    MOV AL,byte ptr [ESI]               ; 0059928f
        ;   Label: LAB_0059928f
    MOV byte ptr [EDI],AL               ; 00599291
    CMP AL,0x0                          ; 00599293
    JZ 0x005992a7                       ; 00599295
        ;   XREF to: 005992a7 (CONDITIONAL_JUMP)  ; LAB_005992a7
    MOV AL,byte ptr [ESI + 0x1]         ; 00599297
    ADD ESI,0x2                         ; 0059929a
    MOV byte ptr [EDI + 0x1],AL         ; 0059929d
    ADD EDI,0x2                         ; 005992a0
    CMP AL,0x0                          ; 005992a3
    JNZ 0x0059928f                      ; 005992a5
        ;   XREF to: 0059928f (CONDITIONAL_JUMP)  ; LAB_0059928f
    POP EDI                             ; 005992a7
        ;   Label: LAB_005992a7
    PUSH 0x5d98e9                       ; 005992a8
    LEA EAX,[EBX + 0x158]               ; 005992ad
    PUSH EAX                            ; 005992b3
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0 ; 005992b4
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_0054eae0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x27c0],0x0    ; 005992b9
    ADD ESP,0x8                         ; 005992c3
    MOV dword ptr [EBX + 0x20864],0x0   ; 005992c6
    MOV EAX,EBX                         ; 005992d0
    MOV dword ptr [EBX + 0x20868],0x0   ; 005992d2
    ADD ESP,0x4                         ; 005992dc
    POP EDI                             ; 005992df
    POP ESI                             ; 005992e0
    POP EBX                             ; 005992e1
    RET                                 ; 005992e2

