; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0(CEditorTools *this_ptr,char *format,...)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   format
; Local Variables:
; va_list_t        Stack[-0x8]:4  local_8
;
; XREF[12]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00508022
;   core_msnedit.cpp_CDemonMission_saveWithNewName_FUN_00537f60 at 005380f5
;   core_msnedit.cpp_FUN_00537dd0 at 00537e7b
;   core_script.cpp_CScript_loadState_FUN_00560820 at 00560b34
;   core_set.cpp_CDemonSet_loadStateInfo_FUN_00571230 at 005712a0
;   core_stranger.cpp_CStranger_FUN_005bdd20 at 005be3a0
;   core_stranger.cpp_CStranger_FUN_005c1f00 at 005c1f6e
;   core_stranger.cpp_CStranger_FUN_005c2850 at 005c2b4e
;   core_stranger.cpp_CStranger_FUN_005c5270 at 005c5aff
;   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 at 004b5009
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_Warning_00623010
;   char[1024] g_DialogMessageBuffer_02cef130
;   HWND g_DialogParentWindow
;
; Called Functions:
;   crt_stdio.c__vsprintf_FUN_005fdba8
;   shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e6f0
        ;   Label: shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
    SUB ESP,0x4                         ; 0049e6f1
    LEA EAX,[ESP + 0x14]                ; 0049e6f4
    MOV dword ptr [ESP],EAX             ; 0049e6f8
    MOV EAX,ESP                         ; 0049e6fb
    PUSH EAX                            ; 0049e6fd
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049e6fe
    PUSH EDX                            ; 0049e702
    PUSH 0x2cef130                      ; 0049e703 | g_DialogMessageBuffer_02cef130
    CALL crt_stdio.c__vsprintf_FUN_005fdba8 ; 0049e708
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 0049e70d
    MOV EBX,dword ptr [0x02cf2a90]      ; 0049e710 | g_DialogParentWindow
    PUSH EBX                            ; 0049e716
    PUSH 0x2cef130                      ; 0049e717 | g_DialogMessageBuffer_02cef130
    XOR ECX,ECX                         ; 0049e71c
    PUSH 0x623010                       ; 0049e71e | = "Warning"
    MOV dword ptr [ESP + 0xc],ECX       ; 0049e723
    CALL shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130 ; 0049e727
        ;   XREF to: 0049e130 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_drawSingleButtonPrompt_FUN_0049e130(char * title, char * message, int color)
    ADD ESP,0xc                         ; 0049e72c
    ADD ESP,0x4                         ; 0049e72f
    POP EBX                             ; 0049e732
    RET                                 ; 0049e733

