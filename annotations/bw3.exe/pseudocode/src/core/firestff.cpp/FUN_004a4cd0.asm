; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_firestff_cpp_FUN_004a4cd0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
;
; Called Functions:
;   core_actor.cpp_FUN_0040aca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4cd0
        ;   Label: core_firestff.cpp_FUN_004a4cd0
    PUSH ESI                            ; 004a4cd1
    MOV EDX,dword ptr [ESP + 0x18]      ; 004a4cd2
    PUSH EDX                            ; 004a4cd6
    MOV ECX,dword ptr [ESP + 0x18]      ; 004a4cd7
    PUSH ECX                            ; 004a4cdb
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a4cdc
    PUSH EBX                            ; 004a4ce0
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a4ce1
    PUSH ESI                            ; 004a4ce5
    CALL core_actor.cpp_FUN_0040aca0    ; 004a4ce6
        ;   XREF to: 0040aca0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040aca0()
    ADD ESP,0x10                        ; 004a4ceb
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a4cee
    MOV dword ptr [EAX + 0x4],0x41700000 ; 004a4cf2
    POP ESI                             ; 004a4cf9
    POP EBX                             ; 004a4cfa
    RET                                 ; 004a4cfb

