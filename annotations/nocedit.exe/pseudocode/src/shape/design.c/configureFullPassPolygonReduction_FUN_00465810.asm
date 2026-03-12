; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_configureFullPassPolygonReduction_FUN_00465810(int ui_mode)
;
; Parameters:
; int              Stack[0x4]:4   ui_mode
; Local Variables:
; byte[80]         Stack[-0x6c]:80  local_6c
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_polygonReducer_FUN_004654e0 at 0046553f
;
; Referenced Globals:
;   TerminatedCString s_Enter_tolerance_angle_8__0061c5b6
;   TerminatedCString s_Ignore_different_part_na_0061c5d5
;   int g_PolygonCount
;
; Called Functions:
;   crt_ctype.c_toupper_FUN_005ff9e0
;   crt_string.c__strtod_FUN_005ff0f3
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   shape_design.c_optimizePolygonMesh_FUN_004658e0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465810
        ;   Label: shape_design.c_configureFullPassPolygonReduction_FUN_00465810
    PUSH ESI                            ; 00465811
    PUSH EDI                            ; 00465812
    PUSH EBP                            ; 00465813
    MOV EBP,ESP                         ; 00465814
    SUB ESP,0x64                        ; 00465816
    MOV EAX,[0x016e990c]                ; 0046581c | g_PolygonCount
    MOV dword ptr [EBP + -0xc],EAX      ; 00465821
    MOV dword ptr [EBP + -0x8],0x0      ; 00465824
    CMP dword ptr [EBP + 0x14],0x0      ; 0046582b
    JLE 0x00465850                      ; 0046582f
        ;   XREF to: 00465850 (CONDITIONAL_JUMP)  ; LAB_00465850
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00465831
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV EAX,0x61c5b6                    ; 00465836 | = "Enter tolerance angle [8.5] : "
    PUSH EAX                            ; 0046583b | = "Enter tolerance angle [8.5] : "
    PUSH 0x0                            ; 0046583c
    PUSH 0x0                            ; 0046583e
    PUSH 0x14                           ; 00465840
    LEA EAX,[EBP + -0x5c]               ; 00465842
    PUSH EAX                            ; 00465845
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00465846
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046584b
    JMP 0x00465854                      ; 0046584e
        ;   XREF to: 00465854 (UNCONDITIONAL_JUMP)  ; LAB_00465854
    MOV byte ptr [EBP + -0x5c],0x0      ; 00465850
        ;   Label: LAB_00465850
    MOV dword ptr [EBP + -0x4],0x41080000 ; 00465854
        ;   Label: LAB_00465854
    LEA EDI,[EBP + -0x5c]               ; 0046585b
    SUB ECX,ECX                         ; 0046585e
    DEC ECX                             ; 00465860
    XOR EAX,EAX                         ; 00465861
    SCASB.REPNE ES:EDI                  ; 00465863
    NOT ECX                             ; 00465865
    DEC ECX                             ; 00465867
    TEST ECX,ECX                        ; 00465868
    JZ 0x00465884                       ; 0046586a
        ;   XREF to: 00465884 (CONDITIONAL_JUMP)  ; LAB_00465884
    LEA EAX,[EBP + -0x5c]               ; 0046586c
    PUSH EAX                            ; 0046586f
    CALL crt_string.c__strtod_FUN_005ff0f3 ; 00465870
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c__strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [EBP + -0x64],EAX     ; 00465875
    MOV dword ptr [EBP + -0x60],EDX     ; 00465878
    FLD double ptr [EBP + -0x64]        ; 0046587b
    ADD ESP,0x4                         ; 0046587e
    FSTP float ptr [EBP + -0x4]         ; 00465881
    CMP dword ptr [EBP + 0x14],0x0      ; 00465884
        ;   Label: LAB_00465884
    JLE 0x004658bc                      ; 00465888
        ;   XREF to: 004658bc (CONDITIONAL_JUMP)  ; LAB_004658bc
    MOV EAX,0x61c5d5                    ; 0046588a | = "Ignore different part names? [y] : "
    PUSH EAX                            ; 0046588f | = "Ignore different part names? [y] : "
    PUSH 0x16                           ; 00465890
    PUSH 0x0                            ; 00465892
    PUSH 0x14                           ; 00465894
    LEA EAX,[EBP + -0x5c]               ; 00465896
    PUSH EAX                            ; 00465899
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0046589a
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0046589f
    XOR EAX,EAX                         ; 004658a2
    MOV AL,byte ptr [EBP + -0x5c]       ; 004658a4
    PUSH EAX                            ; 004658a7
    CALL crt_ctype.c_toupper_FUN_005ff9e0 ; 004658a8
        ;   XREF to: 005ff9e0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_toupper_FUN_005ff9e0(int c)
    ADD ESP,0x4                         ; 004658ad
    CMP EAX,0x4e                        ; 004658b0
    JNZ 0x004658bc                      ; 004658b3
        ;   XREF to: 004658bc (CONDITIONAL_JUMP)  ; LAB_004658bc
    MOV dword ptr [EBP + -0x8],0x1      ; 004658b5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004658bc
        ;   Label: LAB_004658bc
    PUSH EAX                            ; 004658bf
    MOV EAX,dword ptr [EBP + -0x8]      ; 004658c0
    PUSH EAX                            ; 004658c3
    FLD float ptr [EBP + -0x4]          ; 004658c4
    SUB ESP,0x4                         ; 004658c7
    FSTP float ptr [ESP]                ; 004658ca
    CALL shape_design.c_optimizePolygonMesh_FUN_004658e0 ; 004658cd
        ;   XREF to: 004658e0 (UNCONDITIONAL_CALL)  ; void shape_design.c_optimizePolygonMesh_FUN_004658e0(float angle_tolerance, int strict_mode, int display_progress)
    ADD ESP,0xc                         ; 004658d2
    MOV ESP,EBP                         ; 004658d5
    POP EBP                             ; 004658d7
    POP EDI                             ; 004658d8
    POP ESI                             ; 004658d9
    POP EBX                             ; 004658da
    RET                                 ; 004658db

