; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_buildColorLookupTable_FUN_00402880(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_2d.c_FUN_00402940 at 004029ec
;
; Referenced Globals:
;   undefined4 DAT_005b50c4
;   undefined4 DAT_0072ffb8
;   undefined4 DAT_01c62070
;   undefined4 DAT_01c6af98
;   undefined4 DAT_01c6af99
;   undefined4 DAT_01c6af9a
;
; Called Functions:
;   engine_2d.c_FUN_00401450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402880
        ;   Label: engine_2d.c_buildColorLookupTable_FUN_00402880
    PUSH ESI                            ; 00402881
    PUSH EDI                            ; 00402882
    PUSH EBP                            ; 00402883
    SUB ESP,0x10                        ; 00402884
    XOR EBX,EBX                         ; 00402887
    XOR ESI,ESI                         ; 00402889
    FLD double ptr [0x005b50c4]         ; 0040288b | DAT_005b50c4
    XOR EAX,EAX                         ; 00402891
        ;   Label: LAB_00402891
    MOV AL,byte ptr [EBX + 0x1c6af98]   ; 00402893 | DAT_01c6af98
    MOV dword ptr [ESP + 0xc],EAX       ; 00402899
    XOR EAX,EAX                         ; 0040289d
    FILD word ptr [ESP + 0xc]           ; 0040289f
    MOV AL,byte ptr [EBX + 0x1c6af99]   ; 004028a3 | DAT_01c6af99
    FLD ST0                             ; 004028a9
    MOV dword ptr [ESP + 0xc],EAX       ; 004028ab
    FMULP                               ; 004028af
    FILD word ptr [ESP + 0xc]           ; 004028b1
    XOR EAX,EAX                         ; 004028b5
    FLD ST0                             ; 004028b7
    MOV AL,byte ptr [EBX + 0x1c6af9a]   ; 004028b9 | DAT_01c6af9a
    FMULP                               ; 004028bf
    MOV dword ptr [ESP + 0xc],EAX       ; 004028c1
    FADDP                               ; 004028c5
    FILD word ptr [ESP + 0xc]           ; 004028c7
    FMUL ST0                            ; 004028cb
    FADDP                               ; 004028cd
    FSQRT                               ; 004028cf
    FMUL ST1                            ; 004028d1
    ADD ESI,0x4                         ; 004028d3
    ADD EBX,0x3                         ; 004028d6
    FSTP float ptr [ESI + 0x72ffb4]     ; 004028d9 | DAT_0072ffb8
    CMP ESI,0x400                       ; 004028df
    JNZ 0x00402891                      ; 004028e5
        ;   XREF to: 00402891 (CONDITIONAL_JUMP)  ; LAB_00402891
    FSTP ST0                            ; 004028e7
    MOV ESI,0x1c62070                   ; 004028e9
    XOR EBP,EBP                         ; 004028ee
    XOR EDI,EDI                         ; 004028f0
        ;   Label: LAB_004028f0
    XOR EBX,EBX                         ; 004028f2
        ;   Label: LAB_004028f2
    PUSH 0xe5                           ; 004028f4
        ;   Label: LAB_004028f4
    PUSH 0xa                            ; 004028f9
    PUSH EBX                            ; 004028fb
    PUSH EDI                            ; 004028fc
    PUSH EBP                            ; 004028fd
    INC ESI                             ; 004028fe
    ADD EBX,0x8                         ; 004028ff
    CALL engine_2d.c_FUN_00401450       ; 00402902
        ;   XREF to: 00401450 (UNCONDITIONAL_CALL)  ; int engine_2d.c_FUN_00401450(int red, int green, int blue, int start_index, ...)
    ADD ESP,0x14                        ; 00402907
    MOV byte ptr [ESI + -0x1],AL        ; 0040290a | DAT_01c62070
    CMP EBX,0x100                       ; 0040290d
    JL 0x004028f4                       ; 00402913
        ;   XREF to: 004028f4 (CONDITIONAL_JUMP)  ; LAB_004028f4
    ADD EDI,0x8                         ; 00402915
    CMP EDI,0x100                       ; 00402918
    JL 0x004028f2                       ; 0040291e
        ;   XREF to: 004028f2 (CONDITIONAL_JUMP)  ; LAB_004028f2
    ADD EBP,0x8                         ; 00402920
    CMP EBP,0x100                       ; 00402923
    JL 0x004028f0                       ; 00402929
        ;   XREF to: 004028f0 (CONDITIONAL_JUMP)  ; LAB_004028f0
    XOR AH,AH                           ; 0040292b
    MOV byte ptr [0x01c62070],AH        ; 0040292d | DAT_01c62070
    ADD ESP,0x10                        ; 00402933
    POP EBP                             ; 00402936
    POP EDI                             ; 00402937
    POP ESI                             ; 00402938
    POP EBX                             ; 00402939
    RET                                 ; 0040293a

