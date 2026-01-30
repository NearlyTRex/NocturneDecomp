; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_00566230(CScript *this_ptr,int param_2)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; XREF[4]:
;   core_script.cpp_CScript_FUN_00565130 at 00565990
;   core_script.cpp_CScript_FUN_00566330 at 00566342
;   core_script.cpp_CScript_FUN_00566390 at 005663d4
;   core_script.cpp_CScript_editorAction_FUN_00564820 at 00564f07
;
; Referenced Globals:
;   undefined1 DAT_00643f94
;   undefined1 DAT_031101c0
;   undefined1 DAT_031101c1
;   undefined4 DAT_031141bf
;
; Called Functions:
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566230
        ;   Label: core_script.cpp_CScript_FUN_00566230
    PUSH ESI                            ; 00566231
    PUSH EDI                            ; 00566232
    MOV EDI,dword ptr [ESP + 0x14]      ; 00566233
    MOV ESI,0x643f94                    ; 00566237 | DAT_00643f94
    TEST EDI,EDI                        ; 0056623c
    JL 0x00566260                       ; 0056623e
        ;   XREF to: 00566260 (CONDITIONAL_JUMP)  ; LAB_00566260
    MOV EBX,dword ptr [ESP + 0x10]      ; 00566240
    ADD EBX,0x38                        ; 00566244
    PUSH EBX                            ; 00566247
    CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0 ; 00566248
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont * font_ptr)
    ADD ESP,0x4                         ; 0056624d
    CMP EDI,EAX                         ; 00566250
    JGE 0x00566260                      ; 00566252
        ;   XREF to: 00566260 (CONDITIONAL_JUMP)  ; LAB_00566260
    PUSH EDI                            ; 00566254
    PUSH EBX                            ; 00566255
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 00566256
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    MOV ESI,EAX                         ; 0056625b
    ADD ESP,0x8                         ; 0056625d
    MOV EDI,ESI                         ; 00566260
        ;   Label: LAB_00566260
    SUB ECX,ECX                         ; 00566262
    DEC ECX                             ; 00566264
    XOR EAX,EAX                         ; 00566265
    SCASB.REPNE ES:EDI                  ; 00566267 | DAT_00643f94
    NOT ECX                             ; 00566269
    DEC ECX                             ; 0056626b
    MOV EDX,ECX                         ; 0056626c
    CMP ECX,0x3fff                      ; 0056626e
    JBE 0x0056627b                      ; 00566274
        ;   XREF to: 0056627b (CONDITIONAL_JUMP)  ; LAB_0056627b
    MOV EDX,0x3fff                      ; 00566276
    MOV EDI,0x31101c0                   ; 0056627b | DAT_031101c0
        ;   Label: LAB_0056627b
    MOV ECX,EDX                         ; 00566280
    PUSH EDI                            ; 00566282 | DAT_031101c0
    MOV EAX,ECX                         ; 00566283
    SHR ECX,0x2                         ; 00566285
    MOVSD.REP ES:EDI,ESI                ; 00566288 | DAT_031101c0
    MOV CL,AL                           ; 0056628a
    AND CL,0x3                          ; 0056628c
    MOVSB.REP ES:EDI,ESI                ; 0056628f | DAT_031101c0 | DAT_031101c1
    POP EDI                             ; 00566291
    XOR AH,AH                           ; 00566292
    MOV byte ptr [EDX + 0x31101c0],AH   ; 00566294 | DAT_031101c0 | DAT_031141bf
    POP EDI                             ; 0056629a
    POP ESI                             ; 0056629b
    POP EBX                             ; 0056629c
    RET                                 ; 0056629d

