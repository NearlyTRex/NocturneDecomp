; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFilmReel * __cdecl core_filmreel_cpp_CFilmReel_ctor_FUN_00496170(CFilmReel *this_ptr)
;
; Parameters:
; CFilmReel *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_filmreel.cpp_factoryFuncFilmReel_FUN_00496140 at 00496153
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496170
        ;   Label: core_filmreel.cpp_CFilmReel_ctor_FUN_00496170
    PUSH ESI                            ; 00496171
    PUSH EDI                            ; 00496172
    MOV EBX,dword ptr [ESP + 0x10]      ; 00496173
    PUSH EBX                            ; 00496177
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 00496178
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0049617d
    ADD EAX,0x158                       ; 00496180
    PUSH EAX                            ; 00496185
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00496186
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0049618b
    LEA EBX,[EAX + 0xfffffea8]          ; 0049618e
    PUSH 0x5c03dc                       ; 00496194
    LEA EAX,[EBX + 0x158]               ; 00496199
    PUSH EAX                            ; 0049619f
    MOV dword ptr [EBX + 0x154],0x5df664 ; 004961a0
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 004961aa
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 004961af
    MOV ESI,0x5c03e9                    ; 004961b2
    LEA EDI,[EBX + 0x2d8]               ; 004961b7
    PUSH EDI                            ; 004961bd
    MOV AL,byte ptr [ESI]               ; 004961be
        ;   Label: LAB_004961be
    MOV byte ptr [EDI],AL               ; 004961c0
    CMP AL,0x0                          ; 004961c2
    JZ 0x004961d6                       ; 004961c4
        ;   XREF to: 004961d6 (CONDITIONAL_JUMP)  ; LAB_004961d6
    MOV AL,byte ptr [ESI + 0x1]         ; 004961c6
    ADD ESI,0x2                         ; 004961c9
    MOV byte ptr [EDI + 0x1],AL         ; 004961cc
    ADD EDI,0x2                         ; 004961cf
    CMP AL,0x0                          ; 004961d2
    JNZ 0x004961be                      ; 004961d4
        ;   XREF to: 004961be (CONDITIONAL_JUMP)  ; LAB_004961be
    POP EDI                             ; 004961d6
        ;   Label: LAB_004961d6
    MOV EAX,EBX                         ; 004961d7
    POP EDI                             ; 004961d9
    POP ESI                             ; 004961da
    POP EBX                             ; 004961db
    RET                                 ; 004961dc

