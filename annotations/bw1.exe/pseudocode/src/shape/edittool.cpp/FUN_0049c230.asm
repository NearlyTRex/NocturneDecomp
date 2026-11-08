; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0049c230(int *param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0049c290 at 0049c2ce
;   FUN_0049c310 at 0049c354
;   FUN_0049c470 at 0049c4bd
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc7d2
;   TerminatedCString s_CPickList_getItemHotKey_005dc7e8
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c230
        ;   Label: FUN_0049c230
    PUSH ESI                            ; 0049c231
    MOV ESI,dword ptr [ESP + 0xc]       ; 0049c232
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049c236
    TEST EBX,EBX                        ; 0049c23a
    JL 0x0049c242                       ; 0049c23c
        ;   XREF to: 0049c242 (CONDITIONAL_JUMP)  ; LAB_0049c242
    CMP EBX,dword ptr [ESI]             ; 0049c23e
    JL 0x0049c267                       ; 0049c240
        ;   XREF to: 0049c267 (CONDITIONAL_JUMP)  ; LAB_0049c267
    PUSH EDI                            ; 0049c242
        ;   Label: LAB_0049c242
    MOV ECX,0x5dc7d2                    ; 0049c243 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x11af                      ; 0049c248
    PUSH 0x5dc7e8                       ; 0049c24d | = "CPickList::getItemHotKey - invalid index"
    MOV dword ptr [0x01d1d400],ECX      ; 0049c252 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0049c258 | DAT_01d1d404
    CALL FUN_005030e0                   ; 0049c25e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 0049c263
    POP EDI                             ; 0049c266
    CMP EBX,dword ptr [ESI + 0x1b4]     ; 0049c267
        ;   Label: LAB_0049c267
    JL 0x0049c277                       ; 0049c26d
        ;   XREF to: 0049c277 (CONDITIONAL_JUMP)  ; LAB_0049c277
    MOV EAX,0xffffffff                  ; 0049c26f
    POP ESI                             ; 0049c274
    POP EBX                             ; 0049c275
    RET                                 ; 0049c276
    LEA EAX,[EBX*0x4 + 0x0]             ; 0049c277
        ;   Label: LAB_0049c277
    MOV EBX,dword ptr [ESI + 0x1b8]     ; 0049c27e
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 0049c284
    POP ESI                             ; 0049c287
    POP EBX                             ; 0049c288
    RET                                 ; 0049c289

