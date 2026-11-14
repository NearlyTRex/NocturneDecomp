; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_clear_FUN_004ab7a0(CFieldNotes *this_ptr)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_fldnotes.cpp_CFieldNotes_dtor_FUN_004aa7e0 at 004aa7e6
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004aa810 at 004aa839
;   core_fldnotes.cpp_CFieldNotes_loadState_FUN_004ac900 at 004ac919
;   core_game.cpp_FUN_004bdfb0 at 004be051
;   core_game.cpp_FUN_004be8d0 at 004bea37
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0 at 004f7383
;
; Referenced Globals:
;   TerminatedCString s_fieldnote_005c1628
;   undefined4 s_ieldnote_005c1628+1
;   undefined4 s_eldnote_005c1628+2
;   undefined4 s_ldnote_005c1628+3
;   undefined4 DAT_005fe370
;   undefined4 DAT_005fe3a8
;   undefined4 DAT_01d0cfa8
;   undefined4 DAT_01d0cfc8
;   undefined4 DAT_01d0cfc9
;   undefined4 DAT_01d0cfca
;   undefined4 DAT_01d0cfcb
;   undefined4 DAT_01d0d210
;   undefined4 DAT_01d0e36c
;   SNotesMap[10] SNotesMap_ARRAY_01d0e370
;   undefined4 SNotesMap_ARRAY_01d0e370[1].entry
;   ... and 3 more
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_reset_FUN_004a9eb0
;   core_fldnotes.cpp_SNotesSection_clear_FUN_004a9bc0
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab7a0
        ;   Label: core_fldnotes.cpp_CFieldNotes_clear_FUN_004ab7a0
    PUSH ESI                            ; 004ab7a1
    PUSH EDI                            ; 004ab7a2
    MOV EBX,0x1d0d214                   ; 004ab7a3
    LEA ESI,[EBX + 0x1158]              ; 004ab7a8
    PUSH EBX                            ; 004ab7ae
        ;   Label: LAB_004ab7ae
    CALL core_fldnotes.cpp_SNotesSection_clear_FUN_004a9bc0 ; 004ab7af
        ;   XREF to: 004a9bc0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesSection_clear_FUN_004a9bc0(SNotesSection * this_ptr)
    ADD EBX,0x2e4                       ; 004ab7b4
    ADD ESP,0x4                         ; 004ab7ba
    CMP EBX,ESI                         ; 004ab7bd
    JNZ 0x004ab7ae                      ; 004ab7bf
        ;   XREF to: 004ab7ae (CONDITIONAL_JUMP)  ; LAB_004ab7ae
    MOV EBX,0x1d0e370                   ; 004ab7c1
    XOR EDX,EDX                         ; 004ab7c6
    LEA ESI,[EBX + 0xb838]              ; 004ab7c8
    MOV dword ptr [0x01d0d210],EDX      ; 004ab7ce | DAT_01d0d210
    PUSH EBX                            ; 004ab7d4 | SNotesMap_ARRAY_01d0e370 | SNotesMap_ARRAY_01d0e370[1].entry
        ;   Label: LAB_004ab7d4
    CALL core_fldnotes.cpp_SNotesMap_reset_FUN_004a9eb0 ; 004ab7d5
        ;   XREF to: 004a9eb0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_reset_FUN_004a9eb0(SNotesMap * this_ptr)
    ADD EBX,0x126c                      ; 004ab7da
    ADD ESP,0x4                         ; 004ab7e0
    CMP EBX,ESI                         ; 004ab7e3
    JNZ 0x004ab7d4                      ; 004ab7e5
        ;   XREF to: 004ab7d4 (CONDITIONAL_JUMP)  ; LAB_004ab7d4
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ab7e7
    MOV ESI,0x5c1628                    ; 004ab7eb | = "fieldnote"
    MOV EDI,0x1d0cfc8                   ; 004ab7f0
    XOR ECX,ECX                         ; 004ab7f5
    XOR AH,AH                           ; 004ab7f7
    MOV dword ptr [0x01d0e36c],ECX      ; 004ab7f9 | DAT_01d0e36c
    MOV byte ptr [0x01d0cfa8],AH        ; 004ab7ff | DAT_01d0cfa8
    MOV dword ptr [EBX + 0x40],ECX      ; 004ab805
    PUSH EDI                            ; 004ab808
    MOV AL,byte ptr [ESI]               ; 004ab809 | = "fieldnote" | s_eldnote_005c1628+2
        ;   Label: LAB_004ab809
    MOV byte ptr [EDI],AL               ; 004ab80b | DAT_01d0cfc8 | DAT_01d0cfca
    CMP AL,0x0                          ; 004ab80d
    JZ 0x004ab821                       ; 004ab80f
        ;   XREF to: 004ab821 (CONDITIONAL_JUMP)  ; LAB_004ab821
    MOV AL,byte ptr [ESI + 0x1]         ; 004ab811 | s_ieldnote_005c1628+1 | s_ldnote_005c1628+3
    ADD ESI,0x2                         ; 004ab814
    MOV byte ptr [EDI + 0x1],AL         ; 004ab817 | DAT_01d0cfc9 | DAT_01d0cfcb
    ADD EDI,0x2                         ; 004ab81a
    CMP AL,0x0                          ; 004ab81d
    JNZ 0x004ab809                      ; 004ab81f
        ;   XREF to: 004ab809 (CONDITIONAL_JUMP)  ; LAB_004ab809
    POP EDI                             ; 004ab821
        ;   Label: LAB_004ab821
    PUSH 0x1d19bac                      ; 004ab822
    MOV EBX,0x1d19bc0                   ; 004ab827
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab82c
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ab831
    LEA ESI,[EBX + 0x78]                ; 004ab834
    PUSH EBX                            ; 004ab837
        ;   Label: LAB_004ab837
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab838
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004ab83d
    ADD ESP,0x4                         ; 004ab840
    CMP EBX,ESI                         ; 004ab843
    JNZ 0x004ab837                      ; 004ab845
        ;   XREF to: 004ab837 (CONDITIONAL_JUMP)  ; LAB_004ab837
    PUSH 0x1d19c38                      ; 004ab847
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab84c
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ab851
    PUSH 0x1d19c4c                      ; 004ab854
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab859
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ab85e
    PUSH 0x1d19c60                      ; 004ab861
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab866
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ab86b
    PUSH 0x1d19c74                      ; 004ab86e
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab873
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ab878
    PUSH 0x1d19c9c                      ; 004ab87b
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab880
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ab885
    PUSH 0x1d19cb0                      ; 004ab888
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab88d
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ab892
    PUSH 0x1d19cc4                      ; 004ab895
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab89a
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ab89f
    MOV EBX,0x1                         ; 004ab8a2
    PUSH 0x1d19cd8                      ; 004ab8a7
    MOV EDI,0xffffffff                  ; 004ab8ac
    XOR ESI,ESI                         ; 004ab8b1
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004ab8b3
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004ab8b8
    MOV dword ptr [0x005fe370],EBX      ; 004ab8bb | DAT_005fe370
    MOV dword ptr [0x01d19f78],ESI      ; 004ab8c1 | DAT_01d19f78
    MOV dword ptr [0x005fe3a8],EDI      ; 004ab8c7 | DAT_005fe3a8
    XOR DL,DL                           ; 004ab8cd
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ab8cf
    MOV dword ptr [0x01d1a058],ESI      ; 004ab8d3 | DAT_01d1a058
    MOV byte ptr [0x01d19f90],DL        ; 004ab8d9 | DAT_01d19f90
    MOV byte ptr [EBX],DL               ; 004ab8df
    POP EDI                             ; 004ab8e1
    POP ESI                             ; 004ab8e2
    POP EBX                             ; 004ab8e3
    RET                                 ; 004ab8e4

