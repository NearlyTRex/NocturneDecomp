; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uchar __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[14]:
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043cb57
;   core_cloth.cpp_FUN_0043b7e0 at 0043b9c4
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d9f5
;   core_emitter.cpp_FUN_004a8860 at 004a8a4b
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509c60 at 00509d42
;   core_manpuz.cpp_CMansionPuzzleCircle_FUN_00509d50 at 00509dcd
;   core_morph.cpp_FUN_0052bcb0 at 0052c301
;   core_msnedit.cpp_CDemonMission_FUN_005390f0 at 005396e0
;   core_setedit.cpp_CDemonSet_FUN_00581aa0 at 00581d63
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 00583523
;   ... and 4 more
;
; Referenced Globals:
;   uchar[32768] g_ColorCubeLookup
;   undefined4 UCHAR_ARRAY_02cf9400
;   undefined4 UCHAR_ARRAY_02d00c3f
;   undefined4 UCHAR_ARRAY_02d0101f
;
; Called Functions:
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 004a1330
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
    AND EAX,0x30000                     ; 004a1335
    CMP EAX,0x10000                     ; 004a133a
    JNC 0x004a1363                      ; 004a133f
        ;   XREF to: 004a1363 (CONDITIONAL_JUMP)  ; LAB_004a1363
    TEST EAX,EAX                        ; 004a1341
    JNZ 0x004a1375                      ; 004a1343
        ;   XREF to: 004a1375 (CONDITIONAL_JUMP)  ; LAB_004a1375
    MOV AL,[0x02cf9020]                 ; 004a1345 | g_ColorCubeLookup
    RET                                 ; 004a134a
    XOR EAX,EAX                         ; 004a134b
        ;   Label: LAB_004a134b
    MOV AL,[0x02d0101f]                 ; 004a134d | UCHAR_ARRAY_02d0101f
    RET                                 ; 004a1352
    XOR EAX,EAX                         ; 004a1353
        ;   Label: LAB_004a1353
    MOV AL,[0x02cf9400]                 ; 004a1355 | UCHAR_ARRAY_02cf9400
    RET                                 ; 004a135a
    XOR EAX,EAX                         ; 004a135b
        ;   Label: LAB_004a135b
    MOV AL,[0x02d00c3f]                 ; 004a135d | UCHAR_ARRAY_02d00c3f
    RET                                 ; 004a1362
    JBE 0x004a134b                      ; 004a1363
        ;   XREF to: 004a134b (CONDITIONAL_JUMP)  ; LAB_004a134b
        ;   Label: LAB_004a1363
    CMP EAX,0x20000                     ; 004a1365
    JC 0x004a1375                       ; 004a136a
        ;   XREF to: 004a1375 (CONDITIONAL_JUMP)  ; LAB_004a1375
    JBE 0x004a1353                      ; 004a136c
        ;   XREF to: 004a1353 (CONDITIONAL_JUMP)  ; LAB_004a1353
    CMP EAX,0x30000                     ; 004a136e
    JZ 0x004a135b                       ; 004a1373
        ;   XREF to: 004a135b (CONDITIONAL_JUMP)  ; LAB_004a135b
    XOR EAX,EAX                         ; 004a1375
        ;   Label: LAB_004a1375
    RET                                 ; 004a1377

