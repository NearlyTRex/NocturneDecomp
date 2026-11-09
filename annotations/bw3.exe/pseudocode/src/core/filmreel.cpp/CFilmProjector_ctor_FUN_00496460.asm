; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmProjector * __cdecl core_filmreel_cpp_CFilmProjector_ctor_FUN_00496460(CFilmProjector *this_ptr)
;
; Parameters:
; CFilmProjector * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_FUN_00496430 at 00496443
;
; Called Functions:
;   core_dest.cpp_CActorDestination_ctor_FUN_00459140
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496460
        ;   Label: core_filmreel.cpp_CFilmProjector_ctor_FUN_00496460
    PUSH ESI                            ; 00496461
    PUSH EDI                            ; 00496462
    MOV EBX,dword ptr [ESP + 0x10]      ; 00496463
    PUSH EBX                            ; 00496467
    CALL core_dest.cpp_CActorDestination_ctor_FUN_00459140 ; 00496468
        ;   XREF to: 00459140 (UNCONDITIONAL_CALL)  ; CActorDestination * core_dest.cpp_CActorDestination_ctor_FUN_00459140(CActorDestination * this_ptr)
    ADD ESP,0x4                         ; 0049646d
    ADD EAX,0x1f4                       ; 00496470
    PUSH EAX                            ; 00496475
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00496476
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049647b
    LEA EBX,[EAX + 0xfffffe0c]          ; 0049647e
    PUSH 0x5c0415                       ; 00496484
    LEA EAX,[EBX + 0x1f4]               ; 00496489
    PUSH EAX                            ; 0049648f
    MOV ESI,0x5c0422                    ; 00496490
    MOV dword ptr [EBX + 0x154],0x5df744 ; 00496495
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0049649f
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004964a4
    LEA EDI,[EBX + 0x15c]               ; 004964a7
    MOV dword ptr [EBX + 0x3d8],0x0     ; 004964ad
    PUSH EDI                            ; 004964b7
    MOV AL,byte ptr [ESI]               ; 004964b8
        ;   Label: LAB_004964b8
    MOV byte ptr [EDI],AL               ; 004964ba
    CMP AL,0x0                          ; 004964bc
    JZ 0x004964d0                       ; 004964be
        ;   XREF to: 004964d0 (CONDITIONAL_JUMP)  ; LAB_004964d0
    MOV AL,byte ptr [ESI + 0x1]         ; 004964c0
    ADD ESI,0x2                         ; 004964c3
    MOV byte ptr [EDI + 0x1],AL         ; 004964c6
    ADD EDI,0x2                         ; 004964c9
    CMP AL,0x0                          ; 004964cc
    JNZ 0x004964b8                      ; 004964ce
        ;   XREF to: 004964b8 (CONDITIONAL_JUMP)  ; LAB_004964b8
    POP EDI                             ; 004964d0
        ;   Label: LAB_004964d0
    MOV ESI,0x5c042c                    ; 004964d1
    MOV dword ptr [EBX + 0x3dc],0x0     ; 004964d6
    LEA EDI,[EBX + 0x374]               ; 004964e0
    MOV dword ptr [EBX + 0x370],0x0     ; 004964e6
    PUSH EDI                            ; 004964f0
    MOV AL,byte ptr [ESI]               ; 004964f1
        ;   Label: LAB_004964f1
    MOV byte ptr [EDI],AL               ; 004964f3
    CMP AL,0x0                          ; 004964f5
    JZ 0x00496509                       ; 004964f7
        ;   XREF to: 00496509 (CONDITIONAL_JUMP)  ; LAB_00496509
    MOV AL,byte ptr [ESI + 0x1]         ; 004964f9
    ADD ESI,0x2                         ; 004964fc
    MOV byte ptr [EDI + 0x1],AL         ; 004964ff
    ADD EDI,0x2                         ; 00496502
    CMP AL,0x0                          ; 00496505
    JNZ 0x004964f1                      ; 00496507
        ;   XREF to: 004964f1 (CONDITIONAL_JUMP)  ; LAB_004964f1
    POP EDI                             ; 00496509
        ;   Label: LAB_00496509
    MOV EAX,EBX                         ; 0049650a
    MOV dword ptr [EBX + 0x3e0],0x0     ; 0049650c
    POP EDI                             ; 00496516
    POP ESI                             ; 00496517
    POP EBX                             ; 00496518
    RET                                 ; 00496519

