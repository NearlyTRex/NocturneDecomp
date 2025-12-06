; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_calculateGridHeight_FUN_004a64b0(void)
;
;
; XREF[3]:
;   core_script.cpp_CScript_unk50_FUN_00566660 at 005666fa
;   shape_edittool.cpp_CPickList_calculateLayoutAndCreateComponents_FUN_004a45d0 at 004a4914
;   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 at 004a4e02
;
; Referenced Globals:
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;
; Called Functions:
;   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
;
; *****************************************************************************

section .text

    CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490 ; 004a64b0 | int shape_edittool.cpp_calculateGridWidth_FUN_004a6490()
        ;   Label: shape_edittool.cpp_calculateGridHeight_FUN_004a64b0
        ;   XREF to: 004a6490 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x00679398]      ; 004a64b5 | int g_WindowHeight
    IMUL EDX,EAX                        ; 004a64bb
    MOV ECX,dword ptr [0x00679394]      ; 004a64be | int g_WindowWidth
    MOV EAX,EDX                         ; 004a64c4
    SAR EDX,0x1f                        ; 004a64c6
    IDIV ECX                            ; 004a64c9
    LEA EDX,[EAX*0x4 + 0x0]             ; 004a64cb
    MOV ECX,0x3                         ; 004a64d2
    MOV EAX,EDX                         ; 004a64d7
    SAR EDX,0x1f                        ; 004a64d9
    IDIV ECX                            ; 004a64dc
    RET                                 ; 004a64de

