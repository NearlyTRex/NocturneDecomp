; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004bfb50(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x548]:1  local_548
; undefined1       Stack[-0x547]:1  local_547
; undefined        Stack[-0x148]:1  local_148
; undefined1       Stack[-0x147]:1  local_147
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_mission.cpp_CDemonMission_run_FUN_004f72a0 at 004f7426
;
; Referenced Globals:
;   TerminatedCString s_stats_005c3ab0
;   TerminatedCString s_Level_time_005c3ab6
;   undefined1 DAT_005c3ac1
;   undefined1 DAT_005c3ac2
;   undefined1 DAT_005c3ac3
;   TerminatedCString s_s_2d_2d_2d_2d_005c3ac4
;   TerminatedCString s_Body_count_005c3ad6
;   undefined1 DAT_005c3ae1
;   undefined1 DAT_005c3ae2
;   undefined1 DAT_005c3ae3
;   undefined1 DAT_005c3ae4
;   undefined4 DAT_005c3af0
;   undefined4 DAT_005c3af8
;   undefined4 DAT_005c3b00
;   undefined4 DAT_005c3b08
;   ... and 2 more
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_FUN_005a28c0
;   engine_3d.c_setRenderAlpha_FUN_00406bf0
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0
;   engine_font.cpp_FUN_004b2e40
;   engine_font.cpp_FUN_004b30f0
;   engine_special.cpp_clearScreen_FUN_00560d70
;   support_newmsg.cpp_getLocalizedString_FUN_00508960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bfb50
        ;   Label: core_game.cpp_FUN_004bfb50
    PUSH ESI                            ; 004bfb51
    PUSH EDI                            ; 004bfb52
    PUSH EBP                            ; 004bfb53
    SUB ESP,0x538                       ; 004bfb54
    LEA EAX,[ESP + 0x500]               ; 004bfb5a
    PUSH EAX                            ; 004bfb61
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004bfb62
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004bfb67
    PUSH 0x1e0                          ; 004bfb6a
    PUSH 0x280                          ; 004bfb6f
    PUSH 0x5c3ab0                       ; 004bfb74 | = "stats"
    LEA EAX,[ESP + 0x50c]               ; 004bfb79
    PUSH EAX                            ; 004bfb80
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004bfb81
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004bfb86
    CALL engine_special.cpp_clearScreen_FUN_00560d70 ; 004bfb89
        ;   XREF to: 00560d70 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_00560d70()
    PUSH 0xffff                         ; 004bfb8e
    PUSH 0x0                            ; 004bfb93
    PUSH 0x0                            ; 004bfb95
    LEA EAX,[ESP + 0x50c]               ; 004bfb97
    PUSH EAX                            ; 004bfb9e
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0 ; 004bfb9f
        ;   XREF to: 0040d6f0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d6f0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004bfba4
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004bfba7
    FLD float ptr [EAX + 0x278]         ; 004bfbae
    FADD float ptr [EAX + 0x270]        ; 004bfbb4
    MOV ECX,dword ptr [ESP + 0x54c]     ; 004bfbba
    FSTP float ptr [EAX + 0x270]        ; 004bfbc1
    FLD float ptr [ECX + 0x278]         ; 004bfbc7
    MOV EAX,dword ptr [EAX + 0x274]     ; 004bfbcd
    MOV EDX,dword ptr [ECX + 0x27c]     ; 004bfbd3
    FLD ST0                             ; 004bfbd9
    FMUL double ptr [0x005c3af0]        ; 004bfbdb | DAT_005c3af0
    ADD EDX,EAX                         ; 004bfbe1
    CALL crt_math.c_round_FUN_005a3120  ; 004bfbe3
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x528]       ; 004bfbe8
    MOV EAX,dword ptr [ESP + 0x528]     ; 004bfbef
    MOV dword ptr [ESP + 0x534],EAX     ; 004bfbf6
    FILD dword ptr [ESP + 0x534]        ; 004bfbfd
    FMUL double ptr [0x005c3af8]        ; 004bfc04 | DAT_005c3af8
    FSUBP                               ; 004bfc0a
    FLD ST0                             ; 004bfc0c
    FMUL double ptr [0x005c3b00]        ; 004bfc0e | DAT_005c3b00
    CALL crt_math.c_round_FUN_005a3120  ; 004bfc14
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x51c]       ; 004bfc19
    MOV EAX,dword ptr [ESP + 0x51c]     ; 004bfc20
    MOV dword ptr [ESP + 0x534],EAX     ; 004bfc27
    FILD dword ptr [ESP + 0x534]        ; 004bfc2e
    FMUL double ptr [0x005c3b08]        ; 004bfc35 | DAT_005c3b08
    FSUBP                               ; 004bfc3b
    FST float ptr [ECX + 0x278]         ; 004bfc3d
    CALL crt_math.c_round_FUN_005a3120  ; 004bfc43
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x520]       ; 004bfc48
    MOV EAX,dword ptr [ESP + 0x520]     ; 004bfc4f
    MOV dword ptr [ESP + 0x534],EAX     ; 004bfc56
    FILD dword ptr [ESP + 0x534]        ; 004bfc5d
    FSUBR float ptr [ECX + 0x278]       ; 004bfc64
    FST float ptr [ECX + 0x278]         ; 004bfc6a
    FMUL double ptr [0x005c3b10]        ; 004bfc70 | DAT_005c3b10
    PUSH 0x5c3ab6                       ; 004bfc76 | = "Level time"
    MOV dword ptr [ECX + 0x27c],EDX     ; 004bfc7b
    CALL crt_math.c_round_FUN_005a3120  ; 004bfc81
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x528]       ; 004bfc86
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bfc8d
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bfc92
    MOV EDI,ESP                         ; 004bfc95
    MOV ESI,EAX                         ; 004bfc97
    PUSH EDI                            ; 004bfc99
    MOV AL,byte ptr [ESI]               ; 004bfc9a
        ;   Label: LAB_004bfc9a
    MOV byte ptr [EDI],AL               ; 004bfc9c
    CMP AL,0x0                          ; 004bfc9e
    JZ 0x004bfcb2                       ; 004bfca0
        ;   XREF to: 004bfcb2 (CONDITIONAL_JUMP)  ; LAB_004bfcb2
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfca2
    ADD ESI,0x2                         ; 004bfca5
    MOV byte ptr [EDI + 0x1],AL         ; 004bfca8
    ADD EDI,0x2                         ; 004bfcab
    CMP AL,0x0                          ; 004bfcae
    JNZ 0x004bfc9a                      ; 004bfcb0
        ;   XREF to: 004bfc9a (CONDITIONAL_JUMP)  ; LAB_004bfc9a
    POP EDI                             ; 004bfcb2
        ;   Label: LAB_004bfcb2
    MOV ESI,0x5c3ac1                    ; 004bfcb3 | DAT_005c3ac1
    MOV EDI,ESP                         ; 004bfcb8
    PUSH EDI                            ; 004bfcba
    SUB ECX,ECX                         ; 004bfcbb
    DEC ECX                             ; 004bfcbd
    MOV AL,0x0                          ; 004bfcbe
    SCASB.REPNE ES:EDI                  ; 004bfcc0
    DEC EDI                             ; 004bfcc2
    MOV AL,byte ptr [ESI]               ; 004bfcc3 | DAT_005c3ac1 | DAT_005c3ac3
        ;   Label: LAB_004bfcc3
    MOV byte ptr [EDI],AL               ; 004bfcc5
    CMP AL,0x0                          ; 004bfcc7
    JZ 0x004bfcdb                       ; 004bfcc9
        ;   XREF to: 004bfcdb (CONDITIONAL_JUMP)  ; LAB_004bfcdb
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfccb | DAT_005c3ac2 | = "%2d:%2d:%2d.%2d\n\n"
    ADD ESI,0x2                         ; 004bfcce
    MOV byte ptr [EDI + 0x1],AL         ; 004bfcd1
    ADD EDI,0x2                         ; 004bfcd4
    CMP AL,0x0                          ; 004bfcd7
    JNZ 0x004bfcc3                      ; 004bfcd9
        ;   XREF to: 004bfcc3 (CONDITIONAL_JUMP)  ; LAB_004bfcc3
    POP EDI                             ; 004bfcdb
        ;   Label: LAB_004bfcdb
    MOV ECX,dword ptr [ESP + 0x524]     ; 004bfcdc
    PUSH ECX                            ; 004bfce3
    MOV EBX,dword ptr [ESP + 0x524]     ; 004bfce4
    PUSH EBX                            ; 004bfceb
    MOV ESI,dword ptr [ESP + 0x524]     ; 004bfcec
    PUSH ESI                            ; 004bfcf3
    MOV EDI,dword ptr [ESP + 0x534]     ; 004bfcf4
    PUSH EDI                            ; 004bfcfb
    PUSH 0x5c3ac4                       ; 004bfcfc | = "%2d:%2d:%2d.%2d\n\n"
    LEA EAX,[ESP + 0x414]               ; 004bfd01
    PUSH EAX                            ; 004bfd08
    XOR ESI,ESI                         ; 004bfd09
    CALL crt_unknown.c_FUN_005a28c0     ; 004bfd0b
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    MOV DL,0x30                         ; 004bfd10
    ADD ESP,0x18                        ; 004bfd12
    LEA EDI,[ESP + 0x400]               ; 004bfd15
        ;   Label: LAB_004bfd15
    SUB ECX,ECX                         ; 004bfd1c
    DEC ECX                             ; 004bfd1e
    XOR EAX,EAX                         ; 004bfd1f
    SCASB.REPNE ES:EDI                  ; 004bfd21
    NOT ECX                             ; 004bfd23
    DEC ECX                             ; 004bfd25
    CMP ESI,ECX                         ; 004bfd26
    JNC 0x004bfd40                      ; 004bfd28
        ;   XREF to: 004bfd40 (CONDITIONAL_JUMP)  ; LAB_004bfd40
    CMP byte ptr [ESP + ESI*0x1 + 0x400],0x20 ; 004bfd2a
    JZ 0x004bfd37                       ; 004bfd32
        ;   XREF to: 004bfd37 (CONDITIONAL_JUMP)  ; LAB_004bfd37
    INC ESI                             ; 004bfd34
        ;   Label: LAB_004bfd34
    JMP 0x004bfd15                      ; 004bfd35
        ;   XREF to: 004bfd15 (UNCONDITIONAL_JUMP)  ; LAB_004bfd15
    MOV byte ptr [ESP + ESI*0x1 + 0x400],DL ; 004bfd37
        ;   Label: LAB_004bfd37
    JMP 0x004bfd34                      ; 004bfd3e
        ;   XREF to: 004bfd34 (UNCONDITIONAL_JUMP)  ; LAB_004bfd34
    LEA ESI,[ESP + 0x400]               ; 004bfd40
        ;   Label: LAB_004bfd40
    MOV EDI,ESP                         ; 004bfd47
    PUSH EDI                            ; 004bfd49
    SUB ECX,ECX                         ; 004bfd4a
    DEC ECX                             ; 004bfd4c
    MOV AL,0x0                          ; 004bfd4d
    SCASB.REPNE ES:EDI                  ; 004bfd4f
    DEC EDI                             ; 004bfd51
    MOV AL,byte ptr [ESI]               ; 004bfd52
        ;   Label: LAB_004bfd52
    MOV byte ptr [EDI],AL               ; 004bfd54
    CMP AL,0x0                          ; 004bfd56
    JZ 0x004bfd6a                       ; 004bfd58
        ;   XREF to: 004bfd6a (CONDITIONAL_JUMP)  ; LAB_004bfd6a
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfd5a
    ADD ESI,0x2                         ; 004bfd5d
    MOV byte ptr [EDI + 0x1],AL         ; 004bfd60
    ADD EDI,0x2                         ; 004bfd63
    CMP AL,0x0                          ; 004bfd66
    JNZ 0x004bfd52                      ; 004bfd68
        ;   XREF to: 004bfd52 (CONDITIONAL_JUMP)  ; LAB_004bfd52
    POP EDI                             ; 004bfd6a
        ;   Label: LAB_004bfd6a
    PUSH 0x5c3ad6                       ; 004bfd6b | = "Body count"
    CALL support_newmsg.cpp_getLocalizedString_FUN_00508960 ; 004bfd70
        ;   XREF to: 00508960 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_00508960(char * key)
    ADD ESP,0x4                         ; 004bfd75
    MOV EDI,ESP                         ; 004bfd78
    MOV ESI,EAX                         ; 004bfd7a
    PUSH EDI                            ; 004bfd7c
    SUB ECX,ECX                         ; 004bfd7d
    DEC ECX                             ; 004bfd7f
    MOV AL,0x0                          ; 004bfd80
    SCASB.REPNE ES:EDI                  ; 004bfd82
    DEC EDI                             ; 004bfd84
    MOV AL,byte ptr [ESI]               ; 004bfd85
        ;   Label: LAB_004bfd85
    MOV byte ptr [EDI],AL               ; 004bfd87
    CMP AL,0x0                          ; 004bfd89
    JZ 0x004bfd9d                       ; 004bfd8b
        ;   XREF to: 004bfd9d (CONDITIONAL_JUMP)  ; LAB_004bfd9d
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfd8d
    ADD ESI,0x2                         ; 004bfd90
    MOV byte ptr [EDI + 0x1],AL         ; 004bfd93
    ADD EDI,0x2                         ; 004bfd96
    CMP AL,0x0                          ; 004bfd99
    JNZ 0x004bfd85                      ; 004bfd9b
        ;   XREF to: 004bfd85 (CONDITIONAL_JUMP)  ; LAB_004bfd85
    POP EDI                             ; 004bfd9d
        ;   Label: LAB_004bfd9d
    MOV ESI,0x5c3ae1                    ; 004bfd9e | DAT_005c3ae1
    MOV EDI,ESP                         ; 004bfda3
    PUSH EDI                            ; 004bfda5
    SUB ECX,ECX                         ; 004bfda6
    DEC ECX                             ; 004bfda8
    MOV AL,0x0                          ; 004bfda9
    SCASB.REPNE ES:EDI                  ; 004bfdab
    DEC EDI                             ; 004bfdad
    MOV AL,byte ptr [ESI]               ; 004bfdae | DAT_005c3ae1 | DAT_005c3ae3
        ;   Label: LAB_004bfdae
    MOV byte ptr [EDI],AL               ; 004bfdb0
    CMP AL,0x0                          ; 004bfdb2
    JZ 0x004bfdc6                       ; 004bfdb4
        ;   XREF to: 004bfdc6 (CONDITIONAL_JUMP)  ; LAB_004bfdc6
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfdb6 | DAT_005c3ae2 | DAT_005c3ae4
    ADD ESI,0x2                         ; 004bfdb9
    MOV byte ptr [EDI + 0x1],AL         ; 004bfdbc
    ADD EDI,0x2                         ; 004bfdbf
    CMP AL,0x0                          ; 004bfdc2
    JNZ 0x004bfdae                      ; 004bfdc4
        ;   XREF to: 004bfdae (CONDITIONAL_JUMP)  ; LAB_004bfdae
    POP EDI                             ; 004bfdc6
        ;   Label: LAB_004bfdc6
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004bfdc7
    MOV EBP,dword ptr [EAX + 0x274]     ; 004bfdce
    PUSH EBP                            ; 004bfdd4
    PUSH 0x5c3ae4                       ; 004bfdd5 | DAT_005c3ae4
    LEA EAX,[ESP + 0x408]               ; 004bfdda
    PUSH EAX                            ; 004bfde1
    CALL crt_unknown.c_FUN_005a28c0     ; 004bfde2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 004bfde7
    LEA ESI,[ESP + 0x400]               ; 004bfdea
    MOV EDI,ESP                         ; 004bfdf1
    PUSH EDI                            ; 004bfdf3
    SUB ECX,ECX                         ; 004bfdf4
    DEC ECX                             ; 004bfdf6
    MOV AL,0x0                          ; 004bfdf7
    SCASB.REPNE ES:EDI                  ; 004bfdf9
    DEC EDI                             ; 004bfdfb
    MOV AL,byte ptr [ESI]               ; 004bfdfc
        ;   Label: LAB_004bfdfc
    MOV byte ptr [EDI],AL               ; 004bfdfe
    CMP AL,0x0                          ; 004bfe00
    JZ 0x004bfe14                       ; 004bfe02
        ;   XREF to: 004bfe14 (CONDITIONAL_JUMP)  ; LAB_004bfe14
    MOV AL,byte ptr [ESI + 0x1]         ; 004bfe04
    ADD ESI,0x2                         ; 004bfe07
    MOV byte ptr [EDI + 0x1],AL         ; 004bfe0a
    ADD EDI,0x2                         ; 004bfe0d
    CMP AL,0x0                          ; 004bfe10
    JNZ 0x004bfdfc                      ; 004bfe12
        ;   XREF to: 004bfdfc (CONDITIONAL_JUMP)  ; LAB_004bfdfc
    POP EDI                             ; 004bfe14
        ;   Label: LAB_004bfe14
    PUSH 0xffff                         ; 004bfe15
    MOV EBP,dword ptr [0x01549aa8]      ; 004bfe1a | DAT_01549aa8
    CALL engine_3d.c_setRenderAlpha_FUN_00406bf0 ; 004bfe20
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406bf0(int alpha_color_value)
    ADD ESP,0x4                         ; 004bfe25
    PUSH 0xc0                           ; 004bfe28
    PUSH 0x100                          ; 004bfe2d
    PUSH 0x14                           ; 004bfe32
    PUSH 0x1d1bb20                      ; 004bfe34
    LEA EAX,[ESP + 0x10]                ; 004bfe39
    PUSH EAX                            ; 004bfe3d
    PUSH EBP                            ; 004bfe3e
    CALL engine_font.cpp_FUN_004b2e40   ; 004bfe3f
        ;   XREF to: 004b2e40 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b2e40()
    ADD ESP,0x18                        ; 004bfe44
    PUSH 0x58                           ; 004bfe47
    XOR EBX,EBX                         ; 004bfe49
    PUSH EBP                            ; 004bfe4b
    MOV EDI,EAX                         ; 004bfe4c
    MOV dword ptr [ESP + 0x538],EAX     ; 004bfe4e
    CALL engine_font.cpp_FUN_004b30f0   ; 004bfe55
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b30f0(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004bfe5a
    MOV ESI,0xf0                        ; 004bfe5d
    MOV dword ptr [ESP + 0x52c],EAX     ; 004bfe62
    TEST EDI,EDI                        ; 004bfe69
    JLE 0x004bfeb0                      ; 004bfe6b
        ;   XREF to: 004bfeb0 (CONDITIONAL_JUMP)  ; LAB_004bfeb0
    MOV EDI,0x1d1bb20                   ; 004bfe6d
    PUSH EDI                            ; 004bfe72
        ;   Label: LAB_004bfe72
    PUSH 0x0                            ; 004bfe73
    PUSH 0xf8                           ; 004bfe75
    PUSH ESI                            ; 004bfe7a
    PUSH 0x27f                          ; 004bfe7b
    PUSH 0x1c0                          ; 004bfe80
    PUSH EBP                            ; 004bfe85
    INC EBX                             ; 004bfe86
    CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0 ; 004bfe87
        ;   XREF to: 004b0fa0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004b0fa0(CBitFont * this_ptr, int left_x, int right_x, int y, ...)
    ADD ESP,0x1c                        ; 004bfe8c
    ADD EDI,0x100                       ; 004bfe8f
    MOV EAX,dword ptr [ESP + 0x52c]     ; 004bfe95
    MOV EDX,dword ptr [ESP + 0x530]     ; 004bfe9c
    ADD ESI,EAX                         ; 004bfea3
    CMP EBX,EDX                         ; 004bfea5
    JL 0x004bfe72                       ; 004bfea7
        ;   XREF to: 004bfe72 (CONDITIONAL_JUMP)  ; LAB_004bfe72
    LEA EAX,[EAX]                       ; 004bfea9
    NOP                                 ; 004bfeaf
    MOV EAX,dword ptr [ESP + 0x54c]     ; 004bfeb0
        ;   Label: LAB_004bfeb0
    PUSH 0x0                            ; 004bfeb7
    MOV dword ptr [EAX + 0x278],0x0     ; 004bfeb9
    LEA EAX,[ESP + 0x504]               ; 004bfec3
    PUSH EAX                            ; 004bfeca
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 004bfecb
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bfed0
    ADD ESP,0x538                       ; 004bfed3
    POP EBP                             ; 004bfed9
    POP EDI                             ; 004bfeda
    POP ESI                             ; 004bfedb
    POP EBX                             ; 004bfedc
    RET                                 ; 004bfedd

