; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setutil_cpp_C3DSLight_exportS3D_FUN_00587850(C3DSLight *this_ptr,_FILE *file_handle)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined8       Stack[-0x3c]:8  local_3c
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_exportLightsAndCameras_FUN_0057a0c0 at 0057a1aa
;
; Referenced Globals:
;   TerminatedCString s_s_d_g_g_g_g_g_g_00649a2d
;   TerminatedCString s_g_g_g_00649a48
;   TerminatedCString s_g_g_00649a53
;   TerminatedCString s_core_setutil_cpp_00649a5b
;   TerminatedCString s_Unknown_light_type_00649a6f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587850
        ;   Label: core_setutil.cpp_C3DSLight_exportS3D_FUN_00587850
    PUSH ESI                            ; 00587851
    PUSH EBP                            ; 00587852
    MOV EBX,dword ptr [ESP + 0x10]      ; 00587853
    MOV ESI,dword ptr [ESP + 0x14]      ; 00587857
    SUB ESP,0x8                         ; 0058785b
    FLD float ptr [EBX + 0x11cc]        ; 0058785e
    FSTP double ptr [ESP]               ; 00587864
    SUB ESP,0x8                         ; 00587867
    FLD float ptr [EBX + 0x11c8]        ; 0058786a
    FSTP double ptr [ESP]               ; 00587870
    SUB ESP,0x8                         ; 00587873
    FLD float ptr [EBX + 0x11c4]        ; 00587876
    FSTP double ptr [ESP]               ; 0058787c
    SUB ESP,0x8                         ; 0058787f
    FLD float ptr [EBX + 0x10c]         ; 00587882
    FSTP double ptr [ESP]               ; 00587888
    SUB ESP,0x8                         ; 0058788b
    FLD float ptr [EBX + 0x108]         ; 0058788e
    FSTP double ptr [ESP]               ; 00587894
    SUB ESP,0x8                         ; 00587897
    FLD float ptr [EBX + 0x104]         ; 0058789a
    FSTP double ptr [ESP]               ; 005878a0
    MOV EDX,dword ptr [EBX]             ; 005878a3
    PUSH EDX                            ; 005878a5
    LEA EAX,[EBX + 0x4]                 ; 005878a6
    PUSH EAX                            ; 005878a9
    PUSH 0x649a2d                       ; 005878aa | = "\"%s\",%d,%g,%g,%g,%g,%g,%g "
    PUSH ESI                            ; 005878af
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005878b0
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    MOV ECX,dword ptr [EBX]             ; 005878b5
    ADD ESP,0x40                        ; 005878b7
    TEST ECX,ECX                        ; 005878ba
    JZ 0x005878ed                       ; 005878bc
        ;   XREF to: 005878ed (CONDITIONAL_JUMP)  ; LAB_005878ed
    CMP ECX,0x1                         ; 005878be
    JNZ 0x00587923                      ; 005878c1
        ;   XREF to: 00587923 (CONDITIONAL_JUMP)  ; LAB_00587923
    SUB ESP,0x8                         ; 005878c3
    FLD float ptr [EBX + 0x11d4]        ; 005878c6
    FSTP double ptr [ESP]               ; 005878cc
    SUB ESP,0x8                         ; 005878cf
    FLD float ptr [EBX + 0x11d0]        ; 005878d2
    FSTP double ptr [ESP]               ; 005878d8
    PUSH 0x649a53                       ; 005878db | = ",%g,%g\n"
    PUSH ESI                            ; 005878e0
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 005878e1
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 005878e6
    POP EBP                             ; 005878e9
    POP ESI                             ; 005878ea
    POP EBX                             ; 005878eb
    RET                                 ; 005878ec
    SUB ESP,0x8                         ; 005878ed
        ;   Label: LAB_005878ed
    FLD float ptr [EBX + 0x114]         ; 005878f0
    FSTP double ptr [ESP]               ; 005878f6
    SUB ESP,0x8                         ; 005878f9
    FLD float ptr [EBX + 0x118]         ; 005878fc
    FSTP double ptr [ESP]               ; 00587902
    SUB ESP,0x8                         ; 00587905
    FLD float ptr [EBX + 0x110]         ; 00587908
    FSTP double ptr [ESP]               ; 0058790e
    PUSH 0x649a48                       ; 00587911 | = ",%g,%g,%g\n"
    PUSH ESI                            ; 00587916
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00587917
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x20                        ; 0058791c
    POP EBP                             ; 0058791f
    POP ESI                             ; 00587920
    POP EBX                             ; 00587921
    RET                                 ; 00587922
    MOV EBP,0x649a5b                    ; 00587923 | = "..\\core\\setutil.cpp"
        ;   Label: LAB_00587923
    MOV EAX,0x4c5                       ; 00587928
    PUSH 0x649a6f                       ; 0058792d | = "Unknown light type!"
    MOV dword ptr [0x02f0ca48],EBP      ; 00587932 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 00587938 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058793d
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00587942
    POP EBP                             ; 00587945
    POP ESI                             ; 00587946
    POP EBX                             ; 00587947
    RET                                 ; 00587948

