; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005540d0(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430 at 005545b2
;
; Referenced Globals:
;   undefined4 DAT_0060422c
;   undefined4 DAT_02cf3340
;   undefined4 DAT_02cf3348
;   undefined4 DAT_02cf3380
;   undefined4 DAT_02cf3388
;   undefined4 DAT_02cf33c0
;   undefined4 DAT_02cf33c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005540d0
        ;   Label: sound_sndmain.cpp_CSfxSlot_computeDistancesToSpeakers_FUN_005540d0
    PUSH ESI                            ; 005540d1
    PUSH EDI                            ; 005540d2
    SUB ESP,0x18                        ; 005540d3
    MOV EDI,dword ptr [0x0060422c]      ; 005540d6 | DAT_0060422c
    MOV ESI,dword ptr [ESP + 0x28]      ; 005540dc
    XOR EBX,EBX                         ; 005540e0
    TEST EDI,EDI                        ; 005540e2
    JLE 0x00554130                      ; 005540e4
        ;   XREF to: 00554130 (CONDITIONAL_JUMP)  ; LAB_00554130
    MOV ECX,ESI                         ; 005540e6
    XOR EDX,EDX                         ; 005540e8
    FLD double ptr [ESI + 0x4]          ; 005540ea
        ;   Label: LAB_005540ea
    FSUB double ptr [EDX + 0x2cf3340]   ; 005540ed | DAT_02cf3340 | DAT_02cf3348
    FMUL ST0                            ; 005540f3
    FLD double ptr [ESI + 0xc]          ; 005540f5
    FSUB double ptr [EDX + 0x2cf3380]   ; 005540f8 | DAT_02cf3380 | DAT_02cf3388
    FMUL ST0                            ; 005540fe
    FLD double ptr [ESI + 0x14]         ; 00554100
    FXCH                                ; 00554103
    FADDP ST2,ST0                       ; 00554105
    FSUB double ptr [EDX + 0x2cf33c0]   ; 00554107 | DAT_02cf33c0 | DAT_02cf33c8
    FMUL ST0                            ; 0055410d
    FADDP                               ; 0055410f
    FSQRT                               ; 00554111
    ADD ECX,0x4                         ; 00554113
    ADD EDX,0x8                         ; 00554116
    INC EBX                             ; 00554119
    FSTP float ptr [ECX + 0x6c]         ; 0055411a
    CMP EBX,EDI                         ; 0055411d
    JL 0x005540ea                       ; 0055411f
        ;   XREF to: 005540ea (CONDITIONAL_JUMP)  ; LAB_005540ea
    LEA EAX,[EAX]                       ; 00554121
    LEA EDX,[EDX]                       ; 00554127
    LEA EAX,[EAX]                       ; 0055412d
    MOV dword ptr [0x0060422c],EDI      ; 00554130 | DAT_0060422c
        ;   Label: LAB_00554130
    ADD ESP,0x18                        ; 00554136
    POP EDI                             ; 00554139
    POP ESI                             ; 0055413a
    POP EBX                             ; 0055413b
    RET                                 ; 0055413c

