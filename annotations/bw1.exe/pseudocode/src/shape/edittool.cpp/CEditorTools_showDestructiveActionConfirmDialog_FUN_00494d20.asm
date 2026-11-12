; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20(CEditorTools *this_ptr,char *format_string)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format_string
; Local Variables:
; undefined        Stack[-0x418]:1  local_418
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_game.cpp_CGame_processHotkeys_FUN_004d1a80 at 004d228c
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0 at 004d00ec
;
; Referenced Globals:
;   undefined4 DAT_005dbdd6
;   undefined4 DAT_005dbddb
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;   shape_edittool.cpp_CStrList_add_FUN_004994d0
;   shape_edittool.cpp_CStrList_ctor_FUN_00499380
;   shape_edittool.cpp_CStrList_dtor_FUN_004993a0
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494d20
        ;   Label: shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_00494d20
    SUB ESP,0x414                       ; 00494d21
    LEA EAX,[ESP + 0x424]               ; 00494d27
    MOV dword ptr [ESP + 0x410],EAX     ; 00494d2e
    LEA EAX,[ESP + 0x410]               ; 00494d35
    PUSH EAX                            ; 00494d3c
    MOV EDX,dword ptr [ESP + 0x424]     ; 00494d3d
    PUSH EDX                            ; 00494d44
    LEA EAX,[ESP + 0x8]                 ; 00494d45
    PUSH EAX                            ; 00494d49
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 00494d4a
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005bfb18(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00494d4f
    LEA EAX,[ESP + 0x400]               ; 00494d52
    XOR ECX,ECX                         ; 00494d59
    PUSH EAX                            ; 00494d5b
    MOV dword ptr [ESP + 0x414],ECX     ; 00494d5c
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00499380 ; 00494d63
        ;   XREF to: 00499380 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00499380(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00494d68
    PUSH 0x5dbdd6                       ; 00494d6b | DAT_005dbdd6
    LEA EAX,[ESP + 0x404]               ; 00494d70
    PUSH EAX                            ; 00494d77
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00494d78
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00494d7d
    PUSH 0x5dbddb                       ; 00494d80 | DAT_005dbddb
    LEA EAX,[ESP + 0x404]               ; 00494d85
    PUSH EAX                            ; 00494d8c
    CALL shape_edittool.cpp_CStrList_add_FUN_004994d0 ; 00494d8d
        ;   XREF to: 004994d0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_004994d0(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 00494d92
    PUSH 0x1                            ; 00494d95
    LEA EAX,[ESP + 0x404]               ; 00494d97
    PUSH EAX                            ; 00494d9e
    LEA EAX,[ESP + 0x8]                 ; 00494d9f
    PUSH EAX                            ; 00494da3
    CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690 ; 00494da4
        ;   XREF to: 00494690 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showMultiChoiceDialog_FUN_00494690(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 00494da9
    XOR EBX,EBX                         ; 00494dac
    TEST EAX,EAX                        ; 00494dae
    SETZ AL                             ; 00494db0
    PUSH 0x0                            ; 00494db3
    MOV BL,AL                           ; 00494db5
    LEA EAX,[ESP + 0x404]               ; 00494db7
    PUSH EAX                            ; 00494dbe
    CALL shape_edittool.cpp_CStrList_dtor_FUN_004993a0 ; 00494dbf
        ;   XREF to: 004993a0 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_004993a0(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00494dc4
    MOV EAX,EBX                         ; 00494dc7
    ADD ESP,0x414                       ; 00494dc9
    POP EBX                             ; 00494dcf
    RET                                 ; 00494dd0

