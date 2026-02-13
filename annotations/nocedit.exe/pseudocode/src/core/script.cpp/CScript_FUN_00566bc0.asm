; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_FUN_00566bc0(CScript *this_ptr)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0xc]:1  local_c
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053997a
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   int g_MouseX
;   int g_MouseY
;   int g_ScriptEditorLineHeight
;
; Called Functions:
;   core_script.cpp_CScript_screenToScriptPosition_FUN_00566c20
;   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566bc0
        ;   Label: core_script.cpp_CScript_FUN_00566bc0
    SUB ESP,0x8                         ; 00566bc1
    LEA EAX,[ESP + 0x4]                 ; 00566bc4
    PUSH EAX                            ; 00566bc8
    LEA EAX,[ESP + 0x4]                 ; 00566bc9
    PUSH EAX                            ; 00566bcd
    MOV EDX,dword ptr [0x02cf6a90]      ; 00566bce | g_MouseY
    PUSH EDX                            ; 00566bd4
    MOV ECX,dword ptr [0x02cf6a8c]      ; 00566bd5 | g_MouseX
    PUSH ECX                            ; 00566bdb
    MOV EBX,dword ptr [ESP + 0x20]      ; 00566bdc
    PUSH EBX                            ; 00566be0
    CALL core_script.cpp_CScript_screenToScriptPosition_FUN_00566c20 ; 00566be1
        ;   XREF to: 00566c20 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_screenToScriptPosition_FUN_00566c20(CScript * this_ptr, int pixel_x, int pixel_y, int * column_out, ...)
    ADD ESP,0x14                        ; 00566be6
    TEST EAX,EAX                        ; 00566be9
    JNZ 0x00566bf2                      ; 00566beb
        ;   XREF to: 00566bf2 (CONDITIONAL_JUMP)  ; LAB_00566bf2
    ADD ESP,0x8                         ; 00566bed
    POP EBX                             ; 00566bf0
    RET                                 ; 00566bf1
    PUSH EDI                            ; 00566bf2
        ;   Label: LAB_00566bf2
    PUSH ESI                            ; 00566bf3
    PUSH 0x0                            ; 00566bf4
    MOV ESI,dword ptr [0x03114208]      ; 00566bf6 | g_ScriptEditorLineHeight
    PUSH ESI                            ; 00566bfc
    PUSH 0x1                            ; 00566bfd
    MOV EDI,dword ptr [0x00678a60]      ; 00566bff | g_CEditorToolsPtr
    PUSH EDI                            ; 00566c05 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920 ; 00566c06
        ;   XREF to: 004a2920 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920(CEditorTools * this_ptr, int cursor_type, int width, int height)
    ADD ESP,0x10                        ; 00566c0b
    POP ESI                             ; 00566c0e
    POP EDI                             ; 00566c0f
    ADD ESP,0x8                         ; 00566c10
    POP EBX                             ; 00566c13
    RET                                 ; 00566c14

