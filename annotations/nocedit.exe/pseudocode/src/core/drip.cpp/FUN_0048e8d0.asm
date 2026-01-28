; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_drip_cpp_FUN_0048e8d0(void)
;
;
; XREF[1]:
;   core_drip.cpp_FUN_0048e930 at 0048e944
;
; Referenced Globals:
;   undefined4 g_CDripClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e8d0
        ;   Label: core_drip.cpp_FUN_0048e8d0
    MOV EDX,dword ptr [0x02c9b16c]      ; 0048e8d1 | g_CDripClassInfo.name_hash
    PUSH EDX                            ; 0048e8d7
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048e8d8
    PUSH ECX                            ; 0048e8dc
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0048e8dd
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,dword ptr [EAX + 0x2d4]     ; 0048e8e2
    ADD ESP,0x8                         ; 0048e8e8
    TEST EBX,EBX                        ; 0048e8eb
    JZ 0x0048e905                       ; 0048e8ed
        ;   XREF to: 0048e905 (CONDITIONAL_JUMP)  ; LAB_0048e905
    CMP EBX,0x1                         ; 0048e8ef
    JNZ 0x0048e911                      ; 0048e8f2
        ;   XREF to: 0048e911 (CONDITIONAL_JUMP)  ; LAB_0048e911
    MOV dword ptr [EAX + 0x2d4],0x2     ; 0048e8f4
    MOV EAX,0x1                         ; 0048e8fe
        ;   Label: LAB_0048e8fe
    POP EBX                             ; 0048e903
    RET                                 ; 0048e904
    MOV dword ptr [EAX + 0x2d4],0x1     ; 0048e905
        ;   Label: LAB_0048e905
    JMP 0x0048e8fe                      ; 0048e90f
        ;   XREF to: 0048e8fe (UNCONDITIONAL_JUMP)  ; LAB_0048e8fe
    MOV dword ptr [EAX + 0x2d4],0x0     ; 0048e911
        ;   Label: LAB_0048e911
    MOV EAX,0x1                         ; 0048e91b
    POP EBX                             ; 0048e920
    RET                                 ; 0048e921

