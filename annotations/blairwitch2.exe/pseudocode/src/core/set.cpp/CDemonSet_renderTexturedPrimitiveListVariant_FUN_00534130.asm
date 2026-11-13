; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00534130(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; int              Stack[0xc]:4   count
;
; XREF[1]:
;   core_dpart.cpp_FUN_00461a50 at 00461b92
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;
; Called Functions:
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004facd0
;   engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534130
        ;   Label: core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_00534130
    PUSH ESI                            ; 00534131
    PUSH EDI                            ; 00534132
    PUSH EBP                            ; 00534133
    MOV EBP,dword ptr [ESP + 0x14]      ; 00534134
    MOV EAX,dword ptr [ESP + 0x18]      ; 00534138
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0053413c
    MOV EBX,dword ptr [0x00616494]      ; 00534140 | g_CGamePtr
    CMP dword ptr [EBX + 0x20c],0x0     ; 00534146
    JNZ 0x00534180                      ; 0053414d
        ;   XREF to: 00534180 (CONDITIONAL_JUMP)  ; LAB_00534180
    MOV EBX,dword ptr [0x0060b280]      ; 0053414f | DAT_0060b280
    MOV EBX,dword ptr [EBX + 0x18]      ; 00534155
    TEST EBX,EBX                        ; 00534158
    JZ 0x00534185                       ; 0053415a
        ;   XREF to: 00534185 (CONDITIONAL_JUMP)  ; LAB_00534185
    XOR EBX,EBX                         ; 0053415c
    TEST EDI,EDI                        ; 0053415e
    JLE 0x00534180                      ; 00534160
        ;   XREF to: 00534180 (CONDITIONAL_JUMP)  ; LAB_00534180
    MOV ESI,EAX                         ; 00534162
    PUSH ESI                            ; 00534164
        ;   Label: LAB_00534164
    MOV EAX,dword ptr [EBP + 0x161664]  ; 00534165
    PUSH EAX                            ; 0053416b
    INC EBX                             ; 0053416c
    CALL core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004facd0 ; 0053416d
        ;   XREF to: 004facd0 (UNCONDITIONAL_CALL)  ; void core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_004facd0(CMirror * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESI,0x48                        ; 00534172
    ADD ESP,0x8                         ; 00534175
    CMP EBX,EDI                         ; 00534178
    JL 0x00534164                       ; 0053417a
        ;   XREF to: 00534164 (CONDITIONAL_JUMP)  ; LAB_00534164
    LEA EAX,[EAX]                       ; 0053417c
    POP EBP                             ; 00534180
        ;   Label: LAB_00534180
    POP EDI                             ; 00534181
    POP ESI                             ; 00534182
    POP EBX                             ; 00534183
    RET                                 ; 00534184
    XOR ESI,ESI                         ; 00534185
        ;   Label: LAB_00534185
    TEST EDI,EDI                        ; 00534187
    JLE 0x00534180                      ; 00534189
        ;   XREF to: 00534180 (CONDITIONAL_JUMP)  ; LAB_00534180
    MOV EBX,EAX                         ; 0053418b
    PUSH EBX                            ; 0053418d
        ;   Label: LAB_0053418d
    MOV ECX,dword ptr [0x0060b280]      ; 0053418e | DAT_0060b280
    PUSH ECX                            ; 00534194
    INC ESI                             ; 00534195
    CALL engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0 ; 00534196
        ;   XREF to: 004696f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly)
    ADD EBX,0x48                        ; 0053419b
    ADD ESP,0x8                         ; 0053419e
    CMP ESI,EDI                         ; 005341a1
    JL 0x0053418d                       ; 005341a3
        ;   XREF to: 0053418d (CONDITIONAL_JUMP)  ; LAB_0053418d
    POP EBP                             ; 005341a5
    POP EDI                             ; 005341a6
    POP ESI                             ; 005341a7
    POP EBX                             ; 005341a8
    RET                                 ; 005341a9

