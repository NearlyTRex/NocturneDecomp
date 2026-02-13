; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_CScript_gotoPosition_FUN_00565aa0(CScript *this_ptr,int column,int line)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   column
; int              Stack[0xc]:4   line
;
; XREF[1]:
;   core_script.cpp_CScript_FUN_00565130 at 0056590f
;
; Called Functions:
;   core_script.cpp_CScript_editorX2Index_FUN_00566a90
;   shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565aa0
        ;   Label: core_script.cpp_CScript_gotoPosition_FUN_00565aa0
    MOV EBX,dword ptr [ESP + 0x10]      ; 00565aa1
    TEST EBX,EBX                        ; 00565aa5
    JGE 0x00565aab                      ; 00565aa7
        ;   XREF to: 00565aab (CONDITIONAL_JUMP)  ; LAB_00565aab
    POP EBX                             ; 00565aa9
        ;   Label: LAB_00565aa9
    RET                                 ; 00565aaa
    MOV EAX,dword ptr [ESP + 0x8]       ; 00565aab
        ;   Label: LAB_00565aab
    ADD EAX,0x38                        ; 00565aaf
    PUSH EAX                            ; 00565ab2
    CALL shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0 ; 00565ab3
        ;   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList * this_ptr)
    ADD ESP,0x4                         ; 00565ab8
    CMP EBX,EAX                         ; 00565abb
    JGE 0x00565aa9                      ; 00565abd
        ;   XREF to: 00565aa9 (CONDITIONAL_JUMP)  ; LAB_00565aa9
    MOV EDX,dword ptr [ESP + 0xc]       ; 00565abf
    PUSH EDX                            ; 00565ac3
    PUSH EBX                            ; 00565ac4
    MOV ECX,dword ptr [ESP + 0x10]      ; 00565ac5
    PUSH ECX                            ; 00565ac9
    CALL core_script.cpp_CScript_editorX2Index_FUN_00566a90 ; 00565aca
        ;   XREF to: 00566a90 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_editorX2Index_FUN_00566a90(CScript * this_ptr, int line_number, int visual_column)
    ADD ESP,0xc                         ; 00565acf
    POP EBX                             ; 00565ad2
    RET                                 ; 00565ad3

