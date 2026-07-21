; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[54]:
;   FUN_0040b300 at 0040b3aa
;   FUN_0043d1c0 at 0043d23b
;   FUN_00477890 at 00477998
;   FUN_00478120 at 0047818a
;   FUN_00478790 at 00478e0c
;   FUN_00478f80 at 004790b1
;   FUN_00495a20 at 00496ca9
;   FUN_004b27c0 at 004b283b
;   FUN_004b6d80 at 004b7225
;   FUN_004c71a0 at 004c7246
;   ... and 44 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a200
        ;   Label: core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040a201
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040a205
    PUSH EDX                            ; 0040a209
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040a20a
    PUSH EBX                            ; 0040a20e
    ADD EAX,0x3c                        ; 0040a20f
    PUSH EAX                            ; 0040a212
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0040a213
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 0040a218
    MOV EAX,EBX                         ; 0040a21b
    POP EBX                             ; 0040a21d
    RET                                 ; 0040a21e

