; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00569eb0(int param_1)
;
;
; XREF[56]:
;   FUN_00409170 at 0040962c
;   FUN_00411280 at 0041141a
;   FUN_00412840 at 004129da
;   FUN_0041b940 at 0041bab2
;   FUN_0041d540 at 0041d572
;   FUN_00423940 at 00423a56
;   FUN_00426ec0 at 004271cb
;   FUN_00427b40 at 00427bfb
;   FUN_004287e0 at 00428920
;   FUN_0042e580 at 0042e5b6
;   ... and 46 more
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f25f1
;   TerminatedCString s_CDeformableModelInstance_005f2606
;   TerminatedCString s_core_skeleton_cpp_005f2654
;   TerminatedCString s_Tried_to_do_something_wi_005f2669
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569eb0
        ;   Label: FUN_00569eb0
    PUSH EDI                            ; 00569eb1
    PUSH EBP                            ; 00569eb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00569eb3
    CMP dword ptr [EBX + 0x23a0],0x0    ; 00569eb7
    JNZ 0x00569eec                      ; 00569ebe
        ;   XREF to: 00569eec (CONDITIONAL_JUMP)  ; LAB_00569eec
    CMP byte ptr [EBX + 0x2350],0x0     ; 00569ec0
    JNZ 0x00569ef6                      ; 00569ec7
        ;   XREF to: 00569ef6 (CONDITIONAL_JUMP)  ; LAB_00569ef6
    MOV EDI,0x5f25f1                    ; 00569ec9 | = "..\\core\\skeleton.cpp"
    MOV EBP,0xdf0                       ; 00569ece
    PUSH 0x5f2606                       ; 00569ed3 | = "CDeformableModelInstance::getModelPtr..."
    MOV dword ptr [0x01d1d400],EDI      ; 00569ed8 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00569ede | DAT_01d1d404
    CALL FUN_005030e0                   ; 00569ee4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00569ee9
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 00569eec
        ;   Label: LAB_00569eec
    POP EBP                             ; 00569ef2
    POP EDI                             ; 00569ef3
    POP EBX                             ; 00569ef4
    RET                                 ; 00569ef5
    PUSH ESI                            ; 00569ef6
        ;   Label: LAB_00569ef6
    LEA EAX,[EBX + 0x2350]              ; 00569ef7
    PUSH EAX                            ; 00569efd
    MOV ECX,0x5f2654                    ; 00569efe | = "..\\core\\skeleton.cpp"
    MOV ESI,0xdf2                       ; 00569f03
    PUSH 0x5f2669                       ; 00569f08 | = "Tried to do something with model %s, ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00569f0d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00569f13 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00569f19
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 00569f1e
    POP ESI                             ; 00569f21
    MOV EAX,dword ptr [EBX + 0x23a0]    ; 00569f22
    POP EBP                             ; 00569f28
    POP EDI                             ; 00569f29
    POP EBX                             ; 00569f2a
    RET                                 ; 00569f2b

