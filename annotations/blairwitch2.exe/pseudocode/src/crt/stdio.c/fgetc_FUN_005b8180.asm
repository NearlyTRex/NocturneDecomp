; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_stdio_c_fgetc_FUN_005b8180(undefined4 *param_1)
;
;
; XREF[28]:
;   cockpit_ckptutil.c_FUN_0042f330 at 0042f39b
;   core_actor.cpp_archiveBox_FUN_0040bee0 at 0040befb
;   core_actor.cpp_archiveClothList_FUN_0040bfd0 at 0040bff0
;   core_actor.cpp_archiveDescription_FUN_0040b400 at 0040b41b
;   core_actor.cpp_archiveMotionState_FUN_0040bb60 at 0040bb7b
;   core_actor.cpp_archivePartStatus_FUN_0040bc50 at 0040bc73
;   core_actor.cpp_archiveRules_FUN_0040c170 at 0040c18c
;   core_actor.cpp_archiveString_FUN_0040b730 at 0040b750
;   core_course.cpp_CCourse_load_FUN_00438af0 at 00438b28
;   core_dmodel.cpp_CKeyFramedModel_load_FUN_0044dcd0 at 0044dd23
;   ... and 18 more
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2a8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2ac = 005bce04
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005be180
;   crt_unknown.c_FUN_005b8250
;   crt_unknown.c_FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8180
        ;   Label: crt_stdio.c_fgetc_FUN_005b8180
    PUSH ESI                            ; 005b8181
    PUSH EDI                            ; 005b8182
    PUSH EBP                            ; 005b8183
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b8184
    MOV EDX,dword ptr [EBX + 0x10]      ; 005b8188
    PUSH EDX                            ; 005b818b
    CALL dword ptr [0x0061f2a8]         ; 005b818c | PTR_crt_unknown.c_FUN_005bce04_0061f2a8
    MOV ESI,dword ptr [EBX + 0x8]       ; 005b8192
    MOV ECX,dword ptr [ESI + 0xc]       ; 005b8195
    ADD ESP,0x4                         ; 005b8198
    CMP ECX,0x1                         ; 005b819b
    JZ 0x005b81b9                       ; 005b819e
        ;   XREF to: 005b81b9 (CONDITIONAL_JUMP)  ; LAB_005b81b9
    TEST ECX,ECX                        ; 005b81a0
    JZ 0x005b81b2                       ; 005b81a2
        ;   XREF to: 005b81b2 (CONDITIONAL_JUMP)  ; LAB_005b81b2
    MOV EBP,dword ptr [EBX + 0x10]      ; 005b81a4
    PUSH EBP                            ; 005b81a7
    MOV ESI,0xffffffff                  ; 005b81a8
    JMP 0x005b823e                      ; 005b81ad
        ;   XREF to: 005b823e (UNCONDITIONAL_JUMP)  ; LAB_005b823e
    MOV dword ptr [ESI + 0xc],0x1       ; 005b81b2
        ;   Label: LAB_005b81b2
    TEST byte ptr [EBX + 0xc],0x1       ; 005b81b9
        ;   Label: LAB_005b81b9
    JNZ 0x005b81d9                      ; 005b81bd
        ;   XREF to: 005b81d9 (CONDITIONAL_JUMP)  ; LAB_005b81d9
    PUSH 0x4                            ; 005b81bf
    CALL crt_errno.c_setErrno_FUN_005be180 ; 005b81c1
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005be180(int error_code)
    MOV DL,byte ptr [EBX + 0xc]         ; 005b81c6
    MOV ESI,0xffffffff                  ; 005b81c9
    OR DL,0x20                          ; 005b81ce
    ADD ESP,0x4                         ; 005b81d1
    MOV byte ptr [EBX + 0xc],DL         ; 005b81d4
    JMP 0x005b81fa                      ; 005b81d7
        ;   XREF to: 005b81fa (UNCONDITIONAL_JUMP)  ; LAB_005b81fa
    MOV EAX,dword ptr [EBX + 0x4]       ; 005b81d9
        ;   Label: LAB_005b81d9
    DEC EAX                             ; 005b81dc
    MOV dword ptr [EBX + 0x4],EAX       ; 005b81dd
    TEST EAX,EAX                        ; 005b81e0
    JGE 0x005b81f1                      ; 005b81e2
        ;   XREF to: 005b81f1 (CONDITIONAL_JUMP)  ; LAB_005b81f1
    PUSH EBX                            ; 005b81e4
    CALL crt_unknown.c_FUN_005b8250     ; 005b81e5
        ;   XREF to: 005b8250 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8250()
    ADD ESP,0x4                         ; 005b81ea
    MOV ESI,EAX                         ; 005b81ed
    JMP 0x005b81fa                      ; 005b81ef
        ;   XREF to: 005b81fa (UNCONDITIONAL_JUMP)  ; LAB_005b81fa
    MOV EAX,dword ptr [EBX]             ; 005b81f1
        ;   Label: LAB_005b81f1
    INC EAX                             ; 005b81f3
    MOVZX ESI,byte ptr [EAX + -0x1]     ; 005b81f4
    MOV dword ptr [EBX],EAX             ; 005b81f8
    TEST byte ptr [EBX + 0xc],0x40      ; 005b81fa
        ;   Label: LAB_005b81fa
    JNZ 0x005b823a                      ; 005b81fe
        ;   XREF to: 005b823a (CONDITIONAL_JUMP)  ; LAB_005b823a
    CMP ESI,0xd                         ; 005b8200
    JNZ 0x005b8227                      ; 005b8203
        ;   XREF to: 005b8227 (CONDITIONAL_JUMP)  ; LAB_005b8227
    MOV ECX,dword ptr [EBX + 0x4]       ; 005b8205
    DEC ECX                             ; 005b8208
    MOV dword ptr [EBX + 0x4],ECX       ; 005b8209
    TEST ECX,ECX                        ; 005b820c
    JGE 0x005b821d                      ; 005b820e
        ;   XREF to: 005b821d (CONDITIONAL_JUMP)  ; LAB_005b821d
    PUSH EBX                            ; 005b8210
    CALL crt_unknown.c_FUN_005b8250     ; 005b8211
        ;   XREF to: 005b8250 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8250()
    ADD ESP,0x4                         ; 005b8216
    MOV ESI,EAX                         ; 005b8219
    JMP 0x005b8227                      ; 005b821b
        ;   XREF to: 005b8227 (UNCONDITIONAL_JUMP)  ; LAB_005b8227
    MOV EAX,dword ptr [EBX]             ; 005b821d
        ;   Label: LAB_005b821d
    MOV DL,byte ptr [EAX]               ; 005b821f
    INC EAX                             ; 005b8221
    MOVZX ESI,DL                        ; 005b8222
    MOV dword ptr [EBX],EAX             ; 005b8225
    CMP ESI,0x1a                        ; 005b8227
        ;   Label: LAB_005b8227
    JNZ 0x005b823a                      ; 005b822a
        ;   XREF to: 005b823a (CONDITIONAL_JUMP)  ; LAB_005b823a
    MOV CL,byte ptr [EBX + 0xc]         ; 005b822c
    OR CL,0x10                          ; 005b822f
    MOV ESI,0xffffffff                  ; 005b8232
    MOV byte ptr [EBX + 0xc],CL         ; 005b8237
    MOV EDI,dword ptr [EBX + 0x10]      ; 005b823a
        ;   Label: LAB_005b823a
    PUSH EDI                            ; 005b823d
    CALL dword ptr [0x0061f2ac]         ; 005b823e | PTR_crt_unknown.c_FUN_005bce04_0061f2ac
        ;   Label: LAB_005b823e
    ADD ESP,0x4                         ; 005b8244
    MOV EAX,ESI                         ; 005b8247
    POP EBP                             ; 005b8249
    POP EDI                             ; 005b824a
    POP ESI                             ; 005b824b
    POP EBX                             ; 005b824c
    RET                                 ; 005b824d

