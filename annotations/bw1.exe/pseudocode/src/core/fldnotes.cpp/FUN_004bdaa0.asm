; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bdaa0(undefined1 *param_1)
;
;
; XREF[6]:
;   core_fldnotes.cpp_CFieldNotes_dtor_FUN_004bcb70 at 004bcb76
;   core_fldnotes.cpp_FUN_004bcba0 at 004bcbc2
;   core_fldnotes.cpp_FUN_004bebc0 at 004bebd9
;   core_game.cpp_FUN_004d6990 at 004d6a31
;   core_game.cpp_FUN_004d7250 at 004d748a
;   core_mission.cpp_CDemonMission_run_FUN_0051bad0 at 0051bbb3
;
; Referenced Globals:
;   TerminatedCString s_fieldnote_005e0139
;   undefined4 s_ieldnote_005e0139+1
;   undefined4 s_eldnote_005e0139+2
;   undefined4 s_ldnote_005e0139+3
;   undefined4 DAT_0061d2e0
;   undefined4 DAT_0061d310
;   undefined4 DAT_01cc4208
;   undefined4 DAT_01cc4228
;   undefined4 DAT_01cc4229
;   undefined4 DAT_01cc422a
;   undefined4 DAT_01cc422b
;   undefined4 DAT_01cc4470
;   undefined4 DAT_01cc55cc
;   undefined4 DAT_01cc7f1c
;   undefined4 DAT_01cc7f38
;   ... and 1 more
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bbf60
;   core_fldnotes.cpp_FUN_004bc250
;   engine_alphabit.cpp_FUN_0040d1c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bdaa0
        ;   Label: core_fldnotes.cpp_FUN_004bdaa0
    PUSH ESI                            ; 004bdaa1
    PUSH EDI                            ; 004bdaa2
    MOV EBX,0x1cc4474                   ; 004bdaa3
    LEA ESI,[EBX + 0x1158]              ; 004bdaa8
    PUSH EBX                            ; 004bdaae
        ;   Label: LAB_004bdaae
    CALL core_fldnotes.cpp_FUN_004bbf60 ; 004bdaaf
        ;   XREF to: 004bbf60 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bbf60()
    ADD EBX,0x2e4                       ; 004bdab4
    ADD ESP,0x4                         ; 004bdaba
    CMP EBX,ESI                         ; 004bdabd
    JNZ 0x004bdaae                      ; 004bdabf
        ;   XREF to: 004bdaae (CONDITIONAL_JUMP)  ; LAB_004bdaae
    MOV EBX,0x1cc55d0                   ; 004bdac1
    XOR EDX,EDX                         ; 004bdac6
    LEA ESI,[EBX + 0x25c0]              ; 004bdac8
    MOV dword ptr [0x01cc4470],EDX      ; 004bdace | DAT_01cc4470
    PUSH EBX                            ; 004bdad4
        ;   Label: LAB_004bdad4
    CALL core_fldnotes.cpp_FUN_004bc250 ; 004bdad5
        ;   XREF to: 004bc250 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc250()
    ADD EBX,0x970                       ; 004bdada
    ADD ESP,0x4                         ; 004bdae0
    CMP EBX,ESI                         ; 004bdae3
    JNZ 0x004bdad4                      ; 004bdae5
        ;   XREF to: 004bdad4 (CONDITIONAL_JUMP)  ; LAB_004bdad4
    MOV EBX,dword ptr [ESP + 0x10]      ; 004bdae7
    MOV ESI,0x5e0139                    ; 004bdaeb | = "fieldnote"
    MOV EDI,0x1cc4228                   ; 004bdaf0
    XOR ECX,ECX                         ; 004bdaf5
    XOR AH,AH                           ; 004bdaf7
    MOV dword ptr [0x01cc55cc],ECX      ; 004bdaf9 | DAT_01cc55cc
    MOV byte ptr [0x01cc4208],AH        ; 004bdaff | DAT_01cc4208
    MOV dword ptr [EBX + 0x40],ECX      ; 004bdb05
    PUSH EDI                            ; 004bdb08
    MOV AL,byte ptr [ESI]               ; 004bdb09 | = "fieldnote" | s_eldnote_005e0139+2
        ;   Label: LAB_004bdb09
    MOV byte ptr [EDI],AL               ; 004bdb0b | DAT_01cc4228 | DAT_01cc422a
    CMP AL,0x0                          ; 004bdb0d
    JZ 0x004bdb21                       ; 004bdb0f
        ;   XREF to: 004bdb21 (CONDITIONAL_JUMP)  ; LAB_004bdb21
    MOV AL,byte ptr [ESI + 0x1]         ; 004bdb11 | s_ieldnote_005e0139+1 | s_ldnote_005e0139+3
    ADD ESI,0x2                         ; 004bdb14
    MOV byte ptr [EDI + 0x1],AL         ; 004bdb17 | DAT_01cc4229 | DAT_01cc422b
    ADD EDI,0x2                         ; 004bdb1a
    CMP AL,0x0                          ; 004bdb1d
    JNZ 0x004bdb09                      ; 004bdb1f
        ;   XREF to: 004bdb09 (CONDITIONAL_JUMP)  ; LAB_004bdb09
    POP EDI                             ; 004bdb21
        ;   Label: LAB_004bdb21
    PUSH 0x1cc7b94                      ; 004bdb22
    MOV EBX,0x1cc7ba8                   ; 004bdb27
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdb2c
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdb31
    LEA ESI,[EBX + 0x78]                ; 004bdb34
    PUSH EBX                            ; 004bdb37
        ;   Label: LAB_004bdb37
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdb38
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004bdb3d
    ADD ESP,0x4                         ; 004bdb40
    CMP EBX,ESI                         ; 004bdb43
    JNZ 0x004bdb37                      ; 004bdb45
        ;   XREF to: 004bdb37 (CONDITIONAL_JUMP)  ; LAB_004bdb37
    PUSH 0x1cc7c20                      ; 004bdb47
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdb4c
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdb51
    PUSH 0x1cc7c34                      ; 004bdb54
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdb59
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdb5e
    PUSH 0x1cc7c48                      ; 004bdb61
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdb66
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdb6b
    PUSH 0x1cc7c5c                      ; 004bdb6e
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdb73
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdb78
    PUSH 0x1cc7c84                      ; 004bdb7b
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdb80
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdb85
    PUSH 0x1cc7c98                      ; 004bdb88
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdb8d
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdb92
    PUSH 0x1cc7cac                      ; 004bdb95
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdb9a
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdb9f
    MOV EBX,0x1                         ; 004bdba2
    PUSH 0x1cc7cc0                      ; 004bdba7
    MOV EDI,0xffffffff                  ; 004bdbac
    XOR ESI,ESI                         ; 004bdbb1
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004bdbb3
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bdbb8
    MOV dword ptr [0x0061d2e0],EBX      ; 004bdbbb | DAT_0061d2e0
    MOV dword ptr [0x01cc7f1c],ESI      ; 004bdbc1 | DAT_01cc7f1c
    MOV dword ptr [0x0061d310],EDI      ; 004bdbc7 | DAT_0061d310
    XOR DL,DL                           ; 004bdbcd
    MOV EBX,dword ptr [ESP + 0x10]      ; 004bdbcf
    MOV dword ptr [0x01cc8000],ESI      ; 004bdbd3 | DAT_01cc8000
    MOV byte ptr [0x01cc7f38],DL        ; 004bdbd9 | DAT_01cc7f38
    MOV byte ptr [EBX],DL               ; 004bdbdf
    POP EDI                             ; 004bdbe1
    POP ESI                             ; 004bdbe2
    POP EBX                             ; 004bdbe3
    RET                                 ; 004bdbe4

