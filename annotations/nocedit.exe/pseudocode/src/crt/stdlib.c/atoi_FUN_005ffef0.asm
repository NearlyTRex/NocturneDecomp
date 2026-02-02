; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_stdlib_c_atoi_FUN_005ffef0(char *string_ptr)
;
; Parameters:
; char *           Stack[0x4]:4   string_ptr
;
; XREF[26]:
;   core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0 at 00456fc9
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057eec3
;   core_setedit.cpp_FUN_00576950 at 00576982
;   core_texlist.cpp_CTextureList_load_FUN_005dbe00 at 005dbf54
;   engine_ini.cpp_getProfileInteger_FUN_004fb9a0 at 004fba04
;   shape_design.c_centerKeyframeModels_FUN_004681a0 at 004681e3
;   shape_design.c_centerVerticesAroundPoint_FUN_0045ea90 at 0045ead3
;   shape_design.c_configureSpatialSplittingPlane_FUN_004617c0 at 0046195a
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046c489
;   shape_design.c_createCenterVertex_FUN_00469690 at 0046976c
;   ... and 16 more
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ffef0
        ;   Label: crt_stdlib.c_atoi_FUN_005ffef0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ffef1
    MOV DL,byte ptr [EAX]               ; 005ffef5
        ;   Label: LAB_005ffef5
    INC DL                              ; 005ffef7
    AND EDX,0xff                        ; 005ffef9
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 005ffeff | g_CharacterClassificationTable
    JZ 0x005fff0b                       ; 005fff06
        ;   XREF to: 005fff0b (CONDITIONAL_JUMP)  ; LAB_005fff0b
    INC EAX                             ; 005fff08
    JMP 0x005ffef5                      ; 005fff09
        ;   XREF to: 005ffef5 (UNCONDITIONAL_JUMP)  ; LAB_005ffef5
    MOV CL,byte ptr [EAX]               ; 005fff0b
        ;   Label: LAB_005fff0b
    CMP CL,0x2b                         ; 005fff0d
    JZ 0x005fff17                       ; 005fff10
        ;   XREF to: 005fff17 (CONDITIONAL_JUMP)  ; LAB_005fff17
    CMP CL,0x2d                         ; 005fff12
    JNZ 0x005fff18                      ; 005fff15
        ;   XREF to: 005fff18 (CONDITIONAL_JUMP)  ; LAB_005fff18
    INC EAX                             ; 005fff17
        ;   Label: LAB_005fff17
    XOR EDX,EDX                         ; 005fff18
        ;   Label: LAB_005fff18
    MOV BL,byte ptr [EAX]               ; 005fff1a
        ;   Label: LAB_005fff1a
    INC BL                              ; 005fff1c
    AND EBX,0xff                        ; 005fff1e
    TEST byte ptr [EBX + 0x6849c4],0x20 ; 005fff24 | g_CharacterClassificationTable
    JZ 0x005fff3c                       ; 005fff2b
        ;   XREF to: 005fff3c (CONDITIONAL_JUMP)  ; LAB_005fff3c
    IMUL EDX,EDX,0xa                    ; 005fff2d
    XOR EBX,EBX                         ; 005fff30
    MOV BL,byte ptr [EAX]               ; 005fff32
    ADD EDX,EBX                         ; 005fff34
    INC EAX                             ; 005fff36
    SUB EDX,0x30                        ; 005fff37
    JMP 0x005fff1a                      ; 005fff3a
        ;   XREF to: 005fff1a (UNCONDITIONAL_JUMP)  ; LAB_005fff1a
    CMP CL,0x2d                         ; 005fff3c
        ;   Label: LAB_005fff3c
    JNZ 0x005fff43                      ; 005fff3f
        ;   XREF to: 005fff43 (CONDITIONAL_JUMP)  ; LAB_005fff43
    NEG EDX                             ; 005fff41
    MOV EAX,EDX                         ; 005fff43
        ;   Label: LAB_005fff43
    POP EBX                             ; 005fff45
    RET                                 ; 005fff46

