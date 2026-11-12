; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_CFieldNotes_clear_FUN_004a50b0(CFieldNotes *this_ptr)
;
; Parameters:
; CFieldNotes *    Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_fldnotes.cpp_CFieldNotes_dtor_FUN_004a4180 at 004a4186
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004a41b0 at 004a41d2
;   core_fldnotes.cpp_FUN_004a61b0 at 004a61c2
;   core_game.cpp_FUN_004bbf70 at 004bc011
;   core_game.cpp_FUN_004bc840 at 004bc99b
;   core_mission.cpp_CDemonMission_run_FUN_004fcb00 at 004fcbe7
;
; Referenced Globals:
;   TerminatedCString s_fieldnote_005d62cf
;   undefined4 s_ieldnote_005d62cf+1
;   undefined4 s_eldnote_005d62cf+2
;   undefined4 s_ldnote_005d62cf+3
;   undefined4 DAT_00616010
;   undefined4 DAT_00616040
;   undefined4 DAT_01cab788
;   undefined4 DAT_01cab7a8
;   undefined4 DAT_01cab7a9
;   undefined4 DAT_01cab7aa
;   undefined4 DAT_01cab7ab
;   undefined4 DAT_01cab9f0
;   undefined4 DAT_01cacb4c
;   undefined4 DAT_01caf488
;   undefined4 DAT_01caf4a0
;   ... and 1 more
;
; Called Functions:
;   core_fldnotes.cpp_SNotesMap_reset_FUN_004a3860
;   core_fldnotes.cpp_SNotesSection_clear_FUN_004a3570
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a50b0
        ;   Label: core_fldnotes.cpp_CFieldNotes_clear_FUN_004a50b0
    PUSH ESI                            ; 004a50b1
    PUSH EDI                            ; 004a50b2
    MOV EBX,0x1cab9f4                   ; 004a50b3
    LEA ESI,[EBX + 0x1158]              ; 004a50b8
    PUSH EBX                            ; 004a50be
        ;   Label: LAB_004a50be
    CALL core_fldnotes.cpp_SNotesSection_clear_FUN_004a3570 ; 004a50bf
        ;   XREF to: 004a3570 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesSection_clear_FUN_004a3570(SNotesSection * this_ptr)
    ADD EBX,0x2e4                       ; 004a50c4
    ADD ESP,0x4                         ; 004a50ca
    CMP EBX,ESI                         ; 004a50cd
    JNZ 0x004a50be                      ; 004a50cf
        ;   XREF to: 004a50be (CONDITIONAL_JUMP)  ; LAB_004a50be
    MOV EBX,0x1cacb50                   ; 004a50d1
    XOR EDX,EDX                         ; 004a50d6
    LEA ESI,[EBX + 0x25c0]              ; 004a50d8
    MOV dword ptr [0x01cab9f0],EDX      ; 004a50de | DAT_01cab9f0
    PUSH EBX                            ; 004a50e4
        ;   Label: LAB_004a50e4
    CALL core_fldnotes.cpp_SNotesMap_reset_FUN_004a3860 ; 004a50e5
        ;   XREF to: 004a3860 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SNotesMap_reset_FUN_004a3860(SNotesMap * this_ptr)
    ADD EBX,0x970                       ; 004a50ea
    ADD ESP,0x4                         ; 004a50f0
    CMP EBX,ESI                         ; 004a50f3
    JNZ 0x004a50e4                      ; 004a50f5
        ;   XREF to: 004a50e4 (CONDITIONAL_JUMP)  ; LAB_004a50e4
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a50f7
    MOV ESI,0x5d62cf                    ; 004a50fb | = "fieldnote"
    MOV EDI,0x1cab7a8                   ; 004a5100
    XOR ECX,ECX                         ; 004a5105
    XOR AH,AH                           ; 004a5107
    MOV dword ptr [0x01cacb4c],ECX      ; 004a5109 | DAT_01cacb4c
    MOV byte ptr [0x01cab788],AH        ; 004a510f | DAT_01cab788
    MOV dword ptr [EBX + 0x40],ECX      ; 004a5115
    PUSH EDI                            ; 004a5118
    MOV AL,byte ptr [ESI]               ; 004a5119 | = "fieldnote" | s_eldnote_005d62cf+2
        ;   Label: LAB_004a5119
    MOV byte ptr [EDI],AL               ; 004a511b | DAT_01cab7a8 | DAT_01cab7aa
    CMP AL,0x0                          ; 004a511d
    JZ 0x004a5131                       ; 004a511f
        ;   XREF to: 004a5131 (CONDITIONAL_JUMP)  ; LAB_004a5131
    MOV AL,byte ptr [ESI + 0x1]         ; 004a5121 | s_ieldnote_005d62cf+1 | s_ldnote_005d62cf+3
    ADD ESI,0x2                         ; 004a5124
    MOV byte ptr [EDI + 0x1],AL         ; 004a5127 | DAT_01cab7a9 | DAT_01cab7ab
    ADD EDI,0x2                         ; 004a512a
    CMP AL,0x0                          ; 004a512d
    JNZ 0x004a5119                      ; 004a512f
        ;   XREF to: 004a5119 (CONDITIONAL_JUMP)  ; LAB_004a5119
    POP EDI                             ; 004a5131
        ;   Label: LAB_004a5131
    PUSH 0x1caf114                      ; 004a5132
    MOV EBX,0x1caf128                   ; 004a5137
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a513c
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5141
    LEA ESI,[EBX + 0x78]                ; 004a5144
    PUSH EBX                            ; 004a5147
        ;   Label: LAB_004a5147
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a5148
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004a514d
    ADD ESP,0x4                         ; 004a5150
    CMP EBX,ESI                         ; 004a5153
    JNZ 0x004a5147                      ; 004a5155
        ;   XREF to: 004a5147 (CONDITIONAL_JUMP)  ; LAB_004a5147
    PUSH 0x1caf1a0                      ; 004a5157
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a515c
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5161
    PUSH 0x1caf1b4                      ; 004a5164
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a5169
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a516e
    PUSH 0x1caf1c8                      ; 004a5171
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a5176
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a517b
    PUSH 0x1caf1dc                      ; 004a517e
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a5183
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5188
    PUSH 0x1caf1f0                      ; 004a518b
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a5190
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a5195
    PUSH 0x1caf204                      ; 004a5198
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a519d
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a51a2
    PUSH 0x1caf218                      ; 004a51a5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a51aa
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a51af
    MOV EBX,0x1                         ; 004a51b2
    PUSH 0x1caf22c                      ; 004a51b7
    MOV EDI,0xffffffff                  ; 004a51bc
    XOR ESI,ESI                         ; 004a51c1
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a51c3
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a51c8
    MOV dword ptr [0x00616010],EBX      ; 004a51cb | DAT_00616010
    MOV dword ptr [0x01caf488],ESI      ; 004a51d1 | DAT_01caf488
    MOV dword ptr [0x00616040],EDI      ; 004a51d7 | DAT_00616040
    XOR DL,DL                           ; 004a51dd
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a51df
    MOV dword ptr [0x01caf568],ESI      ; 004a51e3 | DAT_01caf568
    MOV byte ptr [0x01caf4a0],DL        ; 004a51e9 | DAT_01caf4a0
    MOV byte ptr [EBX],DL               ; 004a51ef
    POP EDI                             ; 004a51f1
    POP ESI                             ; 004a51f2
    POP EBX                             ; 004a51f3
    RET                                 ; 004a51f4

