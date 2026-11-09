; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_FUN_00529210(CScript *this_ptr,int left,int top,int right,int bottom)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   left
; int              Stack[0xc]:4   top
; int              Stack[0x10]:4   right
; int              Stack[0x14]:4   bottom
; Local Variables:
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b787b
;
; Referenced Globals:
;   undefined4 DAT_005cde1c
;   TerminatedCString s_No_script_loaded_005cde1f
;
; Called Functions:
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640
;   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10
;   cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900
;   cockpit_drawsurf.cpp_FUN_00467a70
;   cockpit_drawsurf.cpp_FUN_00467f20
;   cockpit_drawsurf.cpp_FUN_00468f80
;   cockpit_drawsurf.cpp_FUN_00469690
;   cockpit_drawsurf.cpp_FUN_0046a700
;   crt_unknown.c_FUN_005a28c0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00482440
;   shape_edittool.cpp_FUN_00486af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00529210
        ;   Label: core_script.cpp_FUN_00529210
    PUSH ESI                            ; 00529211
    PUSH EDI                            ; 00529212
    PUSH EBP                            ; 00529213
    SUB ESP,0x94                        ; 00529214
    MOV EBP,dword ptr [ESP + 0xa8]      ; 0052921a
    MOV EDX,dword ptr [ESP + 0xac]      ; 00529221
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00529228
    MOV EDI,dword ptr [ESP + 0xb8]      ; 0052922f
    PUSH 0x0                            ; 00529236
    SUB EDI,EBX                         ; 00529238
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0052923a
    INC EDI                             ; 00529241
    SUB EAX,EDX                         ; 00529242
    PUSH EDI                            ; 00529244
    INC EAX                             ; 00529245
    PUSH EAX                            ; 00529246
    PUSH EBX                            ; 00529247
    PUSH EDX                            ; 00529248
    LEA EAX,[ESP + 0x78]                ; 00529249
    PUSH EAX                            ; 0052924d
    CALL cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900 ; 0052924e
        ;   XREF to: 00467900 (UNCONDITIONAL_CALL)  ; CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_initFromParent_FUN_00467900(CDrawSurface * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x18                        ; 00529253
    PUSH 0x0                            ; 00529256
    CALL cockpit_drawsurf.cpp_FUN_00467a70 ; 00529258
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 0052925d
    LEA EAX,[ESP + 0x64]                ; 00529260
    PUSH EAX                            ; 00529264
    CALL cockpit_drawsurf.cpp_FUN_00469690 ; 00529265
        ;   XREF to: 00469690 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00469690(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 0052926a
    PUSH 0x0                            ; 0052926d
    CALL cockpit_drawsurf.cpp_FUN_00467f20 ; 0052926f
        ;   XREF to: 00467f20 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467f20(CBitFont * font_ptr)
    MOV EDX,dword ptr [EBP + 0x2c]      ; 00529274
    ADD ESP,0x4                         ; 00529277
    TEST EDX,EDX                        ; 0052927a
    JLE 0x005293e6                      ; 0052927c
        ;   XREF to: 005293e6 (CONDITIONAL_JUMP)  ; LAB_005293e6
    LEA EAX,[ESP + 0x64]                ; 00529282
    PUSH EAX                            ; 00529286
    CALL cockpit_drawsurf.cpp_FUN_0046a700 ; 00529287
        ;   XREF to: 0046a700 (UNCONDITIONAL_CALL)  ; int cockpit_drawsurf.cpp_FUN_0046a700(CDrawSurface * this_ptr)
    MOV EBX,EAX                         ; 0052928c
    ADD ESP,0x4                         ; 0052928e
    MOV EDX,dword ptr [EBP + 0x44]      ; 00529291
    MOV dword ptr [ESP + 0x88],EAX      ; 00529294
    MOV EAX,dword ptr [EBP + 0x30]      ; 0052929b
    MOV EAX,dword ptr [EAX + EDX*0x8]   ; 0052929e
    DEC EAX                             ; 005292a1
    MOV EDX,EDI                         ; 005292a2
    MOV dword ptr [ESP + 0x84],EAX      ; 005292a4
    SAR EDX,0x1f                        ; 005292ab
    MOV EAX,EDI                         ; 005292ae
    IDIV EBX                            ; 005292b0
    MOV EDX,EAX                         ; 005292b2
    SAR EDX,0x1f                        ; 005292b4
    SUB EAX,EDX                         ; 005292b7
    SAR EAX,0x1                         ; 005292b9
    MOV EBX,dword ptr [ESP + 0x84]      ; 005292bb
    SUB EBX,EAX                         ; 005292c2
    TEST EBX,EBX                        ; 005292c4
    JL 0x005293bc                       ; 005292c6
        ;   XREF to: 005293bc (CONDITIONAL_JUMP)  ; LAB_005293bc
    MOV ECX,dword ptr [ESP + 0x88]      ; 005292cc
        ;   Label: LAB_005292cc
    MOV ESI,0x2                         ; 005292d3
    LEA EAX,[EBP + 0x34]                ; 005292d8
    SUB EDI,ECX                         ; 005292db
    MOV dword ptr [ESP + 0x90],EAX      ; 005292dd
    MOV dword ptr [ESP + 0x8c],EDI      ; 005292e4
    CMP EDI,ESI                         ; 005292eb
    JLE 0x00529397                      ; 005292ed
        ;   XREF to: 00529397 (CONDITIONAL_JUMP)  ; LAB_00529397
    MOV EDI,dword ptr [ESP + 0x90]      ; 005292f3
        ;   Label: LAB_005292f3
    PUSH EDI                            ; 005292fa
    CALL shape_edittool.cpp_FUN_00486af0 ; 005292fb
        ;   XREF to: 00486af0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_FUN_00486af0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00529300
    CMP EBX,EAX                         ; 00529303
    JGE 0x00529397                      ; 00529305
        ;   XREF to: 00529397 (CONDITIONAL_JUMP)  ; LAB_00529397
    CMP EBX,dword ptr [ESP + 0x84]      ; 0052930b
    JNZ 0x005293dc                      ; 00529312
        ;   XREF to: 005293dc (CONDITIONAL_JUMP)  ; LAB_005293dc
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00529318
    TEST EDX,EDX                        ; 0052931b
    JNZ 0x005293c3                      ; 0052931d
        ;   XREF to: 005293c3 (CONDITIONAL_JUMP)  ; LAB_005293c3
    PUSH 0xfa                           ; 00529323
    CALL cockpit_drawsurf.cpp_FUN_00467a70 ; 00529328
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467a70(int color_value)
        ;   Label: LAB_00529328
    ADD ESP,0x4                         ; 0052932d
    LEA EDI,[EBX + 0x1]                 ; 00529330
    PUSH EDI                            ; 00529333
    PUSH 0x5cde1c                       ; 00529334 | DAT_005cde1c
    LEA EAX,[ESP + 0x8]                 ; 00529339
    PUSH EAX                            ; 0052933d
    CALL crt_unknown.c_FUN_005a28c0     ; 0052933e
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a28c0()
    ADD ESP,0xc                         ; 00529343
    PUSH ESI                            ; 00529346
    PUSH 0x2                            ; 00529347
    LEA EAX,[ESP + 0x8]                 ; 00529349
    PUSH EAX                            ; 0052934d
    LEA EAX,[ESP + 0x70]                ; 0052934e
    PUSH EAX                            ; 00529352
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10 ; 00529353
        ;   XREF to: 00469e10 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 00529358
    PUSH ESI                            ; 0052935b
    PUSH 0x1e                           ; 0052935c
    PUSH EBX                            ; 0052935e
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0052935f
    PUSH EAX                            ; 00529366
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00482440 ; 00529367
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00482440(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0052936c
    PUSH EAX                            ; 0052936f
    LEA EAX,[ESP + 0x70]                ; 00529370
    PUSH EAX                            ; 00529374
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10 ; 00529375
        ;   XREF to: 00469e10 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00469e10(CDrawSurface * this_ptr, char * text, int x, int y)
    ADD ESP,0x10                        ; 0052937a
    MOV EDX,dword ptr [ESP + 0x88]      ; 0052937d
    MOV ECX,dword ptr [ESP + 0x8c]      ; 00529384
    ADD ESI,EDX                         ; 0052938b
    MOV EBX,EDI                         ; 0052938d
    CMP ESI,ECX                         ; 0052938f
    JL 0x005292f3                       ; 00529391
        ;   XREF to: 005292f3 (CONDITIONAL_JUMP)  ; LAB_005292f3
    PUSH 0xff                           ; 00529397
        ;   Label: LAB_00529397
    CALL cockpit_drawsurf.cpp_FUN_00467a70 ; 0052939c
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 005293a1
    LEA EAX,[ESP + 0x64]                ; 005293a4
    PUSH EAX                            ; 005293a8
    CALL cockpit_drawsurf.cpp_FUN_00468f80 ; 005293a9
        ;   XREF to: 00468f80 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00468f80(CDrawSurface * this_ptr)
    ADD ESP,0x4                         ; 005293ae
    ADD ESP,0x94                        ; 005293b1
    POP EBP                             ; 005293b7
    POP EDI                             ; 005293b8
    POP ESI                             ; 005293b9
    POP EBX                             ; 005293ba
    RET                                 ; 005293bb
    XOR EBX,EBX                         ; 005293bc
        ;   Label: LAB_005293bc
    JMP 0x005292cc                      ; 005293be
        ;   XREF to: 005292cc (UNCONDITIONAL_JUMP)  ; LAB_005292cc
    CMP EDX,0x1                         ; 005293c3
        ;   Label: LAB_005293c3
    JNZ 0x005293d2                      ; 005293c6
        ;   XREF to: 005293d2 (CONDITIONAL_JUMP)  ; LAB_005293d2
    PUSH 0xfb                           ; 005293c8
    JMP 0x00529328                      ; 005293cd
        ;   XREF to: 00529328 (UNCONDITIONAL_JUMP)  ; LAB_00529328
    PUSH 0xf9                           ; 005293d2
        ;   Label: LAB_005293d2
    JMP 0x00529328                      ; 005293d7
        ;   XREF to: 00529328 (UNCONDITIONAL_JUMP)  ; LAB_00529328
    PUSH 0xff                           ; 005293dc
        ;   Label: LAB_005293dc
    JMP 0x00529328                      ; 005293e1
        ;   XREF to: 00529328 (UNCONDITIONAL_JUMP)  ; LAB_00529328
    PUSH 0xf9                           ; 005293e6
        ;   Label: LAB_005293e6
    CALL cockpit_drawsurf.cpp_FUN_00467a70 ; 005293eb
        ;   XREF to: 00467a70 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_FUN_00467a70(int color_value)
    ADD ESP,0x4                         ; 005293f0
    PUSH 0x5cde1f                       ; 005293f3 | = "(No script loaded.)"
    LEA EAX,[ESP + 0x68]                ; 005293f8
    PUSH EAX                            ; 005293fc
    CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640 ; 005293fd
        ;   XREF to: 0046a640 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_0046a640(CDrawSurface * this_ptr, char * text)
    ADD ESP,0x8                         ; 00529402
    JMP 0x00529397                      ; 00529405
        ;   XREF to: 00529397 (UNCONDITIONAL_JUMP)  ; LAB_00529397

