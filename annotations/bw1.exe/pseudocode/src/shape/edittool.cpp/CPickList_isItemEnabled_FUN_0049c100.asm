; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_0049c100(CPickList *this_ptr,int item_index)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   item_index
;
; XREF[6]:
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_0049add0 at 0049ae0f
;   shape_edittool.cpp_CPickList_handleInput_FUN_0049a9b0 at 0049a9e7
;   shape_edittool.cpp_CPickList_renderDialog_FUN_0049b830 at 0049bc9c
;   shape_edittool.cpp_FUN_0049c290 at 0049c2b9
;   shape_edittool.cpp_FUN_0049c310 at 0049c33f
;   shape_edittool.cpp_FUN_0049c470 at 0049c48d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005dc730
;   TerminatedCString s_CPickList_isItemEnabled_005dc746
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049c100
        ;   Label: shape_edittool.cpp_CPickList_isItemEnabled_FUN_0049c100
    PUSH ESI                            ; 0049c101
    MOV ESI,dword ptr [ESP + 0xc]       ; 0049c102
    MOV EBX,dword ptr [ESP + 0x10]      ; 0049c106
    TEST EBX,EBX                        ; 0049c10a
    JL 0x0049c112                       ; 0049c10c
        ;   XREF to: 0049c112 (CONDITIONAL_JUMP)  ; LAB_0049c112
    CMP EBX,dword ptr [ESI]             ; 0049c10e
    JL 0x0049c137                       ; 0049c110
        ;   XREF to: 0049c137 (CONDITIONAL_JUMP)  ; LAB_0049c137
    PUSH EDI                            ; 0049c112
        ;   Label: LAB_0049c112
    MOV ECX,0x5dc730                    ; 0049c113 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x1185                      ; 0049c118
    PUSH 0x5dc746                       ; 0049c11d | = "CPickList::isItemEnabled - invalid index"
    MOV dword ptr [0x01d1d400],ECX      ; 0049c122 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0049c128 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0049c12e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0049c133
    POP EDI                             ; 0049c136
    CMP EBX,dword ptr [ESI + 0x1ac]     ; 0049c137
        ;   Label: LAB_0049c137
    JL 0x0049c147                       ; 0049c13d
        ;   XREF to: 0049c147 (CONDITIONAL_JUMP)  ; LAB_0049c147
    MOV EAX,0x1                         ; 0049c13f
    POP ESI                             ; 0049c144
    POP EBX                             ; 0049c145
    RET                                 ; 0049c146
    MOV EAX,dword ptr [ESI + 0x1b0]     ; 0049c147
        ;   Label: LAB_0049c147
    CMP dword ptr [EAX + EBX*0x4],0x0   ; 0049c14d
    SETNZ AL                            ; 0049c151
    AND EAX,0xff                        ; 0049c154
    POP ESI                             ; 0049c159
    POP EBX                             ; 0049c15a
    RET                                 ; 0049c15b

