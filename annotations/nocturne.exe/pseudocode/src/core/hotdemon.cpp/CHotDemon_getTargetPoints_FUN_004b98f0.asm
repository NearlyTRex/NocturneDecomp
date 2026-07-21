; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_hotdemon_cpp_CHotDemon_getTargetPoints_FUN_004b98f0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_01cae1e0
;   undefined4 DAT_01cae204
;   undefined4 DAT_01cae20c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b98f0
        ;   Label: core_hotdemon.cpp_CHotDemon_getTargetPoints_FUN_004b98f0
    PUSH ESI                            ; 004b98f1
    PUSH EDI                            ; 004b98f2
    PUSH EBP                            ; 004b98f3
    SUB ESP,0x24                        ; 004b98f4
    MOV EDI,dword ptr [ESP + 0x38]      ; 004b98f7
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004b98fb
    MOV EDX,dword ptr [0x01cae1e0]      ; 004b98ff | DAT_01cae1e0
    PUSH EDX                            ; 004b9905
    LEA EAX,[ESP + 0x10]                ; 004b9906
    PUSH EAX                            ; 004b990a
    LEA EAX,[EDI + 0x150]               ; 004b990b
    PUSH EAX                            ; 004b9911
    MOV ESI,0x3                         ; 004b9912
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004b9917
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 004b991c
    CMP EBX,EAX                         ; 004b991f
    JZ 0x004b9933                       ; 004b9921
        ;   XREF to: 004b9933 (CONDITIONAL_JUMP)  ; LAB_004b9933
    MOV EDX,dword ptr [EAX]             ; 004b9923
    MOV dword ptr [EBX],EDX             ; 004b9925
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b9927
    MOV dword ptr [EBX + 0x4],EDX       ; 004b992a
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b992d
    MOV dword ptr [EBX + 0x8],EDX       ; 004b9930
    MOV ECX,dword ptr [0x01cae204]      ; 004b9933 | DAT_01cae204
        ;   Label: LAB_004b9933
    PUSH ECX                            ; 004b9939
    LEA EAX,[ESP + 0x1c]                ; 004b993a
    PUSH EAX                            ; 004b993e
    LEA EAX,[EDI + 0x150]               ; 004b993f
    PUSH EAX                            ; 004b9945
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004b9946
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    LEA EDX,[EBX + 0xc]                 ; 004b994b
    ADD ESP,0xc                         ; 004b994e
    CMP EDX,EAX                         ; 004b9951
    JZ 0x004b9965                       ; 004b9953
        ;   XREF to: 004b9965 (CONDITIONAL_JUMP)  ; LAB_004b9965
    MOV ECX,dword ptr [EAX]             ; 004b9955
    MOV dword ptr [EDX],ECX             ; 004b9957
    MOV ECX,dword ptr [EAX + 0x4]       ; 004b9959
    MOV dword ptr [EDX + 0x4],ECX       ; 004b995c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004b995f
    MOV dword ptr [EDX + 0x8],ECX       ; 004b9962
    MOV EBP,dword ptr [0x01cae20c]      ; 004b9965 | DAT_01cae20c
        ;   Label: LAB_004b9965
    PUSH EBP                            ; 004b996b
    LEA EAX,[ESP + 0x4]                 ; 004b996c
    PUSH EAX                            ; 004b9970
    LEA EAX,[EDI + 0x150]               ; 004b9971
    PUSH EAX                            ; 004b9977
    ADD EBX,0x18                        ; 004b9978
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 004b997b
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380()
    ADD ESP,0xc                         ; 004b9980
    CMP EBX,EAX                         ; 004b9983
    JNZ 0x004b9991                      ; 004b9985
        ;   XREF to: 004b9991 (CONDITIONAL_JUMP)  ; LAB_004b9991
    MOV EAX,ESI                         ; 004b9987
    ADD ESP,0x24                        ; 004b9989
    POP EBP                             ; 004b998c
    POP EDI                             ; 004b998d
    POP ESI                             ; 004b998e
    POP EBX                             ; 004b998f
    RET                                 ; 004b9990
    MOV EDX,dword ptr [EAX]             ; 004b9991
        ;   Label: LAB_004b9991
    MOV dword ptr [EBX],EDX             ; 004b9993
    MOV EDX,dword ptr [EAX + 0x4]       ; 004b9995
    MOV dword ptr [EBX + 0x4],EDX       ; 004b9998
    MOV EDX,dword ptr [EAX + 0x8]       ; 004b999b
    MOV dword ptr [EBX + 0x8],EDX       ; 004b999e
    MOV EAX,ESI                         ; 004b99a1
    ADD ESP,0x24                        ; 004b99a3
    POP EBP                             ; 004b99a6
    POP EDI                             ; 004b99a7
    POP ESI                             ; 004b99a8
    POP EBX                             ; 004b99a9
    RET                                 ; 004b99aa

