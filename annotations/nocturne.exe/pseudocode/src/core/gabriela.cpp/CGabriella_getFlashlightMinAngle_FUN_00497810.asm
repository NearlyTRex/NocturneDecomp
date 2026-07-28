; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_00497810(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_updateWeaponAndAimAnimation_FUN_00497900 at 00497a20
;   core_gabriela.cpp_FUN_00495a20 at 00495e67
;
; Referenced Globals:
;   undefined4 g_CLightActorActorType_00764a9c.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00497810
        ;   Label: core_gabriela.cpp_CGabriella_getFlashlightMinAngle_FUN_00497810
    SUB ESP,0x4                         ; 00497811
    MOV EDX,dword ptr [0x00764ad4]      ; 00497814 | g_CLightActorActorType_00764a9c.name_hash
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049781a
    PUSH EDX                            ; 0049781e
    MOV ECX,dword ptr [EAX + 0x24ac]    ; 0049781f
    PUSH ECX                            ; 00497825
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00497826
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040d890(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0049782b
    TEST EAX,EAX                        ; 0049782e
    JZ 0x00497851                       ; 00497830
        ;   XREF to: 00497851 (CONDITIONAL_JUMP)  ; LAB_00497851
    MOV EBX,dword ptr [EAX + 0x664]     ; 00497832
    CMP EBX,0x2                         ; 00497838
    JZ 0x00497842                       ; 0049783b
        ;   XREF to: 00497842 (CONDITIONAL_JUMP)  ; LAB_00497842
    CMP EBX,0x3                         ; 0049783d
    JNZ 0x00497851                      ; 00497840
        ;   XREF to: 00497851 (CONDITIONAL_JUMP)  ; LAB_00497851
    MOV dword ptr [ESP],0xbf860a92      ; 00497842
        ;   Label: LAB_00497842
    MOV EAX,dword ptr [ESP]             ; 00497849
    ADD ESP,0x4                         ; 0049784c
    POP EBX                             ; 0049784f
    RET                                 ; 00497850
    MOV dword ptr [ESP],0xbfc80fc6      ; 00497851
        ;   Label: LAB_00497851
    MOV EAX,dword ptr [ESP]             ; 00497858
    ADD ESP,0x4                         ; 0049785b
    POP EBX                             ; 0049785e
    RET                                 ; 0049785f

