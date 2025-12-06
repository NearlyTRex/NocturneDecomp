; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_box.cpp_CBox_setupN_FUN_0041df50(CBox * this_ptr, CVector3f * position, CVector3f * orientation, int point_count, CVector3f * point_array, float volume)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   orientation
; int              Stack[0x10]:4   point_count
; CVector3f *      Stack[0x14]:4   point_array
; float            Stack[0x18]:4   volume
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_box_cpp_00616477
;   TerminatedCString s_CBox_setupN_Too_many_scr_00616487
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041df50
        ;   Label: core_box.cpp_CBox_setupN_FUN_0041df50
    PUSH ESI                            ; 0041df51
    PUSH EDI                            ; 0041df52
    PUSH EBP                            ; 0041df53
    SUB ESP,0x24                        ; 0041df54
    MOV ESI,dword ptr [ESP + 0x38]      ; 0041df57
    MOV EBX,dword ptr [ESP + 0x44]      ; 0041df5b
    CMP EBX,0x8                         ; 0041df5f
    JG 0x0041e0b0                       ; 0041df62 | LAB_0041e0b0
        ;   XREF to: 0041e0b0 (CONDITIONAL_JUMP)
    MOV EDI,0x4479c000                  ; 0041df68
        ;   Label: LAB_0041df68
    MOV EDX,0xc479c000                  ; 0041df6d
    MOV dword ptr [ESP + 0x1c],EDI      ; 0041df72
    MOV dword ptr [ESP + 0x20],EDI      ; 0041df76
    MOV dword ptr [ESP + 0xc],EDX       ; 0041df7a
    MOV ECX,EDX                         ; 0041df7e
    MOV dword ptr [ESP + 0x10],EDX      ; 0041df80
    MOV dword ptr [ESP + 0x14],EDX      ; 0041df84
    MOV dword ptr [ESP + 0x18],EDI      ; 0041df88
    XOR ECX,EDX                         ; 0041df8c
    TEST EBX,EBX                        ; 0041df8e
    JLE 0x0041e010                      ; 0041df90 | LAB_0041e010
        ;   XREF to: 0041e010 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x48]      ; 0041df96
    MOV EDX,0x616477                    ; 0041e0b0 | = "..\\core\\box.cpp" | s_core_box_cpp_00616477 = ..\core\box.cpp
        ;   Label: LAB_0041e0b0
    MOV ECX,0x80                        ; 0041e0b5
    PUSH 0x616487                       ; 0041e0ba | = "CBox::setupN - Too many scrape points" | s_CBox_setupN_Too_many_scr_00616487 = CBox::setupN - Too many scrape points
    MOV dword ptr [0x02f0ca48],EDX      ; 0041e0bf | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0041e0c5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041e0cb | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0041e0d0
    JMP 0x0041df68                      ; 0041e0d3 | LAB_0041df68
        ;   XREF to: 0041df68 (UNCONDITIONAL_JUMP)

