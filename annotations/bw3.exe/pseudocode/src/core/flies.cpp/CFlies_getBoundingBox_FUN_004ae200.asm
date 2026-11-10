; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_flies_cpp_CFlies_getBoundingBox_FUN_004ae200(CFlies *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CFlies *         Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; Referenced Globals:
;   undefined4 DAT_005c1c69
;   undefined4 DAT_005c1c71
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae200
        ;   Label: core_flies.cpp_CFlies_getBoundingBox_FUN_004ae200
    PUSH EDI                            ; 004ae201
    SUB ESP,0x20                        ; 004ae202
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004ae205
    MOV EDX,ESI                         ; 004ae209
    FLD float ptr [ECX + 0x158]         ; 004ae20b
    FLD ST0                             ; 004ae211
    FLD double ptr [0x005c1c69]         ; 004ae213 | DAT_005c1c69
    FXCH                                ; 004ae219
    FMUL ST1                            ; 004ae21b
    FXCH ST2                            ; 004ae21d
    FLD double ptr [0x005c1c71]         ; 004ae21f | DAT_005c1c71
    FXCH                                ; 004ae225
    FMUL ST1                            ; 004ae227
    FLD float ptr [ECX + 0x160]         ; 004ae229
    FMUL ST3                            ; 004ae22f
    FMULP ST2                           ; 004ae231
    MOV EDI,ESI                         ; 004ae233
    MOV EAX,dword ptr [ECX + 0x15c]     ; 004ae235
    XOR EBX,EBX                         ; 004ae23b
    MOV ECX,0x6                         ; 004ae23d
    MOV ESI,ESP                         ; 004ae242
    MOV dword ptr [ESP + 0x4],EBX       ; 004ae244
    MOV dword ptr [ESP + 0x10],EAX      ; 004ae248
    FXCH ST3                            ; 004ae24c
    FSTP float ptr [ESP]                ; 004ae24e
    FXCH ST2                            ; 004ae251
    FSTP float ptr [ESP + 0xc]          ; 004ae253
    FSTP float ptr [ESP + 0x8]          ; 004ae257
    FSTP float ptr [ESP + 0x14]         ; 004ae25b
    MOVSD.REP ES:EDI,ESI                ; 004ae25f
    MOV EAX,EDX                         ; 004ae261
    ADD ESP,0x20                        ; 004ae263
    POP EDI                             ; 004ae266
    POP EBX                             ; 004ae267
    RET                                 ; 004ae268

