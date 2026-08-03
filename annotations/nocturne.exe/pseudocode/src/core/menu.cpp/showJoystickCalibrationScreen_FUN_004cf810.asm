; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_menu_cpp_showJoystickCalibrationScreen_FUN_004cf810(char *instruction_text,char *message_text)
;
; Parameters:
; char *           Stack[0x4]:4   instruction_text
; char *           Stack[0x8]:4   message_text
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
;
; Referenced Globals:
;   TerminatedCString s_d_d_x_005884ec
;   CBitFont* g_CBitFont_PTR_014b98f8
;   undefined4 DAT_01c038f8
;   undefined4 DAT_01c038fc
;   undefined4 DAT_01c03908
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_drawText_FUN_00402600
;   engine_font.cpp_CBitFont_drawText_FUN_00490980
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0
;   engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf810
        ;   Label: core_menu.cpp_showJoystickCalibrationScreen_FUN_004cf810
    PUSH ESI                            ; 004cf811
    PUSH EDI                            ; 004cf812
    PUSH EBP                            ; 004cf813
    SUB ESP,0x100                       ; 004cf814
    MOV EDX,dword ptr [ESP + 0x114]     ; 004cf81a
    PUSH EDX                            ; 004cf821
    MOV ECX,dword ptr [0x014b98f8]      ; 004cf822 | g_CBitFont_PTR_014b98f8
    PUSH ECX                            ; 004cf828
    CALL engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0 ; 004cf829
        ;   XREF to: 00492da0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getTextWidth_FUN_00492da0(CBitFont * this_ptr, char * text)
    MOV EDX,EAX                         ; 004cf82e
    SAR EDX,0x1f                        ; 004cf830
    SUB EAX,EDX                         ; 004cf833
    SAR EAX,0x1                         ; 004cf835
    ADD ESP,0x8                         ; 004cf837
    PUSH 0x58                           ; 004cf83a
    MOV ESI,dword ptr [0x014b98f8]      ; 004cf83c | g_CBitFont_PTR_014b98f8
    MOV EBX,0x140                       ; 004cf842
    PUSH ESI                            ; 004cf847
    SUB EBX,EAX                         ; 004cf848
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0 ; 004cf84a
        ;   XREF to: 004930e0 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004930e0(CBitFont * this_ptr, int char_code)
    MOV EDX,EAX                         ; 004cf84f
    SAR EDX,0x1f                        ; 004cf851
    SUB EAX,EDX                         ; 004cf854
    SAR EAX,0x1                         ; 004cf856
    ADD ESP,0x8                         ; 004cf858
    PUSH 0x0                            ; 004cf85b
    MOV EDX,0xf0                        ; 004cf85d
    PUSH 0x7                            ; 004cf862
    SUB EDX,EAX                         ; 004cf864
    PUSH EDX                            ; 004cf866
    PUSH EBX                            ; 004cf867
    MOV EDI,dword ptr [ESP + 0x124]     ; 004cf868
    PUSH EDI                            ; 004cf86f
    MOV EBP,dword ptr [0x014b98f8]      ; 004cf870 | g_CBitFont_PTR_014b98f8
    PUSH EBP                            ; 004cf876
    CALL engine_font.cpp_CBitFont_drawText_FUN_00490980 ; 004cf877
        ;   XREF to: 00490980 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_drawText_FUN_00490980(CBitFont * this_ptr, char * text, int x, int y, ...)
    ADD ESP,0x18                        ; 004cf87c
    MOV EAX,[0x01c03908]                ; 004cf87f | DAT_01c03908
    PUSH EAX                            ; 004cf884
    MOV EDX,dword ptr [0x01c038fc]      ; 004cf885 | DAT_01c038fc
    PUSH EDX                            ; 004cf88b
    MOV ECX,dword ptr [0x01c038f8]      ; 004cf88c | DAT_01c038f8
    PUSH ECX                            ; 004cf892
    PUSH 0x5884ec                       ; 004cf893 | = "%d,%d,%x"
    LEA EAX,[ESP + 0x10]                ; 004cf898
    PUSH EAX                            ; 004cf89c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004cf89d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x14                        ; 004cf8a2
    PUSH 0x0                            ; 004cf8a5
    PUSH 0x0                            ; 004cf8a7
    LEA EAX,[ESP + 0x8]                 ; 004cf8a9
    PUSH EAX                            ; 004cf8ad
    CALL engine_2d.c_drawText_FUN_00402600 ; 004cf8ae
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004cf8b3
    ADD ESP,0x100                       ; 004cf8b6
    POP EBP                             ; 004cf8bc
    POP EDI                             ; 004cf8bd
    POP ESI                             ; 004cf8be
    POP EBX                             ; 004cf8bf
    RET                                 ; 004cf8c0

