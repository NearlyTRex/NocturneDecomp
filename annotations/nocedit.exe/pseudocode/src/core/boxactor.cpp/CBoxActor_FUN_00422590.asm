; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_FUN_00422590(CBoxActor *this_ptr)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x40]:1  local_40
; undefined1       Stack[-0x1c]:1  local_1c
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[1]:
;   core_boxactor.cpp_CBoxActor_FUN_00422390 at 00422498
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422590
        ;   Label: core_boxactor.cpp_CBoxActor_FUN_00422590
    SUB ESP,0x3c                        ; 00422591
    MOV EBX,dword ptr [ESP + 0x44]      ; 00422594
    MOV EDX,dword ptr [EBX + 0x324]     ; 00422598
    TEST EDX,EDX                        ; 0042259e
    JNZ 0x004225a7                      ; 004225a0
        ;   XREF to: 004225a7 (CONDITIONAL_JUMP)  ; LAB_004225a7
    ADD ESP,0x3c                        ; 004225a2
    POP EBX                             ; 004225a5
    RET                                 ; 004225a6
    LEA EAX,[EBX + 0x20]                ; 004225a7
        ;   Label: LAB_004225a7
    PUSH EAX                            ; 004225aa
    LEA EAX,[ESP + 0x28]                ; 004225ab
    PUSH EAX                            ; 004225af
    PUSH EDX                            ; 004225b0
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004225b1
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004225b6
    LEA EAX,[ESP + 0x24]                ; 004225b9
    PUSH EAX                            ; 004225bd
    LEA EAX,[ESP + 0x34]                ; 004225be
    PUSH EAX                            ; 004225c2
    LEA EDX,[ESP + 0x8]                 ; 004225c3
    PUSH EDX                            ; 004225c7
    MOV EAX,dword ptr [EBX + 0x324]     ; 004225c8
    PUSH EAX                            ; 004225ce
    MOV ECX,dword ptr [EAX + 0x154]     ; 004225cf
    CALL dword ptr [ECX + 0x14]         ; 004225d5
    ADD ESP,0x8                         ; 004225d8
    PUSH EAX                            ; 004225db
    CALL core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550 ; 004225dc
        ;   XREF to: 00421550 (UNCONDITIONAL_CALL)  ; CVector3f * core_box.cpp_CBoundingBox3D_clampPoint_FUN_00421550(CBoundingBox3D * this_ptr, CVector3f * out_point, CVector3f * in_point)
    MOV EDX,EAX                         ; 004225e1
    LEA EAX,[ESP + 0x30]                ; 004225e3
    ADD ESP,0xc                         ; 004225e7
    CMP EAX,EDX                         ; 004225ea
    JZ 0x00422602                       ; 004225ec
        ;   XREF to: 00422602 (CONDITIONAL_JUMP)  ; LAB_00422602
    MOV EAX,dword ptr [EDX]             ; 004225ee
    MOV dword ptr [ESP + 0x24],EAX      ; 004225f0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004225f4
    MOV dword ptr [ESP + 0x28],EAX      ; 004225f7
    MOV EAX,dword ptr [EDX + 0x8]       ; 004225fb
    MOV dword ptr [ESP + 0x2c],EAX      ; 004225fe
    PUSH ESI                            ; 00422602
        ;   Label: LAB_00422602
    LEA EAX,[ESP + 0x28]                ; 00422603
    PUSH EAX                            ; 00422607
    LEA EAX,[ESP + 0x20]                ; 00422608
    PUSH EAX                            ; 0042260c
    MOV ESI,dword ptr [EBX + 0x324]     ; 0042260d
    PUSH ESI                            ; 00422613
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00422614
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    FLD float ptr [EAX]                 ; 00422619
    ADD ESP,0xc                         ; 0042261b
    FSTP float ptr [EBX + 0x20]         ; 0042261e
    MOV EDX,dword ptr [EAX + 0x4]       ; 00422621
    MOV dword ptr [EBX + 0x24],EDX      ; 00422624
    MOV EDX,dword ptr [EAX + 0x8]       ; 00422627
    MOV dword ptr [EBX + 0x28],EDX      ; 0042262a
    POP ESI                             ; 0042262d
    ADD ESP,0x3c                        ; 0042262e
    POP EBX                             ; 00422631
    RET                                 ; 00422632

