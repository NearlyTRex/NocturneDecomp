; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_004598a0(undefined4 *param_1)
;
;
; XREF[2]:
;   FUN_00459710 at 00459794
;   FUN_004b3cd0 at 004b3d2d
;
; Referenced Globals:
;   TerminatedCString s_unnamed_005baa75
;   undefined4 s_nnamed_005baa75+1
;   undefined4 s_named_005baa75+2
;   undefined4 s_amed_005baa75+3
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004598a0
        ;   Label: FUN_004598a0
    PUSH EDI                            ; 004598a1
    MOV EDX,dword ptr [ESP + 0xc]       ; 004598a2
    MOV dword ptr [EDX + 0x48],0x0      ; 004598a6
    MOV ESI,0x5baa75                    ; 004598ad | = "unnamed"
    MOV dword ptr [EDX],0x40            ; 004598b2
    LEA EDI,[EDX + 0x8]                 ; 004598b8
    MOV dword ptr [EDX + 0x4],0x40      ; 004598bb
    PUSH EDI                            ; 004598c2
    MOV AL,byte ptr [ESI]               ; 004598c3 | = "unnamed" | s_named_005baa75+2
        ;   Label: LAB_004598c3
    MOV byte ptr [EDI],AL               ; 004598c5
    CMP AL,0x0                          ; 004598c7
    JZ 0x004598db                       ; 004598c9
        ;   XREF to: 004598db (CONDITIONAL_JUMP)  ; LAB_004598db
    MOV AL,byte ptr [ESI + 0x1]         ; 004598cb | s_nnamed_005baa75+1 | s_amed_005baa75+3
    ADD ESI,0x2                         ; 004598ce
    MOV byte ptr [EDI + 0x1],AL         ; 004598d1
    ADD EDI,0x2                         ; 004598d4
    CMP AL,0x0                          ; 004598d7
    JNZ 0x004598c3                      ; 004598d9
        ;   XREF to: 004598c3 (CONDITIONAL_JUMP)  ; LAB_004598c3
    POP EDI                             ; 004598db
        ;   Label: LAB_004598db
    MOV EAX,EDX                         ; 004598dc
    POP EDI                             ; 004598de
    POP ESI                             ; 004598df
    RET                                 ; 004598e0

