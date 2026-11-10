; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0(CEditorTools *this_ptr,char *format_string)
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
;   core_game.cpp_CGame_processHotkeys_FUN_004ba540 at 004bad20
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90 at 004b8abc
;
; Referenced Globals:
;   undefined4 DAT_005bce93
;   undefined4 DAT_005bce98
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;   shape_edittool.cpp_CStrList_add_FUN_00482070
;   shape_edittool.cpp_CStrList_ctor_FUN_00481f20
;   shape_edittool.cpp_CStrList_dtor_FUN_00481f40
;   shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047d8c0
        ;   Label: shape_edittool.cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0047d8c0
    SUB ESP,0x414                       ; 0047d8c1
    LEA EAX,[ESP + 0x424]               ; 0047d8c7
    MOV dword ptr [ESP + 0x410],EAX     ; 0047d8ce
    LEA EAX,[ESP + 0x410]               ; 0047d8d5
    PUSH EAX                            ; 0047d8dc
    MOV EDX,dword ptr [ESP + 0x424]     ; 0047d8dd
    PUSH EDX                            ; 0047d8e4
    LEA EAX,[ESP + 0x8]                 ; 0047d8e5
    PUSH EAX                            ; 0047d8e9
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 0047d8ea
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 0047d8ef
    LEA EAX,[ESP + 0x400]               ; 0047d8f2
    XOR ECX,ECX                         ; 0047d8f9
    PUSH EAX                            ; 0047d8fb
    MOV dword ptr [ESP + 0x414],ECX     ; 0047d8fc
    CALL shape_edittool.cpp_CStrList_ctor_FUN_00481f20 ; 0047d903
        ;   XREF to: 00481f20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_00481f20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 0047d908
    PUSH 0x5bce93                       ; 0047d90b | DAT_005bce93
    LEA EAX,[ESP + 0x404]               ; 0047d910
    PUSH EAX                            ; 0047d917
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047d918
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047d91d
    PUSH 0x5bce98                       ; 0047d920 | DAT_005bce98
    LEA EAX,[ESP + 0x404]               ; 0047d925
    PUSH EAX                            ; 0047d92c
    CALL shape_edittool.cpp_CStrList_add_FUN_00482070 ; 0047d92d
        ;   XREF to: 00482070 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CStrList_add_FUN_00482070(CStrList * this_ptr, char * string_data)
    ADD ESP,0x8                         ; 0047d932
    PUSH 0x1                            ; 0047d935
    LEA EAX,[ESP + 0x404]               ; 0047d937
    PUSH EAX                            ; 0047d93e
    LEA EAX,[ESP + 0x8]                 ; 0047d93f
    PUSH EAX                            ; 0047d943
    CALL shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230 ; 0047d944
        ;   XREF to: 0047d230 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_showMultiChoiceDialog_FUN_0047d230(CStrList * str_list, char * dialog_title, int dialog_mode)
    ADD ESP,0xc                         ; 0047d949
    XOR EBX,EBX                         ; 0047d94c
    TEST EAX,EAX                        ; 0047d94e
    SETZ AL                             ; 0047d950
    PUSH 0x0                            ; 0047d953
    MOV BL,AL                           ; 0047d955
    LEA EAX,[ESP + 0x404]               ; 0047d957
    PUSH EAX                            ; 0047d95e
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00481f40 ; 0047d95f
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00481f40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0047d964
    MOV EAX,EBX                         ; 0047d967
    ADD ESP,0x414                       ; 0047d969
    POP EBX                             ; 0047d96f
    RET                                 ; 0047d970

