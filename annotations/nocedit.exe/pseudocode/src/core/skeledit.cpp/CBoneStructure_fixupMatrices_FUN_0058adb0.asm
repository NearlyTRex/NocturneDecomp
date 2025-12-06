; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure * this_ptr)
;
; Parameters:
; CBoneStructure * Stack[0x8]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 at 0058a467
;   core_skeledit.cpp_FUN_00592690 at 0059549d
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064a4d8
;   TerminatedCString s_CBoneStructure_fixupMatr_0064a4ed
;   TerminatedCString s_core_skeledit_cpp_0064a51d
;   TerminatedCString s_CBoneStructure_fixupMatr_0064a532
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeledit.cpp_FUN_0058ac80
;   core_xform.cpp_determinant_FUN_005f61c0
;   core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x30                           ; 0058adb0
        ;   Label: core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058adb5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH EBX                            ; 0058adba
    PUSH ESI                            ; 0058adbb
    PUSH EDI                            ; 0058adbc
    PUSH EBP                            ; 0058adbd
    MOV EBP,ESP                         ; 0058adbe
    SUB ESP,0x14                        ; 0058adc0
    AND ESP,0xfffffff8                  ; 0058adc3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058adc6
    MOV EDX,dword ptr [EAX]             ; 0058adc9
    XOR EBX,EBX                         ; 0058adcb
    TEST EDX,EDX                        ; 0058adcd
    JLE 0x0058ae8f                      ; 0058adcf | LAB_0058ae8f
        ;   XREF to: 0058ae8f (CONDITIONAL_JUMP)
    LEA EDI,[EAX + 0x4]                 ; 0058add5
    LEA ESI,[EDI + 0x54]                ; 0058add8
    IMUL EAX,EBX,0x84                   ; 0058addb
        ;   Label: LAB_0058addb
    LEA EDX,[EDI + EAX*0x1]             ; 0058ade1
    PUSH ESI                            ; 0058ade4
    MOV dword ptr [ESP + 0x14],EDX      ; 0058ade5
    CALL core_xform.cpp_determinant_FUN_005f61c0 ; 0058ade9 | double core_xform.cpp_determinant_FUN_005f61c0(CMatrix3x4f * matrix)
        ;   XREF to: 005f61c0 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0xc],EAX       ; 0058adee
    MOV dword ptr [ESP + 0x10],EDX      ; 0058adf2
    FLD double ptr [ESP + 0xc]          ; 0058adf6
    ADD ESP,0x4                         ; 0058adfa
    FLDZ                                ; 0058adfd
    FXCH                                ; 0058adff
    FSTP double ptr [ESP]               ; 0058ae01
    FCOMP double ptr [ESP]              ; 0058ae04
    FNSTSW AX                           ; 0058ae07
    SAHF                                ; 0058ae09
    JBE 0x0058ae33                      ; 0058ae0a | LAB_0058ae33
        ;   XREF to: 0058ae33 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x10]      ; 0058ae0c
    PUSH ECX                            ; 0058ae10
    MOV EAX,0x64a4d8                    ; 0058ae11 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064a4d8 = ..\core\skeledit.cpp
    MOV EDX,0x3b2                       ; 0058ae16
    PUSH 0x64a4ed                       ; 0058ae1b | = "CBoneStructure::fixupMatrices - %s is..." | s_CBoneStructure_fixupMatr_0064a4ed = CBoneStructure::fixupMatrices - %s is mirrored.
    MOV [0x02f0ca48],EAX                ; 0058ae20 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 0058ae25 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058ae2b | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058ae30
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058ae33
        ;   Label: LAB_0058ae33
    MOV EDX,dword ptr [ESP]             ; 0058ae37
    TEST EAX,0x7fffffff                 ; 0058ae3a
    JNZ 0x0058ae70                      ; 0058ae3f | LAB_0058ae70
        ;   XREF to: 0058ae70 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 0058ae41
    JNZ 0x0058ae70                      ; 0058ae43 | LAB_0058ae70
        ;   XREF to: 0058ae70 (CONDITIONAL_JUMP)
    MOV dword ptr [0x02f0ca4c],0x3b6    ; 0058ae45 | int g_CurrentLineNumber
    IMUL EAX,EBX,0x84                   ; 0058ae4f
    ADD EAX,EDI                         ; 0058ae55
    PUSH EAX                            ; 0058ae57
    MOV ECX,0x64a51d                    ; 0058ae58 | = "..\\core\\skeledit.cpp" | s_core_skeledit_cpp_0064a51d = ..\core\skeledit.cpp
    PUSH 0x64a532                       ; 0058ae5d | = "CBoneStructure::fixupMatrices - %s is..." | s_CBoneStructure_fixupMatr_0064a532 = CBoneStructure::fixupMatrices - %s is singular.
    MOV dword ptr [0x02f0ca48],ECX      ; 0058ae62 | char * g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058ae68 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058ae6d
    PUSH 0x0                            ; 0058ae70
        ;   Label: LAB_0058ae70
    PUSH ESI                            ; 0058ae72
    CALL core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690 ; 0058ae73 | void core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f * matrix, int preserve_scale)
        ;   XREF to: 005f6690 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0058ae78
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058ae7b
    INC EBX                             ; 0058ae7e
    MOV ECX,dword ptr [EAX]             ; 0058ae7f
    ADD ESI,0x84                        ; 0058ae81
    CMP EBX,ECX                         ; 0058ae87
    JL 0x0058addb                       ; 0058ae89 | LAB_0058addb
        ;   XREF to: 0058addb (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058ae8f
        ;   Label: LAB_0058ae8f
    PUSH EDX                            ; 0058ae92
    CALL core_skeledit.cpp_FUN_0058ac80 ; 0058ae93 | undefined core_skeledit.cpp_FUN_0058ac80()
        ;   XREF to: 0058ac80 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0058ae98
    MOV ESP,EBP                         ; 0058ae9b
    POP EBP                             ; 0058ae9d
    POP EDI                             ; 0058ae9e
    POP ESI                             ; 0058ae9f
    POP EBX                             ; 0058aea0
    RET                                 ; 0058aea1

