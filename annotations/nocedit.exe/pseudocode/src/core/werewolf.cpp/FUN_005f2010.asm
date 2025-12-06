; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_werewolf.cpp_FUN_005f2010()
;
;
; XREF[1]:
;   core_werewolf.cpp_CWerewolf_FUN_005f20d0 at 005f2110
;
; Referenced Globals:
;   undefined4 s_Train_00657e8c
;   TerminatedCString s_Forest_00657e92
;   TerminatedCString s_Train_Alpha_00657e99
;   undefined4 g_CWerewolfClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2010
        ;   Label: core_werewolf.cpp_FUN_005f2010
    PUSH ESI                            ; 005f2011
    MOV EBX,dword ptr [ESP + 0x14]      ; 005f2012
    MOV EDX,dword ptr [0x03f96b94]      ; 005f2016 | g_CWerewolfClassInfo.name_hash
    PUSH EDX                            ; 005f201c
    MOV ECX,dword ptr [ESP + 0x10]      ; 005f201d
    PUSH ECX                            ; 005f2021
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005f2022 | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [EAX + 0xbebc]    ; 005f2027
    ADD ESP,0x8                         ; 005f202d
    TEST ESI,ESI                        ; 005f2030
    JZ 0x005f204a                       ; 005f2032 | LAB_005f204a
        ;   XREF to: 005f204a (CONDITIONAL_JUMP)
    CMP ESI,0x1                         ; 005f2034
    JNZ 0x005f2051                      ; 005f2037 | LAB_005f2051
        ;   XREF to: 005f2051 (CONDITIONAL_JUMP)
    PUSH 0x657e92                       ; 005f2039 | = "Forest" | s_Forest_00657e92 = Forest
    PUSH EBX                            ; 005f203e
        ;   Label: LAB_005f203e
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005f203f | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005f2044
    POP ESI                             ; 005f2047
    POP EBX                             ; 005f2048
    RET                                 ; 005f2049
    PUSH 0x657e8c                       ; 005f204a | s_Train_00657e8c
        ;   Label: LAB_005f204a
    JMP 0x005f203e                      ; 005f204f | LAB_005f203e
        ;   XREF to: 005f203e (UNCONDITIONAL_JUMP)
    PUSH 0x657e99                       ; 005f2051 | = "Train Alpha" | s_Train_Alpha_00657e99 = Train Alpha
        ;   Label: LAB_005f2051
    PUSH EBX                            ; 005f2056
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005f2057 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005f205c
    POP ESI                             ; 005f205f
    POP EBX                             ; 005f2060
    RET                                 ; 005f2061

