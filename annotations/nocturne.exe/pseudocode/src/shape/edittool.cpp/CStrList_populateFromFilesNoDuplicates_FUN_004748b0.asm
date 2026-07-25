; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0(int *param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined1       Stack[-0x844]:1  local_844
; undefined        Stack[-0x528]:1  local_528
; undefined        Stack[-0x414]:1  local_414
; undefined        Stack[-0x310]:1  local_310
; undefined        Stack[-0x30f]:1  local_30f
; undefined        Stack[-0x210]:1  local_210
; undefined        Stack[-0x110]:1  local_110
; undefined1       Stack[-0x10f]:1  local_10f
;
; XREF[2]:
;   FUN_0052c900 at 0052c90f
;   core_sound.cpp_CSound_findAllSoundFiles_FUN_0052dd20 at 0052dd38
;
; Referenced Globals:
;   TerminatedCString s_s_s_0057ee19
;   undefined4 DAT_005be1cc
;
; Called Functions:
;   crt_file.c_makepath_FUN_0056626c
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__stricmp_FUN_00564520
;   crt_string.c_memmove_FUN_00566170
;   crt_string.c_splitpath_FUN_00566498
;   engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40
;   engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00
;   engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20
;   engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0
;   engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0
;   engine_pod.cpp_CPod_initSearch_FUN_004f8d50
;   shape_edittool.cpp_CStrList_add_FUN_00473cb0
;   shape_edittool.cpp_CStrList_findString_FUN_00474140
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004748b0
        ;   Label: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
    PUSH ESI                            ; 004748b1
    PUSH EDI                            ; 004748b2
    PUSH EBP                            ; 004748b3
    SUB ESP,0x834                       ; 004748b4
    MOV EBP,dword ptr [ESP + 0x848]     ; 004748ba
    MOV EDI,dword ptr [ESP + 0x84c]     ; 004748c1
    MOV ESI,dword ptr [ESP + 0x850]     ; 004748c8
    TEST EDI,EDI                        ; 004748cf
    JZ 0x00474a7c                       ; 004748d1
        ;   XREF to: 00474a7c (CONDITIONAL_JUMP)  ; LAB_00474a7c
    CMP byte ptr [EDI],0x0              ; 004748d7
    JZ 0x00474a7c                       ; 004748da
        ;   XREF to: 00474a7c (CONDITIONAL_JUMP)  ; LAB_00474a7c
    PUSH ESI                            ; 004748e0
    PUSH EDI                            ; 004748e1
    PUSH 0x57ee19                       ; 004748e2 | = "%s\\%s"
    LEA EAX,[ESP + 0x740]               ; 004748e7
    PUSH EAX                            ; 004748ee
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004748ef
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004748f4
    MOV EDX,dword ptr [0x005be1cc]      ; 004748f7 | DAT_005be1cc
        ;   Label: LAB_004748f7
    TEST EDX,EDX                        ; 004748fd
    JZ 0x004749d1                       ; 004748ff
        ;   XREF to: 004749d1 (CONDITIONAL_JUMP)  ; LAB_004749d1
    MOV EAX,ESP                         ; 00474905
    PUSH EAX                            ; 00474907
    LEA EAX,[ESP + 0x738]               ; 00474908
    PUSH EAX                            ; 0047490f
    PUSH EDX                            ; 00474910
    CALL engine_pod.cpp_CPod_initSearch_FUN_004f8d50 ; 00474911
        ;   XREF to: 004f8d50 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_CPod_initSearch_FUN_004f8d50()
    ADD ESP,0xc                         ; 00474916
    CMP byte ptr [ESP],0x0              ; 00474919
    JZ 0x004749d1                       ; 0047491d
        ;   XREF to: 004749d1 (CONDITIONAL_JUMP)  ; LAB_004749d1
    LEA EAX,[ESP + 0x534]               ; 00474923
        ;   Label: LAB_00474923
    PUSH EAX                            ; 0047492a
    LEA EAX,[ESP + 0x638]               ; 0047492b
    PUSH EAX                            ; 00474932
    PUSH 0x0                            ; 00474933
    PUSH 0x0                            ; 00474935
    LEA EAX,[ESP + 0x10]                ; 00474937
    PUSH EAX                            ; 0047493b
    CALL crt_string.c_splitpath_FUN_00566498 ; 0047493c
        ;   XREF to: 00566498 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_splitpath_FUN_00566498()
    ADD ESP,0x14                        ; 00474941
    CMP byte ptr [ESP + 0x534],0x2e     ; 00474944
    JNZ 0x00474978                      ; 0047494c
        ;   XREF to: 00474978 (CONDITIONAL_JUMP)  ; LAB_00474978
    LEA EDI,[ESP + 0x534]               ; 0047494e
    SUB ECX,ECX                         ; 00474955
    DEC ECX                             ; 00474957
    XOR EAX,EAX                         ; 00474958
    SCASB.REPNE ES:EDI                  ; 0047495a
    NOT ECX                             ; 0047495c
    DEC ECX                             ; 0047495e
    PUSH ECX                            ; 0047495f
    LEA EAX,[ESP + 0x539]               ; 00474960
    PUSH EAX                            ; 00474967
    LEA EAX,[ESP + 0x53c]               ; 00474968
    PUSH EAX                            ; 0047496f
    CALL crt_string.c_memmove_FUN_00566170 ; 00474970
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 00474975
    LEA EAX,[ESP + 0x534]               ; 00474978
        ;   Label: LAB_00474978
    PUSH EAX                            ; 0047497f
    LEA EAX,[ESP + 0x638]               ; 00474980
    PUSH EAX                            ; 00474987
    PUSH 0x0                            ; 00474988
    PUSH 0x0                            ; 0047498a
    LEA EAX,[ESP + 0x440]               ; 0047498c
    PUSH EAX                            ; 00474993
    CALL crt_file.c_makepath_FUN_0056626c ; 00474994
        ;   XREF to: 0056626c (UNCONDITIONAL_CALL)  ; undefined crt_file.c_makepath_FUN_0056626c()
    ADD ESP,0x14                        ; 00474999
    LEA EAX,[ESP + 0x430]               ; 0047499c
    PUSH EAX                            ; 004749a3
    PUSH EBP                            ; 004749a4
    CALL shape_edittool.cpp_CStrList_findString_FUN_00474140 ; 004749a5
        ;   XREF to: 00474140 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_findString_FUN_00474140()
    ADD ESP,0x8                         ; 004749aa
    TEST EAX,EAX                        ; 004749ad
    JL 0x00474aa2                       ; 004749af
        ;   XREF to: 00474aa2 (CONDITIONAL_JUMP)  ; LAB_00474aa2
    MOV EAX,ESP                         ; 004749b5
        ;   Label: LAB_004749b5
    PUSH EAX                            ; 004749b7
    MOV EBX,dword ptr [0x005be1cc]      ; 004749b8 | DAT_005be1cc
    PUSH EBX                            ; 004749be
    CALL engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0 ; 004749bf
        ;   XREF to: 004f8da0 (UNCONDITIONAL_CALL)  ; undefined engine_pod.cpp_CPod_getNextSearchResult_FUN_004f8da0()
    ADD ESP,0x8                         ; 004749c4
    CMP byte ptr [ESP],0x0              ; 004749c7
    JNZ 0x00474923                      ; 004749cb
        ;   XREF to: 00474923 (CONDITIONAL_JUMP)  ; LAB_00474923
    LEA EAX,[ESP + 0x31c]               ; 004749d1
        ;   Label: LAB_004749d1
    PUSH EAX                            ; 004749d8
    MOV ESI,dword ptr [EBP]             ; 004749d9
    CALL engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00 ; 004749dc
        ;   XREF to: 00456c00 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_ctor_FUN_00456c00()
    ADD ESP,0x4                         ; 004749e1
    LEA EAX,[ESP + 0x734]               ; 004749e4
    PUSH EAX                            ; 004749eb
    LEA EAX,[ESP + 0x320]               ; 004749ec
    PUSH EAX                            ; 004749f3
    CALL engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40 ; 004749f4
        ;   XREF to: 00456c40 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40()
    ADD ESP,0x8                         ; 004749f9
    CMP byte ptr [ESP + 0x31c],0x0      ; 004749fc
    JZ 0x00474a4f                       ; 00474a04
        ;   XREF to: 00474a4f (CONDITIONAL_JUMP)  ; LAB_00474a4f
    XOR EBX,EBX                         ; 00474a06
        ;   Label: LAB_00474a06
    XOR EDI,EDI                         ; 00474a08
    TEST ESI,ESI                        ; 00474a0a
    JLE 0x00474ac1                      ; 00474a0c
        ;   XREF to: 00474ac1 (CONDITIONAL_JUMP)  ; LAB_00474ac1
    LEA EAX,[ESP + 0x31c]               ; 00474a12
        ;   Label: LAB_00474a12
    PUSH EAX                            ; 00474a19
    PUSH EBX                            ; 00474a1a
    PUSH EBP                            ; 00474a1b
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 00474a1c
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_getStringAt_FUN_00474080()
    ADD ESP,0x8                         ; 00474a21
    PUSH EAX                            ; 00474a24
    CALL crt_string.c__stricmp_FUN_00564520 ; 00474a25
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 00474a2a
    TEST EAX,EAX                        ; 00474a2d
    JNZ 0x00474ab8                      ; 00474a2f
        ;   XREF to: 00474ab8 (CONDITIONAL_JUMP)  ; LAB_00474ab8
    LEA EAX,[ESP + 0x31c]               ; 00474a35
        ;   Label: LAB_00474a35
    PUSH EAX                            ; 00474a3c
    CALL engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0 ; 00474a3d
        ;   XREF to: 00456cc0 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_findNext_FUN_00456cc0()
    ADD ESP,0x4                         ; 00474a42
    CMP byte ptr [ESP + 0x31c],0x0      ; 00474a45
    JNZ 0x00474a06                      ; 00474a4d
        ;   XREF to: 00474a06 (CONDITIONAL_JUMP)  ; LAB_00474a06
    LEA EAX,[ESP + 0x31c]               ; 00474a4f
        ;   Label: LAB_00474a4f
    PUSH EAX                            ; 00474a56
    CALL engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40 ; 00474a57
        ;   XREF to: 00456d40 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_closeSearch_FUN_00456d40()
    ADD ESP,0x4                         ; 00474a5c
    PUSH 0x0                            ; 00474a5f
    LEA EAX,[ESP + 0x320]               ; 00474a61
    PUSH EAX                            ; 00474a68
    CALL engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20 ; 00474a69
        ;   XREF to: 00456c20 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_CFileFinder_dtor_FUN_00456c20()
    ADD ESP,0x8                         ; 00474a6e
    ADD ESP,0x834                       ; 00474a71
    POP EBP                             ; 00474a77
    POP EDI                             ; 00474a78
    POP ESI                             ; 00474a79
    POP EBX                             ; 00474a7a
    RET                                 ; 00474a7b
    LEA EDI,[ESP + 0x734]               ; 00474a7c
        ;   Label: LAB_00474a7c
    PUSH EDI                            ; 00474a83
    MOV AL,byte ptr [ESI]               ; 00474a84
        ;   Label: LAB_00474a84
    MOV byte ptr [EDI],AL               ; 00474a86
    CMP AL,0x0                          ; 00474a88
    JZ 0x00474a9c                       ; 00474a8a
        ;   XREF to: 00474a9c (CONDITIONAL_JUMP)  ; LAB_00474a9c
    MOV AL,byte ptr [ESI + 0x1]         ; 00474a8c
    ADD ESI,0x2                         ; 00474a8f
    MOV byte ptr [EDI + 0x1],AL         ; 00474a92
    ADD EDI,0x2                         ; 00474a95
    CMP AL,0x0                          ; 00474a98
    JNZ 0x00474a84                      ; 00474a9a
        ;   XREF to: 00474a84 (CONDITIONAL_JUMP)  ; LAB_00474a84
    POP EDI                             ; 00474a9c
        ;   Label: LAB_00474a9c
    JMP 0x004748f7                      ; 00474a9d
        ;   XREF to: 004748f7 (UNCONDITIONAL_JUMP)  ; LAB_004748f7
    LEA EAX,[ESP + 0x430]               ; 00474aa2
        ;   Label: LAB_00474aa2
    PUSH EAX                            ; 00474aa9
    PUSH EBP                            ; 00474aaa
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00474aab
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 00474ab0
    JMP 0x004749b5                      ; 00474ab3
        ;   XREF to: 004749b5 (UNCONDITIONAL_JUMP)  ; LAB_004749b5
    INC EBX                             ; 00474ab8
        ;   Label: LAB_00474ab8
    CMP EBX,ESI                         ; 00474ab9
    JL 0x00474a12                       ; 00474abb
        ;   XREF to: 00474a12 (CONDITIONAL_JUMP)  ; LAB_00474a12
    TEST EDI,EDI                        ; 00474ac1
        ;   Label: LAB_00474ac1
    JNZ 0x00474a35                      ; 00474ac3
        ;   XREF to: 00474a35 (CONDITIONAL_JUMP)  ; LAB_00474a35
    LEA EAX,[ESP + 0x31c]               ; 00474ac9
    PUSH EAX                            ; 00474ad0
    PUSH EBP                            ; 00474ad1
    CALL shape_edittool.cpp_CStrList_add_FUN_00473cb0 ; 00474ad2
        ;   XREF to: 00473cb0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CStrList_add_FUN_00473cb0()
    ADD ESP,0x8                         ; 00474ad7
    JMP 0x00474a35                      ; 00474ada
        ;   XREF to: 00474a35 (UNCONDITIONAL_JUMP)  ; LAB_00474a35

