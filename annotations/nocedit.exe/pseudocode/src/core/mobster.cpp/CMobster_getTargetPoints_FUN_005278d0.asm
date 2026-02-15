; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mobster_cpp_CMobster_getTargetPoints_FUN_005278d0(CMobster *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
; Local Variables:
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x28]:1  local_28
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   int INT_02f37ec8
;   int INT_02f37eec
;   int INT_02f37ef4
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005278d0
        ;   Label: core_mobster.cpp_CMobster_getTargetPoints_FUN_005278d0
    PUSH ESI                            ; 005278d1
    PUSH EDI                            ; 005278d2
    PUSH EBP                            ; 005278d3
    SUB ESP,0x24                        ; 005278d4
    MOV ESI,dword ptr [ESP + 0x38]      ; 005278d7
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005278db
    MOV EDX,dword ptr [0x02f37ec8]      ; 005278df | INT_02f37ec8
    PUSH EDX                            ; 005278e5
    LEA EAX,[ESP + 0x1c]                ; 005278e6
    PUSH EAX                            ; 005278ea
    LEA EAX,[ESI + 0x158]               ; 005278eb
    PUSH EAX                            ; 005278f1
    MOV EBX,0x1                         ; 005278f2
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 005278f7
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005278fc
    CMP EDI,EAX                         ; 005278ff
    JNZ 0x0052796d                      ; 00527901
        ;   XREF to: 0052796d (CONDITIONAL_JUMP)  ; LAB_0052796d
    MOV EAX,dword ptr [ESI + 0xbf80]    ; 00527903
        ;   Label: LAB_00527903
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 00527909
    JZ 0x00527953                       ; 00527911
        ;   XREF to: 00527953 (CONDITIONAL_JUMP)  ; LAB_00527953
    MOV EBP,dword ptr [0x02f37eec]      ; 00527913 | INT_02f37eec
    PUSH EBP                            ; 00527919
    LEA EAX,[ESP + 0x10]                ; 0052791a
    PUSH EAX                            ; 0052791e
    LEA EAX,[ESI + 0x158]               ; 0052791f
    PUSH EAX                            ; 00527925
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00527926
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV EDX,EAX                         ; 0052792b
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052792d
    SUB EAX,EBX                         ; 00527934
    SHL EAX,0x2                         ; 00527936
    ADD EAX,EDI                         ; 00527939
    ADD ESP,0xc                         ; 0052793b
    CMP EAX,EDX                         ; 0052793e
    JZ 0x00527952                       ; 00527940
        ;   XREF to: 00527952 (CONDITIONAL_JUMP)  ; LAB_00527952
    MOV ECX,dword ptr [EDX]             ; 00527942
    MOV dword ptr [EAX],ECX             ; 00527944
    MOV ECX,dword ptr [EDX + 0x4]       ; 00527946
    MOV dword ptr [EAX + 0x4],ECX       ; 00527949
    MOV ECX,dword ptr [EDX + 0x8]       ; 0052794c
    MOV dword ptr [EAX + 0x8],ECX       ; 0052794f
    INC EBX                             ; 00527952
        ;   Label: LAB_00527952
    MOV EAX,dword ptr [ESI + 0xbf84]    ; 00527953
        ;   Label: LAB_00527953
    CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0 ; 00527959
    JNZ 0x0052797f                      ; 00527961
        ;   XREF to: 0052797f (CONDITIONAL_JUMP)  ; LAB_0052797f
    MOV EAX,EBX                         ; 00527963
    ADD ESP,0x24                        ; 00527965
    POP EBP                             ; 00527968
    POP EDI                             ; 00527969
    POP ESI                             ; 0052796a
    POP EBX                             ; 0052796b
    RET                                 ; 0052796c
    MOV EDX,dword ptr [EAX]             ; 0052796d
        ;   Label: LAB_0052796d
    MOV dword ptr [EDI],EDX             ; 0052796f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00527971
    MOV dword ptr [EDI + 0x4],EDX       ; 00527974
    MOV EDX,dword ptr [EAX + 0x8]       ; 00527977
    MOV dword ptr [EDI + 0x8],EDX       ; 0052797a
    JMP 0x00527903                      ; 0052797d
        ;   XREF to: 00527903 (UNCONDITIONAL_JUMP)  ; LAB_00527903
    MOV ECX,dword ptr [0x02f37ef4]      ; 0052797f | INT_02f37ef4
        ;   Label: LAB_0052797f
    PUSH ECX                            ; 00527985
    LEA EAX,[ESP + 0x4]                 ; 00527986
    PUSH EAX                            ; 0052798a
    ADD ESI,0x158                       ; 0052798b
    PUSH ESI                            ; 00527991
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00527992
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    MOV ESI,EAX                         ; 00527997
    LEA EAX,[EBX*0x4 + 0x0]             ; 00527999
    SUB EAX,EBX                         ; 005279a0
    SHL EAX,0x2                         ; 005279a2
    ADD EDI,EAX                         ; 005279a5
    ADD ESP,0xc                         ; 005279a7
    CMP EDI,ESI                         ; 005279aa
    JZ 0x005279be                       ; 005279ac
        ;   XREF to: 005279be (CONDITIONAL_JUMP)  ; LAB_005279be
    MOV EAX,dword ptr [ESI]             ; 005279ae
    MOV dword ptr [EDI],EAX             ; 005279b0
    MOV EAX,dword ptr [ESI + 0x4]       ; 005279b2
    MOV dword ptr [EDI + 0x4],EAX       ; 005279b5
    MOV EAX,dword ptr [ESI + 0x8]       ; 005279b8
    MOV dword ptr [EDI + 0x8],EAX       ; 005279bb
    INC EBX                             ; 005279be
        ;   Label: LAB_005279be
    MOV EAX,EBX                         ; 005279bf
    ADD ESP,0x24                        ; 005279c1
    POP EBP                             ; 005279c4
    POP EDI                             ; 005279c5
    POP ESI                             ; 005279c6
    POP EBX                             ; 005279c7
    RET                                 ; 005279c8

