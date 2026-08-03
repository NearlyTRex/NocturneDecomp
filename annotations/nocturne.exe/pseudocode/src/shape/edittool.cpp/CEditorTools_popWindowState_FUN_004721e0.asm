; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_004721e0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_dtor_FUN_0046fa20 at 0046fa32
;   shape_edittool.cpp_FUN_004720c0 at 004721a5
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057e9a5
;   TerminatedCString s_CEditorTools_popWindow_c_0057e9bb
;   undefined4 DAT_01bcd07c
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c00c68
;   undefined4 DAT_01c00c6c
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004721e0
        ;   Label: shape_edittool.cpp_CEditorTools_popWindowState_FUN_004721e0
    PUSH ESI                            ; 004721e1
    PUSH EDI                            ; 004721e2
    CMP dword ptr [0x01bcd07c],0x1      ; 004721e3 | DAT_01bcd07c
    JL 0x00472270                       ; 004721ea
        ;   XREF to: 00472270 (CONDITIONAL_JUMP)  ; LAB_00472270
    MOV ESI,dword ptr [0x01bcd07c]      ; 004721f0 | DAT_01bcd07c
        ;   Label: LAB_004721f0
    DEC ESI                             ; 004721f6
    MOV EBX,ESI                         ; 004721f7
    SHL EBX,0x4                         ; 004721f9
    SUB EBX,ESI                         ; 004721fc
    SHL EBX,0x2                         ; 004721fe
    SUB EBX,ESI                         ; 00472201
    SHL EBX,0x3                         ; 00472203
    ADD EBX,0x1bcd080                   ; 00472206
    MOV EDI,dword ptr [EBX + 0x1c8]     ; 0047220c
    MOV dword ptr [0x01bcd07c],ESI      ; 00472212 | DAT_01bcd07c
    TEST EDI,EDI                        ; 00472218
    JNZ 0x00472298                      ; 0047221a
        ;   XREF to: 00472298 (CONDITIONAL_JUMP)  ; LAB_00472298
    MOV EAX,dword ptr [EBX + 0x10]      ; 0047221c
        ;   Label: LAB_0047221c
    MOV [0x01c00c58],EAX                ; 0047221f | DAT_01c00c58
    MOV EAX,dword ptr [EBX + 0x14]      ; 00472224
    MOV [0x01c00c5c],EAX                ; 00472227 | DAT_01c00c5c
    MOV EAX,dword ptr [EBX + 0x18]      ; 0047222c
    MOV [0x01c00c60],EAX                ; 0047222f | DAT_01c00c60
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00472234
    MOV [0x01c00c64],EAX                ; 00472237 | DAT_01c00c64
    MOV EAX,dword ptr [EBX + 0x20]      ; 0047223c
    MOV [0x01c00c48],EAX                ; 0047223f | DAT_01c00c48
    MOV EAX,dword ptr [EBX + 0x24]      ; 00472244
    MOV [0x01c00c4c],EAX                ; 00472247 | DAT_01c00c4c
    MOV EAX,dword ptr [EBX + 0x28]      ; 0047224c
    MOV [0x01c00c50],EAX                ; 0047224f | DAT_01c00c50
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00472254
    MOV [0x01c00c54],EAX                ; 00472257 | DAT_01c00c54
    MOV EAX,dword ptr [EBX + 0x30]      ; 0047225c
    MOV [0x01c00c68],EAX                ; 0047225f | DAT_01c00c68
    MOV EAX,dword ptr [EBX + 0x34]      ; 00472264
    MOV [0x01c00c6c],EAX                ; 00472267 | DAT_01c00c6c
    POP EDI                             ; 0047226c
    POP ESI                             ; 0047226d
    POP EBX                             ; 0047226e
    RET                                 ; 0047226f
    MOV ECX,0x57e9a5                    ; 00472270 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00472270
    MOV EBX,0x718                       ; 00472275
    PUSH 0x57e9bb                       ; 0047227a | = "CEditorTools::popWindow() called but ..."
    MOV dword ptr [0x01cc4800],ECX      ; 0047227f | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 00472285 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0047228b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00472290
    JMP 0x004721f0                      ; 00472293
        ;   XREF to: 004721f0 (UNCONDITIONAL_JUMP)  ; LAB_004721f0
    PUSH EDI                            ; 00472298
        ;   Label: LAB_00472298
    CALL crt_unknown.c_FUN_005638d0     ; 00472299
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0047229e
    MOV dword ptr [EBX + 0x1c8],0x0     ; 004722a1
    JMP 0x0047221c                      ; 004722ab
        ;   XREF to: 0047221c (UNCONDITIONAL_JUMP)  ; LAB_0047221c

