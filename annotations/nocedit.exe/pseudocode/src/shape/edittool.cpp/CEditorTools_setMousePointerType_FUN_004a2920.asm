; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920(CEditorTools * this_ptr, int cursor_type, int width, int height)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   cursor_type
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
;
; XREF[3]:
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e42b
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 005399a0
;   core_script.cpp_FUN_00566bc0 at 00566c06
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0062362e
;   TerminatedCString s_CEditorTools_setMousePoi_00623644
;   int g_CursorSizeHorizontal = 0x9
;   int g_CursorSizeVertical = 0x9
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   int g_MouseCursorType
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2920
        ;   Label: shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a2920
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a2921
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a2925
    MOV dword ptr [0x02cf2670],EDX      ; 004a2929 | int g_MouseCursorType
    CMP EDX,0x1                         ; 004a292f
    JNC 0x004a29d6                      ; 004a2932 | LAB_004a29d6
        ;   XREF to: 004a29d6 (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 004a2938
    JNZ 0x004a29e1                      ; 004a293a | LAB_004a29e1
        ;   XREF to: 004a29e1 (CONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x10],0x0      ; 004a2940
        ;   Label: LAB_004a2940
    JLE 0x004a296e                      ; 004a2945 | LAB_004a296e
        ;   XREF to: 004a296e (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a2947
        ;   Label: LAB_004a2947
    JLE 0x004a2978                      ; 004a2949 | LAB_004a2978
        ;   XREF to: 004a2978 (CONDITIONAL_JUMP)
    TEST byte ptr [ESP + 0x10],0x1      ; 004a294b
        ;   Label: LAB_004a294b
    JNZ 0x004a2956                      ; 004a2950 | LAB_004a2956
        ;   XREF to: 004a2956 (CONDITIONAL_JUMP)
    INC dword ptr [ESP + 0x10]          ; 004a2952
    TEST BL,0x1                         ; 004a2956
        ;   Label: LAB_004a2956
    JNZ 0x004a295c                      ; 004a2959 | LAB_004a295c
        ;   XREF to: 004a295c (CONDITIONAL_JUMP)
    INC EBX                             ; 004a295b
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a295c
        ;   Label: LAB_004a295c
    MOV dword ptr [0x00678a64],EBX      ; 004a2960 | int g_CursorSizeHorizontal
    MOV dword ptr [0x00678a68],EDX      ; 004a2966 | int g_CursorSizeVertical
    POP EBX                             ; 004a296c
    RET                                 ; 004a296d
    MOV dword ptr [ESP + 0x10],0xb      ; 004a296e
        ;   Label: LAB_004a296e
    JMP 0x004a2947                      ; 004a2976 | LAB_004a2947
        ;   XREF to: 004a2947 (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a2978
        ;   Label: LAB_004a2978
    IMUL EBX,dword ptr [0x00679394]     ; 004a297c | int g_WindowWidth
    LEA EDX,[EBX*0x4 + 0x0]             ; 004a2983
    SUB EDX,EBX                         ; 004a298a
    MOV ECX,dword ptr [0x00679398]      ; 004a298c | int g_WindowHeight
    MOV EAX,EDX                         ; 004a2992
    SAR EDX,0x1f                        ; 004a2994
    IDIV ECX                            ; 004a2997
    MOV EDX,EAX                         ; 004a2999
    SAR EDX,0x1f                        ; 004a299b
    SHL EDX,0x2                         ; 004a299e
    SBB EAX,EDX                         ; 004a29a1
    SAR EAX,0x2                         ; 004a29a3
    MOV EBX,EAX                         ; 004a29a6
    JMP 0x004a294b                      ; 004a29a8 | LAB_004a294b
        ;   XREF to: 004a294b (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP + 0x10],0x0      ; 004a29aa
        ;   Label: LAB_004a29aa
    JLE 0x004a29b7                      ; 004a29af | LAB_004a29b7
        ;   XREF to: 004a29b7 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004a29b1
    JLE 0x004a29c5                      ; 004a29b3 | LAB_004a29c5
        ;   XREF to: 004a29c5 (CONDITIONAL_JUMP)
    JMP 0x004a2956                      ; 004a29b5 | LAB_004a2956
        ;   XREF to: 004a2956 (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x10],0xb      ; 004a29b7
        ;   Label: LAB_004a29b7
    TEST EBX,EBX                        ; 004a29bf
    JLE 0x004a29c5                      ; 004a29c1 | LAB_004a29c5
        ;   XREF to: 004a29c5 (CONDITIONAL_JUMP)
    JMP 0x004a2956                      ; 004a29c3 | LAB_004a2956
        ;   XREF to: 004a2956 (UNCONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a29c5
        ;   Label: LAB_004a29c5
    MOV EDX,EAX                         ; 004a29c9
    SAR EDX,0x1f                        ; 004a29cb
    SUB EAX,EDX                         ; 004a29ce
    SAR EAX,0x1                         ; 004a29d0
    MOV EBX,EAX                         ; 004a29d2
    JMP 0x004a2956                      ; 004a29d4 | LAB_004a2956
        ;   XREF to: 004a2956 (UNCONDITIONAL_JUMP)
    JBE 0x004a29aa                      ; 004a29d6 | LAB_004a29aa
        ;   Label: LAB_004a29d6
        ;   XREF to: 004a29aa (CONDITIONAL_JUMP)
    CMP EDX,0x2                         ; 004a29d8
    JZ 0x004a2940                       ; 004a29db | LAB_004a2940
        ;   XREF to: 004a2940 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004a29e1
        ;   Label: LAB_004a29e1
    PUSH ESI                            ; 004a29e2
    MOV ESI,0x62362e                    ; 004a29e3 | = "..\\shape\\edittool.cpp" | s_shape_edittool_cpp_0062362e = ..\shape\edittool.cpp
    MOV EDI,0xab3                       ; 004a29e8
    PUSH 0x623644                       ; 004a29ed | = "CEditorTools::setMousePointerType - i..." | s_CEditorTools_setMousePoi_00623644 = CEditorTools::setMousePointerType - invalid type!
    MOV dword ptr [0x02f0ca48],ESI      ; 004a29f2 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004a29f8 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004a29fe | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a2a03
    POP ESI                             ; 004a2a06
    POP EDI                             ; 004a2a07
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a2a08
    MOV dword ptr [0x00678a64],EBX      ; 004a2a0c | int g_CursorSizeHorizontal
    MOV dword ptr [0x00678a68],EDX      ; 004a2a12 | int g_CursorSizeVertical
    POP EBX                             ; 004a2a18
    RET                                 ; 004a2a19

