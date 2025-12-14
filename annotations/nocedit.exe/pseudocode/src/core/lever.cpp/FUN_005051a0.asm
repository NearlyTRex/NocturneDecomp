; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_lever.cpp_FUN_005051a0()
;
;
; XREF[1]:
;   core_lever.cpp_FUN_00505240 at 00505288
;
; Referenced Globals:
;   TerminatedCString s_Off_00631178
;   undefined4 DAT_00631179
;   undefined4 DAT_0063117a
;   undefined4 DAT_0063117b
;   TerminatedCString s_On_0063117c
;   undefined4 DAT_0063117d
;   double DOUBLE_00631180 = 0.5
;   undefined4 g_CLeverClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_lever.cpp_FUN_00504b20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005051a0
        ;   Label: core_lever.cpp_FUN_005051a0
    PUSH EDI                            ; 005051a1
    MOV EDI,dword ptr [ESP + 0x14]      ; 005051a2
    MOV EDX,dword ptr [0x02dd3090]      ; 005051a6 | g_CLeverClassInfo.name_hash
    PUSH EDX                            ; 005051ac
    MOV ECX,dword ptr [ESP + 0x10]      ; 005051ad
    PUSH ECX                            ; 005051b1
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005051b2
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    FLD float ptr [EAX + 0x2dc]         ; 005051b7
    MOV ESI,EAX                         ; 005051bd
    ADD ESP,0x8                         ; 005051bf
    FCOMP double ptr [0x00631180]       ; 005051c2 | DOUBLE_00631180
    FNSTSW AX                           ; 005051c8
    SAHF                                ; 005051ca
    JNC 0x005051fa                      ; 005051cb
        ;   XREF to: 005051fa (CONDITIONAL_JUMP)  ; LAB_005051fa
    PUSH 0x0                            ; 005051cd
    PUSH ESI                            ; 005051cf
    CALL core_lever.cpp_FUN_00504b20    ; 005051d0
        ;   XREF to: 00504b20 (UNCONDITIONAL_CALL)  ; undefined core_lever.cpp_FUN_00504b20()
    ADD ESP,0x8                         ; 005051d5
    MOV ESI,0x631178                    ; 005051d8 | = "Off"
    PUSH EDI                            ; 005051dd
        ;   Label: LAB_005051dd
    MOV AL,byte ptr [ESI]               ; 005051de | = "Off" | DAT_0063117a | s_On_0063117c
        ;   Label: LAB_005051de
    MOV byte ptr [EDI],AL               ; 005051e0
    CMP AL,0x0                          ; 005051e2
    JZ 0x005051f6                       ; 005051e4
        ;   XREF to: 005051f6 (CONDITIONAL_JUMP)  ; LAB_005051f6
    MOV AL,byte ptr [ESI + 0x1]         ; 005051e6 | DAT_00631179 | DAT_0063117b | DAT_0063117d
    ADD ESI,0x2                         ; 005051e9
    MOV byte ptr [EDI + 0x1],AL         ; 005051ec
    ADD EDI,0x2                         ; 005051ef
    CMP AL,0x0                          ; 005051f2
    JNZ 0x005051de                      ; 005051f4
        ;   XREF to: 005051de (CONDITIONAL_JUMP)  ; LAB_005051de
    POP EDI                             ; 005051f6
        ;   Label: LAB_005051f6
    POP EDI                             ; 005051f7
    POP ESI                             ; 005051f8
    RET                                 ; 005051f9
    PUSH 0x3f800000                     ; 005051fa
        ;   Label: LAB_005051fa
    PUSH ESI                            ; 005051ff
    CALL core_lever.cpp_FUN_00504b20    ; 00505200
        ;   XREF to: 00504b20 (UNCONDITIONAL_CALL)  ; undefined core_lever.cpp_FUN_00504b20()
    ADD ESP,0x8                         ; 00505205
    MOV ESI,0x63117c                    ; 00505208 | = "On"
    JMP 0x005051dd                      ; 0050520d
        ;   XREF to: 005051dd (UNCONDITIONAL_JUMP)  ; LAB_005051dd

