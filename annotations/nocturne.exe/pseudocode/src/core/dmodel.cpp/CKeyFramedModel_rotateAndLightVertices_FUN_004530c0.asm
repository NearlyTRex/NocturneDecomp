; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004530c0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 at 0045305f
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004530c0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004530c0
    PUSH ESI                            ; 004530c1
    PUSH EDI                            ; 004530c2
    PUSH EBP                            ; 004530c3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004530c4
    CMP dword ptr [EBX + 0x110],0x1     ; 004530c8
    JGE 0x004530d6                      ; 004530cf
        ;   XREF to: 004530d6 (CONDITIONAL_JUMP)  ; LAB_004530d6
    POP EBP                             ; 004530d1
    POP EDI                             ; 004530d2
    POP ESI                             ; 004530d3
    POP EBX                             ; 004530d4
    RET                                 ; 004530d5
    MOV ECX,dword ptr [ESP + 0x18]      ; 004530d6
        ;   Label: LAB_004530d6
    PUSH ECX                            ; 004530da
    PUSH EBX                            ; 004530db
    CALL core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080 ; 004530dc
        ;   XREF to: 00453080 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080()
    ADD ESP,0x8                         ; 004530e1
    PUSH EAX                            ; 004530e4
    MOV EDI,dword ptr [EBX + 0x104]     ; 004530e5
    PUSH EDI                            ; 004530eb
    MOV EBP,dword ptr [0x005be368]      ; 004530ec | DAT_005be368
    PUSH EBP                            ; 004530f2 | DAT_01e57284
    MOV ESI,EAX                         ; 004530f3
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 004530f5
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200()
    MOV EAX,dword ptr [EBX + 0x108]     ; 004530fa
    ADD ESP,0xc                         ; 00453100
    TEST EAX,EAX                        ; 00453103
    JZ 0x00453134                       ; 00453105
        ;   XREF to: 00453134 (CONDITIONAL_JUMP)  ; LAB_00453134
    PUSH EAX                            ; 00453107
    PUSH 0x4                            ; 00453108
    PUSH ESI                            ; 0045310a
    MOV EAX,dword ptr [EBX + 0x114]     ; 0045310b
    PUSH EAX                            ; 00453111
    MOV EDX,dword ptr [EBX + 0x110]     ; 00453112
    PUSH EDX                            ; 00453118
    MOV ECX,dword ptr [EBX + 0x104]     ; 00453119
    PUSH ECX                            ; 0045311f
    MOV EBX,dword ptr [0x005be368]      ; 00453120 | DAT_005be368
    PUSH EBX                            ; 00453126 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 00453127
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0()
    ADD ESP,0x1c                        ; 0045312c
    POP EBP                             ; 0045312f
    POP EDI                             ; 00453130
    POP ESI                             ; 00453131
    POP EBX                             ; 00453132
    RET                                 ; 00453133
    PUSH EAX                            ; 00453134
        ;   Label: LAB_00453134
    PUSH 0x4                            ; 00453135
    PUSH ESI                            ; 00453137
    MOV EDX,dword ptr [EBX + 0x114]     ; 00453138
    PUSH EDX                            ; 0045313e
    MOV ECX,dword ptr [EBX + 0x110]     ; 0045313f
    PUSH ECX                            ; 00453145
    MOV ESI,dword ptr [EBX + 0x104]     ; 00453146
    PUSH ESI                            ; 0045314c
    MOV EDI,dword ptr [0x005be368]      ; 0045314d | DAT_005be368
    PUSH EDI                            ; 00453153 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0 ; 00453154
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0()
    ADD ESP,0x1c                        ; 00453159
    POP EBP                             ; 0045315c
    POP EDI                             ; 0045315d
    POP ESI                             ; 0045315e
    POP EBX                             ; 0045315f
    RET                                 ; 00453160

