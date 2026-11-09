; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_00566860(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spike.cpp_factoryFuncSpike_FUN_00566830 at 00566843
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566860
        ;   Label: core_spike.cpp_CSpike_ctor_FUN_00566860
    PUSH ESI                            ; 00566861
    PUSH EDI                            ; 00566862
    MOV EBX,dword ptr [ESP + 0x10]      ; 00566863
    PUSH EBX                            ; 00566867
    CALL core_actor.cpp_CDemonActor_ctor_FUN_00408600 ; 00566868
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_00408600(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0056686d
    ADD EAX,0x158                       ; 00566870
    PUSH EAX                            ; 00566875
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500 ; 00566876
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00462500(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056687b
    LEA EBX,[EAX + 0xfffffea8]          ; 0056687e
    PUSH 0x5d5b09                       ; 00566884
    LEA EAX,[EBX + 0x158]               ; 00566889
    PUSH EAX                            ; 0056688f
    MOV ESI,0x5d5b13                    ; 00566890
    MOV dword ptr [EBX + 0x154],0x5e4b44 ; 00566895
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 0056689f
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005668a4
    ADD ESP,0x8                         ; 005668ae
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005668b1
    LEA EDI,[EBX + 0x2f0]               ; 005668bb
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005668c1
    PUSH EDI                            ; 005668cb
    MOV AL,byte ptr [ESI]               ; 005668cc
        ;   Label: LAB_005668cc
    MOV byte ptr [EDI],AL               ; 005668ce
    CMP AL,0x0                          ; 005668d0
    JZ 0x005668e4                       ; 005668d2
        ;   XREF to: 005668e4 (CONDITIONAL_JUMP)  ; LAB_005668e4
    MOV AL,byte ptr [ESI + 0x1]         ; 005668d4
    ADD ESI,0x2                         ; 005668d7
    MOV byte ptr [EDI + 0x1],AL         ; 005668da
    ADD EDI,0x2                         ; 005668dd
    CMP AL,0x0                          ; 005668e0
    JNZ 0x005668cc                      ; 005668e2
        ;   XREF to: 005668cc (CONDITIONAL_JUMP)  ; LAB_005668cc
    POP EDI                             ; 005668e4
        ;   Label: LAB_005668e4
    MOV ESI,0x5d5b18                    ; 005668e5
    LEA EDI,[EBX + 0x354]               ; 005668ea
    PUSH EDI                            ; 005668f0
    MOV AL,byte ptr [ESI]               ; 005668f1
        ;   Label: LAB_005668f1
    MOV byte ptr [EDI],AL               ; 005668f3
    CMP AL,0x0                          ; 005668f5
    JZ 0x00566909                       ; 005668f7
        ;   XREF to: 00566909 (CONDITIONAL_JUMP)  ; LAB_00566909
    MOV AL,byte ptr [ESI + 0x1]         ; 005668f9
    ADD ESI,0x2                         ; 005668fc
    MOV byte ptr [EDI + 0x1],AL         ; 005668ff
    ADD EDI,0x2                         ; 00566902
    CMP AL,0x0                          ; 00566905
    JNZ 0x005668f1                      ; 00566907
        ;   XREF to: 005668f1 (CONDITIONAL_JUMP)  ; LAB_005668f1
    POP EDI                             ; 00566909
        ;   Label: LAB_00566909
    MOV ESI,0x5d5b1d                    ; 0056690a
    LEA EDI,[EBX + 0x3b8]               ; 0056690f
    PUSH EDI                            ; 00566915
    MOV AL,byte ptr [ESI]               ; 00566916
        ;   Label: LAB_00566916
    MOV byte ptr [EDI],AL               ; 00566918
    CMP AL,0x0                          ; 0056691a
    JZ 0x0056692e                       ; 0056691c
        ;   XREF to: 0056692e (CONDITIONAL_JUMP)  ; LAB_0056692e
    MOV AL,byte ptr [ESI + 0x1]         ; 0056691e
    ADD ESI,0x2                         ; 00566921
    MOV byte ptr [EDI + 0x1],AL         ; 00566924
    ADD EDI,0x2                         ; 00566927
    CMP AL,0x0                          ; 0056692a
    JNZ 0x00566916                      ; 0056692c
        ;   XREF to: 00566916 (CONDITIONAL_JUMP)  ; LAB_00566916
    POP EDI                             ; 0056692e
        ;   Label: LAB_0056692e
    MOV ESI,0x5d5b22                    ; 0056692f
    LEA EDI,[EBX + 0x41c]               ; 00566934
    PUSH EDI                            ; 0056693a
    MOV AL,byte ptr [ESI]               ; 0056693b
        ;   Label: LAB_0056693b
    MOV byte ptr [EDI],AL               ; 0056693d
    CMP AL,0x0                          ; 0056693f
    JZ 0x00566953                       ; 00566941
        ;   XREF to: 00566953 (CONDITIONAL_JUMP)  ; LAB_00566953
    MOV AL,byte ptr [ESI + 0x1]         ; 00566943
    ADD ESI,0x2                         ; 00566946
    MOV byte ptr [EDI + 0x1],AL         ; 00566949
    ADD EDI,0x2                         ; 0056694c
    CMP AL,0x0                          ; 0056694f
    JNZ 0x0056693b                      ; 00566951
        ;   XREF to: 0056693b (CONDITIONAL_JUMP)  ; LAB_0056693b
    POP EDI                             ; 00566953
        ;   Label: LAB_00566953
    MOV dword ptr [EBX + 0x480],0x3f800000 ; 00566954
    MOV dword ptr [EBX + 0x484],0x3f800000 ; 0056695e
    MOV byte ptr [EBX + 0x48c],0x0      ; 00566968
    MOV byte ptr [EBX + 0x4f0],0x0      ; 0056696f
    MOV dword ptr [EBX + 0x554],0x3f800000 ; 00566976
    MOV dword ptr [EBX + 0x558],0x3dcccccd ; 00566980
    MOV EAX,EBX                         ; 0056698a
    MOV dword ptr [EBX + 0x55c],0x0     ; 0056698c
    POP EDI                             ; 00566996
    POP ESI                             ; 00566997
    POP EBX                             ; 00566998
    RET                                 ; 00566999

