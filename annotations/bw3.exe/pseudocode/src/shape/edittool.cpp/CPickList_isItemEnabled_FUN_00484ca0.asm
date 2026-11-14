; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CPickList_isItemEnabled_FUN_00484ca0(CPickList *this_ptr,int item_index)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   item_index
;
; XREF[6]:
;   shape_edittool.cpp_CPickList_handleDialogInput_FUN_00483970 at 004839af
;   shape_edittool.cpp_CPickList_handleInput_FUN_00483550 at 00483587
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004843d0 at 0048483c
;   shape_edittool.cpp_FUN_00484e30 at 00484e59
;   shape_edittool.cpp_FUN_00484eb0 at 00484edf
;   shape_edittool.cpp_FUN_00485010 at 0048502d
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd7ed
;   TerminatedCString s_CPickList_isItemEnabled_005bd803
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484ca0
        ;   Label: shape_edittool.cpp_CPickList_isItemEnabled_FUN_00484ca0
    PUSH ESI                            ; 00484ca1
    MOV ESI,dword ptr [ESP + 0xc]       ; 00484ca2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00484ca6
    TEST EBX,EBX                        ; 00484caa
    JL 0x00484cb2                       ; 00484cac
        ;   XREF to: 00484cb2 (CONDITIONAL_JUMP)  ; LAB_00484cb2
    CMP EBX,dword ptr [ESI]             ; 00484cae
    JL 0x00484cd7                       ; 00484cb0
        ;   XREF to: 00484cd7 (CONDITIONAL_JUMP)  ; LAB_00484cd7
    PUSH EDI                            ; 00484cb2
        ;   Label: LAB_00484cb2
    MOV ECX,0x5bd7ed                    ; 00484cb3 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x1188                      ; 00484cb8
    PUSH 0x5bd803                       ; 00484cbd | = "CPickList::isItemEnabled - invalid index"
    MOV dword ptr [0x01d71de0],ECX      ; 00484cc2 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00484cc8 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00484cce
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00484cd3
    POP EDI                             ; 00484cd6
    CMP EBX,dword ptr [ESI + 0x1ac]     ; 00484cd7
        ;   Label: LAB_00484cd7
    JL 0x00484ce7                       ; 00484cdd
        ;   XREF to: 00484ce7 (CONDITIONAL_JUMP)  ; LAB_00484ce7
    MOV EAX,0x1                         ; 00484cdf
    POP ESI                             ; 00484ce4
    POP EBX                             ; 00484ce5
    RET                                 ; 00484ce6
    MOV EAX,dword ptr [ESI + 0x1b0]     ; 00484ce7
        ;   Label: LAB_00484ce7
    CMP dword ptr [EAX + EBX*0x4],0x0   ; 00484ced
    SETNZ AL                            ; 00484cf1
    AND EAX,0xff                        ; 00484cf4
    POP ESI                             ; 00484cf9
    POP EBX                             ; 00484cfa
    RET                                 ; 00484cfb

