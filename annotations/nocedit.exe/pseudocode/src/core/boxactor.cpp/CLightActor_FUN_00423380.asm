; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_CLightActor_FUN_00423380()
;
; Local Variables:
; undefined        Stack[-0x138]:1  local_138
;
; XREF[1]:
;   core_boxactor.cpp_CLightActor_FUN_004234e0 at 004234f4
;
; Referenced Globals:
;   TerminatedCString s_Select_light_type_for_CL_006169b3
;   undefined4 g_CLightActorClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_boxactor.cpp_FUN_00422d60
;   core_boxactor.cpp_FUN_00423110
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423380
        ;   Label: core_boxactor.cpp_CLightActor_FUN_00423380
    PUSH ESI                            ; 00423381
    PUSH EDI                            ; 00423382
    SUB ESP,0x12c                       ; 00423383
    MOV EDX,dword ptr [0x00822c84]      ; 00423389 | g_CLightActorClassInfo.name_hash
    PUSH EDX                            ; 0042338f
    MOV ECX,dword ptr [ESP + 0x140]     ; 00423390
    PUSH ECX                            ; 00423397
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 00423398
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0042339d
    MOV ESI,dword ptr [ESP + 0x13c]     ; 004233a0
    PUSH ESI                            ; 004233a7
    PUSH 0x6169b3                       ; 004233a8 | = "Select light type for CLightActor %s"
    MOV EBX,EAX                         ; 004233ad
    LEA EAX,[ESP + 0x8]                 ; 004233af
    PUSH EAX                            ; 004233b3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004233b4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004233b9
    MOV EDI,dword ptr [EBX + 0x66c]     ; 004233bc
    PUSH EDI                            ; 004233c2
    PUSH 0x1                            ; 004233c3
    LEA EAX,[ESP + 0x8]                 ; 004233c5
    PUSH EAX                            ; 004233c9
    CALL core_boxactor.cpp_FUN_00423110 ; 004233ca
        ;   XREF to: 00423110 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_00423110()
    ADD ESP,0xc                         ; 004233cf
    TEST EAX,EAX                        ; 004233d2
    JGE 0x004233e2                      ; 004233d4
        ;   XREF to: 004233e2 (CONDITIONAL_JUMP)  ; LAB_004233e2
    XOR EAX,EAX                         ; 004233d6
    ADD ESP,0x12c                       ; 004233d8
    POP EDI                             ; 004233de
    POP ESI                             ; 004233df
    POP EBX                             ; 004233e0
    RET                                 ; 004233e1
    PUSH EBX                            ; 004233e2
        ;   Label: LAB_004233e2
    MOV dword ptr [EBX + 0x66c],EAX     ; 004233e3
    CALL core_boxactor.cpp_FUN_00422d60 ; 004233e9
        ;   XREF to: 00422d60 (UNCONDITIONAL_CALL)  ; undefined core_boxactor.cpp_FUN_00422d60()
    MOV EAX,0x1                         ; 004233ee
    ADD ESP,0x4                         ; 004233f3
    ADD ESP,0x12c                       ; 004233f6
    POP EDI                             ; 004233fc
    POP ESI                             ; 004233fd
    POP EBX                             ; 004233fe
    RET                                 ; 004233ff

