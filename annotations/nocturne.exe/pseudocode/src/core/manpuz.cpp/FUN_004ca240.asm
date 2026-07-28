; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_manpuz_cpp_FUN_004ca240(int param_1,SIntersectXZCylinder *param_2)
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca240
        ;   Label: core_manpuz.cpp_FUN_004ca240
    PUSH ESI                            ; 004ca241
    PUSH EDI                            ; 004ca242
    SUB ESP,0x18                        ; 004ca243
    MOV ESI,dword ptr [ESP + 0x28]      ; 004ca246
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004ca24a
    LEA EAX,[ESI + 0x150]               ; 004ca24e
    PUSH EAX                            ; 004ca254
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 004ca255
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    LEA EBX,[EAX + 0x338]               ; 004ca25a
    ADD ESP,0x4                         ; 004ca260
    MOV EAX,dword ptr [EBX]             ; 004ca263
    MOV dword ptr [ESP],EAX             ; 004ca265
    LEA EAX,[EBX + 0x4]                 ; 004ca268
    MOV EAX,dword ptr [EAX]             ; 004ca26b
    MOV dword ptr [ESP + 0x4],EAX       ; 004ca26d
    LEA EAX,[EBX + 0x8]                 ; 004ca271
    MOV EAX,dword ptr [EAX]             ; 004ca274
    MOV dword ptr [ESP + 0x8],EAX       ; 004ca276
    MOV EAX,dword ptr [EBX + 0xc]       ; 004ca27a
    ADD EBX,0xc                         ; 004ca27d
    MOV dword ptr [ESP + 0xc],EAX       ; 004ca280
    LEA EAX,[EBX + 0x4]                 ; 004ca284
    MOV EAX,dword ptr [EAX]             ; 004ca287
    MOV dword ptr [ESP + 0x10],EAX      ; 004ca289
    LEA EAX,[EBX + 0x8]                 ; 004ca28d
    ADD ESI,0x5e8                       ; 004ca290
    MOV EAX,dword ptr [EAX]             ; 004ca296
    MOV EBX,ESI                         ; 004ca298
    MOV dword ptr [ESP + 0x14],EAX      ; 004ca29a
    ADD ESI,0x4b0                       ; 004ca29e
    CMP dword ptr [EBX],0x0             ; 004ca2a4
        ;   Label: LAB_004ca2a4
    JNZ 0x004ca2b7                      ; 004ca2a7
        ;   XREF to: 004ca2b7 (CONDITIONAL_JUMP)  ; LAB_004ca2b7
    ADD EBX,0x64                        ; 004ca2a9
    CMP EBX,ESI                         ; 004ca2ac
    JNZ 0x004ca2a4                      ; 004ca2ae
        ;   XREF to: 004ca2a4 (CONDITIONAL_JUMP)  ; LAB_004ca2a4
    ADD ESP,0x18                        ; 004ca2b0
    POP EDI                             ; 004ca2b3
    POP ESI                             ; 004ca2b4
    POP EBX                             ; 004ca2b5
    RET                                 ; 004ca2b6
    LEA EAX,[EBX + 0x24]                ; 004ca2b7
        ;   Label: LAB_004ca2b7
    PUSH EAX                            ; 004ca2ba
    LEA EAX,[EBX + 0xc]                 ; 004ca2bb
    PUSH EAX                            ; 004ca2be
    LEA EAX,[ESP + 0x8]                 ; 004ca2bf
    PUSH EAX                            ; 004ca2c3
    PUSH EDI                            ; 004ca2c4
    MOV ECX,dword ptr [0x005be368]      ; 004ca2c5 | DAT_005be368
    PUSH ECX                            ; 004ca2cb | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710 ; 004ca2cc
        ;   XREF to: 00510710 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testOBBCylinderCollision_FUN_00510710(CDemonSet * this_ptr, SIntersectXZCylinder * cylinder, CBoundingBox3D * bounding_box, CVector3f * position, ...)
    ADD ESP,0x14                        ; 004ca2d1
    ADD EBX,0x64                        ; 004ca2d4
    CMP EBX,ESI                         ; 004ca2d7
    JNZ 0x004ca2a4                      ; 004ca2d9
        ;   XREF to: 004ca2a4 (CONDITIONAL_JUMP)  ; LAB_004ca2a4
    ADD ESP,0x18                        ; 004ca2db
    POP EDI                             ; 004ca2de
    POP ESI                             ; 004ca2df
    POP EBX                             ; 004ca2e0
    RET                                 ; 004ca2e1

