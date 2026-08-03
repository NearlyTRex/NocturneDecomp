; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_sentinel_cpp_CSentinel_getTargetPoints_FUN_00506940(CSentinel *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   undefined4 DAT_01e57218
;   undefined4 DAT_01e5722c
;   undefined4 DAT_01e57230
;   undefined4 DAT_01e5723c
;   undefined4 DAT_01e57244
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506940
        ;   Label: core_sentinel.cpp_CSentinel_getTargetPoints_FUN_00506940
    PUSH ESI                            ; 00506941
    PUSH EDI                            ; 00506942
    PUSH EBP                            ; 00506943
    SUB ESP,0x3c                        ; 00506944
    MOV ESI,dword ptr [ESP + 0x50]      ; 00506947
    MOV EBX,dword ptr [ESP + 0x54]      ; 0050694b
    MOV EDX,dword ptr [0x01e57218]      ; 0050694f | DAT_01e57218
    PUSH EDX                            ; 00506955
    LEA EAX,[ESP + 0x1c]                ; 00506956
    PUSH EAX                            ; 0050695a
    LEA EAX,[ESI + 0x150]               ; 0050695b
    PUSH EAX                            ; 00506961
    MOV EDI,0x5                         ; 00506962
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00506967
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 0050696c
    CMP EBX,EAX                         ; 0050696f
    JZ 0x00506983                       ; 00506971
        ;   XREF to: 00506983 (CONDITIONAL_JUMP)  ; LAB_00506983
    MOV EDX,dword ptr [EAX]             ; 00506973
    MOV dword ptr [EBX],EDX             ; 00506975
    MOV EDX,dword ptr [EAX + 0x4]       ; 00506977
    MOV dword ptr [EBX + 0x4],EDX       ; 0050697a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050697d
    MOV dword ptr [EBX + 0x8],EDX       ; 00506980
    MOV ECX,dword ptr [0x01e5722c]      ; 00506983 | DAT_01e5722c
        ;   Label: LAB_00506983
    PUSH ECX                            ; 00506989
    LEA EAX,[ESP + 0x28]                ; 0050698a
    PUSH EAX                            ; 0050698e
    LEA EAX,[ESI + 0x150]               ; 0050698f
    PUSH EAX                            ; 00506995
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00506996
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0xc]                 ; 0050699b
    ADD ESP,0xc                         ; 0050699e
    CMP EDX,EAX                         ; 005069a1
    JZ 0x005069b5                       ; 005069a3
        ;   XREF to: 005069b5 (CONDITIONAL_JUMP)  ; LAB_005069b5
    MOV ECX,dword ptr [EAX]             ; 005069a5
    MOV dword ptr [EDX],ECX             ; 005069a7
    MOV ECX,dword ptr [EAX + 0x4]       ; 005069a9
    MOV dword ptr [EDX + 0x4],ECX       ; 005069ac
    MOV ECX,dword ptr [EAX + 0x8]       ; 005069af
    MOV dword ptr [EDX + 0x8],ECX       ; 005069b2
    MOV EBP,dword ptr [0x01e57230]      ; 005069b5 | DAT_01e57230
        ;   Label: LAB_005069b5
    PUSH EBP                            ; 005069bb
    LEA EAX,[ESP + 0x34]                ; 005069bc
    PUSH EAX                            ; 005069c0
    LEA EAX,[ESI + 0x150]               ; 005069c1
    PUSH EAX                            ; 005069c7
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 005069c8
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0x18]                ; 005069cd
    ADD ESP,0xc                         ; 005069d0
    CMP EDX,EAX                         ; 005069d3
    JZ 0x005069e7                       ; 005069d5
        ;   XREF to: 005069e7 (CONDITIONAL_JUMP)  ; LAB_005069e7
    MOV ECX,dword ptr [EAX]             ; 005069d7
    MOV dword ptr [EDX],ECX             ; 005069d9
    MOV ECX,dword ptr [EAX + 0x4]       ; 005069db
    MOV dword ptr [EDX + 0x4],ECX       ; 005069de
    MOV ECX,dword ptr [EAX + 0x8]       ; 005069e1
    MOV dword ptr [EDX + 0x8],ECX       ; 005069e4
    MOV EAX,[0x01e5723c]                ; 005069e7 | DAT_01e5723c
        ;   Label: LAB_005069e7
    PUSH EAX                            ; 005069ec
    LEA EAX,[ESP + 0x10]                ; 005069ed
    PUSH EAX                            ; 005069f1
    LEA EAX,[ESI + 0x150]               ; 005069f2
    PUSH EAX                            ; 005069f8
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 005069f9
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    LEA EDX,[EBX + 0x24]                ; 005069fe
    ADD ESP,0xc                         ; 00506a01
    CMP EDX,EAX                         ; 00506a04
    JZ 0x00506a18                       ; 00506a06
        ;   XREF to: 00506a18 (CONDITIONAL_JUMP)  ; LAB_00506a18
    MOV ECX,dword ptr [EAX]             ; 00506a08
    MOV dword ptr [EDX],ECX             ; 00506a0a
    MOV ECX,dword ptr [EAX + 0x4]       ; 00506a0c
    MOV dword ptr [EDX + 0x4],ECX       ; 00506a0f
    MOV ECX,dword ptr [EAX + 0x8]       ; 00506a12
    MOV dword ptr [EDX + 0x8],ECX       ; 00506a15
    MOV EDX,dword ptr [0x01e57244]      ; 00506a18 | DAT_01e57244
        ;   Label: LAB_00506a18
    PUSH EDX                            ; 00506a1e
    LEA EAX,[ESP + 0x4]                 ; 00506a1f
    PUSH EAX                            ; 00506a23
    ADD ESI,0x150                       ; 00506a24
    PUSH ESI                            ; 00506a2a
    ADD EBX,0x30                        ; 00506a2b
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00506a2e
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00506a33
    CMP EBX,EAX                         ; 00506a36
    JNZ 0x00506a44                      ; 00506a38
        ;   XREF to: 00506a44 (CONDITIONAL_JUMP)  ; LAB_00506a44
    MOV EAX,EDI                         ; 00506a3a
    ADD ESP,0x3c                        ; 00506a3c
    POP EBP                             ; 00506a3f
    POP EDI                             ; 00506a40
    POP ESI                             ; 00506a41
    POP EBX                             ; 00506a42
    RET                                 ; 00506a43
    MOV EDX,dword ptr [EAX]             ; 00506a44
        ;   Label: LAB_00506a44
    MOV dword ptr [EBX],EDX             ; 00506a46
    MOV EDX,dword ptr [EAX + 0x4]       ; 00506a48
    MOV dword ptr [EBX + 0x4],EDX       ; 00506a4b
    MOV EDX,dword ptr [EAX + 0x8]       ; 00506a4e
    MOV dword ptr [EBX + 0x8],EDX       ; 00506a51
    MOV EAX,EDI                         ; 00506a54
    ADD ESP,0x3c                        ; 00506a56
    POP EBP                             ; 00506a59
    POP EDI                             ; 00506a5a
    POP ESI                             ; 00506a5b
    POP EBX                             ; 00506a5c
    RET                                 ; 00506a5d

