; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_course.cpp_CCourse_importMatrices_FUN_00442ea0(CCourse * this_ptr)
;
; Parameters:
; CCourse *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined1       Stack[-0x58]:1  local_58
; undefined1       Stack[-0x54]:1  local_54
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined1       Stack[-0x48]:1  local_48
; undefined1       Stack[-0x44]:1  local_44
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined1       Stack[-0x38]:1  local_38
; undefined1       Stack[-0x34]:1  local_34
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined1       Stack[-0x28]:1  local_28
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_course.cpp_OpeningCourseFile2_FUN_00442d70 at 00442e45
;   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 at 00442cd3
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_00619123
;   TerminatedCString s_core_course_cpp_0061912d
;   TerminatedCString s_CCourse_importMatrices_f_00619140
;   TerminatedCString s_f_f_f_00619177
;   TerminatedCString s_f_f_f_00619181
;   TerminatedCString s_f_f_f_0061918b
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_course.cpp_CCourse_allocMemory_FUN_00442500
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_xform.cpp_matrixToQuaternion_FUN_005f7420
;   core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
;   crt_stdio.c_fscanf_FUN_005fe7c0
;   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442ea0
        ;   Label: core_course.cpp_CCourse_importMatrices_FUN_00442ea0
    PUSH EBP                            ; 00442ea1
    SUB ESP,0x50                        ; 00442ea2
    MOV EBP,dword ptr [ESP + 0x5c]      ; 00442ea5
    MOV EDX,dword ptr [ESP + 0x64]      ; 00442ea9
    PUSH EDX                            ; 00442ead
    PUSH EBP                            ; 00442eae
    XOR EBX,EBX                         ; 00442eaf
    CALL core_course.cpp_CCourse_allocMemory_FUN_00442500 ; 00442eb1
        ;   XREF to: 00442500 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_allocMemory_FUN_00442500(CCourse * this_ptr)
    ADD ESP,0x8                         ; 00442eb6
    CMP EBX,dword ptr [EBP]             ; 00442eb9
    JL 0x00442ec4                       ; 00442ebc
        ;   XREF to: 00442ec4 (CONDITIONAL_JUMP)  ; LAB_00442ec4
    ADD ESP,0x50                        ; 00442ebe
    POP EBP                             ; 00442ec1
    POP EBX                             ; 00442ec2
    RET                                 ; 00442ec3
    PUSH EDI                            ; 00442ec4
        ;   Label: LAB_00442ec4
    PUSH ESI                            ; 00442ec5
    SUB ESP,0x4                         ; 00442ec6
    FILD dword ptr [EBP]                ; 00442ec9
    MOV dword ptr [ESP + 0x58],EBX      ; 00442ecc
    FSTP float ptr [ESP]                ; 00442ed0
    FILD dword ptr [ESP + 0x58]         ; 00442ed3
    SUB ESP,0x4                         ; 00442ed7
    MOV ESI,dword ptr [0x00678a60]      ; 00442eda | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 00442ee0
    PUSH ESI                            ; 00442ee3 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530 ; 00442ee4
        ;   XREF to: 004a0530 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530(CEditorTools * this_ptr, float progress_min, float progress_max)
    ADD ESP,0xc                         ; 00442ee9
    LEA EAX,[ESP + 0x28]                ; 00442eec
    PUSH EAX                            ; 00442ef0
    LEA EAX,[ESP + 0x1c]                ; 00442ef1
    PUSH EAX                            ; 00442ef5
    LEA EAX,[ESP + 0x10]                ; 00442ef6
    PUSH EAX                            ; 00442efa
    PUSH 0x619123                       ; 00442efb | = "%f,%f,%f\n"
    MOV EDI,dword ptr [ESP + 0x78]      ; 00442f00
    PUSH EDI                            ; 00442f04
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00442f05
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 00442f0a
    CMP EAX,0x3                         ; 00442f0d
    JZ 0x00442f35                       ; 00442f10
        ;   XREF to: 00442f35 (CONDITIONAL_JUMP)  ; LAB_00442f35
    PUSH EBX                            ; 00442f12
        ;   Label: LAB_00442f12
    MOV EAX,0x61912d                    ; 00442f13 | = "..\\core\\course.cpp"
    MOV EDX,0x1c2                       ; 00442f18
    PUSH 0x619140                       ; 00442f1d | = "CCourse::importMatrices - file is cor..."
    MOV [0x02f0ca48],EAX                ; 00442f22 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 00442f27 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00442f2d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 00442f32
    LEA EAX,[ESP + 0x2c]                ; 00442f35
        ;   Label: LAB_00442f35
    PUSH EAX                            ; 00442f39
    LEA EAX,[ESP + 0x20]                ; 00442f3a
    PUSH EAX                            ; 00442f3e
    LEA EAX,[ESP + 0x14]                ; 00442f3f
    PUSH EAX                            ; 00442f43
    PUSH 0x619177                       ; 00442f44 | = "%f,%f,%f\n"
    MOV ECX,dword ptr [ESP + 0x78]      ; 00442f49
    PUSH ECX                            ; 00442f4d
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00442f4e
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 00442f53
    CMP EAX,0x3                         ; 00442f56
    JNZ 0x00442f12                      ; 00442f59
        ;   XREF to: 00442f12 (CONDITIONAL_JUMP)  ; LAB_00442f12
    LEA EAX,[ESP + 0x30]                ; 00442f5b
    PUSH EAX                            ; 00442f5f
    LEA EAX,[ESP + 0x24]                ; 00442f60
    PUSH EAX                            ; 00442f64
    LEA EAX,[ESP + 0x18]                ; 00442f65
    PUSH EAX                            ; 00442f69
    PUSH 0x619181                       ; 00442f6a | = "%f,%f,%f\n"
    MOV ESI,dword ptr [ESP + 0x78]      ; 00442f6f
    PUSH ESI                            ; 00442f73
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00442f74
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 00442f79
    CMP EAX,0x3                         ; 00442f7c
    JNZ 0x00442f12                      ; 00442f7f
        ;   XREF to: 00442f12 (CONDITIONAL_JUMP)  ; LAB_00442f12
    LEA EAX,[ESP + 0x34]                ; 00442f81
    PUSH EAX                            ; 00442f85
    LEA EAX,[ESP + 0x28]                ; 00442f86
    PUSH EAX                            ; 00442f8a
    LEA EAX,[ESP + 0x1c]                ; 00442f8b
    PUSH EAX                            ; 00442f8f
    PUSH 0x61918b                       ; 00442f90 | = "%f,%f,%f\n"
    PUSH ESI                            ; 00442f95
    CALL crt_stdio.c_fscanf_FUN_005fe7c0 ; 00442f96
        ;   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fscanf_FUN_005fe7c0(FILE * file, char * format)
    ADD ESP,0x14                        ; 00442f9b
    CMP EAX,0x3                         ; 00442f9e
    JNZ 0x00442f12                      ; 00442fa1
        ;   XREF to: 00442f12 (CONDITIONAL_JUMP)  ; LAB_00442f12
    PUSH 0x0                            ; 00442fa7
    LEA EAX,[ESP + 0xc]                 ; 00442fa9
    PUSH EAX                            ; 00442fad
    CALL core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690 ; 00442fae
        ;   XREF to: 005f6690 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690(CMatrix3x3f * matrix, int preserve_scale)
    ADD ESP,0x8                         ; 00442fb3
    MOV EAX,dword ptr [ESP + 0x14]      ; 00442fb6
    MOV dword ptr [ESP + 0x48],EAX      ; 00442fba
    MOV EAX,dword ptr [ESP + 0x24]      ; 00442fbe
    MOV dword ptr [ESP + 0x4c],EAX      ; 00442fc2
    MOV EAX,dword ptr [ESP + 0x34]      ; 00442fc6
    MOV dword ptr [ESP + 0x50],EAX      ; 00442fca
    LEA EAX,[EBX*0x4 + 0x0]             ; 00442fce
    MOV EDX,EAX                         ; 00442fd5
    SHL EAX,0x3                         ; 00442fd7
    SUB EAX,EDX                         ; 00442fda
    MOV EDX,dword ptr [EBP + 0x4]       ; 00442fdc
    ADD EDX,EAX                         ; 00442fdf
    LEA EAX,[ESP + 0x48]                ; 00442fe1
    CMP EDX,EAX                         ; 00442fe5
    JZ 0x00442ffd                       ; 00442fe7
        ;   XREF to: 00442ffd (CONDITIONAL_JUMP)  ; LAB_00442ffd
    MOV EAX,dword ptr [ESP + 0x14]      ; 00442fe9
    MOV dword ptr [EDX],EAX             ; 00442fed
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00442fef
    MOV dword ptr [EDX + 0x4],EAX       ; 00442ff3
    MOV EAX,dword ptr [ESP + 0x50]      ; 00442ff6
    MOV dword ptr [EDX + 0x8],EAX       ; 00442ffa
    LEA EAX,[ESP + 0x8]                 ; 00442ffd
        ;   Label: LAB_00442ffd
    PUSH EAX                            ; 00443001
    LEA ESI,[ESP + 0x3c]                ; 00443002
    CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420 ; 00443006
        ;   XREF to: 005f7420 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_matrixToQuaternion_FUN_005f7420(CMatrix3x3f * matrix_ptr, CQuaternion4f * quat_out)
    LEA EAX,[EBX*0x4 + 0x0]             ; 0044300b
    MOV EDX,EAX                         ; 00443012
    SHL EAX,0x3                         ; 00443014
    SUB EAX,EDX                         ; 00443017
    MOV EDX,dword ptr [EBP + 0x4]       ; 00443019
    LEA ESI,[ESP + 0x3c]                ; 0044301c
    LEA EDI,[EDX + EAX*0x1 + 0xc]       ; 00443020
    ADD ESP,0x4                         ; 00443024
    INC EBX                             ; 00443027
    MOVSD ES:EDI,ESI                    ; 00443028
    MOVSD ES:EDI,ESI                    ; 00443029
    MOVSD ES:EDI,ESI                    ; 0044302a
    MOVSD ES:EDI,ESI                    ; 0044302b
    POP ESI                             ; 0044302c
    POP EDI                             ; 0044302d
    CMP EBX,dword ptr [EBP]             ; 0044302e
    JL 0x00442ec4                       ; 00443031
        ;   XREF to: 00442ec4 (CONDITIONAL_JUMP)  ; LAB_00442ec4
    ADD ESP,0x50                        ; 00443037
    POP EBP                             ; 0044303a
    POP EBX                             ; 0044303b
    RET                                 ; 0044303c

