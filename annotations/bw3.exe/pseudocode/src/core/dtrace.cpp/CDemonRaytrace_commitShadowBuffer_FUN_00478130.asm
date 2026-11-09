; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_00478130(CDemonRaytrace *this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40 at 0053ef45
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478130
        ;   Label: core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_00478130
    PUSH ESI                            ; 00478131
    PUSH EDI                            ; 00478132
    PUSH EBP                            ; 00478133
    SUB ESP,0x8                         ; 00478134
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00478137
    XOR EDX,EDX                         ; 0047813b
    MOV ECX,dword ptr [EBP + 0x40]      ; 0047813d
    MOV dword ptr [ESP],EDX             ; 00478140
    TEST ECX,ECX                        ; 00478143
    JLE 0x00478199                      ; 00478145
        ;   XREF to: 00478199 (CONDITIONAL_JUMP)  ; LAB_00478199
    XOR EDI,EDI                         ; 00478147
        ;   Label: LAB_00478147
    MOV EAX,dword ptr [EBP + 0x44]      ; 00478149
    MOV dword ptr [ESP + 0x4],EDI       ; 0047814c
    TEST EAX,EAX                        ; 00478150
    JLE 0x0047818b                      ; 00478152
        ;   XREF to: 0047818b (CONDITIONAL_JUMP)  ; LAB_0047818b
    MOV ESI,dword ptr [EBP + 0x48]      ; 00478154
        ;   Label: LAB_00478154
    XOR EBX,EBX                         ; 00478157
    TEST ESI,ESI                        ; 00478159
    JLE 0x0047817b                      ; 0047815b
        ;   XREF to: 0047817b (CONDITIONAL_JUMP)  ; LAB_0047817b
    PUSH EBX                            ; 0047815d
        ;   Label: LAB_0047815d
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047815e
    PUSH EAX                            ; 00478162
    MOV EDX,dword ptr [ESP + 0x8]       ; 00478163
    PUSH EDX                            ; 00478167
    PUSH EBP                            ; 00478168
    CALL core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60 ; 00478169
        ;   XREF to: 00473b60 (UNCONDITIONAL_CALL)  ; CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)
    ADD ESP,0x10                        ; 0047816e
    TEST EAX,EAX                        ; 00478171
    JNZ 0x004781a1                      ; 00478173
        ;   XREF to: 004781a1 (CONDITIONAL_JUMP)  ; LAB_004781a1
    INC EBX                             ; 00478175
        ;   Label: LAB_00478175
    CMP EBX,dword ptr [EBP + 0x48]      ; 00478176
    JL 0x0047815d                       ; 00478179
        ;   XREF to: 0047815d (CONDITIONAL_JUMP)  ; LAB_0047815d
    MOV EDX,dword ptr [ESP + 0x4]       ; 0047817b
        ;   Label: LAB_0047817b
    INC EDX                             ; 0047817f
    MOV ECX,dword ptr [EBP + 0x44]      ; 00478180
    MOV dword ptr [ESP + 0x4],EDX       ; 00478183
    CMP EDX,ECX                         ; 00478187
    JL 0x00478154                       ; 00478189
        ;   XREF to: 00478154 (CONDITIONAL_JUMP)  ; LAB_00478154
    MOV EBX,dword ptr [ESP]             ; 0047818b
        ;   Label: LAB_0047818b
    INC EBX                             ; 0047818e
    MOV ESI,dword ptr [EBP + 0x40]      ; 0047818f
    MOV dword ptr [ESP],EBX             ; 00478192
    CMP EBX,ESI                         ; 00478195
    JL 0x00478147                       ; 00478197
        ;   XREF to: 00478147 (CONDITIONAL_JUMP)  ; LAB_00478147
    ADD ESP,0x8                         ; 00478199
        ;   Label: LAB_00478199
    POP EBP                             ; 0047819c
    POP EDI                             ; 0047819d
    POP ESI                             ; 0047819e
    POP EBX                             ; 0047819f
    RET                                 ; 004781a0
    MOV ECX,dword ptr [EAX]             ; 004781a1
        ;   Label: LAB_004781a1
    TEST ECX,ECX                        ; 004781a3
    JZ 0x00478175                       ; 004781a5
        ;   XREF to: 00478175 (CONDITIONAL_JUMP)  ; LAB_00478175
    MOV ESI,dword ptr [EAX + 0x4]       ; 004781a7
    TEST ESI,ESI                        ; 004781aa
    JZ 0x00478175                       ; 004781ac
        ;   XREF to: 00478175 (CONDITIONAL_JUMP)  ; LAB_00478175
    MOV EDI,ECX                         ; 004781ae
    MOV ECX,0x40                        ; 004781b0
    PUSH EDI                            ; 004781b5
    MOV EAX,ECX                         ; 004781b6
    SHR ECX,0x2                         ; 004781b8
    MOVSD.REP ES:EDI,ESI                ; 004781bb
    MOV CL,AL                           ; 004781bd
    AND CL,0x3                          ; 004781bf
    MOVSB.REP ES:EDI,ESI                ; 004781c2
    POP EDI                             ; 004781c4
    JMP 0x00478175                      ; 004781c5
        ;   XREF to: 00478175 (UNCONDITIONAL_JUMP)  ; LAB_00478175

