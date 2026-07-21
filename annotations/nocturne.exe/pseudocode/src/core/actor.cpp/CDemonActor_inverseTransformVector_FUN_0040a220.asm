; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[18]:
;   FUN_0041ef90 at 0041efba
;   FUN_0048b6f0 at 0048b947
;   FUN_00495a20 at 00496141
;   FUN_00510a40 at 00511236
;   FUN_00535900 at 00536d98
;   FUN_00546e10 at 005471fd
;   FUN_00547670 at 005476d8
;   FUN_0055ef50 at 0055f74f
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a83a
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730 at 00429907
;   ... and 8 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a220
        ;   Label: core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040a221
    MOV EDX,dword ptr [ESP + 0x10]      ; 0040a225
    PUSH EDX                            ; 0040a229
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040a22a
    PUSH EBX                            ; 0040a22e
    ADD EAX,0x3c                        ; 0040a22f
    PUSH EAX                            ; 0040a232
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0040a233
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0()
    ADD ESP,0xc                         ; 0040a238
    MOV EAX,EBX                         ; 0040a23b
    POP EBX                             ; 0040a23d
    RET                                 ; 0040a23e

