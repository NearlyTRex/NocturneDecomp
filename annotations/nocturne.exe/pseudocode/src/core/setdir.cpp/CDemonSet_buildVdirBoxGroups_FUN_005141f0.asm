; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0(CDemonSet *param_1)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 00508697
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 00507711
;
; Called Functions:
;   core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300
;   core_setdir.cpp_testOBBIntersection_FUN_00513e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005141f0
        ;   Label: core_setdir.cpp_CDemonSet_buildVdirBoxGroups_FUN_005141f0
    PUSH ESI                            ; 005141f1
    PUSH EDI                            ; 005141f2
    PUSH EBP                            ; 005141f3
    SUB ESP,0x18                        ; 005141f4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005141f7
    MOV EDX,dword ptr [EDI + 0x15b028]  ; 005141fb
    XOR EAX,EAX                         ; 00514201
    TEST EDX,EDX                        ; 00514203
    JLE 0x00514230                      ; 00514205
        ;   XREF to: 00514230 (CONDITIONAL_JUMP)  ; LAB_00514230
    MOV EBX,EDI                         ; 00514207
    MOV dword ptr [EBX + 0x15b06c],0xffffffff ; 00514209
        ;   Label: LAB_00514209
    INC EAX                             ; 00514213
    MOV ECX,dword ptr [EDI + 0x15b028]  ; 00514214
    ADD EBX,0x44                        ; 0051421a
    CMP EAX,ECX                         ; 0051421d
    JL 0x00514209                       ; 0051421f
        ;   XREF to: 00514209 (CONDITIONAL_JUMP)  ; LAB_00514209
    LEA EAX,[EAX]                       ; 00514221
    LEA EDX,[EDX]                       ; 00514227
    LEA EAX,[EAX]                       ; 0051422d
    XOR EBX,EBX                         ; 00514230
        ;   Label: LAB_00514230
    MOV ESI,dword ptr [EDI + 0x15b028]  ; 00514232
    MOV dword ptr [ESP + 0x4],EBX       ; 00514238
    TEST ESI,ESI                        ; 0051423c
    JLE 0x0051428a                      ; 0051423e
        ;   XREF to: 0051428a (CONDITIONAL_JUMP)  ; LAB_0051428a
    LEA EAX,[EDI + 0x15b02c]            ; 00514240
    MOV dword ptr [ESP],EBX             ; 00514246
    MOV dword ptr [ESP + 0xc],EAX       ; 00514249
    MOV EBX,dword ptr [ESP + 0x4]       ; 0051424d
        ;   Label: LAB_0051424d
    PUSH EBX                            ; 00514251
    PUSH EDI                            ; 00514252
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300 ; 00514253
        ;   XREF to: 00514300 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(CDemonSet * this_ptr, int box_index)
    INC EBX                             ; 00514258
    ADD ESP,0x8                         ; 00514259
    MOV ESI,dword ptr [EDI + 0x15b028]  ; 0051425c
    MOV dword ptr [ESP + 0x14],EAX      ; 00514262
    CMP EBX,ESI                         ; 00514266
    JL 0x00514292                       ; 00514268
        ;   XREF to: 00514292 (CONDITIONAL_JUMP)  ; LAB_00514292
    MOV EBP,dword ptr [ESP]             ; 0051426e
        ;   Label: LAB_0051426e
    MOV EAX,dword ptr [ESP + 0x4]       ; 00514271
    MOV EDX,dword ptr [EDI + 0x15b028]  ; 00514275
    ADD EBP,0x44                        ; 0051427b
    INC EAX                             ; 0051427e
    MOV dword ptr [ESP],EBP             ; 0051427f
    MOV dword ptr [ESP + 0x4],EAX       ; 00514282
    CMP EAX,EDX                         ; 00514286
    JL 0x0051424d                       ; 00514288
        ;   XREF to: 0051424d (CONDITIONAL_JUMP)  ; LAB_0051424d
    ADD ESP,0x18                        ; 0051428a
        ;   Label: LAB_0051428a
    POP EBP                             ; 0051428d
    POP EDI                             ; 0051428e
    POP ESI                             ; 0051428f
    POP EBX                             ; 00514290
        ;   Label: LAB_00514290
    RET                                 ; 00514291
    IMUL ESI,EBX,0x44                   ; 00514292
        ;   Label: LAB_00514292
    MOV EAX,dword ptr [ESP]             ; 00514295
    MOV dword ptr [ESP + 0x8],EAX       ; 00514298
    ADD ESI,dword ptr [ESP + 0xc]       ; 0051429c
    JMP 0x005142be                      ; 005142a0
        ;   XREF to: 005142be (UNCONDITIONAL_JUMP)  ; LAB_005142be
    PUSH EBP                            ; 005142a2
        ;   Label: LAB_005142a2
    PUSH ESI                            ; 005142a3
    CALL core_setdir.cpp_testOBBIntersection_FUN_00513e80 ; 005142a4
        ;   XREF to: 00513e80 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_testOBBIntersection_FUN_00513e80(SVDBox * obb_a, SVDBox * obb_b)
    ADD ESP,0x8                         ; 005142a9
    TEST EAX,EAX                        ; 005142ac
    JNZ 0x005142ec                      ; 005142ae
        ;   XREF to: 005142ec (CONDITIONAL_JUMP)  ; LAB_005142ec
    INC EBX                             ; 005142b0
        ;   Label: LAB_005142b0
    MOV EBP,dword ptr [EDI + 0x15b028]  ; 005142b1
    ADD ESI,0x44                        ; 005142b7
    CMP EBX,EBP                         ; 005142ba
    JGE 0x0051426e                      ; 005142bc
        ;   XREF to: 0051426e (CONDITIONAL_JUMP)  ; LAB_0051426e
    PUSH EBX                            ; 005142be
        ;   Label: LAB_005142be
    PUSH EDI                            ; 005142bf
    CALL core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300 ; 005142c0
        ;   XREF to: 00514300 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_CDemonSet_findVdirBoxRoot_FUN_00514300(CDemonSet * this_ptr, int box_index)
    ADD ESP,0x8                         ; 005142c5
    MOV EDX,dword ptr [ESP + 0x14]      ; 005142c8
    MOV dword ptr [ESP + 0x10],EAX      ; 005142cc
    CMP EAX,EDX                         ; 005142d0
    JZ 0x005142b0                       ; 005142d2
        ;   XREF to: 005142b0 (CONDITIONAL_JUMP)  ; LAB_005142b0
    MOV EBP,dword ptr [ESP + 0xc]       ; 005142d4
    MOV ECX,dword ptr [ESP + 0x8]       ; 005142d8
    PUSH ESI                            ; 005142dc
    ADD EBP,ECX                         ; 005142dd
    PUSH EBP                            ; 005142df
    CALL core_setdir.cpp_testOBBIntersection_FUN_00513e80 ; 005142e0
        ;   XREF to: 00513e80 (UNCONDITIONAL_CALL)  ; int core_setdir.cpp_testOBBIntersection_FUN_00513e80(SVDBox * obb_a, SVDBox * obb_b)
    ADD ESP,0x8                         ; 005142e5
    TEST EAX,EAX                        ; 005142e8
    JZ 0x005142a2                       ; 005142ea
        ;   XREF to: 005142a2 (CONDITIONAL_JUMP)  ; LAB_005142a2
    IMUL EAX,dword ptr [ESP + 0x10],0x44 ; 005142ec
        ;   Label: LAB_005142ec
    MOV EBP,dword ptr [ESP + 0x14]      ; 005142f1
    MOV dword ptr [EDI + EAX*0x1 + 0x15b06c],EBP ; 005142f5
    JMP 0x005142b0                      ; 005142fc
        ;   XREF to: 005142b0 (UNCONDITIONAL_JUMP)  ; LAB_005142b0

