; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_resetAllPathMaps_FUN_00535280(void)
;
;
; XREF[4]:
;   core_set.cpp_FUN_0054d3c0 at 0054de4f
;   core_setcolid.cpp_CDemonSet_castVoxelShadow_FUN_00559440 at 005594b2
;   core_setcolid.cpp_CDemonSet_commitVoxelBuffer_FUN_00559580 at 0055958d
;   core_setcolid.cpp_FUN_005594e0 at 00559552
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_005ecaa4
;   TerminatedCString s_Global_pathmap_list_corr_005ecab5
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01e6be48
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_path.cpp_CPathMap_reset_FUN_00535200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535280
        ;   Label: core_path.cpp_resetAllPathMaps_FUN_00535280
    PUSH ESI                            ; 00535281
    PUSH EDI                            ; 00535282
    MOV EDX,dword ptr [0x01e6be48]      ; 00535283 | DAT_01e6be48
    XOR ESI,ESI                         ; 00535289
    TEST EDX,EDX                        ; 0053528b
    JLE 0x005352d9                      ; 0053528d
        ;   XREF to: 005352d9 (CONDITIONAL_JUMP)  ; LAB_005352d9
    XOR EBX,EBX                         ; 0053528f
    CMP dword ptr [EBX + 0x1e6be4c],0x0 ; 00535291
        ;   Label: LAB_00535291
    JNZ 0x005352bc                      ; 00535298
        ;   XREF to: 005352bc (CONDITIONAL_JUMP)  ; LAB_005352bc
    MOV EAX,0x5ecaa4                    ; 0053529a | = "..\\core\\path.cpp"
    MOV EDX,0x6a2                       ; 0053529f
    PUSH 0x5ecab5                       ; 005352a4 | = "Global pathmap list corruption"
    MOV [0x01d1d400],EAX                ; 005352a9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005352ae | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005352b4
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005352b9
    MOV ECX,dword ptr [EBX + 0x1e6be4c] ; 005352bc
        ;   Label: LAB_005352bc
    PUSH ECX                            ; 005352c2
    ADD EBX,0x4                         ; 005352c3
    INC ESI                             ; 005352c6
    CALL core_path.cpp_CPathMap_reset_FUN_00535200 ; 005352c7
        ;   XREF to: 00535200 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_00535200(CPathMap * this_ptr)
    MOV EDI,dword ptr [0x01e6be48]      ; 005352cc | DAT_01e6be48
    ADD ESP,0x4                         ; 005352d2
    CMP ESI,EDI                         ; 005352d5
    JL 0x00535291                       ; 005352d7
        ;   XREF to: 00535291 (CONDITIONAL_JUMP)  ; LAB_00535291
    POP EDI                             ; 005352d9
        ;   Label: LAB_005352d9
    POP ESI                             ; 005352da
    POP EBX                             ; 005352db
    RET                                 ; 005352dc

