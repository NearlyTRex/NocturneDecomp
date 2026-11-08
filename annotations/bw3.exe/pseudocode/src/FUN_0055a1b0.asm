; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055a1b0(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_00559120 at 0055916f
;   FUN_0055ff40 at 00560543
;
; Referenced Globals:
;   undefined4 DAT_005d3f1a
;   undefined4 DAT_005d3f22
;   undefined4 DAT_005d3f2a
;   undefined4 DAT_005e485c
;
; Called Functions:
;   FUN_00553960
;   FUN_00556fd0
;   FUN_00558e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055a1b0
        ;   Label: FUN_0055a1b0
    PUSH ESI                            ; 0055a1b1
    PUSH EBP                            ; 0055a1b2
    MOV EBP,ESP                         ; 0055a1b3
    SUB ESP,0x10                        ; 0055a1b5
    AND ESP,0xfffffff8                  ; 0055a1b8
    CALL FUN_00558e90                   ; 0055a1bb
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00558e90()
    FLD float ptr [0x005e485c]          ; 0055a1c0 | DAT_005e485c
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055a1c6
    FST double ptr [ESP]                ; 0055a1c9
    FLD ST0                             ; 0055a1cc
    FADD double ptr [0x005d3f1a]        ; 0055a1ce | DAT_005d3f1a
    FXCH                                ; 0055a1d4
    FADD double ptr [0x005d3f22]        ; 0055a1d6 | DAT_005d3f22
    FXCH                                ; 0055a1dc
    FSTP float ptr [ESP + 0xc]          ; 0055a1de
    FSTP float ptr [ESP + 0x8]          ; 0055a1e2
    TEST EDX,EDX                        ; 0055a1e6
    JNZ 0x0055a21b                      ; 0055a1e8
        ;   XREF to: 0055a21b (CONDITIONAL_JUMP)  ; LAB_0055a21b
    MOV EBX,0x2cebc24                   ; 0055a1ea
        ;   Label: LAB_0055a1ea
    LEA ESI,[EBX + 0x6c00]              ; 0055a1ef
    PUSH dword ptr [ESP + 0x8]          ; 0055a1f5
        ;   Label: LAB_0055a1f5
    PUSH dword ptr [ESP + 0x10]         ; 0055a1f9
    PUSH EBX                            ; 0055a1fd
    CALL FUN_00553960                   ; 0055a1fe
        ;   XREF to: 00553960 (UNCONDITIONAL_CALL)  ; undefined FUN_00553960()
    ADD EBX,0x1b0                       ; 0055a203
    ADD ESP,0xc                         ; 0055a209
    CMP EBX,ESI                         ; 0055a20c
    JNZ 0x0055a1f5                      ; 0055a20e
        ;   XREF to: 0055a1f5 (CONDITIONAL_JUMP)  ; LAB_0055a1f5
    CALL FUN_00556fd0                   ; 0055a210
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    MOV ESP,EBP                         ; 0055a215
    POP EBP                             ; 0055a217
    POP ESI                             ; 0055a218
    POP EBX                             ; 0055a219
    RET                                 ; 0055a21a
    FLD double ptr [ESP]                ; 0055a21b
        ;   Label: LAB_0055a21b
    MOV EBX,dword ptr [0x005e485c]      ; 0055a21e | DAT_005e485c
    FADD double ptr [0x005d3f2a]        ; 0055a224 | DAT_005d3f2a
    MOV dword ptr [ESP + 0x8],EBX       ; 0055a22a
    FSTP float ptr [ESP + 0xc]          ; 0055a22e
    JMP 0x0055a1ea                      ; 0055a232
        ;   XREF to: 0055a1ea (UNCONDITIONAL_JUMP)  ; LAB_0055a1ea

