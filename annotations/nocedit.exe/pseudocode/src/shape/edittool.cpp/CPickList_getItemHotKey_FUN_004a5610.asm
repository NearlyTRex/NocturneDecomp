; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_CPickList_getItemHotKey_FUN_004a5610(CPickList *this_ptr,int index)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   index
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_00623be4
;   TerminatedCString s_CPickList_getItemHotKey__00623bfa
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5610
        ;   Label: shape_edittool.cpp_CPickList_getItemHotKey_FUN_004a5610
    PUSH ESI                            ; 004a5611
    MOV ESI,dword ptr [ESP + 0xc]       ; 004a5612
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a5616
    TEST EBX,EBX                        ; 004a561a
    JL 0x004a5622                       ; 004a561c
        ;   XREF to: 004a5622 (CONDITIONAL_JUMP)  ; LAB_004a5622
    CMP EBX,dword ptr [ESI]             ; 004a561e
    JL 0x004a5647                       ; 004a5620
        ;   XREF to: 004a5647 (CONDITIONAL_JUMP)  ; LAB_004a5647
    PUSH EDI                            ; 004a5622
        ;   Label: LAB_004a5622
    MOV ECX,0x623be4                    ; 004a5623 | = "..\\shape\\edittool.cpp"
    MOV EDI,0x1066                      ; 004a5628
    PUSH 0x623bfa                       ; 004a562d | = "CPickList::getItemHotKey - invalid index"
    MOV dword ptr [0x02f0ca48],ECX      ; 004a5632 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a5638 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a563e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004a5643
    POP EDI                             ; 004a5646
    CMP EBX,dword ptr [ESI + 0x19c]     ; 004a5647
        ;   Label: LAB_004a5647
    JL 0x004a5657                       ; 004a564d
        ;   XREF to: 004a5657 (CONDITIONAL_JUMP)  ; LAB_004a5657
    MOV EAX,0xffffffff                  ; 004a564f
    POP ESI                             ; 004a5654
    POP EBX                             ; 004a5655
    RET                                 ; 004a5656
    LEA EAX,[EBX*0x4 + 0x0]             ; 004a5657
        ;   Label: LAB_004a5657
    MOV EBX,dword ptr [ESI + 0x1a0]     ; 004a565e
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 004a5664
    POP ESI                             ; 004a5667
    POP EBX                             ; 004a5668
    RET                                 ; 004a5669

