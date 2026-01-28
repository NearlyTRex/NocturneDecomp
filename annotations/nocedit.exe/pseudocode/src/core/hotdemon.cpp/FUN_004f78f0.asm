; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_hotdemon_cpp_FUN_004f78f0(void)
;
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   int INT_02db88c8
;   int INT_02db88ec
;   int INT_02db88f4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f78f0
        ;   Label: core_hotdemon.cpp_FUN_004f78f0
    PUSH ESI                            ; 004f78f1
    PUSH EDI                            ; 004f78f2
    PUSH EBP                            ; 004f78f3
    SUB ESP,0x24                        ; 004f78f4
    MOV EDI,dword ptr [ESP + 0x38]      ; 004f78f7
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004f78fb
    MOV EDX,dword ptr [0x02db88c8]      ; 004f78ff | INT_02db88c8
    PUSH EDX                            ; 004f7905
    LEA EAX,[ESP + 0x10]                ; 004f7906
    PUSH EAX                            ; 004f790a
    LEA EAX,[EDI + 0x158]               ; 004f790b
    PUSH EAX                            ; 004f7911
    MOV ESI,0x3                         ; 004f7912
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004f7917
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f791c
    CMP EBX,EAX                         ; 004f791f
    JZ 0x004f7933                       ; 004f7921
        ;   XREF to: 004f7933 (CONDITIONAL_JUMP)  ; LAB_004f7933
    MOV EDX,dword ptr [EAX]             ; 004f7923
    MOV dword ptr [EBX],EDX             ; 004f7925
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f7927
    MOV dword ptr [EBX + 0x4],EDX       ; 004f792a
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f792d
    MOV dword ptr [EBX + 0x8],EDX       ; 004f7930
    MOV ECX,dword ptr [0x02db88ec]      ; 004f7933 | INT_02db88ec
        ;   Label: LAB_004f7933
    PUSH ECX                            ; 004f7939
    LEA EAX,[ESP + 0x1c]                ; 004f793a
    PUSH EAX                            ; 004f793e
    LEA EAX,[EDI + 0x158]               ; 004f793f
    PUSH EAX                            ; 004f7945
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004f7946
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0xc]                 ; 004f794b
    ADD ESP,0xc                         ; 004f794e
    CMP EDX,EAX                         ; 004f7951
    JZ 0x004f7965                       ; 004f7953
        ;   XREF to: 004f7965 (CONDITIONAL_JUMP)  ; LAB_004f7965
    MOV ECX,dword ptr [EAX]             ; 004f7955
    MOV dword ptr [EDX],ECX             ; 004f7957
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f7959
    MOV dword ptr [EDX + 0x4],ECX       ; 004f795c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f795f
    MOV dword ptr [EDX + 0x8],ECX       ; 004f7962
    MOV EBP,dword ptr [0x02db88f4]      ; 004f7965 | INT_02db88f4
        ;   Label: LAB_004f7965
    PUSH EBP                            ; 004f796b
    LEA EAX,[ESP + 0x4]                 ; 004f796c
    PUSH EAX                            ; 004f7970
    LEA EAX,[EDI + 0x158]               ; 004f7971
    PUSH EAX                            ; 004f7977
    ADD EBX,0x18                        ; 004f7978
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004f797b
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004f7980
    CMP EBX,EAX                         ; 004f7983
    JNZ 0x004f7991                      ; 004f7985
        ;   XREF to: 004f7991 (CONDITIONAL_JUMP)  ; LAB_004f7991
    MOV EAX,ESI                         ; 004f7987
    ADD ESP,0x24                        ; 004f7989
    POP EBP                             ; 004f798c
    POP EDI                             ; 004f798d
    POP ESI                             ; 004f798e
    POP EBX                             ; 004f798f
    RET                                 ; 004f7990
    MOV EDX,dword ptr [EAX]             ; 004f7991
        ;   Label: LAB_004f7991
    MOV dword ptr [EBX],EDX             ; 004f7993
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f7995
    MOV dword ptr [EBX + 0x4],EDX       ; 004f7998
    MOV EDX,dword ptr [EAX + 0x8]       ; 004f799b
    MOV dword ptr [EBX + 0x8],EDX       ; 004f799e
    MOV EAX,ESI                         ; 004f79a1
    ADD ESP,0x24                        ; 004f79a3
    POP EBP                             ; 004f79a6
    POP EDI                             ; 004f79a7
    POP ESI                             ; 004f79a8
    POP EBX                             ; 004f79a9
    RET                                 ; 004f79aa

