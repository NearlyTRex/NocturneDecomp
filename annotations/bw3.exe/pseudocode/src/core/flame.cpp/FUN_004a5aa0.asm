; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flame_cpp_FUN_004a5aa0(CDemonActor *param_1)
;
;
; XREF[2]:
;   core_bodypart.cpp_FUN_00416750 at 004167ce
;   core_vessel.cpp_FUN_005764b0 at 005765ec
;
; Called Functions:
;   core_actor.cpp_FUN_00408890
;   core_flame.cpp_FUN_004a5ad0
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5aa0
        ;   Label: core_flame.cpp_FUN_004a5aa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a5aa1
    PUSH EBX                            ; 004a5aa5
    CALL core_actor.cpp_FUN_00408890    ; 004a5aa6
        ;   XREF to: 00408890 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_FUN_00408890(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a5aab
    MOV EDX,dword ptr [EBX + 0x1a8]     ; 004a5aae
    PUSH EDX                            ; 004a5ab4
    CALL core_flame.cpp_FUN_004a5ad0    ; 004a5ab5
        ;   XREF to: 004a5ad0 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_FUN_004a5ad0()
    ADD ESP,0x4                         ; 004a5aba
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 004a5abd
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
    AND EAX,0x1                         ; 004a5ac2
    MOV dword ptr [EBX + 0x294],EAX     ; 004a5ac5
    POP EBX                             ; 004a5acb
    RET                                 ; 004a5acc

